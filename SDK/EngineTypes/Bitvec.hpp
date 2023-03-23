#pragma once


#define BITS_PER_INT		32
#define BitVec_Bit( bitNum ) ( 1 << ( (bitNum) & (BITS_PER_INT-1) ) )
#define BitVec_BitInByte( bitNum ) ( 1 << ( (bitNum) & 7 ) )
#define LOG2_BITS_PER_INT	5
#define BitVec_Int( bitNum ) ( (bitNum) >> LOG2_BITS_PER_INT )
#define PAD_NUMBER(number, boundary) \
(((number) + ((boundary)-1)) / (boundary) ) * (boundary)

template <int bits> struct BitCountToEndMask_t { };
template <> struct BitCountToEndMask_t< 0> { enum { MASK = 0xffffffff }; };
template <> struct BitCountToEndMask_t< 1> { enum { MASK = 0x00000001 }; };
template <> struct BitCountToEndMask_t< 2> { enum { MASK = 0x00000003 }; };
template <> struct BitCountToEndMask_t< 3> { enum { MASK = 0x00000007 }; };
template <> struct BitCountToEndMask_t< 4> { enum { MASK = 0x0000000f }; };
template <> struct BitCountToEndMask_t< 5> { enum { MASK = 0x0000001f }; };
template <> struct BitCountToEndMask_t< 6> { enum { MASK = 0x0000003f }; };
template <> struct BitCountToEndMask_t< 7> { enum { MASK = 0x0000007f }; };
template <> struct BitCountToEndMask_t< 8> { enum { MASK = 0x000000ff }; };
template <> struct BitCountToEndMask_t< 9> { enum { MASK = 0x000001ff }; };
template <> struct BitCountToEndMask_t<10> { enum { MASK = 0x000003ff }; };
template <> struct BitCountToEndMask_t<11> { enum { MASK = 0x000007ff }; };
template <> struct BitCountToEndMask_t<12> { enum { MASK = 0x00000fff }; };
template <> struct BitCountToEndMask_t<13> { enum { MASK = 0x00001fff }; };
template <> struct BitCountToEndMask_t<14> { enum { MASK = 0x00003fff }; };
template <> struct BitCountToEndMask_t<15> { enum { MASK = 0x00007fff }; };
template <> struct BitCountToEndMask_t<16> { enum { MASK = 0x0000ffff }; };
template <> struct BitCountToEndMask_t<17> { enum { MASK = 0x0001ffff }; };
template <> struct BitCountToEndMask_t<18> { enum { MASK = 0x0003ffff }; };
template <> struct BitCountToEndMask_t<19> { enum { MASK = 0x0007ffff }; };
template <> struct BitCountToEndMask_t<20> { enum { MASK = 0x000fffff }; };
template <> struct BitCountToEndMask_t<21> { enum { MASK = 0x001fffff }; };
template <> struct BitCountToEndMask_t<22> { enum { MASK = 0x003fffff }; };
template <> struct BitCountToEndMask_t<23> { enum { MASK = 0x007fffff }; };
template <> struct BitCountToEndMask_t<24> { enum { MASK = 0x00ffffff }; };
template <> struct BitCountToEndMask_t<25> { enum { MASK = 0x01ffffff }; };
template <> struct BitCountToEndMask_t<26> { enum { MASK = 0x03ffffff }; };
template <> struct BitCountToEndMask_t<27> { enum { MASK = 0x07ffffff }; };
template <> struct BitCountToEndMask_t<28> { enum { MASK = 0x0fffffff }; };
template <> struct BitCountToEndMask_t<29> { enum { MASK = 0x1fffffff }; };
template <> struct BitCountToEndMask_t<30> { enum { MASK = 0x3fffffff }; };
template <> struct BitCountToEndMask_t<31> { enum { MASK = 0x7fffffff }; };

