#pragma once

#include "SDK.hpp"

class CParticleFunction /* "particles" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CParticleCollectionFloatInput m_flOpStrength; // 0x8 - 0x160
   ParticleEndcapMode_t m_nOpEndCapState; // 0x160 - 0x164
   float m_flOpStartFadeInTime; // 0x164 - 0x168
   float m_flOpEndFadeInTime; // 0x168 - 0x16C
   float m_flOpStartFadeOutTime; // 0x16C - 0x170
   float m_flOpEndFadeOutTime; // 0x170 - 0x174
   float m_flOpFadeOscillatePeriod; // 0x174 - 0x178
   bool m_bNormalizeToStopTime; // 0x178 - 0x179
   unsigned char pad_179[0x3]; // 0x179 - 0x17C
   float m_flOpTimeOffsetMin; // 0x17C - 0x180
   float m_flOpTimeOffsetMax; // 0x180 - 0x184
   int32_t m_nOpTimeOffsetSeed; // 0x184 - 0x188
   int32_t m_nOpTimeScaleSeed; // 0x188 - 0x18C
   float m_flOpTimeScaleMin; // 0x18C - 0x190
   float m_flOpTimeScaleMax; // 0x190 - 0x194
   unsigned char pad_194[0x2]; // 0x194 - 0x196
   bool m_bDisableOperator; // 0x196 - 0x197
   unsigned char pad_197[0x1]; // 0x197 - 0x198
   CUtlString m_Notes; // 0x198 - 0x1A0
   unsigned char pad_1A0[0x18]; // 0x1A0 - 0x1B8
}; // size - 0x1B8


class CParticleFunctionOperator /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   unsigned char pad_0[0x1B8]; // 0x0 - 0x1B8
}; // size - 0x1B8


class CParticleFunctionInitializer /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   int32_t m_nAssociatedEmitterIndex; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class CPulseCell_Base /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   PulseDocNodeID_t m_nEditorNodeID; // 0x8 - 0xC
   unsigned char pad_C[0x3C]; // 0xC - 0x48
}; // size - 0x48


class CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CAnimNodePath m_nodePath; // 0x18 - 0x48
   AnimNodeNetworkMode m_networkMode; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
   CUtlString m_name; // 0x50 - 0x58
}; // size - 0x58


class CPulseCell_BaseFlow /* "pulse_runtime_lib" */ : public CPulseCell_Base /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CParticleFunctionPreEmission /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bRunOnce; // 0x1B8 - 0x1B9
   unsigned char pad_1B9[0x7]; // 0x1B9 - 0x1C0
}; // size - 0x1C0



class CParticleFunctionRenderer /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   CParticleVisibilityInputs VisibilityInputs; // 0x1B8 - 0x200
   bool m_bCannotBeRefracted; // 0x200 - 0x201
   bool m_bSkipRenderingOnMobile; // 0x201 - 0x202
   unsigned char pad_202[0x6]; // 0x202 - 0x208
}; // size - 0x208


class CUnaryUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   CAnimUpdateNodeRef m_pChildNode; // 0x58 - 0x68
}; // size - 0x68



class CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CParticleFunctionForce /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   unsigned char pad_0[0x1C8]; // 0x0 - 0x1C8
}; // size - 0x1C8


class EventSimulate_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   bool m_bFirstTick; // 0x28 - 0x29
   bool m_bLastTick; // 0x29 - 0x2A
   unsigned char pad_2A[0x6]; // 0x2A - 0x30
}; // size - 0x30


class CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CGlobalSymbol m_name; // 0x18 - 0x20
   CUtlString m_sComment; // 0x20 - 0x28
   CGlobalSymbol m_group; // 0x28 - 0x30
   AnimTagID m_tagID; // 0x30 - 0x34
   unsigned char pad_34[0x14]; // 0x34 - 0x48
   bool m_bIsReferenced; // 0x48 - 0x49
   unsigned char pad_49[0x7]; // 0x49 - 0x50
}; // size - 0x50


class CBoneConstraintBase /* "modellib" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
}; // size - 0x28


class CParticleInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
}; // size - 0x10


class CParticleFunctionConstraint /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   unsigned char pad_0[0x1B8]; // 0x0 - 0x1B8
}; // size - 0x1B8


class CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CUtlVector< float32 > m_means; // 0x18 - 0x30
   CUtlVector< float32 > m_standardDeviations; // 0x30 - 0x48
   float m_flWeight; // 0x48 - 0x4C
   int32_t m_nDimensionStartIndex; // 0x4C - 0x50
}; // size - 0x50


class CAnimParameterBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CGlobalSymbol m_name; // 0x18 - 0x20
   CUtlString m_sComment; // 0x20 - 0x28
   CUtlString m_group; // 0x28 - 0x30
   AnimParamID m_id; // 0x30 - 0x34
   unsigned char pad_34[0x14]; // 0x34 - 0x48
   CUtlString m_componentName; // 0x48 - 0x50
   unsigned char pad_50[0x18]; // 0x50 - 0x68
   bool m_bNetworkingRequested; // 0x68 - 0x69
   bool m_bIsReferenced; // 0x69 - 0x6A
   unsigned char pad_6A[0x6]; // 0x6A - 0x70
}; // size - 0x70


class CLeafUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CAnimComponentUpdater /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CUtlString m_name; // 0x18 - 0x20
   AnimComponentID m_id; // 0x20 - 0x24
   AnimNodeNetworkMode m_networkMode; // 0x24 - 0x28
   bool m_bStartEnabled; // 0x28 - 0x29
   unsigned char pad_29[0x7]; // 0x29 - 0x30
}; // size - 0x30


class CModelConfigElement /* "modellib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlString m_ElementName; // 0x8 - 0x10
   CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10 - 0x28
   unsigned char pad_28[0x20]; // 0x28 - 0x48
}; // size - 0x48


class CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
   CVSound m_vSound; // 0x20 - 0xA0
   unsigned char pad_A0[0x30]; // 0xA0 - 0xD0
   bool m_bHideAnalyzers; // 0xD0 - 0xD1
   unsigned char pad_D1[0x7]; // 0xD1 - 0xD8
   CUtlVector< CVoiceContainerAnalysisBase* > m_analysisContainers; // 0xD8 - 0xF0
}; // size - 0xF0


class CNavVolume /* "navlib" */
{
public:
   unsigned char pad_0[0x70]; // 0x0 - 0x70
}; // size - 0x70


class CBaseConstraint /* "modellib" */ : public CBoneConstraintBase /* "modellib" */
{
public:
   CUtlString m_name; // 0x28 - 0x30
   Vector m_vUpVector; // 0x30 - 0x3C
   unsigned char pad_3C[0x4]; // 0x3C - 0x40
   CUtlVector< CConstraintSlave > m_slaves; // 0x40 - 0x58
   CUtlVector< CConstraintTarget > m_targets; // 0x58 - 0x70
}; // size - 0x70



class CConcreteAnimParameter /* "animgraphlib" */ : public CAnimParameterBase /* "animgraphlib" */
{
public:
   AnimParamButton_t m_previewButton; // 0x70 - 0x74
   AnimParamNetworkSetting m_eNetworkSetting; // 0x74 - 0x78
   bool m_bUseMostRecentValue; // 0x78 - 0x79
   bool m_bAutoReset; // 0x79 - 0x7A
   bool m_bGameWritable; // 0x7A - 0x7B
   bool m_bGraphWritable; // 0x7B - 0x7C
   unsigned char pad_7C[0x4]; // 0x7C - 0x80
}; // size - 0x80


class CSimpleSimTimer /* "server" */
{
public:
   GameTime_t m_next; // 0x0 - 0x4
   WorldGroupId_t m_nWorldGroupId; // 0x4 - 0x8
}; // size - 0x8


class CSosGroupActionSchema /* "soundsystem" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlString m_name; // 0x8 - 0x10
   ActionType_t m_actionType; // 0x10 - 0x14
   ActionType_t m_actionInstanceType; // 0x14 - 0x18
}; // size - 0x18


class CPulseCell_BaseValue /* "pulse_runtime_lib" */ : public CPulseCell_Base /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class MaterialParam_t /* "materialsystem2" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
}; // size - 0x8


class CPulseCell_Inflow_BaseEntrypoint /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
   PulseRegisterMap_t m_RegisterMap; // 0x50 - 0x70
}; // size - 0x70


class CAnimationGraphVisualizerPrimitiveBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8 - 0xC
   AnimNodeID m_OwningAnimNodePaths[11]; // 0xC - 0x38
   int32_t m_nOwningAnimNodePathCount; // 0x38 - 0x3C
   unsigned char pad_3C[0x4]; // 0x3C - 0x40
}; // size - 0x40


class CNmEvent /* "animlib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   float m_flStartTime; // 0x8 - 0xC
   float m_flDuration; // 0xC - 0x10
}; // size - 0x10


class C_INIT_RemapParticleCountToScalar /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   int32_t m_nInputMin; // 0x1C4 - 0x1C8
   int32_t m_nInputMax; // 0x1C8 - 0x1CC
   int32_t m_nScaleControlPoint; // 0x1CC - 0x1D0
   int32_t m_nScaleControlPointField; // 0x1D0 - 0x1D4
   float m_flOutputMin; // 0x1D4 - 0x1D8
   float m_flOutputMax; // 0x1D8 - 0x1DC
   ParticleSetMethod_t m_nSetMethod; // 0x1DC - 0x1E0
   bool m_bActiveRange; // 0x1E0 - 0x1E1
   bool m_bInvert; // 0x1E1 - 0x1E2
   bool m_bWrap; // 0x1E2 - 0x1E3
   unsigned char pad_1E3[0x1]; // 0x1E3 - 0x1E4
   float m_flRemapBias; // 0x1E4 - 0x1E8
   unsigned char pad_1E8[0x8]; // 0x1E8 - 0x1F0
}; // size - 0x1F0


class CAnimActionUpdater /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
}; // size - 0x18


class CAnimMotorUpdaterBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CUtlString m_name; // 0x10 - 0x18
   bool m_bDefault; // 0x18 - 0x19
   unsigned char pad_19[0x7]; // 0x19 - 0x20
}; // size - 0x20


class CBasePulseGraphInstance /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0xF8]; // 0x0 - 0xF8
}; // size - 0xF8


class CBaseRendererSource2 /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x208 - 0x360
   CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x360 - 0x4B8
   CParticleCollectionRendererFloatInput m_flRollScale; // 0x4B8 - 0x610
   ParticleAttributeIndex_t m_nAlpha2Field; // 0x610 - 0x614
   unsigned char pad_614[0x4]; // 0x614 - 0x618
   CParticleCollectionRendererVecInput m_vecColorScale; // 0x618 - 0xC70
   ParticleColorBlendType_t m_nColorBlendType; // 0xC70 - 0xC74
   SpriteCardShaderType_t m_nShaderType; // 0xC74 - 0xC78
   CUtlString m_strShaderOverride; // 0xC78 - 0xC80
   CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0xC80 - 0xDD8
   CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0xDD8 - 0xF30
   float m_flBumpStrength; // 0xF30 - 0xF34
   ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xF34 - 0xF38
   CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0xF38 - 0xF50
   float m_flAnimationRate; // 0xF50 - 0xF54
   AnimationType_t m_nAnimationType; // 0xF54 - 0xF58
   bool m_bAnimateInFPS; // 0xF58 - 0xF59
   unsigned char pad_F59[0x7]; // 0xF59 - 0xF60
   CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0xF60 - 0x10B8
   CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x10B8 - 0x1210
   CParticleCollectionRendererFloatInput m_flDiffuseClamp; // 0x1210 - 0x1368
   int32_t m_nLightingControlPoint; // 0x1368 - 0x136C
   ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x136C - 0x1370
   ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x1370 - 0x1374
   bool m_bGammaCorrectVertexColors; // 0x1374 - 0x1375
   bool m_bSaturateColorPreAlphaBlend; // 0x1375 - 0x1376
   unsigned char pad_1376[0x2]; // 0x1376 - 0x1378
   CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x1378 - 0x14D0
   CParticleCollectionRendererFloatInput m_flDesaturation; // 0x14D0 - 0x1628
   CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x1628 - 0x1780
   int32_t m_nHSVShiftControlPoint; // 0x1780 - 0x1784
   ParticleFogType_t m_nFogType; // 0x1784 - 0x1788
   CParticleCollectionRendererFloatInput m_flFogAmount; // 0x1788 - 0x18E0
   bool m_bTintByFOW; // 0x18E0 - 0x18E1
   bool m_bTintByGlobalLight; // 0x18E1 - 0x18E2
   unsigned char pad_18E2[0x2]; // 0x18E2 - 0x18E4
   SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x18E4 - 0x18E8
   SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x18E8 - 0x18EC
   ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x18EC - 0x18F0
   CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x18F0 - 0x1A48
   CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x1A48 - 0x1BA0
   CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x1BA0 - 0x1CF8
   bool m_bRefract; // 0x1CF8 - 0x1CF9
   bool m_bRefractSolid; // 0x1CF9 - 0x1CFA
   unsigned char pad_1CFA[0x6]; // 0x1CFA - 0x1D00
   CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x1D00 - 0x1E58
   int32_t m_nRefractBlurRadius; // 0x1E58 - 0x1E5C
   BlurFilterType_t m_nRefractBlurType; // 0x1E5C - 0x1E60
   bool m_bOnlyRenderInEffectsBloomPass; // 0x1E60 - 0x1E61
   bool m_bOnlyRenderInEffectsWaterPass; // 0x1E61 - 0x1E62
   bool m_bUseMixedResolutionRendering; // 0x1E62 - 0x1E63
   bool m_bOnlyRenderInEffecsGameOverlay; // 0x1E63 - 0x1E64
   char m_stencilTestID[128]; // 0x1E64 - 0x1EE4
   bool m_bStencilTestExclude; // 0x1EE4 - 0x1EE5
   char m_stencilWriteID[128]; // 0x1EE5 - 0x1F65
   bool m_bWriteStencilOnDepthPass; // 0x1F65 - 0x1F66
   bool m_bWriteStencilOnDepthFail; // 0x1F66 - 0x1F67
   bool m_bReverseZBuffering; // 0x1F67 - 0x1F68
   bool m_bDisableZBuffering; // 0x1F68 - 0x1F69
   unsigned char pad_1F69[0x3]; // 0x1F69 - 0x1F6C
   ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1F6C - 0x1F70
   CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x1F70 - 0x20C8
   CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x20C8 - 0x2220
   CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x2220 - 0x2378
   CParticleCollectionRendererFloatInput m_flDepthBias; // 0x2378 - 0x24D0
   ParticleSortingChoiceList_t m_nSortMethod; // 0x24D0 - 0x24D4
   bool m_bBlendFramesSeq0; // 0x24D4 - 0x24D5
   bool m_bMaxLuminanceBlendingSequence0; // 0x24D5 - 0x24D6
   unsigned char pad_24D6[0x242]; // 0x24D6 - 0x2718
}; // size - 0x2718


class CAnimGraphControllerBase /* "server" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
}; // size - 0x18


class CParticleFloatInput /* "particleslib" */ : public CParticleInput /* "particleslib" */
{
public:
   ParticleFloatType_t m_nType; // 0x10 - 0x14
   ParticleFloatMapType_t m_nMapType; // 0x14 - 0x18
   float m_flLiteralValue; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
   CParticleNamedValueRef m_NamedValue; // 0x20 - 0x60
   int32_t m_nControlPoint; // 0x60 - 0x64
   ParticleAttributeIndex_t m_nScalarAttribute; // 0x64 - 0x68
   ParticleAttributeIndex_t m_nVectorAttribute; // 0x68 - 0x6C
   int32_t m_nVectorComponent; // 0x6C - 0x70
   float m_flRandomMin; // 0x70 - 0x74
   float m_flRandomMax; // 0x74 - 0x78
   bool m_bHasRandomSignFlip; // 0x78 - 0x79
   unsigned char pad_79[0x3]; // 0x79 - 0x7C
   int32_t m_nRandomSeed; // 0x7C - 0x80
   ParticleFloatRandomMode_t m_nRandomMode; // 0x80 - 0x84
   unsigned char pad_84[0x4]; // 0x84 - 0x88
   float m_flLOD0; // 0x88 - 0x8C
   float m_flLOD1; // 0x8C - 0x90
   float m_flLOD2; // 0x90 - 0x94
   float m_flLOD3; // 0x94 - 0x98
   ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0x98 - 0x9C
   float m_flNoiseOutputMin; // 0x9C - 0xA0
   float m_flNoiseOutputMax; // 0xA0 - 0xA4
   float m_flNoiseScale; // 0xA4 - 0xA8
   Vector m_vecNoiseOffsetRate; // 0xA8 - 0xB4
   float m_flNoiseOffset; // 0xB4 - 0xB8
   int32_t m_nNoiseOctaves; // 0xB8 - 0xBC
   PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xBC - 0xC0
   PFNoiseType_t m_nNoiseType; // 0xC0 - 0xC4
   PFNoiseModifier_t m_nNoiseModifier; // 0xC4 - 0xC8
   float m_flNoiseTurbulenceScale; // 0xC8 - 0xCC
   float m_flNoiseTurbulenceMix; // 0xCC - 0xD0
   float m_flNoiseImgPreviewScale; // 0xD0 - 0xD4
   bool m_bNoiseImgPreviewLive; // 0xD4 - 0xD5
   unsigned char pad_D5[0xB]; // 0xD5 - 0xE0
   float m_flNoCameraFallback; // 0xE0 - 0xE4
   bool m_bUseBoundsCenter; // 0xE4 - 0xE5
   unsigned char pad_E5[0x3]; // 0xE5 - 0xE8
   ParticleFloatInputMode_t m_nInputMode; // 0xE8 - 0xEC
   float m_flMultFactor; // 0xEC - 0xF0
   float m_flInput0; // 0xF0 - 0xF4
   float m_flInput1; // 0xF4 - 0xF8
   float m_flOutput0; // 0xF8 - 0xFC
   float m_flOutput1; // 0xFC - 0x100
   float m_flNotchedRangeMin; // 0x100 - 0x104
   float m_flNotchedRangeMax; // 0x104 - 0x108
   float m_flNotchedOutputOutside; // 0x108 - 0x10C
   float m_flNotchedOutputInside; // 0x10C - 0x110
   ParticleFloatBiasType_t m_nBiasType; // 0x110 - 0x114
   float m_flBiasParameter; // 0x114 - 0x118
   CPiecewiseCurve m_Curve; // 0x118 - 0x158
}; // size - 0x158


class CParticleFunctionEmitter /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   int32_t m_nEmitterIndex; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class CParticleVecInput /* "particleslib" */ : public CParticleInput /* "particleslib" */
{
public:
   ParticleVecType_t m_nType; // 0x10 - 0x14
   Vector m_vLiteralValue; // 0x14 - 0x20
   Color m_LiteralColor; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
   CParticleNamedValueRef m_NamedValue; // 0x28 - 0x68
   bool m_bFollowNamedValue; // 0x68 - 0x69
   unsigned char pad_69[0x3]; // 0x69 - 0x6C
   ParticleAttributeIndex_t m_nVectorAttribute; // 0x6C - 0x70
   Vector m_vVectorAttributeScale; // 0x70 - 0x7C
   int32_t m_nControlPoint; // 0x7C - 0x80
   int32_t m_nDeltaControlPoint; // 0x80 - 0x84
   Vector m_vCPValueScale; // 0x84 - 0x90
   Vector m_vCPRelativePosition; // 0x90 - 0x9C
   Vector m_vCPRelativeDir; // 0x9C - 0xA8
   CParticleFloatInput m_FloatComponentX; // 0xA8 - 0x200
   CParticleFloatInput m_FloatComponentY; // 0x200 - 0x358
   CParticleFloatInput m_FloatComponentZ; // 0x358 - 0x4B0
   CParticleFloatInput m_FloatInterp; // 0x4B0 - 0x608
   float m_flInterpInput0; // 0x608 - 0x60C
   float m_flInterpInput1; // 0x60C - 0x610
   Vector m_vInterpOutput0; // 0x610 - 0x61C
   Vector m_vInterpOutput1; // 0x61C - 0x628
   CColorGradient m_Gradient; // 0x628 - 0x640
   Vector m_vRandomMin; // 0x640 - 0x64C
   Vector m_vRandomMax; // 0x64C - 0x658
}; // size - 0x658


class RnShapeDesc_t /* "physicslib" */
{
public:
   uint32_t m_nCollisionAttributeIndex; // 0x0 - 0x4
   uint32_t m_nSurfacePropertyIndex; // 0x4 - 0x8
   CUtlString m_UserFriendlyName; // 0x8 - 0x10
}; // size - 0x10


class CGeneralRandomRotation /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flDegrees; // 0x1C4 - 0x1C8
   float m_flDegreesMin; // 0x1C8 - 0x1CC
   float m_flDegreesMax; // 0x1CC - 0x1D0
   float m_flRotationRandExponent; // 0x1D0 - 0x1D4
   bool m_bRandomlyFlipDirection; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0xB]; // 0x1D5 - 0x1E0
}; // size - 0x1E0


class CPulse_OutflowConnection /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_SourceOutflowName; // 0x0 - 0x8
   PulseRuntimeChunkIndex_t m_nDestChunk; // 0x8 - 0xC
   int32_t m_nInstruction; // 0xC - 0x10
   PulseRegisterMap_t m_OutflowRegisterMap; // 0x10 - 0x30
}; // size - 0x30


class C_INIT_RandomNamedModelElement /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1C0 - 0x1C8
   CUtlVector< CUtlString > m_names; // 0x1C8 - 0x1E0
   bool m_bShuffle; // 0x1E0 - 0x1E1
   bool m_bLinear; // 0x1E1 - 0x1E2
   bool m_bModelFromRenderer; // 0x1E2 - 0x1E3
   unsigned char pad_1E3[0x1]; // 0x1E3 - 0x1E4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1E4 - 0x1E8
}; // size - 0x1E8


class CBinaryUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   CAnimUpdateNodeRef m_pChild1; // 0x58 - 0x68
   CAnimUpdateNodeRef m_pChild2; // 0x68 - 0x78
   BinaryNodeTiming m_timingBehavior; // 0x78 - 0x7C
   float m_flTimingBlend; // 0x7C - 0x80
   bool m_bResetChild1; // 0x80 - 0x81
   bool m_bResetChild2; // 0x81 - 0x82
   unsigned char pad_82[0x6]; // 0x82 - 0x88
}; // size - 0x88


class CGlowOverlay /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   Vector m_vPos; // 0x8 - 0x14
   bool m_bDirectional; // 0x14 - 0x15
   unsigned char pad_15[0x3]; // 0x15 - 0x18
   Vector m_vDirection; // 0x18 - 0x24
   bool m_bInSky; // 0x24 - 0x25
   unsigned char pad_25[0x3]; // 0x25 - 0x28
   float m_skyObstructionScale; // 0x28 - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
   CGlowSprite m_Sprites[4]; // 0x30 - 0xB0
   int32_t m_nSprites; // 0xB0 - 0xB4
   float m_flProxyRadius; // 0xB4 - 0xB8
   float m_flHDRColorScale; // 0xB8 - 0xBC
   float m_flGlowObstructionScale; // 0xBC - 0xC0
   bool m_bCacheGlowObstruction; // 0xC0 - 0xC1
   bool m_bCacheSkyObstruction; // 0xC1 - 0xC2
   int16_t m_bActivated; // 0xC2 - 0xC4
   uint16_t m_ListIndex; // 0xC4 - 0xC6
   unsigned char pad_C6[0x2]; // 0xC6 - 0xC8
   int32_t m_queryHandle; // 0xC8 - 0xCC
   unsigned char pad_CC[0x4]; // 0xCC - 0xD0
}; // size - 0xD0


class CStopwatchBase /* "server" */ : public CSimpleSimTimer /* "server" */
{
public:
   bool m_fIsRunning; // 0x8 - 0x9
   unsigned char pad_9[0x3]; // 0x9 - 0xC
}; // size - 0xC


class C_INIT_RemapNamedModelElementToScalar /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1C0 - 0x1C8
   CUtlVector< CUtlString > m_names; // 0x1C8 - 0x1E0
   CUtlVector< float32 > m_values; // 0x1E0 - 0x1F8
   ParticleAttributeIndex_t m_nFieldInput; // 0x1F8 - 0x1FC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1FC - 0x200
   ParticleSetMethod_t m_nSetMethod; // 0x200 - 0x204
   bool m_bModelFromRenderer; // 0x204 - 0x205
   unsigned char pad_205[0x3]; // 0x205 - 0x208
}; // size - 0x208


class C_INIT_RemapParticleCountToNamedModelElementScalar /* "particles" */ : public C_INIT_RemapParticleCountToScalar /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F8
   CUtlString m_outputMinName; // 0x1F8 - 0x200
   CUtlString m_outputMaxName; // 0x200 - 0x208
   bool m_bModelFromRenderer; // 0x208 - 0x209
   unsigned char pad_209[0x7]; // 0x209 - 0x210
}; // size - 0x210


class C_OP_RemapNamedModelElementEndCap /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1B8 - 0x1C0
   CUtlVector< CUtlString > m_inNames; // 0x1C0 - 0x1D8
   CUtlVector< CUtlString > m_outNames; // 0x1D8 - 0x1F0
   CUtlVector< CUtlString > m_fallbackNames; // 0x1F0 - 0x208
   bool m_bModelFromRenderer; // 0x208 - 0x209
   unsigned char pad_209[0x3]; // 0x209 - 0x20C
   ParticleAttributeIndex_t m_nFieldInput; // 0x20C - 0x210
   ParticleAttributeIndex_t m_nFieldOutput; // 0x210 - 0x214
   unsigned char pad_214[0x4]; // 0x214 - 0x218
}; // size - 0x218


class C_OP_RemapNamedModelElementOnceTimed /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1B8 - 0x1C0
   CUtlVector< CUtlString > m_inNames; // 0x1C0 - 0x1D8
   CUtlVector< CUtlString > m_outNames; // 0x1D8 - 0x1F0
   CUtlVector< CUtlString > m_fallbackNames; // 0x1F0 - 0x208
   bool m_bModelFromRenderer; // 0x208 - 0x209
   bool m_bProportional; // 0x209 - 0x20A
   unsigned char pad_20A[0x2]; // 0x20A - 0x20C
   ParticleAttributeIndex_t m_nFieldInput; // 0x20C - 0x210
   ParticleAttributeIndex_t m_nFieldOutput; // 0x210 - 0x214
   float m_flRemapTime; // 0x214 - 0x218
}; // size - 0x218


class BaseSceneObjectOverride_t /* "worldrenderer" */
{
public:
   uint32_t m_nSceneObjectIndex; // 0x0 - 0x4
}; // size - 0x4


class CHandshakeAnimTagBase /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   bool m_bIsDisableTag; // 0x50 - 0x51
   unsigned char pad_51[0x7]; // 0x51 - 0x58
}; // size - 0x58




class CPulseCell_Outflow_PlaySceneBase /* "server" */ : public CPulseCell_BaseYieldingInflow /* "server" */
{
public:
   class CursorState_t /* "server" */
   {
   public:
      CHandle< CBaseEntity > m_sceneInstance; // 0x0 - 0x4
      CHandle< CBaseEntity > m_mainActor; // 0x4 - 0x8
   }; // size - 0x8

   CPulse_ResumePoint m_OnFinished; // 0x48 - 0x78
   CPulse_ResumePoint m_OnCanceled; // 0x78 - 0xA8
   CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0xA8 - 0xC0
}; // size - 0xC0


class CPulseGraphComponentBase /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CHandle< CBaseEntity > m_hOwner; // 0x8 - 0xC
   bool m_bActivated; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
   CUtlSymbolLarge m_sNameFixupStaticPrefix; // 0x10 - 0x18
   CUtlSymbolLarge m_sNameFixupParent; // 0x18 - 0x20
   CUtlSymbolLarge m_sNameFixupLocal; // 0x20 - 0x28
}; // size - 0x28


class CSSDSMsg_LayerBase /* "scenesystem" */
{
public:
   SceneViewId_t m_viewId; // 0x0 - 0x10
   CUtlString m_ViewName; // 0x10 - 0x18
   int32_t m_nLayerIndex; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
   uint64_t m_nLayerId; // 0x20 - 0x28
   CUtlString m_LayerName; // 0x28 - 0x30
   CUtlString m_displayText; // 0x30 - 0x38
}; // size - 0x38


class C_OP_RemapDistanceToLineSegmentBase /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCP0; // 0x1B8 - 0x1BC
   int32_t m_nCP1; // 0x1BC - 0x1C0
   float m_flMinInputValue; // 0x1C0 - 0x1C4
   float m_flMaxInputValue; // 0x1C4 - 0x1C8
   bool m_bInfiniteLine; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x7]; // 0x1C9 - 0x1D0
}; // size - 0x1D0


class CAI_Expresser /* "server" */
{
public:
   unsigned char pad_0[0x38]; // 0x0 - 0x38
   GameTime_t m_flStopTalkTime; // 0x38 - 0x3C
   GameTime_t m_flStopTalkTimeWithoutDelay; // 0x3C - 0x40
   GameTime_t m_flBlockedTalkTime; // 0x40 - 0x44
   int32_t m_voicePitch; // 0x44 - 0x48
   GameTime_t m_flLastTimeAcceptedSpeak; // 0x48 - 0x4C
   bool m_bAllowSpeakingInterrupts; // 0x4C - 0x4D
   bool m_bConsiderSceneInvolvementAsSpeech; // 0x4D - 0x4E
   bool m_bSceneEntityDisabled; // 0x4E - 0x4F
   unsigned char pad_4F[0x1]; // 0x4F - 0x50
   int32_t m_nLastSpokenPriority; // 0x50 - 0x54
   unsigned char pad_54[0x1C]; // 0x54 - 0x70
   CBaseFlex* m_pOuter; // 0x70 - 0x78
}; // size - 0x78


class CAnimEventListenerBase /* "server" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
}; // size - 0x20


class CBtNode /* "server" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CCycleBase /* "modellib" */
{
public:
   float m_flCycle; // 0x0 - 0x4
}; // size - 0x4


class CExampleSchemaVData_PolymorphicBase /* "resourcefile" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_nBase; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class CGeneralSpin /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nSpinRateDegrees; // 0x1B8 - 0x1BC
   int32_t m_nSpinRateMinDegrees; // 0x1BC - 0x1C0
   unsigned char pad_1C0[0x4]; // 0x1C0 - 0x1C4
   float m_fSpinRateStopTime; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class CMotionNode /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CUtlString m_name; // 0x18 - 0x20
   AnimNodeID m_id; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
}; // size - 0x28





class CPathAnimMotorUpdaterBase /* "animgraphlib" */ : public CAnimMotorUpdaterBase /* "animgraphlib" */
{
public:
   bool m_bLockToPath; // 0x20 - 0x21
   unsigned char pad_21[0x7]; // 0x21 - 0x28
}; // size - 0x28


class CPulseCell_WaitForCursorsWithTagBase /* "pulse_system" */ : public CPulseCell_BaseYieldingInflow /* "pulse_system" */
{
public:
   class CursorState_t /* "pulse_system" */
   {
   public:
      CUtlSymbolLarge m_TagName; // 0x0 - 0x8
      unsigned char pad_8[0x28]; // 0x8 - 0x30
   }; // size - 0x30

   int32_t m_nCursorsAllowedToWait; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
   CPulse_ResumePoint m_WaitComplete; // 0x50 - 0x80
}; // size - 0x80


class CPulseExecCursor /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0xA0]; // 0x0 - 0xA0
}; // size - 0xA0


class EventAdvanceTick_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   int32_t m_nCurrentTick; // 0x30 - 0x34
   int32_t m_nCurrentTickThisFrame; // 0x34 - 0x38
   int32_t m_nTotalTicksThisFrame; // 0x38 - 0x3C
   int32_t m_nTotalTicks; // 0x3C - 0x40
}; // size - 0x40


class EventPostAdvanceTick_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   int32_t m_nCurrentTick; // 0x30 - 0x34
   int32_t m_nCurrentTickThisFrame; // 0x34 - 0x38
   int32_t m_nTotalTicksThisFrame; // 0x38 - 0x3C
   int32_t m_nTotalTicks; // 0x3C - 0x40
}; // size - 0x40


class CAnimGraphSettingsGroup /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
}; // size - 0x20


class CBaseTrailRenderer /* "particles" */ : public CBaseRendererSource2 /* "particles" */
{
public:
   ParticleOrientationChoiceList_t m_nOrientationType; // 0x2718 - 0x271C
   int32_t m_nOrientationControlPoint; // 0x271C - 0x2720
   float m_flMinSize; // 0x2720 - 0x2724
   float m_flMaxSize; // 0x2724 - 0x2728
   CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2728 - 0x2880
   CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2880 - 0x29D8
   bool m_bClampV; // 0x29D8 - 0x29D9
   unsigned char pad_29D9[0x7]; // 0x29D9 - 0x29E0
}; // size - 0x29E0


class CNavVolumeCalculatedVector /* "server" */ : public CNavVolume /* "server" */
{
public:
   unsigned char pad_0[0x98]; // 0x0 - 0x98
}; // size - 0x98


class CNavVolumeVector /* "navlib" */ : public CNavVolume /* "navlib" */
{
public:
   unsigned char pad_70[0x8]; // 0x70 - 0x78
   bool m_bHasBeenPreFiltered; // 0x78 - 0x79
   unsigned char pad_79[0x1F]; // 0x79 - 0x98
}; // size - 0x98



class CParticleCollectionVecInput /* "particleslib" */ : public CParticleVecInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x658]; // 0x0 - 0x658
}; // size - 0x658



class CPulseCell_BaseRequirement /* "pulse_runtime_lib" */ : public CPulseCell_Base /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulse_ResumePoint /* "pulse_runtime_lib" */ : public CPulse_OutflowConnection /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class CSAdditionalPerRoundStats_t /* "server" */
{
public:
   int32_t m_numChickensKilled; // 0x0 - 0x4
   int32_t m_killsWhileBlind; // 0x4 - 0x8
   int32_t m_bombCarrierkills; // 0x8 - 0xC
   int32_t m_iBurnDamageInflicted; // 0xC - 0x10
   int32_t m_iBlastDamageInflicted; // 0x10 - 0x14
   int32_t m_iDinks; // 0x14 - 0x18
}; // size - 0x18


class CSpinUpdateBase /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   unsigned char pad_0[0x1B8]; // 0x0 - 0x1B8
}; // size - 0x1B8


class CStaticPoseCache /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CUtlVector< CCachedPose > m_poses; // 0x10 - 0x28
   int32_t m_nBoneCount; // 0x28 - 0x2C
   int32_t m_nMorphCount; // 0x2C - 0x30
}; // size - 0x30


class C_OP_RenderPoints /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x208 - 0x210
}; // size - 0x210


class FeBoxRigid_t /* "physicslib" */
{
public:
   CTransform tmFrame2; // 0x0 - 0x20
   uint16_t nNode; // 0x20 - 0x22
   uint16_t nCollisionMask; // 0x22 - 0x24
   Vector vSize; // 0x24 - 0x30
   uint16_t nVertexMapIndex; // 0x30 - 0x32
   uint16_t nFlags; // 0x32 - 0x34
   unsigned char pad_34[0xC]; // 0x34 - 0x40
}; // size - 0x40


class IParticleEffect /* "particleslib" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class ISkeletonAnimationController /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class RnBodyDesc_t /* "physicslib" */
{
public:
   CUtlString m_sDebugName; // 0x0 - 0x8
   Vector m_vPosition; // 0x8 - 0x14
   QuaternionStorage m_qOrientation; // 0x14 - 0x24
   Vector m_vLinearVelocity; // 0x24 - 0x30
   Vector m_vAngularVelocity; // 0x30 - 0x3C
   Vector m_vLocalMassCenter; // 0x3C - 0x48
   Vector m_LocalInertiaInv[3]; // 0x48 - 0x6C
   float m_flMassInv; // 0x6C - 0x70
   float m_flGameMass; // 0x70 - 0x74
   float m_flInertiaScaleInv; // 0x74 - 0x78
   float m_flLinearDamping; // 0x78 - 0x7C
   float m_flAngularDamping; // 0x7C - 0x80
   float m_flLinearDrag; // 0x80 - 0x84
   float m_flAngularDrag; // 0x84 - 0x88
   float m_flLinearBuoyancyDrag; // 0x88 - 0x8C
   float m_flAngularBuoyancyDrag; // 0x8C - 0x90
   Vector m_vLastAwakeForceAccum; // 0x90 - 0x9C
   Vector m_vLastAwakeTorqueAccum; // 0x9C - 0xA8
   float m_flBuoyancyFactor; // 0xA8 - 0xAC
   float m_flGravityScale; // 0xAC - 0xB0
   float m_flTimeScale; // 0xB0 - 0xB4
   int32_t m_nBodyType; // 0xB4 - 0xB8
   uint32_t m_nGameIndex; // 0xB8 - 0xBC
   uint32_t m_nGameFlags; // 0xBC - 0xC0
   int8_t m_nMinVelocityIterations; // 0xC0 - 0xC1
   int8_t m_nMinPositionIterations; // 0xC1 - 0xC2
   int8_t m_nMassPriority; // 0xC2 - 0xC3
   bool m_bEnabled; // 0xC3 - 0xC4
   bool m_bSleeping; // 0xC4 - 0xC5
   bool m_bIsContinuousEnabled; // 0xC5 - 0xC6
   bool m_bDragEnabled; // 0xC6 - 0xC7
   bool m_bBuoyancyDragEnabled; // 0xC7 - 0xC8
   bool m_bGravityDisabled; // 0xC8 - 0xC9
   bool m_bSpeculativeEnabled; // 0xC9 - 0xCA
   bool m_bHasShadowController; // 0xCA - 0xCB
   unsigned char pad_CB[0x5]; // 0xCB - 0xD0
}; // size - 0xD0


class AmmoTypeInfo_t /* "server" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   int32_t m_nMaxCarry; // 0x10 - 0x14
   unsigned char pad_14[0x8]; // 0x14 - 0x1C
   CRangeInt m_nSplashSize; // 0x1C - 0x24
   AmmoFlags_t m_nFlags; // 0x24 - 0x28
   float m_flMass; // 0x28 - 0x2C
   CRangeFloat m_flSpeed; // 0x2C - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
}; // size - 0x38


class AnimationSnapshotBase_t /* "animationsystem" */
{
public:
   float m_flRealTime; // 0x0 - 0x4
   unsigned char pad_4[0xC]; // 0x4 - 0x10
   matrix3x4a_t m_rootToWorld; // 0x10 - 0x40
   bool m_bBonesInWorldSpace; // 0x40 - 0x41
   unsigned char pad_41[0x7]; // 0x41 - 0x48
   CUtlVector< uint32 > m_boneSetupMask; // 0x48 - 0x60
   CUtlVector< matrix3x4a_t > m_boneTransforms; // 0x60 - 0x78
   CUtlVector< float32 > m_flexControllers; // 0x78 - 0x90
   AnimationSnapshotType_t m_SnapshotType; // 0x90 - 0x94
   bool m_bHasDecodeDump; // 0x94 - 0x95
   unsigned char pad_95[0x3]; // 0x95 - 0x98
   AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98 - 0x108
   unsigned char pad_108[0x8]; // 0x108 - 0x110
}; // size - 0x110


class CAI_ExpresserWithFollowup /* "server" */ : public CAI_Expresser /* "server" */
{
public:
   ResponseFollowup* m_pPostponedFollowup; // 0x78 - 0x80
   unsigned char pad_80[0x8]; // 0x80 - 0x88
}; // size - 0x88


class CAnimScriptBase /* "host" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   bool m_bIsValid; // 0x8 - 0x9
   unsigned char pad_9[0x7]; // 0x9 - 0x10
}; // size - 0x10


class CMotionGraph /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CParamSpanUpdater m_paramSpans; // 0x10 - 0x28
   CUtlVector< TagSpan_t > m_tags; // 0x28 - 0x40
   CSmartPtr< CMotionNode > m_pRootNode; // 0x40 - 0x48
   int32_t m_nParameterCount; // 0x48 - 0x4C
   int32_t m_nConfigStartIndex; // 0x4C - 0x50
   int32_t m_nConfigCount; // 0x50 - 0x54
   bool m_bLoop; // 0x54 - 0x55
   unsigned char pad_55[0x3]; // 0x55 - 0x58
}; // size - 0x58


class CNavVolumeSphere /* "navlib" */ : public CNavVolume /* "navlib" */
{
public:
   Vector m_vCenter; // 0x70 - 0x7C
   float m_flRadius; // 0x7C - 0x80
}; // size - 0x80


class CParticleCollectionFloatInput /* "particleslib" */ : public CParticleFloatInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x158]; // 0x0 - 0x158
}; // size - 0x158


class CPulseCell_BaseLerp /* "pulse_runtime_lib" */ : public CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */
{
public:
   class CursorState_t /* "pulse_runtime_lib" */
   {
   public:
      GameTime_t m_StartTime; // 0x0 - 0x4
      GameTime_t m_EndTime; // 0x4 - 0x8
   }; // size - 0x8

   CPulse_ResumePoint m_WakeResume; // 0x48 - 0x78
}; // size - 0x78


class CPulseGraphInstance_TestDomain /* "pulse_runtime_lib" */ : public CBasePulseGraphInstance /* "pulse_runtime_lib" */
{
public:
   bool m_bIsRunningUnitTests; // 0xF8 - 0xF9
   bool m_bExplicitTimeStepping; // 0xF9 - 0xFA
   bool m_bExpectingToDestroyWithYieldedCursors; // 0xFA - 0xFB
   unsigned char pad_FB[0x1]; // 0xFB - 0xFC
   int32_t m_nNextValidateIndex; // 0xFC - 0x100
   CUtlVector< CUtlString > m_Tracepoints; // 0x100 - 0x118
   bool m_bTestYesOrNoPath; // 0x118 - 0x119
   unsigned char pad_119[0x7]; // 0x119 - 0x120
}; // size - 0x120


class CSequenceUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_58[0x8]; // 0x58 - 0x60
   CParamSpanUpdater m_paramSpans; // 0x60 - 0x78
   CUtlVector< TagSpan_t > m_tags; // 0x78 - 0x90
   unsigned char pad_90[0x4]; // 0x90 - 0x94
   HSequence m_hSequence; // 0x94 - 0x98
   float m_playbackSpeed; // 0x98 - 0x9C
   float m_duration; // 0x9C - 0xA0
   bool m_bLoop; // 0xA0 - 0xA1
   unsigned char pad_A1[0x7]; // 0xA1 - 0xA8
}; // size - 0xA8


class CSosGroupBranchPattern /* "soundsystem" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   bool m_bMatchEventName; // 0x8 - 0x9
   bool m_bMatchEventSubString; // 0x9 - 0xA
   bool m_bMatchEntIndex; // 0xA - 0xB
   bool m_bMatchOpvar; // 0xB - 0xC
   bool m_bMatchString; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
}; // size - 0x10


class CVoiceContainerAnalysisBase /* "soundsystem_voicecontainers" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   bool m_bRegenerateCurveOnCompile; // 0x8 - 0x9
   unsigned char pad_9[0x7]; // 0x9 - 0x10
   CPiecewiseCurve m_curve; // 0x10 - 0x50
}; // size - 0x50


class CVoiceContainerDecayingSineWave /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   float m_flFrequency; // 0xF0 - 0xF4
   float m_flDecayTime; // 0xF4 - 0xF8
}; // size - 0xF8


class FeSphereRigid_t /* "physicslib" */
{
public:
   fltx4 vSphere; // 0x0 - 0x10
   uint16_t nNode; // 0x10 - 0x12
   uint16_t nCollisionMask; // 0x12 - 0x14
   uint16_t nVertexMapIndex; // 0x14 - 0x16
   uint16_t nFlags; // 0x16 - 0x18
   unsigned char pad_18[0x8]; // 0x18 - 0x20
}; // size - 0x20


class FeTaperedCapsuleRigid_t /* "physicslib" */
{
public:
   fltx4 vSphere[2]; // 0x0 - 0x20
   uint16_t nNode; // 0x20 - 0x22
   uint16_t nCollisionMask; // 0x22 - 0x24
   uint16_t nVertexMapIndex; // 0x24 - 0x26
   uint16_t nFlags; // 0x26 - 0x28
   unsigned char pad_28[0x8]; // 0x28 - 0x30
}; // size - 0x30


class IChoreoServices /* "server" */
{
public:

   enum class ChoreoState_t : std::uint32_t
   {
      STATE_PRE_SCRIPT = 0,
      STATE_WAIT_FOR_SCRIPT = 1,
      STATE_WALK_TO_MARK = 2,
      STATE_SYNCHRONIZE_SCRIPT = 3,
      STATE_PLAY_SCRIPT = 4,
      STATE_PLAY_SCRIPT_POST_IDLE = 5,
      STATE_PLAY_SCRIPT_POST_IDLE_DONE = 6
   };

   enum class ScriptState_t : std::uint32_t
   {
      SCRIPT_PLAYING = 0,
      SCRIPT_WAIT = 1,
      SCRIPT_POST_IDLE = 2,
      SCRIPT_CLEANUP = 3,
      SCRIPT_MOVE_TO_MARK = 4
   };
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IClientAlphaProperty /* "client" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IParticleSystemDefinition /* "particles" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class PointDefinition_t /* "particles" */
{
public:
   int32_t m_nControlPoint; // 0x0 - 0x4
   bool m_bLocalCoords; // 0x4 - 0x5
   unsigned char pad_5[0x3]; // 0x5 - 0x8
   Vector m_vOffset; // 0x8 - 0x14
}; // size - 0x14


class Relationship_t /* "server" */
{
public:
   Disposition_t disposition; // 0x0 - 0x4
   int32_t priority; // 0x4 - 0x8
}; // size - 0x8


class dynpitchvol_base_t /* "server" */
{
public:
   int32_t preset; // 0x0 - 0x4
   int32_t pitchrun; // 0x4 - 0x8
   int32_t pitchstart; // 0x8 - 0xC
   int32_t spinup; // 0xC - 0x10
   int32_t spindown; // 0x10 - 0x14
   int32_t volrun; // 0x14 - 0x18
   int32_t volstart; // 0x18 - 0x1C
   int32_t fadein; // 0x1C - 0x20
   int32_t fadeout; // 0x20 - 0x24
   int32_t lfotype; // 0x24 - 0x28
   int32_t lforate; // 0x28 - 0x2C
   int32_t lfomodpitch; // 0x2C - 0x30
   int32_t lfomodvol; // 0x30 - 0x34
   int32_t cspinup; // 0x34 - 0x38
   int32_t cspincount; // 0x38 - 0x3C
   int32_t pitch; // 0x3C - 0x40
   int32_t spinupsav; // 0x40 - 0x44
   int32_t spindownsav; // 0x44 - 0x48
   int32_t pitchfrac; // 0x48 - 0x4C
   int32_t vol; // 0x4C - 0x50
   int32_t fadeinsav; // 0x50 - 0x54
   int32_t fadeoutsav; // 0x54 - 0x58
   int32_t volfrac; // 0x58 - 0x5C
   int32_t lfofrac; // 0x5C - 0x60
   int32_t lfomult; // 0x60 - 0x64
}; // size - 0x64


class AABB_t /* "mathlib_extended" */
{
public:
   Vector m_vMinBounds; // 0x0 - 0xC
   Vector m_vMaxBounds; // 0xC - 0x18
}; // size - 0x18


class AISound_t /* "server" */
{
public:
   uint16_t nType; // 0x0 - 0x2
   uint16_t nFlags; // 0x2 - 0x4
}; // size - 0x4


class AggregateLODSetup_t /* "worldrenderer" */
{
public:
   Vector m_vLODOrigin; // 0x0 - 0xC
   float m_fMaxObjectScale; // 0xC - 0x10
   CUtlVector< float32 > m_fSwitchDistances; // 0x10 - 0x28
}; // size - 0x28


class AggregateMeshInfo_t /* "worldrenderer" */
{
public:
   uint32_t m_nVisClusterMemberOffset; // 0x0 - 0x4
   uint8_t m_nVisClusterMemberCount; // 0x4 - 0x5
   bool m_bHasTransform; // 0x5 - 0x6
   int16_t m_nDrawCallIndex; // 0x6 - 0x8
   int16_t m_nLODSetupIndex; // 0x8 - 0xA
   uint8_t m_nLODGroupMask; // 0xA - 0xB
   Color m_vTintColor; // 0xB - 0xF
   unsigned char pad_F[0x1]; // 0xF - 0x10
   ObjectTypeFlags_t m_objectFlags; // 0x10 - 0x14
   int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x14 - 0x18
}; // size - 0x18


class AggregateSceneObject_t /* "worldrenderer" */
{
public:
   ObjectTypeFlags_t m_allFlags; // 0x0 - 0x4
   ObjectTypeFlags_t m_anyFlags; // 0x4 - 0x8
   int16_t m_nLayer; // 0x8 - 0xA
   unsigned char pad_A[0x6]; // 0xA - 0x10
   CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // 0x10 - 0x28
   CUtlVector< AggregateLODSetup_t > m_lodSetups; // 0x28 - 0x40
   CUtlVector< uint16 > m_visClusterMembership; // 0x40 - 0x58
   CUtlVector< matrix3x4_t > m_fragmentTransforms; // 0x58 - 0x70
   CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x70 - 0x78
}; // size - 0x78


class AimCameraOpFixedSettings_t /* "animgraphlib" */
{
public:
   int32_t m_nChainIndex; // 0x0 - 0x4
   int32_t m_nCameraJointIndex; // 0x4 - 0x8
   int32_t m_nPelvisJointIndex; // 0x8 - 0xC
   int32_t m_nClavicleLeftJointIndex; // 0xC - 0x10
   int32_t m_nClavicleRightJointIndex; // 0x10 - 0x14
   int32_t m_nDepenetrationJointIndex; // 0x14 - 0x18
   CUtlVector< int32 > m_propJoints; // 0x18 - 0x30
}; // size - 0x30


class AimMatrixOpFixedSettings_t /* "animgraphlib" */
{
public:
   CAnimAttachment m_attachment; // 0x0 - 0x80
   CAnimInputDamping m_damping; // 0x80 - 0x90
   CPoseHandle m_poseCacheHandles[10]; // 0x90 - 0xB8
   AimMatrixBlendMode m_eBlendMode; // 0xB8 - 0xBC
   float m_flMaxYawAngle; // 0xBC - 0xC0
   float m_flMaxPitchAngle; // 0xC0 - 0xC4
   int32_t m_nSequenceMaxFrame; // 0xC4 - 0xC8
   int32_t m_nBoneMaskIndex; // 0xC8 - 0xCC
   bool m_bTargetIsPosition; // 0xCC - 0xCD
   bool m_bUseBiasAndClamp; // 0xCD - 0xCE
   unsigned char pad_CE[0x2]; // 0xCE - 0xD0
   float m_flBiasAndClampYawOffset; // 0xD0 - 0xD4
   float m_flBiasAndClampPitchOffset; // 0xD4 - 0xD8
   CBlendCurve m_biasAndClampBlendCurve; // 0xD8 - 0xE0
}; // size - 0xE0


class AmmoIndex_t /* "server" */
{
public:
   int8_t m_Value; // 0x0 - 0x1
}; // size - 0x1


class AnimComponentID /* "modellib" */
{
public:
   uint32_t m_id; // 0x0 - 0x4
}; // size - 0x4


class AnimNodeID /* "modellib" */
{
public:
   uint32_t m_id; // 0x0 - 0x4
}; // size - 0x4


class AnimNodeOutputID /* "modellib" */
{
public:
   uint32_t m_id; // 0x0 - 0x4
}; // size - 0x4


class AnimParamID /* "modellib" */
{
public:
   uint32_t m_id; // 0x0 - 0x4
}; // size - 0x4


class AnimScriptHandle /* "modellib" */
{
public:
   uint32_t m_id; // 0x0 - 0x4
}; // size - 0x4


class AnimStateID /* "modellib" */
{
public:
   uint32_t m_id; // 0x0 - 0x4
}; // size - 0x4


class AnimTagID /* "modellib" */
{
public:
   uint32_t m_id; // 0x0 - 0x4
}; // size - 0x4


class AnimationDecodeDebugDumpElement_t /* "animationsystem" */
{
public:
   int32_t m_nEntityIndex; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlString m_modelName; // 0x8 - 0x10
   CUtlVector< CUtlString > m_poseParams; // 0x10 - 0x28
   CUtlVector< CUtlString > m_decodeOps; // 0x28 - 0x40
   CUtlVector< CUtlString > m_internalOps; // 0x40 - 0x58
   CUtlVector< CUtlString > m_decodedAnims; // 0x58 - 0x70
}; // size - 0x70


class AnimationDecodeDebugDump_t /* "animationsystem" */
{
public:
   AnimationProcessingType_t m_processingType; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8 - 0x20
}; // size - 0x20


class AnimationSnapshot_t /* "animationsystem" */ : public AnimationSnapshotBase_t /* "animationsystem" */
{
public:
   int32_t m_nEntIndex; // 0x110 - 0x114
   unsigned char pad_114[0x4]; // 0x114 - 0x118
   CUtlString m_modelName; // 0x118 - 0x120
}; // size - 0x120


class AttachmentHandle_t /* "modellib" */
{
public:
   uint8_t m_Value; // 0x0 - 0x1
}; // size - 0x1


class BakedLightingInfo_t /* "worldrenderer" */
{
public:
   uint32_t m_nLightmapVersionNumber; // 0x0 - 0x4
   uint32_t m_nLightmapGameVersionNumber; // 0x4 - 0x8
   Vector2D m_vLightmapUvScale; // 0x8 - 0x10
   bool m_bHasLightmaps; // 0x10 - 0x11
   bool m_bBakedShadowsGamma20; // 0x11 - 0x12
   bool m_bCompressionEnabled; // 0x12 - 0x13
   uint8_t m_nChartPackIterations; // 0x13 - 0x14
   uint8_t m_nVradQuality; // 0x14 - 0x15
   unsigned char pad_15[0x3]; // 0x15 - 0x18
   CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // 0x18 - 0x30
}; // size - 0x30


class BlendItem_t /* "animgraphlib" */
{
public:
   CUtlVector< TagSpan_t > m_tags; // 0x0 - 0x18
   CAnimUpdateNodeRef m_pChild; // 0x18 - 0x28
   HSequence m_hSequence; // 0x28 - 0x2C
   Vector2D m_vPos; // 0x2C - 0x34
   float m_flDuration; // 0x34 - 0x38
   bool m_bUseCustomDuration; // 0x38 - 0x39
   unsigned char pad_39[0x7]; // 0x39 - 0x40
}; // size - 0x40


class BoneDemoCaptureSettings_t /* "animgraphlib" */
{
public:
   CUtlString m_boneName; // 0x0 - 0x8
   float m_flErrorSplineRotationMax; // 0x8 - 0xC
   float m_flErrorSplineTranslationMax; // 0xC - 0x10
   float m_flErrorSplineScaleMax; // 0x10 - 0x14
   float m_flErrorQuantizationRotationMax; // 0x14 - 0x18
   float m_flErrorQuantizationTranslationMax; // 0x18 - 0x1C
   float m_flErrorQuantizationScaleMax; // 0x1C - 0x20
}; // size - 0x20


class CActionComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x30 - 0x48
}; // size - 0x48


class CAddUpdateNode /* "animgraphlib" */ : public CBinaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_88[0x4]; // 0x88 - 0x8C
   BinaryNodeChildOption m_footMotionTiming; // 0x8C - 0x90
   bool m_bApplyToFootMotion; // 0x90 - 0x91
   bool m_bApplyChannelsSeparately; // 0x91 - 0x92
   bool m_bUseModelSpace; // 0x92 - 0x93
   bool m_bApplyScale; // 0x93 - 0x94
   unsigned char pad_94[0x4]; // 0x94 - 0x98
}; // size - 0x98


class CAimCameraUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   CAnimParamHandle m_hParameterPosition; // 0x68 - 0x6A
   CAnimParamHandle m_hParameterOrientation; // 0x6A - 0x6C
   CAnimParamHandle m_hParameterSpineRotationWeight; // 0x6C - 0x6E
   CAnimParamHandle m_hParameterPelvisOffset; // 0x6E - 0x70
   CAnimParamHandle m_hParameterUseIK; // 0x70 - 0x72
   CAnimParamHandle m_hParameterWeaponDepenetrationDistance; // 0x72 - 0x74
   CAnimParamHandle m_hParameterCameraClearanceDistance; // 0x74 - 0x76
   unsigned char pad_76[0x2]; // 0x76 - 0x78
   AimCameraOpFixedSettings_t m_opFixedSettings; // 0x78 - 0xA8
   unsigned char pad_A8[0x8]; // 0xA8 - 0xB0
}; // size - 0xB0


class CAimConstraint /* "modellib" */ : public CBaseConstraint /* "modellib" */
{
public:
   Quaternion m_qAimOffset; // 0x70 - 0x80
   uint32_t m_nUpType; // 0x80 - 0x84
   unsigned char pad_84[0xC]; // 0x84 - 0x90
}; // size - 0x90


class CAimMatrixUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x8]; // 0x68 - 0x70
   AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70 - 0x150
   unsigned char pad_150[0x8]; // 0x150 - 0x158
   AnimVectorSource m_target; // 0x158 - 0x15C
   CAnimParamHandle m_paramIndex; // 0x15C - 0x15E
   unsigned char pad_15E[0x2]; // 0x15E - 0x160
   HSequence m_hSequence; // 0x160 - 0x164
   bool m_bResetChild; // 0x164 - 0x165
   bool m_bLockWhenWaning; // 0x165 - 0x166
   unsigned char pad_166[0xA]; // 0x166 - 0x170
}; // size - 0x170


class CAnimActivity /* "animationsystem" */
{
public:
   CBufferString m_name; // 0x0 - 0x10
   int32_t m_nActivity; // 0x10 - 0x14
   int32_t m_nFlags; // 0x14 - 0x18
   int32_t m_nWeight; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CAnimAttachment /* "modellib" */
{
public:
   Quaternion m_influenceRotations[3]; // 0x0 - 0x30
   VectorAligned m_influenceOffsets[3]; // 0x30 - 0x60
   int32 m_influenceIndices[3]; // 0x60 - 0x6C
   float32 m_influenceWeights[3]; // 0x6C - 0x78
   uint8_t m_numInfluences; // 0x78 - 0x79
   unsigned char pad_79[0x7]; // 0x79 - 0x80
}; // size - 0x80


class CAnimBone /* "animationsystem" */
{
public:
   CBufferString m_name; // 0x0 - 0x10
   int32_t m_parent; // 0x10 - 0x14
   Vector m_pos; // 0x14 - 0x20
   QuaternionStorage m_quat; // 0x20 - 0x30
   float m_scale; // 0x30 - 0x34
   QuaternionStorage m_qAlignment; // 0x34 - 0x44
   int32_t m_flags; // 0x44 - 0x48
}; // size - 0x48


class CAnimBoneDifference /* "animationsystem" */
{
public:
   CBufferString m_name; // 0x0 - 0x10
   CBufferString m_parent; // 0x10 - 0x20
   Vector m_posError; // 0x20 - 0x2C
   bool m_bHasRotation; // 0x2C - 0x2D
   bool m_bHasMovement; // 0x2D - 0x2E
   unsigned char pad_2E[0x2]; // 0x2E - 0x30
}; // size - 0x30


class CAnimCycle /* "modellib" */ : public CCycleBase /* "modellib" */
{
public:
   unsigned char pad_0[0x4]; // 0x0 - 0x4
}; // size - 0x4


class CAnimData /* "animationsystem" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CBufferString m_name; // 0x10 - 0x20
   CUtlVector< CAnimDesc > m_animArray; // 0x20 - 0x38
   CUtlVector< CAnimDecoder > m_decoderArray; // 0x38 - 0x50
   int32_t m_nMaxUniqueFrameIndex; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
   CUtlVector< CAnimFrameSegment > m_segmentArray; // 0x58 - 0x70
}; // size - 0x70


class CAnimDataChannelDesc /* "animationsystem" */
{
public:
   CBufferString m_szChannelClass; // 0x0 - 0x10
   CBufferString m_szVariableName; // 0x10 - 0x20
   int32_t m_nFlags; // 0x20 - 0x24
   int32_t m_nType; // 0x24 - 0x28
   CBufferString m_szGrouping; // 0x28 - 0x38
   CBufferString m_szDescription; // 0x38 - 0x48
   CUtlVector< CBufferString > m_szElementNameArray; // 0x48 - 0x60
   CUtlVector< int32 > m_nElementIndexArray; // 0x60 - 0x78
   CUtlVector< uint32 > m_nElementMaskArray; // 0x78 - 0x90
}; // size - 0x90


class CAnimDecoder /* "animationsystem" */
{
public:
   CBufferString m_szName; // 0x0 - 0x10
   int32_t m_nVersion; // 0x10 - 0x14
   int32_t m_nType; // 0x14 - 0x18
}; // size - 0x18


class CAnimDemoCaptureSettings /* "animgraphlib" */
{
public:
   Vector2D m_vecErrorRangeSplineRotation; // 0x0 - 0x8
   Vector2D m_vecErrorRangeSplineTranslation; // 0x8 - 0x10
   Vector2D m_vecErrorRangeSplineScale; // 0x10 - 0x18
   float m_flIkRotation_MaxSplineError; // 0x18 - 0x1C
   float m_flIkTranslation_MaxSplineError; // 0x1C - 0x20
   Vector2D m_vecErrorRangeQuantizationRotation; // 0x20 - 0x28
   Vector2D m_vecErrorRangeQuantizationTranslation; // 0x28 - 0x30
   Vector2D m_vecErrorRangeQuantizationScale; // 0x30 - 0x38
   float m_flIkRotation_MaxQuantizationError; // 0x38 - 0x3C
   float m_flIkTranslation_MaxQuantizationError; // 0x3C - 0x40
   CUtlString m_baseSequence; // 0x40 - 0x48
   int32_t m_nBaseSequenceFrame; // 0x48 - 0x4C
   EDemoBoneSelectionMode m_boneSelectionMode; // 0x4C - 0x50
   CUtlVector< BoneDemoCaptureSettings_t > m_bones; // 0x50 - 0x68
   CUtlVector< IKDemoCaptureSettings_t > m_ikChains; // 0x68 - 0x80
}; // size - 0x80


class CAnimDesc /* "animationsystem" */
{
public:
   CBufferString m_name; // 0x0 - 0x10
   CAnimDesc_Flag m_flags; // 0x10 - 0x18
   float fps; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
   CAnimEncodedFrames m_Data; // 0x20 - 0xF8
   CUtlVector< CAnimMovement > m_movementArray; // 0xF8 - 0x110
   CUtlVector< CAnimEventDefinition > m_eventArray; // 0x110 - 0x128
   CUtlVector< CAnimActivity > m_activityArray; // 0x128 - 0x140
   CUtlVector< CAnimLocalHierarchy > m_hierarchyArray; // 0x140 - 0x158
   float framestalltime; // 0x158 - 0x15C
   Vector m_vecRootMin; // 0x15C - 0x168
   Vector m_vecRootMax; // 0x168 - 0x174
   unsigned char pad_174[0x4]; // 0x174 - 0x178
   CUtlVector< Vector > m_vecBoneWorldMin; // 0x178 - 0x190
   CUtlVector< Vector > m_vecBoneWorldMax; // 0x190 - 0x1A8
   CAnimSequenceParams m_sequenceParams; // 0x1A8 - 0x1B0
}; // size - 0x1B0


class CAnimDesc_Flag /* "animationsystem" */
{
public:
   bool m_bLooping; // 0x0 - 0x1
   bool m_bAllZeros; // 0x1 - 0x2
   bool m_bHidden; // 0x2 - 0x3
   bool m_bDelta; // 0x3 - 0x4
   bool m_bLegacyWorldspace; // 0x4 - 0x5
   bool m_bModelDoc; // 0x5 - 0x6
   bool m_bImplicitSeqIgnoreDelta; // 0x6 - 0x7
   bool m_bAnimGraphAdditive; // 0x7 - 0x8
}; // size - 0x8


class CAnimEncodeDifference /* "animationsystem" */
{
public:
   CUtlVector< CAnimBoneDifference > m_boneArray; // 0x0 - 0x18
   CUtlVector< CAnimMorphDifference > m_morphArray; // 0x18 - 0x30
   CUtlVector< CAnimUserDifference > m_userArray; // 0x30 - 0x48
   CUtlVector< uint8 > m_bHasRotationBitArray; // 0x48 - 0x60
   CUtlVector< uint8 > m_bHasMovementBitArray; // 0x60 - 0x78
   CUtlVector< uint8 > m_bHasMorphBitArray; // 0x78 - 0x90
   CUtlVector< uint8 > m_bHasUserBitArray; // 0x90 - 0xA8
}; // size - 0xA8


class CAnimEncodedFrames /* "animationsystem" */
{
public:
   CBufferString m_fileName; // 0x0 - 0x10
   int32_t m_nFrames; // 0x10 - 0x14
   int32_t m_nFramesPerBlock; // 0x14 - 0x18
   CUtlVector< CAnimFrameBlockAnim > m_frameblockArray; // 0x18 - 0x30
   CAnimEncodeDifference m_usageDifferences; // 0x30 - 0xD8
}; // size - 0xD8


class CAnimEnum /* "animationsystem" */
{
public:
   uint8_t m_value; // 0x0 - 0x1
}; // size - 0x1


class CAnimEventDefinition /* "animationsystem" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_nFrame; // 0x8 - 0xC
   int32_t m_nEndFrame; // 0xC - 0x10
   float m_flCycle; // 0x10 - 0x14
   float m_flDuration; // 0x14 - 0x18
   KeyValues3 m_EventData; // 0x18 - 0x28
   CBufferString m_sLegacyOptions; // 0x28 - 0x38
   CGlobalSymbol m_sEventName; // 0x38 - 0x40
}; // size - 0x40


class CAnimEventListener /* "server" */ : public CAnimEventListenerBase /* "server" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
}; // size - 0x20


class CAnimEventQueueListener /* "server" */ : public CAnimEventListenerBase /* "server" */
{
public:
   unsigned char pad_0[0x50]; // 0x0 - 0x50
}; // size - 0x50


class CAnimFoot /* "modellib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   Vector m_vBallOffset; // 0x8 - 0x14
   Vector m_vHeelOffset; // 0x14 - 0x20
   int32_t m_ankleBoneIndex; // 0x20 - 0x24
   int32_t m_toeBoneIndex; // 0x24 - 0x28
}; // size - 0x28


class CAnimFrameBlockAnim /* "animationsystem" */
{
public:
   int32_t m_nStartFrame; // 0x0 - 0x4
   int32_t m_nEndFrame; // 0x4 - 0x8
   CUtlVector< int32 > m_segmentIndexArray; // 0x8 - 0x20
}; // size - 0x20


class CAnimFrameSegment /* "animationsystem" */
{
public:
   int32_t m_nUniqueFrameIndex; // 0x0 - 0x4
   uint32_t m_nLocalElementMasks; // 0x4 - 0x8
   int32_t m_nLocalChannel; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlBinaryBlock m_container; // 0x10 - 0x28
}; // size - 0x28


class CAnimGraphDebugReplay /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
   CUtlString m_animGraphFileName; // 0x40 - 0x48
   CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // 0x48 - 0x60
   int32_t m_startIndex; // 0x60 - 0x64
   int32_t m_writeIndex; // 0x64 - 0x68
   int32_t m_frameCount; // 0x68 - 0x6C
   unsigned char pad_6C[0x4]; // 0x6C - 0x70
}; // size - 0x70


class CAnimGraphModelBinding /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlString m_modelName; // 0x8 - 0x10
   CSmartPtr< CAnimUpdateSharedData > m_pSharedData; // 0x10 - 0x18
   unsigned char pad_18[0x10]; // 0x18 - 0x28
}; // size - 0x28


class CAnimGraphNetworkSettings /* "animgraphlib" */ : public CAnimGraphSettingsGroup /* "animgraphlib" */
{
public:
   bool m_bNetworkingEnabled; // 0x20 - 0x21
   unsigned char pad_21[0x7]; // 0x21 - 0x28
}; // size - 0x28


class CAnimGraphSettingsManager /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18 - 0x30
}; // size - 0x30


class CAnimInputDamping /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   DampingSpeedFunction m_speedFunction; // 0x8 - 0xC
   float m_fSpeedScale; // 0xC - 0x10
}; // size - 0x10


class CAnimKeyData /* "animationsystem" */
{
public:
   CBufferString m_name; // 0x0 - 0x10
   CUtlVector< CAnimBone > m_boneArray; // 0x10 - 0x28
   CUtlVector< CAnimUser > m_userArray; // 0x28 - 0x40
   CUtlVector< CBufferString > m_morphArray; // 0x40 - 0x58
   int32_t m_nChannelElements; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
   CUtlVector< CAnimDataChannelDesc > m_dataChannelArray; // 0x60 - 0x78
}; // size - 0x78


class CAnimLocalHierarchy /* "animationsystem" */
{
public:
   CBufferString m_sBone; // 0x0 - 0x10
   CBufferString m_sNewParent; // 0x10 - 0x20
   int32_t m_nStartFrame; // 0x20 - 0x24
   int32_t m_nPeakFrame; // 0x24 - 0x28
   int32_t m_nTailFrame; // 0x28 - 0x2C
   int32_t m_nEndFrame; // 0x2C - 0x30
}; // size - 0x30


class CAnimMorphDifference /* "animationsystem" */
{
public:
   CBufferString m_name; // 0x0 - 0x10
}; // size - 0x10


class CAnimMovement /* "animationsystem" */
{
public:
   int32_t endframe; // 0x0 - 0x4
   int32_t motionflags; // 0x4 - 0x8
   float v0; // 0x8 - 0xC
   float v1; // 0xC - 0x10
   float angle; // 0x10 - 0x14
   Vector vector; // 0x14 - 0x20
   Vector position; // 0x20 - 0x2C
}; // size - 0x2C


class CAnimNodePath /* "animgraphlib" */
{
public:
   AnimNodeID m_path[11]; // 0x0 - 0x2C
   int32_t m_nCount; // 0x2C - 0x30
}; // size - 0x30


class CAnimParamHandle /* "animgraphlib" */
{
public:
   AnimParamType_t m_type; // 0x0 - 0x1
   uint8_t m_index; // 0x1 - 0x2
}; // size - 0x2


class CAnimParamHandleMap /* "animgraphlib" */
{
public:
   CUtlHashtable< uint16, int16 > m_list; // 0x0 - 0x20
}; // size - 0x20


class CAnimParameterManagerUpdater /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters; // 0x18 - 0x30
   CUtlHashtable< AnimParamID, int32 > m_idToIndexMap; // 0x30 - 0x50
   CUtlHashtable< CUtlString, int32 > m_nameToIndexMap; // 0x50 - 0x70
   CUtlVector< CAnimParamHandle > m_indexToHandle; // 0x70 - 0x88
   CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > > m_autoResetParams; // 0x88 - 0xA0
   CUtlHashtable< CAnimParamHandle, int16 > m_autoResetMap; // 0xA0 - 0xC0
   unsigned char pad_C0[0x40]; // 0xC0 - 0x100
}; // size - 0x100


class CAnimReplayFrame /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CUtlVector< CUtlBinaryBlock > m_inputDataBlocks; // 0x10 - 0x28
   CUtlBinaryBlock m_instanceData; // 0x28 - 0x40
   CTransform m_startingLocalToWorldTransform; // 0x40 - 0x60
   CTransform m_localToWorldTransform; // 0x60 - 0x80
   float m_timeStamp; // 0x80 - 0x84
   unsigned char pad_84[0xC]; // 0x84 - 0x90
}; // size - 0x90


class CAnimScriptComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   AnimScriptHandle m_hScript; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
}; // size - 0x38


class CAnimScriptManager /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CUtlVector< ScriptInfo_t > m_scriptInfo; // 0x10 - 0x28
   unsigned char pad_28[0x178]; // 0x28 - 0x1A0
}; // size - 0x1A0


class CAnimSequenceParams /* "animationsystem" */
{
public:
   float m_flFadeInTime; // 0x0 - 0x4
   float m_flFadeOutTime; // 0x4 - 0x8
}; // size - 0x8


class CAnimSkeleton /* "modellib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CUtlVector< CTransform > m_localSpaceTransforms; // 0x10 - 0x28
   CUtlVector< CTransform > m_modelSpaceTransforms; // 0x28 - 0x40
   CUtlVector< CUtlString > m_boneNames; // 0x40 - 0x58
   CUtlVector< CUtlVector< int32 > > m_children; // 0x58 - 0x70
   CUtlVector< int32 > m_parents; // 0x70 - 0x88
   CUtlVector< CAnimFoot > m_feet; // 0x88 - 0xA0
   CUtlVector< CUtlString > m_morphNames; // 0xA0 - 0xB8
   CUtlVector< int32 > m_lodBoneCounts; // 0xB8 - 0xD0
}; // size - 0xD0


class CAnimStateMachineUpdater /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlVector< CStateUpdateData > m_states; // 0x8 - 0x20
   CUtlVector< CTransitionUpdateData > m_transitions; // 0x20 - 0x38
   unsigned char pad_38[0x18]; // 0x38 - 0x50
   int32_t m_startStateIndex; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
}; // size - 0x58


class CAnimTagManagerUpdater /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18 - 0x30
   unsigned char pad_30[0x8]; // 0x30 - 0x38
}; // size - 0x38


class CAnimUpdateNodeRef /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_nodeIndex; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class CAnimUpdateSharedData /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes; // 0x10 - 0x28
   CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap; // 0x28 - 0x48
   CUtlVector< CSmartPtr< CAnimComponentUpdater > > m_components; // 0x48 - 0x60
   CSmartPtr< CAnimParameterManagerUpdater > m_pParamListUpdater; // 0x60 - 0x68
   CSmartPtr< CAnimTagManagerUpdater > m_pTagManagerUpdater; // 0x68 - 0x70
   CSmartPtr< CAnimScriptManager > m_scriptManager; // 0x70 - 0x78
   CAnimGraphSettingsManager m_settings; // 0x78 - 0xA8
   CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache; // 0xA8 - 0xB0
   CSmartPtr< CAnimSkeleton > m_pSkeleton; // 0xB0 - 0xB8
   CAnimNodePath m_rootNodePath; // 0xB8 - 0xE8
   unsigned char pad_E8[0x18]; // 0xE8 - 0x100
}; // size - 0x100


class CAnimUser /* "animationsystem" */
{
public:
   CBufferString m_name; // 0x0 - 0x10
   int32_t m_nType; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class CAnimUserDifference /* "animationsystem" */
{
public:
   CBufferString m_name; // 0x0 - 0x10
   int32_t m_nType; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class CAnimationGraphVisualizerAxis /* "animgraphlib" */ : public CAnimationGraphVisualizerPrimitiveBase /* "animgraphlib" */
{
public:
   CTransform m_xWsTransform; // 0x40 - 0x60
   float m_flAxisSize; // 0x60 - 0x64
   unsigned char pad_64[0xC]; // 0x64 - 0x70
}; // size - 0x70


class CAnimationGraphVisualizerLine /* "animgraphlib" */ : public CAnimationGraphVisualizerPrimitiveBase /* "animgraphlib" */
{
public:
   VectorAligned m_vWsPositionStart; // 0x40 - 0x50
   VectorAligned m_vWsPositionEnd; // 0x50 - 0x60
   Color m_Color; // 0x60 - 0x64
   unsigned char pad_64[0xC]; // 0x64 - 0x70
}; // size - 0x70


class CAnimationGraphVisualizerPie /* "animgraphlib" */ : public CAnimationGraphVisualizerPrimitiveBase /* "animgraphlib" */
{
public:
   VectorAligned m_vWsCenter; // 0x40 - 0x50
   VectorAligned m_vWsStart; // 0x50 - 0x60
   VectorAligned m_vWsEnd; // 0x60 - 0x70
   Color m_Color; // 0x70 - 0x74
   unsigned char pad_74[0xC]; // 0x74 - 0x80
}; // size - 0x80


class CAnimationGraphVisualizerSphere /* "animgraphlib" */ : public CAnimationGraphVisualizerPrimitiveBase /* "animgraphlib" */
{
public:
   VectorAligned m_vWsPosition; // 0x40 - 0x50
   float m_flRadius; // 0x50 - 0x54
   Color m_Color; // 0x54 - 0x58
   unsigned char pad_58[0x8]; // 0x58 - 0x60
}; // size - 0x60


class CAnimationGraphVisualizerText /* "animgraphlib" */ : public CAnimationGraphVisualizerPrimitiveBase /* "animgraphlib" */
{
public:
   VectorAligned m_vWsPosition; // 0x40 - 0x50
   Color m_Color; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
   CUtlString m_Text; // 0x58 - 0x60
}; // size - 0x60


class CAnimationGroup /* "animationsystem" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   uint32_t m_nFlags; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
   CBufferString m_name; // 0x18 - 0x28
   unsigned char pad_28[0x38]; // 0x28 - 0x60
   CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle; // 0x60 - 0x78
   CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle; // 0x78 - 0x90
   CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle; // 0x90 - 0x98
   CAnimKeyData m_decodeKey; // 0x98 - 0x110
   CUtlVector< CBufferString > m_szScripts; // 0x110 - 0x128
   unsigned char pad_128[0x8]; // 0x128 - 0x130
}; // size - 0x130


class CAttachment /* "modellib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CUtlString m_influenceNames[3]; // 0x8 - 0x20
   Quaternion m_vInfluenceRotations[3]; // 0x20 - 0x50
   Vector m_vInfluenceOffsets[3]; // 0x50 - 0x74
   float32 m_influenceWeights[3]; // 0x74 - 0x80
   bool m_bInfluenceRootTransform[3]; // 0x80 - 0x83
   uint8_t m_nInfluences; // 0x83 - 0x84
   bool m_bIgnoreRotation; // 0x84 - 0x85
   unsigned char pad_85[0xB]; // 0x85 - 0x90
}; // size - 0x90


class CAudioAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_50[0x8]; // 0x50 - 0x58
   CUtlString m_clipName; // 0x58 - 0x60
   CUtlString m_attachmentName; // 0x60 - 0x68
   float m_flVolume; // 0x68 - 0x6C
   bool m_bStopWhenTagEnds; // 0x6C - 0x6D
   bool m_bStopWhenGraphEnds; // 0x6D - 0x6E
   bool m_bPlayOnServer; // 0x6E - 0x6F
   bool m_bPlayOnClient; // 0x6F - 0x70
}; // size - 0x70


class CAudioEmphasisSample /* "soundsystem_voicecontainers" */
{
public:
   float m_flTime; // 0x0 - 0x4
   float m_flValue; // 0x4 - 0x8
}; // size - 0x8


class CAudioMorphData /* "soundsystem_voicecontainers" */
{
public:
   CUtlVector< float32 > m_times; // 0x0 - 0x18
   CUtlVector< uint32 > m_nameHashCodes; // 0x18 - 0x30
   CUtlVector< CUtlString > m_nameStrings; // 0x30 - 0x48
   CUtlVector< CUtlVector< float32 > > m_samples; // 0x48 - 0x60
   float m_flEaseIn; // 0x60 - 0x64
   float m_flEaseOut; // 0x64 - 0x68
}; // size - 0x68


class CAudioPhonemeTag /* "soundsystem_voicecontainers" */
{
public:
   float m_flStartTime; // 0x0 - 0x4
   float m_flEndTime; // 0x4 - 0x8
   int32_t m_nPhonemeCode; // 0x8 - 0xC
}; // size - 0xC


class CAudioSentence /* "soundsystem_voicecontainers" */
{
public:
   bool m_bShouldVoiceDuck; // 0x0 - 0x1
   unsigned char pad_1[0x7]; // 0x1 - 0x8
   CUtlVector< CAudioPhonemeTag > m_RunTimePhonemes; // 0x8 - 0x20
   CUtlVector< CAudioEmphasisSample > m_EmphasisSamples; // 0x20 - 0x38
   CAudioMorphData m_morphData; // 0x38 - 0xA0
}; // size - 0xA0


class CBaseIssue /* "server" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
   char m_szTypeString[64]; // 0x20 - 0x60
   char m_szDetailsString[260]; // 0x60 - 0x164
   int32_t m_iNumYesVotes; // 0x164 - 0x168
   int32_t m_iNumNoVotes; // 0x168 - 0x16C
   int32_t m_iNumPotentialVotes; // 0x16C - 0x170
   CVoteController* m_pVoteController; // 0x170 - 0x178
}; // size - 0x178


class CBindPoseUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x60]; // 0x0 - 0x60
}; // size - 0x60


class CBlend2DUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   unsigned char pad_58[0x8]; // 0x58 - 0x60
   CUtlVector< BlendItem_t > m_items; // 0x60 - 0x78
   CUtlVector< TagSpan_t > m_tags; // 0x78 - 0x90
   CParamSpanUpdater m_paramSpans; // 0x90 - 0xA8
   CUtlVector< int32 > m_nodeItemIndices; // 0xA8 - 0xC0
   CAnimInputDamping m_damping; // 0xC0 - 0xD0
   AnimValueSource m_blendSourceX; // 0xD0 - 0xD4
   CAnimParamHandle m_paramX; // 0xD4 - 0xD6
   unsigned char pad_D6[0x2]; // 0xD6 - 0xD8
   AnimValueSource m_blendSourceY; // 0xD8 - 0xDC
   CAnimParamHandle m_paramY; // 0xDC - 0xDE
   unsigned char pad_DE[0x2]; // 0xDE - 0xE0
   Blend2DMode m_eBlendMode; // 0xE0 - 0xE4
   float m_playbackSpeed; // 0xE4 - 0xE8
   bool m_bLoop; // 0xE8 - 0xE9
   bool m_bLockBlendOnReset; // 0xE9 - 0xEA
   bool m_bLockWhenWaning; // 0xEA - 0xEB
   bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xEB - 0xEC
   unsigned char pad_EC[0x4]; // 0xEC - 0xF0
}; // size - 0xF0


class CBlendCurve /* "animgraphlib" */
{
public:
   float m_flControlPoint1; // 0x0 - 0x4
   float m_flControlPoint2; // 0x4 - 0x8
}; // size - 0x8


class CBlendUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   unsigned char pad_58[0x8]; // 0x58 - 0x60
   CUtlVector< CAnimUpdateNodeRef > m_children; // 0x60 - 0x78
   CUtlVector< uint8 > m_sortedOrder; // 0x78 - 0x90
   CUtlVector< float32 > m_targetValues; // 0x90 - 0xA8
   unsigned char pad_A8[0x4]; // 0xA8 - 0xAC
   AnimValueSource m_blendValueSource; // 0xAC - 0xB0
   CAnimParamHandle m_paramIndex; // 0xB0 - 0xB2
   unsigned char pad_B2[0x6]; // 0xB2 - 0xB8
   CAnimInputDamping m_damping; // 0xB8 - 0xC8
   BlendKeyType m_blendKeyType; // 0xC8 - 0xCC
   bool m_bLockBlendOnReset; // 0xCC - 0xCD
   bool m_bSyncCycles; // 0xCD - 0xCE
   bool m_bLoop; // 0xCE - 0xCF
   bool m_bLockWhenWaning; // 0xCF - 0xD0
}; // size - 0xD0


class CBlockSelectionMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x50]; // 0x0 - 0x50
}; // size - 0x50


class CBodyGroupAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_50[0x8]; // 0x50 - 0x58
   int32_t m_nPriority; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
   CUtlVector< CBodyGroupSetting > m_bodyGroupSettings; // 0x60 - 0x78
}; // size - 0x78


class CBodyGroupSetting /* "animgraphlib" */
{
public:
   CUtlString m_BodyGroupName; // 0x0 - 0x8
   int32_t m_nBodyGroupOption; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class CBoneConstraintDotToMorph /* "modellib" */ : public CBoneConstraintBase /* "modellib" */
{
public:
   CUtlString m_sBoneName; // 0x28 - 0x30
   CUtlString m_sTargetBoneName; // 0x30 - 0x38
   CUtlString m_sMorphChannelName; // 0x38 - 0x40
   float32 m_flRemap[4]; // 0x40 - 0x50
   unsigned char pad_50[0x10]; // 0x50 - 0x60
}; // size - 0x60


class CBoneConstraintPoseSpaceBone /* "modellib" */ : public CBaseConstraint /* "modellib" */
{
public:
   class Input_t /* "modellib" */
   {
   public:
      Vector m_inputValue; // 0x0 - 0xC
      unsigned char pad_C[0x4]; // 0xC - 0x10
      CUtlVector< CTransform > m_outputTransformList; // 0x10 - 0x28
   }; // size - 0x28

   CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList; // 0x70 - 0x88
   unsigned char pad_88[0x10]; // 0x88 - 0x98
}; // size - 0x98



class CBoneConstraintPoseSpaceMorph /* "modellib" */ : public CBoneConstraintBase /* "modellib" */
{
public:
   class Input_t /* "modellib" */
   {
   public:
      Vector m_inputValue; // 0x0 - 0xC
      unsigned char pad_C[0x4]; // 0xC - 0x10
      CUtlVector< float32 > m_outputWeightList; // 0x10 - 0x28
   }; // size - 0x28

   CUtlString m_sBoneName; // 0x28 - 0x30
   CUtlString m_sAttachmentName; // 0x30 - 0x38
   CUtlVector< CUtlString > m_outputMorph; // 0x38 - 0x50
   CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList; // 0x50 - 0x68
   bool m_bClamp; // 0x68 - 0x69
   unsigned char pad_69[0x3F]; // 0x69 - 0xA8
}; // size - 0xA8



class CBoneMaskUpdateNode /* "animgraphlib" */ : public CBinaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_88[0x4]; // 0x88 - 0x8C
   int32_t m_nWeightListIndex; // 0x8C - 0x90
   float m_flRootMotionBlend; // 0x90 - 0x94
   BoneMaskBlendSpace m_blendSpace; // 0x94 - 0x98
   BinaryNodeChildOption m_footMotionTiming; // 0x98 - 0x9C
   bool m_bUseBlendScale; // 0x9C - 0x9D
   unsigned char pad_9D[0x3]; // 0x9D - 0xA0
   AnimValueSource m_blendValueSource; // 0xA0 - 0xA4
   CAnimParamHandle m_hBlendParameter; // 0xA4 - 0xA6
   unsigned char pad_A6[0x2]; // 0xA6 - 0xA8
}; // size - 0xA8


class CBonePositionMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   int32_t m_nBoneIndex; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
}; // size - 0x58


class CBoneVelocityMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   int32_t m_nBoneIndex; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
}; // size - 0x58


class CBoolAnimParameter /* "animgraphlib" */ : public CConcreteAnimParameter /* "animgraphlib" */
{
public:
   bool m_bDefaultValue; // 0x80 - 0x81
   unsigned char pad_81[0x7]; // 0x81 - 0x88
}; // size - 0x88


class CBreakableStageHelper /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_nCurrentStage; // 0x8 - 0xC
   int32_t m_nStageCount; // 0xC - 0x10
   unsigned char pad_10[0x8]; // 0x10 - 0x18
}; // size - 0x18


class CBtNodeComposite /* "server" */ : public CBtNode /* "server" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CBtNodeDecorator /* "server" */ : public CBtNode /* "server" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CCPPScriptComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   CUtlVector< CGlobalSymbol > m_scriptsToRun; // 0x30 - 0x48
   unsigned char pad_48[0x18]; // 0x48 - 0x60
}; // size - 0x60


class CCSDeathmatchScript_ConVars /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCSGOPlayerAnimGraphState /* "server" */
{
public:
   unsigned char pad_0[0x608]; // 0x0 - 0x608
}; // size - 0x608


class CCSGameModeScript_ConVars /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCachedPose /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlVector< CTransform > m_transforms; // 0x8 - 0x20
   CUtlVector< float32 > m_morphWeights; // 0x20 - 0x38
   HSequence m_hSequence; // 0x38 - 0x3C
   float m_flCycle; // 0x3C - 0x40
}; // size - 0x40


class CChicken_GraphController /* "server" */ : public CAnimGraphControllerBase /* "server" */
{
public:
   CAnimGraphParamRef< char* > m_paramActivity; // 0x18 - 0x38
   CAnimGraphParamRef< bool > m_paramEndActivityImmediately; // 0x38 - 0x50
}; // size - 0x50


class CChoiceUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58 - 0x70
   CUtlVector< float32 > m_weights; // 0x70 - 0x88
   CUtlVector< float32 > m_blendTimes; // 0x88 - 0xA0
   ChoiceMethod m_choiceMethod; // 0xA0 - 0xA4
   ChoiceChangeMethod m_choiceChangeMethod; // 0xA4 - 0xA8
   ChoiceBlendMethod m_blendMethod; // 0xA8 - 0xAC
   float m_blendTime; // 0xAC - 0xB0
   bool m_bCrossFade; // 0xB0 - 0xB1
   bool m_bResetChosen; // 0xB1 - 0xB2
   bool m_bDontResetSameSelection; // 0xB2 - 0xB3
   unsigned char pad_B3[0x5]; // 0xB3 - 0xB8
}; // size - 0xB8


class CChoreoUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x70]; // 0x0 - 0x70
}; // size - 0x70


class CClientAlphaProperty /* "client" */ : public IClientAlphaProperty /* "client" */
{
public:
   unsigned char pad_8[0x8]; // 0x8 - 0x10
   uint8_t m_nRenderFX; // 0x10 - 0x11
   uint8_t m_nRenderMode; // 0x11 - 0x12
   unsigned char m_bAlphaOverride : 1; // 0x12 - 0x13
   unsigned char m_bShadowAlphaOverride : 1; // 0x12 - 0x13
   unsigned char m_nReserved : 6; // 0x12 - 0x13
   uint8_t m_nAlpha; // 0x13 - 0x14
   uint16_t m_nDesyncOffset; // 0x14 - 0x16
   uint16_t m_nReserved2; // 0x16 - 0x18
   uint16_t m_nDistFadeStart; // 0x18 - 0x1A
   uint16_t m_nDistFadeEnd; // 0x1A - 0x1C
   float m_flFadeScale; // 0x1C - 0x20
   GameTime_t m_flRenderFxStartTime; // 0x20 - 0x24
   float m_flRenderFxDuration; // 0x24 - 0x28
   unsigned char pad_28[0x8]; // 0x28 - 0x30
}; // size - 0x30


class CClientGapTypeQueryRegistration /* "client" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class CClothSettingsAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_50[0x8]; // 0x50 - 0x58
   float m_flStiffness; // 0x58 - 0x5C
   float m_flEaseIn; // 0x5C - 0x60
   float m_flEaseOut; // 0x60 - 0x64
   unsigned char pad_64[0x4]; // 0x64 - 0x68
   CUtlString m_nVertexSet; // 0x68 - 0x70
}; // size - 0x70


class CCommentarySystem /* "server" */
{
public:
   unsigned char pad_0[0x11]; // 0x0 - 0x11
   bool m_bCommentaryConvarsChanging; // 0x11 - 0x12
   bool m_bCommentaryEnabledMidGame; // 0x12 - 0x13
   unsigned char pad_13[0x1]; // 0x13 - 0x14
   GameTime_t m_flNextTeleportTime; // 0x14 - 0x18
   int32_t m_iTeleportStage; // 0x18 - 0x1C
   bool m_bCheatState; // 0x1C - 0x1D
   bool m_bIsFirstSpawnGroupToLoad; // 0x1D - 0x1E
   unsigned char pad_1E[0x1A]; // 0x1E - 0x38
   CHandle< CPointCommentaryNode > m_hCurrentNode; // 0x38 - 0x3C
   CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // 0x3C - 0x40
   CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
   CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes; // 0x48 - 0x60
}; // size - 0x60


class CCompositeMaterialEditorDoc /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_nVersion; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< CompositeMaterialEditorPoint_t > m_Points; // 0x10 - 0x28
   KeyValues3 m_KVthumbnail; // 0x28 - 0x38
}; // size - 0x38


class CCompressorGroup /* "animationsystem" */
{
public:
   int32_t m_nTotalElementCount; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlVector< char* > m_szChannelClass; // 0x8 - 0x20
   CUtlVector< char* > m_szVariableName; // 0x20 - 0x38
   CUtlVector< fieldtype_t > m_nType; // 0x38 - 0x50
   CUtlVector< int32 > m_nFlags; // 0x50 - 0x68
   CUtlVector< CUtlString > m_szGrouping; // 0x68 - 0x80
   CUtlVector< int32 > m_nCompressorIndex; // 0x80 - 0x98
   CUtlVector< CUtlVector< char* > > m_szElementNames; // 0x98 - 0xB0
   CUtlVector< CUtlVector< int32 > > m_nElementUniqueID; // 0xB0 - 0xC8
   CUtlVector< uint32 > m_nElementMask; // 0xC8 - 0xE0
   unsigned char pad_E0[0x18]; // 0xE0 - 0xF8
   CUtlVector< CCompressor< Vector >* > m_vectorCompressor; // 0xF8 - 0x110
   CUtlVector< CCompressor< QuaternionStorage >* > m_quaternionCompressor; // 0x110 - 0x128
   CUtlVector< CCompressor< int32 >* > m_intCompressor; // 0x128 - 0x140
   CUtlVector< CCompressor< bool >* > m_boolCompressor; // 0x140 - 0x158
   CUtlVector< CCompressor< Color >* > m_colorCompressor; // 0x158 - 0x170
   CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor; // 0x170 - 0x188
   CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor; // 0x188 - 0x1A0
}; // size - 0x1A0


class CConstantForceController /* "server" */
{
public:
   unsigned char pad_0[0xC]; // 0x0 - 0xC
   Vector m_linear; // 0xC - 0x18
   RotationVector m_angular; // 0x18 - 0x24
   Vector m_linearSave; // 0x24 - 0x30
   RotationVector m_angularSave; // 0x30 - 0x3C
   unsigned char pad_3C[0x4]; // 0x3C - 0x40
}; // size - 0x40


class CConstraintSlave /* "modellib" */
{
public:
   Quaternion m_qBaseOrientation; // 0x0 - 0x10
   Vector m_vBasePosition; // 0x10 - 0x1C
   uint32_t m_nBoneHash; // 0x1C - 0x20
   float m_flWeight; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
   CUtlString m_sName; // 0x28 - 0x30
   unsigned char pad_30[0x30]; // 0x30 - 0x60
}; // size - 0x60


class CConstraintTarget /* "modellib" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
   Quaternion m_qOffset; // 0x20 - 0x30
   Vector m_vOffset; // 0x30 - 0x3C
   uint32_t m_nBoneHash; // 0x3C - 0x40
   CUtlString m_sName; // 0x40 - 0x48
   float m_flWeight; // 0x48 - 0x4C
   unsigned char pad_4C[0xD]; // 0x4C - 0x59
   bool m_bIsAttachment; // 0x59 - 0x5A
   unsigned char pad_5A[0x6]; // 0x5A - 0x60
}; // size - 0x60


class CCopyRecipientFilter /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_Flags; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< CPlayerSlot > m_Recipients; // 0x10 - 0x28
}; // size - 0x28


class CCurrentRotationVelocityMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x50]; // 0x0 - 0x50
}; // size - 0x50


class CCurrentVelocityMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x50]; // 0x0 - 0x50
}; // size - 0x50


class CCycleControlClipUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_58[0x8]; // 0x58 - 0x60
   CUtlVector< TagSpan_t > m_tags; // 0x60 - 0x78
   unsigned char pad_78[0x4]; // 0x78 - 0x7C
   HSequence m_hSequence; // 0x7C - 0x80
   float m_duration; // 0x80 - 0x84
   AnimValueSource m_valueSource; // 0x84 - 0x88
   CAnimParamHandle m_paramIndex; // 0x88 - 0x8A
   unsigned char pad_8A[0x6]; // 0x8A - 0x90
}; // size - 0x90


class CCycleControlUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   AnimValueSource m_valueSource; // 0x68 - 0x6C
   CAnimParamHandle m_paramIndex; // 0x6C - 0x6E
   unsigned char pad_6E[0x2]; // 0x6E - 0x70
}; // size - 0x70


class CDSPMixgroupModifier /* "soundsystem" */
{
public:
   CUtlString m_mixgroup; // 0x0 - 0x8
   float m_flModifier; // 0x8 - 0xC
   float m_flModifierMin; // 0xC - 0x10
   float m_flSourceModifier; // 0x10 - 0x14
   float m_flSourceModifierMin; // 0x14 - 0x18
   float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CDSPPresetMixgroupModifierTable /* "soundsystem" */
{
public:
   CUtlVector< CDspPresetModifierList > m_table; // 0x0 - 0x18
}; // size - 0x18


class CDampedPathAnimMotorUpdater /* "animgraphlib" */ : public CPathAnimMotorUpdaterBase /* "animgraphlib" */
{
public:
   unsigned char pad_28[0x4]; // 0x28 - 0x2C
   float m_flAnticipationTime; // 0x2C - 0x30
   float m_flMinSpeedScale; // 0x30 - 0x34
   CAnimParamHandle m_hAnticipationPosParam; // 0x34 - 0x36
   CAnimParamHandle m_hAnticipationHeadingParam; // 0x36 - 0x38
   float m_flSpringConstant; // 0x38 - 0x3C
   float m_flMinSpringTension; // 0x3C - 0x40
   float m_flMaxSpringTension; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
}; // size - 0x48


class CDampedValueComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   CUtlVector< CDampedValueUpdateItem > m_items; // 0x30 - 0x48
}; // size - 0x48


class CDampedValueUpdateItem /* "animgraphlib" */
{
public:
   CAnimInputDamping m_damping; // 0x0 - 0x10
   unsigned char pad_10[0x8]; // 0x10 - 0x18
   CAnimParamHandle m_hParamIn; // 0x18 - 0x1A
   CAnimParamHandle m_hParamOut; // 0x1A - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CDecalInfo /* "client" */
{
public:
   float m_flAnimationScale; // 0x0 - 0x4
   float m_flAnimationLifeSpan; // 0x4 - 0x8
   float m_flPlaceTime; // 0x8 - 0xC
   float m_flFadeStartTime; // 0xC - 0x10
   float m_flFadeDuration; // 0x10 - 0x14
   int32_t m_nVBSlot; // 0x14 - 0x18
   int32_t m_nBoneIndex; // 0x18 - 0x1C
   unsigned char pad_1C[0xC]; // 0x1C - 0x28
   Vector m_vPosition; // 0x28 - 0x34
   float m_flBoundingRadiusSqr; // 0x34 - 0x38
   unsigned char pad_38[0x8]; // 0x38 - 0x40
   CDecalInfo* m_pNext; // 0x40 - 0x48
   CDecalInfo* m_pPrev; // 0x48 - 0x50
   unsigned char pad_50[0x58]; // 0x50 - 0xA8
   int32_t m_nDecalMaterialIndex; // 0xA8 - 0xAC
   unsigned char pad_AC[0x4]; // 0xAC - 0xB0
}; // size - 0xB0


class CDemoSettingsComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   CAnimDemoCaptureSettings m_settings; // 0x30 - 0xB0
}; // size - 0xB0


class CDirectPlaybackTagData /* "animgraphlib" */
{
public:
   CUtlString m_sequenceName; // 0x0 - 0x8
   CUtlVector< TagSpan_t > m_tags; // 0x8 - 0x20
}; // size - 0x20


class CDirectPlaybackUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x4]; // 0x68 - 0x6C
   bool m_bFinishEarly; // 0x6C - 0x6D
   bool m_bResetOnFinish; // 0x6D - 0x6E
   unsigned char pad_6E[0x2]; // 0x6E - 0x70
   CUtlVector< CDirectPlaybackTagData > m_allTags; // 0x70 - 0x88
}; // size - 0x88


class CDirectionalBlendUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_58[0x4]; // 0x58 - 0x5C
   HSequence m_hSequences[8]; // 0x5C - 0x7C
   unsigned char pad_7C[0x4]; // 0x7C - 0x80
   CAnimInputDamping m_damping; // 0x80 - 0x90
   AnimValueSource m_blendValueSource; // 0x90 - 0x94
   CAnimParamHandle m_paramIndex; // 0x94 - 0x96
   unsigned char pad_96[0x2]; // 0x96 - 0x98
   float m_playbackSpeed; // 0x98 - 0x9C
   float m_duration; // 0x9C - 0xA0
   bool m_bLoop; // 0xA0 - 0xA1
   bool m_bLockBlendOnReset; // 0xA1 - 0xA2
   unsigned char pad_A2[0x6]; // 0xA2 - 0xA8
}; // size - 0xA8


class CDistanceRemainingMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   float m_flMaxDistance; // 0x50 - 0x54
   float m_flMinDistance; // 0x54 - 0x58
   float m_flStartGoalFilterDistance; // 0x58 - 0x5C
   float m_flMaxGoalOvershootScale; // 0x5C - 0x60
   bool m_bFilterFixedMinDistance; // 0x60 - 0x61
   bool m_bFilterGoalDistance; // 0x61 - 0x62
   bool m_bFilterGoalOvershoot; // 0x62 - 0x63
   unsigned char pad_63[0x5]; // 0x63 - 0x68
}; // size - 0x68


class CDrawCullingData /* "modellib" */
{
public:
   Vector m_vConeApex; // 0x0 - 0xC
   int8 m_ConeAxis[3]; // 0xC - 0xF
   int8_t m_ConeCutoff; // 0xF - 0x10
}; // size - 0x10


class CDspPresetModifierList /* "soundsystem" */
{
public:
   CUtlString m_dspName; // 0x0 - 0x8
   CUtlVector< CDSPMixgroupModifier > m_modifiers; // 0x8 - 0x20
}; // size - 0x20


class CEditableMotionGraph /* "animgraphlib" */ : public CMotionGraph /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CEmitTagActionUpdater /* "animgraphlib" */ : public CAnimActionUpdater /* "animgraphlib" */
{
public:
   int32_t m_nTagIndex; // 0x18 - 0x1C
   bool m_bIsZeroDuration; // 0x1C - 0x1D
   unsigned char pad_1D[0x3]; // 0x1D - 0x20
}; // size - 0x20


class CEmptyEntityInstance /* "entity2" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CEntityComponentHelper /* "entity2" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   uint32_t m_flags; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   EntComponentInfo_t* m_pInfo; // 0x10 - 0x18
   int32_t m_nPriority; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
   CEntityComponentHelper* m_pNext; // 0x20 - 0x28
}; // size - 0x28


class CEntityIOOutput /* "entity2" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18 - 0x28
}; // size - 0x28


class CEntitySubclassVDataBase /* "server" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
}; // size - 0x28


class CEnumAnimParameter /* "animgraphlib" */ : public CConcreteAnimParameter /* "animgraphlib" */
{
public:
   unsigned char pad_80[0x8]; // 0x80 - 0x88
   uint8_t m_defaultValue; // 0x88 - 0x89
   unsigned char pad_89[0x7]; // 0x89 - 0x90
   CUtlVector< CUtlString > m_enumOptions; // 0x90 - 0xA8
   CUtlVector< uint64 > m_vecEnumReferenced; // 0xA8 - 0xC0
   unsigned char pad_C0[0x18]; // 0xC0 - 0xD8
}; // size - 0xD8


class CExampleSchemaVData_Monomorphic /* "resourcefile" */
{
public:
   int32_t m_nExample1; // 0x0 - 0x4
   int32_t m_nExample2; // 0x4 - 0x8
}; // size - 0x8


class CExampleSchemaVData_PolymorphicDerivedA /* "resourcefile" */ : public CExampleSchemaVData_PolymorphicBase /* "resourcefile" */
{
public:
   int32_t m_nDerivedA; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class CExampleSchemaVData_PolymorphicDerivedB /* "resourcefile" */ : public CExampleSchemaVData_PolymorphicBase /* "resourcefile" */
{
public:
   int32_t m_nDerivedB; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class CExpressionActionUpdater /* "animgraphlib" */ : public CAnimActionUpdater /* "animgraphlib" */
{
public:
   CAnimParamHandle m_hParam; // 0x18 - 0x1A
   AnimParamType_t m_eParamType; // 0x1A - 0x1B
   unsigned char pad_1B[0x1]; // 0x1B - 0x1C
   AnimScriptHandle m_hScript; // 0x1C - 0x20
}; // size - 0x20


class CFeIndexedJiggleBone /* "physicslib" */
{
public:
   uint32_t m_nNode; // 0x0 - 0x4
   uint32_t m_nJiggleParent; // 0x4 - 0x8
   CFeJiggleBone m_jiggleBone; // 0x8 - 0xA4
}; // size - 0xA4


class CFeJiggleBone /* "physicslib" */
{
public:
   uint32_t m_nFlags; // 0x0 - 0x4
   float m_flLength; // 0x4 - 0x8
   float m_flTipMass; // 0x8 - 0xC
   float m_flYawStiffness; // 0xC - 0x10
   float m_flYawDamping; // 0x10 - 0x14
   float m_flPitchStiffness; // 0x14 - 0x18
   float m_flPitchDamping; // 0x18 - 0x1C
   float m_flAlongStiffness; // 0x1C - 0x20
   float m_flAlongDamping; // 0x20 - 0x24
   float m_flAngleLimit; // 0x24 - 0x28
   float m_flMinYaw; // 0x28 - 0x2C
   float m_flMaxYaw; // 0x2C - 0x30
   float m_flYawFriction; // 0x30 - 0x34
   float m_flYawBounce; // 0x34 - 0x38
   float m_flMinPitch; // 0x38 - 0x3C
   float m_flMaxPitch; // 0x3C - 0x40
   float m_flPitchFriction; // 0x40 - 0x44
   float m_flPitchBounce; // 0x44 - 0x48
   float m_flBaseMass; // 0x48 - 0x4C
   float m_flBaseStiffness; // 0x4C - 0x50
   float m_flBaseDamping; // 0x50 - 0x54
   float m_flBaseMinLeft; // 0x54 - 0x58
   float m_flBaseMaxLeft; // 0x58 - 0x5C
   float m_flBaseLeftFriction; // 0x5C - 0x60
   float m_flBaseMinUp; // 0x60 - 0x64
   float m_flBaseMaxUp; // 0x64 - 0x68
   float m_flBaseUpFriction; // 0x68 - 0x6C
   float m_flBaseMinForward; // 0x6C - 0x70
   float m_flBaseMaxForward; // 0x70 - 0x74
   float m_flBaseForwardFriction; // 0x74 - 0x78
   float m_flRadius0; // 0x78 - 0x7C
   float m_flRadius1; // 0x7C - 0x80
   Vector m_vPoint0; // 0x80 - 0x8C
   Vector m_vPoint1; // 0x8C - 0x98
   uint16_t m_nCollisionMask; // 0x98 - 0x9A
   unsigned char pad_9A[0x2]; // 0x9A - 0x9C
}; // size - 0x9C


class CFeMorphLayer /* "physicslib" */
{
public:
   CUtlString m_Name; // 0x0 - 0x8
   uint32_t m_nNameHash; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< uint16 > m_Nodes; // 0x10 - 0x28
   CUtlVector< Vector > m_InitPos; // 0x28 - 0x40
   CUtlVector< float32 > m_Gravity; // 0x40 - 0x58
   CUtlVector< float32 > m_GoalStrength; // 0x58 - 0x70
   CUtlVector< float32 > m_GoalDamping; // 0x70 - 0x88
}; // size - 0x88


class CFeNamedJiggleBone /* "physicslib" */
{
public:
   CUtlString m_strParentBone; // 0x0 - 0x8
   unsigned char pad_8[0x8]; // 0x8 - 0x10
   CTransform m_transform; // 0x10 - 0x30
   uint32_t m_nJiggleParent; // 0x30 - 0x34
   CFeJiggleBone m_jiggleBone; // 0x34 - 0xD0
}; // size - 0xD0


class CFeVertexMapBuildArray /* "physicslib" */
{
public:
   CUtlVector< FeVertexMapBuild_t* > m_Array; // 0x0 - 0x18
}; // size - 0x18


class CFireOverlay /* "client" */ : public CGlowOverlay /* "client" */
{
public:
   C_FireSmoke* m_pOwner; // 0xD0 - 0xD8
   Vector m_vBaseColors[4]; // 0xD8 - 0x108
   float m_flScale; // 0x108 - 0x10C
   int32_t m_nGUID; // 0x10C - 0x110
}; // size - 0x110


class CFiringModeFloat /* "server" */
{
public:
   float32 m_flValues[2]; // 0x0 - 0x8
}; // size - 0x8


class CFiringModeInt /* "server" */
{
public:
   int32 m_nValues[2]; // 0x0 - 0x8
}; // size - 0x8


class CFlashlightEffect /* "client" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   bool m_bIsOn; // 0x10 - 0x11
   unsigned char pad_11[0xF]; // 0x11 - 0x20
   bool m_bMuzzleFlashEnabled; // 0x20 - 0x21
   unsigned char pad_21[0x3]; // 0x21 - 0x24
   float m_flMuzzleFlashBrightness; // 0x24 - 0x28
   unsigned char pad_28[0x8]; // 0x28 - 0x30
   Quaternion m_quatMuzzleFlashOrientation; // 0x30 - 0x40
   Vector m_vecMuzzleFlashOrigin; // 0x40 - 0x4C
   float m_flFov; // 0x4C - 0x50
   float m_flFarZ; // 0x50 - 0x54
   float m_flLinearAtten; // 0x54 - 0x58
   bool m_bCastsShadows; // 0x58 - 0x59
   unsigned char pad_59[0x3]; // 0x59 - 0x5C
   float m_flCurrentPullBackDist; // 0x5C - 0x60
   CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x60 - 0x68
   CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x68 - 0x70
   char m_textureName[64]; // 0x70 - 0xB0
   unsigned char pad_B0[0x230]; // 0xB0 - 0x2E0
}; // size - 0x2E0


class CFlexController /* "modellib" */
{
public:
   CUtlString m_szName; // 0x0 - 0x8
   CUtlString m_szType; // 0x8 - 0x10
   float min; // 0x10 - 0x14
   float max; // 0x14 - 0x18
}; // size - 0x18


class CFlexDesc /* "modellib" */
{
public:
   CUtlString m_szFacs; // 0x0 - 0x8
}; // size - 0x8


class CFlexOp /* "modellib" */
{
public:
   FlexOpCode_t m_OpCode; // 0x0 - 0x4
   int32_t m_Data; // 0x4 - 0x8
}; // size - 0x8


class CFlexRule /* "modellib" */
{
public:
   int32_t m_nFlex; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlVector< CFlexOp > m_FlexOps; // 0x8 - 0x20
}; // size - 0x20


class CFloatAnimParameter /* "animgraphlib" */ : public CConcreteAnimParameter /* "animgraphlib" */
{
public:
   float m_fDefaultValue; // 0x80 - 0x84
   float m_fMinValue; // 0x84 - 0x88
   float m_fMaxValue; // 0x88 - 0x8C
   bool m_bInterpolate; // 0x8C - 0x8D
   unsigned char pad_8D[0x3]; // 0x8D - 0x90
}; // size - 0x90


class CFollowAttachmentUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x8]; // 0x68 - 0x70
   FollowAttachmentSettings_t m_opFixedData; // 0x70 - 0x100
   unsigned char pad_100[0x10]; // 0x100 - 0x110
}; // size - 0x110


class CFollowPathUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x4]; // 0x68 - 0x6C
   float m_flBlendOutTime; // 0x6C - 0x70
   bool m_bBlockNonPathMovement; // 0x70 - 0x71
   bool m_bStopFeetAtGoal; // 0x71 - 0x72
   bool m_bScaleSpeed; // 0x72 - 0x73
   unsigned char pad_73[0x1]; // 0x73 - 0x74
   float m_flScale; // 0x74 - 0x78
   float m_flMinAngle; // 0x78 - 0x7C
   float m_flMaxAngle; // 0x7C - 0x80
   float m_flSpeedScaleBlending; // 0x80 - 0x84
   unsigned char pad_84[0x4]; // 0x84 - 0x88
   CAnimInputDamping m_turnDamping; // 0x88 - 0x98
   AnimValueSource m_facingTarget; // 0x98 - 0x9C
   CAnimParamHandle m_hParam; // 0x9C - 0x9E
   unsigned char pad_9E[0x2]; // 0x9E - 0xA0
   float m_flTurnToFaceOffset; // 0xA0 - 0xA4
   bool m_bTurnToFace; // 0xA4 - 0xA5
   unsigned char pad_A5[0x3]; // 0xA5 - 0xA8
}; // size - 0xA8


class CFollowTargetUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   FollowTargetOpFixedSettings_t m_opFixedData; // 0x68 - 0x78
   unsigned char pad_78[0x8]; // 0x78 - 0x80
   CAnimParamHandle m_hParameterPosition; // 0x80 - 0x82
   CAnimParamHandle m_hParameterOrientation; // 0x82 - 0x84
   unsigned char pad_84[0x4]; // 0x84 - 0x88
}; // size - 0x88


class CFootAdjustmentUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x8]; // 0x68 - 0x70
   CUtlVector< HSequence > m_clips; // 0x70 - 0x88
   CPoseHandle m_hBasePoseCacheHandle; // 0x88 - 0x8C
   CAnimParamHandle m_facingTarget; // 0x8C - 0x8E
   unsigned char pad_8E[0x2]; // 0x8E - 0x90
   float m_flTurnTimeMin; // 0x90 - 0x94
   float m_flTurnTimeMax; // 0x94 - 0x98
   float m_flStepHeightMax; // 0x98 - 0x9C
   float m_flStepHeightMaxAngle; // 0x9C - 0xA0
   bool m_bResetChild; // 0xA0 - 0xA1
   bool m_bAnimationDriven; // 0xA1 - 0xA2
   unsigned char pad_A2[0x6]; // 0xA2 - 0xA8
}; // size - 0xA8


class CFootCycle /* "modellib" */ : public CCycleBase /* "modellib" */
{
public:
   unsigned char pad_0[0x4]; // 0x0 - 0x4
}; // size - 0x4


class CFootCycleDefinition /* "modellib" */
{
public:
   Vector m_vStancePositionMS; // 0x0 - 0xC
   Vector m_vMidpointPositionMS; // 0xC - 0x18
   float m_flStanceDirectionMS; // 0x18 - 0x1C
   Vector m_vToStrideStartPos; // 0x1C - 0x28
   CAnimCycle m_stanceCycle; // 0x28 - 0x2C
   CFootCycle m_footLiftCycle; // 0x2C - 0x30
   CFootCycle m_footOffCycle; // 0x30 - 0x34
   CFootCycle m_footStrikeCycle; // 0x34 - 0x38
   CFootCycle m_footLandCycle; // 0x38 - 0x3C
}; // size - 0x3C


class CFootCycleMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   CUtlVector< int32 > m_footIndices; // 0x50 - 0x68
}; // size - 0x68


class CFootDefinition /* "modellib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CUtlString m_ankleBoneName; // 0x8 - 0x10
   CUtlString m_toeBoneName; // 0x10 - 0x18
   Vector m_vBallOffset; // 0x18 - 0x24
   Vector m_vHeelOffset; // 0x24 - 0x30
   float m_flFootLength; // 0x30 - 0x34
   float m_flBindPoseDirectionMS; // 0x34 - 0x38
   float m_flTraceHeight; // 0x38 - 0x3C
   float m_flTraceRadius; // 0x3C - 0x40
}; // size - 0x40


class CFootFallAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_50[0x8]; // 0x50 - 0x58
   FootFallTagFoot_t m_foot; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
}; // size - 0x60


class CFootLockUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   FootLockPoseOpFixedSettings m_opFixedSettings; // 0x68 - 0xC8
   unsigned char pad_C8[0x8]; // 0xC8 - 0xD0
   CUtlVector< FootFixedSettings > m_footSettings; // 0xD0 - 0xE8
   CAnimInputDamping m_hipShiftDamping; // 0xE8 - 0xF8
   CAnimInputDamping m_rootHeightDamping; // 0xF8 - 0x108
   float m_flStrideCurveScale; // 0x108 - 0x10C
   float m_flStrideCurveLimitScale; // 0x10C - 0x110
   float m_flStepHeightIncreaseScale; // 0x110 - 0x114
   float m_flStepHeightDecreaseScale; // 0x114 - 0x118
   float m_flHipShiftScale; // 0x118 - 0x11C
   float m_flBlendTime; // 0x11C - 0x120
   float m_flMaxRootHeightOffset; // 0x120 - 0x124
   float m_flMinRootHeightOffset; // 0x124 - 0x128
   float m_flTiltPlanePitchSpringStrength; // 0x128 - 0x12C
   float m_flTiltPlaneRollSpringStrength; // 0x12C - 0x130
   bool m_bApplyFootRotationLimits; // 0x130 - 0x131
   bool m_bApplyHipShift; // 0x131 - 0x132
   bool m_bModulateStepHeight; // 0x132 - 0x133
   bool m_bResetChild; // 0x133 - 0x134
   bool m_bEnableVerticalCurvedPaths; // 0x134 - 0x135
   bool m_bEnableRootHeightDamping; // 0x135 - 0x136
   unsigned char pad_136[0x2]; // 0x136 - 0x138
}; // size - 0x138


class CFootMotion /* "modellib" */
{
public:
   CUtlVector< CFootStride > m_strides; // 0x0 - 0x18
   CUtlString m_name; // 0x18 - 0x20
   bool m_bAdditive; // 0x20 - 0x21
   unsigned char pad_21[0x7]; // 0x21 - 0x28
}; // size - 0x28


class CFootPinningUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x8]; // 0x68 - 0x70
   FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x70 - 0xA0
   FootPinningTimingSource m_eTimingSource; // 0xA0 - 0xA4
   unsigned char pad_A4[0x4]; // 0xA4 - 0xA8
   CUtlVector< CAnimParamHandle > m_params; // 0xA8 - 0xC0
   bool m_bResetChild; // 0xC0 - 0xC1
   unsigned char pad_C1[0x7]; // 0xC1 - 0xC8
}; // size - 0xC8


class CFootPositionMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   CUtlVector< int32 > m_footIndices; // 0x50 - 0x68
   bool m_bIgnoreSlope; // 0x68 - 0x69
   unsigned char pad_69[0x7]; // 0x69 - 0x70
}; // size - 0x70


class CFootStepTriggerUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   CUtlVector< FootStepTrigger > m_triggers; // 0x68 - 0x80
   unsigned char pad_80[0x4]; // 0x80 - 0x84
   float m_flTolerance; // 0x84 - 0x88
}; // size - 0x88


class CFootStride /* "modellib" */
{
public:
   CFootCycleDefinition m_definition; // 0x0 - 0x3C
   unsigned char pad_3C[0x4]; // 0x3C - 0x40
   CFootTrajectories m_trajectories; // 0x40 - 0x58
}; // size - 0x58


class CFootTrajectories /* "modellib" */
{
public:
   CUtlVector< CFootTrajectory > m_trajectories; // 0x0 - 0x18
}; // size - 0x18


class CFootTrajectory /* "modellib" */
{
public:
   Vector m_vOffset; // 0x0 - 0xC
   float m_flRotationOffset; // 0xC - 0x10
   float m_flProgression; // 0x10 - 0x14
}; // size - 0x14


class CFootstepLandedAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_50[0x8]; // 0x50 - 0x58
   FootstepLandedFootSoundType_t m_FootstepType; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
   CUtlString m_OverrideSoundName; // 0x60 - 0x68
   CUtlString m_DebugAnimSourceString; // 0x68 - 0x70
   CUtlString m_BoneName; // 0x70 - 0x78
}; // size - 0x78


class CFootstepTableHandle /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class CFuseProgram /* "mathlib_extended" */
{
public:
   CUtlVector< uint8 > m_programBuffer; // 0x0 - 0x18
   CUtlVector< FuseVariableIndex_t > m_variablesRead; // 0x18 - 0x30
   CUtlVector< FuseVariableIndex_t > m_variablesWritten; // 0x30 - 0x48
   int32_t m_nMaxTempVarsUsed; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
}; // size - 0x50


class CFuseSymbolTable /* "mathlib_extended" */
{
public:
   CUtlVector< ConstantInfo_t > m_constants; // 0x0 - 0x18
   CUtlVector< VariableInfo_t > m_variables; // 0x18 - 0x30
   CUtlVector< FunctionInfo_t > m_functions; // 0x30 - 0x48
   CUtlHashtable< CUtlStringToken, int32 > m_constantMap; // 0x48 - 0x68
   CUtlHashtable< CUtlStringToken, int32 > m_variableMap; // 0x68 - 0x88
   CUtlHashtable< CUtlStringToken, int32 > m_functionMap; // 0x88 - 0xA8
   unsigned char pad_A8[0x8]; // 0xA8 - 0xB0
}; // size - 0xB0


class CFutureFacingMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   float m_flDistance; // 0x50 - 0x54
   float m_flTime; // 0x54 - 0x58
}; // size - 0x58


class CFutureVelocityMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   float m_flDistance; // 0x50 - 0x54
   float m_flStoppingDistance; // 0x54 - 0x58
   float m_flTargetSpeed; // 0x58 - 0x5C
   VelocityMetricMode m_eMode; // 0x5C - 0x5D
   unsigned char pad_5D[0x3]; // 0x5D - 0x60
}; // size - 0x60


class CGameChoreoServices /* "server" */ : public IChoreoServices /* "server" */
{
public:
   CHandle< CBaseAnimGraph > m_hOwner; // 0x8 - 0xC
   CHandle< CScriptedSequence > m_hScriptedSequence; // 0xC - 0x10
   IChoreoServices::ScriptState_t m_scriptState; // 0x10 - 0x14
   IChoreoServices::ChoreoState_t m_choreoState; // 0x14 - 0x18
   GameTime_t m_flTimeStartedState; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CGameScriptedMoveData /* "server" */
{
public:
   Vector m_vAccumulatedRootMotion; // 0x0 - 0xC
   Vector m_vDest; // 0xC - 0x18
   Vector m_vSrc; // 0x18 - 0x24
   QAngle m_angSrc; // 0x24 - 0x30
   QAngle m_angDst; // 0x30 - 0x3C
   QAngle m_angCurrent; // 0x3C - 0x48
   float m_flAngRate; // 0x48 - 0x4C
   float m_flDuration; // 0x4C - 0x50
   GameTime_t m_flStartTime; // 0x50 - 0x54
   bool m_bActive; // 0x54 - 0x55
   bool m_bTeleportOnEnd; // 0x55 - 0x56
   bool m_bIgnoreRotation; // 0x56 - 0x57
   unsigned char pad_57[0x1]; // 0x57 - 0x58
   ScriptedMoveType_t m_nType; // 0x58 - 0x5C
   bool m_bSuccess; // 0x5C - 0x5D
   unsigned char pad_5D[0x3]; // 0x5D - 0x60
   ForcedCrouchState_t m_nForcedCrouchState; // 0x60 - 0x64
   bool m_bIgnoreCollisions; // 0x64 - 0x65
   unsigned char pad_65[0x3]; // 0x65 - 0x68
}; // size - 0x68


class CGlobalLightBase /* "client" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   bool m_bSpotLight; // 0x10 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
   Vector m_SpotLightOrigin; // 0x14 - 0x20
   QAngle m_SpotLightAngles; // 0x20 - 0x2C
   Vector m_ShadowDirection; // 0x2C - 0x38
   Vector m_AmbientDirection; // 0x38 - 0x44
   Vector m_SpecularDirection; // 0x44 - 0x50
   Vector m_InspectorSpecularDirection; // 0x50 - 0x5C
   float m_flSpecularPower; // 0x5C - 0x60
   float m_flSpecularIndependence; // 0x60 - 0x64
   Color m_SpecularColor; // 0x64 - 0x68
   bool m_bStartDisabled; // 0x68 - 0x69
   bool m_bEnabled; // 0x69 - 0x6A
   Color m_LightColor; // 0x6A - 0x6E
   Color m_AmbientColor1; // 0x6E - 0x72
   Color m_AmbientColor2; // 0x72 - 0x76
   Color m_AmbientColor3; // 0x76 - 0x7A
   unsigned char pad_7A[0x2]; // 0x7A - 0x7C
   float m_flSunDistance; // 0x7C - 0x80
   float m_flFOV; // 0x80 - 0x84
   float m_flNearZ; // 0x84 - 0x88
   float m_flFarZ; // 0x88 - 0x8C
   bool m_bEnableShadows; // 0x8C - 0x8D
   bool m_bOldEnableShadows; // 0x8D - 0x8E
   bool m_bBackgroundClearNotRequired; // 0x8E - 0x8F
   unsigned char pad_8F[0x1]; // 0x8F - 0x90
   float m_flCloudScale; // 0x90 - 0x94
   float m_flCloud1Speed; // 0x94 - 0x98
   float m_flCloud1Direction; // 0x98 - 0x9C
   float m_flCloud2Speed; // 0x9C - 0xA0
   float m_flCloud2Direction; // 0xA0 - 0xA4
   unsigned char pad_A4[0xC]; // 0xA4 - 0xB0
   float m_flAmbientScale1; // 0xB0 - 0xB4
   float m_flAmbientScale2; // 0xB4 - 0xB8
   float m_flGroundScale; // 0xB8 - 0xBC
   float m_flLightScale; // 0xBC - 0xC0
   float m_flFoWDarkness; // 0xC0 - 0xC4
   bool m_bEnableSeparateSkyboxFog; // 0xC4 - 0xC5
   unsigned char pad_C5[0x3]; // 0xC5 - 0xC8
   Vector m_vFowColor; // 0xC8 - 0xD4
   Vector m_ViewOrigin; // 0xD4 - 0xE0
   QAngle m_ViewAngles; // 0xE0 - 0xEC
   float m_flViewFoV; // 0xEC - 0xF0
   Vector m_WorldPoints[8]; // 0xF0 - 0x150
   unsigned char pad_150[0x358]; // 0x150 - 0x4A8
   Vector2D m_vFogOffsetLayer0; // 0x4A8 - 0x4B0
   Vector2D m_vFogOffsetLayer1; // 0x4B0 - 0x4B8
   CHandle< C_BaseEntity > m_hEnvWind; // 0x4B8 - 0x4BC
   CHandle< C_BaseEntity > m_hEnvSky; // 0x4BC - 0x4C0
}; // size - 0x4C0


class CGlowSprite /* "client" */
{
public:
   Vector m_vColor; // 0x0 - 0xC
   float m_flHorzSize; // 0xC - 0x10
   float m_flVertSize; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18 - 0x20
}; // size - 0x20


class CHintMessage /* "server" */
{
public:
   char* m_hintString; // 0x0 - 0x8
   CUtlVector< char* > m_args; // 0x8 - 0x20
   float m_duration; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
}; // size - 0x28


class CHintMessageQueue /* "server" */
{
public:
   float m_tmMessageEnd; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlVector< CHintMessage* > m_messages; // 0x8 - 0x20
   CBasePlayerController* m_pPlayerController; // 0x20 - 0x28
}; // size - 0x28


class CHitBox /* "modellib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CUtlString m_sSurfaceProperty; // 0x8 - 0x10
   CUtlString m_sBoneName; // 0x10 - 0x18
   Vector m_vMinBounds; // 0x18 - 0x24
   Vector m_vMaxBounds; // 0x24 - 0x30
   float m_flShapeRadius; // 0x30 - 0x34
   uint32_t m_nBoneNameHash; // 0x34 - 0x38
   int32_t m_nGroupId; // 0x38 - 0x3C
   uint8_t m_nShapeType; // 0x3C - 0x3D
   bool m_bTranslationOnly; // 0x3D - 0x3E
   unsigned char pad_3E[0x2]; // 0x3E - 0x40
   uint32_t m_CRC; // 0x40 - 0x44
   Color m_cRenderColor; // 0x44 - 0x48
   uint16_t m_nHitBoxIndex; // 0x48 - 0x4A
   unsigned char pad_4A[0x26]; // 0x4A - 0x70
}; // size - 0x70


class CHitBoxSet /* "modellib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   uint32_t m_nNameHash; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< CHitBox > m_HitBoxes; // 0x10 - 0x28
   CUtlString m_SourceFilename; // 0x28 - 0x30
}; // size - 0x30


class CHitBoxSetList /* "modellib" */
{
public:
   CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0 - 0x18
}; // size - 0x18


class CHitReactUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   HitReactFixedSettings_t m_opFixedSettings; // 0x68 - 0xAC
   unsigned char pad_AC[0x8]; // 0xAC - 0xB4
   CAnimParamHandle m_triggerParam; // 0xB4 - 0xB6
   CAnimParamHandle m_hitBoneParam; // 0xB6 - 0xB8
   CAnimParamHandle m_hitOffsetParam; // 0xB8 - 0xBA
   CAnimParamHandle m_hitDirectionParam; // 0xBA - 0xBC
   CAnimParamHandle m_hitStrengthParam; // 0xBC - 0xBE
   unsigned char pad_BE[0x2]; // 0xBE - 0xC0
   float m_flMinDelayBetweenHits; // 0xC0 - 0xC4
   bool m_bResetChild; // 0xC4 - 0xC5
   unsigned char pad_C5[0x3]; // 0xC5 - 0xC8
}; // size - 0xC8


class CInButtonState /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   uint64 m_pButtonStates[3]; // 0x8 - 0x20
}; // size - 0x20


class CInputStreamUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x60]; // 0x0 - 0x60
}; // size - 0x60


class CIntAnimParameter /* "animgraphlib" */ : public CConcreteAnimParameter /* "animgraphlib" */
{
public:
   int32_t m_defaultValue; // 0x80 - 0x84
   int32_t m_minValue; // 0x84 - 0x88
   int32_t m_maxValue; // 0x88 - 0x8C
   unsigned char pad_8C[0x4]; // 0x8C - 0x90
}; // size - 0x90


class CInterpolatedValue /* "client" */
{
public:
   float m_flStartTime; // 0x0 - 0x4
   float m_flEndTime; // 0x4 - 0x8
   float m_flStartValue; // 0x8 - 0xC
   float m_flEndValue; // 0xC - 0x10
   int32_t m_nInterpType; // 0x10 - 0x14
}; // size - 0x14


class CIronSightController /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   bool m_bIronSightAvailable; // 0x8 - 0x9
   unsigned char pad_9[0x3]; // 0x9 - 0xC
   float m_flIronSightAmount; // 0xC - 0x10
   float m_flIronSightAmountGained; // 0x10 - 0x14
   float m_flIronSightAmountBiased; // 0x14 - 0x18
}; // size - 0x18


class CJiggleBoneUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   JiggleBoneSettingsList_t m_opFixedData; // 0x68 - 0x80
   unsigned char pad_80[0x8]; // 0x80 - 0x88
}; // size - 0x88


class CJumpHelperUpdateNode /* "animgraphlib" */ : public CSequenceUpdateNode /* "animgraphlib" */
{
public:
   CAnimParamHandle m_hTargetParam; // 0xA8 - 0xAA
   unsigned char pad_AA[0x2]; // 0xAA - 0xAC
   Vector m_flOriginalJumpMovement; // 0xAC - 0xB8
   float m_flOriginalJumpDuration; // 0xB8 - 0xBC
   float m_flJumpStartCycle; // 0xBC - 0xC0
   float m_flJumpEndCycle; // 0xC0 - 0xC4
   JumpCorrectionMethod m_eCorrectionMethod; // 0xC4 - 0xC8
   bool m_bTranslationAxis[3]; // 0xC8 - 0xCB
   bool m_bScaleSpeed; // 0xCB - 0xCC
   unsigned char pad_CC[0x4]; // 0xCC - 0xD0
}; // size - 0xD0


class CLODComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   int32_t m_nServerLOD; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
}; // size - 0x38


class CLeanMatrixUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_58[0x4]; // 0x58 - 0x5C
   int32 m_frameCorners[3][3]; // 0x5C - 0x80
   CPoseHandle m_poses[9]; // 0x80 - 0xA4
   unsigned char pad_A4[0x4]; // 0xA4 - 0xA8
   CAnimInputDamping m_damping; // 0xA8 - 0xB8
   AnimVectorSource m_blendSource; // 0xB8 - 0xBC
   CAnimParamHandle m_paramIndex; // 0xBC - 0xBE
   unsigned char pad_BE[0x2]; // 0xBE - 0xC0
   Vector m_verticalAxis; // 0xC0 - 0xCC
   Vector m_horizontalAxis; // 0xCC - 0xD8
   HSequence m_hSequence; // 0xD8 - 0xDC
   float m_flMaxValue; // 0xDC - 0xE0
   int32_t m_nSequenceMaxFrame; // 0xE0 - 0xE4
   unsigned char pad_E4[0x4]; // 0xE4 - 0xE8
}; // size - 0xE8


class CLookAtUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x8]; // 0x68 - 0x70
   LookAtOpFixedSettings_t m_opFixedSettings; // 0x70 - 0x130
   unsigned char pad_130[0x8]; // 0x130 - 0x138
   AnimVectorSource m_target; // 0x138 - 0x13C
   CAnimParamHandle m_paramIndex; // 0x13C - 0x13E
   CAnimParamHandle m_weightParamIndex; // 0x13E - 0x140
   bool m_bResetChild; // 0x140 - 0x141
   bool m_bLockWhenWaning; // 0x141 - 0x142
   unsigned char pad_142[0xE]; // 0x142 - 0x150
}; // size - 0x150


class CLookComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   unsigned char pad_30[0x4]; // 0x30 - 0x34
   CAnimParamHandle m_hLookHeading; // 0x34 - 0x36
   CAnimParamHandle m_hLookHeadingVelocity; // 0x36 - 0x38
   CAnimParamHandle m_hLookPitch; // 0x38 - 0x3A
   CAnimParamHandle m_hLookDistance; // 0x3A - 0x3C
   CAnimParamHandle m_hLookDirection; // 0x3C - 0x3E
   CAnimParamHandle m_hLookTarget; // 0x3E - 0x40
   CAnimParamHandle m_hLookTargetWorldSpace; // 0x40 - 0x42
   bool m_bNetworkLookTarget; // 0x42 - 0x43
   unsigned char pad_43[0x5]; // 0x43 - 0x48
}; // size - 0x48


class CMaterialAttributeAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_50[0x8]; // 0x50 - 0x58
   CUtlString m_AttributeName; // 0x58 - 0x60
   MatterialAttributeTagType_t m_AttributeType; // 0x60 - 0x64
   float m_flValue; // 0x64 - 0x68
   Color m_Color; // 0x68 - 0x6C
   unsigned char pad_6C[0x4]; // 0x6C - 0x70
}; // size - 0x70


class CMaterialDrawDescriptor /* "modellib" */
{
public:
   float m_flUvDensity; // 0x0 - 0x4
   Vector m_vTintColor; // 0x4 - 0x10
   float m_flAlpha; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
   uint32_t m_nFirstMeshlet; // 0x18 - 0x1C
   uint16_t m_nNumMeshlets; // 0x1C - 0x1E
   unsigned char pad_1E[0x2]; // 0x1E - 0x20
   RenderPrimitiveType_t m_nPrimitiveType; // 0x20 - 0x24
   int32_t m_nBaseVertex; // 0x24 - 0x28
   int32_t m_nVertexCount; // 0x28 - 0x2C
   int32_t m_nStartIndex; // 0x2C - 0x30
   int32_t m_nIndexCount; // 0x30 - 0x34
   unsigned char pad_34[0x84]; // 0x34 - 0xB8
   CRenderBufferBinding m_indexBuffer; // 0xB8 - 0xD0
   unsigned char pad_D0[0x8]; // 0xD0 - 0xD8
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xD8 - 0xE0
   unsigned char pad_E0[0x8]; // 0xE0 - 0xE8
}; // size - 0xE8


class CMeshletDescriptor /* "modellib" */
{
public:
   PackedAABB_t m_PackedAABB; // 0x0 - 0x8
   CDrawCullingData m_CullingData; // 0x8 - 0x18
}; // size - 0x18


class CModelConfig /* "modellib" */
{
public:
   CUtlString m_ConfigName; // 0x0 - 0x8
   CUtlVector< CModelConfigElement* > m_Elements; // 0x8 - 0x20
   bool m_bTopLevel; // 0x20 - 0x21
   unsigned char pad_21[0x7]; // 0x21 - 0x28
}; // size - 0x28


class CModelConfigElement_AttachedModel /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CUtlString m_InstanceName; // 0x48 - 0x50
   CUtlString m_EntityClass; // 0x50 - 0x58
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x58 - 0x60
   Vector m_vOffset; // 0x60 - 0x6C
   QAngle m_aAngOffset; // 0x6C - 0x78
   CUtlString m_AttachmentName; // 0x78 - 0x80
   CUtlString m_LocalAttachmentOffsetName; // 0x80 - 0x88
   ModelConfigAttachmentType_t m_AttachmentType; // 0x88 - 0x8C
   bool m_bBoneMergeFlex; // 0x8C - 0x8D
   bool m_bUserSpecifiedColor; // 0x8D - 0x8E
   bool m_bUserSpecifiedMaterialGroup; // 0x8E - 0x8F
   bool m_bAcceptParentMaterialDrivenDecals; // 0x8F - 0x90
   CUtlString m_BodygroupOnOtherModels; // 0x90 - 0x98
   CUtlString m_MaterialGroupOnOtherModels; // 0x98 - 0xA0
   unsigned char pad_A0[0x48]; // 0xA0 - 0xE8
}; // size - 0xE8


class CModelConfigElement_Command /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CUtlString m_Command; // 0x48 - 0x50
   KeyValues3 m_Args; // 0x50 - 0x60
}; // size - 0x60


class CModelConfigElement_RandomColor /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CColorGradient m_Gradient; // 0x48 - 0x60
}; // size - 0x60


class CModelConfigElement_RandomPick /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CUtlVector< CUtlString > m_Choices; // 0x48 - 0x60
   CUtlVector< float32 > m_ChoiceWeights; // 0x60 - 0x78
   unsigned char pad_78[0x8]; // 0x78 - 0x80
}; // size - 0x80


class CModelConfigElement_SetBodygroup /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CUtlString m_GroupName; // 0x48 - 0x50
   int32_t m_nChoice; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
}; // size - 0x58


class CModelConfigElement_SetBodygroupOnAttachedModels /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CUtlString m_GroupName; // 0x48 - 0x50
   int32_t m_nChoice; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
}; // size - 0x58


class CModelConfigElement_SetMaterialGroup /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CUtlString m_MaterialGroupName; // 0x48 - 0x50
}; // size - 0x50


class CModelConfigElement_SetMaterialGroupOnAttachedModels /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CUtlString m_MaterialGroupName; // 0x48 - 0x50
}; // size - 0x50


class CModelConfigElement_SetRenderColor /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   Color m_Color; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
}; // size - 0x50


class CModelConfigElement_UserPick /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CUtlVector< CUtlString > m_Choices; // 0x48 - 0x60
}; // size - 0x60


class CModelConfigList /* "modellib" */
{
public:
   bool m_bHideMaterialGroupInTools; // 0x0 - 0x1
   bool m_bHideRenderColorInTools; // 0x1 - 0x2
   unsigned char pad_2[0x6]; // 0x2 - 0x8
   CUtlVector< CModelConfig* > m_Configs; // 0x8 - 0x20
}; // size - 0x20


class CMoodVData /* "animationsystem" */
{
public:
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x0 - 0xE0
   MoodType_t m_nMoodType; // 0xE0 - 0xE4
   unsigned char pad_E4[0x4]; // 0xE4 - 0xE8
   CUtlVector< MoodAnimationLayer_t > m_animationLayers; // 0xE8 - 0x100
}; // size - 0x100


class CMorphBundleData /* "modellib" */
{
public:
   float m_flULeftSrc; // 0x0 - 0x4
   float m_flVTopSrc; // 0x4 - 0x8
   CUtlVector< float32 > m_offsets; // 0x8 - 0x20
   CUtlVector< float32 > m_ranges; // 0x20 - 0x38
}; // size - 0x38


class CMorphConstraint /* "modellib" */ : public CBaseConstraint /* "modellib" */
{
public:
   CUtlString m_sTargetMorph; // 0x70 - 0x78
   int32_t m_nSlaveChannel; // 0x78 - 0x7C
   float m_flMin; // 0x7C - 0x80
   float m_flMax; // 0x80 - 0x84
   unsigned char pad_84[0xC]; // 0x84 - 0x90
}; // size - 0x90


class CMorphData /* "modellib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8 - 0x20
}; // size - 0x20


class CMorphRectData /* "modellib" */
{
public:
   int16_t m_nXLeftDst; // 0x0 - 0x2
   int16_t m_nYTopDst; // 0x2 - 0x4
   float m_flUWidthSrc; // 0x4 - 0x8
   float m_flVHeightSrc; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< CMorphBundleData > m_bundleDatas; // 0x10 - 0x28
}; // size - 0x28


class CMorphSetData /* "modellib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   int32_t m_nWidth; // 0x10 - 0x14
   int32_t m_nHeight; // 0x14 - 0x18
   CUtlVector< MorphBundleType_t > m_bundleTypes; // 0x18 - 0x30
   CUtlVector< CMorphData > m_morphDatas; // 0x30 - 0x48
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas; // 0x48 - 0x50
   CUtlVector< CFlexDesc > m_FlexDesc; // 0x50 - 0x68
   CUtlVector< CFlexController > m_FlexControllers; // 0x68 - 0x80
   CUtlVector< CFlexRule > m_FlexRules; // 0x80 - 0x98
}; // size - 0x98


class CMotionDataSet /* "animgraphlib" */
{
public:
   CUtlVector< CMotionGraphGroup > m_groups; // 0x0 - 0x18
   int32_t m_nDimensionCount; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CMotionGraphConfig /* "animgraphlib" */
{
public:
   float32 m_paramValues[4]; // 0x0 - 0x10
   float m_flDuration; // 0x10 - 0x14
   MotionIndex m_nMotionIndex; // 0x14 - 0x18
   int32_t m_nSampleStart; // 0x18 - 0x1C
   int32_t m_nSampleCount; // 0x1C - 0x20
}; // size - 0x20


class CMotionGraphGroup /* "animgraphlib" */
{
public:
   CMotionSearchDB m_searchDB; // 0x0 - 0xB8
   CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs; // 0xB8 - 0xD0
   CUtlVector< CMotionGraphConfig > m_motionGraphConfigs; // 0xD0 - 0xE8
   CUtlVector< int32 > m_sampleToConfig; // 0xE8 - 0x100
   AnimScriptHandle m_hIsActiveScript; // 0x100 - 0x104
   unsigned char pad_104[0x4]; // 0x104 - 0x108
}; // size - 0x108


class CMotionGraphUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   CSmartPtr< CMotionGraph > m_pMotionGraph; // 0x58 - 0x60
   unsigned char pad_60[0x8]; // 0x60 - 0x68
}; // size - 0x68


class CMotionMatchingUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   CMotionDataSet m_dataSet; // 0x58 - 0x78
   CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics; // 0x78 - 0x90
   CUtlVector< float32 > m_weights; // 0x90 - 0xA8
   unsigned char pad_A8[0x38]; // 0xA8 - 0xE0
   bool m_bSearchEveryTick; // 0xE0 - 0xE1
   unsigned char pad_E1[0x3]; // 0xE1 - 0xE4
   float m_flSearchInterval; // 0xE4 - 0xE8
   bool m_bSearchWhenClipEnds; // 0xE8 - 0xE9
   bool m_bSearchWhenGoalChanges; // 0xE9 - 0xEA
   unsigned char pad_EA[0x2]; // 0xEA - 0xEC
   CBlendCurve m_blendCurve; // 0xEC - 0xF4
   float m_flSampleRate; // 0xF4 - 0xF8
   float m_flBlendTime; // 0xF8 - 0xFC
   bool m_bLockClipWhenWaning; // 0xFC - 0xFD
   unsigned char pad_FD[0x3]; // 0xFD - 0x100
   float m_flSelectionThreshold; // 0x100 - 0x104
   float m_flReselectionTimeWindow; // 0x104 - 0x108
   bool m_bEnableRotationCorrection; // 0x108 - 0x109
   bool m_bGoalAssist; // 0x109 - 0x10A
   unsigned char pad_10A[0x2]; // 0x10A - 0x10C
   float m_flGoalAssistDistance; // 0x10C - 0x110
   float m_flGoalAssistTolerance; // 0x110 - 0x114
   unsigned char pad_114[0x4]; // 0x114 - 0x118
   CAnimInputDamping m_distanceScale_Damping; // 0x118 - 0x128
   float m_flDistanceScale_OuterRadius; // 0x128 - 0x12C
   float m_flDistanceScale_InnerRadius; // 0x12C - 0x130
   float m_flDistanceScale_MaxScale; // 0x130 - 0x134
   float m_flDistanceScale_MinScale; // 0x134 - 0x138
   bool m_bEnableDistanceScaling; // 0x138 - 0x139
   unsigned char pad_139[0x7]; // 0x139 - 0x140
}; // size - 0x140


class CMotionNodeBlend1D /* "animgraphlib" */ : public CMotionNode /* "animgraphlib" */
{
public:
   CUtlVector< MotionBlendItem > m_blendItems; // 0x28 - 0x40
   int32_t m_nParamIndex; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
}; // size - 0x48


class CMotionNodeSequence /* "animgraphlib" */ : public CMotionNode /* "animgraphlib" */
{
public:
   CUtlVector< TagSpan_t > m_tags; // 0x28 - 0x40
   HSequence m_hSequence; // 0x40 - 0x44
   float m_flPlaybackSpeed; // 0x44 - 0x48
}; // size - 0x48


class CMotionSearchDB /* "animgraphlib" */
{
public:
   CMotionSearchNode m_rootNode; // 0x0 - 0x80
   CProductQuantizer m_residualQuantizer; // 0x80 - 0xA0
   CUtlVector< MotionDBIndex > m_codeIndices; // 0xA0 - 0xB8
}; // size - 0xB8


class CMotionSearchNode /* "animgraphlib" */
{
public:
   CUtlVector< CMotionSearchNode* > m_children; // 0x0 - 0x18
   CVectorQuantizer m_quantizer; // 0x18 - 0x38
   CUtlVector< CUtlVector< SampleCode > > m_sampleCodes; // 0x38 - 0x50
   CUtlVector< CUtlVector< int32 > > m_sampleIndices; // 0x50 - 0x68
   CUtlVector< int32 > m_selectableSamples; // 0x68 - 0x80
}; // size - 0x80


class CMotorController /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   float m_speed; // 0x8 - 0xC
   float m_maxTorque; // 0xC - 0x10
   Vector m_axis; // 0x10 - 0x1C
   float m_inertiaFactor; // 0x1C - 0x20
}; // size - 0x20


class CMovementComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // 0x30 - 0x48
   CAnimInputDamping m_facingDamping; // 0x48 - 0x58
   unsigned char pad_58[0x8]; // 0x58 - 0x60
   int32_t m_nDefaultMotorIndex; // 0x60 - 0x64
   float m_flDefaultRunSpeed; // 0x64 - 0x68
   bool m_bMoveVarsDisabled; // 0x68 - 0x69
   bool m_bNetworkPath; // 0x69 - 0x6A
   bool m_bNetworkFacing; // 0x6A - 0x6B
   CAnimParamHandle m_paramHandles[30]; // 0x6B - 0xA7
   unsigned char pad_A7[0x1]; // 0xA7 - 0xA8
}; // size - 0xA8


class CMovementHandshakeAnimTag /* "animgraphlib" */ : public CHandshakeAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CMoverUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x8]; // 0x68 - 0x70
   CAnimInputDamping m_damping; // 0x70 - 0x80
   AnimValueSource m_facingTarget; // 0x80 - 0x84
   CAnimParamHandle m_hMoveVecParam; // 0x84 - 0x86
   CAnimParamHandle m_hMoveHeadingParam; // 0x86 - 0x88
   CAnimParamHandle m_hTurnToFaceParam; // 0x88 - 0x8A
   unsigned char pad_8A[0x2]; // 0x8A - 0x8C
   float m_flTurnToFaceOffset; // 0x8C - 0x90
   float m_flTurnToFaceLimit; // 0x90 - 0x94
   bool m_bAdditive; // 0x94 - 0x95
   bool m_bApplyMovement; // 0x95 - 0x96
   bool m_bOrientMovement; // 0x96 - 0x97
   bool m_bApplyRotation; // 0x97 - 0x98
   bool m_bLimitOnly; // 0x98 - 0x99
   unsigned char pad_99[0x7]; // 0x99 - 0xA0
}; // size - 0xA0


class CMultiplayer_Expresser /* "server" */ : public CAI_ExpresserWithFollowup /* "server" */
{
public:
   bool m_bAllowMultipleScenes; // 0x88 - 0x89
   unsigned char pad_89[0x7]; // 0x89 - 0x90
}; // size - 0x90


class CNavHullPresetVData /* "navlib" */
{
public:
   CUtlVector< CUtlString > m_vecNavHulls; // 0x0 - 0x18
}; // size - 0x18


class CNavHullVData /* "navlib" */
{
public:
   bool m_bAgentEnabled; // 0x0 - 0x1
   unsigned char pad_1[0x3]; // 0x1 - 0x4
   float m_agentRadius; // 0x4 - 0x8
   float m_agentHeight; // 0x8 - 0xC
   bool m_agentShortHeightEnabled; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
   float m_agentShortHeight; // 0x10 - 0x14
   float m_agentMaxClimb; // 0x14 - 0x18
   int32_t m_agentMaxSlope; // 0x18 - 0x1C
   float m_agentMaxJumpDownDist; // 0x1C - 0x20
   float m_agentMaxJumpHorizDistBase; // 0x20 - 0x24
   float m_agentMaxJumpUpDist; // 0x24 - 0x28
   int32_t m_agentBorderErosion; // 0x28 - 0x2C
}; // size - 0x2C


class CNavLinkAnimgraphVar /* "server" */
{
public:
   CGlobalSymbol m_sAnimGraphNavlinkType; // 0x0 - 0x8
   uint32_t m_unAlignmentDegrees; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class CNavLinkMovementVData /* "server" */
{
public:
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName; // 0x0 - 0xE0
   bool m_bIsInterpolated; // 0xE0 - 0xE1
   unsigned char pad_E1[0x3]; // 0xE1 - 0xE4
   uint32_t m_unRecommendedDistance; // 0xE4 - 0xE8
   CUtlVector< CNavLinkAnimgraphVar > m_vecAnimgraphVars; // 0xE8 - 0x100
}; // size - 0x100


class CNavVolumeAll /* "navlib" */ : public CNavVolumeVector /* "navlib" */
{
public:
   unsigned char pad_0[0x98]; // 0x0 - 0x98
}; // size - 0x98


class CNavVolumeBreadthFirstSearch /* "server" */ : public CNavVolumeCalculatedVector /* "server" */
{
public:
   unsigned char pad_98[0x8]; // 0x98 - 0xA0
   Vector m_vStartPos; // 0xA0 - 0xAC
   float m_flSearchDist; // 0xAC - 0xB0
   unsigned char pad_B0[0x8]; // 0xB0 - 0xB8
}; // size - 0xB8


class CNavVolumeMarkupVolume /* "server" */ : public CNavVolume /* "server" */
{
public:
   unsigned char pad_0[0xD8]; // 0x0 - 0xD8
}; // size - 0xD8


class CNavVolumeSphericalShell /* "navlib" */ : public CNavVolumeSphere /* "navlib" */
{
public:
   float m_flRadiusInner; // 0x80 - 0x84
   unsigned char pad_84[0x4]; // 0x84 - 0x88
}; // size - 0x88


class CNetworkOriginCellCoordQuantizedVector /* "server" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   uint16_t m_cellX; // 0x10 - 0x12
   uint16_t m_cellY; // 0x12 - 0x14
   uint16_t m_cellZ; // 0x14 - 0x16
   uint16_t m_nOutsideWorld; // 0x16 - 0x18
   CNetworkedQuantizedFloat m_vecX; // 0x18 - 0x20
   CNetworkedQuantizedFloat m_vecY; // 0x20 - 0x28
   CNetworkedQuantizedFloat m_vecZ; // 0x28 - 0x30
}; // size - 0x30


class CNetworkOriginQuantizedVector /* "server" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CNetworkedQuantizedFloat m_vecX; // 0x10 - 0x18
   CNetworkedQuantizedFloat m_vecY; // 0x18 - 0x20
   CNetworkedQuantizedFloat m_vecZ; // 0x20 - 0x28
}; // size - 0x28


class CNetworkTransmitComponent /* "server" */
{
public:
   unsigned char pad_0[0x16C]; // 0x0 - 0x16C
   uint8_t m_nTransmitStateOwnedCounter; // 0x16C - 0x16D
   unsigned char pad_16D[0x33]; // 0x16D - 0x1A0
}; // size - 0x1A0


class CNetworkVarChainer /* "entity2" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20 - 0x22
   unsigned char pad_22[0x6]; // 0x22 - 0x28
}; // size - 0x28


class CNetworkVelocityVector /* "server" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CNetworkedQuantizedFloat m_vecX; // 0x10 - 0x18
   CNetworkedQuantizedFloat m_vecY; // 0x18 - 0x20
   CNetworkedQuantizedFloat m_vecZ; // 0x20 - 0x28
}; // size - 0x28


class CNetworkViewOffsetVector /* "server" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CNetworkedQuantizedFloat m_vecX; // 0x10 - 0x18
   CNetworkedQuantizedFloat m_vecY; // 0x18 - 0x20
   CNetworkedQuantizedFloat m_vecZ; // 0x20 - 0x28
}; // size - 0x28


class CNewParticleEffect /* "particleslib" */ : public IParticleEffect /* "particleslib" */
{
public:
   unsigned char pad_8[0x8]; // 0x8 - 0x10
   CNewParticleEffect* m_pNext; // 0x10 - 0x18
   CNewParticleEffect* m_pPrev; // 0x18 - 0x20
   IParticleCollection* m_pParticles; // 0x20 - 0x28
   char* m_pDebugName; // 0x28 - 0x30
   unsigned char m_bDontRemove : 1; // 0x30 - 0x31
   unsigned char m_bRemove : 1; // 0x30 - 0x31
   unsigned char m_bNeedsBBoxUpdate : 1; // 0x30 - 0x31
   unsigned char m_bIsFirstFrame : 1; // 0x30 - 0x31
   unsigned char m_bAutoUpdateBBox : 1; // 0x30 - 0x31
   unsigned char m_bAllocated : 1; // 0x30 - 0x31
   unsigned char m_bSimulate : 1; // 0x30 - 0x31
   unsigned char m_bShouldPerformCullCheck : 1; // 0x30 - 0x31
   unsigned char m_bForceNoDraw : 1; // 0x31 - 0x32
   unsigned char m_bShouldSave : 1; // 0x31 - 0x32
   unsigned char m_bDisableAggregation : 1; // 0x31 - 0x32
   unsigned char m_bShouldSimulateDuringGamePaused : 1; // 0x31 - 0x32
   unsigned char m_bShouldCheckFoW : 1; // 0x31 - 0x32
   unsigned char pad_32[0xE]; // 0x32 - 0x40
   Vector m_vSortOrigin; // 0x40 - 0x4C
   float m_flScale; // 0x4C - 0x50
   PARTICLE_EHANDLE__* m_hOwner; // 0x50 - 0x58
   CParticleProperty* m_pOwningParticleProperty; // 0x58 - 0x60
   unsigned char pad_60[0x10]; // 0x60 - 0x70
   float m_flFreezeTransitionStart; // 0x70 - 0x74
   float m_flFreezeTransitionDuration; // 0x74 - 0x78
   float m_flFreezeTransitionOverride; // 0x78 - 0x7C
   bool m_bFreezeTransitionActive; // 0x7C - 0x7D
   bool m_bFreezeTargetState; // 0x7D - 0x7E
   bool m_bCanFreeze; // 0x7E - 0x7F
   unsigned char pad_7F[0x1]; // 0x7F - 0x80
   Vector m_LastMin; // 0x80 - 0x8C
   Vector m_LastMax; // 0x8C - 0x98
   CSplitScreenSlot m_nSplitScreenUser; // 0x98 - 0x9C
   Vector m_vecAggregationCenter; // 0x9C - 0xA8
   unsigned char pad_A8[0x18]; // 0xA8 - 0xC0
   int32_t m_RefCount; // 0xC0 - 0xC4
   unsigned char pad_C4[0x4]; // 0xC4 - 0xC8
}; // size - 0xC8


class CNmBoneMask /* "animlib" */
{
public:

   enum class WeightInfo_t : std::uint8_t
   {
      Zero = 0,
      Mixed = 1,
      One = 2
   };
   CGlobalSymbol m_ID; // 0x0 - 0x8
   CNmBoneMask::WeightInfo_t m_weightInfo; // 0x8 - 0x9
   unsigned char pad_9[0xF]; // 0x9 - 0x18
   CUtlVector< float32 > m_weights; // 0x18 - 0x30
}; // size - 0x30



class CNmClip /* "animlib" */
{
public:
   CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // 0x0 - 0x8
   uint32_t m_nNumFrames; // 0x8 - 0xC
   float m_flDuration; // 0xC - 0x10
   CUtlBinaryBlock m_compressedPoseData; // 0x10 - 0x28
   CUtlVector< NmCompressionSettings_t > m_trackCompressionSettings; // 0x28 - 0x40
   CUtlVector< uint32 > m_compressedPoseOffsets; // 0x40 - 0x58
   unsigned char pad_58[0x48]; // 0x58 - 0xA0
   CNmSyncTrack m_syncTrack; // 0xA0 - 0x150
   CNmRootMotionData m_rootMotion; // 0x150 - 0x1A0
   bool m_bIsAdditive; // 0x1A0 - 0x1A1
   unsigned char pad_1A1[0xF]; // 0x1A1 - 0x1B0
}; // size - 0x1B0









class CNmFootEvent /* "animlib" */ : public CNmEvent /* "animlib" */
{
public:
   NmFootPhase_t m_phase; // 0x10 - 0x11
   unsigned char pad_11[0x7]; // 0x11 - 0x18
}; // size - 0x18


class CNmFrameSnapEvent /* "animlib" */ : public CNmEvent /* "animlib" */
{
public:
   NmFrameSnapEventMode_t m_frameSnapMode; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class CNmGraphDataSet /* "animlib" */
{
public:
   CGlobalSymbol m_variationID; // 0x0 - 0x8
   CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // 0x8 - 0x10
   CUtlVector< CStrongHandleVoid > m_resources; // 0x10 - 0x28
   unsigned char pad_28[0x20]; // 0x28 - 0x48
}; // size - 0x48


class CNmGraphDefinition /* "animlib" */
{
public:
   class ChildGraphSlot_t /* "animlib" */
   {
   public:
      int16_t m_nNodeIdx; // 0x0 - 0x2
      int16_t m_dataSlotIdx; // 0x2 - 0x4
   }; // size - 0x4

   class ExternalGraphSlot_t /* "animlib" */
   {
   public:
      int16_t m_nNodeIdx; // 0x0 - 0x2
      unsigned char pad_2[0x6]; // 0x2 - 0x8
      CGlobalSymbol m_slotID; // 0x8 - 0x10
   }; // size - 0x10

   CUtlVector< int16 > m_persistentNodeIndices; // 0x0 - 0x18
   int16_t m_nRootNodeIdx; // 0x18 - 0x1A
   unsigned char pad_1A[0x6]; // 0x1A - 0x20
   CUtlVector< CGlobalSymbol > m_controlParameterIDs; // 0x20 - 0x38
   CUtlVector< CGlobalSymbol > m_virtualParameterIDs; // 0x38 - 0x50
   CUtlVector< int16 > m_virtualParameterNodeIndices; // 0x50 - 0x68
   CUtlVector< CNmGraphDefinition::ChildGraphSlot_t > m_childGraphSlots; // 0x68 - 0x80
   CUtlVector< CNmGraphDefinition::ExternalGraphSlot_t > m_externalGraphSlots; // 0x80 - 0x98
   unsigned char pad_98[0x88]; // 0x98 - 0x120
}; // size - 0x120




class CNmGraphVariation /* "animlib" */
{
public:
   CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_graphDefinition; // 0x0 - 0x8
   CNmGraphDataSet m_dataSet; // 0x8 - 0x50
}; // size - 0x50


class CNmIDEvent /* "animlib" */ : public CNmEvent /* "animlib" */
{
public:
   CGlobalSymbol m_ID; // 0x10 - 0x18
}; // size - 0x18




class CNmLegacyEvent /* "animlib" */ : public CNmEvent /* "animlib" */
{
public:
   unsigned char pad_0[0x38]; // 0x0 - 0x38
}; // size - 0x38



class CNmRootMotionData /* "animlib" */
{
public:
   CUtlVector< CTransform > m_transforms; // 0x0 - 0x18
   int32_t m_nNumFrames; // 0x18 - 0x1C
   float m_flAverageLinearVelocity; // 0x1C - 0x20
   float m_flAverageAngularVelocityRadians; // 0x20 - 0x24
   unsigned char pad_24[0xC]; // 0x24 - 0x30
   CTransform m_totalDelta; // 0x30 - 0x50
}; // size - 0x50


class CNmSkeleton /* "animlib" */
{
public:
   CGlobalSymbol m_ID; // 0x0 - 0x8
   CUtlLeanVector< CGlobalSymbol > m_boneIDs; // 0x8 - 0x18
   CUtlVector< int32 > m_parentIndices; // 0x18 - 0x30
   CUtlVector< CTransform > m_parentSpaceReferencePose; // 0x30 - 0x48
   CUtlVector< CTransform > m_modelSpaceReferencePose; // 0x48 - 0x60
   int32_t m_numBonesToSampleAtLowLOD; // 0x60 - 0x64
   unsigned char pad_64[0x4]; // 0x64 - 0x68
   CUtlLeanVector< CNmBoneMask > m_boneMasks; // 0x68 - 0x78
}; // size - 0x78







class CNmSyncTrack /* "animlib" */
{
public:
   class EventMarker_t /* "animlib" */
   {
   public:
      NmPercent_t m_startTime; // 0x0 - 0x4
      unsigned char pad_4[0x4]; // 0x4 - 0x8
      CGlobalSymbol m_ID; // 0x8 - 0x10
   }; // size - 0x10

   class Event_t /* "animlib" */
   {
   public:
      CGlobalSymbol m_ID; // 0x0 - 0x8
      NmPercent_t m_startTime; // 0x8 - 0xC
      NmPercent_t m_duration; // 0xC - 0x10
   }; // size - 0x10

   CUtlLeanVectorFixedGrowable< CNmSyncTrack::Event_t > m_syncEvents; // 0x0 - 0xA8
   int32_t m_nStartEventOffset; // 0xA8 - 0xAC
   unsigned char pad_AC[0x4]; // 0xAC - 0xB0
}; // size - 0xB0




class CNmTarget /* "animlib" */
{
public:
   CTransform m_transform; // 0x0 - 0x20
   CGlobalSymbol m_boneID; // 0x20 - 0x28
   bool m_bIsBoneTarget; // 0x28 - 0x29
   bool m_bIsUsingBoneSpaceOffsets; // 0x29 - 0x2A
   bool m_bHasOffsets; // 0x2A - 0x2B
   bool m_bIsSet; // 0x2B - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
}; // size - 0x30


class CNmTransitionEvent /* "animlib" */ : public CNmEvent /* "animlib" */
{
public:
   NmTransitionRule_t m_rule; // 0x10 - 0x11
   unsigned char pad_11[0x7]; // 0x11 - 0x18
   CGlobalSymbol m_ID; // 0x18 - 0x20
}; // size - 0x20









class COrientConstraint /* "modellib" */ : public CBaseConstraint /* "modellib" */
{
public:
   unsigned char pad_0[0x70]; // 0x0 - 0x70
}; // size - 0x70


class CParamSpanUpdater /* "animgraphlib" */
{
public:
   CUtlVector< ParamSpan_t > m_spans; // 0x0 - 0x18
}; // size - 0x18


class CParentConstraint /* "modellib" */ : public CBaseConstraint /* "modellib" */
{
public:
   unsigned char pad_0[0x70]; // 0x0 - 0x70
}; // size - 0x70


class CParticleAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_50[0x8]; // 0x50 - 0x58
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem; // 0x58 - 0x60
   CUtlString m_particleSystemName; // 0x60 - 0x68
   CUtlString m_configName; // 0x68 - 0x70
   bool m_bDetachFromOwner; // 0x70 - 0x71
   bool m_bStopWhenTagEnds; // 0x71 - 0x72
   bool m_bTagEndStopIsInstant; // 0x72 - 0x73
   unsigned char pad_73[0x5]; // 0x73 - 0x78
   CUtlString m_attachmentName; // 0x78 - 0x80
   ParticleAttachment_t m_attachmentType; // 0x80 - 0x84
   unsigned char pad_84[0x4]; // 0x84 - 0x88
   CUtlString m_attachmentCP1Name; // 0x88 - 0x90
   ParticleAttachment_t m_attachmentCP1Type; // 0x90 - 0x94
   unsigned char pad_94[0x4]; // 0x94 - 0x98
}; // size - 0x98


class CParticleCollectionBindingInstance /* "particleslib" */ : public CBasePulseGraphInstance /* "particleslib" */
{
public:
   unsigned char pad_0[0x120]; // 0x0 - 0x120
}; // size - 0x120


class CParticleCollectionRendererFloatInput /* "particleslib" */ : public CParticleCollectionFloatInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x158]; // 0x0 - 0x158
}; // size - 0x158


class CParticleCollectionRendererVecInput /* "particleslib" */ : public CParticleCollectionVecInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x658]; // 0x0 - 0x658
}; // size - 0x658


class CParticleMassCalculationParameters /* "particles" */
{
public:
   ParticleMassMode_t m_nMassMode; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CPerParticleFloatInput m_flRadius; // 0x8 - 0x160
   CPerParticleFloatInput m_flNominalRadius; // 0x160 - 0x2B8
   CPerParticleFloatInput m_flScale; // 0x2B8 - 0x410
}; // size - 0x410


class CParticleModelInput /* "particleslib" */ : public CParticleInput /* "particleslib" */
{
public:
   ParticleModelType_t m_nType; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
   CParticleNamedValueRef m_NamedValue; // 0x18 - 0x58
   int32_t m_nControlPoint; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
}; // size - 0x60


class CParticleProperty /* "particleslib" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
}; // size - 0x28


class CParticleRemapFloatInput /* "particleslib" */ : public CParticleFloatInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x158]; // 0x0 - 0x158
}; // size - 0x158


class CParticleSystemDefinition /* "particles" */ : public IParticleSystemDefinition /* "particles" */
{
public:
   int32_t m_nBehaviorVersion; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators; // 0x10 - 0x28
   CUtlVector< CParticleFunctionEmitter* > m_Emitters; // 0x28 - 0x40
   CUtlVector< CParticleFunctionInitializer* > m_Initializers; // 0x40 - 0x58
   CUtlVector< CParticleFunctionOperator* > m_Operators; // 0x58 - 0x70
   CUtlVector< CParticleFunctionForce* > m_ForceGenerators; // 0x70 - 0x88
   CUtlVector< CParticleFunctionConstraint* > m_Constraints; // 0x88 - 0xA0
   CUtlVector< CParticleFunctionRenderer* > m_Renderers; // 0xA0 - 0xB8
   CUtlVector< ParticleChildrenInfo_t > m_Children; // 0xB8 - 0xD0
   unsigned char pad_D0[0xA8]; // 0xD0 - 0x178
   int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178 - 0x17C
   unsigned char pad_17C[0x94]; // 0x17C - 0x210
   int32_t m_nInitialParticles; // 0x210 - 0x214
   int32_t m_nMaxParticles; // 0x214 - 0x218
   int32_t m_nGroupID; // 0x218 - 0x21C
   Vector m_BoundingBoxMin; // 0x21C - 0x228
   Vector m_BoundingBoxMax; // 0x228 - 0x234
   float m_flDepthSortBias; // 0x234 - 0x238
   int32_t m_nSortOverridePositionCP; // 0x238 - 0x23C
   bool m_bInfiniteBounds; // 0x23C - 0x23D
   bool m_bEnableNamedValues; // 0x23D - 0x23E
   unsigned char pad_23E[0x2]; // 0x23E - 0x240
   CUtlString m_NamedValueDomain; // 0x240 - 0x248
   CUtlVector< ParticleNamedValueSource_t* > m_NamedValueLocals; // 0x248 - 0x260
   Color m_ConstantColor; // 0x260 - 0x264
   Vector m_ConstantNormal; // 0x264 - 0x270
   float m_flConstantRadius; // 0x270 - 0x274
   float m_flConstantRotation; // 0x274 - 0x278
   float m_flConstantRotationSpeed; // 0x278 - 0x27C
   float m_flConstantLifespan; // 0x27C - 0x280
   int32_t m_nConstantSequenceNumber; // 0x280 - 0x284
   int32_t m_nConstantSequenceNumber1; // 0x284 - 0x288
   int32_t m_nSnapshotControlPoint; // 0x288 - 0x28C
   unsigned char pad_28C[0x4]; // 0x28C - 0x290
   CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x290 - 0x298
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x298 - 0x2A0
   float m_flCullRadius; // 0x2A0 - 0x2A4
   float m_flCullFillCost; // 0x2A4 - 0x2A8
   int32_t m_nCullControlPoint; // 0x2A8 - 0x2AC
   unsigned char pad_2AC[0x4]; // 0x2AC - 0x2B0
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x2B0 - 0x2B8
   int32_t m_nFallbackMaxCount; // 0x2B8 - 0x2BC
   unsigned char pad_2BC[0x4]; // 0x2BC - 0x2C0
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x2C0 - 0x2C8
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x2C8 - 0x2D0
   float m_flPreSimulationTime; // 0x2D0 - 0x2D4
   float m_flStopSimulationAfterTime; // 0x2D4 - 0x2D8
   float m_flMaximumTimeStep; // 0x2D8 - 0x2DC
   float m_flMaximumSimTime; // 0x2DC - 0x2E0
   float m_flMinimumSimTime; // 0x2E0 - 0x2E4
   float m_flMinimumTimeStep; // 0x2E4 - 0x2E8
   int32_t m_nMinimumFrames; // 0x2E8 - 0x2EC
   int32_t m_nMinCPULevel; // 0x2EC - 0x2F0
   int32_t m_nMinGPULevel; // 0x2F0 - 0x2F4
   float m_flNoDrawTimeToGoToSleep; // 0x2F4 - 0x2F8
   float m_flMaxDrawDistance; // 0x2F8 - 0x2FC
   float m_flStartFadeDistance; // 0x2FC - 0x300
   float m_flMaxCreationDistance; // 0x300 - 0x304
   int32_t m_nAggregationMinAvailableParticles; // 0x304 - 0x308
   float m_flAggregateRadius; // 0x308 - 0x30C
   bool m_bShouldBatch; // 0x30C - 0x30D
   bool m_bShouldHitboxesFallbackToRenderBounds; // 0x30D - 0x30E
   bool m_bShouldHitboxesFallbackToSnapshot; // 0x30E - 0x30F
   bool m_bShouldHitboxesFallbackToCollisionHulls; // 0x30F - 0x310
   InheritableBoolType_t m_nViewModelEffect; // 0x310 - 0x314
   bool m_bScreenSpaceEffect; // 0x314 - 0x315
   unsigned char pad_315[0x3]; // 0x315 - 0x318
   CUtlSymbolLarge m_pszTargetLayerID; // 0x318 - 0x320
   int32_t m_nSkipRenderControlPoint; // 0x320 - 0x324
   int32_t m_nAllowRenderControlPoint; // 0x324 - 0x328
   bool m_bShouldSort; // 0x328 - 0x329
   unsigned char pad_329[0x47]; // 0x329 - 0x370
   CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x370 - 0x388
   unsigned char pad_388[0x68]; // 0x388 - 0x3F0
}; // size - 0x3F0


class CParticleTransformInput /* "particleslib" */ : public CParticleInput /* "particleslib" */
{
public:
   ParticleTransformType_t m_nType; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
   CParticleNamedValueRef m_NamedValue; // 0x18 - 0x58
   bool m_bFollowNamedValue; // 0x58 - 0x59
   bool m_bSupportsDisabled; // 0x59 - 0x5A
   bool m_bUseOrientation; // 0x5A - 0x5B
   unsigned char pad_5B[0x1]; // 0x5B - 0x5C
   int32_t m_nControlPoint; // 0x5C - 0x60
   int32_t m_nControlPointRangeMax; // 0x60 - 0x64
   float m_flEndCPGrowthTime; // 0x64 - 0x68
}; // size - 0x68


class CParticleVariableRef /* "particleslib" */
{
public:
   CKV3MemberNameWithStorage m_variableName; // 0x0 - 0x38
   PulseValueType_t m_variableType; // 0x38 - 0x3C
   unsigned char pad_3C[0x4]; // 0x3C - 0x40
}; // size - 0x40


class CParticleVisibilityInputs /* "particles" */
{
public:
   float m_flCameraBias; // 0x0 - 0x4
   int32_t m_nCPin; // 0x4 - 0x8
   float m_flProxyRadius; // 0x8 - 0xC
   float m_flInputMin; // 0xC - 0x10
   float m_flInputMax; // 0x10 - 0x14
   float m_flInputPixelVisFade; // 0x14 - 0x18
   float m_flNoPixelVisibilityFallback; // 0x18 - 0x1C
   float m_flDistanceInputMin; // 0x1C - 0x20
   float m_flDistanceInputMax; // 0x20 - 0x24
   float m_flDotInputMin; // 0x24 - 0x28
   float m_flDotInputMax; // 0x28 - 0x2C
   bool m_bDotCPAngles; // 0x2C - 0x2D
   bool m_bDotCameraAngles; // 0x2D - 0x2E
   unsigned char pad_2E[0x2]; // 0x2E - 0x30
   float m_flAlphaScaleMin; // 0x30 - 0x34
   float m_flAlphaScaleMax; // 0x34 - 0x38
   float m_flRadiusScaleMin; // 0x38 - 0x3C
   float m_flRadiusScaleMax; // 0x3C - 0x40
   float m_flRadiusScaleFOVBase; // 0x40 - 0x44
   bool m_bRightEye; // 0x44 - 0x45
   unsigned char pad_45[0x3]; // 0x45 - 0x48
}; // size - 0x48


class CPathAnimMotorUpdater /* "animgraphlib" */ : public CPathAnimMotorUpdaterBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
}; // size - 0x28


class CPathHelperUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   float m_flStoppingRadius; // 0x68 - 0x6C
   float m_flStoppingSpeedScale; // 0x6C - 0x70
}; // size - 0x70


class CPathMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   CUtlVector< float32 > m_pathTimeSamples; // 0x50 - 0x68
   float m_flDistance; // 0x68 - 0x6C
   bool m_bExtrapolateMovement; // 0x6C - 0x6D
   unsigned char pad_6D[0x3]; // 0x6D - 0x70
   float m_flMinExtrapolationSpeed; // 0x70 - 0x74
   unsigned char pad_74[0x4]; // 0x74 - 0x78
}; // size - 0x78


class CPathParameters /* "particles" */
{
public:
   int32_t m_nStartControlPointNumber; // 0x0 - 0x4
   int32_t m_nEndControlPointNumber; // 0x4 - 0x8
   int32_t m_nBulgeControl; // 0x8 - 0xC
   float m_flBulge; // 0xC - 0x10
   float m_flMidPoint; // 0x10 - 0x14
   Vector m_vStartPointOffset; // 0x14 - 0x20
   Vector m_vMidPointOffset; // 0x20 - 0x2C
   Vector m_vEndOffset; // 0x2C - 0x38
   unsigned char pad_38[0x8]; // 0x38 - 0x40
}; // size - 0x40


class CPerParticleFloatInput /* "particleslib" */ : public CParticleFloatInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x158]; // 0x0 - 0x158
}; // size - 0x158


class CPerParticleVecInput /* "particleslib" */ : public CParticleVecInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x658]; // 0x0 - 0x658
}; // size - 0x658


class CPhysSurfaceProperties /* "modellib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   uint32_t m_nameHash; // 0x8 - 0xC
   uint32_t m_baseNameHash; // 0xC - 0x10
   unsigned char pad_10[0x8]; // 0x10 - 0x18
   bool m_bHidden; // 0x18 - 0x19
   unsigned char pad_19[0x7]; // 0x19 - 0x20
   CUtlString m_description; // 0x20 - 0x28
   CPhysSurfacePropertiesPhysics m_physics; // 0x28 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
   CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48 - 0xA0
   CPhysSurfacePropertiesAudio m_audioParams; // 0xA0 - 0xC0
}; // size - 0xC0


class CPhysSurfacePropertiesAudio /* "modellib" */
{
public:
   float m_reflectivity; // 0x0 - 0x4
   float m_hardnessFactor; // 0x4 - 0x8
   float m_roughnessFactor; // 0x8 - 0xC
   float m_roughThreshold; // 0xC - 0x10
   float m_hardThreshold; // 0x10 - 0x14
   float m_hardVelocityThreshold; // 0x14 - 0x18
   float m_flStaticImpactVolume; // 0x18 - 0x1C
   float m_flOcclusionFactor; // 0x1C - 0x20
}; // size - 0x20


class CPhysSurfacePropertiesPhysics /* "modellib" */
{
public:
   float m_friction; // 0x0 - 0x4
   float m_elasticity; // 0x4 - 0x8
   float m_density; // 0x8 - 0xC
   float m_thickness; // 0xC - 0x10
   float m_softContactFrequency; // 0x10 - 0x14
   float m_softContactDampingRatio; // 0x14 - 0x18
   float m_wheelDrag; // 0x18 - 0x1C
}; // size - 0x1C


class CPhysSurfacePropertiesSoundNames /* "modellib" */
{
public:
   CUtlString m_impactSoft; // 0x0 - 0x8
   CUtlString m_impactHard; // 0x8 - 0x10
   CUtlString m_scrapeSmooth; // 0x10 - 0x18
   CUtlString m_scrapeRough; // 0x18 - 0x20
   CUtlString m_bulletImpact; // 0x20 - 0x28
   CUtlString m_rolling; // 0x28 - 0x30
   CUtlString m_break; // 0x30 - 0x38
   CUtlString m_strain; // 0x38 - 0x40
   CUtlString m_meleeImpact; // 0x40 - 0x48
   CUtlString m_pushOff; // 0x48 - 0x50
   CUtlString m_skidStop; // 0x50 - 0x58
}; // size - 0x58


class CPhysicsShake /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   Vector m_force; // 0x8 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class CPlayerControllerComponent /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   unsigned char pad_30[0x10]; // 0x30 - 0x40
}; // size - 0x40


class CPlayerInputAnimMotorUpdater /* "animgraphlib" */ : public CAnimMotorUpdaterBase /* "animgraphlib" */
{
public:
   CUtlVector< float32 > m_sampleTimes; // 0x20 - 0x38
   unsigned char pad_38[0x4]; // 0x38 - 0x3C
   float m_flSpringConstant; // 0x3C - 0x40
   float m_flAnticipationDistance; // 0x40 - 0x44
   CAnimParamHandle m_hAnticipationPosParam; // 0x44 - 0x46
   CAnimParamHandle m_hAnticipationHeadingParam; // 0x46 - 0x48
   bool m_bUseAcceleration; // 0x48 - 0x49
   unsigned char pad_49[0x7]; // 0x49 - 0x50
}; // size - 0x50


class CPlayerPawnComponent /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   unsigned char pad_30[0x10]; // 0x30 - 0x40
}; // size - 0x40


class CPlayerSprayDecalRenderHelper /* "client" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class CPointConstraint /* "modellib" */ : public CBaseConstraint /* "modellib" */
{
public:
   unsigned char pad_0[0x70]; // 0x0 - 0x70
}; // size - 0x70


class CPoseHandle /* "animgraphlib" */
{
public:
   uint16_t m_nIndex; // 0x0 - 0x2
   PoseType_t m_eType; // 0x2 - 0x3
   unsigned char pad_3[0x1]; // 0x3 - 0x4
}; // size - 0x4


class CProductQuantizer /* "animgraphlib" */
{
public:
   CUtlVector< CVectorQuantizer > m_subQuantizers; // 0x0 - 0x18
   int32_t m_nDimensions; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CPulseAnimFuncs /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CPulseCell_CursorQueue /* "pulse_system" */ : public CPulseCell_WaitForCursorsWithTagBase /* "pulse_system" */
{
public:
   int32_t m_nCursorsAllowedToRunParallel; // 0x80 - 0x84
   unsigned char pad_84[0x4]; // 0x84 - 0x88
}; // size - 0x88


class CPulseCell_FireCursors /* "pulse_runtime_lib" */ : public CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */
{
public:
   CUtlVector< CPulse_OutflowConnection > m_Outflows; // 0x48 - 0x60
   bool m_bWaitForChildOutflows; // 0x60 - 0x61
   unsigned char pad_61[0x7]; // 0x61 - 0x68
   CPulse_ResumePoint m_OnFinished; // 0x68 - 0x98
   CPulse_ResumePoint m_OnCanceled; // 0x98 - 0xC8
}; // size - 0xC8


class CPulseCell_Inflow_EntOutputHandler /* "pulse_runtime_lib" */ : public CPulseCell_Inflow_BaseEntrypoint /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_SourceEntity; // 0x70 - 0x78
   CUtlSymbolLarge m_SourceOutput; // 0x78 - 0x80
   CUtlSymbolLarge m_TargetInput; // 0x80 - 0x88
   CPulseValueFullType m_ExpectedParamType; // 0x88 - 0x98
}; // size - 0x98


class CPulseCell_Inflow_EventHandler /* "pulse_runtime_lib" */ : public CPulseCell_Inflow_BaseEntrypoint /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_EventName; // 0x70 - 0x78
}; // size - 0x78


class CPulseCell_Inflow_GraphHook /* "pulse_runtime_lib" */ : public CPulseCell_Inflow_BaseEntrypoint /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_HookName; // 0x70 - 0x78
}; // size - 0x78


class CPulseCell_Inflow_Method /* "pulse_runtime_lib" */ : public CPulseCell_Inflow_BaseEntrypoint /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_MethodName; // 0x70 - 0x78
   CUtlString m_Description; // 0x78 - 0x80
   bool m_bIsPublic; // 0x80 - 0x81
   unsigned char pad_81[0x7]; // 0x81 - 0x88
   CPulseValueFullType m_ReturnType; // 0x88 - 0x98
   CUtlLeanVector< CPulseRuntimeMethodArg > m_Args; // 0x98 - 0xA8
}; // size - 0xA8


class CPulseCell_Inflow_ObservableVariableListener /* "pulse_runtime_lib" */ : public CPulseCell_Inflow_BaseEntrypoint /* "pulse_runtime_lib" */
{
public:
   CPulse_BlackboardReference m_BlackboardReference; // 0x70 - 0x168
}; // size - 0x168


class CPulseCell_Inflow_Wait /* "pulse_runtime_lib" */ : public CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */
{
public:
   CPulse_ResumePoint m_WakeResume; // 0x48 - 0x78
}; // size - 0x78


class CPulseCell_Inflow_Yield /* "pulse_runtime_lib" */ : public CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */
{
public:
   CPulse_ResumePoint m_UnyieldResume; // 0x48 - 0x78
}; // size - 0x78


class CPulseCell_LerpCameraSettings /* "server" */ : public CPulseCell_BaseLerp /* "server" */
{
public:
   class CursorState_t /* "server" */ : public CPulseCell_BaseLerp::CursorState_t /* "server" */
   {
   public:
      CHandle< CPointCamera > m_hCamera; // 0x8 - 0xC
      PointCameraSettings_t m_OverlaidStart; // 0xC - 0x1C
      PointCameraSettings_t m_OverlaidEnd; // 0x1C - 0x2C
   }; // size - 0x2C

   float m_flSeconds; // 0x78 - 0x7C
   PointCameraSettings_t m_Start; // 0x7C - 0x8C
   PointCameraSettings_t m_End; // 0x8C - 0x9C
   unsigned char pad_9C[0x4]; // 0x9C - 0xA0
}; // size - 0xA0



class CPulseCell_LimitCount /* "pulse_runtime_lib" */ : public CPulseCell_BaseRequirement /* "pulse_runtime_lib" */
{
public:
   class InstanceState_t /* "pulse_runtime_lib" */
   {
   public:
      int32_t m_nCurrentCount; // 0x0 - 0x4
   }; // size - 0x4

   int32_t m_nLimitCount; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
}; // size - 0x50



class CPulseCell_Outflow_CycleOrdered /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   class InstanceState_t /* "pulse_runtime_lib" */
   {
   public:
      int32_t m_nNextIndex; // 0x0 - 0x4
   }; // size - 0x4

   CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48 - 0x60
}; // size - 0x60



class CPulseCell_Outflow_CycleRandom /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48 - 0x60
}; // size - 0x60


class CPulseCell_Outflow_CycleShuffled /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   class InstanceState_t /* "pulse_runtime_lib" */
   {
   public:
      CUtlVectorFixedGrowable< uint8 > m_Shuffle; // 0x0 - 0x20
      int32_t m_nNextShuffle; // 0x20 - 0x24
      unsigned char pad_24[0x4]; // 0x24 - 0x28
   }; // size - 0x28

   CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48 - 0x60
}; // size - 0x60



class CPulseCell_Outflow_IntSwitch /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48 - 0x78
   CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x78 - 0x90
}; // size - 0x90


class CPulseCell_Outflow_ListenForEntityOutput /* "server" */ : public CPulseCell_BaseYieldingInflow /* "server" */
{
public:
   class CursorState_t /* "server" */
   {
   public:
      CHandle< CBaseEntity > m_entity; // 0x0 - 0x4
   }; // size - 0x4

   SignatureOutflow_Resume m_OnFired; // 0x48 - 0x78
   CPulse_ResumePoint m_OnCanceled; // 0x78 - 0xA8
   CGlobalSymbol m_strEntityOutput; // 0xA8 - 0xB0
   CUtlString m_strEntityOutputParam; // 0xB0 - 0xB8
   bool m_bListenUntilCanceled; // 0xB8 - 0xB9
   unsigned char pad_B9[0x7]; // 0xB9 - 0xC0
}; // size - 0xC0




class CPulseCell_Outflow_PlaySequence /* "server" */ : public CPulseCell_Outflow_PlaySceneBase /* "server" */
{
public:
   CUtlString m_ParamSequenceName; // 0xC0 - 0xC8
}; // size - 0xC8


class CPulseCell_Outflow_PlayVCD /* "server" */ : public CPulseCell_Outflow_PlaySceneBase /* "server" */
{
public:
   CUtlString m_vcdFilename; // 0xC0 - 0xC8
}; // size - 0xC8


class CPulseCell_Outflow_ScriptedSequence /* "server" */ : public CPulseCell_BaseYieldingInflow /* "server" */
{
public:
   class CursorState_t /* "server" */
   {
   public:
      CHandle< CBaseEntity > m_scriptedSequence; // 0x0 - 0x4
   }; // size - 0x4

   PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // 0x48 - 0x78
   CUtlVector< PulseScriptedSequenceData_t > m_vecAdditionalActors; // 0x78 - 0x90
   CPulse_ResumePoint m_OnFinished; // 0x90 - 0xC0
   CPulse_ResumePoint m_OnCanceled; // 0xC0 - 0xF0
   CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0xF0 - 0x108
}; // size - 0x108



class CPulseCell_Outflow_StringSwitch /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   CPulse_OutflowConnection m_DefaultCaseOutflow; // 0x48 - 0x78
   CUtlVector< CPulse_OutflowConnection > m_CaseOutflows; // 0x78 - 0x90
}; // size - 0x90


class CPulseCell_Outflow_TestExplicitYesNo /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   CPulse_OutflowConnection m_Yes; // 0x48 - 0x78
   CPulse_OutflowConnection m_No; // 0x78 - 0xA8
}; // size - 0xA8


class CPulseCell_Outflow_TestRandomYesNo /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   CPulse_OutflowConnection m_Yes; // 0x48 - 0x78
   CPulse_OutflowConnection m_No; // 0x78 - 0xA8
}; // size - 0xA8


class CPulseCell_PlaySequence /* "server" */ : public CPulseCell_BaseYieldingInflow /* "server" */
{
public:
   class CursorState_t /* "server" */
   {
   public:
      CHandle< CBaseAnimGraph > m_hTarget; // 0x0 - 0x4
   }; // size - 0x4

   CUtlString m_SequenceName; // 0x48 - 0x50
   PulseNodeDynamicOutflows_t m_PulseAnimEvents; // 0x50 - 0x68
   CPulse_ResumePoint m_OnFinished; // 0x68 - 0x98
   CPulse_ResumePoint m_OnCanceled; // 0x98 - 0xC8
}; // size - 0xC8



class CPulseCell_SoundEventStart /* "server" */ : public CPulseCell_BaseFlow /* "server" */
{
public:
   SoundEventStartType_t m_Type; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
}; // size - 0x50


class CPulseCell_Step_CallExternalMethod /* "pulse_runtime_lib" */ : public CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_MethodName; // 0x48 - 0x50
   CUtlSymbolLarge m_GameBlackboard; // 0x50 - 0x58
   CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // 0x58 - 0x68
   PulseMethodCallMode_t m_nAsyncCallMode; // 0x68 - 0x6C
   unsigned char pad_6C[0x4]; // 0x6C - 0x70
   CPulse_ResumePoint m_OnFinished; // 0x70 - 0xA0
}; // size - 0xA0


class CPulseCell_Step_DebugLog /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_Step_EntFire /* "server" */ : public CPulseCell_BaseFlow /* "server" */
{
public:
   CUtlString m_Input; // 0x48 - 0x50
}; // size - 0x50


class CPulseCell_Step_FollowEntity /* "server" */ : public CPulseCell_BaseFlow /* "server" */
{
public:
   CUtlString m_ParamBoneOrAttachName; // 0x48 - 0x50
   CUtlString m_ParamBoneOrAttachNameChild; // 0x50 - 0x58
}; // size - 0x58


class CPulseCell_Step_PublicOutput /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
}; // size - 0x50


class CPulseCell_Step_TestDomainCreateFakeEntity /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_Step_TestDomainDestroyFakeEntity /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_Step_TestDomainEntFire /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   CUtlString m_Input; // 0x48 - 0x50
}; // size - 0x50


class CPulseCell_Step_TestDomainTracepoint /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_TestWaitWithCursorState /* "pulse_runtime_lib" */ : public CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */
{
public:
   class CursorState_t /* "pulse_runtime_lib" */
   {
   public:
      float flWaitValue; // 0x0 - 0x4
      bool bFailOnCancel; // 0x4 - 0x5
      unsigned char pad_5[0x3]; // 0x5 - 0x8
   }; // size - 0x8

   CPulse_ResumePoint m_WakeResume; // 0x48 - 0x78
   CPulse_ResumePoint m_WakeCancel; // 0x78 - 0xA8
   CPulse_ResumePoint m_WakeFail; // 0xA8 - 0xD8
}; // size - 0xD8



class CPulseCell_Test_MultiInflow_NoDefault /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_Test_MultiInflow_WithDefault /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_Test_MultiOutflow_WithParams /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   SignatureOutflow_Continue m_Out1; // 0x48 - 0x78
   SignatureOutflow_Continue m_Out2; // 0x78 - 0xA8
}; // size - 0xA8


class CPulseCell_Test_MultiOutflow_WithParams_Yielding /* "pulse_runtime_lib" */ : public CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */
{
public:
   class CursorState_t /* "pulse_runtime_lib" */
   {
   public:
      int32_t nTestStep; // 0x0 - 0x4
   }; // size - 0x4

   SignatureOutflow_Continue m_Out1; // 0x48 - 0x78
   SignatureOutflow_Continue m_AsyncChild1; // 0x78 - 0xA8
   SignatureOutflow_Continue m_AsyncChild2; // 0xA8 - 0xD8
   SignatureOutflow_Resume m_YieldResume1; // 0xD8 - 0x108
   SignatureOutflow_Resume m_YieldResume2; // 0x108 - 0x138
}; // size - 0x138



class CPulseCell_Test_NoInflow /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_Timeline /* "pulse_runtime_lib" */ : public CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */
{
public:
   class TimelineEvent_t /* "pulse_runtime_lib" */
   {
   public:
      float m_flTimeFromPrevious; // 0x0 - 0x4
      bool m_bPauseForPreviousEvents; // 0x4 - 0x5
      bool m_bCallModeSync; // 0x5 - 0x6
      unsigned char pad_6[0x2]; // 0x6 - 0x8
      CPulse_OutflowConnection m_EventOutflow; // 0x8 - 0x38
   }; // size - 0x38

   CUtlVector< CPulseCell_Timeline::TimelineEvent_t > m_TimelineEvents; // 0x48 - 0x60
   bool m_bWaitForChildOutflows; // 0x60 - 0x61
   unsigned char pad_61[0x7]; // 0x61 - 0x68
   CPulse_ResumePoint m_OnFinished; // 0x68 - 0x98
   CPulse_ResumePoint m_OnCanceled; // 0x98 - 0xC8
}; // size - 0xC8



class CPulseCell_Val_TestDomainFindEntityByName /* "pulse_runtime_lib" */ : public CPulseCell_BaseValue /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_Val_TestDomainGetEntityName /* "pulse_runtime_lib" */ : public CPulseCell_BaseValue /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_Value_FindEntByClassNameWithin /* "server" */ : public CPulseCell_BaseValue /* "server" */
{
public:
   CUtlString m_EntityType; // 0x48 - 0x50
}; // size - 0x50


class CPulseCell_Value_FindEntByName /* "server" */ : public CPulseCell_BaseValue /* "server" */
{
public:
   CUtlString m_EntityType; // 0x48 - 0x50
}; // size - 0x50


class CPulseCell_Value_RandomInt /* "pulse_runtime_lib" */ : public CPulseCell_BaseValue /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_Value_TestValue50 /* "pulse_runtime_lib" */ : public CPulseCell_BaseValue /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class CPulseCell_WaitForCursorsWithTag /* "pulse_system" */ : public CPulseCell_WaitForCursorsWithTagBase /* "pulse_system" */
{
public:
   bool m_bTagSelfWhenComplete; // 0x80 - 0x81
   unsigned char pad_81[0x3]; // 0x81 - 0x84
   PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x84 - 0x88
}; // size - 0x88



class CPulseCursorFuncs /* "pulse_system" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CPulseGraphComponentGameBlackboard /* "server" */ : public CPulseGraphComponentBase /* "server" */
{
public:
   unsigned char pad_0[0x178]; // 0x0 - 0x178
}; // size - 0x178


class CPulseGraphComponentPointServer /* "server" */ : public CPulseGraphComponentBase /* "server" */
{
public:
   unsigned char pad_0[0x178]; // 0x0 - 0x178
}; // size - 0x178


class CPulseGraphDef /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlSymbolLarge m_DomainIdentifier; // 0x8 - 0x10
   CUtlSymbolLarge m_ParentMapName; // 0x10 - 0x18
   CUtlSymbolLarge m_ParentXmlName; // 0x18 - 0x20
   CUtlVector< CUtlSymbolLarge > m_vecGameBlackboards; // 0x20 - 0x38
   CUtlVector< CPulse_Chunk* > m_Chunks; // 0x38 - 0x50
   CUtlVector< CPulseCell_Base* > m_Cells; // 0x50 - 0x68
   CUtlVector< CPulse_Variable > m_Vars; // 0x68 - 0x80
   CUtlVector< CPulse_PublicOutput > m_PublicOutputs; // 0x80 - 0x98
   CUtlVector< CPulse_InvokeBinding* > m_InvokeBindings; // 0x98 - 0xB0
   CUtlVector< CPulse_CallInfo* > m_CallInfos; // 0xB0 - 0xC8
   CUtlVector< CPulse_Constant > m_Constants; // 0xC8 - 0xE0
   CUtlVector< CPulse_DomainValue > m_DomainValues; // 0xE0 - 0xF8
   CUtlVector< CPulse_BlackboardReference > m_BlackboardReferences; // 0xF8 - 0x110
   CUtlVector< CPulse_OutputConnection* > m_OutputConnections; // 0x110 - 0x128
   unsigned char pad_128[0x50]; // 0x128 - 0x178
}; // size - 0x178


class CPulseGraphExecutionHistory /* "pulse_runtime_lib" */
{
public:
   PulseGraphInstanceID_t m_nInstanceID; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlString m_strFileName; // 0x8 - 0x10
   CUtlVector< PulseGraphExecutionHistoryEntry_t* > m_vecHistory; // 0x10 - 0x28
   CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > m_mapCellDesc; // 0x28 - 0x50
   CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > m_mapCursorDesc; // 0x50 - 0x78
}; // size - 0x78


class CPulseGraphInstance_TestDomain_Derived /* "pulse_runtime_lib" */ : public CPulseGraphInstance_TestDomain /* "pulse_runtime_lib" */
{
public:
   int32_t m_nInstanceValueX; // 0x120 - 0x124
   unsigned char pad_124[0x4]; // 0x124 - 0x128
}; // size - 0x128


class CPulseGraphInstance_TurtleGraphics /* "pulse_runtime_lib" */ : public CBasePulseGraphInstance /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x118]; // 0x0 - 0x118
}; // size - 0x118


class CPulseMathlib /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CPulseRuntimeMethodArg /* "pulse_runtime_lib" */
{
public:
   CKV3MemberNameWithStorage m_Name; // 0x0 - 0x38
   CUtlString m_Description; // 0x38 - 0x40
   CPulseValueFullType m_Type; // 0x40 - 0x50
}; // size - 0x50


class CPulseServerFuncs /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CPulseServerFuncs_Sounds /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CPulseTestFuncs_DerivedDomain /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CPulseTestFuncs_LibraryA /* "pulse_system" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CPulseTestGapTypeQueryRegistration /* "pulse_runtime_lib" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class CPulseTestScriptLib /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CPulseTurtleGraphicsCursor /* "pulse_runtime_lib" */ : public CPulseExecCursor /* "pulse_runtime_lib" */
{
public:
   Color m_Color; // 0xA0 - 0xA4
   Vector2D m_vPos; // 0xA4 - 0xAC
   float m_flHeadingDeg; // 0xAC - 0xB0
   bool m_bPenUp; // 0xB0 - 0xB1
   unsigned char pad_B1[0x7]; // 0xB1 - 0xB8
}; // size - 0xB8


class CPulse_BlackboardReference /* "pulse_runtime_lib" */
{
public:
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIPulseGraphDef > > m_hBlackboardResource; // 0x0 - 0xE0
   CUtlSymbolLarge m_BlackboardResource; // 0xE0 - 0xE8
   PulseDocNodeID_t m_nNodeID; // 0xE8 - 0xEC
   unsigned char pad_EC[0x4]; // 0xEC - 0xF0
   CGlobalSymbol m_NodeName; // 0xF0 - 0xF8
}; // size - 0xF8


class CPulse_CallInfo /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_PortName; // 0x0 - 0x8
   PulseDocNodeID_t m_nEditorNodeID; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   PulseRegisterMap_t m_RegisterMap; // 0x10 - 0x30
   PulseDocNodeID_t m_CallMethodID; // 0x30 - 0x34
   PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x34 - 0x38
   int32_t m_nSrcInstruction; // 0x38 - 0x3C
   unsigned char pad_3C[0x4]; // 0x3C - 0x40
}; // size - 0x40


class CPulse_Chunk /* "pulse_runtime_lib" */
{
public:
   CUtlLeanVector< PGDInstruction_t > m_Instructions; // 0x0 - 0x10
   CUtlLeanVector< CPulse_RegisterInfo > m_Registers; // 0x10 - 0x20
   CUtlLeanVector< PulseDocNodeID_t > m_InstructionEditorIDs; // 0x20 - 0x30
   unsigned char pad_30[0x28]; // 0x30 - 0x58
}; // size - 0x58


class CPulse_Constant /* "pulse_runtime_lib" */
{
public:
   CPulseValueFullType m_Type; // 0x0 - 0x10
   KeyValues3 m_Value; // 0x10 - 0x20
   unsigned char pad_20[0x8]; // 0x20 - 0x28
}; // size - 0x28


class CPulse_DomainValue /* "pulse_runtime_lib" */
{
public:
   PulseDomainValueType_t m_nType; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CGlobalSymbol m_Value; // 0x8 - 0x10
   CGlobalSymbol m_ExpectedRuntimeType; // 0x10 - 0x18
}; // size - 0x18


class CPulse_InvokeBinding /* "pulse_runtime_lib" */
{
public:
   PulseRegisterMap_t m_RegisterMap; // 0x0 - 0x20
   CUtlSymbolLarge m_FuncName; // 0x20 - 0x28
   PulseRuntimeCellIndex_t m_nCellIndex; // 0x28 - 0x2C
   PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x2C - 0x30
   int32_t m_nSrcInstruction; // 0x30 - 0x34
   unsigned char pad_34[0x54]; // 0x34 - 0x88
}; // size - 0x88


class CPulse_OutputConnection /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_SourceOutput; // 0x0 - 0x8
   CUtlSymbolLarge m_TargetEntity; // 0x8 - 0x10
   CUtlSymbolLarge m_TargetInput; // 0x10 - 0x18
   CUtlSymbolLarge m_Param; // 0x18 - 0x20
}; // size - 0x20


class CPulse_PublicOutput /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_Name; // 0x0 - 0x8
   CUtlString m_Description; // 0x8 - 0x10
   CPulseValueFullType m_ParamType; // 0x10 - 0x20
}; // size - 0x20


class CPulse_RegisterInfo /* "pulse_runtime_lib" */
{
public:
   PulseRuntimeRegisterIndex_t m_nReg; // 0x0 - 0x2
   unsigned char pad_2[0x6]; // 0x2 - 0x8
   CPulseValueFullType m_Type; // 0x8 - 0x18
   CKV3MemberNameWithStorage m_OriginName; // 0x18 - 0x50
   int32_t m_nWrittenByInstruction; // 0x50 - 0x54
   int32_t m_nLastReadByInstruction; // 0x54 - 0x58
}; // size - 0x58


class CPulse_Variable /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_Name; // 0x0 - 0x8
   CUtlString m_Description; // 0x8 - 0x10
   CPulseValueFullType m_Type; // 0x10 - 0x20
   KeyValues3 m_DefaultValue; // 0x20 - 0x30
   unsigned char pad_30[0x2]; // 0x30 - 0x32
   bool m_bIsPublic; // 0x32 - 0x33
   bool m_bIsObservable; // 0x33 - 0x34
   PulseDocNodeID_t m_nEditorNodeID; // 0x34 - 0x38
}; // size - 0x38


class CQuaternionAnimParameter /* "animgraphlib" */ : public CConcreteAnimParameter /* "animgraphlib" */
{
public:
   Quaternion m_defaultValue; // 0x80 - 0x90
   bool m_bInterpolate; // 0x90 - 0x91
   unsigned char pad_91[0xF]; // 0x91 - 0xA0
}; // size - 0xA0


class CRR_Response /* "server" */
{
public:

   enum class ResponseEnum_t : std::uint32_t
   {
      MAX_RESPONSE_NAME = 192,
      MAX_RULE_NAME = 128
   };
   uint8_t m_Type; // 0x0 - 0x1
   char m_szResponseName[192]; // 0x1 - 0xC1
   char m_szMatchingRule[128]; // 0xC1 - 0x141
   unsigned char pad_141[0x7]; // 0x141 - 0x148
   ResponseParams m_Params; // 0x148 - 0x168
   float m_fMatchScore; // 0x168 - 0x16C
   unsigned char pad_16C[0x4]; // 0x16C - 0x170
   char* m_szSpeakerContext; // 0x170 - 0x178
   char* m_szWorldContext; // 0x178 - 0x180
   ResponseFollowup m_Followup; // 0x180 - 0x1B1
   unsigned char pad_1B1[0x1]; // 0x1B1 - 0x1B2
   CUtlSymbol m_recipientFilter; // 0x1B2 - 0x1B4
   unsigned char pad_1B4[0x4]; // 0x1B4 - 0x1B8
   CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1B8 - 0x1D0
   CUtlVector< char* > m_pchCriteriaValues; // 0x1D0 - 0x1E8
}; // size - 0x1E8


class CRagdollAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_50[0x8]; // 0x50 - 0x58
   AnimPoseControl m_nPoseControl; // 0x58 - 0x5C
   float m_flFrequency; // 0x5C - 0x60
   float m_flDampingRatio; // 0x60 - 0x64
   float m_flDecayDuration; // 0x64 - 0x68
   float m_flDecayBias; // 0x68 - 0x6C
   bool m_bDestroy; // 0x6C - 0x6D
   unsigned char pad_6D[0x3]; // 0x6D - 0x70
}; // size - 0x70


class CRagdollComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   CUtlVector< CAnimNodePath > m_ragdollNodePaths; // 0x30 - 0x48
   CUtlVector< int32 > m_boneIndices; // 0x48 - 0x60
   CUtlVector< CUtlString > m_boneNames; // 0x60 - 0x78
   CUtlVector< WeightList > m_weightLists; // 0x78 - 0x90
   float m_flSpringFrequencyMin; // 0x90 - 0x94
   float m_flSpringFrequencyMax; // 0x94 - 0x98
   float m_flMaxStretch; // 0x98 - 0x9C
   bool m_bSolidCollisionAtZeroWeight; // 0x9C - 0x9D
   unsigned char pad_9D[0xB]; // 0x9D - 0xA8
}; // size - 0xA8


class CRagdollUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   int32_t m_nWeightListIndex; // 0x68 - 0x6C
   RagdollPoseControl m_poseControlMethod; // 0x6C - 0x70
}; // size - 0x70


class CRandSimTimer /* "server" */ : public CSimpleSimTimer /* "server" */
{
public:
   float m_minInterval; // 0x8 - 0xC
   float m_maxInterval; // 0xC - 0x10
}; // size - 0x10


class CRandStopwatch /* "server" */ : public CStopwatchBase /* "server" */
{
public:
   float m_minInterval; // 0xC - 0x10
   float m_maxInterval; // 0x10 - 0x14
}; // size - 0x14


class CRandomNumberGeneratorParameters /* "particles" */
{
public:
   bool m_bDistributeEvenly; // 0x0 - 0x1
   unsigned char pad_1[0x3]; // 0x1 - 0x4
   int32_t m_nSeed; // 0x4 - 0x8
}; // size - 0x8


class CRangeFloat /* "tier2" */
{
public:
   float32 m_pValue[2]; // 0x0 - 0x8
}; // size - 0x8


class CRangeInt /* "tier2" */
{
public:
   int32 m_pValue[2]; // 0x0 - 0x8
}; // size - 0x8


class CRegionSVM /* "physicslib" */
{
public:
   CUtlVector< RnPlane_t > m_Planes; // 0x0 - 0x18
   CUtlVector< uint32 > m_Nodes; // 0x18 - 0x30
}; // size - 0x30


class CRemapFloat /* "server" */
{
public:
   float32 m_pValue[4]; // 0x0 - 0x10
}; // size - 0x10


class CRenderBufferBinding /* "modellib" */
{
public:
   uint64_t m_hBuffer; // 0x0 - 0x8
   unsigned char pad_8[0x8]; // 0x8 - 0x10
   uint32_t m_nBindOffsetBytes; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class CRenderGroom /* "modellib" */
{
public:
   CUtlVector< RenderHairStrandInfo_t > m_hairs; // 0x0 - 0x18
   unsigned char pad_18[0x8]; // 0x18 - 0x20
   CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hSimParamsMat; // 0x20 - 0x28
   int32_t m_nSegmentsPerHairStrand; // 0x28 - 0x2C
   int32_t m_nGuideHairCount; // 0x2C - 0x30
   int32_t m_nHairCount; // 0x30 - 0x34
   int32_t m_nGroomGroupID; // 0x34 - 0x38
   int32_t m_nAttachBoneIdx; // 0x38 - 0x3C
   int32_t m_nAttachMeshIdx; // 0x3C - 0x40
   int32_t m_nAttachMeshDrawCallIdx; // 0x40 - 0x44
   float m_flSumOfAllHairLengths; // 0x44 - 0x48
   bool m_bEnableSimulation; // 0x48 - 0x49
   unsigned char pad_49[0x7]; // 0x49 - 0x50
}; // size - 0x50


class CRenderMesh /* "modellib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10 - 0xA0
   CUtlVector< CBaseConstraint* > m_constraints; // 0xA0 - 0xB8
   CRenderSkeleton m_skeleton; // 0xB8 - 0x108
   unsigned char pad_108[0xD8]; // 0x108 - 0x1E0
   DynamicMeshDeformParams_t m_meshDeformParams; // 0x1E0 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
   CRenderGroom* m_pGroomData; // 0x1F0 - 0x1F8
}; // size - 0x1F8


class CRenderSkeleton /* "modellib" */
{
public:
   CUtlVector< RenderSkeletonBone_t > m_bones; // 0x0 - 0x18
   unsigned char pad_18[0x18]; // 0x18 - 0x30
   CUtlVector< int32 > m_boneParents; // 0x30 - 0x48
   int32_t m_nBoneWeightCount; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
}; // size - 0x50


class CReplicationParameters /* "particles" */
{
public:
   ParticleReplicationMode_t m_nReplicationMode; // 0x0 - 0x4
   bool m_bScaleChildParticleRadii; // 0x4 - 0x5
   unsigned char pad_5[0x3]; // 0x5 - 0x8
   CParticleCollectionFloatInput m_flMinRandomRadiusScale; // 0x8 - 0x160
   CParticleCollectionFloatInput m_flMaxRandomRadiusScale; // 0x160 - 0x2B8
   CParticleCollectionVecInput m_vMinRandomDisplacement; // 0x2B8 - 0x910
   CParticleCollectionVecInput m_vMaxRandomDisplacement; // 0x910 - 0xF68
   CParticleCollectionFloatInput m_flModellingScale; // 0xF68 - 0x10C0
}; // size - 0x10C0


class CResponseCriteriaSet /* "server" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
   int32_t m_nNumPrefixedContexts; // 0x20 - 0x24
   bool m_bOverrideOnAppend; // 0x24 - 0x25
   unsigned char pad_25[0x3]; // 0x25 - 0x28
}; // size - 0x28


class CResponseQueue /* "server" */
{
public:
   class CDeferredResponse /* "server" */
   {
   public:
      unsigned char pad_0[0x8]; // 0x0 - 0x8
      CResponseCriteriaSet m_contexts; // 0x8 - 0x30
      float m_fDispatchTime; // 0x30 - 0x34
      CHandle< CBaseEntity > m_hIssuer; // 0x34 - 0x38
      unsigned char pad_38[0x8]; // 0x38 - 0x40
      CRR_Response m_response; // 0x40 - 0x228
      bool m_bResponseValid; // 0x228 - 0x229
      unsigned char pad_229[0x7]; // 0x229 - 0x230
   }; // size - 0x230

   unsigned char pad_0[0x48]; // 0x0 - 0x48
   CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x48 - 0x60
}; // size - 0x60



class CRootUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x68]; // 0x0 - 0x68
}; // size - 0x68


class CRopeOverlapHit /* "server" */
{
public:
   CHandle< CBaseEntity > m_hEntity; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlVector< int32 > m_vecOverlappingLinks; // 0x8 - 0x20
}; // size - 0x20


class CSAdditionalMatchStats_t /* "server" */ : public CSAdditionalPerRoundStats_t /* "server" */
{
public:
   int32_t m_numRoundsSurvived; // 0x18 - 0x1C
   int32_t m_maxNumRoundsSurvived; // 0x1C - 0x20
   int32_t m_numRoundsSurvivedTotal; // 0x20 - 0x24
   int32_t m_iRoundsWonWithoutPurchase; // 0x24 - 0x28
   int32_t m_iRoundsWonWithoutPurchaseTotal; // 0x28 - 0x2C
   int32_t m_numFirstKills; // 0x2C - 0x30
   int32_t m_numClutchKills; // 0x30 - 0x34
   int32_t m_numPistolKills; // 0x34 - 0x38
   int32_t m_numSniperKills; // 0x38 - 0x3C
   int32_t m_iNumSuicides; // 0x3C - 0x40
   int32_t m_iNumTeamKills; // 0x40 - 0x44
   int32_t m_iTeamDamage; // 0x44 - 0x48
}; // size - 0x48


class CSSDSEndFrameViewInfo /* "scenesystem" */
{
public:
   uint64_t m_nViewId; // 0x0 - 0x8
   CUtlString m_ViewName; // 0x8 - 0x10
}; // size - 0x10


class CSSDSMsg_EndFrame /* "scenesystem" */
{
public:
   CUtlVector< CSSDSEndFrameViewInfo > m_Views; // 0x0 - 0x18
}; // size - 0x18


class CSSDSMsg_PostLayer /* "scenesystem" */ : public CSSDSMsg_LayerBase /* "scenesystem" */
{
public:
   unsigned char pad_0[0x38]; // 0x0 - 0x38
}; // size - 0x38


class CSSDSMsg_PreLayer /* "scenesystem" */ : public CSSDSMsg_LayerBase /* "scenesystem" */
{
public:
   unsigned char pad_0[0x38]; // 0x0 - 0x38
}; // size - 0x38


class CSSDSMsg_ViewRender /* "scenesystem" */
{
public:
   SceneViewId_t m_viewId; // 0x0 - 0x10
   CUtlString m_ViewName; // 0x10 - 0x18
}; // size - 0x18


class CSSDSMsg_ViewTarget /* "scenesystem" */
{
public:
   CUtlString m_Name; // 0x0 - 0x8
   uint64_t m_TextureId; // 0x8 - 0x10
   int32_t m_nWidth; // 0x10 - 0x14
   int32_t m_nHeight; // 0x14 - 0x18
   int32_t m_nRequestedWidth; // 0x18 - 0x1C
   int32_t m_nRequestedHeight; // 0x1C - 0x20
   int32_t m_nNumMipLevels; // 0x20 - 0x24
   int32_t m_nDepth; // 0x24 - 0x28
   int32_t m_nMultisampleNumSamples; // 0x28 - 0x2C
   int32_t m_nFormat; // 0x2C - 0x30
}; // size - 0x30


class CSSDSMsg_ViewTargetList /* "scenesystem" */
{
public:
   SceneViewId_t m_viewId; // 0x0 - 0x10
   CUtlString m_ViewName; // 0x10 - 0x18
   CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18 - 0x30
}; // size - 0x30


class CSceneEventInfo /* "server" */
{
public:
   int32_t m_iLayer; // 0x0 - 0x4
   int32_t m_iPriority; // 0x4 - 0x8
   HSequence m_hSequence; // 0x8 - 0xC
   float m_flWeight; // 0xC - 0x10
   bool m_bHasArrived; // 0x10 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
   int32_t m_nType; // 0x14 - 0x18
   GameTime_t m_flNext; // 0x18 - 0x1C
   bool m_bIsGesture; // 0x1C - 0x1D
   bool m_bShouldRemove; // 0x1D - 0x1E
   unsigned char pad_1E[0x26]; // 0x1E - 0x44
   CHandle< CBaseEntity > m_hTarget; // 0x44 - 0x48
   SceneEventId_t m_nSceneEventId; // 0x48 - 0x4C
   bool m_bClientSide; // 0x4C - 0x4D
   bool m_bStarted; // 0x4D - 0x4E
   unsigned char pad_4E[0x2]; // 0x4E - 0x50
}; // size - 0x50


class CSceneObjectData /* "modellib" */
{
public:
   Vector m_vMinBounds; // 0x0 - 0xC
   Vector m_vMaxBounds; // 0xC - 0x18
   CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x18 - 0x30
   CUtlVector< AABB_t > m_drawBounds; // 0x30 - 0x48
   CUtlVector< CMeshletDescriptor > m_meshlets; // 0x48 - 0x60
   Vector4D m_vTintColor; // 0x60 - 0x70
   unsigned char pad_70[0x8]; // 0x70 - 0x78
}; // size - 0x78


class CSchemaSystemInternalRegistration /* "schemasystem" */
{
public:
   Vector2D m_Vector2D; // 0x0 - 0x8
   Vector m_Vector; // 0x8 - 0x14
   unsigned char pad_14[0xC]; // 0x14 - 0x20
   VectorAligned m_VectorAligned; // 0x20 - 0x30
   Quaternion m_Quaternion; // 0x30 - 0x40
   QAngle m_QAngle; // 0x40 - 0x4C
   RotationVector m_RotationVector; // 0x4C - 0x58
   RadianEuler m_RadianEuler; // 0x58 - 0x64
   DegreeEuler m_DegreeEuler; // 0x64 - 0x70
   QuaternionStorage m_QuaternionStorage; // 0x70 - 0x80
   matrix3x4_t m_matrix3x4_t; // 0x80 - 0xB0
   matrix3x4a_t m_matrix3x4a_t; // 0xB0 - 0xE0
   Color m_Color; // 0xE0 - 0xE4
   Vector4D m_Vector4D; // 0xE4 - 0xF4
   unsigned char pad_F4[0xC]; // 0xF4 - 0x100
   CTransform m_CTransform; // 0x100 - 0x120
   KeyValues* m_pKeyValues; // 0x120 - 0x128
   CUtlBinaryBlock m_CUtlBinaryBlock; // 0x128 - 0x140
   CUtlString m_CUtlString; // 0x140 - 0x148
   CUtlSymbol m_CUtlSymbol; // 0x148 - 0x14A
   unsigned char pad_14A[0x2]; // 0x14A - 0x14C
   CUtlStringToken m_stringToken; // 0x14C - 0x150
   CUtlStringTokenWithStorage m_stringTokenWithStorage; // 0x150 - 0x168
   CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x168 - 0x170
   KeyValues3 m_KV3; // 0x170 - 0x180
}; // size - 0x180


class CScriptUniformRandomStream /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   HSCRIPT m_hScriptScope; // 0x8 - 0x10
   unsigned char pad_10[0x8C]; // 0x10 - 0x9C
   int32_t m_nInitialSeed; // 0x9C - 0xA0
}; // size - 0xA0


class CSelectorUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58 - 0x70
   CUtlVector< int8 > m_tags; // 0x70 - 0x88
   unsigned char pad_88[0x4]; // 0x88 - 0x8C
   CBlendCurve m_blendCurve; // 0x8C - 0x94
   CAnimValue< float32 > m_flBlendTime; // 0x94 - 0x9C
   CAnimParamHandle m_hParameter; // 0x9C - 0x9E
   unsigned char pad_9E[0x2]; // 0x9E - 0xA0
   int32_t m_nTagIndex; // 0xA0 - 0xA4
   SelectorTagBehavior_t m_eTagBehavior; // 0xA4 - 0xA8
   bool m_bResetOnChange; // 0xA8 - 0xA9
   bool m_bLockWhenWaning; // 0xA9 - 0xAA
   bool m_bSyncCyclesOnChange; // 0xAA - 0xAB
   unsigned char pad_AB[0x5]; // 0xAB - 0xB0
}; // size - 0xB0


class CSeqAutoLayer /* "animationsystem" */
{
public:
   int16_t m_nLocalReference; // 0x0 - 0x2
   int16_t m_nLocalPose; // 0x2 - 0x4
   CSeqAutoLayerFlag m_flags; // 0x4 - 0xC
   float m_start; // 0xC - 0x10
   float m_peak; // 0x10 - 0x14
   float m_tail; // 0x14 - 0x18
   float m_end; // 0x18 - 0x1C
}; // size - 0x1C


class CSeqAutoLayerFlag /* "animationsystem" */
{
public:
   bool m_bPost; // 0x0 - 0x1
   bool m_bSpline; // 0x1 - 0x2
   bool m_bXFade; // 0x2 - 0x3
   bool m_bNoBlend; // 0x3 - 0x4
   bool m_bLocal; // 0x4 - 0x5
   bool m_bPose; // 0x5 - 0x6
   bool m_bFetchFrame; // 0x6 - 0x7
   bool m_bSubtract; // 0x7 - 0x8
}; // size - 0x8


class CSeqBoneMaskList /* "animationsystem" */
{
public:
   CBufferString m_sName; // 0x0 - 0x10
   CUtlVector< int16 > m_nLocalBoneArray; // 0x10 - 0x28
   CUtlVector< float32 > m_flBoneWeightArray; // 0x28 - 0x40
   float m_flDefaultMorphCtrlWeight; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
   CUtlVector< CUtlPair< CBufferString, float32 > > m_morphCtrlWeightArray; // 0x48 - 0x60
}; // size - 0x60


class CSeqCmdLayer /* "animationsystem" */
{
public:
   int16_t m_cmd; // 0x0 - 0x2
   int16_t m_nLocalReference; // 0x2 - 0x4
   int16_t m_nLocalBonemask; // 0x4 - 0x6
   int16_t m_nDstResult; // 0x6 - 0x8
   int16_t m_nSrcResult; // 0x8 - 0xA
   bool m_bSpline; // 0xA - 0xB
   unsigned char pad_B[0x1]; // 0xB - 0xC
   float m_flVar1; // 0xC - 0x10
   float m_flVar2; // 0x10 - 0x14
   int16_t m_nLineNumber; // 0x14 - 0x16
   unsigned char pad_16[0x2]; // 0x16 - 0x18
}; // size - 0x18


class CSeqCmdSeqDesc /* "animationsystem" */
{
public:
   CBufferString m_sName; // 0x0 - 0x10
   CSeqSeqDescFlag m_flags; // 0x10 - 0x1B
   unsigned char pad_1B[0x1]; // 0x1B - 0x1C
   CSeqTransition m_transition; // 0x1C - 0x24
   int16_t m_nFrameRangeSequence; // 0x24 - 0x26
   int16_t m_nFrameCount; // 0x26 - 0x28
   float m_flFPS; // 0x28 - 0x2C
   int16_t m_nSubCycles; // 0x2C - 0x2E
   int16_t m_numLocalResults; // 0x2E - 0x30
   CUtlVector< CSeqCmdLayer > m_cmdLayerArray; // 0x30 - 0x48
   CUtlVector< CAnimEventDefinition > m_eventArray; // 0x48 - 0x60
   CUtlVector< CAnimActivity > m_activityArray; // 0x60 - 0x78
   CUtlVector< CSeqPoseSetting > m_poseSettingArray; // 0x78 - 0x90
}; // size - 0x90


class CSeqIKLock /* "animationsystem" */
{
public:
   float m_flPosWeight; // 0x0 - 0x4
   float m_flAngleWeight; // 0x4 - 0x8
   int16_t m_nLocalBone; // 0x8 - 0xA
   bool m_bBonesOrientedAlongPositiveX; // 0xA - 0xB
   unsigned char pad_B[0x1]; // 0xB - 0xC
}; // size - 0xC


class CSeqMultiFetch /* "animationsystem" */
{
public:
   CSeqMultiFetchFlag m_flags; // 0x0 - 0x6
   unsigned char pad_6[0x2]; // 0x6 - 0x8
   CUtlVector< int16 > m_localReferenceArray; // 0x8 - 0x20
   int32 m_nGroupSize[2]; // 0x20 - 0x28
   int32 m_nLocalPose[2]; // 0x28 - 0x30
   CUtlVector< float32 > m_poseKeyArray0; // 0x30 - 0x48
   CUtlVector< float32 > m_poseKeyArray1; // 0x48 - 0x60
   int32_t m_nLocalCyclePoseParameter; // 0x60 - 0x64
   bool m_bCalculatePoseParameters; // 0x64 - 0x65
   bool m_bFixedBlendWeight; // 0x65 - 0x66
   unsigned char pad_66[0x2]; // 0x66 - 0x68
   float32 m_flFixedBlendWeightVals[2]; // 0x68 - 0x70
}; // size - 0x70


class CSeqMultiFetchFlag /* "animationsystem" */
{
public:
   bool m_bRealtime; // 0x0 - 0x1
   bool m_bCylepose; // 0x1 - 0x2
   bool m_b0D; // 0x2 - 0x3
   bool m_b1D; // 0x3 - 0x4
   bool m_b2D; // 0x4 - 0x5
   bool m_b2D_TRI; // 0x5 - 0x6
}; // size - 0x6


class CSeqPoseParamDesc /* "animationsystem" */
{
public:
   CBufferString m_sName; // 0x0 - 0x10
   float m_flStart; // 0x10 - 0x14
   float m_flEnd; // 0x14 - 0x18
   float m_flLoop; // 0x18 - 0x1C
   bool m_bLooping; // 0x1C - 0x1D
   unsigned char pad_1D[0x3]; // 0x1D - 0x20
}; // size - 0x20


class CSeqPoseSetting /* "animationsystem" */
{
public:
   CBufferString m_sPoseParameter; // 0x0 - 0x10
   CBufferString m_sAttachment; // 0x10 - 0x20
   CBufferString m_sReferenceSequence; // 0x20 - 0x30
   float m_flValue; // 0x30 - 0x34
   bool m_bX; // 0x34 - 0x35
   bool m_bY; // 0x35 - 0x36
   bool m_bZ; // 0x36 - 0x37
   unsigned char pad_37[0x1]; // 0x37 - 0x38
   int32_t m_eType; // 0x38 - 0x3C
   unsigned char pad_3C[0x4]; // 0x3C - 0x40
}; // size - 0x40


class CSeqS1SeqDesc /* "animationsystem" */
{
public:
   CBufferString m_sName; // 0x0 - 0x10
   CSeqSeqDescFlag m_flags; // 0x10 - 0x1B
   unsigned char pad_1B[0x5]; // 0x1B - 0x20
   CSeqMultiFetch m_fetch; // 0x20 - 0x90
   int32_t m_nLocalWeightlist; // 0x90 - 0x94
   unsigned char pad_94[0x4]; // 0x94 - 0x98
   CUtlVector< CSeqAutoLayer > m_autoLayerArray; // 0x98 - 0xB0
   CUtlVector< CSeqIKLock > m_IKLockArray; // 0xB0 - 0xC8
   CSeqTransition m_transition; // 0xC8 - 0xD0
   KeyValues3 m_SequenceKeys; // 0xD0 - 0xE0
   CBufferString m_LegacyKeyValueText; // 0xE0 - 0xF0
   CUtlVector< CAnimActivity > m_activityArray; // 0xF0 - 0x108
   CUtlVector< CFootMotion > m_footMotion; // 0x108 - 0x120
}; // size - 0x120


class CSeqScaleSet /* "animationsystem" */
{
public:
   CBufferString m_sName; // 0x0 - 0x10
   bool m_bRootOffset; // 0x10 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
   Vector m_vRootOffset; // 0x14 - 0x20
   CUtlVector< int16 > m_nLocalBoneArray; // 0x20 - 0x38
   CUtlVector< float32 > m_flBoneScaleArray; // 0x38 - 0x50
}; // size - 0x50


class CSeqSeqDescFlag /* "animationsystem" */
{
public:
   bool m_bLooping; // 0x0 - 0x1
   bool m_bSnap; // 0x1 - 0x2
   bool m_bAutoplay; // 0x2 - 0x3
   bool m_bPost; // 0x3 - 0x4
   bool m_bHidden; // 0x4 - 0x5
   bool m_bMulti; // 0x5 - 0x6
   bool m_bLegacyDelta; // 0x6 - 0x7
   bool m_bLegacyWorldspace; // 0x7 - 0x8
   bool m_bLegacyCyclepose; // 0x8 - 0x9
   bool m_bLegacyRealtime; // 0x9 - 0xA
   bool m_bModelDoc; // 0xA - 0xB
}; // size - 0xB


class CSeqSynthAnimDesc /* "animationsystem" */
{
public:
   CBufferString m_sName; // 0x0 - 0x10
   CSeqSeqDescFlag m_flags; // 0x10 - 0x1B
   unsigned char pad_1B[0x1]; // 0x1B - 0x1C
   CSeqTransition m_transition; // 0x1C - 0x24
   int16_t m_nLocalBaseReference; // 0x24 - 0x26
   int16_t m_nLocalBoneMask; // 0x26 - 0x28
   CUtlVector< CAnimActivity > m_activityArray; // 0x28 - 0x40
}; // size - 0x40


class CSeqTransition /* "animationsystem" */
{
public:
   float m_flFadeInTime; // 0x0 - 0x4
   float m_flFadeOutTime; // 0x4 - 0x8
}; // size - 0x8


class CSequenceFinishedAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_50[0x8]; // 0x50 - 0x58
   CUtlString m_sequenceName; // 0x58 - 0x60
}; // size - 0x60


class CSequenceGroupData /* "animationsystem" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CBufferString m_sName; // 0x10 - 0x20
   uint32_t m_nFlags; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
   CUtlVector< CBufferString > m_localSequenceNameArray; // 0x28 - 0x40
   CUtlVector< CSeqS1SeqDesc > m_localS1SeqDescArray; // 0x40 - 0x58
   CUtlVector< CSeqS1SeqDesc > m_localMultiSeqDescArray; // 0x58 - 0x70
   CUtlVector< CSeqSynthAnimDesc > m_localSynthAnimDescArray; // 0x70 - 0x88
   CUtlVector< CSeqCmdSeqDesc > m_localCmdSeqDescArray; // 0x88 - 0xA0
   CUtlVector< CSeqBoneMaskList > m_localBoneMaskArray; // 0xA0 - 0xB8
   CUtlVector< CSeqScaleSet > m_localScaleSetArray; // 0xB8 - 0xD0
   CUtlVector< CBufferString > m_localBoneNameArray; // 0xD0 - 0xE8
   CBufferString m_localNodeName; // 0xE8 - 0xF8
   CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray; // 0xF8 - 0x110
   KeyValues3 m_keyValues; // 0x110 - 0x120
   CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray; // 0x120 - 0x138
}; // size - 0x138


class CSetParameterActionUpdater /* "animgraphlib" */ : public CAnimActionUpdater /* "animgraphlib" */
{
public:
   CAnimParamHandle m_hParam; // 0x18 - 0x1A
   CAnimVariant m_value; // 0x1A - 0x2B
   unsigned char pad_2B[0x5]; // 0x2B - 0x30
}; // size - 0x30


class CShatterGlassShard /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   uint32_t m_hShardHandle; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< Vector2D > m_vecPanelVertices; // 0x10 - 0x28
   Vector2D m_vLocalPanelSpaceOrigin; // 0x28 - 0x30
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x30 - 0x38
   CHandle< CShatterGlassShardPhysics > m_hPhysicsEntity; // 0x38 - 0x3C
   CHandle< CFuncShatterglass > m_hParentPanel; // 0x3C - 0x40
   uint32_t m_hParentShard; // 0x40 - 0x44
   ShatterGlassStressType m_ShatterStressType; // 0x44 - 0x45
   unsigned char pad_45[0x3]; // 0x45 - 0x48
   Vector m_vecStressVelocity; // 0x48 - 0x54
   bool m_bCreatedModel; // 0x54 - 0x55
   unsigned char pad_55[0x3]; // 0x55 - 0x58
   float m_flLongestEdge; // 0x58 - 0x5C
   float m_flShortestEdge; // 0x5C - 0x60
   float m_flLongestAcross; // 0x60 - 0x64
   float m_flShortestAcross; // 0x64 - 0x68
   float m_flSumOfAllEdges; // 0x68 - 0x6C
   float m_flArea; // 0x6C - 0x70
   OnFrame m_nOnFrameEdge; // 0x70 - 0x71
   unsigned char pad_71[0x3]; // 0x71 - 0x74
   int32_t m_nParentPanelsNthShard; // 0x74 - 0x78
   int32_t m_nSubShardGeneration; // 0x78 - 0x7C
   Vector2D m_vecAverageVertPosition; // 0x7C - 0x84
   bool m_bAverageVertPositionIsValid; // 0x84 - 0x85
   unsigned char pad_85[0x3]; // 0x85 - 0x88
   Vector2D m_vecPanelSpaceStressPositionA; // 0x88 - 0x90
   Vector2D m_vecPanelSpaceStressPositionB; // 0x90 - 0x98
   bool m_bStressPositionAIsValid; // 0x98 - 0x99
   bool m_bStressPositionBIsValid; // 0x99 - 0x9A
   bool m_bFlaggedForRemoval; // 0x9A - 0x9B
   unsigned char pad_9B[0x1]; // 0x9B - 0x9C
   GameTime_t m_flPhysicsEntitySpawnedAtTime; // 0x9C - 0xA0
   bool m_bShatterRateLimited; // 0xA0 - 0xA1
   unsigned char pad_A1[0x3]; // 0xA1 - 0xA4
   CHandle< CBaseEntity > m_hEntityHittingMe; // 0xA4 - 0xA8
   CUtlVector< uint32 > m_vecNeighbors; // 0xA8 - 0xC0
}; // size - 0xC0


class CSimTimer /* "server" */ : public CSimpleSimTimer /* "server" */
{
public:
   float m_interval; // 0x8 - 0xC
}; // size - 0xC


class CSimpleStopwatch /* "server" */ : public CStopwatchBase /* "server" */
{
public:
   unsigned char pad_0[0xC]; // 0x0 - 0xC
}; // size - 0xC


class CSingleFrameUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x58 - 0x70
   CPoseHandle m_hPoseCacheHandle; // 0x70 - 0x74
   HSequence m_hSequence; // 0x74 - 0x78
   float m_flCycle; // 0x78 - 0x7C
   unsigned char pad_7C[0x4]; // 0x7C - 0x80
}; // size - 0x80


class CSkeletonAnimationController /* "server" */ : public ISkeletonAnimationController /* "server" */
{
public:
   CSkeletonInstance* m_pSkeletonInstance; // 0x8 - 0x10
}; // size - 0x10


class CSkillDamage /* "server" */
{
public:
   CSkillFloat m_flDamage; // 0x0 - 0x10
   float m_flNPCDamageScalarVsNPC; // 0x10 - 0x14
   float m_flPhysicsForceDamage; // 0x14 - 0x18
}; // size - 0x18


class CSkillFloat /* "server" */
{
public:
   float32 m_pValue[4]; // 0x0 - 0x10
}; // size - 0x10


class CSkillInt /* "server" */
{
public:
   int32 m_pValue[4]; // 0x0 - 0x10
}; // size - 0x10


class CSlopeComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   unsigned char pad_30[0x4]; // 0x30 - 0x34
   float m_flTraceDistance; // 0x34 - 0x38
   CAnimParamHandle m_hSlopeAngle; // 0x38 - 0x3A
   CAnimParamHandle m_hSlopeAngleFront; // 0x3A - 0x3C
   CAnimParamHandle m_hSlopeAngleSide; // 0x3C - 0x3E
   CAnimParamHandle m_hSlopeHeading; // 0x3E - 0x40
   CAnimParamHandle m_hSlopeNormal; // 0x40 - 0x42
   CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x42 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
}; // size - 0x48


class CSlowDownOnSlopesUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   float m_flSlowDownStrength; // 0x68 - 0x6C
   unsigned char pad_6C[0x4]; // 0x6C - 0x70
}; // size - 0x70


class CSmoothFunc /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   float m_flSmoothAmplitude; // 0x8 - 0xC
   float m_flSmoothBias; // 0xC - 0x10
   float m_flSmoothDuration; // 0x10 - 0x14
   float m_flSmoothRemainingTime; // 0x14 - 0x18
   int32_t m_nSmoothDir; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CSolveIKChainUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   CUtlVector< CSolveIKTargetHandle_t > m_targetHandles; // 0x68 - 0x80
   SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80 - 0xA0
   unsigned char pad_A0[0x8]; // 0xA0 - 0xA8
}; // size - 0xA8


class CSolveIKTargetHandle_t /* "animgraphlib" */
{
public:
   CAnimParamHandle m_positionHandle; // 0x0 - 0x2
   CAnimParamHandle m_orientationHandle; // 0x2 - 0x4
}; // size - 0x4


class CSosGroupActionLimitSchema /* "soundsystem" */ : public CSosGroupActionSchema /* "soundsystem" */
{
public:
   int32_t m_nMaxCount; // 0x18 - 0x1C
   SosActionStopType_t m_nStopType; // 0x1C - 0x20
   SosActionSortType_t m_nSortType; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
}; // size - 0x28


class CSosGroupActionMemberCountEnvelopeSchema /* "soundsystem" */ : public CSosGroupActionSchema /* "soundsystem" */
{
public:
   int32_t m_nBaseCount; // 0x18 - 0x1C
   int32_t m_nTargetCount; // 0x1C - 0x20
   float m_flBaseValue; // 0x20 - 0x24
   float m_flTargetValue; // 0x24 - 0x28
   float m_flAttack; // 0x28 - 0x2C
   float m_flDecay; // 0x2C - 0x30
   CUtlString m_resultVarName; // 0x30 - 0x38
   bool m_bSaveToGroup; // 0x38 - 0x39
   unsigned char pad_39[0x7]; // 0x39 - 0x40
}; // size - 0x40


class CSosGroupActionSetSoundeventParameterSchema /* "soundsystem" */ : public CSosGroupActionSchema /* "soundsystem" */
{
public:
   int32_t m_nMaxCount; // 0x18 - 0x1C
   float m_flMinValue; // 0x1C - 0x20
   float m_flMaxValue; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
   CUtlString m_opvarName; // 0x28 - 0x30
   SosActionSortType_t m_nSortType; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
}; // size - 0x38


class CSosGroupActionSoundeventClusterSchema /* "soundsystem" */ : public CSosGroupActionSchema /* "soundsystem" */
{
public:
   int32_t m_nMinNearby; // 0x18 - 0x1C
   float m_flClusterEpsilon; // 0x1C - 0x20
   CUtlString m_shouldPlayOpvar; // 0x20 - 0x28
   CUtlString m_shouldPlayClusterChild; // 0x28 - 0x30
   CUtlString m_clusterSizeOpvar; // 0x30 - 0x38
   CUtlString m_groupBoundingBoxMinsOpvar; // 0x38 - 0x40
   CUtlString m_groupBoundingBoxMaxsOpvar; // 0x40 - 0x48
}; // size - 0x48


class CSosGroupActionSoundeventPrioritySchema /* "soundsystem" */ : public CSosGroupActionSchema /* "soundsystem" */
{
public:
   CUtlString m_priorityValue; // 0x18 - 0x20
   CUtlString m_priorityVolumeScalar; // 0x20 - 0x28
   CUtlString m_priorityContributeButDontRead; // 0x28 - 0x30
   CUtlString m_bPriorityReadButDontContribute; // 0x30 - 0x38
}; // size - 0x38


class CSosGroupActionTimeBlockLimitSchema /* "soundsystem" */ : public CSosGroupActionSchema /* "soundsystem" */
{
public:
   int32_t m_nMaxCount; // 0x18 - 0x1C
   float m_flMaxDuration; // 0x1C - 0x20
}; // size - 0x20


class CSosGroupActionTimeLimitSchema /* "soundsystem" */ : public CSosGroupActionSchema /* "soundsystem" */
{
public:
   float m_flMaxDuration; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CSosGroupMatchPattern /* "soundsystem" */ : public CSosGroupBranchPattern /* "soundsystem" */
{
public:
   CUtlString m_matchSoundEventName; // 0x10 - 0x18
   CUtlString m_matchSoundEventSubString; // 0x18 - 0x20
   float m_flEntIndex; // 0x20 - 0x24
   float m_flOpvar; // 0x24 - 0x28
   CUtlString m_opvarString; // 0x28 - 0x30
}; // size - 0x30


class CSosSoundEventGroupListSchema /* "soundsystem" */
{
public:
   CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0 - 0x18
}; // size - 0x18


class CSosSoundEventGroupSchema /* "soundsystem" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   SosGroupType_t m_nType; // 0x8 - 0xC
   bool m_bIsBlocking; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
   int32_t m_nBlockMaxCount; // 0x10 - 0x14
   bool m_bInvertMatch; // 0x14 - 0x15
   unsigned char pad_15[0x3]; // 0x15 - 0x18
   CSosGroupMatchPattern m_matchPattern; // 0x18 - 0x48
   CSosGroupBranchPattern m_branchPattern; // 0x48 - 0x58
   float m_flLifeSpanTime; // 0x58 - 0x5C
   unsigned char pad_5C[0x64]; // 0x5C - 0xC0
   CSosGroupActionSchema* m_vActions[4]; // 0xC0 - 0xE0
}; // size - 0xE0


class CSound /* "server" */
{
public:
   CHandle< CBaseEntity > m_hOwner; // 0x0 - 0x4
   CHandle< CBaseEntity > m_hTarget; // 0x4 - 0x8
   int32_t m_iVolume; // 0x8 - 0xC
   float m_flOcclusionScale; // 0xC - 0x10
   AISound_t m_Sound; // 0x10 - 0x14
   int32_t m_iNextAudible; // 0x14 - 0x18
   GameTime_t m_flExpireTime; // 0x18 - 0x1C
   int16_t m_iNext; // 0x1C - 0x1E
   bool m_bNoExpirationTime; // 0x1E - 0x1F
   unsigned char pad_1F[0x1]; // 0x1F - 0x20
   int32_t m_ownerChannelIndex; // 0x20 - 0x24
   Vector m_vecOrigin; // 0x24 - 0x30
   bool m_bHasOwner; // 0x30 - 0x31
   unsigned char pad_31[0x3]; // 0x31 - 0x34
}; // size - 0x34


class CSoundEnvelope /* "server" */
{
public:
   float m_current; // 0x0 - 0x4
   float m_target; // 0x4 - 0x8
   float m_rate; // 0x8 - 0xC
   bool m_forceupdate; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
}; // size - 0x10


class CSoundEventMetaData /* "soundsystem" */
{
public:
   CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix; // 0x0 - 0x8
}; // size - 0x8


class CSoundInfoHeader /* "soundsystem_voicecontainers" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CSoundPatch /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CSoundEnvelope m_pitch; // 0x8 - 0x18
   CSoundEnvelope m_volume; // 0x18 - 0x28
   unsigned char pad_28[0x8]; // 0x28 - 0x30
   float m_shutdownTime; // 0x30 - 0x34
   float m_flLastTime; // 0x34 - 0x38
   CUtlSymbolLarge m_iszSoundScriptName; // 0x38 - 0x40
   CHandle< CBaseEntity > m_hEnt; // 0x40 - 0x44
   CEntityIndex m_soundEntityIndex; // 0x44 - 0x48
   Vector m_soundOrigin; // 0x48 - 0x54
   int32_t m_isPlaying; // 0x54 - 0x58
   CCopyRecipientFilter m_Filter; // 0x58 - 0x80
   float m_flCloseCaptionDuration; // 0x80 - 0x84
   bool m_bUpdatedSoundOrigin; // 0x84 - 0x85
   unsigned char pad_85[0x3]; // 0x85 - 0x88
   CUtlSymbolLarge m_iszClassName; // 0x88 - 0x90
}; // size - 0x90


class CSpeedScaleUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   CAnimParamHandle m_paramIndex; // 0x68 - 0x6A
   unsigned char pad_6A[0x6]; // 0x6A - 0x70
}; // size - 0x70


class CStanceOverrideUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   CUtlVector< StanceInfo_t > m_footStanceInfo; // 0x68 - 0x80
   CAnimUpdateNodeRef m_pStanceSourceNode; // 0x80 - 0x90
   CAnimParamHandle m_hParameter; // 0x90 - 0x92
   unsigned char pad_92[0x2]; // 0x92 - 0x94
   StanceOverrideMode m_eMode; // 0x94 - 0x98
}; // size - 0x98


class CStanceScaleUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   CAnimParamHandle m_hParam; // 0x68 - 0x6A
   unsigned char pad_6A[0x6]; // 0x6A - 0x70
}; // size - 0x70


class CStateActionUpdater /* "animgraphlib" */
{
public:
   CSmartPtr< CAnimActionUpdater > m_pAction; // 0x0 - 0x8
   StateActionBehavior m_eBehavior; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class CStateMachineComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   CAnimStateMachineUpdater m_stateMachine; // 0x30 - 0x88
}; // size - 0x88


class CStateMachineUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   unsigned char pad_58[0x10]; // 0x58 - 0x68
   CAnimStateMachineUpdater m_stateMachine; // 0x68 - 0xC0
   CUtlVector< CStateNodeStateData > m_stateData; // 0xC0 - 0xD8
   CUtlVector< CStateNodeTransitionData > m_transitionData; // 0xD8 - 0xF0
   unsigned char pad_F0[0x4]; // 0xF0 - 0xF4
   bool m_bBlockWaningTags; // 0xF4 - 0xF5
   bool m_bLockStateWhenWaning; // 0xF5 - 0xF6
   unsigned char pad_F6[0x2]; // 0xF6 - 0xF8
}; // size - 0xF8


class CStateNodeStateData /* "animgraphlib" */
{
public:
   CAnimUpdateNodeRef m_pChild; // 0x0 - 0x10
   unsigned char m_bExclusiveRootMotion : 1; // 0x10 - 0x11
   unsigned char m_bExclusiveRootMotionFirstFrame : 1; // 0x10 - 0x11
   unsigned char pad_11[0x7]; // 0x11 - 0x18
}; // size - 0x18


class CStateNodeTransitionData /* "animgraphlib" */
{
public:
   CBlendCurve m_curve; // 0x0 - 0x8
   CAnimValue< float32 > m_blendDuration; // 0x8 - 0x10
   CAnimValue< float32 > m_resetCycleValue; // 0x10 - 0x18
   unsigned char m_bReset : 1; // 0x18 - 0x19
   unsigned char m_resetCycleOption : 3; // 0x18 - 0x19
   unsigned char pad_19[0x3]; // 0x19 - 0x1C
}; // size - 0x1C


class CStateUpdateData /* "animgraphlib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   AnimScriptHandle m_hScript; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< int32 > m_transitionIndices; // 0x10 - 0x28
   CUtlVector< CStateActionUpdater > m_actions; // 0x28 - 0x40
   AnimStateID m_stateID; // 0x40 - 0x44
   unsigned char m_bIsStartState : 1; // 0x44 - 0x45
   unsigned char m_bIsEndState : 1; // 0x44 - 0x45
   unsigned char m_bIsPassthrough : 1; // 0x44 - 0x45
   unsigned char pad_45[0x3]; // 0x45 - 0x48
}; // size - 0x48


class CStaticPoseCacheBuilder /* "animgraphlib" */ : public CStaticPoseCache /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x38]; // 0x0 - 0x38
}; // size - 0x38


class CStepsRemainingMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   CUtlVector< int32 > m_footIndices; // 0x50 - 0x68
   float m_flMinStepsRemaining; // 0x68 - 0x6C
   unsigned char pad_6C[0x4]; // 0x6C - 0x70
}; // size - 0x70


class CStopAtGoalUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x4]; // 0x68 - 0x6C
   float m_flOuterRadius; // 0x6C - 0x70
   float m_flInnerRadius; // 0x70 - 0x74
   float m_flMaxScale; // 0x74 - 0x78
   float m_flMinScale; // 0x78 - 0x7C
   unsigned char pad_7C[0x4]; // 0x7C - 0x80
   CAnimInputDamping m_damping; // 0x80 - 0x90
}; // size - 0x90


class CStopwatch /* "server" */ : public CStopwatchBase /* "server" */
{
public:
   float m_interval; // 0xC - 0x10
}; // size - 0x10


class CStringAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x50]; // 0x0 - 0x50
}; // size - 0x50


class CSubtractUpdateNode /* "animgraphlib" */ : public CBinaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_88[0x4]; // 0x88 - 0x8C
   BinaryNodeChildOption m_footMotionTiming; // 0x8C - 0x90
   bool m_bApplyToFootMotion; // 0x90 - 0x91
   bool m_bApplyChannelsSeparately; // 0x91 - 0x92
   bool m_bUseModelSpace; // 0x92 - 0x93
   unsigned char pad_93[0x5]; // 0x93 - 0x98
}; // size - 0x98


class CSymbolAnimParameter /* "animgraphlib" */ : public CConcreteAnimParameter /* "animgraphlib" */
{
public:
   CGlobalSymbol m_defaultValue; // 0x80 - 0x88
}; // size - 0x88


class CTakeDamageInfo /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   Vector m_vecDamageForce; // 0x8 - 0x14
   Vector m_vecDamagePosition; // 0x14 - 0x20
   Vector m_vecReportedPosition; // 0x20 - 0x2C
   Vector m_vecDamageDirection; // 0x2C - 0x38
   CHandle< CBaseEntity > m_hInflictor; // 0x38 - 0x3C
   CHandle< CBaseEntity > m_hAttacker; // 0x3C - 0x40
   CHandle< CBaseEntity > m_hAbility; // 0x40 - 0x44
   float m_flDamage; // 0x44 - 0x48
   float m_flTotalledDamage; // 0x48 - 0x4C
   int32_t m_bitsDamageType; // 0x4C - 0x50
   int32_t m_iDamageCustom; // 0x50 - 0x54
   AmmoIndex_t m_iAmmoType; // 0x54 - 0x55
   unsigned char pad_55[0xB]; // 0x55 - 0x60
   float m_flOriginalDamage; // 0x60 - 0x64
   bool m_bShouldBleed; // 0x64 - 0x65
   bool m_bShouldSpark; // 0x65 - 0x66
   unsigned char pad_66[0xA]; // 0x66 - 0x70
   TakeDamageFlags_t m_nDamageFlags; // 0x70 - 0x78
   int32_t m_nNumObjectsPenetrated; // 0x78 - 0x7C
   unsigned char pad_7C[0x4]; // 0x7C - 0x80
   HSCRIPT m_hScriptInstance; // 0x80 - 0x88
   unsigned char pad_88[0x14]; // 0x88 - 0x9C
   bool m_bInTakeDamageFlow; // 0x9C - 0x9D
   unsigned char pad_9D[0xB]; // 0x9D - 0xA8
}; // size - 0xA8


class CTakeDamageResult /* "server" */
{
public:
   CTakeDamageInfo* m_pOriginatingInfo; // 0x0 - 0x8
   int32_t m_nHealthLost; // 0x8 - 0xC
   int32_t m_nDamageTaken; // 0xC - 0x10
   int32_t m_nTotalledHealthLost; // 0x10 - 0x14
   int32_t m_nTotalledDamageTaken; // 0x14 - 0x18
}; // size - 0x18


class CTakeDamageSummaryScopeGuard /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries; // 0x8 - 0x20
}; // size - 0x20


class CTaskHandshakeAnimTag /* "animgraphlib" */ : public CHandshakeAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CTaskStatusAnimTag /* "animgraphlib" */ : public CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CTestDomainDerived_Cursor /* "pulse_runtime_lib" */ : public CPulseExecCursor /* "pulse_runtime_lib" */
{
public:
   int32_t m_nCursorValueA; // 0xA0 - 0xA4
   int32_t m_nCursorValueB; // 0xA4 - 0xA8
}; // size - 0xA8


class CTiltTwistConstraint /* "modellib" */ : public CBaseConstraint /* "modellib" */
{
public:
   int32_t m_nTargetAxis; // 0x70 - 0x74
   int32_t m_nSlaveAxis; // 0x74 - 0x78
   unsigned char pad_78[0x28]; // 0x78 - 0xA0
}; // size - 0xA0


class CTimeRemainingMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   bool m_bMatchByTimeRemaining; // 0x50 - 0x51
   unsigned char pad_51[0x3]; // 0x51 - 0x54
   float m_flMaxTimeRemaining; // 0x54 - 0x58
   bool m_bFilterByTimeRemaining; // 0x58 - 0x59
   unsigned char pad_59[0x3]; // 0x59 - 0x5C
   float m_flMinTimeRemaining; // 0x5C - 0x60
}; // size - 0x60


class CToggleComponentActionUpdater /* "animgraphlib" */ : public CAnimActionUpdater /* "animgraphlib" */
{
public:
   AnimComponentID m_componentID; // 0x18 - 0x1C
   bool m_bSetEnabled; // 0x1C - 0x1D
   unsigned char pad_1D[0x3]; // 0x1D - 0x20
}; // size - 0x20


class CTransitionUpdateData /* "animgraphlib" */
{
public:
   uint8_t m_srcStateIndex; // 0x0 - 0x1
   uint8_t m_destStateIndex; // 0x1 - 0x2
   unsigned char m_nHandshakeMaskToDisableFirst : 7; // 0x2 - 0x3
   unsigned char m_bDisabled : 1; // 0x2 - 0x3
}; // size - 0x3


class CTurnHelperUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x4]; // 0x68 - 0x6C
   AnimValueSource m_facingTarget; // 0x6C - 0x70
   float m_turnStartTimeOffset; // 0x70 - 0x74
   float m_turnDuration; // 0x74 - 0x78
   bool m_bMatchChildDuration; // 0x78 - 0x79
   unsigned char pad_79[0x3]; // 0x79 - 0x7C
   float m_manualTurnOffset; // 0x7C - 0x80
   bool m_bUseManualTurnOffset; // 0x80 - 0x81
   unsigned char pad_81[0x7]; // 0x81 - 0x88
}; // size - 0x88


class CTwistConstraint /* "modellib" */ : public CBaseConstraint /* "modellib" */
{
public:
   bool m_bInverse; // 0x70 - 0x71
   unsigned char pad_71[0xF]; // 0x71 - 0x80
   Quaternion m_qParentBindRotation; // 0x80 - 0x90
   Quaternion m_qChildBindRotation; // 0x90 - 0xA0
}; // size - 0xA0


class CTwoBoneIKUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x8]; // 0x68 - 0x70
   TwoBoneIKSettings_t m_opFixedData; // 0x70 - 0x1D0
   unsigned char pad_1D0[0x10]; // 0x1D0 - 0x1E0
}; // size - 0x1E0


class CVPhysXSurfacePropertiesList /* "modellib" */
{
public:
   CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList; // 0x0 - 0x18
}; // size - 0x18


class CVSound /* "soundsystem_voicecontainers" */
{
public:
   int32_t m_nRate; // 0x0 - 0x4
   CVSoundFormat_t m_nFormat; // 0x4 - 0x5
   unsigned char pad_5[0x3]; // 0x5 - 0x8
   uint32_t m_nChannels; // 0x8 - 0xC
   int32_t m_nLoopStart; // 0xC - 0x10
   uint32_t m_nSampleCount; // 0x10 - 0x14
   float m_flDuration; // 0x14 - 0x18
   CUtlVector< CAudioSentence > m_Sentences; // 0x18 - 0x30
   uint32_t m_nStreamingSize; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
   CUtlVector< int32 > m_nSeekTable; // 0x38 - 0x50
   int32_t m_nLoopEnd; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
   CUtlBinaryBlock m_encodedHeader; // 0x58 - 0x70
   unsigned char pad_70[0x10]; // 0x70 - 0x80
}; // size - 0x80


class CVariantDefaultAllocator /* "entity2" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CVectorAnimParameter /* "animgraphlib" */ : public CConcreteAnimParameter /* "animgraphlib" */
{
public:
   Vector m_defaultValue; // 0x80 - 0x8C
   bool m_bInterpolate; // 0x8C - 0x8D
   unsigned char pad_8D[0x3]; // 0x8D - 0x90
}; // size - 0x90


class CVectorQuantizer /* "animgraphlib" */
{
public:
   CUtlVector< float32 > m_centroidVectors; // 0x0 - 0x18
   int32_t m_nCentroids; // 0x18 - 0x1C
   int32_t m_nDimensions; // 0x1C - 0x20
}; // size - 0x20


class CVirtualAnimParameter /* "animgraphlib" */ : public CAnimParameterBase /* "animgraphlib" */
{
public:
   CUtlString m_expressionString; // 0x70 - 0x78
   AnimParamType_t m_eParamType; // 0x78 - 0x79
   unsigned char pad_79[0x7]; // 0x79 - 0x80
}; // size - 0x80


class CVoiceContainerAmpedDecayingSineWave /* "soundsystem_voicecontainers" */ : public CVoiceContainerDecayingSineWave /* "soundsystem_voicecontainers" */
{
public:
   float m_flGainAmount; // 0xF8 - 0xFC
   unsigned char pad_FC[0x4]; // 0xFC - 0x100
}; // size - 0x100


class CVoiceContainerBlender /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_firstSound; // 0xF0 - 0xF8
   CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_secondSound; // 0xF8 - 0x100
   float m_flBlendFactor; // 0x100 - 0x104
   unsigned char pad_104[0x4]; // 0x104 - 0x108
}; // size - 0x108


class CVoiceContainerDefault /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_vsndReference; // 0xF0 - 0xF8
}; // size - 0xF8


class CVoiceContainerEnvelopeAnalyzer /* "soundsystem_voicecontainers" */ : public CVoiceContainerAnalysisBase /* "soundsystem_voicecontainers" */
{
public:
   EMode_t m_mode; // 0x50 - 0x54
   int32_t m_nSamples; // 0x54 - 0x58
   float m_flThreshold; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
}; // size - 0x60


class CVoiceContainerNull /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   unsigned char pad_0[0xF0]; // 0x0 - 0xF0
}; // size - 0xF0


class CVoiceContainerRandomSampler /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   float m_flAmplitude; // 0xF0 - 0xF4
   float m_flAmplitudeJitter; // 0xF4 - 0xF8
   float m_flTimeJitter; // 0xF8 - 0xFC
   float m_flMaxLength; // 0xFC - 0x100
   int32_t m_nNumDelayVariations; // 0x100 - 0x104
   unsigned char pad_104[0x4]; // 0x104 - 0x108
   CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources; // 0x108 - 0x120
   unsigned char pad_120[0xF8]; // 0x120 - 0x218
}; // size - 0x218


class CVoiceContainerRealtimeFMSineWave /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   float m_flCarrierFrequency; // 0xF0 - 0xF4
   float m_flModulatorFrequency; // 0xF4 - 0xF8
   float m_flModulatorAmount; // 0xF8 - 0xFC
   unsigned char pad_FC[0x4]; // 0xFC - 0x100
}; // size - 0x100


class CVoiceContainerSelector /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   PlayBackMode_t m_mode; // 0xF0 - 0xF4
   bool m_bRetrigger; // 0xF4 - 0xF5
   unsigned char pad_F5[0x3]; // 0xF5 - 0xF8
   CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_soundsToPlay; // 0xF8 - 0x110
   unsigned char pad_110[0x20]; // 0x110 - 0x130
}; // size - 0x130


class CVoiceContainerStaticAdditiveSynth /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   class CGainScalePerInstance /* "soundsystem_voicecontainers" */
   {
   public:
      float m_flMinVolume; // 0x0 - 0x4
      int32_t m_nInstancesAtMinVolume; // 0x4 - 0x8
      float m_flMaxVolume; // 0x8 - 0xC
      int32_t m_nInstancesAtMaxVolume; // 0xC - 0x10
   }; // size - 0x10

   class CHarmonic /* "soundsystem_voicecontainers" */
   {
   public:
      EWaveform m_nWaveform; // 0x0 - 0x1
      EMidiNote m_nFundamental; // 0x1 - 0x2
      unsigned char pad_2[0x2]; // 0x2 - 0x4
      int32_t m_nOctave; // 0x4 - 0x8
      float m_flCents; // 0x8 - 0xC
      float m_flPhase; // 0xC - 0x10
      CPiecewiseCurve m_curve; // 0x10 - 0x50
      CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance m_volumeScaling; // 0x50 - 0x60
      unsigned char pad_60[0x8]; // 0x60 - 0x68
   }; // size - 0x68

   class CTone /* "soundsystem_voicecontainers" */
   {
   public:
      CUtlVector< CVoiceContainerStaticAdditiveSynth::CHarmonic > m_harmonics; // 0x0 - 0x18
      CPiecewiseCurve m_curve; // 0x18 - 0x58
      bool m_bSyncInstances; // 0x58 - 0x59
      unsigned char pad_59[0x7]; // 0x59 - 0x60
   }; // size - 0x60

   CUtlVector< CVoiceContainerStaticAdditiveSynth::CTone > m_tones; // 0xF0 - 0x108
   unsigned char pad_108[0x18]; // 0x108 - 0x120
}; // size - 0x120





class CVoiceContainerSwitch /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   CUtlVector< CVoiceContainerBase* > m_soundsToPlay; // 0xF0 - 0x108
}; // size - 0x108


class CVoxelVisibility /* "worldrenderer" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
   uint32_t m_nBaseClusterCount; // 0x40 - 0x44
   uint32_t m_nPVSBytesPerCluster; // 0x44 - 0x48
   Vector m_vMinBounds; // 0x48 - 0x54
   Vector m_vMaxBounds; // 0x54 - 0x60
   float m_flGridSize; // 0x60 - 0x64
   uint32_t m_nSkyVisibilityCluster; // 0x64 - 0x68
   uint32_t m_nSunVisibilityCluster; // 0x68 - 0x6C
   VoxelVisBlockOffset_t m_NodeBlock; // 0x6C - 0x74
   VoxelVisBlockOffset_t m_RegionBlock; // 0x74 - 0x7C
   VoxelVisBlockOffset_t m_EnclosedClusterListBlock; // 0x7C - 0x84
   VoxelVisBlockOffset_t m_EnclosedClustersBlock; // 0x84 - 0x8C
   VoxelVisBlockOffset_t m_MasksBlock; // 0x8C - 0x94
   VoxelVisBlockOffset_t m_nVisBlocks; // 0x94 - 0x9C
   unsigned char pad_9C[0x4]; // 0x9C - 0xA0
}; // size - 0xA0


class CWayPointHelperUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x4]; // 0x68 - 0x6C
   float m_flStartCycle; // 0x6C - 0x70
   float m_flEndCycle; // 0x70 - 0x74
   bool m_bOnlyGoals; // 0x74 - 0x75
   bool m_bPreventOvershoot; // 0x75 - 0x76
   bool m_bPreventUndershoot; // 0x76 - 0x77
   unsigned char pad_77[0x1]; // 0x77 - 0x78
}; // size - 0x78


class CZeroPoseUpdateNode /* "animgraphlib" */ : public CLeafUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x60]; // 0x0 - 0x60
}; // size - 0x60


class C_CSGO_PreviewModel_GraphController /* "client" */ : public CAnimGraphControllerBase /* "client" */
{
public:
   CAnimGraphParamOptionalRef< char* > m_pszCharacterMode; // 0x18 - 0x38
   CAnimGraphParamOptionalRef< char* > m_pszWeaponState; // 0x38 - 0x58
   CAnimGraphParamOptionalRef< char* > m_pszWeaponType; // 0x58 - 0x78
   CAnimGraphParamOptionalRef< char* > m_pszEndOfMatchCelebration; // 0x78 - 0x98
}; // size - 0x98


class C_CSGO_PreviewPlayer_GraphController /* "client" */ : public CAnimGraphControllerBase /* "client" */
{
public:
   CAnimGraphParamOptionalRef< char* > m_pszCharacterMode; // 0x18 - 0x38
   CAnimGraphParamOptionalRef< char* > m_pszTeamPreviewVariant; // 0x38 - 0x58
   CAnimGraphParamOptionalRef< char* > m_pszTeamPreviewPosition; // 0x58 - 0x78
   CAnimGraphParamOptionalRef< char* > m_pszEndOfMatchCelebration; // 0x78 - 0x98
   CAnimGraphParamOptionalRef< int32 > m_nTeamPreviewRandom; // 0x98 - 0xB0
   CAnimGraphParamOptionalRef< char* > m_pszWeaponState; // 0xB0 - 0xD0
   CAnimGraphParamOptionalRef< char* > m_pszWeaponType; // 0xD0 - 0xF0
   CAnimGraphParamOptionalRef< bool > m_bCT; // 0xF0 - 0x108
}; // size - 0x108


class C_Chicken_GraphController /* "client" */ : public CAnimGraphControllerBase /* "client" */
{
public:
   CAnimGraphParamRef< char* > m_paramActivity; // 0x18 - 0x38
   CAnimGraphParamRef< bool > m_paramEndActivityImmediately; // 0x38 - 0x50
   CAnimGraphParamRef< bool > m_paramSnapToSquatting; // 0x50 - 0x68
   float m_flSquatProbability; // 0x68 - 0x6C
   unsigned char pad_6C[0x4]; // 0x6C - 0x70
}; // size - 0x70


class C_CommandContext /* "client" */
{
public:
   bool needsprocessing; // 0x0 - 0x1
   unsigned char pad_1[0x8F]; // 0x1 - 0x90
   int32_t command_number; // 0x90 - 0x94
   unsigned char pad_94[0x4]; // 0x94 - 0x98
}; // size - 0x98


class C_INIT_AddVectorToVector /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Vector m_vecScale; // 0x1C0 - 0x1CC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1CC - 0x1D0
   ParticleAttributeIndex_t m_nFieldInput; // 0x1D0 - 0x1D4
   Vector m_vOffsetMin; // 0x1D4 - 0x1E0
   Vector m_vOffsetMax; // 0x1E0 - 0x1EC
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1EC - 0x1F4
   unsigned char pad_1F4[0x4]; // 0x1F4 - 0x1F8
}; // size - 0x1F8


class C_INIT_AgeNoise /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   bool m_bAbsVal; // 0x1C0 - 0x1C1
   bool m_bAbsValInv; // 0x1C1 - 0x1C2
   unsigned char pad_1C2[0x2]; // 0x1C2 - 0x1C4
   float m_flOffset; // 0x1C4 - 0x1C8
   float m_flAgeMin; // 0x1C8 - 0x1CC
   float m_flAgeMax; // 0x1CC - 0x1D0
   float m_flNoiseScale; // 0x1D0 - 0x1D4
   float m_flNoiseScaleLoc; // 0x1D4 - 0x1D8
   Vector m_vecOffsetLoc; // 0x1D8 - 0x1E4
   unsigned char pad_1E4[0x4]; // 0x1E4 - 0x1E8
}; // size - 0x1E8


class C_INIT_ChaoticAttractor /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flAParm; // 0x1C0 - 0x1C4
   float m_flBParm; // 0x1C4 - 0x1C8
   float m_flCParm; // 0x1C8 - 0x1CC
   float m_flDParm; // 0x1CC - 0x1D0
   float m_flScale; // 0x1D0 - 0x1D4
   float m_flSpeedMin; // 0x1D4 - 0x1D8
   float m_flSpeedMax; // 0x1D8 - 0x1DC
   int32_t m_nBaseCP; // 0x1DC - 0x1E0
   bool m_bUniformSpeed; // 0x1E0 - 0x1E1
   unsigned char pad_1E1[0x7]; // 0x1E1 - 0x1E8
}; // size - 0x1E8


class C_INIT_ColorLitPerParticle /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   unsigned char pad_1C0[0x18]; // 0x1C0 - 0x1D8
   Color m_ColorMin; // 0x1D8 - 0x1DC
   Color m_ColorMax; // 0x1DC - 0x1E0
   Color m_TintMin; // 0x1E0 - 0x1E4
   Color m_TintMax; // 0x1E4 - 0x1E8
   float m_flTintPerc; // 0x1E8 - 0x1EC
   ParticleColorBlendMode_t m_nTintBlendMode; // 0x1EC - 0x1F0
   float m_flLightAmplification; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4]; // 0x1F4 - 0x1F8
}; // size - 0x1F8


class C_INIT_CreateAlongPath /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_fMaxDistance; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
   CPathParameters m_PathParams; // 0x1D0 - 0x210
   bool m_bUseRandomCPs; // 0x210 - 0x211
   unsigned char pad_211[0x3]; // 0x211 - 0x214
   Vector m_vEndOffset; // 0x214 - 0x220
   bool m_bSaveOffset; // 0x220 - 0x221
   unsigned char pad_221[0xF]; // 0x221 - 0x230
}; // size - 0x230


class C_INIT_CreateFromCPs /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nIncrement; // 0x1C0 - 0x1C4
   int32_t m_nMinCP; // 0x1C4 - 0x1C8
   int32_t m_nMaxCP; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CParticleCollectionFloatInput m_nDynamicCPCount; // 0x1D0 - 0x328
}; // size - 0x328


class C_INIT_CreateFromParentParticles /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flVelocityScale; // 0x1C0 - 0x1C4
   float m_flIncrement; // 0x1C4 - 0x1C8
   bool m_bRandomDistribution; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   int32_t m_nRandomSeed; // 0x1CC - 0x1D0
   bool m_bSubFrame; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x7]; // 0x1D1 - 0x1D8
}; // size - 0x1D8


class C_INIT_CreateFromPlaneCache /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Vector m_vecOffsetMin; // 0x1C0 - 0x1CC
   Vector m_vecOffsetMax; // 0x1CC - 0x1D8
   unsigned char pad_1D8[0x1]; // 0x1D8 - 0x1D9
   bool m_bUseNormal; // 0x1D9 - 0x1DA
   unsigned char pad_1DA[0x6]; // 0x1DA - 0x1E0
}; // size - 0x1E0


class C_INIT_CreateInEpitrochoid /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nComponent1; // 0x1C0 - 0x1C4
   int32_t m_nComponent2; // 0x1C4 - 0x1C8
   CParticleTransformInput m_TransformInput; // 0x1C8 - 0x230
   CPerParticleFloatInput m_flParticleDensity; // 0x230 - 0x388
   CPerParticleFloatInput m_flOffset; // 0x388 - 0x4E0
   CPerParticleFloatInput m_flRadius1; // 0x4E0 - 0x638
   CPerParticleFloatInput m_flRadius2; // 0x638 - 0x790
   bool m_bUseCount; // 0x790 - 0x791
   bool m_bUseLocalCoords; // 0x791 - 0x792
   bool m_bOffsetExistingPos; // 0x792 - 0x793
   unsigned char pad_793[0x5]; // 0x793 - 0x798
}; // size - 0x798


class C_INIT_CreateOnGrid /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleCollectionFloatInput m_nXCount; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_nYCount; // 0x318 - 0x470
   CParticleCollectionFloatInput m_nZCount; // 0x470 - 0x5C8
   CParticleCollectionFloatInput m_nXSpacing; // 0x5C8 - 0x720
   CParticleCollectionFloatInput m_nYSpacing; // 0x720 - 0x878
   CParticleCollectionFloatInput m_nZSpacing; // 0x878 - 0x9D0
   int32_t m_nControlPointNumber; // 0x9D0 - 0x9D4
   bool m_bLocalSpace; // 0x9D4 - 0x9D5
   bool m_bCenter; // 0x9D5 - 0x9D6
   bool m_bHollow; // 0x9D6 - 0x9D7
   unsigned char pad_9D7[0x1]; // 0x9D7 - 0x9D8
}; // size - 0x9D8


class C_INIT_CreateOnModel /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleModelInput m_modelInput; // 0x1C0 - 0x220
   CParticleTransformInput m_transformInput; // 0x220 - 0x288
   int32_t m_nForceInModel; // 0x288 - 0x28C
   bool m_bScaleToVolume; // 0x28C - 0x28D
   bool m_bEvenDistribution; // 0x28D - 0x28E
   unsigned char pad_28E[0x2]; // 0x28E - 0x290
   CParticleCollectionFloatInput m_nDesiredHitbox; // 0x290 - 0x3E8
   int32_t m_nHitboxValueFromControlPointIndex; // 0x3E8 - 0x3EC
   unsigned char pad_3EC[0x4]; // 0x3EC - 0x3F0
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x3F0 - 0xA48
   float m_flBoneVelocity; // 0xA48 - 0xA4C
   float m_flMaxBoneVelocity; // 0xA4C - 0xA50
   CParticleCollectionVecInput m_vecDirectionBias; // 0xA50 - 0x10A8
   char m_HitboxSetName[128]; // 0x10A8 - 0x1128
   bool m_bLocalCoords; // 0x1128 - 0x1129
   bool m_bUseBones; // 0x1129 - 0x112A
   bool m_bUseMesh; // 0x112A - 0x112B
   unsigned char pad_112B[0x5]; // 0x112B - 0x1130
   CParticleCollectionFloatInput m_flShellSize; // 0x1130 - 0x1288
}; // size - 0x1288


class C_INIT_CreateOnModelAtHeight /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   bool m_bUseBones; // 0x1C0 - 0x1C1
   bool m_bForceZ; // 0x1C1 - 0x1C2
   unsigned char pad_1C2[0x2]; // 0x1C2 - 0x1C4
   int32_t m_nControlPointNumber; // 0x1C4 - 0x1C8
   int32_t m_nHeightCP; // 0x1C8 - 0x1CC
   bool m_bUseWaterHeight; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
   CParticleCollectionFloatInput m_flDesiredHeight; // 0x1D0 - 0x328
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x328 - 0x980
   CParticleCollectionVecInput m_vecDirectionBias; // 0x980 - 0xFD8
   ParticleHitboxBiasType_t m_nBiasType; // 0xFD8 - 0xFDC
   bool m_bLocalCoords; // 0xFDC - 0xFDD
   bool m_bPreferMovingBoxes; // 0xFDD - 0xFDE
   char m_HitboxSetName[128]; // 0xFDE - 0x105E
   unsigned char pad_105E[0x2]; // 0x105E - 0x1060
   CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x1060 - 0x11B8
   CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x11B8 - 0x1310
}; // size - 0x1310


class C_INIT_CreateParticleImpulse /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleFloatInput m_InputRadius; // 0x1C0 - 0x318
   CPerParticleFloatInput m_InputMagnitude; // 0x318 - 0x470
   ParticleFalloffFunction_t m_nFalloffFunction; // 0x470 - 0x474
   unsigned char pad_474[0x4]; // 0x474 - 0x478
   CPerParticleFloatInput m_InputFalloffExp; // 0x478 - 0x5D0
   ParticleImpulseType_t m_nImpulseType; // 0x5D0 - 0x5D4
   unsigned char pad_5D4[0x4]; // 0x5D4 - 0x5D8
}; // size - 0x5D8


class C_INIT_CreatePhyllotaxis /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nScaleCP; // 0x1C4 - 0x1C8
   int32_t m_nComponent; // 0x1C8 - 0x1CC
   float m_fRadCentCore; // 0x1CC - 0x1D0
   float m_fRadPerPoint; // 0x1D0 - 0x1D4
   float m_fRadPerPointTo; // 0x1D4 - 0x1D8
   float m_fpointAngle; // 0x1D8 - 0x1DC
   float m_fsizeOverall; // 0x1DC - 0x1E0
   float m_fRadBias; // 0x1E0 - 0x1E4
   float m_fMinRad; // 0x1E4 - 0x1E8
   float m_fDistBias; // 0x1E8 - 0x1EC
   bool m_bUseLocalCoords; // 0x1EC - 0x1ED
   bool m_bUseWithContEmit; // 0x1ED - 0x1EE
   bool m_bUseOrigRadius; // 0x1EE - 0x1EF
   unsigned char pad_1EF[0x1]; // 0x1EF - 0x1F0
}; // size - 0x1F0


class C_INIT_CreateSequentialPath /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_fMaxDistance; // 0x1C0 - 0x1C4
   float m_flNumToAssign; // 0x1C4 - 0x1C8
   bool m_bLoop; // 0x1C8 - 0x1C9
   bool m_bCPPairs; // 0x1C9 - 0x1CA
   bool m_bSaveOffset; // 0x1CA - 0x1CB
   unsigned char pad_1CB[0x5]; // 0x1CB - 0x1D0
   CPathParameters m_PathParams; // 0x1D0 - 0x210
}; // size - 0x210


class C_INIT_CreateSequentialPathV2 /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleFloatInput m_fMaxDistance; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_flNumToAssign; // 0x318 - 0x470
   bool m_bLoop; // 0x470 - 0x471
   bool m_bCPPairs; // 0x471 - 0x472
   bool m_bSaveOffset; // 0x472 - 0x473
   unsigned char pad_473[0xD]; // 0x473 - 0x480
   CPathParameters m_PathParams; // 0x480 - 0x4C0
   unsigned char pad_4C0[0x10]; // 0x4C0 - 0x4D0
}; // size - 0x4D0


class C_INIT_CreateSpiralSphere /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nOverrideCP; // 0x1C4 - 0x1C8
   int32_t m_nDensity; // 0x1C8 - 0x1CC
   float m_flInitialRadius; // 0x1CC - 0x1D0
   float m_flInitialSpeedMin; // 0x1D0 - 0x1D4
   float m_flInitialSpeedMax; // 0x1D4 - 0x1D8
   bool m_bUseParticleCount; // 0x1D8 - 0x1D9
   unsigned char pad_1D9[0x7]; // 0x1D9 - 0x1E0
}; // size - 0x1E0


class C_INIT_CreateWithinBox /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleVecInput m_vecMin; // 0x1C0 - 0x818
   CPerParticleVecInput m_vecMax; // 0x818 - 0xE70
   int32_t m_nControlPointNumber; // 0xE70 - 0xE74
   bool m_bLocalSpace; // 0xE74 - 0xE75
   unsigned char pad_E75[0x3]; // 0xE75 - 0xE78
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0xE78 - 0xE80
}; // size - 0xE80


class C_INIT_CreateWithinSphereTransform /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleFloatInput m_fRadiusMin; // 0x1C0 - 0x318
   CPerParticleFloatInput m_fRadiusMax; // 0x318 - 0x470
   CPerParticleVecInput m_vecDistanceBias; // 0x470 - 0xAC8
   Vector m_vecDistanceBiasAbs; // 0xAC8 - 0xAD4
   unsigned char pad_AD4[0x4]; // 0xAD4 - 0xAD8
   CParticleTransformInput m_TransformInput; // 0xAD8 - 0xB40
   CPerParticleFloatInput m_fSpeedMin; // 0xB40 - 0xC98
   CPerParticleFloatInput m_fSpeedMax; // 0xC98 - 0xDF0
   float m_fSpeedRandExp; // 0xDF0 - 0xDF4
   bool m_bLocalCoords; // 0xDF4 - 0xDF5
   unsigned char pad_DF5[0x3]; // 0xDF5 - 0xDF8
   float m_flEndCPGrowthTime; // 0xDF8 - 0xDFC
   unsigned char pad_DFC[0x4]; // 0xDFC - 0xE00
   CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xE00 - 0x1458
   CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x1458 - 0x1AB0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1AB0 - 0x1AB4
   ParticleAttributeIndex_t m_nFieldVelocity; // 0x1AB4 - 0x1AB8
}; // size - 0x1AB8


class C_INIT_CreationNoise /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   bool m_bAbsVal; // 0x1C4 - 0x1C5
   bool m_bAbsValInv; // 0x1C5 - 0x1C6
   unsigned char pad_1C6[0x2]; // 0x1C6 - 0x1C8
   float m_flOffset; // 0x1C8 - 0x1CC
   float m_flOutputMin; // 0x1CC - 0x1D0
   float m_flOutputMax; // 0x1D0 - 0x1D4
   float m_flNoiseScale; // 0x1D4 - 0x1D8
   float m_flNoiseScaleLoc; // 0x1D8 - 0x1DC
   Vector m_vecOffsetLoc; // 0x1DC - 0x1E8
   float m_flWorldTimeScale; // 0x1E8 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_INIT_DistanceCull /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPoint; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flDistance; // 0x1C8 - 0x320
   bool m_bCullInside; // 0x320 - 0x321
   unsigned char pad_321[0x7]; // 0x321 - 0x328
}; // size - 0x328


class C_INIT_DistanceToCPInit /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_flInputMin; // 0x1C8 - 0x320
   CPerParticleFloatInput m_flInputMax; // 0x320 - 0x478
   CPerParticleFloatInput m_flOutputMin; // 0x478 - 0x5D0
   CPerParticleFloatInput m_flOutputMax; // 0x5D0 - 0x728
   int32_t m_nStartCP; // 0x728 - 0x72C
   bool m_bLOS; // 0x72C - 0x72D
   char m_CollisionGroupName[128]; // 0x72D - 0x7AD
   unsigned char pad_7AD[0x3]; // 0x7AD - 0x7B0
   ParticleTraceSet_t m_nTraceSet; // 0x7B0 - 0x7B4
   unsigned char pad_7B4[0x4]; // 0x7B4 - 0x7B8
   CPerParticleFloatInput m_flMaxTraceLength; // 0x7B8 - 0x910
   float m_flLOSScale; // 0x910 - 0x914
   ParticleSetMethod_t m_nSetMethod; // 0x914 - 0x918
   bool m_bActiveRange; // 0x918 - 0x919
   unsigned char pad_919[0x3]; // 0x919 - 0x91C
   Vector m_vecDistanceScale; // 0x91C - 0x928
   float m_flRemapBias; // 0x928 - 0x92C
   unsigned char pad_92C[0x4]; // 0x92C - 0x930
}; // size - 0x930


class C_INIT_DistanceToNeighborCull /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleFloatInput m_flDistance; // 0x1C0 - 0x318
}; // size - 0x318


class C_INIT_GlobalScale /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flScale; // 0x1C0 - 0x1C4
   int32_t m_nScaleControlPointNumber; // 0x1C4 - 0x1C8
   int32_t m_nControlPointNumber; // 0x1C8 - 0x1CC
   bool m_bScaleRadius; // 0x1CC - 0x1CD
   bool m_bScalePosition; // 0x1CD - 0x1CE
   bool m_bScaleVelocity; // 0x1CE - 0x1CF
   unsigned char pad_1CF[0x1]; // 0x1CF - 0x1D0
}; // size - 0x1D0


class C_INIT_InheritFromParentParticles /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flScale; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   int32_t m_nIncrement; // 0x1C8 - 0x1CC
   bool m_bRandomDistribution; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
   int32_t m_nRandomSeed; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_INIT_InheritVelocity /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   float m_flVelocityScale; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_INIT_InitFloat /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleFloatInput m_InputValue; // 0x1C0 - 0x318
   ParticleAttributeIndex_t m_nOutputField; // 0x318 - 0x31C
   ParticleSetMethod_t m_nSetMethod; // 0x31C - 0x320
   CPerParticleFloatInput m_InputStrength; // 0x320 - 0x478
}; // size - 0x478


class C_INIT_InitFloatCollection /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleCollectionFloatInput m_InputValue; // 0x1C0 - 0x318
   ParticleAttributeIndex_t m_nOutputField; // 0x318 - 0x31C
   unsigned char pad_31C[0x4]; // 0x31C - 0x320
}; // size - 0x320


class C_INIT_InitFromCPSnapshot /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nAttributeToRead; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1C8 - 0x1CC
   int32_t m_nLocalSpaceCP; // 0x1CC - 0x1D0
   bool m_bRandom; // 0x1D0 - 0x1D1
   bool m_bReverse; // 0x1D1 - 0x1D2
   unsigned char pad_1D2[0x6]; // 0x1D2 - 0x1D8
   CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x1D8 - 0x330
   CPerParticleFloatInput m_nManualSnapshotIndex; // 0x330 - 0x488
   int32_t m_nRandomSeed; // 0x488 - 0x48C
   bool m_bLocalSpaceAngles; // 0x48C - 0x48D
   unsigned char pad_48D[0x3]; // 0x48D - 0x490
}; // size - 0x490


class C_INIT_InitFromParentKilled /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1C0 - 0x1C4
   EventTypeSelection_t m_nEventType; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x80]; // 0x1C8 - 0x248
}; // size - 0x248


class C_INIT_InitFromVectorFieldSnapshot /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nLocalSpaceCP; // 0x1C4 - 0x1C8
   int32_t m_nWeightUpdateCP; // 0x1C8 - 0x1CC
   bool m_bUseVerticalVelocity; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
   CPerParticleVecInput m_vecScale; // 0x1D0 - 0x828
}; // size - 0x828


class C_INIT_InitSkinnedPositionFromCPSnapshot /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nSnapshotControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nControlPointNumber; // 0x1C4 - 0x1C8
   bool m_bRandom; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   int32_t m_nRandomSeed; // 0x1CC - 0x1D0
   bool m_bRigid; // 0x1D0 - 0x1D1
   bool m_bSetNormal; // 0x1D1 - 0x1D2
   bool m_bIgnoreDt; // 0x1D2 - 0x1D3
   unsigned char pad_1D3[0x1]; // 0x1D3 - 0x1D4
   float m_flMinNormalVelocity; // 0x1D4 - 0x1D8
   float m_flMaxNormalVelocity; // 0x1D8 - 0x1DC
   SnapshotIndexType_t m_nIndexType; // 0x1DC - 0x1E0
   CPerParticleFloatInput m_flReadIndex; // 0x1E0 - 0x338
   float m_flIncrement; // 0x338 - 0x33C
   int32_t m_nFullLoopIncrement; // 0x33C - 0x340
   int32_t m_nSnapShotStartPoint; // 0x340 - 0x344
   float m_flBoneVelocity; // 0x344 - 0x348
   float m_flBoneVelocityMax; // 0x348 - 0x34C
   bool m_bCopyColor; // 0x34C - 0x34D
   bool m_bCopyAlpha; // 0x34D - 0x34E
   bool m_bSetRadius; // 0x34E - 0x34F
   unsigned char pad_34F[0x1]; // 0x34F - 0x350
}; // size - 0x350


class C_INIT_InitVec /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleVecInput m_InputValue; // 0x1C0 - 0x818
   ParticleAttributeIndex_t m_nOutputField; // 0x818 - 0x81C
   ParticleSetMethod_t m_nSetMethod; // 0x81C - 0x820
   bool m_bNormalizedOutput; // 0x820 - 0x821
   bool m_bWritePreviousPosition; // 0x821 - 0x822
   unsigned char pad_822[0x6]; // 0x822 - 0x828
}; // size - 0x828


class C_INIT_InitVecCollection /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleCollectionVecInput m_InputValue; // 0x1C0 - 0x818
   ParticleAttributeIndex_t m_nOutputField; // 0x818 - 0x81C
   unsigned char pad_81C[0x4]; // 0x81C - 0x820
}; // size - 0x820


class C_INIT_InitialRepulsionVelocity /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   char m_CollisionGroupName[128]; // 0x1C0 - 0x240
   ParticleTraceSet_t m_nTraceSet; // 0x240 - 0x244
   Vector m_vecOutputMin; // 0x244 - 0x250
   Vector m_vecOutputMax; // 0x250 - 0x25C
   int32_t m_nControlPointNumber; // 0x25C - 0x260
   bool m_bPerParticle; // 0x260 - 0x261
   bool m_bTranslate; // 0x261 - 0x262
   bool m_bProportional; // 0x262 - 0x263
   unsigned char pad_263[0x1]; // 0x263 - 0x264
   float m_flTraceLength; // 0x264 - 0x268
   bool m_bPerParticleTR; // 0x268 - 0x269
   bool m_bInherit; // 0x269 - 0x26A
   unsigned char pad_26A[0x2]; // 0x26A - 0x26C
   int32_t m_nChildCP; // 0x26C - 0x270
   int32_t m_nChildGroupID; // 0x270 - 0x274
   unsigned char pad_274[0x4]; // 0x274 - 0x278
}; // size - 0x278


class C_INIT_InitialSequenceFromModel /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1C8 - 0x1CC
   float m_flInputMin; // 0x1CC - 0x1D0
   float m_flInputMax; // 0x1D0 - 0x1D4
   float m_flOutputMin; // 0x1D4 - 0x1D8
   float m_flOutputMax; // 0x1D8 - 0x1DC
   ParticleSetMethod_t m_nSetMethod; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_INIT_InitialVelocityFromHitbox /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flVelocityMin; // 0x1C0 - 0x1C4
   float m_flVelocityMax; // 0x1C4 - 0x1C8
   int32_t m_nControlPointNumber; // 0x1C8 - 0x1CC
   char m_HitboxSetName[128]; // 0x1CC - 0x24C
   bool m_bUseBones; // 0x24C - 0x24D
   unsigned char pad_24D[0x3]; // 0x24D - 0x250
}; // size - 0x250


class C_INIT_InitialVelocityNoise /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Vector m_vecAbsVal; // 0x1C0 - 0x1CC
   Vector m_vecAbsValInv; // 0x1CC - 0x1D8
   CPerParticleVecInput m_vecOffsetLoc; // 0x1D8 - 0x830
   CPerParticleFloatInput m_flOffset; // 0x830 - 0x988
   CPerParticleVecInput m_vecOutputMin; // 0x988 - 0xFE0
   CPerParticleVecInput m_vecOutputMax; // 0xFE0 - 0x1638
   CPerParticleFloatInput m_flNoiseScale; // 0x1638 - 0x1790
   CPerParticleFloatInput m_flNoiseScaleLoc; // 0x1790 - 0x18E8
   CParticleTransformInput m_TransformInput; // 0x18E8 - 0x1950
   bool m_bIgnoreDt; // 0x1950 - 0x1951
   unsigned char pad_1951[0x7]; // 0x1951 - 0x1958
}; // size - 0x1958


class C_INIT_LifespanFromVelocity /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Vector m_vecComponentScale; // 0x1C0 - 0x1CC
   float m_flTraceOffset; // 0x1CC - 0x1D0
   float m_flMaxTraceLength; // 0x1D0 - 0x1D4
   float m_flTraceTolerance; // 0x1D4 - 0x1D8
   int32_t m_nMaxPlanes; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
   char m_CollisionGroupName[128]; // 0x1E0 - 0x260
   ParticleTraceSet_t m_nTraceSet; // 0x260 - 0x264
   unsigned char pad_264[0xC]; // 0x264 - 0x270
   bool m_bIncludeWater; // 0x270 - 0x271
   unsigned char pad_271[0x7]; // 0x271 - 0x278
}; // size - 0x278


class C_INIT_ModelCull /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   bool m_bBoundBox; // 0x1C4 - 0x1C5
   bool m_bCullOutside; // 0x1C5 - 0x1C6
   bool m_bUseBones; // 0x1C6 - 0x1C7
   char m_HitboxSetName[128]; // 0x1C7 - 0x247
   unsigned char pad_247[0x1]; // 0x247 - 0x248
}; // size - 0x248


class C_INIT_MoveBetweenPoints /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleFloatInput m_flSpeedMin; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flSpeedMax; // 0x318 - 0x470
   CPerParticleFloatInput m_flEndSpread; // 0x470 - 0x5C8
   CPerParticleFloatInput m_flStartOffset; // 0x5C8 - 0x720
   CPerParticleFloatInput m_flEndOffset; // 0x720 - 0x878
   int32_t m_nEndControlPointNumber; // 0x878 - 0x87C
   bool m_bTrailBias; // 0x87C - 0x87D
   unsigned char pad_87D[0x3]; // 0x87D - 0x880
}; // size - 0x880


class C_INIT_NormalAlignToCP /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleTransformInput m_transformInput; // 0x1C0 - 0x228
   ParticleControlPointAxis_t m_nControlPointAxis; // 0x228 - 0x22C
   unsigned char pad_22C[0x4]; // 0x22C - 0x230
}; // size - 0x230


class C_INIT_NormalOffset /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Vector m_OffsetMin; // 0x1C0 - 0x1CC
   Vector m_OffsetMax; // 0x1CC - 0x1D8
   int32_t m_nControlPointNumber; // 0x1D8 - 0x1DC
   bool m_bLocalCoords; // 0x1DC - 0x1DD
   bool m_bNormalize; // 0x1DD - 0x1DE
   unsigned char pad_1DE[0x2]; // 0x1DE - 0x1E0
}; // size - 0x1E0


class C_INIT_OffsetVectorToVector /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   Vector m_vecOutputMin; // 0x1C8 - 0x1D4
   Vector m_vecOutputMax; // 0x1D4 - 0x1E0
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1E0 - 0x1E8
}; // size - 0x1E8


class C_INIT_Orient2DRelToCP /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nCP; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flRotOffset; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_INIT_PlaneCull /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPoint; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flDistance; // 0x1C8 - 0x320
   bool m_bCullInside; // 0x320 - 0x321
   unsigned char pad_321[0x7]; // 0x321 - 0x328
}; // size - 0x328


class C_INIT_PointList /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CUtlVector< PointDefinition_t > m_pointList; // 0x1C8 - 0x1E0
   bool m_bPlaceAlongPath; // 0x1E0 - 0x1E1
   bool m_bClosedLoop; // 0x1E1 - 0x1E2
   unsigned char pad_1E2[0x2]; // 0x1E2 - 0x1E4
   int32_t m_nNumPointsAlongPath; // 0x1E4 - 0x1E8
}; // size - 0x1E8


class C_INIT_PositionOffset /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleVecInput m_OffsetMin; // 0x1C0 - 0x818
   CPerParticleVecInput m_OffsetMax; // 0x818 - 0xE70
   CParticleTransformInput m_TransformInput; // 0xE70 - 0xED8
   bool m_bLocalCoords; // 0xED8 - 0xED9
   bool m_bProportional; // 0xED9 - 0xEDA
   unsigned char pad_EDA[0x2]; // 0xEDA - 0xEDC
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0xEDC - 0xEE4
   unsigned char pad_EE4[0x4]; // 0xEE4 - 0xEE8
}; // size - 0xEE8


class C_INIT_PositionOffsetToCP /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumberStart; // 0x1C0 - 0x1C4
   int32_t m_nControlPointNumberEnd; // 0x1C4 - 0x1C8
   bool m_bLocalCoords; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x7]; // 0x1C9 - 0x1D0
}; // size - 0x1D0


class C_INIT_PositionPlaceOnGround /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleFloatInput m_flOffset; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flMaxTraceLength; // 0x318 - 0x470
   char m_CollisionGroupName[128]; // 0x470 - 0x4F0
   ParticleTraceSet_t m_nTraceSet; // 0x4F0 - 0x4F4
   unsigned char pad_4F4[0xC]; // 0x4F4 - 0x500
   ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x500 - 0x504
   bool m_bIncludeWater; // 0x504 - 0x505
   bool m_bSetNormal; // 0x505 - 0x506
   bool m_bSetPXYZOnly; // 0x506 - 0x507
   bool m_bTraceAlongNormal; // 0x507 - 0x508
   bool m_bOffsetonColOnly; // 0x508 - 0x509
   unsigned char pad_509[0x3]; // 0x509 - 0x50C
   float m_flOffsetByRadiusFactor; // 0x50C - 0x510
   int32_t m_nPreserveOffsetCP; // 0x510 - 0x514
   int32_t m_nIgnoreCP; // 0x514 - 0x518
}; // size - 0x518


class C_INIT_PositionWarp /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleCollectionVecInput m_vecWarpMin; // 0x1C0 - 0x818
   CParticleCollectionVecInput m_vecWarpMax; // 0x818 - 0xE70
   int32_t m_nScaleControlPointNumber; // 0xE70 - 0xE74
   int32_t m_nControlPointNumber; // 0xE74 - 0xE78
   int32_t m_nRadiusComponent; // 0xE78 - 0xE7C
   float m_flWarpTime; // 0xE7C - 0xE80
   float m_flWarpStartTime; // 0xE80 - 0xE84
   float m_flPrevPosScale; // 0xE84 - 0xE88
   bool m_bInvertWarp; // 0xE88 - 0xE89
   bool m_bUseCount; // 0xE89 - 0xE8A
   unsigned char pad_E8A[0x6]; // 0xE8A - 0xE90
}; // size - 0xE90


class C_INIT_PositionWarpScalar /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Vector m_vecWarpMin; // 0x1C0 - 0x1CC
   Vector m_vecWarpMax; // 0x1CC - 0x1D8
   CPerParticleFloatInput m_InputValue; // 0x1D8 - 0x330
   float m_flPrevPosScale; // 0x330 - 0x334
   int32_t m_nScaleControlPointNumber; // 0x334 - 0x338
   int32_t m_nControlPointNumber; // 0x338 - 0x33C
   unsigned char pad_33C[0x4]; // 0x33C - 0x340
}; // size - 0x340


class C_INIT_QuantizeFloat /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleFloatInput m_InputValue; // 0x1C0 - 0x318
   ParticleAttributeIndex_t m_nOutputField; // 0x318 - 0x31C
   unsigned char pad_31C[0x4]; // 0x31C - 0x320
}; // size - 0x320


class C_INIT_RadiusFromCPObject /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPoint; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_INIT_RandomAlpha /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   int32_t m_nAlphaMin; // 0x1C4 - 0x1C8
   int32_t m_nAlphaMax; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x8]; // 0x1CC - 0x1D4
   float m_flAlphaRandExponent; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_INIT_RandomAlphaWindowThreshold /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flMin; // 0x1C0 - 0x1C4
   float m_flMax; // 0x1C4 - 0x1C8
   float m_flExponent; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_INIT_RandomColor /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   unsigned char pad_1C0[0x1C]; // 0x1C0 - 0x1DC
   Color m_ColorMin; // 0x1DC - 0x1E0
   Color m_ColorMax; // 0x1E0 - 0x1E4
   Color m_TintMin; // 0x1E4 - 0x1E8
   Color m_TintMax; // 0x1E8 - 0x1EC
   float m_flTintPerc; // 0x1EC - 0x1F0
   float m_flUpdateThreshold; // 0x1F0 - 0x1F4
   int32_t m_nTintCP; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F8 - 0x1FC
   ParticleColorBlendMode_t m_nTintBlendMode; // 0x1FC - 0x200
   float m_flLightAmplification; // 0x200 - 0x204
   unsigned char pad_204[0x4]; // 0x204 - 0x208
}; // size - 0x208


class C_INIT_RandomLifeTime /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_fLifetimeMin; // 0x1C0 - 0x1C4
   float m_fLifetimeMax; // 0x1C4 - 0x1C8
   float m_fLifetimeRandExponent; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_INIT_RandomModelSequence /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   char m_ActivityName[256]; // 0x1C0 - 0x2C0
   char m_SequenceName[256]; // 0x2C0 - 0x3C0
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x3C0 - 0x3C8
}; // size - 0x3C8


class C_INIT_RandomNamedModelBodyPart /* "particles" */ : public C_INIT_RandomNamedModelElement /* "particles" */
{
public:
   unsigned char pad_0[0x1E8]; // 0x0 - 0x1E8
}; // size - 0x1E8


class C_INIT_RandomNamedModelMeshGroup /* "particles" */ : public C_INIT_RandomNamedModelElement /* "particles" */
{
public:
   unsigned char pad_0[0x1E8]; // 0x0 - 0x1E8
}; // size - 0x1E8


class C_INIT_RandomNamedModelSequence /* "particles" */ : public C_INIT_RandomNamedModelElement /* "particles" */
{
public:
   unsigned char pad_0[0x1E8]; // 0x0 - 0x1E8
}; // size - 0x1E8


class C_INIT_RandomRadius /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flRadiusMin; // 0x1C0 - 0x1C4
   float m_flRadiusMax; // 0x1C4 - 0x1C8
   float m_flRadiusRandExponent; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_INIT_RandomRotation /* "particles" */ : public CGeneralRandomRotation /* "particles" */
{
public:
   unsigned char pad_0[0x1E0]; // 0x0 - 0x1E0
}; // size - 0x1E0


class C_INIT_RandomRotationSpeed /* "particles" */ : public CGeneralRandomRotation /* "particles" */
{
public:
   unsigned char pad_0[0x1E0]; // 0x0 - 0x1E0
}; // size - 0x1E0


class C_INIT_RandomScalar /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flMin; // 0x1C0 - 0x1C4
   float m_flMax; // 0x1C4 - 0x1C8
   float m_flExponent; // 0x1C8 - 0x1CC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_INIT_RandomSecondSequence /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nSequenceMin; // 0x1C0 - 0x1C4
   int32_t m_nSequenceMax; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_INIT_RandomSequence /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nSequenceMin; // 0x1C0 - 0x1C4
   int32_t m_nSequenceMax; // 0x1C4 - 0x1C8
   bool m_bShuffle; // 0x1C8 - 0x1C9
   bool m_bLinear; // 0x1C9 - 0x1CA
   unsigned char pad_1CA[0x6]; // 0x1CA - 0x1D0
   CUtlVector< SequenceWeightedList_t > m_WeightedList; // 0x1D0 - 0x1E8
   unsigned char pad_1E8[0x8]; // 0x1E8 - 0x1F0
}; // size - 0x1F0


class C_INIT_RandomTrailLength /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flMinLength; // 0x1C0 - 0x1C4
   float m_flMaxLength; // 0x1C4 - 0x1C8
   float m_flLengthRandExponent; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_INIT_RandomVector /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Vector m_vecMin; // 0x1C0 - 0x1CC
   Vector m_vecMax; // 0x1CC - 0x1D8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1D8 - 0x1DC
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1DC - 0x1E4
   unsigned char pad_1E4[0x4]; // 0x1E4 - 0x1E8
}; // size - 0x1E8


class C_INIT_RandomVectorComponent /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flMin; // 0x1C0 - 0x1C4
   float m_flMax; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C8 - 0x1CC
   int32_t m_nComponent; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_INIT_RandomYaw /* "particles" */ : public CGeneralRandomRotation /* "particles" */
{
public:
   unsigned char pad_0[0x1E0]; // 0x0 - 0x1E0
}; // size - 0x1E0


class C_INIT_RandomYawFlip /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flPercent; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_INIT_RemapCPtoScalar /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   int32_t m_nField; // 0x1C8 - 0x1CC
   float m_flInputMin; // 0x1CC - 0x1D0
   float m_flInputMax; // 0x1D0 - 0x1D4
   float m_flOutputMin; // 0x1D4 - 0x1D8
   float m_flOutputMax; // 0x1D8 - 0x1DC
   float m_flStartTime; // 0x1DC - 0x1E0
   float m_flEndTime; // 0x1E0 - 0x1E4
   ParticleSetMethod_t m_nSetMethod; // 0x1E4 - 0x1E8
   float m_flRemapBias; // 0x1E8 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_INIT_RemapInitialDirectionToTransformToVector /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   ParticleAttributeIndex_t m_nFieldOutput; // 0x228 - 0x22C
   float m_flScale; // 0x22C - 0x230
   float m_flOffsetRot; // 0x230 - 0x234
   Vector m_vecOffsetAxis; // 0x234 - 0x240
   bool m_bNormalize; // 0x240 - 0x241
   unsigned char pad_241[0x7]; // 0x241 - 0x248
}; // size - 0x248


class C_INIT_RemapInitialTransformDirectionToRotation /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   ParticleAttributeIndex_t m_nFieldOutput; // 0x228 - 0x22C
   float m_flOffsetRot; // 0x22C - 0x230
   int32_t m_nComponent; // 0x230 - 0x234
   unsigned char pad_234[0x4]; // 0x234 - 0x238
}; // size - 0x238


class C_INIT_RemapInitialVisibilityScalar /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   unsigned char pad_1C0[0x4]; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flInputMin; // 0x1C8 - 0x1CC
   float m_flInputMax; // 0x1CC - 0x1D0
   float m_flOutputMin; // 0x1D0 - 0x1D4
   float m_flOutputMax; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_INIT_RemapNamedModelBodyPartToScalar /* "particles" */ : public C_INIT_RemapNamedModelElementToScalar /* "particles" */
{
public:
   unsigned char pad_0[0x208]; // 0x0 - 0x208
}; // size - 0x208


class C_INIT_RemapNamedModelMeshGroupToScalar /* "particles" */ : public C_INIT_RemapNamedModelElementToScalar /* "particles" */
{
public:
   unsigned char pad_0[0x208]; // 0x0 - 0x208
}; // size - 0x208


class C_INIT_RemapNamedModelSequenceToScalar /* "particles" */ : public C_INIT_RemapNamedModelElementToScalar /* "particles" */
{
public:
   unsigned char pad_0[0x208]; // 0x0 - 0x208
}; // size - 0x208


class C_INIT_RemapParticleCountToNamedModelBodyPartScalar /* "particles" */ : public C_INIT_RemapParticleCountToNamedModelElementScalar /* "particles" */
{
public:
   unsigned char pad_0[0x210]; // 0x0 - 0x210
}; // size - 0x210


class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar /* "particles" */ : public C_INIT_RemapParticleCountToNamedModelElementScalar /* "particles" */
{
public:
   unsigned char pad_0[0x210]; // 0x0 - 0x210
}; // size - 0x210


class C_INIT_RemapParticleCountToNamedModelSequenceScalar /* "particles" */ : public C_INIT_RemapParticleCountToNamedModelElementScalar /* "particles" */
{
public:
   unsigned char pad_0[0x210]; // 0x0 - 0x210
}; // size - 0x210


class C_INIT_RemapQAnglesToRotation /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
}; // size - 0x228


class C_INIT_RemapScalar /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flInputMin; // 0x1C8 - 0x1CC
   float m_flInputMax; // 0x1CC - 0x1D0
   float m_flOutputMin; // 0x1D0 - 0x1D4
   float m_flOutputMax; // 0x1D4 - 0x1D8
   float m_flStartTime; // 0x1D8 - 0x1DC
   float m_flEndTime; // 0x1DC - 0x1E0
   ParticleSetMethod_t m_nSetMethod; // 0x1E0 - 0x1E4
   bool m_bActiveRange; // 0x1E4 - 0x1E5
   unsigned char pad_1E5[0x3]; // 0x1E5 - 0x1E8
   float m_flRemapBias; // 0x1E8 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_INIT_RemapScalarToVector /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flInputMin; // 0x1C8 - 0x1CC
   float m_flInputMax; // 0x1CC - 0x1D0
   Vector m_vecOutputMin; // 0x1D0 - 0x1DC
   Vector m_vecOutputMax; // 0x1DC - 0x1E8
   float m_flStartTime; // 0x1E8 - 0x1EC
   float m_flEndTime; // 0x1EC - 0x1F0
   ParticleSetMethod_t m_nSetMethod; // 0x1F0 - 0x1F4
   int32_t m_nControlPointNumber; // 0x1F4 - 0x1F8
   bool m_bLocalCoords; // 0x1F8 - 0x1F9
   unsigned char pad_1F9[0x3]; // 0x1F9 - 0x1FC
   float m_flRemapBias; // 0x1FC - 0x200
   unsigned char pad_200[0x8]; // 0x200 - 0x208
}; // size - 0x208


class C_INIT_RemapSpeedToScalar /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   int32_t m_nControlPointNumber; // 0x1C4 - 0x1C8
   float m_flStartTime; // 0x1C8 - 0x1CC
   float m_flEndTime; // 0x1CC - 0x1D0
   float m_flInputMin; // 0x1D0 - 0x1D4
   float m_flInputMax; // 0x1D4 - 0x1D8
   float m_flOutputMin; // 0x1D8 - 0x1DC
   float m_flOutputMax; // 0x1DC - 0x1E0
   ParticleSetMethod_t m_nSetMethod; // 0x1E0 - 0x1E4
   bool m_bPerParticle; // 0x1E4 - 0x1E5
   unsigned char pad_1E5[0x3]; // 0x1E5 - 0x1E8
}; // size - 0x1E8


class C_INIT_RemapTransformOrientationToRotations /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   Vector m_vecRotation; // 0x228 - 0x234
   bool m_bUseQuat; // 0x234 - 0x235
   bool m_bWriteNormal; // 0x235 - 0x236
   unsigned char pad_236[0x2]; // 0x236 - 0x238
}; // size - 0x238


class C_INIT_RemapTransformToVector /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   Vector m_vInputMin; // 0x1C4 - 0x1D0
   Vector m_vInputMax; // 0x1D0 - 0x1DC
   Vector m_vOutputMin; // 0x1DC - 0x1E8
   Vector m_vOutputMax; // 0x1E8 - 0x1F4
   unsigned char pad_1F4[0x4]; // 0x1F4 - 0x1F8
   CParticleTransformInput m_TransformInput; // 0x1F8 - 0x260
   CParticleTransformInput m_LocalSpaceTransform; // 0x260 - 0x2C8
   float m_flStartTime; // 0x2C8 - 0x2CC
   float m_flEndTime; // 0x2CC - 0x2D0
   ParticleSetMethod_t m_nSetMethod; // 0x2D0 - 0x2D4
   bool m_bOffset; // 0x2D4 - 0x2D5
   bool m_bAccelerate; // 0x2D5 - 0x2D6
   unsigned char pad_2D6[0x2]; // 0x2D6 - 0x2D8
   float m_flRemapBias; // 0x2D8 - 0x2DC
   unsigned char pad_2DC[0x4]; // 0x2DC - 0x2E0
}; // size - 0x2E0


class C_INIT_RingWave /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x228 - 0x380
   CPerParticleFloatInput m_flInitialRadius; // 0x380 - 0x4D8
   CPerParticleFloatInput m_flThickness; // 0x4D8 - 0x630
   CPerParticleFloatInput m_flInitialSpeedMin; // 0x630 - 0x788
   CPerParticleFloatInput m_flInitialSpeedMax; // 0x788 - 0x8E0
   CPerParticleFloatInput m_flRoll; // 0x8E0 - 0xA38
   CPerParticleFloatInput m_flPitch; // 0xA38 - 0xB90
   CPerParticleFloatInput m_flYaw; // 0xB90 - 0xCE8
   bool m_bEvenDistribution; // 0xCE8 - 0xCE9
   bool m_bXYVelocityOnly; // 0xCE9 - 0xCEA
   unsigned char pad_CEA[0x6]; // 0xCEA - 0xCF0
}; // size - 0xCF0


class C_INIT_RtEnvCull /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Vector m_vecTestDir; // 0x1C0 - 0x1CC
   Vector m_vecTestNormal; // 0x1CC - 0x1D8
   bool m_bUseVelocity; // 0x1D8 - 0x1D9
   bool m_bCullOnMiss; // 0x1D9 - 0x1DA
   bool m_bLifeAdjust; // 0x1DA - 0x1DB
   char m_RtEnvName[128]; // 0x1DB - 0x25B
   unsigned char pad_25B[0x1]; // 0x25B - 0x25C
   int32_t m_nRTEnvCP; // 0x25C - 0x260
   int32_t m_nComponent; // 0x260 - 0x264
   unsigned char pad_264[0x4]; // 0x264 - 0x268
}; // size - 0x268


class C_INIT_ScaleVelocity /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleCollectionVecInput m_vecScale; // 0x1C0 - 0x818
}; // size - 0x818


class C_INIT_SequenceFromCP /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   bool m_bKillUnused; // 0x1C0 - 0x1C1
   bool m_bRadiusScale; // 0x1C1 - 0x1C2
   unsigned char pad_1C2[0x2]; // 0x1C2 - 0x1C4
   int32_t m_nCP; // 0x1C4 - 0x1C8
   Vector m_vecOffset; // 0x1C8 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_INIT_SequenceLifeTime /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flFramerate; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_INIT_SetAttributeToScalarExpression /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ScalarExpressionType_t m_nExpression; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_flInput1; // 0x1C8 - 0x320
   CPerParticleFloatInput m_flInput2; // 0x320 - 0x478
   CParticleRemapFloatInput m_flOutputRemap; // 0x478 - 0x5D0
   ParticleAttributeIndex_t m_nOutputField; // 0x5D0 - 0x5D4
   ParticleSetMethod_t m_nSetMethod; // 0x5D4 - 0x5D8
   unsigned char pad_5D8[0x28]; // 0x5D8 - 0x600
}; // size - 0x600


class C_INIT_SetHitboxToClosest /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nDesiredHitbox; // 0x1C4 - 0x1C8
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x1C8 - 0x820
   char m_HitboxSetName[128]; // 0x820 - 0x8A0
   bool m_bUseBones; // 0x8A0 - 0x8A1
   bool m_bUseClosestPointOnHitbox; // 0x8A1 - 0x8A2
   unsigned char pad_8A2[0x2]; // 0x8A2 - 0x8A4
   ClosestPointTestType_t m_nTestType; // 0x8A4 - 0x8A8
   CParticleCollectionFloatInput m_flHybridRatio; // 0x8A8 - 0xA00
   bool m_bUpdatePosition; // 0xA00 - 0xA01
   unsigned char pad_A01[0x7]; // 0xA01 - 0xA08
}; // size - 0xA08


class C_INIT_SetHitboxToModel /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nForceInModel; // 0x1C4 - 0x1C8
   bool m_bEvenDistribution; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   int32_t m_nDesiredHitbox; // 0x1CC - 0x1D0
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x1D0 - 0x828
   Vector m_vecDirectionBias; // 0x828 - 0x834
   bool m_bMaintainHitbox; // 0x834 - 0x835
   bool m_bUseBones; // 0x835 - 0x836
   char m_HitboxSetName[128]; // 0x836 - 0x8B6
   unsigned char pad_8B6[0x2]; // 0x8B6 - 0x8B8
   CParticleCollectionFloatInput m_flShellSize; // 0x8B8 - 0xA10
}; // size - 0xA10


class C_INIT_SetRigidAttachment /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C8 - 0x1CC
   bool m_bLocalSpace; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
}; // size - 0x1D0


class C_INIT_SetVectorAttributeToVectorExpression /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   VectorExpressionType_t m_nExpression; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleVecInput m_vInput1; // 0x1C8 - 0x820
   CPerParticleVecInput m_vInput2; // 0x820 - 0xE78
   ParticleAttributeIndex_t m_nOutputField; // 0xE78 - 0xE7C
   ParticleSetMethod_t m_nSetMethod; // 0xE7C - 0xE80
   bool m_bNormalizedOutput; // 0xE80 - 0xE81
   unsigned char pad_E81[0x6F]; // 0xE81 - 0xEF0
}; // size - 0xEF0


class C_INIT_StatusEffect /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Detail2Combo_t m_nDetail2Combo; // 0x1C0 - 0x1C4
   float m_flDetail2Rotation; // 0x1C4 - 0x1C8
   float m_flDetail2Scale; // 0x1C8 - 0x1CC
   float m_flDetail2BlendFactor; // 0x1CC - 0x1D0
   float m_flColorWarpIntensity; // 0x1D0 - 0x1D4
   float m_flDiffuseWarpBlendToFull; // 0x1D4 - 0x1D8
   float m_flEnvMapIntensity; // 0x1D8 - 0x1DC
   float m_flAmbientScale; // 0x1DC - 0x1E0
   Color m_specularColor; // 0x1E0 - 0x1E4
   float m_flSpecularScale; // 0x1E4 - 0x1E8
   float m_flSpecularExponent; // 0x1E8 - 0x1EC
   float m_flSpecularExponentBlendToFull; // 0x1EC - 0x1F0
   float m_flSpecularBlendToFull; // 0x1F0 - 0x1F4
   Color m_rimLightColor; // 0x1F4 - 0x1F8
   float m_flRimLightScale; // 0x1F8 - 0x1FC
   float m_flReflectionsTintByBaseBlendToNone; // 0x1FC - 0x200
   float m_flMetalnessBlendToFull; // 0x200 - 0x204
   float m_flSelfIllumBlendToFull; // 0x204 - 0x208
   unsigned char pad_208[0x18]; // 0x208 - 0x220
}; // size - 0x220


class C_INIT_StatusEffectCitadel /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flSFXColorWarpAmount; // 0x1C0 - 0x1C4
   float m_flSFXNormalAmount; // 0x1C4 - 0x1C8
   float m_flSFXMetalnessAmount; // 0x1C8 - 0x1CC
   float m_flSFXRoughnessAmount; // 0x1CC - 0x1D0
   float m_flSFXSelfIllumAmount; // 0x1D0 - 0x1D4
   float m_flSFXSScale; // 0x1D4 - 0x1D8
   float m_flSFXSScrollX; // 0x1D8 - 0x1DC
   float m_flSFXSScrollY; // 0x1DC - 0x1E0
   float m_flSFXSScrollZ; // 0x1E0 - 0x1E4
   float m_flSFXSOffsetX; // 0x1E4 - 0x1E8
   float m_flSFXSOffsetY; // 0x1E8 - 0x1EC
   float m_flSFXSOffsetZ; // 0x1EC - 0x1F0
   DetailCombo_t m_nDetailCombo; // 0x1F0 - 0x1F4
   float m_flSFXSDetailAmount; // 0x1F4 - 0x1F8
   float m_flSFXSDetailScale; // 0x1F8 - 0x1FC
   float m_flSFXSDetailScrollX; // 0x1FC - 0x200
   float m_flSFXSDetailScrollY; // 0x200 - 0x204
   float m_flSFXSDetailScrollZ; // 0x204 - 0x208
   float m_flSFXSUseModelUVs; // 0x208 - 0x20C
   unsigned char pad_20C[0x4]; // 0x20C - 0x210
}; // size - 0x210


class C_INIT_VelocityFromCP /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleCollectionVecInput m_velocityInput; // 0x1C0 - 0x818
   CParticleTransformInput m_transformInput; // 0x818 - 0x880
   float m_flVelocityScale; // 0x880 - 0x884
   bool m_bDirectionOnly; // 0x884 - 0x885
   unsigned char pad_885[0x3]; // 0x885 - 0x888
}; // size - 0x888


class C_INIT_VelocityFromNormal /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_fSpeedMin; // 0x1C0 - 0x1C4
   float m_fSpeedMax; // 0x1C4 - 0x1C8
   bool m_bIgnoreDt; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x7]; // 0x1C9 - 0x1D0
}; // size - 0x1D0


class C_INIT_VelocityRadialRandom /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   float m_fSpeedMin; // 0x1C4 - 0x1C8
   float m_fSpeedMax; // 0x1C8 - 0x1CC
   Vector m_vecLocalCoordinateSystemSpeedScale; // 0x1CC - 0x1D8
   unsigned char pad_1D8[0x1]; // 0x1D8 - 0x1D9
   bool m_bIgnoreDelta; // 0x1D9 - 0x1DA
   unsigned char pad_1DA[0x6]; // 0x1DA - 0x1E0
}; // size - 0x1E0


class C_INIT_VelocityRandom /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_fSpeedMin; // 0x1C8 - 0x320
   CPerParticleFloatInput m_fSpeedMax; // 0x320 - 0x478
   CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x478 - 0xAD0
   CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xAD0 - 0x1128
   bool m_bIgnoreDT; // 0x1128 - 0x1129
   unsigned char pad_1129[0x3]; // 0x1129 - 0x112C
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0x112C - 0x1134
   unsigned char pad_1134[0x4]; // 0x1134 - 0x1138
}; // size - 0x1138


class C_IronSightController /* "client" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   bool m_bIronSightAvailable; // 0x10 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
   float m_flIronSightAmount; // 0x14 - 0x18
   float m_flIronSightAmountGained; // 0x18 - 0x1C
   float m_flIronSightAmountBiased; // 0x1C - 0x20
   float m_flIronSightAmount_Interpolated; // 0x20 - 0x24
   float m_flIronSightAmountGained_Interpolated; // 0x24 - 0x28
   float m_flIronSightAmountBiased_Interpolated; // 0x28 - 0x2C
   float m_flInterpolationLastUpdated; // 0x2C - 0x30
   QAngle m_angDeltaAverage[8]; // 0x30 - 0x90
   QAngle m_angViewLast; // 0x90 - 0x9C
   Vector2D m_vecDotCoords; // 0x9C - 0xA4
   float m_flDotBlur; // 0xA4 - 0xA8
   float m_flSpeedRatio; // 0xA8 - 0xAC
   unsigned char pad_AC[0x4]; // 0xAC - 0xB0
}; // size - 0xB0


class C_LightGlowOverlay /* "client" */ : public CGlowOverlay /* "client" */
{
public:
   Vector m_vecOrigin; // 0xD0 - 0xDC
   Vector m_vecDirection; // 0xDC - 0xE8
   int32_t m_nMinDist; // 0xE8 - 0xEC
   int32_t m_nMaxDist; // 0xEC - 0xF0
   int32_t m_nOuterMaxDist; // 0xF0 - 0xF4
   bool m_bOneSided; // 0xF4 - 0xF5
   bool m_bModulateByDot; // 0xF5 - 0xF6
   unsigned char pad_F6[0x2]; // 0xF6 - 0xF8
}; // size - 0xF8


class C_OP_AlphaDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flMinAlpha; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_AttractToControlPoint /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   Vector m_vecComponentScale; // 0x1C8 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
   CPerParticleFloatInput m_fForceAmount; // 0x1D8 - 0x330
   float m_fFalloffPower; // 0x330 - 0x334
   unsigned char pad_334[0x4]; // 0x334 - 0x338
   CParticleTransformInput m_TransformInput; // 0x338 - 0x3A0
   CPerParticleFloatInput m_fForceAmountMin; // 0x3A0 - 0x4F8
   bool m_bApplyMinForce; // 0x4F8 - 0x4F9
   unsigned char pad_4F9[0x7]; // 0x4F9 - 0x500
}; // size - 0x500


class C_OP_BasicMovement /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionVecInput m_Gravity; // 0x1B8 - 0x810
   CParticleCollectionFloatInput m_fDrag; // 0x810 - 0x968
   CParticleMassCalculationParameters m_massControls; // 0x968 - 0xD78
   int32_t m_nMaxConstraintPasses; // 0xD78 - 0xD7C
   bool m_bUseNewCode; // 0xD7C - 0xD7D
   unsigned char pad_D7D[0x3]; // 0xD7D - 0xD80
}; // size - 0xD80


class C_OP_BoxConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CParticleCollectionVecInput m_vecMin; // 0x1B8 - 0x810
   CParticleCollectionVecInput m_vecMax; // 0x810 - 0xE68
   int32_t m_nCP; // 0xE68 - 0xE6C
   bool m_bLocalSpace; // 0xE6C - 0xE6D
   bool m_bAccountForRadius; // 0xE6D - 0xE6E
   unsigned char pad_E6E[0x2]; // 0xE6E - 0xE70
}; // size - 0xE70


class C_OP_CPOffsetToPercentageBetweenCPs /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flInputMin; // 0x1B8 - 0x1BC
   float m_flInputMax; // 0x1BC - 0x1C0
   float m_flInputBias; // 0x1C0 - 0x1C4
   int32_t m_nStartCP; // 0x1C4 - 0x1C8
   int32_t m_nEndCP; // 0x1C8 - 0x1CC
   int32_t m_nOffsetCP; // 0x1CC - 0x1D0
   int32_t m_nOuputCP; // 0x1D0 - 0x1D4
   int32_t m_nInputCP; // 0x1D4 - 0x1D8
   bool m_bRadialCheck; // 0x1D8 - 0x1D9
   bool m_bScaleOffset; // 0x1D9 - 0x1DA
   unsigned char pad_1DA[0x2]; // 0x1DA - 0x1DC
   Vector m_vecOffset; // 0x1DC - 0x1E8
}; // size - 0x1E8


class C_OP_CPVelocityForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CPerParticleFloatInput m_flScale; // 0x1D0 - 0x328
}; // size - 0x328


class C_OP_CalculateVectorAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_vStartValue; // 0x1B8 - 0x1C4
   ParticleAttributeIndex_t m_nFieldInput1; // 0x1C4 - 0x1C8
   float m_flInputScale1; // 0x1C8 - 0x1CC
   ParticleAttributeIndex_t m_nFieldInput2; // 0x1CC - 0x1D0
   float m_flInputScale2; // 0x1D0 - 0x1D4
   ControlPointReference_t m_nControlPointInput1; // 0x1D4 - 0x1E8
   float m_flControlPointScale1; // 0x1E8 - 0x1EC
   ControlPointReference_t m_nControlPointInput2; // 0x1EC - 0x200
   float m_flControlPointScale2; // 0x200 - 0x204
   ParticleAttributeIndex_t m_nFieldOutput; // 0x204 - 0x208
   Vector m_vFinalOutputScale; // 0x208 - 0x214
   unsigned char pad_214[0x4]; // 0x214 - 0x218
}; // size - 0x218


class C_OP_Callback /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   unsigned char pad_0[0x208]; // 0x0 - 0x208
}; // size - 0x208


class C_OP_ChladniWave /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleFloatInput m_flInputMin; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flInputMax; // 0x318 - 0x470
   CPerParticleFloatInput m_flOutputMin; // 0x470 - 0x5C8
   CPerParticleFloatInput m_flOutputMax; // 0x5C8 - 0x720
   CPerParticleVecInput m_vecWaveLength; // 0x720 - 0xD78
   CPerParticleVecInput m_vecHarmonics; // 0xD78 - 0x13D0
   ParticleSetMethod_t m_nSetMethod; // 0x13D0 - 0x13D4
   int32_t m_nLocalSpaceControlPoint; // 0x13D4 - 0x13D8
   bool m_b3D; // 0x13D8 - 0x13D9
   unsigned char pad_13D9[0x7]; // 0x13D9 - 0x13E0
}; // size - 0x13E0


class C_OP_ChooseRandomChildrenInGroup /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flNumberOfChildren; // 0x1C8 - 0x320
}; // size - 0x320


class C_OP_ClampScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleFloatInput m_flOutputMin; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flOutputMax; // 0x318 - 0x470
}; // size - 0x470


class C_OP_ClampVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleVecInput m_vecOutputMin; // 0x1C0 - 0x818
   CPerParticleVecInput m_vecOutputMax; // 0x818 - 0xE70
}; // size - 0xE70


class C_OP_ClientPhysics /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CUtlString m_strPhysicsType; // 0x208 - 0x210
   bool m_bKillParticles; // 0x210 - 0x211
   bool m_bDeleteSim; // 0x211 - 0x212
   unsigned char pad_212[0x2]; // 0x212 - 0x214
   int32_t m_nControlPoint; // 0x214 - 0x218
   ParticleColorBlendType_t m_nColorBlendType; // 0x218 - 0x21C
   unsigned char pad_21C[0x4]; // 0x21C - 0x220
}; // size - 0x220


class C_OP_CollideWithParentParticles /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CPerParticleFloatInput m_flParentRadiusScale; // 0x1B8 - 0x310
   CPerParticleFloatInput m_flRadiusScale; // 0x310 - 0x468
}; // size - 0x468


class C_OP_CollideWithSelf /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CPerParticleFloatInput m_flRadiusScale; // 0x1B8 - 0x310
   CPerParticleFloatInput m_flMinimumSpeed; // 0x310 - 0x468
}; // size - 0x468


class C_OP_ColorAdjustHSL /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_flHueAdjust; // 0x1B8 - 0x310
   CPerParticleFloatInput m_flSaturationAdjust; // 0x310 - 0x468
   CPerParticleFloatInput m_flLightnessAdjust; // 0x468 - 0x5C0
}; // size - 0x5C0


class C_OP_ColorInterpolate /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Color m_ColorFade; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0xC]; // 0x1BC - 0x1C8
   float m_flFadeStartTime; // 0x1C8 - 0x1CC
   float m_flFadeEndTime; // 0x1CC - 0x1D0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1D0 - 0x1D4
   bool m_bEaseInOut; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0x3]; // 0x1D5 - 0x1D8
}; // size - 0x1D8


class C_OP_ColorInterpolateRandom /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Color m_ColorFadeMin; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x18]; // 0x1BC - 0x1D4
   Color m_ColorFadeMax; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0xC]; // 0x1D8 - 0x1E4
   float m_flFadeStartTime; // 0x1E4 - 0x1E8
   float m_flFadeEndTime; // 0x1E8 - 0x1EC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1EC - 0x1F0
   bool m_bEaseInOut; // 0x1F0 - 0x1F1
   unsigned char pad_1F1[0x7]; // 0x1F1 - 0x1F8
}; // size - 0x1F8


class C_OP_ConnectParentParticleToNearest /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nFirstControlPoint; // 0x1B8 - 0x1BC
   int32_t m_nSecondControlPoint; // 0x1BC - 0x1C0
   bool m_bUseRadius; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0x7]; // 0x1C1 - 0x1C8
   CParticleCollectionFloatInput m_flRadiusScale; // 0x1C8 - 0x320
   CParticleCollectionFloatInput m_flParentRadiusScale; // 0x320 - 0x478
}; // size - 0x478


class C_OP_ConstrainDistance /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CParticleCollectionFloatInput m_fMinDistance; // 0x1B8 - 0x310
   CParticleCollectionFloatInput m_fMaxDistance; // 0x310 - 0x468
   int32_t m_nControlPointNumber; // 0x468 - 0x46C
   Vector m_CenterOffset; // 0x46C - 0x478
   bool m_bGlobalCenter; // 0x478 - 0x479
   unsigned char pad_479[0x7]; // 0x479 - 0x480
}; // size - 0x480


class C_OP_ConstrainDistanceToPath /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   float m_fMinDistance; // 0x1B8 - 0x1BC
   float m_flMaxDistance0; // 0x1BC - 0x1C0
   float m_flMaxDistanceMid; // 0x1C0 - 0x1C4
   float m_flMaxDistance1; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
   CPathParameters m_PathParameters; // 0x1D0 - 0x210
   float m_flTravelTime; // 0x210 - 0x214
   ParticleAttributeIndex_t m_nFieldScale; // 0x214 - 0x218
   ParticleAttributeIndex_t m_nManualTField; // 0x218 - 0x21C
   unsigned char pad_21C[0x4]; // 0x21C - 0x220
}; // size - 0x220


class C_OP_ConstrainDistanceToUserSpecifiedPath /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   float m_fMinDistance; // 0x1B8 - 0x1BC
   float m_flMaxDistance; // 0x1BC - 0x1C0
   float m_flTimeScale; // 0x1C0 - 0x1C4
   bool m_bLoopedPath; // 0x1C4 - 0x1C5
   unsigned char pad_1C5[0x3]; // 0x1C5 - 0x1C8
   CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x1C8 - 0x1E0
}; // size - 0x1E0


class C_OP_ConstrainLineLength /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   float m_flMinDistance; // 0x1B8 - 0x1BC
   float m_flMaxDistance; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_ContinuousEmitter /* "particles" */ : public CParticleFunctionEmitter /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flEmissionDuration; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_flStartTime; // 0x318 - 0x470
   CParticleCollectionFloatInput m_flEmitRate; // 0x470 - 0x5C8
   float m_flEmissionScale; // 0x5C8 - 0x5CC
   float m_flScalePerParentParticle; // 0x5CC - 0x5D0
   bool m_bInitFromKilledParentParticles; // 0x5D0 - 0x5D1
   unsigned char pad_5D1[0x3]; // 0x5D1 - 0x5D4
   EventTypeSelection_t m_nEventType; // 0x5D4 - 0x5D8
   int32_t m_nSnapshotControlPoint; // 0x5D8 - 0x5DC
   int32_t m_nLimitPerUpdate; // 0x5DC - 0x5E0
   bool m_bForceEmitOnFirstUpdate; // 0x5E0 - 0x5E1
   bool m_bForceEmitOnLastUpdate; // 0x5E1 - 0x5E2
   unsigned char pad_5E2[0x6]; // 0x5E2 - 0x5E8
}; // size - 0x5E8


class C_OP_ControlPointToRadialScreenSpace /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPIn; // 0x1C0 - 0x1C4
   Vector m_vecCP1Pos; // 0x1C4 - 0x1D0
   int32_t m_nCPOut; // 0x1D0 - 0x1D4
   int32_t m_nCPOutField; // 0x1D4 - 0x1D8
   int32_t m_nCPSSPosOut; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_ControlpointLight /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flScale; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x484]; // 0x1BC - 0x640
   int32_t m_nControlPoint1; // 0x640 - 0x644
   int32_t m_nControlPoint2; // 0x644 - 0x648
   int32_t m_nControlPoint3; // 0x648 - 0x64C
   int32_t m_nControlPoint4; // 0x64C - 0x650
   Vector m_vecCPOffset1; // 0x650 - 0x65C
   Vector m_vecCPOffset2; // 0x65C - 0x668
   Vector m_vecCPOffset3; // 0x668 - 0x674
   Vector m_vecCPOffset4; // 0x674 - 0x680
   float m_LightFiftyDist1; // 0x680 - 0x684
   float m_LightZeroDist1; // 0x684 - 0x688
   float m_LightFiftyDist2; // 0x688 - 0x68C
   float m_LightZeroDist2; // 0x68C - 0x690
   float m_LightFiftyDist3; // 0x690 - 0x694
   float m_LightZeroDist3; // 0x694 - 0x698
   float m_LightFiftyDist4; // 0x698 - 0x69C
   float m_LightZeroDist4; // 0x69C - 0x6A0
   Color m_LightColor1; // 0x6A0 - 0x6A4
   Color m_LightColor2; // 0x6A4 - 0x6A8
   Color m_LightColor3; // 0x6A8 - 0x6AC
   Color m_LightColor4; // 0x6AC - 0x6B0
   bool m_bLightType1; // 0x6B0 - 0x6B1
   bool m_bLightType2; // 0x6B1 - 0x6B2
   bool m_bLightType3; // 0x6B2 - 0x6B3
   bool m_bLightType4; // 0x6B3 - 0x6B4
   bool m_bLightDynamic1; // 0x6B4 - 0x6B5
   bool m_bLightDynamic2; // 0x6B5 - 0x6B6
   bool m_bLightDynamic3; // 0x6B6 - 0x6B7
   bool m_bLightDynamic4; // 0x6B7 - 0x6B8
   bool m_bUseNormal; // 0x6B8 - 0x6B9
   bool m_bUseHLambert; // 0x6B9 - 0x6BA
   unsigned char pad_6BA[0x4]; // 0x6BA - 0x6BE
   bool m_bClampLowerRange; // 0x6BE - 0x6BF
   bool m_bClampUpperRange; // 0x6BF - 0x6C0
}; // size - 0x6C0


class C_OP_Cull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flCullPerc; // 0x1B8 - 0x1BC
   float m_flCullStart; // 0x1BC - 0x1C0
   float m_flCullEnd; // 0x1C0 - 0x1C4
   float m_flCullExp; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_CurlNoiseForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   ParticleDirectionNoiseType_t m_nNoiseType; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CPerParticleVecInput m_vecNoiseFreq; // 0x1D0 - 0x828
   CPerParticleVecInput m_vecNoiseScale; // 0x828 - 0xE80
   CPerParticleVecInput m_vecOffset; // 0xE80 - 0x14D8
   CPerParticleVecInput m_vecOffsetRate; // 0x14D8 - 0x1B30
   CPerParticleFloatInput m_flWorleySeed; // 0x1B30 - 0x1C88
   CPerParticleFloatInput m_flWorleyJitter; // 0x1C88 - 0x1DE0
}; // size - 0x1DE0


class C_OP_CycleScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nDestField; // 0x1B8 - 0x1BC
   float m_flStartValue; // 0x1BC - 0x1C0
   float m_flEndValue; // 0x1C0 - 0x1C4
   float m_flCycleTime; // 0x1C4 - 0x1C8
   bool m_bDoNotRepeatCycle; // 0x1C8 - 0x1C9
   bool m_bSynchronizeParticles; // 0x1C9 - 0x1CA
   unsigned char pad_1CA[0x2]; // 0x1CA - 0x1CC
   int32_t m_nCPScale; // 0x1CC - 0x1D0
   int32_t m_nCPFieldMin; // 0x1D0 - 0x1D4
   int32_t m_nCPFieldMax; // 0x1D4 - 0x1D8
   ParticleSetMethod_t m_nSetMethod; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_CylindricalDistanceToTransform /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleFloatInput m_flInputMin; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flInputMax; // 0x318 - 0x470
   CPerParticleFloatInput m_flOutputMin; // 0x470 - 0x5C8
   CPerParticleFloatInput m_flOutputMax; // 0x5C8 - 0x720
   CParticleTransformInput m_TransformStart; // 0x720 - 0x788
   CParticleTransformInput m_TransformEnd; // 0x788 - 0x7F0
   ParticleSetMethod_t m_nSetMethod; // 0x7F0 - 0x7F4
   bool m_bActiveRange; // 0x7F4 - 0x7F5
   bool m_bAdditive; // 0x7F5 - 0x7F6
   bool m_bCapsule; // 0x7F6 - 0x7F7
   unsigned char pad_7F7[0x1]; // 0x7F7 - 0x7F8
}; // size - 0x7F8


class C_OP_DampenToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   float m_flRange; // 0x1BC - 0x1C0
   float m_flScale; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_Decay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bRopeDecay; // 0x1B8 - 0x1B9
   bool m_bForcePreserveParticleOrder; // 0x1B9 - 0x1BA
   unsigned char pad_1BA[0x6]; // 0x1BA - 0x1C0
}; // size - 0x1C0


class C_OP_DecayClampCount /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_nCount; // 0x1B8 - 0x310
}; // size - 0x310


class C_OP_DecayMaintainCount /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nParticlesToMaintain; // 0x1B8 - 0x1BC
   float m_flDecayDelay; // 0x1BC - 0x1C0
   int32_t m_nSnapshotControlPoint; // 0x1C0 - 0x1C4
   bool m_bLifespanDecay; // 0x1C4 - 0x1C5
   unsigned char pad_1C5[0x3]; // 0x1C5 - 0x1C8
   CParticleCollectionFloatInput m_flScale; // 0x1C8 - 0x320
   bool m_bKillNewest; // 0x320 - 0x321
   unsigned char pad_321[0x7]; // 0x321 - 0x328
}; // size - 0x328


class C_OP_DecayOffscreen /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flOffscreenTime; // 0x1B8 - 0x310
}; // size - 0x310


class C_OP_DensityForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flRadiusScale; // 0x1C8 - 0x1CC
   float m_flForceScale; // 0x1CC - 0x1D0
   float m_flTargetDensity; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_DifferencePreviousParticle /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   float m_flInputMin; // 0x1C0 - 0x1C4
   float m_flInputMax; // 0x1C4 - 0x1C8
   float m_flOutputMin; // 0x1C8 - 0x1CC
   float m_flOutputMax; // 0x1CC - 0x1D0
   ParticleSetMethod_t m_nSetMethod; // 0x1D0 - 0x1D4
   bool m_bActiveRange; // 0x1D4 - 0x1D5
   bool m_bSetPreviousParticle; // 0x1D5 - 0x1D6
   unsigned char pad_1D6[0x2]; // 0x1D6 - 0x1D8
}; // size - 0x1D8


class C_OP_Diffusion /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRadiusScale; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   int32_t m_nVoxelGridResolution; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_DirectionBetweenVecsToVec /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleVecInput m_vecPoint1; // 0x1C0 - 0x818
   CPerParticleVecInput m_vecPoint2; // 0x818 - 0xE70
}; // size - 0xE70


class C_OP_DistanceBetweenCPsToCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nStartCP; // 0x1C0 - 0x1C4
   int32_t m_nEndCP; // 0x1C4 - 0x1C8
   int32_t m_nOutputCP; // 0x1C8 - 0x1CC
   int32_t m_nOutputCPField; // 0x1CC - 0x1D0
   bool m_bSetOnce; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x3]; // 0x1D1 - 0x1D4
   float m_flInputMin; // 0x1D4 - 0x1D8
   float m_flInputMax; // 0x1D8 - 0x1DC
   float m_flOutputMin; // 0x1DC - 0x1E0
   float m_flOutputMax; // 0x1E0 - 0x1E4
   float m_flMaxTraceLength; // 0x1E4 - 0x1E8
   float m_flLOSScale; // 0x1E8 - 0x1EC
   bool m_bLOS; // 0x1EC - 0x1ED
   char m_CollisionGroupName[128]; // 0x1ED - 0x26D
   unsigned char pad_26D[0x3]; // 0x26D - 0x270
   ParticleTraceSet_t m_nTraceSet; // 0x270 - 0x274
   ParticleParentSetMode_t m_nSetParent; // 0x274 - 0x278
}; // size - 0x278


class C_OP_DistanceBetweenTransforms /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CParticleTransformInput m_TransformStart; // 0x1C0 - 0x228
   CParticleTransformInput m_TransformEnd; // 0x228 - 0x290
   CPerParticleFloatInput m_flInputMin; // 0x290 - 0x3E8
   CPerParticleFloatInput m_flInputMax; // 0x3E8 - 0x540
   CPerParticleFloatInput m_flOutputMin; // 0x540 - 0x698
   CPerParticleFloatInput m_flOutputMax; // 0x698 - 0x7F0
   float m_flMaxTraceLength; // 0x7F0 - 0x7F4
   float m_flLOSScale; // 0x7F4 - 0x7F8
   char m_CollisionGroupName[128]; // 0x7F8 - 0x878
   ParticleTraceSet_t m_nTraceSet; // 0x878 - 0x87C
   bool m_bLOS; // 0x87C - 0x87D
   unsigned char pad_87D[0x3]; // 0x87D - 0x880
   ParticleSetMethod_t m_nSetMethod; // 0x880 - 0x884
   unsigned char pad_884[0x4]; // 0x884 - 0x888
}; // size - 0x888


class C_OP_DistanceBetweenVecs /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleVecInput m_vecPoint1; // 0x1C0 - 0x818
   CPerParticleVecInput m_vecPoint2; // 0x818 - 0xE70
   CPerParticleFloatInput m_flInputMin; // 0xE70 - 0xFC8
   CPerParticleFloatInput m_flInputMax; // 0xFC8 - 0x1120
   CPerParticleFloatInput m_flOutputMin; // 0x1120 - 0x1278
   CPerParticleFloatInput m_flOutputMax; // 0x1278 - 0x13D0
   ParticleSetMethod_t m_nSetMethod; // 0x13D0 - 0x13D4
   bool m_bDeltaTime; // 0x13D4 - 0x13D5
   unsigned char pad_13D5[0x3]; // 0x13D5 - 0x13D8
}; // size - 0x13D8


class C_OP_DistanceCull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPoint; // 0x1B8 - 0x1BC
   Vector m_vecPointOffset; // 0x1BC - 0x1C8
   float m_flDistance; // 0x1C8 - 0x1CC
   bool m_bCullInside; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
}; // size - 0x1D0


class C_OP_DistanceToTransform /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleFloatInput m_flInputMin; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flInputMax; // 0x318 - 0x470
   CPerParticleFloatInput m_flOutputMin; // 0x470 - 0x5C8
   CPerParticleFloatInput m_flOutputMax; // 0x5C8 - 0x720
   CParticleTransformInput m_TransformStart; // 0x720 - 0x788
   bool m_bLOS; // 0x788 - 0x789
   char m_CollisionGroupName[128]; // 0x789 - 0x809
   unsigned char pad_809[0x3]; // 0x809 - 0x80C
   ParticleTraceSet_t m_nTraceSet; // 0x80C - 0x810
   float m_flMaxTraceLength; // 0x810 - 0x814
   float m_flLOSScale; // 0x814 - 0x818
   ParticleSetMethod_t m_nSetMethod; // 0x818 - 0x81C
   bool m_bActiveRange; // 0x81C - 0x81D
   bool m_bAdditive; // 0x81D - 0x81E
   unsigned char pad_81E[0x2]; // 0x81E - 0x820
   CPerParticleVecInput m_vecComponentScale; // 0x820 - 0xE78
}; // size - 0xE78


class C_OP_DragRelativeToPlane /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flDragAtPlane; // 0x1B8 - 0x310
   CParticleCollectionFloatInput m_flFalloff; // 0x310 - 0x468
   bool m_bDirectional; // 0x468 - 0x469
   unsigned char pad_469[0x7]; // 0x469 - 0x470
   CParticleCollectionVecInput m_vecPlaneNormal; // 0x470 - 0xAC8
   int32_t m_nControlPointNumber; // 0xAC8 - 0xACC
   unsigned char pad_ACC[0x4]; // 0xACC - 0xAD0
}; // size - 0xAD0


class C_OP_DriveCPFromGlobalSoundFloat /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nOutputControlPoint; // 0x1C0 - 0x1C4
   int32_t m_nOutputField; // 0x1C4 - 0x1C8
   float m_flInputMin; // 0x1C8 - 0x1CC
   float m_flInputMax; // 0x1CC - 0x1D0
   float m_flOutputMin; // 0x1D0 - 0x1D4
   float m_flOutputMax; // 0x1D4 - 0x1D8
   CUtlString m_StackName; // 0x1D8 - 0x1E0
   CUtlString m_OperatorName; // 0x1E0 - 0x1E8
   CUtlString m_FieldName; // 0x1E8 - 0x1F0
   unsigned char pad_1F0[0x8]; // 0x1F0 - 0x1F8
}; // size - 0x1F8


class C_OP_EnableChildrenFromParentParticleCount /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1C0 - 0x1C4
   int32_t m_nFirstChild; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x1C8 - 0x320
   bool m_bDisableChildren; // 0x320 - 0x321
   bool m_bPlayEndcapOnStop; // 0x321 - 0x322
   bool m_bDestroyImmediately; // 0x322 - 0x323
   unsigned char pad_323[0x5]; // 0x323 - 0x328
}; // size - 0x328


class C_OP_EndCapDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   unsigned char pad_0[0x1B8]; // 0x0 - 0x1B8
}; // size - 0x1B8


class C_OP_EndCapTimedDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flDecayTime; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_EndCapTimedFreeze /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flFreezeTime; // 0x1B8 - 0x310
}; // size - 0x310


class C_OP_ExternalGameImpulseForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   CPerParticleFloatInput m_flForceScale; // 0x1C8 - 0x320
   bool m_bRopes; // 0x320 - 0x321
   bool m_bRopesZOnly; // 0x321 - 0x322
   bool m_bExplosions; // 0x322 - 0x323
   bool m_bParticles; // 0x323 - 0x324
   unsigned char pad_324[0x4]; // 0x324 - 0x328
}; // size - 0x328


class C_OP_ExternalWindForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   CPerParticleVecInput m_vecSamplePosition; // 0x1C8 - 0x820
   CPerParticleVecInput m_vecScale; // 0x820 - 0xE78
   bool m_bSampleWind; // 0xE78 - 0xE79
   bool m_bSampleWater; // 0xE79 - 0xE7A
   bool m_bDampenNearWaterPlane; // 0xE7A - 0xE7B
   bool m_bSampleGravity; // 0xE7B - 0xE7C
   unsigned char pad_E7C[0x4]; // 0xE7C - 0xE80
   CPerParticleVecInput m_vecGravityForce; // 0xE80 - 0x14D8
   bool m_bUseBasicMovementGravity; // 0x14D8 - 0x14D9
   unsigned char pad_14D9[0x7]; // 0x14D9 - 0x14E0
   CPerParticleFloatInput m_flLocalGravityScale; // 0x14E0 - 0x1638
   CPerParticleFloatInput m_flLocalBuoyancyScale; // 0x1638 - 0x1790
   CPerParticleVecInput m_vecBuoyancyForce; // 0x1790 - 0x1DE8
}; // size - 0x1DE8


class C_OP_FadeAndKill /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flStartFadeInTime; // 0x1B8 - 0x1BC
   float m_flEndFadeInTime; // 0x1BC - 0x1C0
   float m_flStartFadeOutTime; // 0x1C0 - 0x1C4
   float m_flEndFadeOutTime; // 0x1C4 - 0x1C8
   float m_flStartAlpha; // 0x1C8 - 0x1CC
   float m_flEndAlpha; // 0x1CC - 0x1D0
   bool m_bForcePreserveParticleOrder; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x7]; // 0x1D1 - 0x1D8
}; // size - 0x1D8


class C_OP_FadeAndKillForTracers /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flStartFadeInTime; // 0x1B8 - 0x1BC
   float m_flEndFadeInTime; // 0x1BC - 0x1C0
   float m_flStartFadeOutTime; // 0x1C0 - 0x1C4
   float m_flEndFadeOutTime; // 0x1C4 - 0x1C8
   float m_flStartAlpha; // 0x1C8 - 0x1CC
   float m_flEndAlpha; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_FadeIn /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flFadeInTimeMin; // 0x1B8 - 0x1BC
   float m_flFadeInTimeMax; // 0x1BC - 0x1C0
   float m_flFadeInTimeExp; // 0x1C0 - 0x1C4
   bool m_bProportional; // 0x1C4 - 0x1C5
   unsigned char pad_1C5[0x3]; // 0x1C5 - 0x1C8
}; // size - 0x1C8


class C_OP_FadeInSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flFadeInTime; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_FadeOut /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flFadeOutTimeMin; // 0x1B8 - 0x1BC
   float m_flFadeOutTimeMax; // 0x1BC - 0x1C0
   float m_flFadeOutTimeExp; // 0x1C0 - 0x1C4
   float m_flFadeBias; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x38]; // 0x1C8 - 0x200
   bool m_bProportional; // 0x200 - 0x201
   bool m_bEaseInAndOut; // 0x201 - 0x202
   unsigned char pad_202[0xE]; // 0x202 - 0x210
}; // size - 0x210


class C_OP_FadeOutSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flFadeOutTime; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_ForceBasedOnDistanceToPlane /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flMinDist; // 0x1C8 - 0x1CC
   Vector m_vecForceAtMinDist; // 0x1CC - 0x1D8
   float m_flMaxDist; // 0x1D8 - 0x1DC
   Vector m_vecForceAtMaxDist; // 0x1DC - 0x1E8
   Vector m_vecPlaneNormal; // 0x1E8 - 0x1F4
   int32_t m_nControlPointNumber; // 0x1F4 - 0x1F8
   float m_flExponent; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x4]; // 0x1FC - 0x200
}; // size - 0x200


class C_OP_ForceControlPointStub /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_ControlPoint; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_GlobalLight /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flScale; // 0x1B8 - 0x1BC
   bool m_bClampLowerRange; // 0x1BC - 0x1BD
   bool m_bClampUpperRange; // 0x1BD - 0x1BE
   unsigned char pad_1BE[0x2]; // 0x1BE - 0x1C0
}; // size - 0x1C0


class C_OP_HSVShiftToCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nColorCP; // 0x1C0 - 0x1C4
   int32_t m_nColorGemEnableCP; // 0x1C4 - 0x1C8
   int32_t m_nOutputCP; // 0x1C8 - 0x1CC
   Color m_DefaultHSVColor; // 0x1CC - 0x1D0
   unsigned char pad_1D0[0x10]; // 0x1D0 - 0x1E0
}; // size - 0x1E0


class C_OP_InheritFromParentParticles /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flScale; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   int32_t m_nIncrement; // 0x1C0 - 0x1C4
   bool m_bRandomDistribution; // 0x1C4 - 0x1C5
   unsigned char pad_1C5[0x3]; // 0x1C5 - 0x1C8
}; // size - 0x1C8


class C_OP_InheritFromParentParticlesV2 /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flScale; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   int32_t m_nIncrement; // 0x1C0 - 0x1C4
   bool m_bRandomDistribution; // 0x1C4 - 0x1C5
   unsigned char pad_1C5[0x3]; // 0x1C5 - 0x1C8
   MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_InheritFromPeerSystem /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldInput; // 0x1BC - 0x1C0
   int32_t m_nIncrement; // 0x1C0 - 0x1C4
   int32_t m_nGroupID; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_InstantaneousEmitter /* "particles" */ : public CParticleFunctionEmitter /* "particles" */
{
public:
   CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_flStartTime; // 0x318 - 0x470
   float m_flInitFromKilledParentParticles; // 0x470 - 0x474
   EventTypeSelection_t m_nEventType; // 0x474 - 0x478
   CParticleCollectionFloatInput m_flParentParticleScale; // 0x478 - 0x5D0
   int32_t m_nMaxEmittedPerFrame; // 0x5D0 - 0x5D4
   int32_t m_nSnapshotControlPoint; // 0x5D4 - 0x5D8
}; // size - 0x5D8


class C_OP_InterpolateRadius /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flStartTime; // 0x1B8 - 0x1BC
   float m_flEndTime; // 0x1BC - 0x1C0
   float m_flStartScale; // 0x1C0 - 0x1C4
   float m_flEndScale; // 0x1C4 - 0x1C8
   bool m_bEaseInAndOut; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   float m_flBias; // 0x1CC - 0x1D0
   unsigned char pad_1D0[0x30]; // 0x1D0 - 0x200
}; // size - 0x200


class C_OP_IntraParticleForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flAttractionMinDistance; // 0x1C8 - 0x1CC
   float m_flAttractionMaxDistance; // 0x1CC - 0x1D0
   float m_flAttractionMaxStrength; // 0x1D0 - 0x1D4
   float m_flRepulsionMinDistance; // 0x1D4 - 0x1D8
   float m_flRepulsionMaxDistance; // 0x1D8 - 0x1DC
   float m_flRepulsionMaxStrength; // 0x1DC - 0x1E0
   bool m_bUseAABB; // 0x1E0 - 0x1E1
   bool m_bThreadIt; // 0x1E1 - 0x1E2
   unsigned char pad_1E2[0x6]; // 0x1E2 - 0x1E8
}; // size - 0x1E8


class C_OP_LagCompensation /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nDesiredVelocityCP; // 0x1B8 - 0x1BC
   int32_t m_nLatencyCP; // 0x1BC - 0x1C0
   int32_t m_nLatencyCPField; // 0x1C0 - 0x1C4
   int32_t m_nDesiredVelocityCPField; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_LerpEndCapScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flOutput; // 0x1BC - 0x1C0
   float m_flLerpTime; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_LerpEndCapVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   Vector m_vecOutput; // 0x1BC - 0x1C8
   float m_flLerpTime; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_LerpScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleFloatInput m_flOutput; // 0x1C0 - 0x318
   float m_flStartTime; // 0x318 - 0x31C
   float m_flEndTime; // 0x31C - 0x320
}; // size - 0x320


class C_OP_LerpToInitialPosition /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleFloatInput m_flInterpolation; // 0x1C0 - 0x318
   ParticleAttributeIndex_t m_nCacheField; // 0x318 - 0x31C
   unsigned char pad_31C[0x4]; // 0x31C - 0x320
   CParticleCollectionFloatInput m_flScale; // 0x320 - 0x478
   CParticleCollectionVecInput m_vecScale; // 0x478 - 0xAD0
}; // size - 0xAD0


class C_OP_LerpToOtherAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_flInterpolation; // 0x1B8 - 0x310
   ParticleAttributeIndex_t m_nFieldInputFrom; // 0x310 - 0x314
   ParticleAttributeIndex_t m_nFieldInput; // 0x314 - 0x318
   ParticleAttributeIndex_t m_nFieldOutput; // 0x318 - 0x31C
   unsigned char pad_31C[0x24]; // 0x31C - 0x340
}; // size - 0x340


class C_OP_LerpVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   Vector m_vecOutput; // 0x1BC - 0x1C8
   float m_flStartTime; // 0x1C8 - 0x1CC
   float m_flEndTime; // 0x1CC - 0x1D0
   ParticleSetMethod_t m_nSetMethod; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_LightningSnapshotGenerator /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPSnapshot; // 0x1C0 - 0x1C4
   int32_t m_nCPStartPnt; // 0x1C4 - 0x1C8
   int32_t m_nCPEndPnt; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CParticleCollectionFloatInput m_flSegments; // 0x1D0 - 0x328
   CParticleCollectionFloatInput m_flOffset; // 0x328 - 0x480
   CParticleCollectionFloatInput m_flOffsetDecay; // 0x480 - 0x5D8
   CParticleCollectionFloatInput m_flRecalcRate; // 0x5D8 - 0x730
   CParticleCollectionFloatInput m_flUVScale; // 0x730 - 0x888
   CParticleCollectionFloatInput m_flUVOffset; // 0x888 - 0x9E0
   CParticleCollectionFloatInput m_flSplitRate; // 0x9E0 - 0xB38
   CParticleCollectionFloatInput m_flBranchTwist; // 0xB38 - 0xC90
   ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xC90 - 0xC94
   unsigned char pad_C94[0x4]; // 0xC94 - 0xC98
   CParticleCollectionFloatInput m_flRadiusStart; // 0xC98 - 0xDF0
   CParticleCollectionFloatInput m_flRadiusEnd; // 0xDF0 - 0xF48
   CParticleCollectionFloatInput m_flDedicatedPool; // 0xF48 - 0x10A0
}; // size - 0x10A0


class C_OP_LocalAccelerationForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   int32_t m_nCP; // 0x1C8 - 0x1CC
   int32_t m_nScaleCP; // 0x1CC - 0x1D0
   CParticleCollectionVecInput m_vecAccel; // 0x1D0 - 0x828
}; // size - 0x828


class C_OP_LockPoints /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nMinCol; // 0x1B8 - 0x1BC
   int32_t m_nMaxCol; // 0x1BC - 0x1C0
   int32_t m_nMinRow; // 0x1C0 - 0x1C4
   int32_t m_nMaxRow; // 0x1C4 - 0x1C8
   int32_t m_nControlPoint; // 0x1C8 - 0x1CC
   float m_flBlendValue; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_LockToBone /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleModelInput m_modelInput; // 0x1B8 - 0x218
   CParticleTransformInput m_transformInput; // 0x218 - 0x280
   float m_flLifeTimeFadeStart; // 0x280 - 0x284
   float m_flLifeTimeFadeEnd; // 0x284 - 0x288
   float m_flJumpThreshold; // 0x288 - 0x28C
   float m_flPrevPosScale; // 0x28C - 0x290
   char m_HitboxSetName[128]; // 0x290 - 0x310
   bool m_bRigid; // 0x310 - 0x311
   bool m_bUseBones; // 0x311 - 0x312
   unsigned char pad_312[0x2]; // 0x312 - 0x314
   ParticleAttributeIndex_t m_nFieldOutput; // 0x314 - 0x318
   ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x318 - 0x31C
   ParticleRotationLockType_t m_nRotationSetType; // 0x31C - 0x320
   bool m_bRigidRotationLock; // 0x320 - 0x321
   unsigned char pad_321[0x7]; // 0x321 - 0x328
   CPerParticleVecInput m_vecRotation; // 0x328 - 0x980
   CPerParticleFloatInput m_flRotLerp; // 0x980 - 0xAD8
}; // size - 0xAD8


class C_OP_LockToPointList /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CUtlVector< PointDefinition_t > m_pointList; // 0x1C0 - 0x1D8
   bool m_bPlaceAlongPath; // 0x1D8 - 0x1D9
   bool m_bClosedLoop; // 0x1D9 - 0x1DA
   unsigned char pad_1DA[0x2]; // 0x1DA - 0x1DC
   int32_t m_nNumPointsAlongPath; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_LockToSavedSequentialPath /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   unsigned char pad_1B8[0x4]; // 0x1B8 - 0x1BC
   float m_flFadeStart; // 0x1BC - 0x1C0
   float m_flFadeEnd; // 0x1C0 - 0x1C4
   bool m_bCPPairs; // 0x1C4 - 0x1C5
   unsigned char pad_1C5[0xB]; // 0x1C5 - 0x1D0
   CPathParameters m_PathParams; // 0x1D0 - 0x210
}; // size - 0x210


class C_OP_LockToSavedSequentialPathV2 /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flFadeStart; // 0x1B8 - 0x1BC
   float m_flFadeEnd; // 0x1BC - 0x1C0
   bool m_bCPPairs; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0xF]; // 0x1C1 - 0x1D0
   CPathParameters m_PathParams; // 0x1D0 - 0x210
}; // size - 0x210


class C_OP_MaintainEmitter /* "particles" */ : public CParticleFunctionEmitter /* "particles" */
{
public:
   CParticleCollectionFloatInput m_nParticlesToMaintain; // 0x1C0 - 0x318
   float m_flStartTime; // 0x318 - 0x31C
   unsigned char pad_31C[0x4]; // 0x31C - 0x320
   CParticleCollectionFloatInput m_flEmissionDuration; // 0x320 - 0x478
   float m_flEmissionRate; // 0x478 - 0x47C
   int32_t m_nSnapshotControlPoint; // 0x47C - 0x480
   bool m_bEmitInstantaneously; // 0x480 - 0x481
   bool m_bFinalEmitOnStop; // 0x481 - 0x482
   unsigned char pad_482[0x6]; // 0x482 - 0x488
   CParticleCollectionFloatInput m_flScale; // 0x488 - 0x5E0
}; // size - 0x5E0


class C_OP_MaintainSequentialPath /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_fMaxDistance; // 0x1B8 - 0x1BC
   float m_flNumToAssign; // 0x1BC - 0x1C0
   float m_flCohesionStrength; // 0x1C0 - 0x1C4
   float m_flTolerance; // 0x1C4 - 0x1C8
   bool m_bLoop; // 0x1C8 - 0x1C9
   bool m_bUseParticleCount; // 0x1C9 - 0x1CA
   unsigned char pad_1CA[0x6]; // 0x1CA - 0x1D0
   CPathParameters m_PathParams; // 0x1D0 - 0x210
}; // size - 0x210


class C_OP_MaxVelocity /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flMaxVelocity; // 0x1B8 - 0x1BC
   float m_flMinVelocity; // 0x1BC - 0x1C0
   int32_t m_nOverrideCP; // 0x1C0 - 0x1C4
   int32_t m_nOverrideCPField; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_ModelCull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   bool m_bBoundBox; // 0x1BC - 0x1BD
   bool m_bCullOutside; // 0x1BD - 0x1BE
   bool m_bUseBones; // 0x1BE - 0x1BF
   char m_HitboxSetName[128]; // 0x1BF - 0x23F
   unsigned char pad_23F[0x1]; // 0x23F - 0x240
}; // size - 0x240


class C_OP_ModelDampenMovement /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   bool m_bBoundBox; // 0x1BC - 0x1BD
   bool m_bOutside; // 0x1BD - 0x1BE
   bool m_bUseBones; // 0x1BE - 0x1BF
   char m_HitboxSetName[128]; // 0x1BF - 0x23F
   unsigned char pad_23F[0x1]; // 0x23F - 0x240
   CPerParticleVecInput m_vecPosOffset; // 0x240 - 0x898
   float m_fDrag; // 0x898 - 0x89C
   unsigned char pad_89C[0x4]; // 0x89C - 0x8A0
}; // size - 0x8A0


class C_OP_MoveToHitbox /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleModelInput m_modelInput; // 0x1B8 - 0x218
   CParticleTransformInput m_transformInput; // 0x218 - 0x280
   unsigned char pad_280[0x4]; // 0x280 - 0x284
   float m_flLifeTimeLerpStart; // 0x284 - 0x288
   float m_flLifeTimeLerpEnd; // 0x288 - 0x28C
   float m_flPrevPosScale; // 0x28C - 0x290
   char m_HitboxSetName[128]; // 0x290 - 0x310
   bool m_bUseBones; // 0x310 - 0x311
   unsigned char pad_311[0x3]; // 0x311 - 0x314
   HitboxLerpType_t m_nLerpType; // 0x314 - 0x318
   CPerParticleFloatInput m_flInterpolation; // 0x318 - 0x470
}; // size - 0x470


class C_OP_MovementLoopInsideSphere /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCP; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CParticleCollectionFloatInput m_flDistance; // 0x1C0 - 0x318
   CParticleCollectionVecInput m_vecScale; // 0x318 - 0x970
   ParticleAttributeIndex_t m_nDistSqrAttr; // 0x970 - 0x974
   unsigned char pad_974[0x4]; // 0x974 - 0x978
}; // size - 0x978


class C_OP_MovementMaintainOffset /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_vecOffset; // 0x1B8 - 0x1C4
   int32_t m_nCP; // 0x1C4 - 0x1C8
   bool m_bRadiusScale; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x7]; // 0x1C9 - 0x1D0
}; // size - 0x1D0


class C_OP_MovementMoveAlongSkinnedCPSnapshot /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   int32_t m_nSnapshotControlPointNumber; // 0x1BC - 0x1C0
   bool m_bSetNormal; // 0x1C0 - 0x1C1
   bool m_bSetRadius; // 0x1C1 - 0x1C2
   unsigned char pad_1C2[0x6]; // 0x1C2 - 0x1C8
   CPerParticleFloatInput m_flInterpolation; // 0x1C8 - 0x320
   CPerParticleFloatInput m_flTValue; // 0x320 - 0x478
}; // size - 0x478


class C_OP_MovementPlaceOnGround /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_flOffset; // 0x1B8 - 0x310
   float m_flMaxTraceLength; // 0x310 - 0x314
   float m_flTolerance; // 0x314 - 0x318
   float m_flTraceOffset; // 0x318 - 0x31C
   float m_flLerpRate; // 0x31C - 0x320
   char m_CollisionGroupName[128]; // 0x320 - 0x3A0
   ParticleTraceSet_t m_nTraceSet; // 0x3A0 - 0x3A4
   int32_t m_nRefCP1; // 0x3A4 - 0x3A8
   int32_t m_nRefCP2; // 0x3A8 - 0x3AC
   int32_t m_nLerpCP; // 0x3AC - 0x3B0
   unsigned char pad_3B0[0x8]; // 0x3B0 - 0x3B8
   ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3B8 - 0x3BC
   bool m_bIncludeShotHull; // 0x3BC - 0x3BD
   bool m_bIncludeWater; // 0x3BD - 0x3BE
   unsigned char pad_3BE[0x2]; // 0x3BE - 0x3C0
   bool m_bSetNormal; // 0x3C0 - 0x3C1
   bool m_bScaleOffset; // 0x3C1 - 0x3C2
   unsigned char pad_3C2[0x2]; // 0x3C2 - 0x3C4
   int32_t m_nPreserveOffsetCP; // 0x3C4 - 0x3C8
   int32_t m_nIgnoreCP; // 0x3C8 - 0x3CC
   unsigned char pad_3CC[0x4]; // 0x3CC - 0x3D0
}; // size - 0x3D0


class C_OP_MovementRigidAttachToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   int32_t m_nScaleControlPoint; // 0x1BC - 0x1C0
   int32_t m_nScaleCPField; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C8 - 0x1CC
   bool m_bOffsetLocal; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
}; // size - 0x1D0


class C_OP_MovementRotateParticleAroundAxis /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionVecInput m_vecRotAxis; // 0x1B8 - 0x810
   CParticleCollectionFloatInput m_flRotRate; // 0x810 - 0x968
   CParticleTransformInput m_TransformInput; // 0x968 - 0x9D0
   bool m_bLocalSpace; // 0x9D0 - 0x9D1
   unsigned char pad_9D1[0x7]; // 0x9D1 - 0x9D8
}; // size - 0x9D8


class C_OP_MovementSkinnedPositionFromCPSnapshot /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nSnapshotControlPointNumber; // 0x1B8 - 0x1BC
   int32_t m_nControlPointNumber; // 0x1BC - 0x1C0
   bool m_bRandom; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0x3]; // 0x1C1 - 0x1C4
   int32_t m_nRandomSeed; // 0x1C4 - 0x1C8
   bool m_bSetNormal; // 0x1C8 - 0x1C9
   bool m_bSetRadius; // 0x1C9 - 0x1CA
   unsigned char pad_1CA[0x2]; // 0x1CA - 0x1CC
   SnapshotIndexType_t m_nIndexType; // 0x1CC - 0x1D0
   CPerParticleFloatInput m_flReadIndex; // 0x1D0 - 0x328
   CParticleCollectionFloatInput m_flIncrement; // 0x328 - 0x480
   CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x480 - 0x5D8
   CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x5D8 - 0x730
   CPerParticleFloatInput m_flInterpolation; // 0x730 - 0x888
}; // size - 0x888


class C_OP_Noise /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flOutputMin; // 0x1BC - 0x1C0
   float m_flOutputMax; // 0x1C0 - 0x1C4
   float m_fl4NoiseScale; // 0x1C4 - 0x1C8
   bool m_bAdditive; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   float m_flNoiseAnimationTimeScale; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_NoiseEmitter /* "particles" */ : public CParticleFunctionEmitter /* "particles" */
{
public:
   float m_flEmissionDuration; // 0x1C0 - 0x1C4
   float m_flStartTime; // 0x1C4 - 0x1C8
   float m_flEmissionScale; // 0x1C8 - 0x1CC
   int32_t m_nScaleControlPoint; // 0x1CC - 0x1D0
   int32_t m_nScaleControlPointField; // 0x1D0 - 0x1D4
   int32_t m_nWorldNoisePoint; // 0x1D4 - 0x1D8
   bool m_bAbsVal; // 0x1D8 - 0x1D9
   bool m_bAbsValInv; // 0x1D9 - 0x1DA
   unsigned char pad_1DA[0x2]; // 0x1DA - 0x1DC
   float m_flOffset; // 0x1DC - 0x1E0
   float m_flOutputMin; // 0x1E0 - 0x1E4
   float m_flOutputMax; // 0x1E4 - 0x1E8
   float m_flNoiseScale; // 0x1E8 - 0x1EC
   float m_flWorldNoiseScale; // 0x1EC - 0x1F0
   Vector m_vecOffsetLoc; // 0x1F0 - 0x1FC
   float m_flWorldTimeScale; // 0x1FC - 0x200
}; // size - 0x200


class C_OP_NormalLock /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_NormalizeVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flScale; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_Orient2DRelToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRotOffset; // 0x1B8 - 0x1BC
   float m_flSpinStrength; // 0x1BC - 0x1C0
   int32_t m_nCP; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_OrientTo2dDirection /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRotOffset; // 0x1B8 - 0x1BC
   float m_flSpinStrength; // 0x1BC - 0x1C0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_OscillateScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_RateMin; // 0x1B8 - 0x1BC
   float m_RateMax; // 0x1BC - 0x1C0
   float m_FrequencyMin; // 0x1C0 - 0x1C4
   float m_FrequencyMax; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nField; // 0x1C8 - 0x1CC
   bool m_bProportional; // 0x1CC - 0x1CD
   bool m_bProportionalOp; // 0x1CD - 0x1CE
   unsigned char pad_1CE[0x2]; // 0x1CE - 0x1D0
   float m_flStartTime_min; // 0x1D0 - 0x1D4
   float m_flStartTime_max; // 0x1D4 - 0x1D8
   float m_flEndTime_min; // 0x1D8 - 0x1DC
   float m_flEndTime_max; // 0x1DC - 0x1E0
   float m_flOscMult; // 0x1E0 - 0x1E4
   float m_flOscAdd; // 0x1E4 - 0x1E8
}; // size - 0x1E8


class C_OP_OscillateScalarSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_Rate; // 0x1B8 - 0x1BC
   float m_Frequency; // 0x1BC - 0x1C0
   ParticleAttributeIndex_t m_nField; // 0x1C0 - 0x1C4
   float m_flOscMult; // 0x1C4 - 0x1C8
   float m_flOscAdd; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x24]; // 0x1CC - 0x1F0
}; // size - 0x1F0


class C_OP_OscillateVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_RateMin; // 0x1B8 - 0x1C4
   Vector m_RateMax; // 0x1C4 - 0x1D0
   Vector m_FrequencyMin; // 0x1D0 - 0x1DC
   Vector m_FrequencyMax; // 0x1DC - 0x1E8
   ParticleAttributeIndex_t m_nField; // 0x1E8 - 0x1EC
   bool m_bProportional; // 0x1EC - 0x1ED
   bool m_bProportionalOp; // 0x1ED - 0x1EE
   bool m_bOffset; // 0x1EE - 0x1EF
   unsigned char pad_1EF[0x1]; // 0x1EF - 0x1F0
   float m_flStartTime_min; // 0x1F0 - 0x1F4
   float m_flStartTime_max; // 0x1F4 - 0x1F8
   float m_flEndTime_min; // 0x1F8 - 0x1FC
   float m_flEndTime_max; // 0x1FC - 0x200
   CPerParticleFloatInput m_flOscMult; // 0x200 - 0x358
   CPerParticleFloatInput m_flOscAdd; // 0x358 - 0x4B0
   CPerParticleFloatInput m_flRateScale; // 0x4B0 - 0x608
}; // size - 0x608


class C_OP_OscillateVectorSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_Rate; // 0x1B8 - 0x1C4
   Vector m_Frequency; // 0x1C4 - 0x1D0
   ParticleAttributeIndex_t m_nField; // 0x1D0 - 0x1D4
   float m_flOscMult; // 0x1D4 - 0x1D8
   float m_flOscAdd; // 0x1D8 - 0x1DC
   bool m_bOffset; // 0x1DC - 0x1DD
   unsigned char pad_1DD[0x3]; // 0x1DD - 0x1E0
}; // size - 0x1E0


class C_OP_ParentVortices /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flForceScale; // 0x1C8 - 0x1CC
   Vector m_vecTwistAxis; // 0x1CC - 0x1D8
   bool m_bFlipBasedOnYaw; // 0x1D8 - 0x1D9
   unsigned char pad_1D9[0x7]; // 0x1D9 - 0x1E0
}; // size - 0x1E0


class C_OP_PerParticleForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   CPerParticleFloatInput m_flForceScale; // 0x1C8 - 0x320
   CPerParticleVecInput m_vForce; // 0x320 - 0x978
   int32_t m_nCP; // 0x978 - 0x97C
   unsigned char pad_97C[0x4]; // 0x97C - 0x980
}; // size - 0x980


class C_OP_PercentageBetweenTransformLerpCPs /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flInputMin; // 0x1BC - 0x1C0
   float m_flInputMax; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleTransformInput m_TransformStart; // 0x1C8 - 0x230
   CParticleTransformInput m_TransformEnd; // 0x230 - 0x298
   int32_t m_nOutputStartCP; // 0x298 - 0x29C
   int32_t m_nOutputStartField; // 0x29C - 0x2A0
   int32_t m_nOutputEndCP; // 0x2A0 - 0x2A4
   int32_t m_nOutputEndField; // 0x2A4 - 0x2A8
   ParticleSetMethod_t m_nSetMethod; // 0x2A8 - 0x2AC
   bool m_bActiveRange; // 0x2AC - 0x2AD
   bool m_bRadialCheck; // 0x2AD - 0x2AE
   unsigned char pad_2AE[0x2]; // 0x2AE - 0x2B0
}; // size - 0x2B0


class C_OP_PercentageBetweenTransforms /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flInputMin; // 0x1BC - 0x1C0
   float m_flInputMax; // 0x1C0 - 0x1C4
   float m_flOutputMin; // 0x1C4 - 0x1C8
   float m_flOutputMax; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CParticleTransformInput m_TransformStart; // 0x1D0 - 0x238
   CParticleTransformInput m_TransformEnd; // 0x238 - 0x2A0
   ParticleSetMethod_t m_nSetMethod; // 0x2A0 - 0x2A4
   bool m_bActiveRange; // 0x2A4 - 0x2A5
   bool m_bRadialCheck; // 0x2A5 - 0x2A6
   unsigned char pad_2A6[0x2]; // 0x2A6 - 0x2A8
}; // size - 0x2A8


class C_OP_PercentageBetweenTransformsVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flInputMin; // 0x1BC - 0x1C0
   float m_flInputMax; // 0x1C0 - 0x1C4
   Vector m_vecOutputMin; // 0x1C4 - 0x1D0
   Vector m_vecOutputMax; // 0x1D0 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
   CParticleTransformInput m_TransformStart; // 0x1E0 - 0x248
   CParticleTransformInput m_TransformEnd; // 0x248 - 0x2B0
   ParticleSetMethod_t m_nSetMethod; // 0x2B0 - 0x2B4
   bool m_bActiveRange; // 0x2B4 - 0x2B5
   bool m_bRadialCheck; // 0x2B5 - 0x2B6
   unsigned char pad_2B6[0x2]; // 0x2B6 - 0x2B8
}; // size - 0x2B8


class C_OP_PinParticleToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CParticleCollectionVecInput m_vecOffset; // 0x1C0 - 0x818
   bool m_bOffsetLocal; // 0x818 - 0x819
   unsigned char pad_819[0x3]; // 0x819 - 0x81C
   ParticleSelection_t m_nParticleSelection; // 0x81C - 0x820
   CParticleCollectionFloatInput m_nParticleNumber; // 0x820 - 0x978
   ParticlePinDistance_t m_nPinBreakType; // 0x978 - 0x97C
   unsigned char pad_97C[0x4]; // 0x97C - 0x980
   CParticleCollectionFloatInput m_flBreakDistance; // 0x980 - 0xAD8
   CParticleCollectionFloatInput m_flBreakSpeed; // 0xAD8 - 0xC30
   CParticleCollectionFloatInput m_flAge; // 0xC30 - 0xD88
   int32_t m_nBreakControlPointNumber; // 0xD88 - 0xD8C
   int32_t m_nBreakControlPointNumber2; // 0xD8C - 0xD90
   CParticleCollectionFloatInput m_flBreakValue; // 0xD90 - 0xEE8
   CPerParticleFloatInput m_flInterpolation; // 0xEE8 - 0x1040
}; // size - 0x1040


class C_OP_PlanarConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   Vector m_PointOnPlane; // 0x1B8 - 0x1C4
   Vector m_PlaneNormal; // 0x1C4 - 0x1D0
   int32_t m_nControlPointNumber; // 0x1D0 - 0x1D4
   bool m_bGlobalOrigin; // 0x1D4 - 0x1D5
   bool m_bGlobalNormal; // 0x1D5 - 0x1D6
   unsigned char pad_1D6[0x2]; // 0x1D6 - 0x1D8
   CPerParticleFloatInput m_flRadiusScale; // 0x1D8 - 0x330
   CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x330 - 0x488
   bool m_bUseOldCode; // 0x488 - 0x489
   unsigned char pad_489[0x7]; // 0x489 - 0x490
}; // size - 0x490


class C_OP_PlaneCull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nPlaneControlPoint; // 0x1B8 - 0x1BC
   Vector m_vecPlaneDirection; // 0x1BC - 0x1C8
   bool m_bLocalSpace; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   float m_flPlaneOffset; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_PlayEndCapWhenFinished /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bFireOnEmissionEnd; // 0x1C0 - 0x1C1
   bool m_bIncludeChildren; // 0x1C1 - 0x1C2
   unsigned char pad_1C2[0x6]; // 0x1C2 - 0x1C8
}; // size - 0x1C8


class C_OP_PointVectorAtNextParticle /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleFloatInput m_flInterpolation; // 0x1C0 - 0x318
}; // size - 0x318


class C_OP_PositionLock /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1B8 - 0x220
   float m_flStartTime_min; // 0x220 - 0x224
   float m_flStartTime_max; // 0x224 - 0x228
   float m_flStartTime_exp; // 0x228 - 0x22C
   float m_flEndTime_min; // 0x22C - 0x230
   float m_flEndTime_max; // 0x230 - 0x234
   float m_flEndTime_exp; // 0x234 - 0x238
   float m_flRange; // 0x238 - 0x23C
   unsigned char pad_23C[0x4]; // 0x23C - 0x240
   CParticleCollectionFloatInput m_flRangeBias; // 0x240 - 0x398
   float m_flJumpThreshold; // 0x398 - 0x39C
   float m_flPrevPosScale; // 0x39C - 0x3A0
   bool m_bLockRot; // 0x3A0 - 0x3A1
   unsigned char pad_3A1[0x7]; // 0x3A1 - 0x3A8
   CParticleCollectionVecInput m_vecScale; // 0x3A8 - 0xA00
   ParticleAttributeIndex_t m_nFieldOutput; // 0xA00 - 0xA04
   ParticleAttributeIndex_t m_nFieldOutputPrev; // 0xA04 - 0xA08
}; // size - 0xA08


class C_OP_QuantizeCPComponent /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flInputValue; // 0x1C0 - 0x318
   int32_t m_nCPOutput; // 0x318 - 0x31C
   int32_t m_nOutVectorField; // 0x31C - 0x320
   CParticleCollectionFloatInput m_flQuantizeValue; // 0x320 - 0x478
}; // size - 0x478


class C_OP_QuantizeFloat /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_InputValue; // 0x1B8 - 0x310
   ParticleAttributeIndex_t m_nOutputField; // 0x310 - 0x314
   unsigned char pad_314[0x2C]; // 0x314 - 0x340
}; // size - 0x340


class C_OP_RadiusDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flMinRadius; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_RampCPLinearRandom /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nOutControlPointNumber; // 0x1C0 - 0x1C4
   Vector m_vecRateMin; // 0x1C4 - 0x1D0
   Vector m_vecRateMax; // 0x1D0 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_RampScalarLinear /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_RateMin; // 0x1B8 - 0x1BC
   float m_RateMax; // 0x1BC - 0x1C0
   float m_flStartTime_min; // 0x1C0 - 0x1C4
   float m_flStartTime_max; // 0x1C4 - 0x1C8
   float m_flEndTime_min; // 0x1C8 - 0x1CC
   float m_flEndTime_max; // 0x1CC - 0x1D0
   unsigned char pad_1D0[0x20]; // 0x1D0 - 0x1F0
   ParticleAttributeIndex_t m_nField; // 0x1F0 - 0x1F4
   bool m_bProportionalOp; // 0x1F4 - 0x1F5
   unsigned char pad_1F5[0xB]; // 0x1F5 - 0x200
}; // size - 0x200


class C_OP_RampScalarLinearSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_Rate; // 0x1B8 - 0x1BC
   float m_flStartTime; // 0x1BC - 0x1C0
   float m_flEndTime; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x2C]; // 0x1C4 - 0x1F0
   ParticleAttributeIndex_t m_nField; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0xC]; // 0x1F4 - 0x200
}; // size - 0x200


class C_OP_RampScalarSpline /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_RateMin; // 0x1B8 - 0x1BC
   float m_RateMax; // 0x1BC - 0x1C0
   float m_flStartTime_min; // 0x1C0 - 0x1C4
   float m_flStartTime_max; // 0x1C4 - 0x1C8
   float m_flEndTime_min; // 0x1C8 - 0x1CC
   float m_flEndTime_max; // 0x1CC - 0x1D0
   float m_flBias; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x2C]; // 0x1D4 - 0x200
   ParticleAttributeIndex_t m_nField; // 0x200 - 0x204
   bool m_bProportionalOp; // 0x204 - 0x205
   bool m_bEaseOut; // 0x205 - 0x206
   unsigned char pad_206[0xA]; // 0x206 - 0x210
}; // size - 0x210


class C_OP_RampScalarSplineSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_Rate; // 0x1B8 - 0x1BC
   float m_flStartTime; // 0x1BC - 0x1C0
   float m_flEndTime; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x2C]; // 0x1C4 - 0x1F0
   ParticleAttributeIndex_t m_nField; // 0x1F0 - 0x1F4
   bool m_bEaseOut; // 0x1F4 - 0x1F5
   unsigned char pad_1F5[0xB]; // 0x1F5 - 0x200
}; // size - 0x200


class C_OP_RandomForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   Vector m_MinForce; // 0x1C8 - 0x1D4
   Vector m_MaxForce; // 0x1D4 - 0x1E0
}; // size - 0x1E0


class C_OP_ReadFromNeighboringParticle /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   int32_t m_nIncrement; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_DistanceCheck; // 0x1C8 - 0x320
   CPerParticleFloatInput m_flInterpolation; // 0x320 - 0x478
}; // size - 0x478


class C_OP_ReinitializeScalarEndCap /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flOutputMin; // 0x1BC - 0x1C0
   float m_flOutputMax; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_RemapAverageHitboxSpeedtoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nOutControlPointNumber; // 0x1C4 - 0x1C8
   int32_t m_nField; // 0x1C8 - 0x1CC
   ParticleHitboxDataSelection_t m_nHitboxDataType; // 0x1CC - 0x1D0
   CParticleCollectionFloatInput m_flInputMin; // 0x1D0 - 0x328
   CParticleCollectionFloatInput m_flInputMax; // 0x328 - 0x480
   CParticleCollectionFloatInput m_flOutputMin; // 0x480 - 0x5D8
   CParticleCollectionFloatInput m_flOutputMax; // 0x5D8 - 0x730
   int32_t m_nHeightControlPointNumber; // 0x730 - 0x734
   unsigned char pad_734[0x4]; // 0x734 - 0x738
   CParticleCollectionVecInput m_vecComparisonVelocity; // 0x738 - 0xD90
   char m_HitboxSetName[128]; // 0xD90 - 0xE10
}; // size - 0xE10


class C_OP_RemapAverageScalarValuetoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nOutControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nOutVectorField; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nField; // 0x1C8 - 0x1CC
   float m_flInputMin; // 0x1CC - 0x1D0
   float m_flInputMax; // 0x1D0 - 0x1D4
   float m_flOutputMin; // 0x1D4 - 0x1D8
   float m_flOutputMax; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_RemapBoundingVolumetoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nOutControlPointNumber; // 0x1C0 - 0x1C4
   float m_flInputMin; // 0x1C4 - 0x1C8
   float m_flInputMax; // 0x1C8 - 0x1CC
   float m_flOutputMin; // 0x1CC - 0x1D0
   float m_flOutputMax; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_RemapCPVelocityToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPoint; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   float m_flScale; // 0x1C0 - 0x1C4
   bool m_bNormalize; // 0x1C4 - 0x1C5
   unsigned char pad_1C5[0x3]; // 0x1C5 - 0x1C8
}; // size - 0x1C8


class C_OP_RemapCPtoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInputControlPoint; // 0x1C0 - 0x1C4
   int32_t m_nOutputControlPoint; // 0x1C4 - 0x1C8
   int32_t m_nInputField; // 0x1C8 - 0x1CC
   int32_t m_nOutputField; // 0x1CC - 0x1D0
   float m_flInputMin; // 0x1D0 - 0x1D4
   float m_flInputMax; // 0x1D4 - 0x1D8
   float m_flOutputMin; // 0x1D8 - 0x1DC
   float m_flOutputMax; // 0x1DC - 0x1E0
   bool m_bDerivative; // 0x1E0 - 0x1E1
   unsigned char pad_1E1[0x3]; // 0x1E1 - 0x1E4
   float m_flInterpRate; // 0x1E4 - 0x1E8
}; // size - 0x1E8


class C_OP_RemapCPtoScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   int32_t m_nField; // 0x1C0 - 0x1C4
   float m_flInputMin; // 0x1C4 - 0x1C8
   float m_flInputMax; // 0x1C8 - 0x1CC
   float m_flOutputMin; // 0x1CC - 0x1D0
   float m_flOutputMax; // 0x1D0 - 0x1D4
   float m_flStartTime; // 0x1D4 - 0x1D8
   float m_flEndTime; // 0x1D8 - 0x1DC
   float m_flInterpRate; // 0x1DC - 0x1E0
   ParticleSetMethod_t m_nSetMethod; // 0x1E0 - 0x1E4
   unsigned char pad_1E4[0x4]; // 0x1E4 - 0x1E8
}; // size - 0x1E8


class C_OP_RemapCPtoVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   int32_t m_nLocalSpaceCP; // 0x1C0 - 0x1C4
   Vector m_vInputMin; // 0x1C4 - 0x1D0
   Vector m_vInputMax; // 0x1D0 - 0x1DC
   Vector m_vOutputMin; // 0x1DC - 0x1E8
   Vector m_vOutputMax; // 0x1E8 - 0x1F4
   float m_flStartTime; // 0x1F4 - 0x1F8
   float m_flEndTime; // 0x1F8 - 0x1FC
   float m_flInterpRate; // 0x1FC - 0x200
   ParticleSetMethod_t m_nSetMethod; // 0x200 - 0x204
   bool m_bOffset; // 0x204 - 0x205
   bool m_bAccelerate; // 0x205 - 0x206
   unsigned char pad_206[0x2]; // 0x206 - 0x208
}; // size - 0x208


class C_OP_RemapControlPointDirectionToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flScale; // 0x1BC - 0x1C0
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_RemapControlPointOrientationToRotation /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCP; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   float m_flOffsetRot; // 0x1C0 - 0x1C4
   int32_t m_nComponent; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_RemapCrossProductOfTwoVectorsToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleVecInput m_InputVec1; // 0x1B8 - 0x810
   CPerParticleVecInput m_InputVec2; // 0x810 - 0xE68
   ParticleAttributeIndex_t m_nFieldOutput; // 0xE68 - 0xE6C
   bool m_bNormalize; // 0xE6C - 0xE6D
   unsigned char pad_E6D[0x3]; // 0xE6D - 0xE70
}; // size - 0xE70


class C_OP_RemapDensityGradientToVectorAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRadiusScale; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_RemapDensityToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRadiusScale; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   float m_flDensityMin; // 0x1C0 - 0x1C4
   float m_flDensityMax; // 0x1C4 - 0x1C8
   Vector m_vecOutputMin; // 0x1C8 - 0x1D4
   Vector m_vecOutputMax; // 0x1D4 - 0x1E0
   bool m_bUseParentDensity; // 0x1E0 - 0x1E1
   unsigned char pad_1E1[0x3]; // 0x1E1 - 0x1E4
   int32_t m_nVoxelGridResolution; // 0x1E4 - 0x1E8
}; // size - 0x1E8


class C_OP_RemapDirectionToCPToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCP; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   float m_flScale; // 0x1C0 - 0x1C4
   float m_flOffsetRot; // 0x1C4 - 0x1C8
   Vector m_vecOffsetAxis; // 0x1C8 - 0x1D4
   bool m_bNormalize; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0x3]; // 0x1D5 - 0x1D8
   ParticleAttributeIndex_t m_nFieldStrength; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_RemapDistanceToLineSegmentToScalar /* "particles" */ : public C_OP_RemapDistanceToLineSegmentBase /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1D0 - 0x1D4
   float m_flMinOutputValue; // 0x1D4 - 0x1D8
   float m_flMaxOutputValue; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_RemapDistanceToLineSegmentToVector /* "particles" */ : public C_OP_RemapDistanceToLineSegmentBase /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1D0 - 0x1D4
   Vector m_vMinOutputValue; // 0x1D4 - 0x1E0
   Vector m_vMaxOutputValue; // 0x1E0 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_OP_RemapDotProductToCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInputCP1; // 0x1C0 - 0x1C4
   int32_t m_nInputCP2; // 0x1C4 - 0x1C8
   int32_t m_nOutputCP; // 0x1C8 - 0x1CC
   int32_t m_nOutVectorField; // 0x1CC - 0x1D0
   CParticleCollectionFloatInput m_flInputMin; // 0x1D0 - 0x328
   CParticleCollectionFloatInput m_flInputMax; // 0x328 - 0x480
   CParticleCollectionFloatInput m_flOutputMin; // 0x480 - 0x5D8
   CParticleCollectionFloatInput m_flOutputMax; // 0x5D8 - 0x730
}; // size - 0x730


class C_OP_RemapDotProductToScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nInputCP1; // 0x1B8 - 0x1BC
   int32_t m_nInputCP2; // 0x1BC - 0x1C0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flInputMin; // 0x1C4 - 0x1C8
   float m_flInputMax; // 0x1C8 - 0x1CC
   float m_flOutputMin; // 0x1CC - 0x1D0
   float m_flOutputMax; // 0x1D0 - 0x1D4
   bool m_bUseParticleVelocity; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0x3]; // 0x1D5 - 0x1D8
   ParticleSetMethod_t m_nSetMethod; // 0x1D8 - 0x1DC
   bool m_bActiveRange; // 0x1DC - 0x1DD
   bool m_bUseParticleNormal; // 0x1DD - 0x1DE
   unsigned char pad_1DE[0x2]; // 0x1DE - 0x1E0
}; // size - 0x1E0


class C_OP_RemapExternalWindToCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP; // 0x1C0 - 0x1C4
   int32_t m_nCPOutput; // 0x1C4 - 0x1C8
   CParticleCollectionVecInput m_vecScale; // 0x1C8 - 0x820
   bool m_bSetMagnitude; // 0x820 - 0x821
   unsigned char pad_821[0x3]; // 0x821 - 0x824
   int32_t m_nOutVectorField; // 0x824 - 0x828
}; // size - 0x828


class C_OP_RemapGravityToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleVecInput m_vInput1; // 0x1B8 - 0x810
   ParticleAttributeIndex_t m_nOutputField; // 0x810 - 0x814
   ParticleSetMethod_t m_nSetMethod; // 0x814 - 0x818
   bool m_bNormalizedOutput; // 0x818 - 0x819
   unsigned char pad_819[0x67]; // 0x819 - 0x880
}; // size - 0x880


class C_OP_RemapModelVolumetoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   BBoxVolumeType_t m_nBBoxType; // 0x1C0 - 0x1C4
   int32_t m_nInControlPointNumber; // 0x1C4 - 0x1C8
   int32_t m_nOutControlPointNumber; // 0x1C8 - 0x1CC
   int32_t m_nOutControlPointMaxNumber; // 0x1CC - 0x1D0
   int32_t m_nField; // 0x1D0 - 0x1D4
   float m_flInputMin; // 0x1D4 - 0x1D8
   float m_flInputMax; // 0x1D8 - 0x1DC
   float m_flOutputMin; // 0x1DC - 0x1E0
   float m_flOutputMax; // 0x1E0 - 0x1E4
   unsigned char pad_1E4[0x4]; // 0x1E4 - 0x1E8
}; // size - 0x1E8


class C_OP_RemapNamedModelBodyPartEndCap /* "particles" */ : public C_OP_RemapNamedModelElementEndCap /* "particles" */
{
public:
   unsigned char pad_0[0x218]; // 0x0 - 0x218
}; // size - 0x218


class C_OP_RemapNamedModelBodyPartOnceTimed /* "particles" */ : public C_OP_RemapNamedModelElementOnceTimed /* "particles" */
{
public:
   unsigned char pad_0[0x218]; // 0x0 - 0x218
}; // size - 0x218


class C_OP_RemapNamedModelMeshGroupEndCap /* "particles" */ : public C_OP_RemapNamedModelElementEndCap /* "particles" */
{
public:
   unsigned char pad_0[0x218]; // 0x0 - 0x218
}; // size - 0x218


class C_OP_RemapNamedModelMeshGroupOnceTimed /* "particles" */ : public C_OP_RemapNamedModelElementOnceTimed /* "particles" */
{
public:
   unsigned char pad_0[0x218]; // 0x0 - 0x218
}; // size - 0x218


class C_OP_RemapNamedModelSequenceEndCap /* "particles" */ : public C_OP_RemapNamedModelElementEndCap /* "particles" */
{
public:
   unsigned char pad_0[0x218]; // 0x0 - 0x218
}; // size - 0x218


class C_OP_RemapNamedModelSequenceOnceTimed /* "particles" */ : public C_OP_RemapNamedModelElementOnceTimed /* "particles" */
{
public:
   unsigned char pad_0[0x218]; // 0x0 - 0x218
}; // size - 0x218


class C_OP_RemapParticleCountOnScalarEndCap /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   int32_t m_nInputMin; // 0x1BC - 0x1C0
   int32_t m_nInputMax; // 0x1C0 - 0x1C4
   float m_flOutputMin; // 0x1C4 - 0x1C8
   float m_flOutputMax; // 0x1C8 - 0x1CC
   bool m_bBackwards; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
   ParticleSetMethod_t m_nSetMethod; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_RemapParticleCountToScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CParticleCollectionFloatInput m_nInputMin; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_nInputMax; // 0x318 - 0x470
   CParticleCollectionFloatInput m_flOutputMin; // 0x470 - 0x5C8
   CParticleCollectionFloatInput m_flOutputMax; // 0x5C8 - 0x720
   bool m_bActiveRange; // 0x720 - 0x721
   unsigned char pad_721[0x3]; // 0x721 - 0x724
   ParticleSetMethod_t m_nSetMethod; // 0x724 - 0x728
}; // size - 0x728


class C_OP_RemapSDFDistanceToScalarAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1BC - 0x1C0
   CParticleCollectionFloatInput m_flMinDistance; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_flMaxDistance; // 0x318 - 0x470
   CParticleCollectionFloatInput m_flValueBelowMin; // 0x470 - 0x5C8
   CParticleCollectionFloatInput m_flValueAtMin; // 0x5C8 - 0x720
   CParticleCollectionFloatInput m_flValueAtMax; // 0x720 - 0x878
   CParticleCollectionFloatInput m_flValueAboveMax; // 0x878 - 0x9D0
}; // size - 0x9D0


class C_OP_RemapSDFDistanceToVectorAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nVectorFieldOutput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1BC - 0x1C0
   CParticleCollectionFloatInput m_flMinDistance; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_flMaxDistance; // 0x318 - 0x470
   Vector m_vValueBelowMin; // 0x470 - 0x47C
   Vector m_vValueAtMin; // 0x47C - 0x488
   Vector m_vValueAtMax; // 0x488 - 0x494
   Vector m_vValueAboveMax; // 0x494 - 0x4A0
}; // size - 0x4A0


class C_OP_RemapSDFGradientToVectorAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_RemapScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   float m_flInputMin; // 0x1C0 - 0x1C4
   float m_flInputMax; // 0x1C4 - 0x1C8
   float m_flOutputMin; // 0x1C8 - 0x1CC
   float m_flOutputMax; // 0x1CC - 0x1D0
   bool m_bOldCode; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x7]; // 0x1D1 - 0x1D8
}; // size - 0x1D8


class C_OP_RemapScalarEndCap /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   float m_flInputMin; // 0x1C0 - 0x1C4
   float m_flInputMax; // 0x1C4 - 0x1C8
   float m_flOutputMin; // 0x1C8 - 0x1CC
   float m_flOutputMax; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_RemapScalarOnceTimed /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bProportional; // 0x1B8 - 0x1B9
   unsigned char pad_1B9[0x3]; // 0x1B9 - 0x1BC
   ParticleAttributeIndex_t m_nFieldInput; // 0x1BC - 0x1C0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flInputMin; // 0x1C4 - 0x1C8
   float m_flInputMax; // 0x1C8 - 0x1CC
   float m_flOutputMin; // 0x1CC - 0x1D0
   float m_flOutputMax; // 0x1D0 - 0x1D4
   float m_flRemapTime; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_RemapSpeed /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flInputMin; // 0x1BC - 0x1C0
   float m_flInputMax; // 0x1C0 - 0x1C4
   float m_flOutputMin; // 0x1C4 - 0x1C8
   float m_flOutputMax; // 0x1C8 - 0x1CC
   ParticleSetMethod_t m_nSetMethod; // 0x1CC - 0x1D0
   bool m_bIgnoreDelta; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x7]; // 0x1D1 - 0x1D8
}; // size - 0x1D8


class C_OP_RemapSpeedtoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nOutControlPointNumber; // 0x1C4 - 0x1C8
   int32_t m_nField; // 0x1C8 - 0x1CC
   float m_flInputMin; // 0x1CC - 0x1D0
   float m_flInputMax; // 0x1D0 - 0x1D4
   float m_flOutputMin; // 0x1D4 - 0x1D8
   float m_flOutputMax; // 0x1D8 - 0x1DC
   bool m_bUseDeltaV; // 0x1DC - 0x1DD
   unsigned char pad_1DD[0x3]; // 0x1DD - 0x1E0
}; // size - 0x1E0


class C_OP_RemapTransformOrientationToRotations /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1B8 - 0x220
   Vector m_vecRotation; // 0x220 - 0x22C
   bool m_bUseQuat; // 0x22C - 0x22D
   bool m_bWriteNormal; // 0x22D - 0x22E
   unsigned char pad_22E[0x2]; // 0x22E - 0x230
}; // size - 0x230


class C_OP_RemapTransformOrientationToYaw /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1B8 - 0x220
   ParticleAttributeIndex_t m_nFieldOutput; // 0x220 - 0x224
   float m_flRotOffset; // 0x224 - 0x228
   float m_flSpinStrength; // 0x228 - 0x22C
   unsigned char pad_22C[0x4]; // 0x22C - 0x230
}; // size - 0x230


class C_OP_RemapTransformToVelocity /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1B8 - 0x220
}; // size - 0x220


class C_OP_RemapTransformVisibilityToScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleSetMethod_t m_nSetMethod; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   ParticleAttributeIndex_t m_nFieldOutput; // 0x228 - 0x22C
   float m_flInputMin; // 0x22C - 0x230
   float m_flInputMax; // 0x230 - 0x234
   float m_flOutputMin; // 0x234 - 0x238
   float m_flOutputMax; // 0x238 - 0x23C
   float m_flRadius; // 0x23C - 0x240
}; // size - 0x240


class C_OP_RemapTransformVisibilityToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleSetMethod_t m_nSetMethod; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   ParticleAttributeIndex_t m_nFieldOutput; // 0x228 - 0x22C
   float m_flInputMin; // 0x22C - 0x230
   float m_flInputMax; // 0x230 - 0x234
   Vector m_vecOutputMin; // 0x234 - 0x240
   Vector m_vecOutputMax; // 0x240 - 0x24C
   float m_flRadius; // 0x24C - 0x250
}; // size - 0x250


class C_OP_RemapVectorComponentToScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   int32_t m_nComponent; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_RemapVectortoCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nOutControlPointNumber; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldInput; // 0x1BC - 0x1C0
   int32_t m_nParticleNumber; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_RemapVelocityToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   float m_flScale; // 0x1BC - 0x1C0
   bool m_bNormalize; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0x7]; // 0x1C1 - 0x1C8
}; // size - 0x1C8


class C_OP_RemapVisibilityScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   float m_flInputMin; // 0x1C0 - 0x1C4
   float m_flInputMax; // 0x1C4 - 0x1C8
   float m_flOutputMin; // 0x1C8 - 0x1CC
   float m_flOutputMax; // 0x1CC - 0x1D0
   float m_flRadiusScale; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_RenderAsModels /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CUtlVector< ModelReference_t > m_ModelList; // 0x208 - 0x220
   unsigned char pad_220[0x4]; // 0x220 - 0x224
   float m_flModelScale; // 0x224 - 0x228
   bool m_bFitToModelSize; // 0x228 - 0x229
   bool m_bNonUniformScaling; // 0x229 - 0x22A
   unsigned char pad_22A[0x2]; // 0x22A - 0x22C
   ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x22C - 0x230
   ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x230 - 0x234
   ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x234 - 0x238
   int32_t m_nSizeCullBloat; // 0x238 - 0x23C
   unsigned char pad_23C[0x4]; // 0x23C - 0x240
}; // size - 0x240


class C_OP_RenderBlobs /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CParticleCollectionRendererFloatInput m_cubeWidth; // 0x208 - 0x360
   CParticleCollectionRendererFloatInput m_cutoffRadius; // 0x360 - 0x4B8
   CParticleCollectionRendererFloatInput m_renderRadius; // 0x4B8 - 0x610
   uint32_t m_nVertexCountKb; // 0x610 - 0x614
   uint32_t m_nIndexCountKb; // 0x614 - 0x618
   int32_t m_nScaleCP; // 0x618 - 0x61C
   unsigned char pad_61C[0x4]; // 0x61C - 0x620
   CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x620 - 0x638
   unsigned char pad_638[0x18]; // 0x638 - 0x650
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x650 - 0x658
}; // size - 0x658


class C_OP_RenderCables /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flRadiusScale; // 0x208 - 0x360
   CParticleCollectionFloatInput m_flAlphaScale; // 0x360 - 0x4B8
   CParticleCollectionVecInput m_vecColorScale; // 0x4B8 - 0xB10
   ParticleColorBlendType_t m_nColorBlendType; // 0xB10 - 0xB14
   unsigned char pad_B14[0x4]; // 0xB14 - 0xB18
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xB18 - 0xB20
   TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xB20 - 0xB24
   unsigned char pad_B24[0x4]; // 0xB24 - 0xB28
   CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xB28 - 0xC80
   CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xC80 - 0xDD8
   CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xDD8 - 0xF30
   CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xF30 - 0x1088
   CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x1088 - 0x11E0
   CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x11E0 - 0x1338
   bool m_bDrawCableCaps; // 0x1338 - 0x1339
   unsigned char pad_1339[0x3]; // 0x1339 - 0x133C
   float m_flCapRoundness; // 0x133C - 0x1340
   float m_flCapOffsetAmount; // 0x1340 - 0x1344
   float m_flTessScale; // 0x1344 - 0x1348
   int32_t m_nMinTesselation; // 0x1348 - 0x134C
   int32_t m_nMaxTesselation; // 0x134C - 0x1350
   int32_t m_nRoundness; // 0x1350 - 0x1354
   unsigned char pad_1354[0x4]; // 0x1354 - 0x1358
   CParticleTransformInput m_LightingTransform; // 0x1358 - 0x13C0
   CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x13C0 - 0x13D8
   unsigned char pad_13D8[0x18]; // 0x13D8 - 0x13F0
   CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x13F0 - 0x1408
   unsigned char pad_1408[0x18]; // 0x1408 - 0x1420
}; // size - 0x1420


class C_OP_RenderClothForce /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   unsigned char pad_0[0x208]; // 0x0 - 0x208
}; // size - 0x208


class C_OP_RenderDeferredLight /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   bool m_bUseAlphaTestWindow; // 0x208 - 0x209
   bool m_bUseTexture; // 0x209 - 0x20A
   unsigned char pad_20A[0x2]; // 0x20A - 0x20C
   float m_flRadiusScale; // 0x20C - 0x210
   float m_flAlphaScale; // 0x210 - 0x214
   ParticleAttributeIndex_t m_nAlpha2Field; // 0x214 - 0x218
   CParticleCollectionVecInput m_vecColorScale; // 0x218 - 0x870
   ParticleColorBlendType_t m_nColorBlendType; // 0x870 - 0x874
   float m_flLightDistance; // 0x874 - 0x878
   float m_flStartFalloff; // 0x878 - 0x87C
   float m_flDistanceFalloff; // 0x87C - 0x880
   float m_flSpotFoV; // 0x880 - 0x884
   ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x884 - 0x888
   ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x888 - 0x88C
   ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x88C - 0x890
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x890 - 0x898
   int32_t m_nHSVShiftControlPoint; // 0x898 - 0x89C
   unsigned char pad_89C[0x4]; // 0x89C - 0x8A0
}; // size - 0x8A0


class C_OP_RenderFlattenGrass /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flFlattenStrength; // 0x208 - 0x20C
   ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x20C - 0x210
   float m_flRadiusScale; // 0x210 - 0x214
   unsigned char pad_214[0x4]; // 0x214 - 0x218
}; // size - 0x218


class C_OP_RenderGpuImplicit /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   bool m_bUsePerParticleRadius; // 0x208 - 0x209
   unsigned char pad_209[0x3]; // 0x209 - 0x20C
   uint32_t m_nVertexCountKb; // 0x20C - 0x210
   uint32_t m_nIndexCountKb; // 0x210 - 0x214
   unsigned char pad_214[0x4]; // 0x214 - 0x218
   CParticleCollectionRendererFloatInput m_fGridSize; // 0x218 - 0x370
   CParticleCollectionRendererFloatInput m_fRadiusScale; // 0x370 - 0x4C8
   CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // 0x4C8 - 0x620
   int32_t m_nScaleCP; // 0x620 - 0x624
   unsigned char pad_624[0x4]; // 0x624 - 0x628
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x628 - 0x630
}; // size - 0x630


class C_OP_RenderLightBeam /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CParticleCollectionVecInput m_vColorBlend; // 0x208 - 0x860
   ParticleColorBlendType_t m_nColorBlendType; // 0x860 - 0x864
   unsigned char pad_864[0x4]; // 0x864 - 0x868
   CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x868 - 0x9C0
   bool m_bCastShadows; // 0x9C0 - 0x9C1
   unsigned char pad_9C1[0x7]; // 0x9C1 - 0x9C8
   CParticleCollectionFloatInput m_flSkirt; // 0x9C8 - 0xB20
   CParticleCollectionFloatInput m_flRange; // 0xB20 - 0xC78
   CParticleCollectionFloatInput m_flThickness; // 0xC78 - 0xDD0
}; // size - 0xDD0


class C_OP_RenderLights /* "particles" */ : public C_OP_RenderPoints /* "particles" */
{
public:
   float m_flAnimationRate; // 0x210 - 0x214
   AnimationType_t m_nAnimationType; // 0x214 - 0x218
   bool m_bAnimateInFPS; // 0x218 - 0x219
   unsigned char pad_219[0x3]; // 0x219 - 0x21C
   float m_flMinSize; // 0x21C - 0x220
   float m_flMaxSize; // 0x220 - 0x224
   float m_flStartFadeSize; // 0x224 - 0x228
   float m_flEndFadeSize; // 0x228 - 0x22C
   unsigned char pad_22C[0x4]; // 0x22C - 0x230
}; // size - 0x230


class C_OP_RenderMaterialProxy /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   int32_t m_nMaterialControlPoint; // 0x208 - 0x20C
   MaterialProxyType_t m_nProxyType; // 0x20C - 0x210
   CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x210 - 0x228
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x228 - 0x230
   CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x230 - 0x388
   CParticleCollectionVecInput m_vecColorScale; // 0x388 - 0x9E0
   CPerParticleFloatInput m_flAlpha; // 0x9E0 - 0xB38
   ParticleColorBlendType_t m_nColorBlendType; // 0xB38 - 0xB3C
   unsigned char pad_B3C[0x1C]; // 0xB3C - 0xB58
}; // size - 0xB58


class C_OP_RenderModels /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   bool m_bOnlyRenderInEffectsBloomPass; // 0x208 - 0x209
   bool m_bOnlyRenderInEffectsWaterPass; // 0x209 - 0x20A
   bool m_bUseMixedResolutionRendering; // 0x20A - 0x20B
   bool m_bOnlyRenderInEffecsGameOverlay; // 0x20B - 0x20C
   unsigned char pad_20C[0x4]; // 0x20C - 0x210
   CUtlVector< ModelReference_t > m_ModelList; // 0x210 - 0x228
   ParticleAttributeIndex_t m_nBodyGroupField; // 0x228 - 0x22C
   ParticleAttributeIndex_t m_nSubModelField; // 0x22C - 0x230
   bool m_bIgnoreNormal; // 0x230 - 0x231
   bool m_bOrientZ; // 0x231 - 0x232
   bool m_bCenterOffset; // 0x232 - 0x233
   unsigned char pad_233[0x5]; // 0x233 - 0x238
   CPerParticleVecInput m_vecLocalOffset; // 0x238 - 0x890
   CPerParticleVecInput m_vecLocalRotation; // 0x890 - 0xEE8
   bool m_bIgnoreRadius; // 0xEE8 - 0xEE9
   unsigned char pad_EE9[0x3]; // 0xEE9 - 0xEEC
   int32_t m_nModelScaleCP; // 0xEEC - 0xEF0
   CPerParticleVecInput m_vecComponentScale; // 0xEF0 - 0x1548
   bool m_bLocalScale; // 0x1548 - 0x1549
   unsigned char pad_1549[0x3]; // 0x1549 - 0x154C
   int32_t m_nSizeCullBloat; // 0x154C - 0x1550
   bool m_bAnimated; // 0x1550 - 0x1551
   unsigned char pad_1551[0x7]; // 0x1551 - 0x1558
   CPerParticleFloatInput m_flAnimationRate; // 0x1558 - 0x16B0
   bool m_bScaleAnimationRate; // 0x16B0 - 0x16B1
   bool m_bForceLoopingAnimation; // 0x16B1 - 0x16B2
   bool m_bResetAnimOnStop; // 0x16B2 - 0x16B3
   bool m_bManualAnimFrame; // 0x16B3 - 0x16B4
   ParticleAttributeIndex_t m_nAnimationScaleField; // 0x16B4 - 0x16B8
   ParticleAttributeIndex_t m_nAnimationField; // 0x16B8 - 0x16BC
   ParticleAttributeIndex_t m_nManualFrameField; // 0x16BC - 0x16C0
   char m_ActivityName[256]; // 0x16C0 - 0x17C0
   char m_SequenceName[256]; // 0x17C0 - 0x18C0
   bool m_bEnableClothSimulation; // 0x18C0 - 0x18C1
   char m_ClothEffectName[64]; // 0x18C1 - 0x1901
   unsigned char pad_1901[0x7]; // 0x1901 - 0x1908
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x1908 - 0x1910
   bool m_bOverrideTranslucentMaterials; // 0x1910 - 0x1911
   unsigned char pad_1911[0x7]; // 0x1911 - 0x1918
   CPerParticleFloatInput m_nSkin; // 0x1918 - 0x1A70
   CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x1A70 - 0x1A88
   CPerParticleFloatInput m_flManualModelSelection; // 0x1A88 - 0x1BE0
   CParticleModelInput m_modelInput; // 0x1BE0 - 0x1C40
   int32_t m_nLOD; // 0x1C40 - 0x1C44
   char m_EconSlotName[256]; // 0x1C44 - 0x1D44
   bool m_bOriginalModel; // 0x1D44 - 0x1D45
   bool m_bSuppressTint; // 0x1D45 - 0x1D46
   unsigned char pad_1D46[0x2]; // 0x1D46 - 0x1D48
   RenderModelSubModelFieldType_t m_nSubModelFieldType; // 0x1D48 - 0x1D4C
   bool m_bDisableShadows; // 0x1D4C - 0x1D4D
   bool m_bDisableDepthPrepass; // 0x1D4D - 0x1D4E
   bool m_bAcceptsDecals; // 0x1D4E - 0x1D4F
   bool m_bForceDrawInterlevedWithSiblings; // 0x1D4F - 0x1D50
   bool m_bDoNotDrawInParticlePass; // 0x1D50 - 0x1D51
   bool m_bAllowApproximateTransforms; // 0x1D51 - 0x1D52
   char m_szRenderAttribute[260]; // 0x1D52 - 0x1E56
   unsigned char pad_1E56[0x2]; // 0x1E56 - 0x1E58
   CParticleCollectionFloatInput m_flRadiusScale; // 0x1E58 - 0x1FB0
   CParticleCollectionFloatInput m_flAlphaScale; // 0x1FB0 - 0x2108
   CParticleCollectionFloatInput m_flRollScale; // 0x2108 - 0x2260
   ParticleAttributeIndex_t m_nAlpha2Field; // 0x2260 - 0x2264
   unsigned char pad_2264[0x4]; // 0x2264 - 0x2268
   CParticleCollectionVecInput m_vecColorScale; // 0x2268 - 0x28C0
   ParticleColorBlendType_t m_nColorBlendType; // 0x28C0 - 0x28C4
   unsigned char pad_28C4[0x3C]; // 0x28C4 - 0x2900
}; // size - 0x2900


class C_OP_RenderOmni2Light /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x208 - 0x20C
   unsigned char pad_20C[0x4]; // 0x20C - 0x210
   CParticleCollectionVecInput m_vColorBlend; // 0x210 - 0x868
   ParticleColorBlendType_t m_nColorBlendType; // 0x868 - 0x86C
   ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x86C - 0x870
   CPerParticleFloatInput m_flBrightnessLumens; // 0x870 - 0x9C8
   CPerParticleFloatInput m_flBrightnessCandelas; // 0x9C8 - 0xB20
   bool m_bCastShadows; // 0xB20 - 0xB21
   unsigned char pad_B21[0x7]; // 0xB21 - 0xB28
   CPerParticleFloatInput m_flLuminaireRadius; // 0xB28 - 0xC80
   CPerParticleFloatInput m_flSkirt; // 0xC80 - 0xDD8
   CPerParticleFloatInput m_flRange; // 0xDD8 - 0xF30
   CPerParticleFloatInput m_flInnerConeAngle; // 0xF30 - 0x1088
   CPerParticleFloatInput m_flOuterConeAngle; // 0x1088 - 0x11E0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x11E0 - 0x11E8
   bool m_bSphericalCookie; // 0x11E8 - 0x11E9
   unsigned char pad_11E9[0xF]; // 0x11E9 - 0x11F8
}; // size - 0x11F8


class C_OP_RenderPostProcessing /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CPerParticleFloatInput m_flPostProcessStrength; // 0x208 - 0x360
   CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x360 - 0x368
   ParticlePostProcessPriorityGroup_t m_nPriority; // 0x368 - 0x36C
   unsigned char pad_36C[0x4]; // 0x36C - 0x370
}; // size - 0x370


class C_OP_RenderProjected /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   bool m_bProjectCharacter; // 0x208 - 0x209
   bool m_bProjectWorld; // 0x209 - 0x20A
   bool m_bProjectWater; // 0x20A - 0x20B
   bool m_bFlipHorizontal; // 0x20B - 0x20C
   bool m_bEnableProjectedDepthControls; // 0x20C - 0x20D
   unsigned char pad_20D[0x3]; // 0x20D - 0x210
   float m_flMinProjectionDepth; // 0x210 - 0x214
   float m_flMaxProjectionDepth; // 0x214 - 0x218
   CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials; // 0x218 - 0x230
   CPerParticleFloatInput m_flMaterialSelection; // 0x230 - 0x388
   float m_flAnimationTimeScale; // 0x388 - 0x38C
   bool m_bOrientToNormal; // 0x38C - 0x38D
   unsigned char pad_38D[0x3]; // 0x38D - 0x390
   CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x390 - 0x3A8
   CParticleCollectionFloatInput m_flRadiusScale; // 0x3A8 - 0x500
   CParticleCollectionFloatInput m_flAlphaScale; // 0x500 - 0x658
   CParticleCollectionFloatInput m_flRollScale; // 0x658 - 0x7B0
   ParticleAttributeIndex_t m_nAlpha2Field; // 0x7B0 - 0x7B4
   unsigned char pad_7B4[0x4]; // 0x7B4 - 0x7B8
   CParticleCollectionVecInput m_vecColorScale; // 0x7B8 - 0xE10
   ParticleColorBlendType_t m_nColorBlendType; // 0xE10 - 0xE14
   unsigned char pad_E14[0x1C]; // 0xE14 - 0xE30
}; // size - 0xE30


class C_OP_RenderRopes /* "particles" */ : public CBaseRendererSource2 /* "particles" */
{
public:
   bool m_bEnableFadingAndClamping; // 0x2718 - 0x2719
   unsigned char pad_2719[0x3]; // 0x2719 - 0x271C
   float m_flMinSize; // 0x271C - 0x2720
   float m_flMaxSize; // 0x2720 - 0x2724
   float m_flStartFadeSize; // 0x2724 - 0x2728
   float m_flEndFadeSize; // 0x2728 - 0x272C
   float m_flStartFadeDot; // 0x272C - 0x2730
   float m_flEndFadeDot; // 0x2730 - 0x2734
   float m_flRadiusTaper; // 0x2734 - 0x2738
   int32_t m_nMinTesselation; // 0x2738 - 0x273C
   int32_t m_nMaxTesselation; // 0x273C - 0x2740
   float m_flTessScale; // 0x2740 - 0x2744
   unsigned char pad_2744[0x4]; // 0x2744 - 0x2748
   CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x2748 - 0x28A0
   CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x28A0 - 0x29F8
   CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x29F8 - 0x2B50
   int32_t m_nTextureVParamsCP; // 0x2B50 - 0x2B54
   bool m_bClampV; // 0x2B54 - 0x2B55
   unsigned char pad_2B55[0x3]; // 0x2B55 - 0x2B58
   int32_t m_nScaleCP1; // 0x2B58 - 0x2B5C
   int32_t m_nScaleCP2; // 0x2B5C - 0x2B60
   float m_flScaleVSizeByControlPointDistance; // 0x2B60 - 0x2B64
   float m_flScaleVScrollByControlPointDistance; // 0x2B64 - 0x2B68
   float m_flScaleVOffsetByControlPointDistance; // 0x2B68 - 0x2B6C
   unsigned char pad_2B6C[0x1]; // 0x2B6C - 0x2B6D
   bool m_bUseScalarForTextureCoordinate; // 0x2B6D - 0x2B6E
   unsigned char pad_2B6E[0x2]; // 0x2B6E - 0x2B70
   ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2B70 - 0x2B74
   float m_flScalarAttributeTextureCoordScale; // 0x2B74 - 0x2B78
   bool m_bReverseOrder; // 0x2B78 - 0x2B79
   bool m_bClosedLoop; // 0x2B79 - 0x2B7A
   unsigned char pad_2B7A[0x2]; // 0x2B7A - 0x2B7C
   ParticleOrientationChoiceList_t m_nOrientationType; // 0x2B7C - 0x2B80
   ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2B80 - 0x2B84
   bool m_bDrawAsOpaque; // 0x2B84 - 0x2B85
   bool m_bGenerateNormals; // 0x2B85 - 0x2B86
   unsigned char pad_2B86[0x2]; // 0x2B86 - 0x2B88
}; // size - 0x2B88


class C_OP_RenderScreenShake /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flDurationScale; // 0x208 - 0x20C
   float m_flRadiusScale; // 0x20C - 0x210
   float m_flFrequencyScale; // 0x210 - 0x214
   float m_flAmplitudeScale; // 0x214 - 0x218
   ParticleAttributeIndex_t m_nRadiusField; // 0x218 - 0x21C
   ParticleAttributeIndex_t m_nDurationField; // 0x21C - 0x220
   ParticleAttributeIndex_t m_nFrequencyField; // 0x220 - 0x224
   ParticleAttributeIndex_t m_nAmplitudeField; // 0x224 - 0x228
   int32_t m_nFilterCP; // 0x228 - 0x22C
   unsigned char pad_22C[0x4]; // 0x22C - 0x230
}; // size - 0x230


class C_OP_RenderScreenVelocityRotate /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flRotateRateDegrees; // 0x208 - 0x20C
   float m_flForwardDegrees; // 0x20C - 0x210
}; // size - 0x210


class C_OP_RenderSimpleModelCollection /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   bool m_bCenterOffset; // 0x208 - 0x209
   unsigned char pad_209[0x7]; // 0x209 - 0x210
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x210 - 0x218
   CParticleModelInput m_modelInput; // 0x218 - 0x278
   int32_t m_nLOD; // 0x278 - 0x27C
   bool m_bDisableShadows; // 0x27C - 0x27D
   bool m_bDisableMotionBlur; // 0x27D - 0x27E
   bool m_bAcceptsDecals; // 0x27E - 0x27F
   unsigned char pad_27F[0x1]; // 0x27F - 0x280
   ParticleAttributeIndex_t m_nAngularVelocityField; // 0x280 - 0x284
   unsigned char pad_284[0x14]; // 0x284 - 0x298
}; // size - 0x298


class C_OP_RenderSound /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flDurationScale; // 0x208 - 0x20C
   float m_flSndLvlScale; // 0x20C - 0x210
   float m_flPitchScale; // 0x210 - 0x214
   float m_flVolumeScale; // 0x214 - 0x218
   ParticleAttributeIndex_t m_nSndLvlField; // 0x218 - 0x21C
   ParticleAttributeIndex_t m_nDurationField; // 0x21C - 0x220
   ParticleAttributeIndex_t m_nPitchField; // 0x220 - 0x224
   ParticleAttributeIndex_t m_nVolumeField; // 0x224 - 0x228
   int32_t m_nChannel; // 0x228 - 0x22C
   int32_t m_nCPReference; // 0x22C - 0x230
   char m_pszSoundName[256]; // 0x230 - 0x330
   bool m_bSuppressStopSoundEvent; // 0x330 - 0x331
   unsigned char pad_331[0x7]; // 0x331 - 0x338
}; // size - 0x338


class C_OP_RenderSprites /* "particles" */ : public CBaseRendererSource2 /* "particles" */
{
public:
   CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x2718 - 0x2870
   ParticleOrientationChoiceList_t m_nOrientationType; // 0x2870 - 0x2874
   int32_t m_nOrientationControlPoint; // 0x2874 - 0x2878
   bool m_bUseYawWithNormalAligned; // 0x2878 - 0x2879
   unsigned char pad_2879[0x7]; // 0x2879 - 0x2880
   CParticleCollectionRendererFloatInput m_flMinSize; // 0x2880 - 0x29D8
   CParticleCollectionRendererFloatInput m_flMaxSize; // 0x29D8 - 0x2B30
   CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust; // 0x2B30 - 0x2C88
   CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2C88 - 0x2DE0
   CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2DE0 - 0x2F38
   float m_flStartFadeDot; // 0x2F38 - 0x2F3C
   float m_flEndFadeDot; // 0x2F3C - 0x2F40
   bool m_bDistanceAlpha; // 0x2F40 - 0x2F41
   bool m_bSoftEdges; // 0x2F41 - 0x2F42
   unsigned char pad_2F42[0x2]; // 0x2F42 - 0x2F44
   float m_flEdgeSoftnessStart; // 0x2F44 - 0x2F48
   float m_flEdgeSoftnessEnd; // 0x2F48 - 0x2F4C
   bool m_bOutline; // 0x2F4C - 0x2F4D
   Color m_OutlineColor; // 0x2F4D - 0x2F51
   unsigned char pad_2F51[0x3]; // 0x2F51 - 0x2F54
   int32_t m_nOutlineAlpha; // 0x2F54 - 0x2F58
   float m_flOutlineStart0; // 0x2F58 - 0x2F5C
   float m_flOutlineStart1; // 0x2F5C - 0x2F60
   float m_flOutlineEnd0; // 0x2F60 - 0x2F64
   float m_flOutlineEnd1; // 0x2F64 - 0x2F68
   ParticleLightingQuality_t m_nLightingMode; // 0x2F68 - 0x2F6C
   unsigned char pad_2F6C[0x4]; // 0x2F6C - 0x2F70
   CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x2F70 - 0x30C8
   CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x30C8 - 0x3220
   bool m_bParticleShadows; // 0x3220 - 0x3221
   unsigned char pad_3221[0x3]; // 0x3221 - 0x3224
   float m_flShadowDensity; // 0x3224 - 0x3228
   CReplicationParameters m_replicationParameters; // 0x3228 - 0x42E8
   unsigned char pad_42E8[0x8]; // 0x42E8 - 0x42F0
}; // size - 0x42F0


class C_OP_RenderStandardLight /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   ParticleLightTypeChoiceList_t m_nLightType; // 0x208 - 0x20C
   unsigned char pad_20C[0x4]; // 0x20C - 0x210
   CParticleCollectionVecInput m_vecColorScale; // 0x210 - 0x868
   ParticleColorBlendType_t m_nColorBlendType; // 0x868 - 0x86C
   unsigned char pad_86C[0x4]; // 0x86C - 0x870
   CParticleCollectionFloatInput m_flIntensity; // 0x870 - 0x9C8
   bool m_bCastShadows; // 0x9C8 - 0x9C9
   unsigned char pad_9C9[0x7]; // 0x9C9 - 0x9D0
   CParticleCollectionFloatInput m_flTheta; // 0x9D0 - 0xB28
   CParticleCollectionFloatInput m_flPhi; // 0xB28 - 0xC80
   CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xC80 - 0xDD8
   StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xDD8 - 0xDDC
   unsigned char pad_DDC[0x4]; // 0xDDC - 0xDE0
   CParticleCollectionFloatInput m_flFalloffLinearity; // 0xDE0 - 0xF38
   CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xF38 - 0x1090
   CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0x1090 - 0x11E8
   bool m_bRenderDiffuse; // 0x11E8 - 0x11E9
   bool m_bRenderSpecular; // 0x11E9 - 0x11EA
   unsigned char pad_11EA[0x6]; // 0x11EA - 0x11F0
   CUtlString m_lightCookie; // 0x11F0 - 0x11F8
   int32_t m_nPriority; // 0x11F8 - 0x11FC
   ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x11FC - 0x1200
   CParticleCollectionRendererFloatInput m_flFogContribution; // 0x1200 - 0x1358
   ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x1358 - 0x135C
   float m_flCapsuleLength; // 0x135C - 0x1360
   bool m_bReverseOrder; // 0x1360 - 0x1361
   bool m_bClosedLoop; // 0x1361 - 0x1362
   unsigned char pad_1362[0x2]; // 0x1362 - 0x1364
   ParticleAttributeIndex_t m_nPrevPntSource; // 0x1364 - 0x1368
   float m_flMaxLength; // 0x1368 - 0x136C
   float m_flMinLength; // 0x136C - 0x1370
   bool m_bIgnoreDT; // 0x1370 - 0x1371
   unsigned char pad_1371[0x3]; // 0x1371 - 0x1374
   float m_flConstrainRadiusToLengthRatio; // 0x1374 - 0x1378
   float m_flLengthScale; // 0x1378 - 0x137C
   float m_flLengthFadeInTime; // 0x137C - 0x1380
   unsigned char pad_1380[0x8]; // 0x1380 - 0x1388
}; // size - 0x1388


class C_OP_RenderStatusEffect /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x208 - 0x210
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // 0x210 - 0x218
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // 0x218 - 0x220
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // 0x220 - 0x228
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // 0x228 - 0x230
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // 0x230 - 0x238
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // 0x238 - 0x240
}; // size - 0x240


class C_OP_RenderStatusEffectCitadel /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x208 - 0x210
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal; // 0x210 - 0x218
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness; // 0x218 - 0x220
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness; // 0x220 - 0x228
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum; // 0x228 - 0x230
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail; // 0x230 - 0x238
}; // size - 0x238


class C_OP_RenderText /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   Color m_OutlineColor; // 0x208 - 0x20C
   unsigned char pad_20C[0x4]; // 0x20C - 0x210
   CUtlString m_DefaultText; // 0x210 - 0x218
}; // size - 0x218


class C_OP_RenderTonemapController /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flTonemapLevel; // 0x208 - 0x20C
   float m_flTonemapWeight; // 0x20C - 0x210
   ParticleAttributeIndex_t m_nTonemapLevelField; // 0x210 - 0x214
   ParticleAttributeIndex_t m_nTonemapWeightField; // 0x214 - 0x218
}; // size - 0x218


class C_OP_RenderTrails /* "particles" */ : public CBaseTrailRenderer /* "particles" */
{
public:
   bool m_bEnableFadingAndClamping; // 0x29E0 - 0x29E1
   unsigned char pad_29E1[0x3]; // 0x29E1 - 0x29E4
   float m_flStartFadeDot; // 0x29E4 - 0x29E8
   float m_flEndFadeDot; // 0x29E8 - 0x29EC
   ParticleAttributeIndex_t m_nPrevPntSource; // 0x29EC - 0x29F0
   float m_flMaxLength; // 0x29F0 - 0x29F4
   float m_flMinLength; // 0x29F4 - 0x29F8
   bool m_bIgnoreDT; // 0x29F8 - 0x29F9
   unsigned char pad_29F9[0x3]; // 0x29F9 - 0x29FC
   float m_flConstrainRadiusToLengthRatio; // 0x29FC - 0x2A00
   float m_flLengthScale; // 0x2A00 - 0x2A04
   float m_flLengthFadeInTime; // 0x2A04 - 0x2A08
   CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2A08 - 0x2B60
   CParticleCollectionVecInput m_vecHeadColorScale; // 0x2B60 - 0x31B8
   CPerParticleFloatInput m_flHeadAlphaScale; // 0x31B8 - 0x3310
   CPerParticleFloatInput m_flRadiusTaper; // 0x3310 - 0x3468
   CParticleCollectionVecInput m_vecTailColorScale; // 0x3468 - 0x3AC0
   CPerParticleFloatInput m_flTailAlphaScale; // 0x3AC0 - 0x3C18
   ParticleAttributeIndex_t m_nHorizCropField; // 0x3C18 - 0x3C1C
   ParticleAttributeIndex_t m_nVertCropField; // 0x3C1C - 0x3C20
   float m_flForwardShift; // 0x3C20 - 0x3C24
   bool m_bFlipUVBasedOnPitchYaw; // 0x3C24 - 0x3C25
   unsigned char pad_3C25[0x3]; // 0x3C25 - 0x3C28
}; // size - 0x3C28


class C_OP_RenderTreeShake /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flPeakStrength; // 0x208 - 0x20C
   ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x20C - 0x210
   float m_flRadius; // 0x210 - 0x214
   ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x214 - 0x218
   float m_flShakeDuration; // 0x218 - 0x21C
   float m_flTransitionTime; // 0x21C - 0x220
   float m_flTwistAmount; // 0x220 - 0x224
   float m_flRadialAmount; // 0x224 - 0x228
   float m_flControlPointOrientationAmount; // 0x228 - 0x22C
   int32_t m_nControlPointForLinearDirection; // 0x22C - 0x230
}; // size - 0x230


class C_OP_RenderVRHapticEvent /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   ParticleVRHandChoiceList_t m_nHand; // 0x208 - 0x20C
   int32_t m_nOutputHandCP; // 0x20C - 0x210
   int32_t m_nOutputField; // 0x210 - 0x214
   unsigned char pad_214[0x4]; // 0x214 - 0x218
   CPerParticleFloatInput m_flAmplitude; // 0x218 - 0x370
}; // size - 0x370


class C_OP_RepeatedTriggerChildGroup /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flClusterRefireTime; // 0x1C8 - 0x320
   CParticleCollectionFloatInput m_flClusterSize; // 0x320 - 0x478
   CParticleCollectionFloatInput m_flClusterCooldown; // 0x478 - 0x5D0
   bool m_bLimitChildCount; // 0x5D0 - 0x5D1
   unsigned char pad_5D1[0x7]; // 0x5D1 - 0x5D8
}; // size - 0x5D8


class C_OP_RestartAfterDuration /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flDurationMin; // 0x1B8 - 0x1BC
   float m_flDurationMax; // 0x1BC - 0x1C0
   int32_t m_nCP; // 0x1C0 - 0x1C4
   int32_t m_nCPField; // 0x1C4 - 0x1C8
   int32_t m_nChildGroupID; // 0x1C8 - 0x1CC
   bool m_bOnlyChildren; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
}; // size - 0x1D0


class C_OP_RopeSpringConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flRestLength; // 0x1B8 - 0x310
   CParticleCollectionFloatInput m_flMinDistance; // 0x310 - 0x468
   CParticleCollectionFloatInput m_flMaxDistance; // 0x468 - 0x5C0
   float m_flAdjustmentScale; // 0x5C0 - 0x5C4
   unsigned char pad_5C4[0x4]; // 0x5C4 - 0x5C8
   CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5C8 - 0x720
}; // size - 0x720


class C_OP_RotateVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   Vector m_vecRotAxisMin; // 0x1BC - 0x1C8
   Vector m_vecRotAxisMax; // 0x1C8 - 0x1D4
   float m_flRotRateMin; // 0x1D4 - 0x1D8
   float m_flRotRateMax; // 0x1D8 - 0x1DC
   bool m_bNormalize; // 0x1DC - 0x1DD
   unsigned char pad_1DD[0x3]; // 0x1DD - 0x1E0
   CPerParticleFloatInput m_flScale; // 0x1E0 - 0x338
}; // size - 0x338


class C_OP_RtEnvCull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_vecTestDir; // 0x1B8 - 0x1C4
   Vector m_vecTestNormal; // 0x1C4 - 0x1D0
   bool m_bCullOnMiss; // 0x1D0 - 0x1D1
   bool m_bStickInsteadOfCull; // 0x1D1 - 0x1D2
   char m_RtEnvName[128]; // 0x1D2 - 0x252
   unsigned char pad_252[0x2]; // 0x252 - 0x254
   int32_t m_nRTEnvCP; // 0x254 - 0x258
   int32_t m_nComponent; // 0x258 - 0x25C
   unsigned char pad_25C[0x4]; // 0x25C - 0x260
}; // size - 0x260


class C_OP_SDFConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flMinDist; // 0x1B8 - 0x310
   CParticleCollectionFloatInput m_flMaxDist; // 0x310 - 0x468
   int32_t m_nMaxIterations; // 0x468 - 0x46C
   unsigned char pad_46C[0x4]; // 0x46C - 0x470
}; // size - 0x470


class C_OP_SDFForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flForceScale; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_SDFLighting /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_vLightingDir; // 0x1B8 - 0x1C4
   Vector m_vTint_0; // 0x1C4 - 0x1D0
   Vector m_vTint_1; // 0x1D0 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_SelectivelyEnableChildren /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleCollectionFloatInput m_nChildGroupID; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_nFirstChild; // 0x318 - 0x470
   CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x470 - 0x5C8
   bool m_bPlayEndcapOnStop; // 0x5C8 - 0x5C9
   bool m_bDestroyImmediately; // 0x5C9 - 0x5CA
   unsigned char pad_5CA[0x6]; // 0x5CA - 0x5D0
}; // size - 0x5D0


class C_OP_SequenceFromModel /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
   ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1C0 - 0x1C4
   float m_flInputMin; // 0x1C4 - 0x1C8
   float m_flInputMax; // 0x1C8 - 0x1CC
   float m_flOutputMin; // 0x1CC - 0x1D0
   float m_flOutputMax; // 0x1D0 - 0x1D4
   ParticleSetMethod_t m_nSetMethod; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_SetAttributeToScalarExpression /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ScalarExpressionType_t m_nExpression; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleFloatInput m_flInput1; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flInput2; // 0x318 - 0x470
   CParticleRemapFloatInput m_flOutputRemap; // 0x470 - 0x5C8
   ParticleAttributeIndex_t m_nOutputField; // 0x5C8 - 0x5CC
   ParticleSetMethod_t m_nSetMethod; // 0x5CC - 0x5D0
   unsigned char pad_5D0[0x20]; // 0x5D0 - 0x5F0
}; // size - 0x5F0


class C_OP_SetCPOrientationToDirection /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nInputControlPoint; // 0x1B8 - 0x1BC
   int32_t m_nOutputControlPoint; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_SetCPOrientationToGroundNormal /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flInterpRate; // 0x1B8 - 0x1BC
   float m_flMaxTraceLength; // 0x1BC - 0x1C0
   float m_flTolerance; // 0x1C0 - 0x1C4
   float m_flTraceOffset; // 0x1C4 - 0x1C8
   char m_CollisionGroupName[128]; // 0x1C8 - 0x248
   ParticleTraceSet_t m_nTraceSet; // 0x248 - 0x24C
   int32_t m_nInputCP; // 0x24C - 0x250
   int32_t m_nOutputCP; // 0x250 - 0x254
   unsigned char pad_254[0xC]; // 0x254 - 0x260
   bool m_bIncludeWater; // 0x260 - 0x261
   unsigned char pad_261[0x7]; // 0x261 - 0x268
}; // size - 0x268


class C_OP_SetCPOrientationToPointAtCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInputCP; // 0x1C0 - 0x1C4
   int32_t m_nOutputCP; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flInterpolation; // 0x1C8 - 0x320
   bool m_b2DOrientation; // 0x320 - 0x321
   bool m_bAvoidSingularity; // 0x321 - 0x322
   bool m_bPointAway; // 0x322 - 0x323
   unsigned char pad_323[0x5]; // 0x323 - 0x328
}; // size - 0x328


class C_OP_SetCPtoVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_SetChildControlPoints /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1B8 - 0x1BC
   int32_t m_nFirstControlPoint; // 0x1BC - 0x1C0
   int32_t m_nNumControlPoints; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x1C8 - 0x320
   bool m_bReverse; // 0x320 - 0x321
   bool m_bSetOrientation; // 0x321 - 0x322
   unsigned char pad_322[0x6]; // 0x322 - 0x328
}; // size - 0x328


class C_OP_SetControlPointFieldFromVectorExpression /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   VectorFloatExpressionType_t m_nExpression; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionVecInput m_vecInput1; // 0x1C8 - 0x820
   CParticleCollectionVecInput m_vecInput2; // 0x820 - 0xE78
   CParticleRemapFloatInput m_flOutputRemap; // 0xE78 - 0xFD0
   int32_t m_nOutputCP; // 0xFD0 - 0xFD4
   int32_t m_nOutVectorField; // 0xFD4 - 0xFD8
}; // size - 0xFD8


class C_OP_SetControlPointFieldToScalarExpression /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   ScalarExpressionType_t m_nExpression; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flInput1; // 0x1C8 - 0x320
   CParticleCollectionFloatInput m_flInput2; // 0x320 - 0x478
   CParticleRemapFloatInput m_flOutputRemap; // 0x478 - 0x5D0
   int32_t m_nOutputCP; // 0x5D0 - 0x5D4
   int32_t m_nOutVectorField; // 0x5D4 - 0x5D8
}; // size - 0x5D8


class C_OP_SetControlPointFieldToWater /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nSourceCP; // 0x1C0 - 0x1C4
   int32_t m_nDestCP; // 0x1C4 - 0x1C8
   int32_t m_nCPField; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_SetControlPointFromObjectScale /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1C0 - 0x1C4
   int32_t m_nCPOutput; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_SetControlPointOrientation /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bUseWorldLocation; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0x1]; // 0x1C1 - 0x1C2
   bool m_bRandomize; // 0x1C2 - 0x1C3
   bool m_bSetOnce; // 0x1C3 - 0x1C4
   int32_t m_nCP; // 0x1C4 - 0x1C8
   int32_t m_nHeadLocation; // 0x1C8 - 0x1CC
   QAngle m_vecRotation; // 0x1CC - 0x1D8
   QAngle m_vecRotationB; // 0x1D8 - 0x1E4
   unsigned char pad_1E4[0x4]; // 0x1E4 - 0x1E8
   CParticleCollectionFloatInput m_flInterpolation; // 0x1E8 - 0x340
}; // size - 0x340


class C_OP_SetControlPointOrientationToCPVelocity /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1C0 - 0x1C4
   int32_t m_nCPOutput; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_SetControlPointPositionToRandomActiveCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1C0 - 0x1C4
   int32_t m_nHeadLocationMin; // 0x1C4 - 0x1C8
   int32_t m_nHeadLocationMax; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CParticleCollectionFloatInput m_flResetRate; // 0x1D0 - 0x328
}; // size - 0x328


class C_OP_SetControlPointPositionToTimeOfDayValue /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   char m_pszTimeOfDayParameter[128]; // 0x1C4 - 0x244
   Vector m_vecDefaultValue; // 0x244 - 0x250
   unsigned char pad_250[0x8]; // 0x250 - 0x258
}; // size - 0x258


class C_OP_SetControlPointPositions /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bUseWorldLocation; // 0x1C0 - 0x1C1
   bool m_bOrient; // 0x1C1 - 0x1C2
   bool m_bSetOnce; // 0x1C2 - 0x1C3
   unsigned char pad_1C3[0x1]; // 0x1C3 - 0x1C4
   int32_t m_nCP1; // 0x1C4 - 0x1C8
   int32_t m_nCP2; // 0x1C8 - 0x1CC
   int32_t m_nCP3; // 0x1CC - 0x1D0
   int32_t m_nCP4; // 0x1D0 - 0x1D4
   Vector m_vecCP1Pos; // 0x1D4 - 0x1E0
   Vector m_vecCP2Pos; // 0x1E0 - 0x1EC
   Vector m_vecCP3Pos; // 0x1EC - 0x1F8
   Vector m_vecCP4Pos; // 0x1F8 - 0x204
   int32_t m_nHeadLocation; // 0x204 - 0x208
}; // size - 0x208


class C_OP_SetControlPointRotation /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleCollectionVecInput m_vecRotAxis; // 0x1C0 - 0x818
   CParticleCollectionFloatInput m_flRotRate; // 0x818 - 0x970
   int32_t m_nCP; // 0x970 - 0x974
   int32_t m_nLocalCP; // 0x974 - 0x978
}; // size - 0x978


class C_OP_SetControlPointToCPVelocity /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1C0 - 0x1C4
   int32_t m_nCPOutputVel; // 0x1C4 - 0x1C8
   bool m_bNormalize; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   int32_t m_nCPOutputMag; // 0x1CC - 0x1D0
   int32_t m_nCPField; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
   CParticleCollectionVecInput m_vecComparisonVelocity; // 0x1D8 - 0x830
}; // size - 0x830


class C_OP_SetControlPointToCenter /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1C0 - 0x1C4
   Vector m_vecCP1Pos; // 0x1C4 - 0x1D0
   ParticleParentSetMode_t m_nSetParent; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_SetControlPointToHMD /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1C0 - 0x1C4
   Vector m_vecCP1Pos; // 0x1C4 - 0x1D0
   bool m_bOrientToHMD; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x7]; // 0x1D1 - 0x1D8
}; // size - 0x1D8


class C_OP_SetControlPointToHand /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1C0 - 0x1C4
   int32_t m_nHand; // 0x1C4 - 0x1C8
   Vector m_vecCP1Pos; // 0x1C8 - 0x1D4
   bool m_bOrientToHand; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0x3]; // 0x1D5 - 0x1D8
}; // size - 0x1D8


class C_OP_SetControlPointToImpactPoint /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPOut; // 0x1C0 - 0x1C4
   int32_t m_nCPIn; // 0x1C4 - 0x1C8
   float m_flUpdateRate; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CParticleCollectionFloatInput m_flTraceLength; // 0x1D0 - 0x328
   float m_flStartOffset; // 0x328 - 0x32C
   float m_flOffset; // 0x32C - 0x330
   Vector m_vecTraceDir; // 0x330 - 0x33C
   char m_CollisionGroupName[128]; // 0x33C - 0x3BC
   ParticleTraceSet_t m_nTraceSet; // 0x3BC - 0x3C0
   bool m_bSetToEndpoint; // 0x3C0 - 0x3C1
   bool m_bTraceToClosestSurface; // 0x3C1 - 0x3C2
   bool m_bIncludeWater; // 0x3C2 - 0x3C3
   unsigned char pad_3C3[0x5]; // 0x3C3 - 0x3C8
}; // size - 0x3C8


class C_OP_SetControlPointToPlayer /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1C0 - 0x1C4
   Vector m_vecCP1Pos; // 0x1C4 - 0x1D0
   bool m_bOrientToEyes; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x7]; // 0x1D1 - 0x1D8
}; // size - 0x1D8


class C_OP_SetControlPointToVectorExpression /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   VectorExpressionType_t m_nExpression; // 0x1C0 - 0x1C4
   int32_t m_nOutputCP; // 0x1C4 - 0x1C8
   CParticleCollectionVecInput m_vInput1; // 0x1C8 - 0x820
   CParticleCollectionVecInput m_vInput2; // 0x820 - 0xE78
   bool m_bNormalizedOutput; // 0xE78 - 0xE79
   unsigned char pad_E79[0x7]; // 0xE79 - 0xE80
}; // size - 0xE80


class C_OP_SetControlPointToWaterSurface /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nSourceCP; // 0x1C0 - 0x1C4
   int32_t m_nDestCP; // 0x1C4 - 0x1C8
   int32_t m_nFlowCP; // 0x1C8 - 0x1CC
   int32_t m_nActiveCP; // 0x1CC - 0x1D0
   int32_t m_nActiveCPField; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
   CParticleCollectionFloatInput m_flRetestRate; // 0x1D8 - 0x330
   bool m_bAdaptiveThreshold; // 0x330 - 0x331
   unsigned char pad_331[0x7]; // 0x331 - 0x338
}; // size - 0x338


class C_OP_SetControlPointsToModelParticles /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   char m_HitboxSetName[128]; // 0x1B8 - 0x238
   char m_AttachmentName[128]; // 0x238 - 0x2B8
   int32_t m_nFirstControlPoint; // 0x2B8 - 0x2BC
   int32_t m_nNumControlPoints; // 0x2BC - 0x2C0
   int32_t m_nFirstSourcePoint; // 0x2C0 - 0x2C4
   bool m_bSkin; // 0x2C4 - 0x2C5
   bool m_bAttachment; // 0x2C5 - 0x2C6
   unsigned char pad_2C6[0x2]; // 0x2C6 - 0x2C8
}; // size - 0x2C8


class C_OP_SetControlPointsToParticle /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1B8 - 0x1BC
   int32_t m_nFirstControlPoint; // 0x1BC - 0x1C0
   int32_t m_nNumControlPoints; // 0x1C0 - 0x1C4
   int32_t m_nFirstSourcePoint; // 0x1C4 - 0x1C8
   bool m_bSetOrientation; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   ParticleOrientationSetMode_t m_nOrientationMode; // 0x1CC - 0x1D0
   ParticleParentSetMode_t m_nSetParent; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_SetFloat /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_InputValue; // 0x1B8 - 0x310
   ParticleAttributeIndex_t m_nOutputField; // 0x310 - 0x314
   ParticleSetMethod_t m_nSetMethod; // 0x314 - 0x318
   CPerParticleFloatInput m_Lerp; // 0x318 - 0x470
   unsigned char pad_470[0x20]; // 0x470 - 0x490
}; // size - 0x490


class C_OP_SetFloatAttributeToVectorExpression /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   VectorFloatExpressionType_t m_nExpression; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleVecInput m_vInput1; // 0x1C0 - 0x818
   CPerParticleVecInput m_vInput2; // 0x818 - 0xE70
   CParticleRemapFloatInput m_flOutputRemap; // 0xE70 - 0xFC8
   ParticleAttributeIndex_t m_nOutputField; // 0xFC8 - 0xFCC
   ParticleSetMethod_t m_nSetMethod; // 0xFCC - 0xFD0
}; // size - 0xFD0


class C_OP_SetFloatCollection /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_InputValue; // 0x1B8 - 0x310
   ParticleAttributeIndex_t m_nOutputField; // 0x310 - 0x314
   ParticleSetMethod_t m_nSetMethod; // 0x314 - 0x318
   CParticleCollectionFloatInput m_Lerp; // 0x318 - 0x470
   unsigned char pad_470[0x20]; // 0x470 - 0x490
}; // size - 0x490


class C_OP_SetFromCPSnapshot /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nAttributeToRead; // 0x1BC - 0x1C0
   ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1C0 - 0x1C4
   int32_t m_nLocalSpaceCP; // 0x1C4 - 0x1C8
   bool m_bRandom; // 0x1C8 - 0x1C9
   bool m_bReverse; // 0x1C9 - 0x1CA
   unsigned char pad_1CA[0x2]; // 0x1CA - 0x1CC
   int32_t m_nRandomSeed; // 0x1CC - 0x1D0
   CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x1D0 - 0x328
   CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x328 - 0x480
   CPerParticleFloatInput m_flInterpolation; // 0x480 - 0x5D8
   bool m_bSubSample; // 0x5D8 - 0x5D9
   bool m_bPrev; // 0x5D9 - 0x5DA
   unsigned char pad_5DA[0x6]; // 0x5DA - 0x5E0
}; // size - 0x5E0


class C_OP_SetGravityToCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1C0 - 0x1C4
   int32_t m_nCPOutput; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flScale; // 0x1C8 - 0x320
   bool m_bSetOrientation; // 0x320 - 0x321
   bool m_bSetZDown; // 0x321 - 0x322
   unsigned char pad_322[0x6]; // 0x322 - 0x328
}; // size - 0x328


class C_OP_SetParentControlPointsToChildCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1C0 - 0x1C4
   int32_t m_nChildControlPoint; // 0x1C4 - 0x1C8
   int32_t m_nNumControlPoints; // 0x1C8 - 0x1CC
   int32_t m_nFirstSourcePoint; // 0x1CC - 0x1D0
   bool m_bSetOrientation; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x7]; // 0x1D1 - 0x1D8
}; // size - 0x1D8


class C_OP_SetPerChildControlPoint /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1B8 - 0x1BC
   int32_t m_nFirstControlPoint; // 0x1BC - 0x1C0
   int32_t m_nNumControlPoints; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_nParticleIncrement; // 0x1C8 - 0x320
   CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x320 - 0x478
   bool m_bSetOrientation; // 0x478 - 0x479
   unsigned char pad_479[0x3]; // 0x479 - 0x47C
   ParticleAttributeIndex_t m_nOrientationField; // 0x47C - 0x480
   bool m_bNumBasedOnParticleCount; // 0x480 - 0x481
   unsigned char pad_481[0x7]; // 0x481 - 0x488
}; // size - 0x488


class C_OP_SetPerChildControlPointFromAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1B8 - 0x1BC
   int32_t m_nFirstControlPoint; // 0x1BC - 0x1C0
   int32_t m_nNumControlPoints; // 0x1C0 - 0x1C4
   int32_t m_nParticleIncrement; // 0x1C4 - 0x1C8
   int32_t m_nFirstSourcePoint; // 0x1C8 - 0x1CC
   bool m_bNumBasedOnParticleCount; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
   ParticleAttributeIndex_t m_nAttributeToRead; // 0x1D0 - 0x1D4
   int32_t m_nCPField; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_SetRandomControlPointPosition /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bUseWorldLocation; // 0x1C0 - 0x1C1
   bool m_bOrient; // 0x1C1 - 0x1C2
   unsigned char pad_1C2[0x2]; // 0x1C2 - 0x1C4
   int32_t m_nCP1; // 0x1C4 - 0x1C8
   int32_t m_nHeadLocation; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CParticleCollectionFloatInput m_flReRandomRate; // 0x1D0 - 0x328
   Vector m_vecCPMinPos; // 0x328 - 0x334
   Vector m_vecCPMaxPos; // 0x334 - 0x340
   CParticleCollectionFloatInput m_flInterpolation; // 0x340 - 0x498
}; // size - 0x498


class C_OP_SetSimulationRate /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flSimulationScale; // 0x1C0 - 0x318
}; // size - 0x318


class C_OP_SetSingleControlPointPosition /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bSetOnce; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0x3]; // 0x1C1 - 0x1C4
   int32_t m_nCP1; // 0x1C4 - 0x1C8
   CParticleCollectionVecInput m_vecCP1Pos; // 0x1C8 - 0x820
   CParticleTransformInput m_transformInput; // 0x820 - 0x888
}; // size - 0x888


class C_OP_SetToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   Vector m_vecOffset; // 0x1BC - 0x1C8
   bool m_bOffsetLocal; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x7]; // 0x1C9 - 0x1D0
}; // size - 0x1D0


class C_OP_SetUserEvent /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_flInput; // 0x1B8 - 0x310
   CPerParticleFloatInput m_flRisingEdge; // 0x310 - 0x468
   EventTypeSelection_t m_nRisingEventType; // 0x468 - 0x46C
   unsigned char pad_46C[0x4]; // 0x46C - 0x470
   CPerParticleFloatInput m_flFallingEdge; // 0x470 - 0x5C8
   EventTypeSelection_t m_nFallingEventType; // 0x5C8 - 0x5CC
   unsigned char pad_5CC[0x4]; // 0x5CC - 0x5D0
}; // size - 0x5D0


class C_OP_SetVariable /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleVariableRef m_variableReference; // 0x1C0 - 0x200
   CParticleTransformInput m_transformInput; // 0x200 - 0x268
   Vector m_positionOffset; // 0x268 - 0x274
   QAngle m_rotationOffset; // 0x274 - 0x280
   CParticleCollectionVecInput m_vecInput; // 0x280 - 0x8D8
   CParticleCollectionFloatInput m_floatInput; // 0x8D8 - 0xA30
}; // size - 0xA30


class C_OP_SetVec /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleVecInput m_InputValue; // 0x1B8 - 0x810
   ParticleAttributeIndex_t m_nOutputField; // 0x810 - 0x814
   ParticleSetMethod_t m_nSetMethod; // 0x814 - 0x818
   CPerParticleFloatInput m_Lerp; // 0x818 - 0x970
   bool m_bNormalizedOutput; // 0x970 - 0x971
   unsigned char pad_971[0x7]; // 0x971 - 0x978
}; // size - 0x978


class C_OP_SetVectorAttributeToVectorExpression /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   VectorExpressionType_t m_nExpression; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
   CPerParticleVecInput m_vInput1; // 0x1C0 - 0x818
   CPerParticleVecInput m_vInput2; // 0x818 - 0xE70
   ParticleAttributeIndex_t m_nOutputField; // 0xE70 - 0xE74
   ParticleSetMethod_t m_nSetMethod; // 0xE74 - 0xE78
   bool m_bNormalizedOutput; // 0xE78 - 0xE79
   unsigned char pad_E79[0x67]; // 0xE79 - 0xEE0
}; // size - 0xEE0


class C_OP_ShapeMatchingConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   float m_flShapeRestorationTime; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_SnapshotRigidSkinToBones /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bTransformNormals; // 0x1B8 - 0x1B9
   bool m_bTransformRadii; // 0x1B9 - 0x1BA
   unsigned char pad_1BA[0x2]; // 0x1BA - 0x1BC
   int32_t m_nControlPointNumber; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_SnapshotSkinToBones /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bTransformNormals; // 0x1B8 - 0x1B9
   bool m_bTransformRadii; // 0x1B9 - 0x1BA
   unsigned char pad_1BA[0x2]; // 0x1BA - 0x1BC
   int32_t m_nControlPointNumber; // 0x1BC - 0x1C0
   float m_flLifeTimeFadeStart; // 0x1C0 - 0x1C4
   float m_flLifeTimeFadeEnd; // 0x1C4 - 0x1C8
   float m_flJumpThreshold; // 0x1C8 - 0x1CC
   float m_flPrevPosScale; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_Spin /* "particles" */ : public CGeneralSpin /* "particles" */
{
public:
   unsigned char pad_0[0x1D0]; // 0x0 - 0x1D0
}; // size - 0x1D0


class C_OP_SpinUpdate /* "particles" */ : public CSpinUpdateBase /* "particles" */
{
public:
   unsigned char pad_0[0x1B8]; // 0x0 - 0x1B8
}; // size - 0x1B8


class C_OP_SpinYaw /* "particles" */ : public CGeneralSpin /* "particles" */
{
public:
   unsigned char pad_0[0x1D0]; // 0x0 - 0x1D0
}; // size - 0x1D0


class C_OP_SpringToVectorConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CPerParticleFloatInput m_flRestLength; // 0x1B8 - 0x310
   CPerParticleFloatInput m_flMinDistance; // 0x310 - 0x468
   CPerParticleFloatInput m_flMaxDistance; // 0x468 - 0x5C0
   CPerParticleFloatInput m_flRestingLength; // 0x5C0 - 0x718
   CPerParticleVecInput m_vecAnchorVector; // 0x718 - 0xD70
}; // size - 0xD70


class C_OP_StopAfterCPDuration /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flDuration; // 0x1C0 - 0x318
   bool m_bDestroyImmediately; // 0x318 - 0x319
   bool m_bPlayEndCap; // 0x319 - 0x31A
   unsigned char pad_31A[0x6]; // 0x31A - 0x320
}; // size - 0x320


class C_OP_TeleportBeam /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCPPosition; // 0x1B8 - 0x1BC
   int32_t m_nCPVelocity; // 0x1BC - 0x1C0
   int32_t m_nCPMisc; // 0x1C0 - 0x1C4
   int32_t m_nCPColor; // 0x1C4 - 0x1C8
   int32_t m_nCPInvalidColor; // 0x1C8 - 0x1CC
   int32_t m_nCPExtraArcData; // 0x1CC - 0x1D0
   Vector m_vGravity; // 0x1D0 - 0x1DC
   float m_flArcMaxDuration; // 0x1DC - 0x1E0
   float m_flSegmentBreak; // 0x1E0 - 0x1E4
   float m_flArcSpeed; // 0x1E4 - 0x1E8
   float m_flAlpha; // 0x1E8 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_OP_TimeVaryingForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flStartLerpTime; // 0x1C8 - 0x1CC
   Vector m_StartingForce; // 0x1CC - 0x1D8
   float m_flEndLerpTime; // 0x1D8 - 0x1DC
   Vector m_EndingForce; // 0x1DC - 0x1E8
}; // size - 0x1E8


class C_OP_TurbulenceForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flNoiseCoordScale0; // 0x1C8 - 0x1CC
   float m_flNoiseCoordScale1; // 0x1CC - 0x1D0
   float m_flNoiseCoordScale2; // 0x1D0 - 0x1D4
   float m_flNoiseCoordScale3; // 0x1D4 - 0x1D8
   Vector m_vecNoiseAmount0; // 0x1D8 - 0x1E4
   Vector m_vecNoiseAmount1; // 0x1E4 - 0x1F0
   Vector m_vecNoiseAmount2; // 0x1F0 - 0x1FC
   Vector m_vecNoiseAmount3; // 0x1FC - 0x208
}; // size - 0x208


class C_OP_TwistAroundAxis /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_fForceAmount; // 0x1C8 - 0x1CC
   Vector m_TwistAxis; // 0x1CC - 0x1D8
   bool m_bLocalSpace; // 0x1D8 - 0x1D9
   unsigned char pad_1D9[0x3]; // 0x1D9 - 0x1DC
   int32_t m_nControlPointNumber; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_UpdateLightSource /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Color m_vColorTint; // 0x1B8 - 0x1BC
   float m_flBrightnessScale; // 0x1BC - 0x1C0
   float m_flRadiusScale; // 0x1C0 - 0x1C4
   float m_flMinimumLightingRadius; // 0x1C4 - 0x1C8
   float m_flMaximumLightingRadius; // 0x1C8 - 0x1CC
   float m_flPositionDampingConstant; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_VectorFieldSnapshot /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1B8 - 0x1BC
   ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1BC - 0x1C0
   int32_t m_nLocalSpaceCP; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_flInterpolation; // 0x1C8 - 0x320
   CPerParticleVecInput m_vecScale; // 0x320 - 0x978
   float m_flBoundaryDampening; // 0x978 - 0x97C
   bool m_bSetVelocity; // 0x97C - 0x97D
   bool m_bLockToSurface; // 0x97D - 0x97E
   unsigned char pad_97E[0x2]; // 0x97E - 0x980
   float m_flGridSpacing; // 0x980 - 0x984
   unsigned char pad_984[0x4]; // 0x984 - 0x988
}; // size - 0x988


class C_OP_VectorNoise /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1B8 - 0x1BC
   Vector m_vecOutputMin; // 0x1BC - 0x1C8
   Vector m_vecOutputMax; // 0x1C8 - 0x1D4
   float m_fl4NoiseScale; // 0x1D4 - 0x1D8
   bool m_bAdditive; // 0x1D8 - 0x1D9
   bool m_bOffset; // 0x1D9 - 0x1DA
   unsigned char pad_1DA[0x2]; // 0x1DA - 0x1DC
   float m_flNoiseAnimationTimeScale; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_VelocityDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flMinVelocity; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_OP_VelocityMatchingForce /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flDirScale; // 0x1B8 - 0x1BC
   float m_flSpdScale; // 0x1BC - 0x1C0
   int32_t m_nCPBroadcast; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
}; // size - 0x1C8


class C_OP_WindForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   Vector m_vForce; // 0x1C8 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
}; // size - 0x1D8


class C_OP_WorldCollideConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   unsigned char pad_0[0x1B8]; // 0x0 - 0x1B8
}; // size - 0x1B8


class C_OP_WorldTraceConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   int32_t m_nCP; // 0x1B8 - 0x1BC
   Vector m_vecCpOffset; // 0x1BC - 0x1C8
   ParticleCollisionMode_t m_nCollisionMode; // 0x1C8 - 0x1CC
   ParticleCollisionMode_t m_nCollisionModeMin; // 0x1CC - 0x1D0
   ParticleTraceSet_t m_nTraceSet; // 0x1D0 - 0x1D4
   char m_CollisionGroupName[128]; // 0x1D4 - 0x254
   bool m_bWorldOnly; // 0x254 - 0x255
   bool m_bBrushOnly; // 0x255 - 0x256
   bool m_bIncludeWater; // 0x256 - 0x257
   unsigned char pad_257[0x1]; // 0x257 - 0x258
   int32_t m_nIgnoreCP; // 0x258 - 0x25C
   float m_flCpMovementTolerance; // 0x25C - 0x260
   float m_flRetestRate; // 0x260 - 0x264
   float m_flTraceTolerance; // 0x264 - 0x268
   float m_flCollisionConfirmationSpeed; // 0x268 - 0x26C
   float m_nMaxTracesPerFrame; // 0x26C - 0x270
   CPerParticleFloatInput m_flRadiusScale; // 0x270 - 0x3C8
   CPerParticleFloatInput m_flBounceAmount; // 0x3C8 - 0x520
   CPerParticleFloatInput m_flSlideAmount; // 0x520 - 0x678
   CPerParticleFloatInput m_flRandomDirScale; // 0x678 - 0x7D0
   bool m_bDecayBounce; // 0x7D0 - 0x7D1
   bool m_bKillonContact; // 0x7D1 - 0x7D2
   unsigned char pad_7D2[0x2]; // 0x7D2 - 0x7D4
   float m_flMinSpeed; // 0x7D4 - 0x7D8
   bool m_bSetNormal; // 0x7D8 - 0x7D9
   unsigned char pad_7D9[0x3]; // 0x7D9 - 0x7DC
   ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x7DC - 0x7E0
   CPerParticleFloatInput m_flStopSpeed; // 0x7E0 - 0x938
   ParticleAttributeIndex_t m_nEntityStickDataField; // 0x938 - 0x93C
   ParticleAttributeIndex_t m_nEntityStickNormalField; // 0x93C - 0x940
}; // size - 0x940


class C_SunGlowOverlay /* "client" */ : public CGlowOverlay /* "client" */
{
public:
   bool m_bModulateByDot; // 0xD0 - 0xD1
   unsigned char pad_D1[0x7]; // 0xD1 - 0xD8
}; // size - 0xD8


class CastSphereSATParams_t /* "physicslib" */
{
public:
   Vector m_vRayStart; // 0x0 - 0xC
   Vector m_vRayDelta; // 0xC - 0x18
   float m_flRadius; // 0x18 - 0x1C
   float m_flMaxFraction; // 0x1C - 0x20
   float m_flScale; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
   RnHull_t* m_pHull; // 0x28 - 0x30
}; // size - 0x30


class ChainToSolveData_t /* "animgraphlib" */
{
public:
   int32_t m_nChainIndex; // 0x0 - 0x4
   IKSolverSettings_t m_SolverSettings; // 0x4 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   IKTargetSettings_t m_TargetSettings; // 0x10 - 0x38
   SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x38 - 0x3C
   float m_flDebugNormalizedValue; // 0x3C - 0x40
   VectorAligned m_vDebugOffset; // 0x40 - 0x50
}; // size - 0x50


class ChangeAccessorFieldPathIndex_t /* "networksystem" */
{
public:
   int16_t m_Value; // 0x0 - 0x2
}; // size - 0x2


class ClutterSceneObject_t /* "worldrenderer" */
{
public:
   AABB_t m_Bounds; // 0x0 - 0x18
   ObjectTypeFlags_t m_flags; // 0x18 - 0x1C
   int16_t m_nLayer; // 0x1C - 0x1E
   unsigned char pad_1E[0x2]; // 0x1E - 0x20
   CUtlVector< Vector > m_instancePositions; // 0x20 - 0x38
   unsigned char pad_38[0x18]; // 0x38 - 0x50
   CUtlVector< float32 > m_instanceScales; // 0x50 - 0x68
   CUtlVector< Color > m_instanceTintSrgb; // 0x68 - 0x80
   CUtlVector< ClutterTile_t > m_tiles; // 0x80 - 0x98
   CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x98 - 0xA0
}; // size - 0xA0


class ClutterTile_t /* "worldrenderer" */
{
public:
   uint32_t m_nFirstInstance; // 0x0 - 0x4
   uint32_t m_nLastInstance; // 0x4 - 0x8
   AABB_t m_BoundsWs; // 0x8 - 0x20
}; // size - 0x20


class CollisionGroupContext_t /* "particles" */
{
public:
   int32_t m_nCollisionGroupNumber; // 0x0 - 0x4
}; // size - 0x4


class CommandToolCommand_t /* "server" */
{
public:
   bool m_bEnabled; // 0x0 - 0x1
   bool m_bOpened; // 0x1 - 0x2
   unsigned char pad_2[0x2]; // 0x2 - 0x4
   uint32_t m_InternalId; // 0x4 - 0x8
   CUtlString m_ShortName; // 0x8 - 0x10
   CommandExecMode_t m_ExecMode; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
   CUtlString m_SpawnGroup; // 0x18 - 0x20
   float m_PeriodicExecDelay; // 0x20 - 0x24
   CommandEntitySpecType_t m_SpecType; // 0x24 - 0x28
   CUtlString m_EntitySpec; // 0x28 - 0x30
   CUtlString m_Commands; // 0x30 - 0x38
   DebugOverlayBits_t m_SetDebugBits; // 0x38 - 0x40
   DebugOverlayBits_t m_ClearDebugBits; // 0x40 - 0x48
   unsigned char pad_48[0x8]; // 0x48 - 0x50
}; // size - 0x50


class CompMatMutatorCondition_t /* "client" */
{
public:
   CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlString m_strMutatorConditionContainerName; // 0x8 - 0x10
   CUtlString m_strMutatorConditionContainerVarName; // 0x10 - 0x18
   CUtlString m_strMutatorConditionContainerVarValue; // 0x18 - 0x20
   bool m_bPassWhenTrue; // 0x20 - 0x21
   unsigned char pad_21[0x7]; // 0x21 - 0x28
}; // size - 0x28


class CompMatPropertyMutator_t /* "client" */
{
public:
   bool m_bEnabled; // 0x0 - 0x1
   unsigned char pad_1[0x3]; // 0x1 - 0x4
   CompMatPropertyMutatorType_t m_nMutatorCommandType; // 0x4 - 0x8
   CUtlString m_strInitWith_Container; // 0x8 - 0x10
   CUtlString m_strCopyProperty_InputContainerSrc; // 0x10 - 0x18
   CUtlString m_strCopyProperty_InputContainerProperty; // 0x18 - 0x20
   CUtlString m_strCopyProperty_TargetProperty; // 0x20 - 0x28
   CUtlString m_strRandomRollInputVars_SeedInputVar; // 0x28 - 0x30
   CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll; // 0x30 - 0x48
   CUtlString m_strCopyMatchingKeys_InputContainerSrc; // 0x48 - 0x50
   CUtlString m_strCopyKeysWithSuffix_InputContainerSrc; // 0x50 - 0x58
   CUtlString m_strCopyKeysWithSuffix_FindSuffix; // 0x58 - 0x60
   CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix; // 0x60 - 0x68
   CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68 - 0x2E8
   CUtlString m_strGenerateTexture_TargetParam; // 0x2E8 - 0x2F0
   CUtlString m_strGenerateTexture_InitialContainer; // 0x2F0 - 0x2F8
   int32_t m_nResolution; // 0x2F8 - 0x2FC
   bool m_bIsScratchTarget; // 0x2FC - 0x2FD
   bool m_bSplatDebugInfo; // 0x2FD - 0x2FE
   bool m_bCaptureInRenderDoc; // 0x2FE - 0x2FF
   unsigned char pad_2FF[0x1]; // 0x2FF - 0x300
   CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions; // 0x300 - 0x318
   CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators; // 0x318 - 0x330
   CUtlString m_strPopInputQueue_Container; // 0x330 - 0x338
   CUtlString m_strDrawText_InputContainerSrc; // 0x338 - 0x340
   CUtlString m_strDrawText_InputContainerProperty; // 0x340 - 0x348
   Vector2D m_vecDrawText_Position; // 0x348 - 0x350
   Color m_colDrawText_Color; // 0x350 - 0x354
   unsigned char pad_354[0x4]; // 0x354 - 0x358
   CUtlString m_strDrawText_Font; // 0x358 - 0x360
   CUtlVector< CompMatMutatorCondition_t > m_vecConditions; // 0x360 - 0x378
}; // size - 0x378


class CompositeMaterialAssemblyProcedure_t /* "client" */
{
public:
   CUtlVector< CResourceName > m_vecCompMatIncludes; // 0x0 - 0x18
   CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters; // 0x18 - 0x30
   CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers; // 0x30 - 0x48
   CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators; // 0x48 - 0x60
}; // size - 0x60


class CompositeMaterialEditorPoint_t /* "client" */
{
public:
   CResourceName m_ModelName; // 0x0 - 0xE0
   int32_t m_nSequenceIndex; // 0xE0 - 0xE4
   float m_flCycle; // 0xE4 - 0xE8
   KeyValues3 m_KVModelStateChoices; // 0xE8 - 0xF8
   bool m_bEnableChildModel; // 0xF8 - 0xF9
   unsigned char pad_F9[0x7]; // 0xF9 - 0x100
   CResourceName m_ChildModelName; // 0x100 - 0x1E0
   CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures; // 0x1E0 - 0x1F8
   CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials; // 0x1F8 - 0x210
   unsigned char pad_210[0x8]; // 0x210 - 0x218
}; // size - 0x218


class CompositeMaterialInputContainer_t /* "client" */
{
public:
   bool m_bEnabled; // 0x0 - 0x1
   unsigned char pad_1[0x3]; // 0x1 - 0x4
   CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; // 0x4 - 0x8
   CResourceName m_strSpecificContainerMaterial; // 0x8 - 0xE8
   CUtlString m_strAttrName; // 0xE8 - 0xF0
   CUtlString m_strAlias; // 0xF0 - 0xF8
   CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables; // 0xF8 - 0x110
   CUtlString m_strAttrNameForVar; // 0x110 - 0x118
   bool m_bExposeExternally; // 0x118 - 0x119
   unsigned char pad_119[0x1F]; // 0x119 - 0x138
}; // size - 0x138


class CompositeMaterialInputLooseVariable_t /* "client" */
{
public:
   CUtlString m_strName; // 0x0 - 0x8
   bool m_bExposeExternally; // 0x8 - 0x9
   unsigned char pad_9[0x7]; // 0x9 - 0x10
   CUtlString m_strExposedFriendlyName; // 0x10 - 0x18
   CUtlString m_strExposedFriendlyGroupName; // 0x18 - 0x20
   bool m_bExposedVariableIsFixedRange; // 0x20 - 0x21
   unsigned char pad_21[0x7]; // 0x21 - 0x28
   CUtlString m_strExposedVisibleWhenTrue; // 0x28 - 0x30
   CUtlString m_strExposedHiddenWhenTrue; // 0x30 - 0x38
   CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x38 - 0x3C
   bool m_bValueBoolean; // 0x3C - 0x3D
   unsigned char pad_3D[0x3]; // 0x3D - 0x40
   int32_t m_nValueIntX; // 0x40 - 0x44
   int32_t m_nValueIntY; // 0x44 - 0x48
   int32_t m_nValueIntZ; // 0x48 - 0x4C
   int32_t m_nValueIntW; // 0x4C - 0x50
   bool m_bHasFloatBounds; // 0x50 - 0x51
   unsigned char pad_51[0x3]; // 0x51 - 0x54
   float m_flValueFloatX; // 0x54 - 0x58
   float m_flValueFloatX_Min; // 0x58 - 0x5C
   float m_flValueFloatX_Max; // 0x5C - 0x60
   float m_flValueFloatY; // 0x60 - 0x64
   float m_flValueFloatY_Min; // 0x64 - 0x68
   float m_flValueFloatY_Max; // 0x68 - 0x6C
   float m_flValueFloatZ; // 0x6C - 0x70
   float m_flValueFloatZ_Min; // 0x70 - 0x74
   float m_flValueFloatZ_Max; // 0x74 - 0x78
   float m_flValueFloatW; // 0x78 - 0x7C
   float m_flValueFloatW_Min; // 0x7C - 0x80
   float m_flValueFloatW_Max; // 0x80 - 0x84
   Color m_cValueColor4; // 0x84 - 0x88
   CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x88 - 0x8C
   unsigned char pad_8C[0x4]; // 0x8C - 0x90
   CResourceName m_strResourceMaterial; // 0x90 - 0x170
   CUtlString m_strTextureContentAssetPath; // 0x170 - 0x178
   CResourceName m_strTextureRuntimeResourcePath; // 0x178 - 0x258
   CUtlString m_strTextureCompilationVtexTemplate; // 0x258 - 0x260
   CompositeMaterialInputTextureType_t m_nTextureType; // 0x260 - 0x264
   unsigned char pad_264[0x4]; // 0x264 - 0x268
   CUtlString m_strString; // 0x268 - 0x270
   CUtlString m_strPanoramaPanelPath; // 0x270 - 0x278
   int32_t m_nPanoramaRenderRes; // 0x278 - 0x27C
   unsigned char pad_27C[0x4]; // 0x27C - 0x280
}; // size - 0x280


class CompositeMaterialMatchFilter_t /* "client" */
{
public:
   CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlString m_strMatchFilter; // 0x8 - 0x10
   CUtlString m_strMatchValue; // 0x10 - 0x18
   bool m_bPassWhenTrue; // 0x18 - 0x19
   unsigned char pad_19[0x7]; // 0x19 - 0x20
}; // size - 0x20


class CompositeMaterial_t /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   KeyValues3 m_TargetKVs; // 0x8 - 0x18
   KeyValues3 m_PreGenerationKVs; // 0x18 - 0x28
   unsigned char pad_28[0x30]; // 0x28 - 0x58
   KeyValues3 m_FinalKVs; // 0x58 - 0x68
   unsigned char pad_68[0x8]; // 0x68 - 0x70
   CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures; // 0x70 - 0x88
   unsigned char pad_88[0x8]; // 0x88 - 0x90
}; // size - 0x90


class ConceptHistory_t /* "server" */
{
public:
   float timeSpoken; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CRR_Response m_response; // 0x8 - 0x1F0
}; // size - 0x1F0


class ConfigIndex /* "animgraphlib" */
{
public:
   uint16_t m_nGroup; // 0x0 - 0x2
   uint16_t m_nConfig; // 0x2 - 0x4
}; // size - 0x4


class ConstantInfo_t /* "mathlib_extended" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CUtlStringToken m_nameToken; // 0x8 - 0xC
   float m_flValue; // 0xC - 0x10
}; // size - 0x10


class ConstraintSoundInfo /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   VelocitySampler m_vSampler; // 0x8 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
   SimpleConstraintSoundProfile m_soundProfile; // 0x20 - 0x40
   Vector m_forwardAxis; // 0x40 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
   CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50 - 0x58
   CUtlSymbolLarge m_iszTravelSoundBack; // 0x58 - 0x60
   unsigned char pad_60[0x8]; // 0x60 - 0x68
   CUtlSymbolLarge m_iszReversalSounds[3]; // 0x68 - 0x80
   bool m_bPlayTravelSound; // 0x80 - 0x81
   bool m_bPlayReversalSound; // 0x81 - 0x82
   unsigned char pad_82[0x6]; // 0x82 - 0x88
}; // size - 0x88


class ControlPointReference_t /* "particles" */
{
public:
   int32_t m_controlPointNameString; // 0x0 - 0x4
   Vector m_vOffsetFromControlPoint; // 0x4 - 0x10
   bool m_bOffsetInLocalSpace; // 0x10 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
}; // size - 0x14


class CovMatrix3 /* "physicslib" */
{
public:
   Vector m_vDiag; // 0x0 - 0xC
   float m_flXY; // 0xC - 0x10
   float m_flXZ; // 0x10 - 0x14
   float m_flYZ; // 0x14 - 0x18
}; // size - 0x18


class Dop26_t /* "physicslib" */
{
public:
   float32 m_flSupport[26]; // 0x0 - 0x68
}; // size - 0x68


class DynamicMeshDeformParams_t /* "modellib" */
{
public:
   float m_flTensionCompressScale; // 0x0 - 0x4
   float m_flTensionStretchScale; // 0x4 - 0x8
   bool m_bRecomputeSmoothNormalsAfterAnimation; // 0x8 - 0x9
   bool m_bComputeDynamicMeshTensionAfterAnimation; // 0x9 - 0xA
   unsigned char pad_A[0x2]; // 0xA - 0xC
}; // size - 0xC


class EmptyTestScript /* "host" */ : public CAnimScriptBase /* "host" */
{
public:
   CAnimScriptParam< float32 > m_hTest; // 0x10 - 0x20
}; // size - 0x20


class EngineLoopState_t /* "engine2" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   int32_t m_nPlatWindowWidth; // 0x18 - 0x1C
   int32_t m_nPlatWindowHeight; // 0x1C - 0x20
   int32_t m_nRenderWidth; // 0x20 - 0x24
   int32_t m_nRenderHeight; // 0x24 - 0x28
}; // size - 0x28


class EntComponentInfo_t /* "entity2" */
{
public:
   char* m_pName; // 0x0 - 0x8
   char* m_pCPPClassname; // 0x8 - 0x10
   char* m_pNetworkDataReferencedDescription; // 0x10 - 0x18
   char* m_pNetworkDataReferencedPtrPropDescription; // 0x18 - 0x20
   int32_t m_nRuntimeIndex; // 0x20 - 0x24
   uint32_t m_nFlags; // 0x24 - 0x28
   unsigned char pad_28[0x38]; // 0x28 - 0x60
   CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x60 - 0x68
}; // size - 0x68


class EntInput_t /* "entity2" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class EntOutput_t /* "entity2" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
}; // size - 0x10


class EntityIOConnectionData_t /* "worldrenderer" */
{
public:
   CUtlString m_outputName; // 0x0 - 0x8
   uint32_t m_targetType; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlString m_targetName; // 0x10 - 0x18
   CUtlString m_inputName; // 0x18 - 0x20
   CUtlString m_overrideParam; // 0x20 - 0x28
   float m_flDelay; // 0x28 - 0x2C
   int32_t m_nTimesToFire; // 0x2C - 0x30
}; // size - 0x30


class EntityKeyValueData_t /* "worldrenderer" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlVector< EntityIOConnectionData_t > m_connections; // 0x8 - 0x20
   CUtlBinaryBlock m_keyValuesData; // 0x20 - 0x38
   unsigned char pad_38[0x8]; // 0x38 - 0x40
}; // size - 0x40


class EventAppShutdown_t /* "engine2" */
{
public:
   int32_t m_nDummy0; // 0x0 - 0x4
}; // size - 0x4


class EventClientAdvanceNonRenderedFrame_t /* "engine2" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class EventClientAdvanceTick_t /* "engine2" */ : public EventAdvanceTick_t /* "engine2" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class EventClientFrameSimulate_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C
   float m_flFrameTime; // 0x2C - 0x30
   float64 m_flWhenScheduleSendTickPacket; // 0x30 - 0x38
}; // size - 0x38


class EventClientOutput_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRenderTime; // 0x28 - 0x2C
   float m_flRealTime; // 0x2C - 0x30
   float m_flRenderFrameTimeUnbounded; // 0x30 - 0x34
   bool m_bRenderOnly; // 0x34 - 0x35
   unsigned char pad_35[0x3]; // 0x35 - 0x38
}; // size - 0x38


class EventClientPauseSimulate_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class EventClientPollInput_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
}; // size - 0x30


class EventClientPollNetworking_t /* "engine2" */
{
public:
   int32_t m_nTickCount; // 0x0 - 0x4
}; // size - 0x4


class EventClientPostAdvanceTick_t /* "engine2" */ : public EventPostAdvanceTick_t /* "engine2" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class EventClientPostOutput_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float64 m_flRenderTime; // 0x28 - 0x30
   float m_flRenderFrameTime; // 0x30 - 0x34
   float m_flRenderFrameTimeUnbounded; // 0x34 - 0x38
   bool m_bRenderOnly; // 0x38 - 0x39
   unsigned char pad_39[0x7]; // 0x39 - 0x40
}; // size - 0x40


class EventClientPostSimulate_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class EventClientPreOutput_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float64 m_flRenderTime; // 0x28 - 0x30
   float64 m_flRenderFrameTime; // 0x30 - 0x38
   float64 m_flRenderFrameTimeUnbounded; // 0x38 - 0x40
   float m_flRealTime; // 0x40 - 0x44
   bool m_bRenderOnly; // 0x44 - 0x45
   unsigned char pad_45[0x3]; // 0x45 - 0x48
}; // size - 0x48


class EventClientPreSimulate_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class EventClientProcessGameInput_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C
   float m_flFrameTime; // 0x2C - 0x30
}; // size - 0x30


class EventClientProcessInput_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C
   float m_flTickInterval; // 0x2C - 0x30
   float64 m_flTickStartTime; // 0x30 - 0x38
}; // size - 0x38


class EventClientProcessNetworking_t /* "engine2" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class EventClientSceneSystemThreadStateChange_t /* "engine2" */
{
public:
   bool m_bThreadsActive; // 0x0 - 0x1
}; // size - 0x1


class EventClientSimulate_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class EventFrameBoundary_t /* "engine2" */
{
public:
   float m_flFrameTime; // 0x0 - 0x4
}; // size - 0x4


class EventModInitialized_t /* "engine2" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class EventPostDataUpdate_t /* "engine2" */
{
public:
   int32_t m_nCount; // 0x0 - 0x4
   unsigned char pad_4[0xC]; // 0x4 - 0x10
}; // size - 0x10


class EventPreDataUpdate_t /* "engine2" */
{
public:
   int32_t m_nCount; // 0x0 - 0x4
   unsigned char pad_4[0xC]; // 0x4 - 0x10
}; // size - 0x10


class EventProfileStorageAvailable_t /* "engine2" */
{
public:
   CSplitScreenSlot m_nSplitScreenSlot; // 0x0 - 0x4
}; // size - 0x4


class EventServerAdvanceTick_t /* "engine2" */ : public EventAdvanceTick_t /* "engine2" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class EventServerPollNetworking_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class EventServerPostAdvanceTick_t /* "engine2" */ : public EventPostAdvanceTick_t /* "engine2" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class EventServerPostSimulate_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class EventServerProcessNetworking_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class EventServerSimulate_t /* "engine2" */ : public EventSimulate_t /* "engine2" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class EventSetTime_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   int32_t m_nClientOutputFrames; // 0x28 - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
   float64 m_flRealTime; // 0x30 - 0x38
   float64 m_flRenderTime; // 0x38 - 0x40
   float64 m_flRenderFrameTime; // 0x40 - 0x48
   float64 m_flRenderFrameTimeUnbounded; // 0x48 - 0x50
   float64 m_flRenderFrameTimeUnscaled; // 0x50 - 0x58
   float64 m_flTickRemainder; // 0x58 - 0x60
}; // size - 0x60


class EventSimpleLoopFrameUpdate_t /* "engine2" */
{
public:
   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C
   float m_flFrameTime; // 0x2C - 0x30
}; // size - 0x30


class EventSplitScreenStateChanged_t /* "engine2" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class Extent /* "navlib" */
{
public:
   Vector lo; // 0x0 - 0xC
   Vector hi; // 0xC - 0x18
}; // size - 0x18


class ExtraVertexStreamOverride_t /* "worldrenderer" */ : public BaseSceneObjectOverride_t /* "worldrenderer" */
{
public:
   uint32_t m_nSubSceneObject; // 0x4 - 0x8
   uint32_t m_nDrawCallIndex; // 0x8 - 0xC
   MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xC - 0x10
   CRenderBufferBinding m_extraBufferBinding; // 0x10 - 0x28
}; // size - 0x28


class FakeEntityDerivedA_tAPI /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class FakeEntityDerivedB_tAPI /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class FakeEntity_tAPI /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class FeAnimStrayRadius_t /* "physicslib" */
{
public:
   uint16 nNode[2]; // 0x0 - 0x4
   float flMaxDist; // 0x4 - 0x8
   float flRelaxationFactor; // 0x8 - 0xC
}; // size - 0xC


class FeAxialEdgeBend_t /* "physicslib" */
{
public:
   float te; // 0x0 - 0x4
   float tv; // 0x4 - 0x8
   float flDist; // 0x8 - 0xC
   float32 flWeight[4]; // 0xC - 0x1C
   uint16 nNode[6]; // 0x1C - 0x28
}; // size - 0x28


class FeBandBendLimit_t /* "physicslib" */
{
public:
   float flDistMin; // 0x0 - 0x4
   float flDistMax; // 0x4 - 0x8
   uint16 nNode[6]; // 0x8 - 0x14
}; // size - 0x14


class FeBuildBoxRigid_t /* "physicslib" */ : public FeBoxRigid_t /* "physicslib" */
{
public:
   int32_t m_nPriority; // 0x40 - 0x44
   uint32_t m_nVertexMapHash; // 0x44 - 0x48
   unsigned char pad_48[0x8]; // 0x48 - 0x50
}; // size - 0x50


class FeBuildSphereRigid_t /* "physicslib" */ : public FeSphereRigid_t /* "physicslib" */
{
public:
   int32_t m_nPriority; // 0x20 - 0x24
   uint32_t m_nVertexMapHash; // 0x24 - 0x28
   unsigned char pad_28[0x8]; // 0x28 - 0x30
}; // size - 0x30


class FeBuildTaperedCapsuleRigid_t /* "physicslib" */ : public FeTaperedCapsuleRigid_t /* "physicslib" */
{
public:
   int32_t m_nPriority; // 0x30 - 0x34
   uint32_t m_nVertexMapHash; // 0x34 - 0x38
   unsigned char pad_38[0x8]; // 0x38 - 0x40
}; // size - 0x40


class FeCollisionPlane_t /* "physicslib" */
{
public:
   uint16_t nCtrlParent; // 0x0 - 0x2
   uint16_t nChildNode; // 0x2 - 0x4
   RnPlane_t m_Plane; // 0x4 - 0x14
   float flStrength; // 0x14 - 0x18
}; // size - 0x18


class FeCtrlOffset_t /* "physicslib" */
{
public:
   Vector vOffset; // 0x0 - 0xC
   uint16_t nCtrlParent; // 0xC - 0xE
   uint16_t nCtrlChild; // 0xE - 0x10
}; // size - 0x10


class FeCtrlOsOffset_t /* "physicslib" */
{
public:
   uint16_t nCtrlParent; // 0x0 - 0x2
   uint16_t nCtrlChild; // 0x2 - 0x4
}; // size - 0x4


class FeCtrlSoftOffset_t /* "physicslib" */
{
public:
   uint16_t nCtrlParent; // 0x0 - 0x2
   uint16_t nCtrlChild; // 0x2 - 0x4
   Vector vOffset; // 0x4 - 0x10
   float flAlpha; // 0x10 - 0x14
}; // size - 0x14


class FeEdgeDesc_t /* "physicslib" */
{
public:
   uint16 nEdge[2]; // 0x0 - 0x4
   uint16 nSide[2][2]; // 0x4 - 0xC
   uint16 nVirtElem[2]; // 0xC - 0x10
}; // size - 0x10


class FeEffectDesc_t /* "physicslib" */
{
public:
   CUtlString sName; // 0x0 - 0x8
   uint32_t nNameHash; // 0x8 - 0xC
   int32_t nType; // 0xC - 0x10
   KeyValues3 m_Params; // 0x10 - 0x20
}; // size - 0x20


class FeFitInfluence_t /* "physicslib" */
{
public:
   uint32_t nVertexNode; // 0x0 - 0x4
   float flWeight; // 0x4 - 0x8
   uint32_t nMatrixNode; // 0x8 - 0xC
}; // size - 0xC


class FeFitMatrix_t /* "physicslib" */
{
public:
   CTransform bone; // 0x0 - 0x20
   Vector vCenter; // 0x20 - 0x2C
   uint16_t nEnd; // 0x2C - 0x2E
   uint16_t nNode; // 0x2E - 0x30
   uint16_t nBeginDynamic; // 0x30 - 0x32
   unsigned char pad_32[0xE]; // 0x32 - 0x40
}; // size - 0x40


class FeFitWeight_t /* "physicslib" */
{
public:
   float flWeight; // 0x0 - 0x4
   uint16_t nNode; // 0x4 - 0x6
   uint16_t nDummy; // 0x6 - 0x8
}; // size - 0x8


class FeFollowNode_t /* "physicslib" */
{
public:
   uint16_t nParentNode; // 0x0 - 0x2
   uint16_t nChildNode; // 0x2 - 0x4
   float flWeight; // 0x4 - 0x8
}; // size - 0x8


class FeKelagerBend2_t /* "physicslib" */
{
public:
   float32 flWeight[3]; // 0x0 - 0xC
   float flHeight0; // 0xC - 0x10
   uint16 nNode[3]; // 0x10 - 0x16
   uint16_t nReserved; // 0x16 - 0x18
}; // size - 0x18


class FeMorphLayerDepr_t /* "physicslib" */
{
public:
   CUtlString m_Name; // 0x0 - 0x8
   uint32_t m_nNameHash; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< uint16 > m_Nodes; // 0x10 - 0x28
   CUtlVector< Vector > m_InitPos; // 0x28 - 0x40
   CUtlVector< float32 > m_Gravity; // 0x40 - 0x58
   CUtlVector< float32 > m_GoalStrength; // 0x58 - 0x70
   CUtlVector< float32 > m_GoalDamping; // 0x70 - 0x88
   uint32_t m_nFlags; // 0x88 - 0x8C
   unsigned char pad_8C[0x4]; // 0x8C - 0x90
}; // size - 0x90


class FeNodeBase_t /* "physicslib" */
{
public:
   uint16_t nNode; // 0x0 - 0x2
   uint16 nDummy[3]; // 0x2 - 0x8
   uint16_t nNodeX0; // 0x8 - 0xA
   uint16_t nNodeX1; // 0xA - 0xC
   uint16_t nNodeY0; // 0xC - 0xE
   uint16_t nNodeY1; // 0xE - 0x10
   QuaternionStorage qAdjust; // 0x10 - 0x20
}; // size - 0x20


class FeNodeIntegrator_t /* "physicslib" */
{
public:
   float flPointDamping; // 0x0 - 0x4
   float flAnimationForceAttraction; // 0x4 - 0x8
   float flAnimationVertexAttraction; // 0x8 - 0xC
   float flGravity; // 0xC - 0x10
}; // size - 0x10


class FeNodeReverseOffset_t /* "physicslib" */
{
public:
   Vector vOffset; // 0x0 - 0xC
   uint16_t nBoneCtrl; // 0xC - 0xE
   uint16_t nTargetNode; // 0xE - 0x10
}; // size - 0x10


class FeNodeWindBase_t /* "physicslib" */
{
public:
   uint16_t nNodeX0; // 0x0 - 0x2
   uint16_t nNodeX1; // 0x2 - 0x4
   uint16_t nNodeY0; // 0x4 - 0x6
   uint16_t nNodeY1; // 0x6 - 0x8
}; // size - 0x8


class FeProxyVertexMap_t /* "physicslib" */
{
public:
   CUtlString m_Name; // 0x0 - 0x8
   float m_flWeight; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class FeQuad_t /* "physicslib" */
{
public:
   uint16 nNode[4]; // 0x0 - 0x8
   float flSlack; // 0x8 - 0xC
   Vector4D vShape[4]; // 0xC - 0x4C
}; // size - 0x4C


class FeRigidColliderIndices_t /* "physicslib" */
{
public:
   uint16_t m_nTaperedCapsuleRigidIndex; // 0x0 - 0x2
   uint16_t m_nSphereRigidIndex; // 0x2 - 0x4
   uint16_t m_nBoxRigidIndex; // 0x4 - 0x6
   uint16_t m_nCollisionPlaneIndex; // 0x6 - 0x8
}; // size - 0x8


class FeRodConstraint_t /* "physicslib" */
{
public:
   uint16 nNode[2]; // 0x0 - 0x4
   float flMaxDist; // 0x4 - 0x8
   float flMinDist; // 0x8 - 0xC
   float flWeight0; // 0xC - 0x10
   float flRelaxationFactor; // 0x10 - 0x14
}; // size - 0x14


class FeSimdAnimStrayRadius_t /* "physicslib" */
{
public:
   uint16 nNode[4][2]; // 0x0 - 0x10
   fltx4 flMaxDist; // 0x10 - 0x20
   fltx4 flRelaxationFactor; // 0x20 - 0x30
}; // size - 0x30


class FeSimdNodeBase_t /* "physicslib" */
{
public:
   uint16 nNode[4]; // 0x0 - 0x8
   uint16 nNodeX0[4]; // 0x8 - 0x10
   uint16 nNodeX1[4]; // 0x10 - 0x18
   uint16 nNodeY0[4]; // 0x18 - 0x20
   uint16 nNodeY1[4]; // 0x20 - 0x28
   uint16 nDummy[4]; // 0x28 - 0x30
   FourQuaternions qAdjust; // 0x30 - 0x70
}; // size - 0x70


class FeSimdQuad_t /* "physicslib" */
{
public:
   uint16 nNode[4][4]; // 0x0 - 0x20
   fltx4 f4Slack; // 0x20 - 0x30
   FourVectors vShape[4]; // 0x30 - 0xF0
   fltx4 f4Weights[4]; // 0xF0 - 0x130
}; // size - 0x130


class FeSimdRodConstraintAnim_t /* "physicslib" */
{
public:
   uint16 nNode[4][2]; // 0x0 - 0x10
   fltx4 f4Weight0; // 0x10 - 0x20
   fltx4 f4RelaxationFactor; // 0x20 - 0x30
}; // size - 0x30


class FeSimdRodConstraint_t /* "physicslib" */
{
public:
   uint16 nNode[4][2]; // 0x0 - 0x10
   fltx4 f4MaxDist; // 0x10 - 0x20
   fltx4 f4MinDist; // 0x20 - 0x30
   fltx4 f4Weight0; // 0x30 - 0x40
   fltx4 f4RelaxationFactor; // 0x40 - 0x50
}; // size - 0x50


class FeSimdSpringIntegrator_t /* "physicslib" */
{
public:
   uint16 nNode[4][2]; // 0x0 - 0x10
   fltx4 flSpringRestLength; // 0x10 - 0x20
   fltx4 flSpringConstant; // 0x20 - 0x30
   fltx4 flSpringDamping; // 0x30 - 0x40
   fltx4 flNodeWeight0; // 0x40 - 0x50
}; // size - 0x50


class FeSimdTri_t /* "physicslib" */
{
public:
   uint32 nNode[4][3]; // 0x0 - 0x30
   fltx4 w1; // 0x30 - 0x40
   fltx4 w2; // 0x40 - 0x50
   fltx4 v1x; // 0x50 - 0x60
   FourVectors2D v2; // 0x60 - 0x80
}; // size - 0x80


class FeSoftParent_t /* "physicslib" */
{
public:
   int32_t nParent; // 0x0 - 0x4
   float flAlpha; // 0x4 - 0x8
}; // size - 0x8


class FeSourceEdge_t /* "physicslib" */
{
public:
   uint16 nNode[2]; // 0x0 - 0x4
}; // size - 0x4


class FeSpringIntegrator_t /* "physicslib" */
{
public:
   uint16 nNode[2]; // 0x0 - 0x4
   float flSpringRestLength; // 0x4 - 0x8
   float flSpringConstant; // 0x8 - 0xC
   float flSpringDamping; // 0xC - 0x10
   float flNodeWeight0; // 0x10 - 0x14
}; // size - 0x14


class FeStiffHingeBuild_t /* "physicslib" */
{
public:
   float flMaxAngle; // 0x0 - 0x4
   float flStrength; // 0x4 - 0x8
   float32 flMotionBias[3]; // 0x8 - 0x14
   uint16 nNode[3]; // 0x14 - 0x1A
   unsigned char pad_1A[0x2]; // 0x1A - 0x1C
}; // size - 0x1C


class FeTaperedCapsuleStretch_t /* "physicslib" */
{
public:
   uint16 nNode[2]; // 0x0 - 0x4
   uint16_t nCollisionMask; // 0x4 - 0x6
   uint16_t nDummy; // 0x6 - 0x8
   float32 flRadius[2]; // 0x8 - 0x10
}; // size - 0x10


class FeTreeChildren_t /* "physicslib" */
{
public:
   uint16 nChild[2]; // 0x0 - 0x4
}; // size - 0x4


class FeTri_t /* "physicslib" */
{
public:
   uint16 nNode[3]; // 0x0 - 0x6
   unsigned char pad_6[0x2]; // 0x6 - 0x8
   float w1; // 0x8 - 0xC
   float w2; // 0xC - 0x10
   float v1x; // 0x10 - 0x14
   Vector2D v2; // 0x14 - 0x1C
}; // size - 0x1C


class FeTwistConstraint_t /* "physicslib" */
{
public:
   uint16_t nNodeOrient; // 0x0 - 0x2
   uint16_t nNodeEnd; // 0x2 - 0x4
   float flTwistRelax; // 0x4 - 0x8
   float flSwingRelax; // 0x8 - 0xC
}; // size - 0xC


class FeVertexMapBuild_t /* "physicslib" */
{
public:
   CUtlString m_VertexMapName; // 0x0 - 0x8
   uint32_t m_nNameHash; // 0x8 - 0xC
   Color m_Color; // 0xC - 0x10
   float m_flVolumetricSolveStrength; // 0x10 - 0x14
   int32_t m_nScaleSourceNode; // 0x14 - 0x18
   CUtlVector< float32 > m_Weights; // 0x18 - 0x30
}; // size - 0x30


class FeVertexMapDesc_t /* "physicslib" */
{
public:
   CUtlString sName; // 0x0 - 0x8
   uint32_t nNameHash; // 0x8 - 0xC
   uint32_t nColor; // 0xC - 0x10
   uint32_t nFlags; // 0x10 - 0x14
   uint16_t nVertexBase; // 0x14 - 0x16
   uint16_t nVertexCount; // 0x16 - 0x18
   uint32_t nMapOffset; // 0x18 - 0x1C
   uint32_t nNodeListOffset; // 0x1C - 0x20
   Vector vCenterOfMass; // 0x20 - 0x2C
   float flVolumetricSolveStrength; // 0x2C - 0x30
   int16_t nScaleSourceNode; // 0x30 - 0x32
   uint16_t nNodeListCount; // 0x32 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
}; // size - 0x38


class FeWeightedNode_t /* "physicslib" */
{
public:
   uint16_t nNode; // 0x0 - 0x2
   uint16_t nWeight; // 0x2 - 0x4
}; // size - 0x4


class FeWorldCollisionParams_t /* "physicslib" */
{
public:
   float flWorldFriction; // 0x0 - 0x4
   float flGroundFriction; // 0x4 - 0x8
   uint16_t nListBegin; // 0x8 - 0xA
   uint16_t nListEnd; // 0xA - 0xC
}; // size - 0xC


class FloatInputMaterialVariable_t /* "particles" */
{
public:
   CUtlString m_strVariable; // 0x0 - 0x8
   CParticleCollectionFloatInput m_flInput; // 0x8 - 0x160
}; // size - 0x160


class FollowAttachmentSettings_t /* "animgraphlib" */
{
public:
   CAnimAttachment m_attachment; // 0x0 - 0x80
   int32_t m_boneIndex; // 0x80 - 0x84
   bool m_bMatchTranslation; // 0x84 - 0x85
   bool m_bMatchRotation; // 0x85 - 0x86
   unsigned char pad_86[0xA]; // 0x86 - 0x90
}; // size - 0x90


class FollowTargetOpFixedSettings_t /* "animgraphlib" */
{
public:
   int32_t m_boneIndex; // 0x0 - 0x4
   bool m_bBoneTarget; // 0x4 - 0x5
   unsigned char pad_5[0x3]; // 0x5 - 0x8
   int32_t m_boneTargetIndex; // 0x8 - 0xC
   bool m_bWorldCoodinateTarget; // 0xC - 0xD
   bool m_bMatchTargetOrientation; // 0xD - 0xE
   unsigned char pad_E[0x2]; // 0xE - 0x10
}; // size - 0x10


class FootFixedData_t /* "animgraphlib" */
{
public:
   VectorAligned m_vToeOffset; // 0x0 - 0x10
   VectorAligned m_vHeelOffset; // 0x10 - 0x20
   int32_t m_nTargetBoneIndex; // 0x20 - 0x24
   int32_t m_nAnkleBoneIndex; // 0x24 - 0x28
   int32_t m_nIKAnchorBoneIndex; // 0x28 - 0x2C
   int32_t m_ikChainIndex; // 0x2C - 0x30
   float m_flMaxIKLength; // 0x30 - 0x34
   int32_t m_nFootIndex; // 0x34 - 0x38
   int32_t m_nTagIndex; // 0x38 - 0x3C
   float m_flMaxRotationLeft; // 0x3C - 0x40
   float m_flMaxRotationRight; // 0x40 - 0x44
   unsigned char pad_44[0xC]; // 0x44 - 0x50
}; // size - 0x50


class FootFixedSettings /* "animgraphlib" */
{
public:
   TraceSettings_t m_traceSettings; // 0x0 - 0x8
   unsigned char pad_8[0x8]; // 0x8 - 0x10
   VectorAligned m_vFootBaseBindPosePositionMS; // 0x10 - 0x20
   float m_flFootBaseLength; // 0x20 - 0x24
   float m_flMaxRotationLeft; // 0x24 - 0x28
   float m_flMaxRotationRight; // 0x28 - 0x2C
   int32_t m_footstepLandedTagIndex; // 0x2C - 0x30
   bool m_bEnableTracing; // 0x30 - 0x31
   unsigned char pad_31[0x3]; // 0x31 - 0x34
   float m_flTraceAngleBlend; // 0x34 - 0x38
   int32_t m_nDisableTagIndex; // 0x38 - 0x3C
   int32_t m_nFootIndex; // 0x3C - 0x40
}; // size - 0x40


class FootLockPoseOpFixedSettings /* "animgraphlib" */
{
public:
   CUtlVector< FootFixedData_t > m_footInfo; // 0x0 - 0x18
   CAnimInputDamping m_hipDampingSettings; // 0x18 - 0x28
   int32_t m_nHipBoneIndex; // 0x28 - 0x2C
   IKSolverType m_ikSolverType; // 0x2C - 0x30
   bool m_bApplyTilt; // 0x30 - 0x31
   bool m_bApplyHipDrop; // 0x31 - 0x32
   bool m_bAlwaysUseFallbackHinge; // 0x32 - 0x33
   bool m_bApplyFootRotationLimits; // 0x33 - 0x34
   bool m_bApplyLegTwistLimits; // 0x34 - 0x35
   unsigned char pad_35[0x3]; // 0x35 - 0x38
   float m_flMaxFootHeight; // 0x38 - 0x3C
   float m_flExtensionScale; // 0x3C - 0x40
   float m_flMaxLegTwist; // 0x40 - 0x44
   bool m_bEnableLockBreaking; // 0x44 - 0x45
   unsigned char pad_45[0x3]; // 0x45 - 0x48
   float m_flLockBreakTolerance; // 0x48 - 0x4C
   float m_flLockBlendTime; // 0x4C - 0x50
   bool m_bEnableStretching; // 0x50 - 0x51
   unsigned char pad_51[0x3]; // 0x51 - 0x54
   float m_flMaxStretchAmount; // 0x54 - 0x58
   float m_flStretchExtensionScale; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
}; // size - 0x60


class FootPinningPoseOpFixedData_t /* "animgraphlib" */
{
public:
   CUtlVector< FootFixedData_t > m_footInfo; // 0x0 - 0x18
   float m_flBlendTime; // 0x18 - 0x1C
   float m_flLockBreakDistance; // 0x1C - 0x20
   float m_flMaxLegTwist; // 0x20 - 0x24
   int32_t m_nHipBoneIndex; // 0x24 - 0x28
   bool m_bApplyLegTwistLimits; // 0x28 - 0x29
   bool m_bApplyFootRotationLimits; // 0x29 - 0x2A
   unsigned char pad_2A[0x6]; // 0x2A - 0x30
}; // size - 0x30


class FootStepTrigger /* "animgraphlib" */
{
public:
   CUtlVector< int32 > m_tags; // 0x0 - 0x18
   int32_t m_nFootIndex; // 0x18 - 0x1C
   StepPhase m_triggerPhase; // 0x1C - 0x20
}; // size - 0x20


class FourCovMatrices3 /* "physicslib" */
{
public:
   FourVectors m_vDiag; // 0x0 - 0x30
   fltx4 m_flXY; // 0x30 - 0x40
   fltx4 m_flXZ; // 0x40 - 0x50
   fltx4 m_flYZ; // 0x50 - 0x60
}; // size - 0x60


class FourQuaternions /* "mathlib_extended" */
{
public:
   fltx4 x; // 0x0 - 0x10
   fltx4 y; // 0x10 - 0x20
   fltx4 z; // 0x20 - 0x30
   fltx4 w; // 0x30 - 0x40
}; // size - 0x40


class FourVectors2D /* "physicslib" */
{
public:
   fltx4 x; // 0x0 - 0x10
   fltx4 y; // 0x10 - 0x20
}; // size - 0x20


class FunctionInfo_t /* "mathlib_extended" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlString m_name; // 0x8 - 0x10
   CUtlStringToken m_nameToken; // 0x10 - 0x14
   int32_t m_nParamCount; // 0x14 - 0x18
   FuseFunctionIndex_t m_nIndex; // 0x18 - 0x1A
   bool m_bIsPure; // 0x1A - 0x1B
   unsigned char pad_1B[0x5]; // 0x1B - 0x20
}; // size - 0x20


class FuseFunctionIndex_t /* "mathlib_extended" */
{
public:
   uint16_t m_Value; // 0x0 - 0x2
}; // size - 0x2


class FuseVariableIndex_t /* "mathlib_extended" */
{
public:
   uint16_t m_Value; // 0x0 - 0x2
}; // size - 0x2


class GameAmmoTypeInfo_t /* "server" */ : public AmmoTypeInfo_t /* "server" */
{
public:
   int32_t m_nBuySize; // 0x38 - 0x3C
   int32_t m_nCost; // 0x3C - 0x40
   unsigned char pad_40[0x10]; // 0x40 - 0x50
}; // size - 0x50


class GameTick_t /* "server" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class GameTime_t /* "server" */
{
public:
   float m_Value; // 0x0 - 0x4
}; // size - 0x4


class GeneratedTextureHandle_t /* "client" */
{
public:
   CUtlString m_strBitmapName; // 0x0 - 0x8
   unsigned char pad_8[0x48]; // 0x8 - 0x50
}; // size - 0x50


class HSequence /* "animationsystem" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class HitReactFixedSettings_t /* "animgraphlib" */
{
public:
   int32_t m_nWeightListIndex; // 0x0 - 0x4
   int32_t m_nEffectedBoneCount; // 0x4 - 0x8
   float m_flMaxImpactForce; // 0x8 - 0xC
   float m_flMinImpactForce; // 0xC - 0x10
   float m_flWhipImpactScale; // 0x10 - 0x14
   float m_flCounterRotationScale; // 0x14 - 0x18
   float m_flDistanceFadeScale; // 0x18 - 0x1C
   float m_flPropagationScale; // 0x1C - 0x20
   float m_flWhipDelay; // 0x20 - 0x24
   float m_flSpringStrength; // 0x24 - 0x28
   float m_flWhipSpringStrength; // 0x28 - 0x2C
   float m_flMaxAngleRadians; // 0x2C - 0x30
   int32_t m_nHipBoneIndex; // 0x30 - 0x34
   float m_flHipBoneTranslationScale; // 0x34 - 0x38
   float m_flHipDipSpringStrength; // 0x38 - 0x3C
   float m_flHipDipImpactScale; // 0x3C - 0x40
   float m_flHipDipDelay; // 0x40 - 0x44
}; // size - 0x44


class HullFlags_t /* "server" */
{
public:
   bool m_bHull_Human; // 0x0 - 0x1
   bool m_bHull_SmallCentered; // 0x1 - 0x2
   bool m_bHull_WideHuman; // 0x2 - 0x3
   bool m_bHull_Tiny; // 0x3 - 0x4
   bool m_bHull_Medium; // 0x4 - 0x5
   bool m_bHull_TinyCentered; // 0x5 - 0x6
   bool m_bHull_Large; // 0x6 - 0x7
   bool m_bHull_LargeCentered; // 0x7 - 0x8
   bool m_bHull_MediumTall; // 0x8 - 0x9
   bool m_bHull_Small; // 0x9 - 0xA
}; // size - 0xA


class IEconItemInterface /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IGapHost_GameEntity /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IHasAttributes /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IKBoneNameAndIndex_t /* "animgraphlib" */
{
public:
   CUtlString m_Name; // 0x0 - 0x8
   unsigned char pad_8[0x8]; // 0x8 - 0x10
}; // size - 0x10


class IKDemoCaptureSettings_t /* "animgraphlib" */
{
public:
   CUtlString m_parentBoneName; // 0x0 - 0x8
   IKChannelMode m_eMode; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlString m_ikChainName; // 0x10 - 0x18
   CUtlString m_oneBoneStart; // 0x18 - 0x20
   CUtlString m_oneBoneEnd; // 0x20 - 0x28
}; // size - 0x28


class IKSolverSettings_t /* "animgraphlib" */
{
public:
   IKSolverType m_SolverType; // 0x0 - 0x4
   int32_t m_nNumIterations; // 0x4 - 0x8
}; // size - 0x8


class IKTargetSettings_t /* "animgraphlib" */
{
public:
   IKTargetSource m_TargetSource; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   IKBoneNameAndIndex_t m_Bone; // 0x8 - 0x18
   AnimParamID m_AnimgraphParameterNamePosition; // 0x18 - 0x1C
   AnimParamID m_AnimgraphParameterNameOrientation; // 0x1C - 0x20
   IKTargetCoordinateSystem m_TargetCoordSystem; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
}; // size - 0x28


class IParticleCollection /* "particles" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
}; // size - 0x10


class IPhysicsPlayerController /* "vphysics2" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IPulseComponentEntity /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IRagdoll /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class InfoForResourceTypeCAnimData /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCAnimationGroup /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCCSGOEconItem /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCChoreoSceneFileData /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCCompositeMaterialKit /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCDOTANovelsList /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCDOTAPatchNotesList /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCDotaItemDefinitionResource /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCEntityLump /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCGcExportableExternalData /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCJavaScriptResource /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCModel /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCMorphSetData /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCNmClip /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCNmGraphDefinition /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCNmGraphVariation /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCNmSkeleton /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCPanoramaDynamicImages /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCPanoramaLayout /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCPanoramaStyle /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCPhysAggregateData /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCPostProcessingResource /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCRenderMesh /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCResourceManifestInternal /* "resourcefile" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCResponseRulesList /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCSequenceGroupData /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCSmartProp /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCTextureBase /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCTypeScriptResource /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCVDataResource /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCVMixListResource /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCVPhysXSurfacePropertiesList /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCVSoundEventScriptList /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCVSoundStackScriptList /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCVoiceContainerBase /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCVoxelVisibility /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeCWorldNode /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeIAnimGraphModelBinding /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeIMaterial2 /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeIParticleSnapshot /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeIParticleSystemDefinition /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeIPulseGraphDef /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeIVectorGraphic /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeManifestTestResource_t /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeProceduralTestResource_t /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeTestResource_t /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeVMapResourceData_t /* "worldrenderer" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoForResourceTypeWorld_t /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class InfoOverlayData_t /* "worldrenderer" */
{
public:
   matrix3x4_t m_transform; // 0x0 - 0x30
   float m_flWidth; // 0x30 - 0x34
   float m_flHeight; // 0x34 - 0x38
   float m_flDepth; // 0x38 - 0x3C
   Vector2D m_vUVStart; // 0x3C - 0x44
   Vector2D m_vUVEnd; // 0x44 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x50 - 0x58
   int32_t m_nRenderOrder; // 0x58 - 0x5C
   Vector4D m_vTintColor; // 0x5C - 0x6C
   int32_t m_nSequenceOverride; // 0x6C - 0x70
}; // size - 0x70


class JiggleBoneSettingsList_t /* "animgraphlib" */
{
public:
   CUtlVector< JiggleBoneSettings_t > m_boneSettings; // 0x0 - 0x18
}; // size - 0x18


class JiggleBoneSettings_t /* "animgraphlib" */
{
public:
   int32_t m_nBoneIndex; // 0x0 - 0x4
   float m_flSpringStrength; // 0x4 - 0x8
   float m_flMaxTimeStep; // 0x8 - 0xC
   float m_flDamping; // 0xC - 0x10
   Vector m_vBoundsMaxLS; // 0x10 - 0x1C
   Vector m_vBoundsMinLS; // 0x1C - 0x28
   JiggleBoneSimSpace m_eSimSpace; // 0x28 - 0x2C
}; // size - 0x2C


class LookAtBone_t /* "animgraphlib" */
{
public:
   int32_t m_index; // 0x0 - 0x4
   float m_weight; // 0x4 - 0x8
}; // size - 0x8


class LookAtOpFixedSettings_t /* "animgraphlib" */
{
public:
   CAnimAttachment m_attachment; // 0x0 - 0x80
   CAnimInputDamping m_damping; // 0x80 - 0x90
   CUtlVector< LookAtBone_t > m_bones; // 0x90 - 0xA8
   float m_flYawLimit; // 0xA8 - 0xAC
   float m_flPitchLimit; // 0xAC - 0xB0
   float m_flHysteresisInnerAngle; // 0xB0 - 0xB4
   float m_flHysteresisOuterAngle; // 0xB4 - 0xB8
   bool m_bRotateYawForward; // 0xB8 - 0xB9
   bool m_bMaintainUpDirection; // 0xB9 - 0xBA
   bool m_bTargetIsPosition; // 0xBA - 0xBB
   bool m_bUseHysteresis; // 0xBB - 0xBC
   unsigned char pad_BC[0x4]; // 0xBC - 0xC0
}; // size - 0xC0


class ManifestTestResource_t /* "resourcesystem" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; // 0x8 - 0x10
}; // size - 0x10


class MaterialGroup_t /* "modellib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // 0x8 - 0x20
}; // size - 0x20


class MaterialOverride_t /* "worldrenderer" */ : public BaseSceneObjectOverride_t /* "worldrenderer" */
{
public:
   uint32_t m_nSubSceneObject; // 0x4 - 0x8
   uint32_t m_nDrawCallIndex; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x10 - 0x18
}; // size - 0x18


class MaterialParamBuffer_t /* "materialsystem2" */ : public MaterialParam_t /* "materialsystem2" */
{
public:
   CUtlBinaryBlock m_value; // 0x8 - 0x20
}; // size - 0x20


class MaterialParamFloat_t /* "materialsystem2" */ : public MaterialParam_t /* "materialsystem2" */
{
public:
   float m_flValue; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class MaterialParamInt_t /* "materialsystem2" */ : public MaterialParam_t /* "materialsystem2" */
{
public:
   int32_t m_nValue; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class MaterialParamString_t /* "materialsystem2" */ : public MaterialParam_t /* "materialsystem2" */
{
public:
   CUtlString m_value; // 0x8 - 0x10
}; // size - 0x10


class MaterialParamTexture_t /* "materialsystem2" */ : public MaterialParam_t /* "materialsystem2" */
{
public:
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue; // 0x8 - 0x10
}; // size - 0x10


class MaterialParamVector_t /* "materialsystem2" */ : public MaterialParam_t /* "materialsystem2" */
{
public:
   Vector4D m_value; // 0x8 - 0x18
}; // size - 0x18


class MaterialResourceData_t /* "materialsystem2" */
{
public:
   CUtlString m_materialName; // 0x0 - 0x8
   CUtlString m_shaderName; // 0x8 - 0x10
   CUtlVector< MaterialParamInt_t > m_intParams; // 0x10 - 0x28
   CUtlVector< MaterialParamFloat_t > m_floatParams; // 0x28 - 0x40
   CUtlVector< MaterialParamVector_t > m_vectorParams; // 0x40 - 0x58
   CUtlVector< MaterialParamTexture_t > m_textureParams; // 0x58 - 0x70
   CUtlVector< MaterialParamBuffer_t > m_dynamicParams; // 0x70 - 0x88
   CUtlVector< MaterialParamBuffer_t > m_dynamicTextureParams; // 0x88 - 0xA0
   CUtlVector< MaterialParamInt_t > m_intAttributes; // 0xA0 - 0xB8
   CUtlVector< MaterialParamFloat_t > m_floatAttributes; // 0xB8 - 0xD0
   CUtlVector< MaterialParamVector_t > m_vectorAttributes; // 0xD0 - 0xE8
   CUtlVector< MaterialParamTexture_t > m_textureAttributes; // 0xE8 - 0x100
   CUtlVector< MaterialParamString_t > m_stringAttributes; // 0x100 - 0x118
   CUtlVector< CUtlString > m_renderAttributesUsed; // 0x118 - 0x130
}; // size - 0x130


class MaterialVariable_t /* "particles" */
{
public:
   CUtlString m_strVariable; // 0x0 - 0x8
   ParticleAttributeIndex_t m_nVariableField; // 0x8 - 0xC
   float m_flScale; // 0xC - 0x10
}; // size - 0x10


class ModelBoneFlexDriverControl_t /* "modellib" */
{
public:
   ModelBoneFlexComponent_t m_nBoneComponent; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlString m_flexController; // 0x8 - 0x10
   uint32_t m_flexControllerToken; // 0x10 - 0x14
   float m_flMin; // 0x14 - 0x18
   float m_flMax; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class ModelBoneFlexDriver_t /* "modellib" */
{
public:
   CUtlString m_boneName; // 0x0 - 0x8
   uint32_t m_boneNameToken; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlVector< ModelBoneFlexDriverControl_t > m_controls; // 0x10 - 0x28
}; // size - 0x28


class ModelConfigHandle_t /* "server" */
{
public:
   uint32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class ModelReference_t /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCModel > m_model; // 0x0 - 0x8
   float m_flRelativeProbabilityOfSpawn; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class ModelSkeletonData_t /* "modellib" */
{
public:

   enum class BoneFlags_t : std::uint32_t
   {
      FLAG_NO_BONE_FLAGS = 0,
      FLAG_BONEFLEXDRIVER = 4,
      FLAG_CLOTH = 8,
      FLAG_PHYSICS = 16,
      FLAG_ATTACHMENT = 32,
      FLAG_ANIMATION = 64,
      FLAG_MESH = 128,
      FLAG_HITBOX = 256,
      FLAG_BONE_USED_BY_VERTEX_LOD0 = 1024,
      FLAG_BONE_USED_BY_VERTEX_LOD1 = 2048,
      FLAG_BONE_USED_BY_VERTEX_LOD2 = 4096,
      FLAG_BONE_USED_BY_VERTEX_LOD3 = 8192,
      FLAG_BONE_USED_BY_VERTEX_LOD4 = 16384,
      FLAG_BONE_USED_BY_VERTEX_LOD5 = 32768,
      FLAG_BONE_USED_BY_VERTEX_LOD6 = 65536,
      FLAG_BONE_USED_BY_VERTEX_LOD7 = 131072,
      FLAG_BONE_MERGE_READ = 262144,
      FLAG_BONE_MERGE_WRITE = 524288,
      FLAG_ALL_BONE_FLAGS = 1048575,
      BLEND_PREALIGNED = 1048576,
      FLAG_RIGIDLENGTH = 2097152,
      FLAG_PROCEDURAL = 4194304
   };
   CUtlVector< CUtlString > m_boneName; // 0x0 - 0x18
   CUtlVector< int16 > m_nParent; // 0x18 - 0x30
   CUtlVector< float32 > m_boneSphere; // 0x30 - 0x48
   CUtlVector< uint32 > m_nFlag; // 0x48 - 0x60
   CUtlVector< Vector > m_bonePosParent; // 0x60 - 0x78
   CUtlVector< QuaternionStorage > m_boneRotParent; // 0x78 - 0x90
   CUtlVector< float32 > m_boneScaleParent; // 0x90 - 0xA8
}; // size - 0xA8


class MoodAnimationLayer_t /* "animationsystem" */
{
public:
   CUtlString m_sName; // 0x0 - 0x8
   bool m_bActiveListening; // 0x8 - 0x9
   bool m_bActiveTalking; // 0x9 - 0xA
   unsigned char pad_A[0x6]; // 0xA - 0x10
   CUtlVector< MoodAnimation_t > m_layerAnimations; // 0x10 - 0x28
   CRangeFloat m_flIntensity; // 0x28 - 0x30
   CRangeFloat m_flDurationScale; // 0x30 - 0x38
   bool m_bScaleWithInts; // 0x38 - 0x39
   unsigned char pad_39[0x3]; // 0x39 - 0x3C
   CRangeFloat m_flNextStart; // 0x3C - 0x44
   CRangeFloat m_flStartOffset; // 0x44 - 0x4C
   CRangeFloat m_flEndOffset; // 0x4C - 0x54
   float m_flFadeIn; // 0x54 - 0x58
   float m_flFadeOut; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
}; // size - 0x60


class MoodAnimation_t /* "animationsystem" */
{
public:
   CUtlString m_sName; // 0x0 - 0x8
   float m_flWeight; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class MotionBlendItem /* "animgraphlib" */
{
public:
   CSmartPtr< CMotionNode > m_pChild; // 0x0 - 0x8
   float m_flKeyValue; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class MotionDBIndex /* "animgraphlib" */
{
public:
   uint32_t m_nIndex; // 0x0 - 0x4
}; // size - 0x4


class MotionIndex /* "animgraphlib" */
{
public:
   uint16_t m_nGroup; // 0x0 - 0x2
   uint16_t m_nMotion; // 0x2 - 0x4
}; // size - 0x4


class NavGravity_t /* "navlib" */
{
public:
   Vector m_vGravity; // 0x0 - 0xC
   bool m_bDefault; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
}; // size - 0x10


class NmCompressionSettings_t /* "animlib" */
{
public:
   class QuantizationRange_t /* "animlib" */
   {
   public:
      float m_flRangeStart; // 0x0 - 0x4
      float m_flRangeLength; // 0x4 - 0x8
   }; // size - 0x8

   NmCompressionSettings_t::QuantizationRange_t m_translationRangeX; // 0x0 - 0x8
   NmCompressionSettings_t::QuantizationRange_t m_translationRangeY; // 0x8 - 0x10
   NmCompressionSettings_t::QuantizationRange_t m_translationRangeZ; // 0x10 - 0x18
   NmCompressionSettings_t::QuantizationRange_t m_scaleRange; // 0x18 - 0x20
   Quaternion m_constantRotation; // 0x20 - 0x30
   bool m_bIsRotationStatic; // 0x30 - 0x31
   bool m_bIsTranslationStatic; // 0x31 - 0x32
   bool m_bIsScaleStatic; // 0x32 - 0x33
   unsigned char pad_33[0xD]; // 0x33 - 0x40
}; // size - 0x40



class NmPercent_t /* "animlib" */
{
public:
   float m_flValue; // 0x0 - 0x4
}; // size - 0x4


class NmSyncTrackTimeRange_t /* "animlib" */
{
public:
   NmSyncTrackTime_t m_startTime; // 0x0 - 0x8
   NmSyncTrackTime_t m_endTime; // 0x8 - 0x10
}; // size - 0x10


class NmSyncTrackTime_t /* "animlib" */
{
public:
   int32_t m_nEventIdx; // 0x0 - 0x4
   NmPercent_t m_percentageThrough; // 0x4 - 0x8
}; // size - 0x8


class NodeData_t /* "worldrenderer" */
{
public:
   int32_t m_nParent; // 0x0 - 0x4
   Vector m_vOrigin; // 0x4 - 0x10
   Vector m_vMinBounds; // 0x10 - 0x1C
   Vector m_vMaxBounds; // 0x1C - 0x28
   float m_flMinimumDistance; // 0x28 - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
   CUtlVector< int32 > m_ChildNodeIndices; // 0x30 - 0x48
   CUtlString m_worldNodePrefix; // 0x48 - 0x50
}; // size - 0x50


class OldFeEdge_t /* "physicslib" */
{
public:
   float32 m_flK[3]; // 0x0 - 0xC
   float invA; // 0xC - 0x10
   float t; // 0x10 - 0x14
   float flThetaRelaxed; // 0x14 - 0x18
   float flThetaFactor; // 0x18 - 0x1C
   float c01; // 0x1C - 0x20
   float c02; // 0x20 - 0x24
   float c03; // 0x24 - 0x28
   float c04; // 0x28 - 0x2C
   float flAxialModelDist; // 0x2C - 0x30
   float32 flAxialModelWeights[4]; // 0x30 - 0x40
   uint16 m_nNode[4]; // 0x40 - 0x48
}; // size - 0x48


class PARTICLE_EHANDLE__ /* "particleslib" */
{
public:
   int32_t unused; // 0x0 - 0x4
}; // size - 0x4


class PARTICLE_WORLD_HANDLE__ /* "particleslib" */
{
public:
   int32_t unused; // 0x0 - 0x4
}; // size - 0x4


class PGDInstruction_t /* "pulse_runtime_lib" */
{
public:
   PulseInstructionCode_t m_nCode; // 0x0 - 0x2
   unsigned char pad_2[0x2]; // 0x2 - 0x4
   PulseRuntimeVarIndex_t m_nVar; // 0x4 - 0x8
   PulseRuntimeRegisterIndex_t m_nReg0; // 0x8 - 0xA
   PulseRuntimeRegisterIndex_t m_nReg1; // 0xA - 0xC
   PulseRuntimeRegisterIndex_t m_nReg2; // 0xC - 0xE
   unsigned char pad_E[0x2]; // 0xE - 0x10
   PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // 0x10 - 0x14
   PulseRuntimeChunkIndex_t m_nChunk; // 0x14 - 0x18
   int32_t m_nDestInstruction; // 0x18 - 0x1C
   PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x1C - 0x20
   PulseRuntimeConstantIndex_t m_nConstIdx; // 0x20 - 0x22
   PulseRuntimeDomainValueIndex_t m_nDomainValueIdx; // 0x22 - 0x24
   PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx; // 0x24 - 0x26
   unsigned char pad_26[0x12]; // 0x26 - 0x38
}; // size - 0x38


class PackedAABB_t /* "mathlib_extended" */
{
public:
   uint32_t m_nPackedMin; // 0x0 - 0x4
   uint32_t m_nPackedMax; // 0x4 - 0x8
}; // size - 0x8


class ParamSpanSample_t /* "animgraphlib" */
{
public:
   CAnimVariant m_value; // 0x0 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
   float m_flCycle; // 0x14 - 0x18
}; // size - 0x18


class ParamSpan_t /* "animgraphlib" */
{
public:
   CUtlVector< ParamSpanSample_t > m_samples; // 0x0 - 0x18
   CAnimParamHandle m_hParam; // 0x18 - 0x1A
   AnimParamType_t m_eParamType; // 0x1A - 0x1B
   unsigned char pad_1B[0x1]; // 0x1B - 0x1C
   float m_flStartCycle; // 0x1C - 0x20
   float m_flEndCycle; // 0x20 - 0x24
   unsigned char pad_24[0x4]; // 0x24 - 0x28
}; // size - 0x28


class ParticleAttributeIndex_t /* "particles" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class ParticleChildrenInfo_t /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // 0x0 - 0x8
   float m_flDelay; // 0x8 - 0xC
   bool m_bEndCap; // 0xC - 0xD
   bool m_bDisableChild; // 0xD - 0xE
   unsigned char pad_E[0x2]; // 0xE - 0x10
   ParticleDetailLevel_t m_nDetailLevel; // 0x10 - 0x14
   unsigned char pad_14[0xC]; // 0x14 - 0x20
}; // size - 0x20


class ParticleControlPointConfiguration_t /* "particles" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8 - 0x20
   ParticlePreviewState_t m_previewState; // 0x20 - 0x88
}; // size - 0x88


class ParticleControlPointDriver_t /* "particles" */
{
public:
   int32_t m_iControlPoint; // 0x0 - 0x4
   ParticleAttachment_t m_iAttachType; // 0x4 - 0x8
   CUtlString m_attachmentName; // 0x8 - 0x10
   Vector m_vecOffset; // 0x10 - 0x1C
   QAngle m_angOffset; // 0x1C - 0x28
   CUtlString m_entityName; // 0x28 - 0x30
}; // size - 0x30


class ParticleIndex_t /* "server" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class ParticleNamedValueConfiguration_t /* "particleslib" */
{
public:
   CUtlString m_ConfigName; // 0x0 - 0x8
   KeyValues3 m_ConfigValue; // 0x8 - 0x18
   ParticleAttachment_t m_iAttachType; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
   CUtlString m_BoundEntityPath; // 0x20 - 0x28
   CUtlString m_strEntityScope; // 0x28 - 0x30
   CUtlString m_strAttachmentName; // 0x30 - 0x38
}; // size - 0x38


class ParticleNamedValueSource_t /* "particleslib" */
{
public:
   CUtlString m_Name; // 0x0 - 0x8
   bool m_IsPublic; // 0x8 - 0x9
   unsigned char pad_9[0x3]; // 0x9 - 0xC
   PulseValueType_t m_ValueType; // 0xC - 0x10
   ParticleNamedValueConfiguration_t m_DefaultConfig; // 0x10 - 0x48
   CUtlVector< ParticleNamedValueConfiguration_t > m_NamedConfigs; // 0x48 - 0x60
}; // size - 0x60


class ParticlePreviewBodyGroup_t /* "particles" */
{
public:
   CUtlString m_bodyGroupName; // 0x0 - 0x8
   int32_t m_nValue; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class ParticlePreviewState_t /* "particles" */
{
public:
   CUtlString m_previewModel; // 0x0 - 0x8
   uint32_t m_nModSpecificData; // 0x8 - 0xC
   PetGroundType_t m_groundType; // 0xC - 0x10
   CUtlString m_sequenceName; // 0x10 - 0x18
   int32_t m_nFireParticleOnSequenceFrame; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
   CUtlString m_hitboxSetName; // 0x20 - 0x28
   CUtlString m_materialGroupName; // 0x28 - 0x30
   CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups; // 0x30 - 0x48
   float m_flPlaybackSpeed; // 0x48 - 0x4C
   float m_flParticleSimulationRate; // 0x4C - 0x50
   bool m_bShouldDrawHitboxes; // 0x50 - 0x51
   bool m_bShouldDrawAttachments; // 0x51 - 0x52
   bool m_bShouldDrawAttachmentNames; // 0x52 - 0x53
   bool m_bShouldDrawControlPointAxes; // 0x53 - 0x54
   bool m_bAnimationNonLooping; // 0x54 - 0x55
   unsigned char pad_55[0x3]; // 0x55 - 0x58
   Vector m_vecPreviewGravity; // 0x58 - 0x64
   unsigned char pad_64[0x4]; // 0x64 - 0x68
}; // size - 0x68


class PermEntityLumpData_t /* "worldrenderer" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlString m_name; // 0x8 - 0x10
   CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x10 - 0x28
   CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues; // 0x28 - 0x38
}; // size - 0x38


class PermModelDataAnimatedMaterialAttribute_t /* "modellib" */
{
public:
   CUtlString m_AttributeName; // 0x0 - 0x8
   int32_t m_nNumChannels; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class PermModelData_t /* "modellib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   PermModelInfo_t m_modelInfo; // 0x8 - 0x60
   CUtlVector< PermModelExtPart_t > m_ExtParts; // 0x60 - 0x78
   CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes; // 0x78 - 0x90
   CUtlVector< uint64 > m_refMeshGroupMasks; // 0x90 - 0xA8
   CUtlVector< uint64 > m_refPhysGroupMasks; // 0xA8 - 0xC0
   CUtlVector< uint8 > m_refLODGroupMasks; // 0xC0 - 0xD8
   CUtlVector< float32 > m_lodGroupSwitchDistances; // 0xD8 - 0xF0
   CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData; // 0xF0 - 0x108
   CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData; // 0x108 - 0x120
   CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups; // 0x120 - 0x138
   CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups; // 0x138 - 0x150
   CUtlVector< CUtlString > m_meshGroups; // 0x150 - 0x168
   CUtlVector< MaterialGroup_t > m_materialGroups; // 0x168 - 0x180
   uint64_t m_nDefaultMeshGroupMask; // 0x180 - 0x188
   ModelSkeletonData_t m_modelSkeleton; // 0x188 - 0x230
   CUtlVector< int16 > m_remappingTable; // 0x230 - 0x248
   CUtlVector< uint16 > m_remappingTableStarts; // 0x248 - 0x260
   CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers; // 0x260 - 0x278
   CModelConfigList* m_pModelConfigList; // 0x278 - 0x280
   CUtlVector< CUtlString > m_BodyGroupsHiddenInTools; // 0x280 - 0x298
   CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels; // 0x298 - 0x2B0
   CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes; // 0x2B0 - 0x2C8
}; // size - 0x2C8


class PermModelExtPart_t /* "modellib" */
{
public:
   CTransform m_Transform; // 0x0 - 0x20
   CUtlString m_Name; // 0x20 - 0x28
   int32_t m_nParent; // 0x28 - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
   CStrongHandle< InfoForResourceTypeCModel > m_refModel; // 0x30 - 0x38
   unsigned char pad_38[0x8]; // 0x38 - 0x40
}; // size - 0x40


class PermModelInfo_t /* "modellib" */
{
public:

   enum class FlagEnum : std::uint32_t
   {
      FLAG_TRANSLUCENT = 1,
      FLAG_TRANSLUCENT_TWO_PASS = 2,
      FLAG_MODEL_IS_RUNTIME_COMBINED = 4,
      FLAG_SOURCE1_IMPORT = 8,
      FLAG_MODEL_PART_CHILD = 16,
      FLAG_NAV_GEN_NONE = 32,
      FLAG_NAV_GEN_HULL = 64,
      FLAG_NO_FORCED_FADE = 2048,
      FLAG_HAS_SKINNED_MESHES = 1024,
      FLAG_DO_NOT_CAST_SHADOWS = 131072,
      FLAG_FORCE_PHONEME_CROSSFADE = 4096,
      FLAG_NO_ANIM_EVENTS = 1048576,
      FLAG_ANIMATION_DRIVEN_FLEXES = 2097152,
      FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 4194304,
      FLAG_MODEL_DOC = 8388608
   };
   uint32_t m_nFlags; // 0x0 - 0x4
   Vector m_vHullMin; // 0x4 - 0x10
   Vector m_vHullMax; // 0x10 - 0x1C
   Vector m_vViewMin; // 0x1C - 0x28
   Vector m_vViewMax; // 0x28 - 0x34
   float m_flMass; // 0x34 - 0x38
   Vector m_vEyePosition; // 0x38 - 0x44
   float m_flMaxEyeDeflection; // 0x44 - 0x48
   CUtlString m_sSurfaceProperty; // 0x48 - 0x50
   CUtlString m_keyValueText; // 0x50 - 0x58
}; // size - 0x58


class PhysFeModelDesc_t /* "physicslib" */
{
public:
   CUtlVector< uint32 > m_CtrlHash; // 0x0 - 0x18
   CUtlVector< CUtlString > m_CtrlName; // 0x18 - 0x30
   uint32_t m_nStaticNodeFlags; // 0x30 - 0x34
   uint32_t m_nDynamicNodeFlags; // 0x34 - 0x38
   float m_flLocalForce; // 0x38 - 0x3C
   float m_flLocalRotation; // 0x3C - 0x40
   uint16_t m_nNodeCount; // 0x40 - 0x42
   uint16_t m_nStaticNodes; // 0x42 - 0x44
   uint16_t m_nRotLockStaticNodes; // 0x44 - 0x46
   uint16_t m_nFirstPositionDrivenNode; // 0x46 - 0x48
   uint16_t m_nSimdTriCount1; // 0x48 - 0x4A
   uint16_t m_nSimdTriCount2; // 0x4A - 0x4C
   uint16_t m_nSimdQuadCount1; // 0x4C - 0x4E
   uint16_t m_nSimdQuadCount2; // 0x4E - 0x50
   uint16_t m_nQuadCount1; // 0x50 - 0x52
   uint16_t m_nQuadCount2; // 0x52 - 0x54
   uint16_t m_nTreeDepth; // 0x54 - 0x56
   uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x56 - 0x58
   uint16_t m_nRopeCount; // 0x58 - 0x5A
   unsigned char pad_5A[0x6]; // 0x5A - 0x60
   CUtlVector< uint16 > m_Ropes; // 0x60 - 0x78
   CUtlVector< FeNodeBase_t > m_NodeBases; // 0x78 - 0x90
   CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // 0x90 - 0xA8
   CUtlVector< FeQuad_t > m_Quads; // 0xA8 - 0xC0
   CUtlVector< FeSimdQuad_t > m_SimdQuads; // 0xC0 - 0xD8
   CUtlVector< FeSimdTri_t > m_SimdTris; // 0xD8 - 0xF0
   CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // 0xF0 - 0x108
   CUtlVector< FeSimdRodConstraintAnim_t > m_SimdRodsAnim; // 0x108 - 0x120
   CUtlVector< CTransform > m_InitPose; // 0x120 - 0x138
   CUtlVector< FeRodConstraint_t > m_Rods; // 0x138 - 0x150
   CUtlVector< FeTwistConstraint_t > m_Twists; // 0x150 - 0x168
   CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x168 - 0x180
   CUtlVector< float32 > m_NodeInvMasses; // 0x180 - 0x198
   CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x198 - 0x1B0
   CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x1B0 - 0x1C8
   CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x1C8 - 0x1E0
   CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // 0x1E0 - 0x1F8
   CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // 0x1F8 - 0x210
   CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // 0x210 - 0x228
   CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0x228 - 0x240
   CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0x240 - 0x258
   CUtlVector< float32 > m_LegacyStretchForce; // 0x258 - 0x270
   CUtlVector< float32 > m_NodeCollisionRadii; // 0x270 - 0x288
   CUtlVector< float32 > m_DynNodeFriction; // 0x288 - 0x2A0
   CUtlVector< float32 > m_LocalRotation; // 0x2A0 - 0x2B8
   CUtlVector< float32 > m_LocalForce; // 0x2B8 - 0x2D0
   CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x2D0 - 0x2E8
   CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x2E8 - 0x300
   CUtlVector< FeSphereRigid_t > m_SphereRigids; // 0x300 - 0x318
   CUtlVector< uint16 > m_WorldCollisionNodes; // 0x318 - 0x330
   CUtlVector< uint16 > m_TreeParents; // 0x330 - 0x348
   CUtlVector< uint16 > m_TreeCollisionMasks; // 0x348 - 0x360
   CUtlVector< FeTreeChildren_t > m_TreeChildren; // 0x360 - 0x378
   CUtlVector< uint16 > m_FreeNodes; // 0x378 - 0x390
   CUtlVector< FeFitMatrix_t > m_FitMatrices; // 0x390 - 0x3A8
   CUtlVector< FeFitWeight_t > m_FitWeights; // 0x3A8 - 0x3C0
   CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x3C0 - 0x3D8
   CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x3D8 - 0x3F0
   CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x3F0 - 0x408
   CUtlVector< FeKelagerBend2_t > m_KelagerBends; // 0x408 - 0x420
   CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x420 - 0x438
   CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // 0x438 - 0x450
   CUtlVector< uint16 > m_SourceElems; // 0x450 - 0x468
   CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // 0x468 - 0x480
   CUtlVector< FeTri_t > m_Tris; // 0x480 - 0x498
   uint16_t m_nTriCount1; // 0x498 - 0x49A
   uint16_t m_nTriCount2; // 0x49A - 0x49C
   uint8_t m_nReservedUint8; // 0x49C - 0x49D
   uint8_t m_nExtraPressureIterations; // 0x49D - 0x49E
   uint8_t m_nExtraGoalIterations; // 0x49E - 0x49F
   uint8_t m_nExtraIterations; // 0x49F - 0x4A0
   CUtlVector< FeBoxRigid_t > m_BoxRigids; // 0x4A0 - 0x4B8
   CUtlVector< uint8 > m_DynNodeVertexSet; // 0x4B8 - 0x4D0
   CUtlVector< uint32 > m_VertexSetNames; // 0x4D0 - 0x4E8
   CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x4E8 - 0x500
   CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // 0x500 - 0x518
   CUtlVector< uint8 > m_MorphSetData; // 0x518 - 0x530
   CUtlVector< FeVertexMapDesc_t > m_VertexMaps; // 0x530 - 0x548
   CUtlVector< uint8 > m_VertexMapValues; // 0x548 - 0x560
   CUtlVector< FeEffectDesc_t > m_Effects; // 0x560 - 0x578
   CUtlVector< FeCtrlOffset_t > m_LockToParent; // 0x578 - 0x590
   CUtlVector< uint16 > m_LockToGoal; // 0x590 - 0x5A8
   CUtlVector< int16 > m_SkelParents; // 0x5A8 - 0x5C0
   CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases; // 0x5C0 - 0x5D8
   float m_flInternalPressure; // 0x5D8 - 0x5DC
   float m_flDefaultTimeDilation; // 0x5DC - 0x5E0
   float m_flWindage; // 0x5E0 - 0x5E4
   float m_flWindDrag; // 0x5E4 - 0x5E8
   float m_flDefaultSurfaceStretch; // 0x5E8 - 0x5EC
   float m_flDefaultThreadStretch; // 0x5EC - 0x5F0
   float m_flDefaultGravityScale; // 0x5F0 - 0x5F4
   float m_flDefaultVelAirDrag; // 0x5F4 - 0x5F8
   float m_flDefaultExpAirDrag; // 0x5F8 - 0x5FC
   float m_flDefaultVelQuadAirDrag; // 0x5FC - 0x600
   float m_flDefaultExpQuadAirDrag; // 0x600 - 0x604
   float m_flRodVelocitySmoothRate; // 0x604 - 0x608
   float m_flQuadVelocitySmoothRate; // 0x608 - 0x60C
   float m_flAddWorldCollisionRadius; // 0x60C - 0x610
   float m_flDefaultVolumetricSolveAmount; // 0x610 - 0x614
   float m_flMotionSmoothCDT; // 0x614 - 0x618
   uint16_t m_nRodVelocitySmoothIterations; // 0x618 - 0x61A
   uint16_t m_nQuadVelocitySmoothIterations; // 0x61A - 0x61C
   unsigned char pad_61C[0x4]; // 0x61C - 0x620
}; // size - 0x620


class PhysSoftbodyDesc_t /* "modellib" */
{
public:
   CUtlVector< uint32 > m_ParticleBoneHash; // 0x0 - 0x18
   CUtlVector< RnSoftbodyParticle_t > m_Particles; // 0x18 - 0x30
   CUtlVector< RnSoftbodySpring_t > m_Springs; // 0x30 - 0x48
   CUtlVector< RnSoftbodyCapsule_t > m_Capsules; // 0x48 - 0x60
   CUtlVector< CTransform > m_InitPose; // 0x60 - 0x78
   CUtlVector< CUtlString > m_ParticleBoneName; // 0x78 - 0x90
}; // size - 0x90


class PointCameraSettings_t /* "server" */
{
public:
   float m_flNearBlurryDistance; // 0x0 - 0x4
   float m_flNearCrispDistance; // 0x4 - 0x8
   float m_flFarCrispDistance; // 0x8 - 0xC
   float m_flFarBlurryDistance; // 0xC - 0x10
}; // size - 0x10


class PointDefinitionWithTimeValues_t /* "particles" */ : public PointDefinition_t /* "particles" */
{
public:
   float m_flTimeDuration; // 0x14 - 0x18
}; // size - 0x18


class PostProcessingBloomParameters_t /* "materialsystem2" */
{
public:
   BloomBlendMode_t m_blendMode; // 0x0 - 0x4
   float m_flBloomStrength; // 0x4 - 0x8
   float m_flScreenBloomStrength; // 0x8 - 0xC
   float m_flBlurBloomStrength; // 0xC - 0x10
   float m_flBloomThreshold; // 0x10 - 0x14
   float m_flBloomThresholdWidth; // 0x14 - 0x18
   float m_flSkyboxBloomStrength; // 0x18 - 0x1C
   float m_flBloomStartValue; // 0x1C - 0x20
   float32 m_flBlurWeight[5]; // 0x20 - 0x34
   Vector m_vBlurTint[5]; // 0x34 - 0x70
}; // size - 0x70


class PostProcessingLocalContrastParameters_t /* "materialsystem2" */
{
public:
   float m_flLocalContrastStrength; // 0x0 - 0x4
   float m_flLocalContrastEdgeStrength; // 0x4 - 0x8
   float m_flLocalContrastVignetteStart; // 0x8 - 0xC
   float m_flLocalContrastVignetteEnd; // 0xC - 0x10
   float m_flLocalContrastVignetteBlur; // 0x10 - 0x14
}; // size - 0x14


class PostProcessingResource_t /* "materialsystem2" */
{
public:
   bool m_bHasTonemapParams; // 0x0 - 0x1
   unsigned char pad_1[0x3]; // 0x1 - 0x4
   PostProcessingTonemapParameters_t m_toneMapParams; // 0x4 - 0x40
   bool m_bHasBloomParams; // 0x40 - 0x41
   unsigned char pad_41[0x3]; // 0x41 - 0x44
   PostProcessingBloomParameters_t m_bloomParams; // 0x44 - 0xB4
   bool m_bHasVignetteParams; // 0xB4 - 0xB5
   unsigned char pad_B5[0x3]; // 0xB5 - 0xB8
   PostProcessingVignetteParameters_t m_vignetteParams; // 0xB8 - 0xDC
   bool m_bHasLocalContrastParams; // 0xDC - 0xDD
   unsigned char pad_DD[0x3]; // 0xDD - 0xE0
   PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xE0 - 0xF4
   int32_t m_nColorCorrectionVolumeDim; // 0xF4 - 0xF8
   CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xF8 - 0x110
   bool m_bHasColorCorrection; // 0x110 - 0x111
   unsigned char pad_111[0x7]; // 0x111 - 0x118
}; // size - 0x118


class PostProcessingTonemapParameters_t /* "materialsystem2" */
{
public:
   float m_flExposureBias; // 0x0 - 0x4
   float m_flShoulderStrength; // 0x4 - 0x8
   float m_flLinearStrength; // 0x8 - 0xC
   float m_flLinearAngle; // 0xC - 0x10
   float m_flToeStrength; // 0x10 - 0x14
   float m_flToeNum; // 0x14 - 0x18
   float m_flToeDenom; // 0x18 - 0x1C
   float m_flWhitePoint; // 0x1C - 0x20
   float m_flLuminanceSource; // 0x20 - 0x24
   float m_flExposureBiasShadows; // 0x24 - 0x28
   float m_flExposureBiasHighlights; // 0x28 - 0x2C
   float m_flMinShadowLum; // 0x2C - 0x30
   float m_flMaxShadowLum; // 0x30 - 0x34
   float m_flMinHighlightLum; // 0x34 - 0x38
   float m_flMaxHighlightLum; // 0x38 - 0x3C
}; // size - 0x3C


class PostProcessingVignetteParameters_t /* "materialsystem2" */
{
public:
   float m_flVignetteStrength; // 0x0 - 0x4
   Vector2D m_vCenter; // 0x4 - 0xC
   float m_flRadius; // 0xC - 0x10
   float m_flRoundness; // 0x10 - 0x14
   float m_flFeather; // 0x14 - 0x18
   Vector m_vColorTint; // 0x18 - 0x24
}; // size - 0x24


class PulseCursorID_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseCursorYieldToken_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseDocNodeID_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseGraphExecutionHistoryCursorDesc_t /* "pulse_runtime_lib" */
{
public:
   CUtlVector< PulseCursorID_t > vecAncestorCursorIDs; // 0x0 - 0x18
   PulseDocNodeID_t nSpawnNodeID; // 0x18 - 0x1C
   PulseDocNodeID_t nRetiredAtNodeID; // 0x1C - 0x20
   float flLastReferenced; // 0x20 - 0x24
   int32_t nLastValidEntryIdx; // 0x24 - 0x28
}; // size - 0x28


class PulseGraphExecutionHistoryEntry_t /* "pulse_runtime_lib" */
{
public:
   PulseCursorID_t nCursorID; // 0x0 - 0x4
   PulseDocNodeID_t nEditorID; // 0x4 - 0x8
   float flExecTime; // 0x8 - 0xC
   uint32_t unFlags; // 0xC - 0x10
   CUtlSymbolLarge tagName; // 0x10 - 0x18
}; // size - 0x18


class PulseGraphExecutionHistoryNodeDesc_t /* "pulse_runtime_lib" */
{
public:
   CBufferString strCellDesc; // 0x0 - 0x10
   CUtlSymbolLarge strBindingName; // 0x10 - 0x18
}; // size - 0x18


class PulseGraphInstanceID_t /* "pulse_runtime_lib" */
{
public:
   uint32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseNodeDynamicOutflows_t /* "pulse_runtime_lib" */
{
public:
   class DynamicOutflow_t /* "pulse_runtime_lib" */
   {
   public:
      CGlobalSymbol m_OutflowID; // 0x0 - 0x8
      CPulse_OutflowConnection m_Connection; // 0x8 - 0x38
   }; // size - 0x38

   CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t > m_Outflows; // 0x0 - 0x18
}; // size - 0x18



class PulseRegisterMap_t /* "pulse_runtime_lib" */
{
public:
   KeyValues3 m_Inparams; // 0x0 - 0x10
   KeyValues3 m_Outparams; // 0x10 - 0x20
}; // size - 0x20


class PulseRuntimeBlackboardReferenceIndex_t /* "pulse_runtime_lib" */
{
public:
   int16_t m_Value; // 0x0 - 0x2
}; // size - 0x2


class PulseRuntimeCallInfoIndex_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseRuntimeCellIndex_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseRuntimeChunkIndex_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseRuntimeConstantIndex_t /* "pulse_runtime_lib" */
{
public:
   int16_t m_Value; // 0x0 - 0x2
}; // size - 0x2


class PulseRuntimeDomainValueIndex_t /* "pulse_runtime_lib" */
{
public:
   int16_t m_Value; // 0x0 - 0x2
}; // size - 0x2


class PulseRuntimeEntrypointIndex_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseRuntimeInvokeIndex_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseRuntimeOutputIndex_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseRuntimeRegisterIndex_t /* "pulse_runtime_lib" */
{
public:
   int16_t m_Value; // 0x0 - 0x2
}; // size - 0x2


class PulseRuntimeStateOffset_t /* "pulse_runtime_lib" */
{
public:
   uint16_t m_Value; // 0x0 - 0x2
}; // size - 0x2


class PulseRuntimeVarIndex_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseScriptedSequenceData_t /* "server" */
{
public:
   int32_t m_nActorID; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlString m_szPreIdleSequence; // 0x8 - 0x10
   CUtlString m_szEntrySequence; // 0x10 - 0x18
   CUtlString m_szSequence; // 0x18 - 0x20
   CUtlString m_szExitSequence; // 0x20 - 0x28
   bool m_bLoopPreIdleSequence; // 0x28 - 0x29
   bool m_bLoopActionSequence; // 0x29 - 0x2A
   bool m_bLoopPostIdleSequence; // 0x2A - 0x2B
   bool m_bIgnoreLookAt; // 0x2B - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
}; // size - 0x30


class QuestProgress /* "server" */
{
public:

   enum class Reason : std::uint32_t
   {
      QUEST_NONINITIALIZED = 0,
      QUEST_OK = 1,
      QUEST_NOT_ENOUGH_PLAYERS = 2,
      QUEST_WARMUP = 3,
      QUEST_NOT_CONNECTED_TO_STEAM = 4,
      QUEST_NONOFFICIAL_SERVER = 5,
      QUEST_NO_ENTITLEMENT = 6,
      QUEST_NO_QUEST = 7,
      QUEST_PLAYER_IS_BOT = 8,
      QUEST_WRONG_MAP = 9,
      QUEST_WRONG_MODE = 10,
      QUEST_NOT_SYNCED_WITH_SERVER = 11,
      QUEST_REASON_MAX = 12
   };
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class RagdollCreationParams_t /* "server" */
{
public:
   Vector m_vForce; // 0x0 - 0xC
   int32_t m_nForceBone; // 0xC - 0x10
   bool m_bForceCurrentWorldTransform; // 0x10 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
}; // size - 0x14


class RelationshipOverride_t /* "server" */ : public Relationship_t /* "server" */
{
public:
   CHandle< CBaseEntity > entity; // 0x8 - 0xC
   Class_T classType; // 0xC - 0x10
}; // size - 0x10


class RenderHairStrandInfo_t /* "modellib" */
{
public:
   uint32 m_nGuideHairIndices_nSurfaceTriIndex[2]; // 0x0 - 0x8
   uint16 m_vGuideBary_vBaseBary[4]; // 0x8 - 0x10
   uint16 m_vRootOffset_flLengthScale[4]; // 0x10 - 0x18
   uint16 m_nPackedBaseUv[2]; // 0x18 - 0x1C
   uint32_t m_nPackedSurfaceNormalOs; // 0x1C - 0x20
   uint32_t m_nPackedSurfaceTangentOs; // 0x20 - 0x24
}; // size - 0x24


class RenderInputLayoutField_t /* "rendersystemdx11" */
{
public:
   uint8 m_pSemanticName[32]; // 0x0 - 0x20
   int32_t m_nSemanticIndex; // 0x20 - 0x24
   uint32_t m_Format; // 0x24 - 0x28
   int32_t m_nOffset; // 0x28 - 0x2C
   int32_t m_nSlot; // 0x2C - 0x30
   RenderSlotType_t m_nSlotType; // 0x30 - 0x34
   int32_t m_nInstanceStepRate; // 0x34 - 0x38
}; // size - 0x38


class RenderProjectedMaterial_t /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x0 - 0x8
}; // size - 0x8


class RenderSkeletonBone_t /* "modellib" */
{
public:
   CUtlString m_boneName; // 0x0 - 0x8
   CUtlString m_parentName; // 0x8 - 0x10
   matrix3x4_t m_invBindPose; // 0x10 - 0x40
   SkeletonBoneBounds_t m_bbox; // 0x40 - 0x58
   float m_flSphereRadius; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
}; // size - 0x60


class ResourceId_t /* "resourcefile" */
{
public:
   uint64_t m_Value; // 0x0 - 0x8
}; // size - 0x8


class ResponseContext_t /* "server" */
{
public:
   CUtlSymbolLarge m_iszName; // 0x0 - 0x8
   CUtlSymbolLarge m_iszValue; // 0x8 - 0x10
   GameTime_t m_fExpirationTime; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class ResponseFollowup /* "server" */
{
public:
   char* followup_concept; // 0x0 - 0x8
   char* followup_contexts; // 0x8 - 0x10
   float followup_delay; // 0x10 - 0x14
   char* followup_target; // 0x14 - 0x1C
   char* followup_entityiotarget; // 0x1C - 0x24
   char* followup_entityioinput; // 0x24 - 0x2C
   float followup_entityiodelay; // 0x2C - 0x30
   bool bFired; // 0x30 - 0x31
}; // size - 0x31


class ResponseParams /* "server" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   int16_t odds; // 0x10 - 0x12
   int16_t flags; // 0x12 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
   ResponseFollowup* m_pFollowup; // 0x18 - 0x20
}; // size - 0x20


class RnBlendVertex_t /* "physicslib" */
{
public:
   uint16_t m_nWeight0; // 0x0 - 0x2
   uint16_t m_nIndex0; // 0x2 - 0x4
   uint16_t m_nWeight1; // 0x4 - 0x6
   uint16_t m_nIndex1; // 0x6 - 0x8
   uint16_t m_nWeight2; // 0x8 - 0xA
   uint16_t m_nIndex2; // 0xA - 0xC
   uint16_t m_nFlags; // 0xC - 0xE
   uint16_t m_nTargetIndex; // 0xE - 0x10
}; // size - 0x10


class RnCapsuleDesc_t /* "physicslib" */ : public RnShapeDesc_t /* "physicslib" */
{
public:
   RnCapsule_t m_Capsule; // 0x10 - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
}; // size - 0x30


class RnCapsule_t /* "physicslib" */
{
public:
   Vector m_vCenter[2]; // 0x0 - 0x18
   float m_flRadius; // 0x18 - 0x1C
}; // size - 0x1C


class RnFace_t /* "physicslib" */
{
public:
   uint8_t m_nEdge; // 0x0 - 0x1
}; // size - 0x1


class RnHalfEdge_t /* "physicslib" */
{
public:
   uint8_t m_nNext; // 0x0 - 0x1
   uint8_t m_nTwin; // 0x1 - 0x2
   uint8_t m_nOrigin; // 0x2 - 0x3
   uint8_t m_nFace; // 0x3 - 0x4
}; // size - 0x4


class RnHullDesc_t /* "physicslib" */ : public RnShapeDesc_t /* "physicslib" */
{
public:
   RnHull_t m_Hull; // 0x10 - 0x108
}; // size - 0x108


class RnHull_t /* "physicslib" */
{
public:
   Vector m_vCentroid; // 0x0 - 0xC
   float m_flMaxAngularRadius; // 0xC - 0x10
   AABB_t m_Bounds; // 0x10 - 0x28
   Vector m_vOrthographicAreas; // 0x28 - 0x34
   matrix3x4_t m_MassProperties; // 0x34 - 0x64
   float m_flVolume; // 0x64 - 0x68
   float m_flSurfaceArea; // 0x68 - 0x6C
   unsigned char pad_6C[0x4]; // 0x6C - 0x70
   CUtlVector< RnVertex_t > m_Vertices; // 0x70 - 0x88
   CUtlVector< Vector > m_VertexPositions; // 0x88 - 0xA0
   CUtlVector< RnHalfEdge_t > m_Edges; // 0xA0 - 0xB8
   CUtlVector< RnFace_t > m_Faces; // 0xB8 - 0xD0
   CUtlVector< RnPlane_t > m_FacePlanes; // 0xD0 - 0xE8
   uint32_t m_nFlags; // 0xE8 - 0xEC
   unsigned char pad_EC[0x4]; // 0xEC - 0xF0
   CRegionSVM* m_pRegionSVM; // 0xF0 - 0xF8
}; // size - 0xF8


class RnMeshDesc_t /* "physicslib" */ : public RnShapeDesc_t /* "physicslib" */
{
public:
   RnMesh_t m_Mesh; // 0x10 - 0xB8
}; // size - 0xB8


class RnMesh_t /* "physicslib" */
{
public:
   Vector m_vMin; // 0x0 - 0xC
   Vector m_vMax; // 0xC - 0x18
   CUtlVector< RnNode_t > m_Nodes; // 0x18 - 0x30
   CUtlVectorSIMDPaddedVector m_Vertices; // 0x30 - 0x48
   CUtlVector< RnTriangle_t > m_Triangles; // 0x48 - 0x60
   CUtlVector< RnWing_t > m_Wings; // 0x60 - 0x78
   CUtlVector< uint8 > m_Materials; // 0x78 - 0x90
   Vector m_vOrthographicAreas; // 0x90 - 0x9C
   uint32_t m_nFlags; // 0x9C - 0xA0
   uint32_t m_nDebugFlags; // 0xA0 - 0xA4
   unsigned char pad_A4[0x4]; // 0xA4 - 0xA8
}; // size - 0xA8


class RnNode_t /* "physicslib" */
{
public:
   Vector m_vMin; // 0x0 - 0xC
   uint32_t m_nChildren; // 0xC - 0x10
   Vector m_vMax; // 0x10 - 0x1C
   uint32_t m_nTriangleOffset; // 0x1C - 0x20
}; // size - 0x20


class RnPlane_t /* "physicslib" */
{
public:
   Vector m_vNormal; // 0x0 - 0xC
   float m_flOffset; // 0xC - 0x10
}; // size - 0x10


class RnSoftbodyCapsule_t /* "physicslib" */
{
public:
   Vector m_vCenter[2]; // 0x0 - 0x18
   float m_flRadius; // 0x18 - 0x1C
   uint16 m_nParticle[2]; // 0x1C - 0x20
}; // size - 0x20


class RnSoftbodyParticle_t /* "physicslib" */
{
public:
   float m_flMassInv; // 0x0 - 0x4
}; // size - 0x4


class RnSoftbodySpring_t /* "physicslib" */
{
public:
   uint16 m_nParticle[2]; // 0x0 - 0x4
   float m_flLength; // 0x4 - 0x8
}; // size - 0x8


class RnSphereDesc_t /* "physicslib" */ : public RnShapeDesc_t /* "physicslib" */
{
public:
   SphereBase_t< float32 > m_Sphere; // 0x10 - 0x20
}; // size - 0x20


class RnTriangle_t /* "physicslib" */
{
public:
   int32 m_nIndex[3]; // 0x0 - 0xC
}; // size - 0xC


class RnVertex_t /* "physicslib" */
{
public:
   uint8_t m_nEdge; // 0x0 - 0x1
}; // size - 0x1


class RnWing_t /* "physicslib" */
{
public:
   int32 m_nIndex[3]; // 0x0 - 0xC
}; // size - 0xC


class SampleCode /* "animgraphlib" */
{
public:
   uint8 m_subCode[8]; // 0x0 - 0x8
}; // size - 0x8


class SceneEventId_t /* "server" */
{
public:
   uint32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class SceneObject_t /* "worldrenderer" */
{
public:
   uint32_t m_nObjectID; // 0x0 - 0x4
   Vector4D m_vTransform[3]; // 0x4 - 0x34
   float m_flFadeStartDistance; // 0x34 - 0x38
   float m_flFadeEndDistance; // 0x38 - 0x3C
   Vector4D m_vTintColor; // 0x3C - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
   CUtlString m_skin; // 0x50 - 0x58
   ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58 - 0x5C
   Vector m_vLightingOrigin; // 0x5C - 0x68
   int16_t m_nOverlayRenderOrder; // 0x68 - 0x6A
   int16_t m_nLODOverride; // 0x6A - 0x6C
   int32_t m_nCubeMapPrecomputedHandshake; // 0x6C - 0x70
   int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x70 - 0x74
   unsigned char pad_74[0x4]; // 0x74 - 0x78
   CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x78 - 0x80
   CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x80 - 0x88
}; // size - 0x88


class SceneViewId_t /* "scenesystem" */
{
public:
   uint64_t m_nViewId; // 0x0 - 0x8
   uint64_t m_nFrameCount; // 0x8 - 0x10
}; // size - 0x10


class ScriptInfo_t /* "animgraphlib" */
{
public:
   CUtlString m_code; // 0x0 - 0x8
   CUtlVector< CAnimParamHandle > m_paramsModified; // 0x8 - 0x20
   CUtlVector< int32 > m_proxyReadParams; // 0x20 - 0x38
   CUtlVector< int32 > m_proxyWriteParams; // 0x38 - 0x50
   AnimScriptType m_eScriptType; // 0x50 - 0x52
   unsigned char pad_52[0x6]; // 0x52 - 0x58
}; // size - 0x58


class SelectedEditItemInfo_t /* "soundsystem" */
{
public:
   CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0 - 0x18
}; // size - 0x18


class SequenceWeightedList_t /* "particles" */
{
public:
   int32_t m_nSequence; // 0x0 - 0x4
   float m_flRelativeWeight; // 0x4 - 0x8
}; // size - 0x8


class SignatureOutflow_Continue /* "pulse_runtime_lib" */ : public CPulse_OutflowConnection /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class SignatureOutflow_Resume /* "pulse_runtime_lib" */ : public CPulse_ResumePoint /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class SimpleConstraintSoundProfile /* "server" */
{
public:

   enum class SimpleConstraintsSoundProfileKeypoints_t : std::uint32_t
   {
      kMIN_THRESHOLD = 0,
      kMIN_FULL = 1,
      kHIGHWATER = 2
   };
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8 - 0xC
   float32 m_keyPoints[2]; // 0xC - 0x14
   float32 m_reversalSoundThresholds[3]; // 0x14 - 0x20
}; // size - 0x20


class SkeletonAnimCapture_t /* "modellib" */
{
public:
   class Bone_t /* "modellib" */
   {
   public:
      CUtlString m_Name; // 0x0 - 0x8
      unsigned char pad_8[0x8]; // 0x8 - 0x10
      CTransform m_BindPose; // 0x10 - 0x30
      int32_t m_nParent; // 0x30 - 0x34
      unsigned char pad_34[0xC]; // 0x34 - 0x40
   }; // size - 0x40

   class Camera_t /* "modellib" */
   {
   public:
      CTransform m_tmCamera; // 0x0 - 0x20
      float m_flTime; // 0x20 - 0x24
      unsigned char pad_24[0xC]; // 0x24 - 0x30
   }; // size - 0x30

   class FrameStamp_t /* "modellib" */
   {
   public:
      float m_flTime; // 0x0 - 0x4
      float m_flEntitySimTime; // 0x4 - 0x8
      bool m_bTeleportTick; // 0x8 - 0x9
      bool m_bPredicted; // 0x9 - 0xA
      unsigned char pad_A[0x2]; // 0xA - 0xC
      float m_flCurTime; // 0xC - 0x10
      float m_flRealTime; // 0x10 - 0x14
      int32_t m_nFrameCount; // 0x14 - 0x18
      int32_t m_nTickCount; // 0x18 - 0x1C
   }; // size - 0x1C

   class Frame_t /* "modellib" */
   {
   public:
      float m_flTime; // 0x0 - 0x4
      SkeletonAnimCapture_t::FrameStamp_t m_Stamp; // 0x4 - 0x20
      CTransform m_Transform; // 0x20 - 0x40
      bool m_bTeleport; // 0x40 - 0x41
      unsigned char pad_41[0x7]; // 0x41 - 0x48
      CUtlVector< CTransform > m_CompositeBones; // 0x48 - 0x60
      CUtlVector< CTransform > m_SimStateBones; // 0x60 - 0x78
      CUtlVector< CTransform > m_FeModelAnims; // 0x78 - 0x90
      CUtlVector< VectorAligned > m_FeModelPos; // 0x90 - 0xA8
      CUtlVector< float32 > m_FlexControllerWeights; // 0xA8 - 0xC0
   }; // size - 0xC0

   CEntityIndex m_nEntIndex; // 0x0 - 0x4
   CEntityIndex m_nEntParent; // 0x4 - 0x8
   CUtlVector< CEntityIndex > m_ImportedCollision; // 0x8 - 0x20
   CUtlString m_ModelName; // 0x20 - 0x28
   CUtlString m_CaptureName; // 0x28 - 0x30
   CUtlVector< SkeletonAnimCapture_t::Bone_t > m_ModelBindPose; // 0x30 - 0x48
   CUtlVector< SkeletonAnimCapture_t::Bone_t > m_FeModelInitPose; // 0x48 - 0x60
   int32_t m_nFlexControllers; // 0x60 - 0x64
   bool m_bPredicted; // 0x64 - 0x65
   unsigned char pad_65[0x43]; // 0x65 - 0xA8
   CUtlVector< SkeletonAnimCapture_t::Frame_t > m_Frames; // 0xA8 - 0xC0
}; // size - 0xC0






class SkeletonBoneBounds_t /* "modellib" */
{
public:
   Vector m_vecCenter; // 0x0 - 0xC
   Vector m_vecSize; // 0xC - 0x18
}; // size - 0x18


class SkeletonDemoDb_t /* "modellib" */
{
public:
   CUtlVector< SkeletonAnimCapture_t* > m_AnimCaptures; // 0x0 - 0x18
   CUtlVector< SkeletonAnimCapture_t::Camera_t > m_CameraTrack; // 0x18 - 0x30
   float m_flRecordingTime; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
}; // size - 0x38


class SolveIKChainPoseOpFixedSettings_t /* "animgraphlib" */
{
public:
   CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0 - 0x18
   bool m_bMatchTargetOrientation; // 0x18 - 0x19
   unsigned char pad_19[0x7]; // 0x19 - 0x20
}; // size - 0x20


class SosEditItemInfo_t /* "soundsystem" */
{
public:
   SosEditItemType_t itemType; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlString itemName; // 0x8 - 0x10
   CUtlString itemTypeName; // 0x10 - 0x18
   unsigned char pad_18[0x8]; // 0x18 - 0x20
   CUtlString itemKVString; // 0x20 - 0x28
   Vector2D itemPos; // 0x28 - 0x30
}; // size - 0x30


class SoundOpvarTraceResult_t /* "server" */
{
public:
   Vector vPos; // 0x0 - 0xC
   bool bDidHit; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
   float flDistSqrToCenter; // 0x10 - 0x14
}; // size - 0x14


class SoundeventPathCornerPairNetworked_t /* "server" */
{
public:
   Vector vP1; // 0x0 - 0xC
   Vector vP2; // 0xC - 0x18
   float flPathLengthSqr; // 0x18 - 0x1C
   float flP1Pct; // 0x1C - 0x20
   float flP2Pct; // 0x20 - 0x24
}; // size - 0x24


class StanceInfo_t /* "animgraphlib" */
{
public:
   Vector m_vPosition; // 0x0 - 0xC
   float m_flDirection; // 0xC - 0x10
}; // size - 0x10


class SummaryTakeDamageInfo_t /* "server" */
{
public:
   int32_t nSummarisedCount; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CTakeDamageInfo info; // 0x8 - 0xB0
   CTakeDamageResult result; // 0xB0 - 0xC8
   CHandle< CBaseEntity > hTarget; // 0xC8 - 0xCC
   unsigned char pad_CC[0x4]; // 0xCC - 0xD0
}; // size - 0xD0


class TagSpan_t /* "animgraphlib" */
{
public:
   int32_t m_tagIndex; // 0x0 - 0x4
   float m_startCycle; // 0x4 - 0x8
   float m_endCycle; // 0x8 - 0xC
}; // size - 0xC


class TestResource_t /* "resourcesystem" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
}; // size - 0x8


class TextureControls_t /* "particles" */
{
public:
   CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0 - 0x158
   CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x158 - 0x2B0
   CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x2B0 - 0x408
   CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x408 - 0x560
   CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x560 - 0x6B8
   CParticleCollectionRendererFloatInput m_flZoomScale; // 0x6B8 - 0x810
   CParticleCollectionRendererFloatInput m_flDistortion; // 0x810 - 0x968
   bool m_bRandomizeOffsets; // 0x968 - 0x969
   bool m_bClampUVs; // 0x969 - 0x96A
   unsigned char pad_96A[0x2]; // 0x96A - 0x96C
   SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x96C - 0x970
   SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x970 - 0x974
   SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x974 - 0x978
   SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x978 - 0x97C
   SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x97C - 0x980
   SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x980 - 0x984
   SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x984 - 0x988
}; // size - 0x988


class TextureGroup_t /* "particles" */
{
public:
   bool m_bEnabled; // 0x0 - 0x1
   bool m_bReplaceTextureWithGradient; // 0x1 - 0x2
   unsigned char pad_2[0x6]; // 0x2 - 0x8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x8 - 0x10
   CColorGradient m_Gradient; // 0x10 - 0x28
   SpriteCardTextureType_t m_nTextureType; // 0x28 - 0x2C
   SpriteCardTextureChannel_t m_nTextureChannels; // 0x2C - 0x30
   ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
   CParticleCollectionRendererFloatInput m_flTextureBlend; // 0x38 - 0x190
   TextureControls_t m_TextureControls; // 0x190 - 0xB18
}; // size - 0xB18


class TimedEvent /* "client" */
{
public:
   float m_TimeBetweenEvents; // 0x0 - 0x4
   float m_fNextEvent; // 0x4 - 0x8
}; // size - 0x8


class TraceSettings_t /* "animgraphlib" */
{
public:
   float m_flTraceHeight; // 0x0 - 0x4
   float m_flTraceRadius; // 0x4 - 0x8
}; // size - 0x8


class TwoBoneIKSettings_t /* "animgraphlib" */
{
public:
   IkEndEffectorType m_endEffectorType; // 0x0 - 0x4
   unsigned char pad_4[0xC]; // 0x4 - 0x10
   CAnimAttachment m_endEffectorAttachment; // 0x10 - 0x90
   IkTargetType m_targetType; // 0x90 - 0x94
   unsigned char pad_94[0xC]; // 0x94 - 0xA0
   CAnimAttachment m_targetAttachment; // 0xA0 - 0x120
   int32_t m_targetBoneIndex; // 0x120 - 0x124
   CAnimParamHandle m_hPositionParam; // 0x124 - 0x126
   CAnimParamHandle m_hRotationParam; // 0x126 - 0x128
   bool m_bAlwaysUseFallbackHinge; // 0x128 - 0x129
   unsigned char pad_129[0x7]; // 0x129 - 0x130
   VectorAligned m_vLsFallbackHingeAxis; // 0x130 - 0x140
   int32_t m_nFixedBoneIndex; // 0x140 - 0x144
   int32_t m_nMiddleBoneIndex; // 0x144 - 0x148
   int32_t m_nEndBoneIndex; // 0x148 - 0x14C
   bool m_bMatchTargetOrientation; // 0x14C - 0x14D
   bool m_bConstrainTwist; // 0x14D - 0x14E
   unsigned char pad_14E[0x2]; // 0x14E - 0x150
   float m_flMaxTwist; // 0x150 - 0x154
   unsigned char pad_154[0xC]; // 0x154 - 0x160
}; // size - 0x160


class VMapResourceData_t /* "worldrenderer" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class VMixAutoFilterDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_flEnvelopeAmount; // 0x0 - 0x4
   float m_flAttackTimeMS; // 0x4 - 0x8
   float m_flReleaseTimeMS; // 0x8 - 0xC
   VMixFilterDesc_t m_filter; // 0xC - 0x1C
   float m_flLFOAmount; // 0x1C - 0x20
   float m_flLFORate; // 0x20 - 0x24
   float m_flPhase; // 0x24 - 0x28
   VMixLFOShape_t m_nLFOShape; // 0x28 - 0x2C
}; // size - 0x2C


class VMixBoxverbDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_flSizeMax; // 0x0 - 0x4
   float m_flSizeMin; // 0x4 - 0x8
   float m_flComplexity; // 0x8 - 0xC
   float m_flDiffusion; // 0xC - 0x10
   float m_flModDepth; // 0x10 - 0x14
   float m_flModRate; // 0x14 - 0x18
   bool m_bParallel; // 0x18 - 0x19
   unsigned char pad_19[0x3]; // 0x19 - 0x1C
   VMixFilterDesc_t m_filterType; // 0x1C - 0x2C
   float m_flWidth; // 0x2C - 0x30
   float m_flHeight; // 0x30 - 0x34
   float m_flDepth; // 0x34 - 0x38
   float m_flFeedbackScale; // 0x38 - 0x3C
   float m_flFeedbackWidth; // 0x3C - 0x40
   float m_flFeedbackHeight; // 0x40 - 0x44
   float m_flFeedbackDepth; // 0x44 - 0x48
   float m_flOutputGain; // 0x48 - 0x4C
   float m_flTaps; // 0x4C - 0x50
}; // size - 0x50


class VMixConvolutionDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_fldbGain; // 0x0 - 0x4
   float m_flPreDelayMS; // 0x4 - 0x8
   float m_flWetMix; // 0x8 - 0xC
   float m_fldbLow; // 0xC - 0x10
   float m_fldbMid; // 0x10 - 0x14
   float m_fldbHigh; // 0x14 - 0x18
   float m_flLowCutoffFreq; // 0x18 - 0x1C
   float m_flHighCutoffFreq; // 0x1C - 0x20
}; // size - 0x20


class VMixDelayDesc_t /* "soundsystem_lowlevel" */
{
public:
   VMixFilterDesc_t m_feedbackFilter; // 0x0 - 0x10
   bool m_bEnableFilter; // 0x10 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
   float m_flDelay; // 0x14 - 0x18
   float m_flDirectGain; // 0x18 - 0x1C
   float m_flDelayGain; // 0x1C - 0x20
   float m_flFeedbackGain; // 0x20 - 0x24
   float m_flWidth; // 0x24 - 0x28
}; // size - 0x28


class VMixDiffusorDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_flSize; // 0x0 - 0x4
   float m_flComplexity; // 0x4 - 0x8
   float m_flFeedback; // 0x8 - 0xC
   float m_flOutputGain; // 0xC - 0x10
}; // size - 0x10


class VMixDynamics3BandDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_fldbGainOutput; // 0x0 - 0x4
   float m_flRMSTimeMS; // 0x4 - 0x8
   float m_fldbKneeWidth; // 0x8 - 0xC
   float m_flDepth; // 0xC - 0x10
   float m_flWetMix; // 0x10 - 0x14
   float m_flTimeScale; // 0x14 - 0x18
   float m_flLowCutoffFreq; // 0x18 - 0x1C
   float m_flHighCutoffFreq; // 0x1C - 0x20
   bool m_bPeakMode; // 0x20 - 0x21
   unsigned char pad_21[0x3]; // 0x21 - 0x24
   VMixDynamicsBand_t m_bandDesc[3]; // 0x24 - 0x90
}; // size - 0x90


class VMixDynamicsBand_t /* "soundsystem_lowlevel" */
{
public:
   float m_fldbGainInput; // 0x0 - 0x4
   float m_fldbGainOutput; // 0x4 - 0x8
   float m_fldbThresholdBelow; // 0x8 - 0xC
   float m_fldbThresholdAbove; // 0xC - 0x10
   float m_flRatioBelow; // 0x10 - 0x14
   float m_flRatioAbove; // 0x14 - 0x18
   float m_flAttackTimeMS; // 0x18 - 0x1C
   float m_flReleaseTimeMS; // 0x1C - 0x20
   bool m_bEnable; // 0x20 - 0x21
   bool m_bSolo; // 0x21 - 0x22
   unsigned char pad_22[0x2]; // 0x22 - 0x24
}; // size - 0x24


class VMixDynamicsCompressorDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_fldbOutputGain; // 0x0 - 0x4
   float m_fldbCompressionThreshold; // 0x4 - 0x8
   float m_fldbKneeWidth; // 0x8 - 0xC
   float m_flCompressionRatio; // 0xC - 0x10
   float m_flAttackTimeMS; // 0x10 - 0x14
   float m_flReleaseTimeMS; // 0x14 - 0x18
   float m_flRMSTimeMS; // 0x18 - 0x1C
   float m_flWetMix; // 0x1C - 0x20
   bool m_bPeakMode; // 0x20 - 0x21
   unsigned char pad_21[0x3]; // 0x21 - 0x24
}; // size - 0x24


class VMixDynamicsDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_fldbGain; // 0x0 - 0x4
   float m_fldbNoiseGateThreshold; // 0x4 - 0x8
   float m_fldbCompressionThreshold; // 0x8 - 0xC
   float m_fldbLimiterThreshold; // 0xC - 0x10
   float m_fldbKneeWidth; // 0x10 - 0x14
   float m_flRatio; // 0x14 - 0x18
   float m_flLimiterRatio; // 0x18 - 0x1C
   float m_flAttackTimeMS; // 0x1C - 0x20
   float m_flReleaseTimeMS; // 0x20 - 0x24
   float m_flRMSTimeMS; // 0x24 - 0x28
   float m_flWetMix; // 0x28 - 0x2C
   bool m_bPeakMode; // 0x2C - 0x2D
   unsigned char pad_2D[0x3]; // 0x2D - 0x30
}; // size - 0x30


class VMixEQ8Desc_t /* "soundsystem_lowlevel" */
{
public:
   VMixFilterDesc_t m_stages[8]; // 0x0 - 0x80
}; // size - 0x80


class VMixEffectChainDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_flCrossfadeTime; // 0x0 - 0x4
}; // size - 0x4


class VMixEnvelopeDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_flAttackTimeMS; // 0x0 - 0x4
   float m_flHoldTimeMS; // 0x4 - 0x8
   float m_flReleaseTimeMS; // 0x8 - 0xC
}; // size - 0xC


class VMixFilterDesc_t /* "soundsystem_lowlevel" */
{
public:
   VMixFilterType_t m_nFilterType; // 0x0 - 0x2
   VMixFilterSlope_t m_nFilterSlope; // 0x2 - 0x3
   bool m_bEnabled; // 0x3 - 0x4
   float m_fldbGain; // 0x4 - 0x8
   float m_flCutoffFreq; // 0x8 - 0xC
   float m_flQ; // 0xC - 0x10
}; // size - 0x10


class VMixFreeverbDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_flRoomSize; // 0x0 - 0x4
   float m_flDamp; // 0x4 - 0x8
   float m_flWidth; // 0x8 - 0xC
   float m_flLateReflections; // 0xC - 0x10
}; // size - 0x10


class VMixModDelayDesc_t /* "soundsystem_lowlevel" */
{
public:
   VMixFilterDesc_t m_feedbackFilter; // 0x0 - 0x10
   bool m_bPhaseInvert; // 0x10 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
   float m_flGlideTime; // 0x14 - 0x18
   float m_flDelay; // 0x18 - 0x1C
   float m_flOutputGain; // 0x1C - 0x20
   float m_flFeedbackGain; // 0x20 - 0x24
   float m_flModRate; // 0x24 - 0x28
   float m_flModDepth; // 0x28 - 0x2C
   bool m_bApplyAntialiasing; // 0x2C - 0x2D
   unsigned char pad_2D[0x3]; // 0x2D - 0x30
}; // size - 0x30


class VMixOscDesc_t /* "soundsystem_lowlevel" */
{
public:
   VMixLFOShape_t oscType; // 0x0 - 0x4
   float m_freq; // 0x4 - 0x8
   float m_flPhase; // 0x8 - 0xC
}; // size - 0xC


class VMixPannerDesc_t /* "soundsystem_lowlevel" */
{
public:
   VMixPannerType_t m_type; // 0x0 - 0x4
   float m_flStrength; // 0x4 - 0x8
}; // size - 0x8


class VMixPitchShiftDesc_t /* "soundsystem_lowlevel" */
{
public:
   int32_t m_nGrainSampleCount; // 0x0 - 0x4
   float m_flPitchShift; // 0x4 - 0x8
   int32_t m_nQuality; // 0x8 - 0xC
   int32_t m_nProcType; // 0xC - 0x10
}; // size - 0x10


class VMixPlateverbDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_flPrefilter; // 0x0 - 0x4
   float m_flInputDiffusion1; // 0x4 - 0x8
   float m_flInputDiffusion2; // 0x8 - 0xC
   float m_flDecay; // 0xC - 0x10
   float m_flDamp; // 0x10 - 0x14
   float m_flFeedbackDiffusion1; // 0x14 - 0x18
   float m_flFeedbackDiffusion2; // 0x18 - 0x1C
}; // size - 0x1C


class VMixShaperDesc_t /* "soundsystem_lowlevel" */
{
public:
   int32_t m_nShape; // 0x0 - 0x4
   float m_fldbDrive; // 0x4 - 0x8
   float m_fldbOutputGain; // 0x8 - 0xC
   float m_flWetMix; // 0xC - 0x10
   int32_t m_nOversampleFactor; // 0x10 - 0x14
}; // size - 0x14


class VMixSubgraphSwitchDesc_t /* "soundsystem_lowlevel" */
{
public:
   VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0 - 0x4
   bool m_bOnlyTailsOnFadeOut; // 0x4 - 0x5
   unsigned char pad_5[0x3]; // 0x5 - 0x8
   float m_flInterpolationTime; // 0x8 - 0xC
}; // size - 0xC


class VMixUtilityDesc_t /* "soundsystem_lowlevel" */
{
public:
   VMixChannelOperation_t m_nOp; // 0x0 - 0x4
   float m_flInputPan; // 0x4 - 0x8
   float m_flOutputBalance; // 0x8 - 0xC
   float m_fldbOutputGain; // 0xC - 0x10
   bool m_bBassMono; // 0x10 - 0x11
   unsigned char pad_11[0x3]; // 0x11 - 0x14
   float m_flBassFreq; // 0x14 - 0x18
}; // size - 0x18


class VMixVocoderDesc_t /* "soundsystem_lowlevel" */
{
public:
   int32_t m_nBandCount; // 0x0 - 0x4
   float m_flBandwidth; // 0x4 - 0x8
   float m_fldBModGain; // 0x8 - 0xC
   float m_flFreqRangeStart; // 0xC - 0x10
   float m_flFreqRangeEnd; // 0x10 - 0x14
   float m_fldBUnvoicedGain; // 0x14 - 0x18
   float m_flAttackTimeMS; // 0x18 - 0x1C
   float m_flReleaseTimeMS; // 0x1C - 0x20
   int32_t m_nDebugBand; // 0x20 - 0x24
   bool m_bPeakMode; // 0x24 - 0x25
   unsigned char pad_25[0x3]; // 0x25 - 0x28
}; // size - 0x28


class VPhysXAggregateData_t /* "modellib" */
{
public:

   enum class VPhysXFlagEnum_t : std::uint32_t
   {
      FLAG_IS_POLYSOUP_GEOMETRY = 1,
      FLAG_LEVEL_COLLISION = 16,
      FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32
   };
   uint16_t m_nFlags; // 0x0 - 0x2
   uint16_t m_nRefCounter; // 0x2 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlVector< uint32 > m_bonesHash; // 0x8 - 0x20
   CUtlVector< CUtlString > m_boneNames; // 0x20 - 0x38
   CUtlVector< uint16 > m_indexNames; // 0x38 - 0x50
   CUtlVector< uint16 > m_indexHash; // 0x50 - 0x68
   CUtlVector< matrix3x4a_t > m_bindPose; // 0x68 - 0x80
   CUtlVector< VPhysXBodyPart_t > m_parts; // 0x80 - 0x98
   CUtlVector< VPhysXConstraint2_t > m_constraints2; // 0x98 - 0xB0
   CUtlVector< VPhysXJoint_t > m_joints; // 0xB0 - 0xC8
   PhysFeModelDesc_t* m_pFeModel; // 0xC8 - 0xD0
   CUtlVector< uint16 > m_boneParents; // 0xD0 - 0xE8
   CUtlVector< uint32 > m_surfacePropertyHashes; // 0xE8 - 0x100
   CUtlVector< VPhysXCollisionAttributes_t > m_collisionAttributes; // 0x100 - 0x118
   CUtlVector< CUtlString > m_debugPartNames; // 0x118 - 0x130
   CUtlString m_embeddedKeyvalues; // 0x130 - 0x138
}; // size - 0x138


class VPhysXBodyPart_t /* "modellib" */
{
public:

   enum class VPhysXFlagEnum_t : std::uint32_t
   {
      FLAG_STATIC = 1,
      FLAG_KINEMATIC = 2,
      FLAG_JOINT = 4,
      FLAG_MASS = 8,
      FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 16
   };
   uint32_t m_nFlags; // 0x0 - 0x4
   float m_flMass; // 0x4 - 0x8
   VPhysics2ShapeDef_t m_rnShape; // 0x8 - 0x80
   uint16_t m_nCollisionAttributeIndex; // 0x80 - 0x82
   uint16_t m_nReserved; // 0x82 - 0x84
   float m_flInertiaScale; // 0x84 - 0x88
   float m_flLinearDamping; // 0x88 - 0x8C
   float m_flAngularDamping; // 0x8C - 0x90
   bool m_bOverrideMassCenter; // 0x90 - 0x91
   unsigned char pad_91[0x3]; // 0x91 - 0x94
   Vector m_vMassCenterOverride; // 0x94 - 0xA0
}; // size - 0xA0


class VPhysXCollisionAttributes_t /* "modellib" */
{
public:
   uint32_t m_CollisionGroup; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlVector< uint32 > m_InteractAs; // 0x8 - 0x20
   CUtlVector< uint32 > m_InteractWith; // 0x20 - 0x38
   CUtlVector< uint32 > m_InteractExclude; // 0x38 - 0x50
   CUtlString m_CollisionGroupString; // 0x50 - 0x58
   CUtlVector< CUtlString > m_InteractAsStrings; // 0x58 - 0x70
   CUtlVector< CUtlString > m_InteractWithStrings; // 0x70 - 0x88
   CUtlVector< CUtlString > m_InteractExcludeStrings; // 0x88 - 0xA0
}; // size - 0xA0


class VPhysXConstraint2_t /* "modellib" */
{
public:
   uint32_t m_nFlags; // 0x0 - 0x4
   uint16_t m_nParent; // 0x4 - 0x6
   uint16_t m_nChild; // 0x6 - 0x8
   VPhysXConstraintParams_t m_params; // 0x8 - 0x100
}; // size - 0x100


class VPhysXConstraintParams_t /* "modellib" */
{
public:

   enum class EnumFlags0_t : std::uint32_t
   {
      FLAG0_SHIFT_INTERPENETRATE = 0,
      FLAG0_SHIFT_CONSTRAIN = 1,
      FLAG0_SHIFT_BREAKABLE_FORCE = 2,
      FLAG0_SHIFT_BREAKABLE_TORQUE = 3
   };
   int8_t m_nType; // 0x0 - 0x1
   int8_t m_nTranslateMotion; // 0x1 - 0x2
   int8_t m_nRotateMotion; // 0x2 - 0x3
   int8_t m_nFlags; // 0x3 - 0x4
   Vector m_anchor[2]; // 0x4 - 0x1C
   QuaternionStorage m_axes[2]; // 0x1C - 0x3C
   float m_maxForce; // 0x3C - 0x40
   float m_maxTorque; // 0x40 - 0x44
   float m_linearLimitValue; // 0x44 - 0x48
   float m_linearLimitRestitution; // 0x48 - 0x4C
   float m_linearLimitSpring; // 0x4C - 0x50
   float m_linearLimitDamping; // 0x50 - 0x54
   float m_twistLowLimitValue; // 0x54 - 0x58
   float m_twistLowLimitRestitution; // 0x58 - 0x5C
   float m_twistLowLimitSpring; // 0x5C - 0x60
   float m_twistLowLimitDamping; // 0x60 - 0x64
   float m_twistHighLimitValue; // 0x64 - 0x68
   float m_twistHighLimitRestitution; // 0x68 - 0x6C
   float m_twistHighLimitSpring; // 0x6C - 0x70
   float m_twistHighLimitDamping; // 0x70 - 0x74
   float m_swing1LimitValue; // 0x74 - 0x78
   float m_swing1LimitRestitution; // 0x78 - 0x7C
   float m_swing1LimitSpring; // 0x7C - 0x80
   float m_swing1LimitDamping; // 0x80 - 0x84
   float m_swing2LimitValue; // 0x84 - 0x88
   float m_swing2LimitRestitution; // 0x88 - 0x8C
   float m_swing2LimitSpring; // 0x8C - 0x90
   float m_swing2LimitDamping; // 0x90 - 0x94
   Vector m_goalPosition; // 0x94 - 0xA0
   QuaternionStorage m_goalOrientation; // 0xA0 - 0xB0
   Vector m_goalAngularVelocity; // 0xB0 - 0xBC
   float m_driveSpringX; // 0xBC - 0xC0
   float m_driveSpringY; // 0xC0 - 0xC4
   float m_driveSpringZ; // 0xC4 - 0xC8
   float m_driveDampingX; // 0xC8 - 0xCC
   float m_driveDampingY; // 0xCC - 0xD0
   float m_driveDampingZ; // 0xD0 - 0xD4
   float m_driveSpringTwist; // 0xD4 - 0xD8
   float m_driveSpringSwing; // 0xD8 - 0xDC
   float m_driveSpringSlerp; // 0xDC - 0xE0
   float m_driveDampingTwist; // 0xE0 - 0xE4
   float m_driveDampingSwing; // 0xE4 - 0xE8
   float m_driveDampingSlerp; // 0xE8 - 0xEC
   int32_t m_solverIterationCount; // 0xEC - 0xF0
   float m_projectionLinearTolerance; // 0xF0 - 0xF4
   float m_projectionAngularTolerance; // 0xF4 - 0xF8
}; // size - 0xF8


class VPhysXJoint_t /* "modellib" */
{
public:

   enum class Flags_t : std::uint32_t
   {
      JOINT_FLAGS_NONE = 0,
      JOINT_FLAGS_BODY1_FIXED = 1,
      JOINT_FLAGS_USE_BLOCK_SOLVER = 2
   };
   uint16_t m_nType; // 0x0 - 0x2
   uint16_t m_nBody1; // 0x2 - 0x4
   uint16_t m_nBody2; // 0x4 - 0x6
   uint16_t m_nFlags; // 0x6 - 0x8
   unsigned char pad_8[0x8]; // 0x8 - 0x10
   CTransform m_Frame1; // 0x10 - 0x30
   CTransform m_Frame2; // 0x30 - 0x50
   bool m_bEnableCollision; // 0x50 - 0x51
   bool m_bEnableLinearLimit; // 0x51 - 0x52
   unsigned char pad_52[0x2]; // 0x52 - 0x54
   VPhysXRange_t m_LinearLimit; // 0x54 - 0x5C
   bool m_bEnableLinearMotor; // 0x5C - 0x5D
   unsigned char pad_5D[0x3]; // 0x5D - 0x60
   Vector m_vLinearTargetVelocity; // 0x60 - 0x6C
   float m_flMaxForce; // 0x6C - 0x70
   bool m_bEnableSwingLimit; // 0x70 - 0x71
   unsigned char pad_71[0x3]; // 0x71 - 0x74
   VPhysXRange_t m_SwingLimit; // 0x74 - 0x7C
   bool m_bEnableTwistLimit; // 0x7C - 0x7D
   unsigned char pad_7D[0x3]; // 0x7D - 0x80
   VPhysXRange_t m_TwistLimit; // 0x80 - 0x88
   bool m_bEnableAngularMotor; // 0x88 - 0x89
   unsigned char pad_89[0x3]; // 0x89 - 0x8C
   Vector m_vAngularTargetVelocity; // 0x8C - 0x98
   float m_flMaxTorque; // 0x98 - 0x9C
   float m_flLinearFrequency; // 0x9C - 0xA0
   float m_flLinearDampingRatio; // 0xA0 - 0xA4
   float m_flAngularFrequency; // 0xA4 - 0xA8
   float m_flAngularDampingRatio; // 0xA8 - 0xAC
   float m_flFriction; // 0xAC - 0xB0
}; // size - 0xB0


class VPhysXRange_t /* "modellib" */
{
public:
   float m_flMin; // 0x0 - 0x4
   float m_flMax; // 0x4 - 0x8
}; // size - 0x8


class VPhysics2ShapeDef_t /* "modellib" */
{
public:
   CUtlVector< RnSphereDesc_t > m_spheres; // 0x0 - 0x18
   CUtlVector< RnCapsuleDesc_t > m_capsules; // 0x18 - 0x30
   CUtlVector< RnHullDesc_t > m_hulls; // 0x30 - 0x48
   CUtlVector< RnMeshDesc_t > m_meshes; // 0x48 - 0x60
   CUtlVector< uint16 > m_CollisionAttributeIndices; // 0x60 - 0x78
}; // size - 0x78


class VariableInfo_t /* "mathlib_extended" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CUtlStringToken m_nameToken; // 0x8 - 0xC
   FuseVariableIndex_t m_nIndex; // 0xC - 0xE
   uint8_t m_nNumComponents; // 0xE - 0xF
   FuseVariableType_t m_eVarType; // 0xF - 0x10
   FuseVariableAccess_t m_eAccess; // 0x10 - 0x11
   unsigned char pad_11[0x7]; // 0x11 - 0x18
}; // size - 0x18


class VecInputMaterialVariable_t /* "particles" */
{
public:
   CUtlString m_strVariable; // 0x0 - 0x8
   CParticleCollectionVecInput m_vecInput; // 0x8 - 0x660
}; // size - 0x660


class VelocitySampler /* "server" */
{
public:
   Vector m_prevSample; // 0x0 - 0xC
   GameTime_t m_fPrevSampleTime; // 0xC - 0x10
   float m_fIdealSampleRate; // 0x10 - 0x14
}; // size - 0x14


class VertexPositionColor_t /* "physicslib" */
{
public:
   Vector m_vPosition; // 0x0 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class VertexPositionNormal_t /* "physicslib" */
{
public:
   Vector m_vPosition; // 0x0 - 0xC
   Vector m_vNormal; // 0xC - 0x18
}; // size - 0x18


class VoxelVisBlockOffset_t /* "worldrenderer" */
{
public:
   uint32_t m_nOffset; // 0x0 - 0x4
   uint32_t m_nElementCount; // 0x4 - 0x8
}; // size - 0x8


class VsInputSignatureElement_t /* "rendersystemdx11" */
{
public:
   char m_pName[64]; // 0x0 - 0x40
   char m_pSemantic[64]; // 0x40 - 0x80
   char m_pD3DSemanticName[64]; // 0x80 - 0xC0
   int32_t m_nD3DSemanticIndex; // 0xC0 - 0xC4
}; // size - 0xC4


class VsInputSignature_t /* "rendersystemdx11" */
{
public:
   CUtlVector< VsInputSignatureElement_t > m_elems; // 0x0 - 0x18
}; // size - 0x18


class WeightList /* "animgraphlib" */
{
public:
   CUtlString m_name; // 0x0 - 0x8
   CUtlVector< float32 > m_weights; // 0x8 - 0x20
}; // size - 0x20


class WorldBuilderParams_t /* "worldrenderer" */
{
public:
   float m_flMinDrawVolumeSize; // 0x0 - 0x4
   bool m_bBuildBakedLighting; // 0x4 - 0x5
   unsigned char pad_5[0x3]; // 0x5 - 0x8
   BakedLightingInfo_t m_bakedLightingInfo; // 0x8 - 0x38
   uint64_t m_nCompileTimestamp; // 0x38 - 0x40
   uint64_t m_nCompileFingerprint; // 0x40 - 0x48
}; // size - 0x48


class WorldNodeOnDiskBufferData_t /* "worldrenderer" */
{
public:
   int32_t m_nElementCount; // 0x0 - 0x4
   int32_t m_nElementSizeInBytes; // 0x4 - 0x8
   CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8 - 0x20
   CUtlVector< uint8 > m_pData; // 0x20 - 0x38
}; // size - 0x38


class WorldNode_t /* "worldrenderer" */
{
public:
   CUtlVector< SceneObject_t > m_sceneObjects; // 0x0 - 0x18
   CUtlVector< InfoOverlayData_t > m_infoOverlays; // 0x18 - 0x30
   CUtlVector< uint16 > m_visClusterMembership; // 0x30 - 0x48
   CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects; // 0x48 - 0x60
   CUtlVector< ClutterSceneObject_t > m_clutterSceneObjects; // 0x60 - 0x78
   CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // 0x78 - 0x90
   CUtlVector< MaterialOverride_t > m_materialOverrides; // 0x90 - 0xA8
   CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams; // 0xA8 - 0xC0
   CUtlVector< CUtlString > m_layerNames; // 0xC0 - 0xD8
   CUtlVector< uint8 > m_sceneObjectLayerIndices; // 0xD8 - 0xF0
   CUtlVector< uint8 > m_overlayLayerIndices; // 0xF0 - 0x108
   CUtlString m_grassFileName; // 0x108 - 0x110
   BakedLightingInfo_t m_nodeLightingInfo; // 0x110 - 0x140
}; // size - 0x140


class World_t /* "worldrenderer" */
{
public:
   WorldBuilderParams_t m_builderParams; // 0x0 - 0x48
   CUtlVector< NodeData_t > m_worldNodes; // 0x48 - 0x60
   BakedLightingInfo_t m_worldLightingInfo; // 0x60 - 0x90
   CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0x90 - 0xA8
}; // size - 0xA8


class constraint_axislimit_t /* "vphysics2" */
{
public:
   float flMinRotation; // 0x0 - 0x4
   float flMaxRotation; // 0x4 - 0x8
   float flMotorTargetAngSpeed; // 0x8 - 0xC
   float flMotorMaxTorque; // 0xC - 0x10
}; // size - 0x10


class constraint_breakableparams_t /* "vphysics2" */
{
public:
   float strength; // 0x0 - 0x4
   float forceLimit; // 0x4 - 0x8
   float torqueLimit; // 0x8 - 0xC
   float32 bodyMassScale[2]; // 0xC - 0x14
   bool isActive; // 0x14 - 0x15
   unsigned char pad_15[0x3]; // 0x15 - 0x18
}; // size - 0x18


class constraint_hingeparams_t /* "vphysics2" */
{
public:
   Vector worldPosition; // 0x0 - 0xC
   Vector worldAxisDirection; // 0xC - 0x18
   constraint_axislimit_t hingeAxis; // 0x18 - 0x28
   constraint_breakableparams_t constraint; // 0x28 - 0x40
}; // size - 0x40


class dynpitchvol_t /* "server" */ : public dynpitchvol_base_t /* "server" */
{
public:
   unsigned char pad_0[0x64]; // 0x0 - 0x64
}; // size - 0x64


class hudtextparms_t /* "server" */
{
public:
   Color color1; // 0x0 - 0x4
   Color color2; // 0x4 - 0x8
   uint8_t effect; // 0x8 - 0x9
   uint8_t channel; // 0x9 - 0xA
   unsigned char pad_A[0x2]; // 0xA - 0xC
   float x; // 0xC - 0x10
   float y; // 0x10 - 0x14
}; // size - 0x14


class lerpdata_t /* "server" */
{
public:
   CHandle< CBaseEntity > m_hEnt; // 0x0 - 0x4
   MoveType_t m_MoveType; // 0x4 - 0x5
   unsigned char pad_5[0x3]; // 0x5 - 0x8
   GameTime_t m_flStartTime; // 0x8 - 0xC
   Vector m_vecStartOrigin; // 0xC - 0x18
   unsigned char pad_18[0x8]; // 0x18 - 0x20
   Quaternion m_qStartRot; // 0x20 - 0x30
   ParticleIndex_t m_nFXIndex; // 0x30 - 0x34
   unsigned char pad_34[0xC]; // 0x34 - 0x40
}; // size - 0x40


class locksound_t /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlSymbolLarge sLockedSound; // 0x8 - 0x10
   CUtlSymbolLarge sUnlockedSound; // 0x10 - 0x18
   GameTime_t flwaitSound; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class magnetted_objects_t /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CHandle< CBaseEntity > hEntity; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class ragdoll_t /* "server" */
{
public:
   CUtlVector< ragdollelement_t > list; // 0x0 - 0x18
   CUtlVector< int32 > boneIndex; // 0x18 - 0x30
   bool allowStretch; // 0x30 - 0x31
   bool unused; // 0x31 - 0x32
   unsigned char pad_32[0x6]; // 0x32 - 0x38
}; // size - 0x38


class ragdollelement_t /* "server" */
{
public:
   Vector originParentSpace; // 0x0 - 0xC
   unsigned char pad_C[0x14]; // 0xC - 0x20
   int32_t parentIndex; // 0x20 - 0x24
   float m_flRadius; // 0x24 - 0x28
}; // size - 0x28


class sndopvarlatchdata_t /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlSymbolLarge m_iszStack; // 0x8 - 0x10
   CUtlSymbolLarge m_iszOperator; // 0x10 - 0x18
   CUtlSymbolLarge m_iszOpvar; // 0x18 - 0x20
   float m_flVal; // 0x20 - 0x24
   Vector m_vPos; // 0x24 - 0x30
}; // size - 0x30


class thinkfunc_t /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   HSCRIPT m_hFn; // 0x8 - 0x10
   CUtlStringToken m_nContext; // 0x10 - 0x14
   GameTick_t m_nNextThinkTick; // 0x14 - 0x18
   GameTick_t m_nLastThinkTick; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class vphysics_save_cphysicsbody_t /* "vphysics2" */ : public RnBodyDesc_t /* "vphysics2" */
{
public:
   uint64_t m_nOldPointer; // 0xD0 - 0xD8
}; // size - 0xD8