inline unsigned GetStartBitMask(int startBit)
{
	unsigned int g_StartMask[32] =
	{
		0xffffffff,
		0xfffffffe,
		0xfffffffc,
		0xfffffff8,
		0xfffffff0,
		0xffffffe0,
		0xffffffc0,
		0xffffff80,
		0xffffff00,
		0xfffffe00,
		0xfffffc00,
		0xfffff800,
		0xfffff000,
		0xffffe000,
		0xffffc000,
		0xffff8000,
		0xffff0000,
		0xfffe0000,
		0xfffc0000,
		0xfff80000,
		0xfff00000,
		0xffe00000,
		0xffc00000,
		0xff800000,
		0xff000000,
		0xfe000000,
		0xfc000000,
		0xf8000000,
		0xf0000000,
		0xe0000000,
		0xc0000000,
		0x80000000,
	};

	return g_StartMask[startBit & 31];
}

template <int NUM_BITS>
class CFixedBitVecBase
{
public:
	bool	IsFixedSize() const { return true; }
	int		GetNumBits(void) const { return NUM_BITS; }
	void	Resize(int numBits, bool bClearAll = false) { if (bClearAll) Plat_FastMemset(m_Ints, 0, NUM_INTS * sizeof(std::uint32_t)); }
	int 	GetNumDWords() const { return NUM_INTS; }
	std::uint32_t* Base() { return m_Ints; }
	const std::uint32_t* Base() const { return m_Ints; }
	int		FindNextSetBit(int startBit) const // returns -1 if no set bit was found
	{
		if (startBit < NUM_BITS)
		{
			int wordIndex = BitVec_Int(startBit);
			unsigned int startMask = GetStartBitMask(startBit);

			// handle non dword lengths
			if ((NUM_BITS % BITS_PER_INT) != 0)
			{
				unsigned int elem = Base()[wordIndex];
				elem &= startMask;
				if (wordIndex == NUM_INTS - 1)
				{
					elem &= (GetEndMask());
					// there's a bit remaining in this word
					if (elem)
						return FirstBitInWord(elem, wordIndex << 5);
				}
				else
				{
					// there's a bit remaining in this word
					if (elem)
						return FirstBitInWord(elem, wordIndex << 5);

					// iterate the words
					for (int i = wordIndex + 1; i < NUM_INTS - 1; i++)
					{
						elem = Base()[i];
						if (elem)
							return FirstBitInWord(elem, i << 5);
					}
					elem = Base()[NUM_INTS - 1] & GetEndMask();
					if (elem)
						return FirstBitInWord(elem, (NUM_INTS - 1) << 5);
				}
			}
			else
			{
				const std::uint32_t* __restrict pCurElem = Base() + wordIndex;
				unsigned int elem = *pCurElem;
				elem &= startMask;
				do
				{
					if (elem)
						return FirstBitInWord(elem, wordIndex << 5);
					++pCurElem;
					elem = *pCurElem;
					++wordIndex;
				} while (wordIndex <= NUM_INTS - 1);
			}

		}

		return -1;
	}

protected:
	CFixedBitVecBase() {}
	CFixedBitVecBase(int numBits) {} 
	void 		ValidateOperand(const CFixedBitVecBase<NUM_BITS>& operand) const { }

public: // for test code
	unsigned	GetEndMask() const { return static_cast<unsigned>(BitCountToEndMask_t<NUM_BITS% BITS_PER_INT>::MASK); }

private:
	enum
	{
		NUM_INTS = (NUM_BITS + (BITS_PER_INT - 1)) / BITS_PER_INT
	};

	std::uint32_t m_Ints[(NUM_BITS + (BITS_PER_INT - 1)) / BITS_PER_INT];
};

class CBitVecAccessor
{
public:
	CBitVecAccessor(std::uint32_t* pDWords, int iBit)
	{
		m_pDWords = pDWords;
		m_iBit = iBit;
	}

	void operator=(int val)
	{
		if (val)
			m_pDWords[m_iBit >> 5] |= (1 << (m_iBit & 31));
		else
			m_pDWords[m_iBit >> 5] &= ~(unsigned long)(1 << (m_iBit & 31));
	}

	operator std::uint32_t()
	{
		return m_pDWords[m_iBit >> 5] & (1 << (m_iBit & 31));
	}

private:
	std::uint32_t* m_pDWords;
	int	m_iBit;
};

template <class BASE_OPS>
class CBitVecT : public BASE_OPS
{
public:
	CBitVecT()
	{
		ClearAll();
	}

	CBitVecT(int numBits) : BASE_OPS(numBits)
	{
		ClearAll();
	}

	void Init(int val = 0)
	{
		if (this->Base())
			Plat_FastMemset(this->Base(), (val) ? 0xff : 0, this->GetNumDWords() * sizeof(int));
	}

	CBitVecAccessor	operator[](int i)
	{
		return CBitVecAccessor(this->Base(), i);
	}

	void And(const CBitVecT& andStr, CBitVecT* out) const
	{
		this->ValidateOperand(andStr);
		this->ValidateOperand(*out);
		std::uint32_t* pDest = out->Base();
		const std::uint32_t* pOperand1 = this->Base();
		const std::uint32_t* pOperand2 = andStr.Base();
		for (int i = this->GetNumDWords() - 1; i >= 0; --i)
		{
			pDest[i] = pOperand1[i] & pOperand2[i];
		}
	}

	void Or(const CBitVecT& orStr, CBitVecT* out) const
	{
		this->ValidateOperand(orStr);
		this->ValidateOperand(*out);
		std::uint32_t* pDest = out->Base();
		const std::uint32_t* pOperand1 = this->Base();
		const std::uint32_t* pOperand2 = orStr.Base();
		for (int i = this->GetNumDWords() - 1; i >= 0; --i)
		{
			pDest[i] = pOperand1[i] | pOperand2[i];
		}
	}

	void Xor(const CBitVecT& xorStr, CBitVecT* out) const
	{
		std::uint32_t* pDest = out->Base();
		const std::uint32_t* pOperand1 = this->Base();
		const std::uint32_t* pOperand2 = xorStr.Base();

		for (int i = this->GetNumDWords() - 1; i >= 0; --i)
		{
			pDest[i] = pOperand1[i] ^ pOperand2[i];
		}
	}

	void Not(CBitVecT* out) const
	{
		this->ValidateOperand(*out);

		std::uint32_t* pDest = out->Base();
		const std::uint32_t* pOperand = this->Base();

		for (int i = this->GetNumDWords() - 1; i >= 0; --i)
		{
			pDest[i] = ~(pOperand[i]);
		}
	}

	void CopyTo(CBitVecT* out) const
	{
		out->Resize(this->GetNumBits());

		this->ValidateOperand(*out);

		std::memcpy(out->Base(), this->Base(), this->GetNumDWords() * sizeof(int));
	}

	void Copy(const CBitVecT<BASE_OPS>& other, int nBits = -1)
	{
		if (nBits == -1)
		{
			nBits = other.GetNumBits();
		}

		this->Resize(nBits);

		this->ValidateOperand(other);

		memcpy(this->Base(), other.Base(), this->GetNumDWords() * sizeof(std::uint32_t));
	}

	bool Compare(const CBitVecT<BASE_OPS>& other, int nBits = -1) const
	{
		if (nBits == -1)
		{
			if (other.GetNumBits() != this->GetNumBits())
			{
				return false;
			}

			nBits = other.GetNumBits();
		}

		if (nBits > other.GetNumBits() || nBits > this->GetNumBits())
		{
			return false;
		}

		(const_cast<CBitVecT*>(this))->Base()[this->GetNumDWords() - 1] &= CBitVecT<BASE_OPS>::GetEndMask();
		(const_cast<CBitVecT*>(&other))->Base()[this->GetNumDWords() - 1] &= other.CBitVecT<BASE_OPS>::GetEndMask();

		int nBytes = PAD_NUMBER(nBits, 8) >> 3;

		return (std::memcmp(this->Base(), other.Base(), nBytes) == 0);
	}

	bool IsAllClear(void) const
	{
		(const_cast<CBitVecT*>(this))->Base()[this->GetNumDWords() - 1] &= CBitVecT<BASE_OPS>::GetEndMask();
		for (int i = this->GetNumDWords() - 1; i >= 0; --i)
		{
			if (this->Base()[i] != 0)
			{
				return false;
			}
		}
		return true;
	}

	bool IsAllSet(void) const
	{
		(const_cast<CBitVecT*>(this))->Base()[this->GetNumDWords() - 1] |= ~CBitVecT<BASE_OPS>::GetEndMask();  // external semantics of const retained

		for (int i = this->GetNumDWords() - 1; i >= 0; --i)
		{
			if (this->Base()[i] != ~0)
			{
				return false;
			}
		}
		return true;
	}

	std::uint32_t Get(std::uint32_t bitNum) const
	{
		const std::uint32_t* pInt = this->Base() + BitVec_Int(bitNum);
		return (*pInt & BitVec_Bit(bitNum));
	}

	bool IsBitSet(int bitNum) const
	{
		const std::uint32_t* pInt = this->Base() + BitVec_Int(bitNum);
		return ((*pInt & BitVec_Bit(bitNum)) != 0);
	}

	void Set(int bitNum)
	{
		std::uint32_t* pInt = this->Base() + BitVec_Int(bitNum);
		*pInt |= BitVec_Bit(bitNum);
	}

	void Set(int bitNum, bool bNewVal)
	{
		std::uint32_t* pInt = this->Base() + BitVec_Int(bitNum);
		std::uint32_t bitMask = BitVec_Bit(bitNum);
		if (bNewVal)
		{
			*pInt |= bitMask;
		}
		else
		{
			*pInt &= ~bitMask;
		}
	}

	void Clear(int bitNum)
	{
		std::uint32_t* pInt = this->Base() + BitVec_Int(bitNum);
		*pInt &= ~BitVec_Bit(bitNum);
	}

	bool TestAndSet(int bitNum)
	{
		std::uint32_t bitVecBit = BitVec_Bit(bitNum);
		std::uint32_t* pInt = this->Base() + BitVec_Int(bitNum);
		bool bResult = ((*pInt & bitVecBit) != 0);
		*pInt |= bitVecBit;
		return bResult;
	}

	void Set(std::uint32_t offset, std::uint32_t mask)
	{
		std::uint32_t* pInt = this->Base() + offset;
		*pInt |= mask;
	}

	void Clear(std::uint32_t offset, std::uint32_t mask)
	{
		std::uint32_t* pInt = this->Base() + offset;
		*pInt &= ~mask;
	}

	std::uint32_t Get(std::uint32_t offset, std::uint32_t mask)
	{
		std::uint32_t* pInt = this->Base() + offset;
		return (*pInt & mask);
	}

	void SetAll(void)
	{
		if (this->Base())
			std::memset(this->Base(), 0xff, this->GetNumDWords() * sizeof(int));
	}

	void ClearAll(void)
	{
		if (this->Base())
			std::memset(this->Base(), 0, this->GetNumDWords() * sizeof(int));
	}

	std::uint32_t GetDWord(int i) const
	{
		return this->Base()[i];
	}

	void SetDWord(int i, std::uint32_t val)
	{
		this->Base()[i] = val;
	}

	CBitVecT<BASE_OPS>& operator=(const CBitVecT<BASE_OPS>& other) { other.CopyTo(this); return *this; }
	bool			operator==(const CBitVecT<BASE_OPS>& other) { return Compare(other); }
	bool			operator!=(const CBitVecT<BASE_OPS>& other) { return !operator==(other); }

	static void GetOffsetMaskForBit(std::uint32_t bitNum, std::uint32_t* pOffset, std::uint32_t* pMask) { *pOffset = BitVec_Int(bitNum); *pMask = BitVec_Bit(bitNum); }
};

template < int NUM_BITS >
class CBitVec : public CBitVecT< CFixedBitVecBase<NUM_BITS> >
{
public:
	CBitVec()
	{
	}
	CBitVec(int numBits)
		: CBitVecT< CFixedBitVecBase<NUM_BITS> >(numBits)
	{
	}
};
