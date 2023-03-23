#pragma once

#include "SDK.hpp"

class IHandleEntity
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class CEntityInstance : public IHandleEntity
{
public:

   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x10
   CEntityIdentity* m_pEntity; // 0x10 - 0x18
   unsigned char pad_18[0x10] // 0x18 - 0x28
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x30

}; // size - 0x30


class CBaseEntity : public CEntityInstance
{
public:

   CBodyComponent* m_CBodyComponent; // 0x30 - 0x38
   CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x38 - 0x1D8
   unsigned char pad_1D8[0x40] // 0x1D8 - 0x218
   CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x218 - 0x230
   int32_t m_iCurrentThinkContext; // 0x230 - 0x234
   GameTick_t m_nLastThinkTick; // 0x234 - 0x238
   unsigned char pad_238[0x8] // 0x238 - 0x240
   CBitVec< 64 > m_isSteadyState; // 0x240 - 0x248
   float m_lastNetworkChange; // 0x248 - 0x24C
   unsigned char pad_24C[0xC] // 0x24C - 0x258
   CUtlVector< ResponseContext_t > m_ResponseContexts; // 0x258 - 0x270
   CUtlSymbolLarge m_iszResponseContext; // 0x270 - 0x278
   unsigned char pad_278[0x20] // 0x278 - 0x298
   int32_t m_iHealth; // 0x298 - 0x29C
   int32_t m_iMaxHealth; // 0x29C - 0x2A0
   uint8_t m_lifeState; // 0x2A0 - 0x2A1
   unsigned char pad_2A1[0x3] // 0x2A1 - 0x2A4
   float m_flDamageAccumulator; // 0x2A4 - 0x2A8
   bool m_bTakesDamage; // 0x2A8 - 0x2A9
   unsigned char pad_2A9[0x3] // 0x2A9 - 0x2AC
   TakeDamageFlags_t m_nTakeDamageFlags; // 0x2AC - 0x2B0
   unsigned char pad_2B0[0x1] // 0x2B0 - 0x2B1
   MoveCollide_t m_MoveCollide; // 0x2B1 - 0x2B2
   MoveType_t m_MoveType; // 0x2B2 - 0x2B3
   uint8_t m_nWaterTouch; // 0x2B3 - 0x2B4
   uint8_t m_nSlimeTouch; // 0x2B4 - 0x2B5
   bool m_bRestoreInHierarchy; // 0x2B5 - 0x2B6
   unsigned char pad_2B6[0x2] // 0x2B6 - 0x2B8
   CUtlSymbolLarge m_target; // 0x2B8 - 0x2C0
   float m_flMoveDoneTime; // 0x2C0 - 0x2C4
   CHandle< CBaseFilter > m_hDamageFilter; // 0x2C4 - 0x2C8
   CUtlSymbolLarge m_iszDamageFilterName; // 0x2C8 - 0x2D0
   CUtlStringToken m_nSubclassID; // 0x2D0 - 0x2D4
   unsigned char pad_2D4[0xC] // 0x2D4 - 0x2E0
   float m_flAnimTime; // 0x2E0 - 0x2E4
   float m_flSimulationTime; // 0x2E4 - 0x2E8
   GameTime_t m_flCreateTime; // 0x2E8 - 0x2EC
   bool m_bClientSideRagdoll; // 0x2EC - 0x2ED
   uint8_t m_ubInterpolationFrame; // 0x2ED - 0x2EE
   unsigned char pad_2EE[0x2] // 0x2EE - 0x2F0
   Vector m_vPrevVPhysicsUpdatePos; // 0x2F0 - 0x2FC
   uint8_t m_iTeamNum; // 0x2FC - 0x2FD
   unsigned char pad_2FD[0x3] // 0x2FD - 0x300
   CUtlSymbolLarge m_iGlobalname; // 0x300 - 0x308
   int32_t m_iSentToClients; // 0x308 - 0x30C
   float m_flSpeed; // 0x30C - 0x310
   CUtlString m_sUniqueHammerID; // 0x310 - 0x318
   uint32_t m_spawnflags; // 0x318 - 0x31C
   GameTick_t m_nNextThinkTick; // 0x31C - 0x320
   int32_t m_nSimulationTick; // 0x320 - 0x324
   unsigned char pad_324[0x4] // 0x324 - 0x328
   CEntityIOOutput m_OnKilled; // 0x328 - 0x350
   uint32_t m_fFlags; // 0x350 - 0x354
   Vector m_vecAbsVelocity; // 0x354 - 0x360
   CNetworkVelocityVector m_vecVelocity; // 0x360 - 0x388
   unsigned char pad_388[0x8] // 0x388 - 0x390
   Vector m_vecBaseVelocity; // 0x390 - 0x39C
   int32_t m_nPushEnumCount; // 0x39C - 0x3A0
   CCollisionProperty* m_pCollision; // 0x3A0 - 0x3A8
   CHandle< CBaseEntity > m_hEffectEntity; // 0x3A8 - 0x3AC
   CHandle< CBaseEntity > m_hOwnerEntity; // 0x3AC - 0x3B0
   uint32_t m_fEffects; // 0x3B0 - 0x3B4
   CHandle< CBaseEntity > m_hGroundEntity; // 0x3B4 - 0x3B8
   float m_flFriction; // 0x3B8 - 0x3BC
   float m_flElasticity; // 0x3BC - 0x3C0
   float m_flGravityScale; // 0x3C0 - 0x3C4
   float m_flTimeScale; // 0x3C4 - 0x3C8
   float m_flWaterLevel; // 0x3C8 - 0x3CC
   bool m_bSimulatedEveryTick; // 0x3CC - 0x3CD
   bool m_bAnimatedEveryTick; // 0x3CD - 0x3CE
   uint8_t m_nMinCPULevel; // 0x3CE - 0x3CF
   uint8_t m_nMaxCPULevel; // 0x3CF - 0x3D0
   uint8_t m_nMinGPULevel; // 0x3D0 - 0x3D1
   uint8_t m_nMaxGPULevel; // 0x3D1 - 0x3D2
   bool m_bDisableLowViolence; // 0x3D2 - 0x3D3
   uint8_t m_nWaterType; // 0x3D3 - 0x3D4
   int32_t m_iEFlags; // 0x3D4 - 0x3D8
   CEntityIOOutput m_OnUser1; // 0x3D8 - 0x400
   CEntityIOOutput m_OnUser2; // 0x400 - 0x428
   CEntityIOOutput m_OnUser3; // 0x428 - 0x450
   CEntityIOOutput m_OnUser4; // 0x450 - 0x478
   int32_t m_iInitialTeamNum; // 0x478 - 0x47C
   GameTime_t m_flNavIgnoreUntilTime; // 0x47C - 0x480
   QAngle m_vecAngVelocity; // 0x480 - 0x48C
   bool m_bNetworkQuantizeOriginAndAngles; // 0x48C - 0x48D
   bool m_bLagCompensate; // 0x48D - 0x48E
   unsigned char pad_48E[0x2] // 0x48E - 0x490
   float m_flOverriddenFriction; // 0x490 - 0x494
   CHandle< CBaseEntity > m_pBlocker; // 0x494 - 0x498
   float m_flLocalTime; // 0x498 - 0x49C
   float m_flVPhysicsUpdateLocalTime; // 0x49C - 0x4A0

}; // size - 0x4A0


class CEntityInstance : public IHandleEntity
{
public:

   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x10
   CEntityIdentity* m_pEntity; // 0x10 - 0x18
   unsigned char pad_18[0x10] // 0x18 - 0x28
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x30

}; // size - 0x30


class CBaseModelEntity : public CBaseEntity
{
public:

   CRenderComponent* m_CRenderComponent; // 0x4A0 - 0x4A8
   CHitboxComponent m_CHitboxComponent; // 0x4A8 - 0x4D0
   GameTime_t m_flDissolveStartTime; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0x4] // 0x4D4 - 0x4D8
   CEntityIOOutput m_OnIgnite; // 0x4D8 - 0x500
   RenderMode_t m_nRenderMode; // 0x500 - 0x501
   RenderFx_t m_nRenderFX; // 0x501 - 0x502
   bool m_bAllowFadeInView; // 0x502 - 0x503
   Color m_clrRender; // 0x503 - 0x507
   unsigned char pad_507[0x1] // 0x507 - 0x508
   CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x508 - 0x558
   CUtlStringToken m_LightGroup; // 0x558 - 0x55C
   bool m_bRenderToCubemaps; // 0x55C - 0x55D
   unsigned char pad_55D[0x3] // 0x55D - 0x560
   CCollisionProperty m_Collision; // 0x560 - 0x610
   CGlowProperty m_Glow; // 0x610 - 0x668
   float m_flGlowBackfaceMult; // 0x668 - 0x66C
   float m_fadeMinDist; // 0x66C - 0x670
   float m_fadeMaxDist; // 0x670 - 0x674
   float m_flFadeScale; // 0x674 - 0x678
   float m_flShadowStrength; // 0x678 - 0x67C
   uint8_t m_nObjectCulling; // 0x67C - 0x67D
   unsigned char pad_67D[0x3] // 0x67D - 0x680
   int32_t m_nAddDecal; // 0x680 - 0x684
   Vector m_vDecalPosition; // 0x684 - 0x690
   Vector m_vDecalForwardAxis; // 0x690 - 0x69C
   float m_flDecalHealBloodRate; // 0x69C - 0x6A0
   float m_flDecalHealHeightRate; // 0x6A0 - 0x6A4
   unsigned char pad_6A4[0x4] // 0x6A4 - 0x6A8
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x6A8 - 0x6C0
   CNetworkViewOffsetVector m_vecViewOffset; // 0x6C0 - 0x6E8

}; // size - 0x6F0


class C_BaseEntity : public CEntityInstance
{
public:

   CBodyComponent* m_CBodyComponent; // 0x30 - 0x38
   CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x38 - 0x1D8
   unsigned char pad_1D8[0x120] // 0x1D8 - 0x2F8
   GameTick_t m_nLastThinkTick; // 0x2F8 - 0x2FC
   unsigned char pad_2FC[0x4] // 0x2FC - 0x300
   CGameSceneNode* m_pGameSceneNode; // 0x300 - 0x308
   CRenderComponent* m_pRenderComponent; // 0x308 - 0x310
   CCollisionProperty* m_pCollision; // 0x310 - 0x318
   int32_t m_iMaxHealth; // 0x318 - 0x31C
   int32_t m_iHealth; // 0x31C - 0x320
   uint8_t m_lifeState; // 0x320 - 0x321
   bool m_bTakesDamage; // 0x321 - 0x322
   unsigned char pad_322[0x2] // 0x322 - 0x324
   TakeDamageFlags_t m_nTakeDamageFlags; // 0x324 - 0x328
   uint8_t m_ubInterpolationFrame; // 0x328 - 0x329
   unsigned char pad_329[0x3] // 0x329 - 0x32C
   CHandle< C_BaseEntity > m_hSceneObjectController; // 0x32C - 0x330
   int32_t m_nNoInterpolationTick; // 0x330 - 0x334
   int32_t m_nVisibilityNoInterpolationTick; // 0x334 - 0x338
   float m_flProxyRandomValue; // 0x338 - 0x33C
   int32_t m_iEFlags; // 0x33C - 0x340
   uint8_t m_nWaterType; // 0x340 - 0x341
   bool m_bInterpolateEvenWithNoModel; // 0x341 - 0x342
   bool m_bPredictionEligible; // 0x342 - 0x343
   bool m_bApplyLayerMatchIDToModel; // 0x343 - 0x344
   CUtlStringToken m_tokLayerMatchID; // 0x344 - 0x348
   CUtlStringToken m_nSubclassID; // 0x348 - 0x34C
   unsigned char pad_34C[0xC] // 0x34C - 0x358
   int32_t m_nSimulationTick; // 0x358 - 0x35C
   int32_t m_iCurrentThinkContext; // 0x35C - 0x360
   CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x360 - 0x378
   float m_flAnimTime; // 0x378 - 0x37C
   float m_flSimulationTime; // 0x37C - 0x380
   uint8_t m_nSceneObjectOverrideFlags; // 0x380 - 0x381
   bool m_bHasSuccessfullyInterpolated; // 0x381 - 0x382
   bool m_bHasAddedVarsToInterpolation; // 0x382 - 0x383
   bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x383 - 0x384
   int32 m_nInterpolationLatchDirtyFlags[2]; // 0x384 - 0x38C
   uint16 m_ListEntry[11]; // 0x38C - 0x3A2
   unsigned char pad_3A2[0x2] // 0x3A2 - 0x3A4
   GameTime_t m_flCreateTime; // 0x3A4 - 0x3A8
   float m_flSpeed; // 0x3A8 - 0x3AC
   uint16_t m_EntClientFlags; // 0x3AC - 0x3AE
   bool m_bClientSideRagdoll; // 0x3AE - 0x3AF
   uint8_t m_iTeamNum; // 0x3AF - 0x3B0
   uint32_t m_spawnflags; // 0x3B0 - 0x3B4
   GameTick_t m_nNextThinkTick; // 0x3B4 - 0x3B8
   uint32_t m_fFlags; // 0x3B8 - 0x3BC
   Vector m_vecAbsVelocity; // 0x3BC - 0x3C8
   CNetworkVelocityVector m_vecVelocity; // 0x3C8 - 0x3F0
   unsigned char pad_3F0[0x8] // 0x3F0 - 0x3F8
   Vector m_vecBaseVelocity; // 0x3F8 - 0x404
   CHandle< C_BaseEntity > m_hEffectEntity; // 0x404 - 0x408
   CHandle< C_BaseEntity > m_hOwnerEntity; // 0x408 - 0x40C
   MoveCollide_t m_MoveCollide; // 0x40C - 0x40D
   MoveType_t m_MoveType; // 0x40D - 0x40E
   unsigned char pad_40E[0x2] // 0x40E - 0x410
   float m_flWaterLevel; // 0x410 - 0x414
   uint32_t m_fEffects; // 0x414 - 0x418
   CHandle< C_BaseEntity > m_hGroundEntity; // 0x418 - 0x41C
   float m_flFriction; // 0x41C - 0x420
   float m_flElasticity; // 0x420 - 0x424
   float m_flGravityScale; // 0x424 - 0x428
   float m_flTimeScale; // 0x428 - 0x42C
   bool m_bSimulatedEveryTick; // 0x42C - 0x42D
   bool m_bAnimatedEveryTick; // 0x42D - 0x42E
   uint8_t m_nMinCPULevel; // 0x42E - 0x42F
   uint8_t m_nMaxCPULevel; // 0x42F - 0x430
   uint8_t m_nMinGPULevel; // 0x430 - 0x431
   uint8_t m_nMaxGPULevel; // 0x431 - 0x432
   unsigned char pad_432[0x2] // 0x432 - 0x434
   GameTime_t m_flNavIgnoreUntilTime; // 0x434 - 0x438
   uint16_t m_hThink; // 0x438 - 0x43A
   unsigned char pad_43A[0xE] // 0x43A - 0x448
   uint8_t m_fBBoxVisFlags; // 0x448 - 0x449
   bool m_bPredictable; // 0x449 - 0x44A
   bool m_bRenderWithViewModels; // 0x44A - 0x44B
   unsigned char pad_44B[0x1] // 0x44B - 0x44C
   CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x44C - 0x450
   int32_t m_nFirstPredictableCommand; // 0x450 - 0x454
   int32_t m_nLastPredictableCommand; // 0x454 - 0x458
   CHandle< C_BaseEntity > m_hOldMoveParent; // 0x458 - 0x45C
   unsigned char pad_45C[0x4] // 0x45C - 0x460
   CParticleProperty m_Particles; // 0x460 - 0x488
   CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x488 - 0x4A0
   CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x4A0 - 0x4B8
   unsigned char pad_4B8[0x18] // 0x4B8 - 0x4D0
   int32_t m_nNextScriptVarRecordID; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0xC] // 0x4D4 - 0x4E0
   QAngle m_vecAngVelocity; // 0x4E0 - 0x4EC
   int32_t m_DataChangeEventRef; // 0x4EC - 0x4F0
   CUtlVector< CEntityHandle > m_dependencies; // 0x4F0 - 0x508
   int32_t m_nCreationTick; // 0x508 - 0x50C
   unsigned char pad_50C[0x15] // 0x50C - 0x521
   bool m_bAnimTimeChanged; // 0x521 - 0x522
   bool m_bSimulationTimeChanged; // 0x522 - 0x523
   unsigned char pad_523[0xD] // 0x523 - 0x530
   CUtlString m_sUniqueHammerID; // 0x530 - 0x538

}; // size - 0x538


class CParticleFunction
{
public:

   CParticleCollectionFloatInput m_flOpStrength; // 0x8 - 0x140
   ParticleEndcapMode_t m_nOpEndCapState; // 0x140 - 0x144
   float m_flOpStartFadeInTime; // 0x144 - 0x148
   float m_flOpEndFadeInTime; // 0x148 - 0x14C
   float m_flOpStartFadeOutTime; // 0x14C - 0x150
   float m_flOpEndFadeOutTime; // 0x150 - 0x154
   float m_flOpFadeOscillatePeriod; // 0x154 - 0x158
   bool m_bNormalizeToStopTime; // 0x158 - 0x159
   unsigned char pad_159[0x3] // 0x159 - 0x15C
   float m_flOpTimeOffsetMin; // 0x15C - 0x160
   float m_flOpTimeOffsetMax; // 0x160 - 0x164
   int32_t m_nOpTimeOffsetSeed; // 0x164 - 0x168
   int32_t m_nOpTimeScaleSeed; // 0x168 - 0x16C
   float m_flOpTimeScaleMin; // 0x16C - 0x170
   float m_flOpTimeScaleMax; // 0x170 - 0x174
   unsigned char pad_174[0x1] // 0x174 - 0x175
   bool m_bDisableOperator; // 0x175 - 0x176
   unsigned char pad_176[0x2] // 0x176 - 0x178
   CUtlString m_Notes; // 0x178 - 0x180

}; // size - 0x1F0


class C_BaseModelEntity : public C_BaseEntity
{
public:

   CRenderComponent* m_CRenderComponent; // 0x588 - 0x590
   CHitboxComponent m_CHitboxComponent; // 0x590 - 0x5B8
   unsigned char pad_5B8[0x20] // 0x5B8 - 0x5D8
   bool m_bInitModelEffects; // 0x5D8 - 0x5D9
   bool m_bIsStaticProp; // 0x5D9 - 0x5DA
   unsigned char pad_5DA[0x2] // 0x5DA - 0x5DC
   int32_t m_nLastAddDecal; // 0x5DC - 0x5E0
   int32_t m_nDecalsAdded; // 0x5E0 - 0x5E4
   int32_t m_iOldHealth; // 0x5E4 - 0x5E8
   RenderMode_t m_nRenderMode; // 0x5E8 - 0x5E9
   RenderFx_t m_nRenderFX; // 0x5E9 - 0x5EA
   bool m_bAllowFadeInView; // 0x5EA - 0x5EB
   Color m_clrRender; // 0x5EB - 0x5EF
   unsigned char pad_5EF[0x1] // 0x5EF - 0x5F0
   C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x5F0 - 0x640
   unsigned char pad_640[0x18] // 0x640 - 0x658
   CUtlStringToken m_LightGroup; // 0x658 - 0x65C
   bool m_bRenderToCubemaps; // 0x65C - 0x65D
   unsigned char pad_65D[0x3] // 0x65D - 0x660
   CCollisionProperty m_Collision; // 0x660 - 0x710
   CGlowProperty m_Glow; // 0x710 - 0x768
   float m_flGlowBackfaceMult; // 0x768 - 0x76C
   float m_fadeMinDist; // 0x76C - 0x770
   float m_fadeMaxDist; // 0x770 - 0x774
   float m_flFadeScale; // 0x774 - 0x778
   float m_flShadowStrength; // 0x778 - 0x77C
   uint8_t m_nObjectCulling; // 0x77C - 0x77D
   unsigned char pad_77D[0x3] // 0x77D - 0x780
   int32_t m_nAddDecal; // 0x780 - 0x784
   Vector m_vDecalPosition; // 0x784 - 0x790
   Vector m_vDecalForwardAxis; // 0x790 - 0x79C
   float m_flDecalHealBloodRate; // 0x79C - 0x7A0
   float m_flDecalHealHeightRate; // 0x7A0 - 0x7A4
   unsigned char pad_7A4[0x4] // 0x7A4 - 0x7A8
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x7A8 - 0x7C0
   CNetworkViewOffsetVector m_vecViewOffset; // 0x7C0 - 0x7E8
   unsigned char pad_7E8[0x8] // 0x7E8 - 0x7F0
   CClientAlphaProperty* m_pClientAlphaProperty; // 0x7F0 - 0x7F8
   Color m_ClientOverrideTint; // 0x7F8 - 0x7FC
   bool m_bUseClientOverrideTint; // 0x7FC - 0x7FD

}; // size - 0x838


class CBaseAnimGraph : public CBaseModelEntity
{
public:

   PhysicsRagdollPose_t* m_pRagdollPose; // 0x700 - 0x708
   bool m_bClientRagdoll; // 0x708 - 0x709
   unsigned char pad_709[0x3] // 0x709 - 0x70C
   Vector m_vecForce; // 0x70C - 0x718
   int32_t m_nForceBone; // 0x718 - 0x71C
   bool m_bShouldAnimateDuringGameplayPause; // 0x71C - 0x71D
   bool m_bAnimGraphUpdateEnabled; // 0x71D - 0x71E
   bool m_bInitiallyPopulateInterpHistory; // 0x71E - 0x71F
   unsigned char pad_71F[0x1] // 0x71F - 0x720
   float m_flMaxSlopeDistance; // 0x720 - 0x724
   Vector m_vLastSlopeCheckPos; // 0x724 - 0x730
   IChoreoServices* m_pChoreoServices; // 0x730 - 0x738
   bool m_bAnimGraphDirty; // 0x738 - 0x739

}; // size - 0x820


class CBaseAnimGraph : public C_BaseModelEntity
{
public:

   PhysicsRagdollPose_t* m_pRagdollPose; // 0x848 - 0x850
   bool m_bClientRagdoll; // 0x850 - 0x851
   unsigned char pad_851[0x3] // 0x851 - 0x854
   Vector m_vecForce; // 0x854 - 0x860
   int32_t m_nForceBone; // 0x860 - 0x864
   bool m_bShouldAnimateDuringGameplayPause; // 0x864 - 0x865
   bool m_bAnimGraphUpdateEnabled; // 0x865 - 0x866
   bool m_bInitiallyPopulateInterpHistory; // 0x866 - 0x867
   unsigned char pad_867[0x1] // 0x867 - 0x868
   float m_flMaxSlopeDistance; // 0x868 - 0x86C
   Vector m_vLastSlopeCheckPos; // 0x86C - 0x878
   bool m_bHasAnimatedMaterialAttributes; // 0x878 - 0x879
   unsigned char pad_879[0x7] // 0x879 - 0x880
   CBaseAnimGraph* m_pClientsideRagdoll; // 0x880 - 0x888
   bool m_builtRagdoll; // 0x888 - 0x889
   unsigned char pad_889[0xF] // 0x889 - 0x898
   bool m_bSuppressAnimEventSounds; // 0x898 - 0x899

}; // size - 0x998


class CParticleFunctionOperator : public CParticleFunction
{
public:


}; // size - 0x1F0


class C_BaseFlex : public CBaseAnimGraph
{
public:

   class Emphasized_Phoneme
   {
   public:

      CUtlString m_sClassName; // 0x0 - 0x8
      unsigned char pad_8[0x10] // 0x8 - 0x18
      float m_flAmount; // 0x18 - 0x1C
      bool m_bRequired; // 0x1C - 0x1D
      bool m_bBasechecked; // 0x1D - 0x1E
      bool m_bValid; // 0x1E - 0x1F

   }; // size - 0x20

   C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0x9A0 - 0x9B8
   bool m_blinktoggle; // 0x9B8 - 0x9B9
   unsigned char pad_9B9[0x7] // 0x9B9 - 0x9C0
   Vector m_vLookTargetPosition; // 0x9C0 - 0x9CC
   unsigned char pad_9CC[0x64] // 0x9CC - 0xA30
   int32_t m_nLastFlexUpdateFrameCount; // 0xA30 - 0xA34
   Vector m_CachedViewTarget; // 0xA34 - 0xA40
   uint32_t m_nNextSceneEventId; // 0xA40 - 0xA44
   int32_t m_iBlink; // 0xA44 - 0xA48
   float m_blinktime; // 0xA48 - 0xA4C
   bool m_prevblinktoggle; // 0xA4C - 0xA4D
   unsigned char pad_A4D[0x3] // 0xA4D - 0xA50
   int32_t m_iJawOpen; // 0xA50 - 0xA54
   float m_flJawOpenAmount; // 0xA54 - 0xA58
   float m_flBlinkAmount; // 0xA58 - 0xA5C
   AttachmentHandle_t m_iMouthAttachment; // 0xA5C - 0xA5D
   AttachmentHandle_t m_iEyeAttachment; // 0xA5D - 0xA5E
   bool m_bResetFlexWeightsOnModelChange; // 0xA5E - 0xA5F
   unsigned char pad_A5F[0x19] // 0xA5F - 0xA78
   int32_t m_nEyeOcclusionRendererBone; // 0xA78 - 0xA7C
   matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xA7C - 0xAAC
   Vector m_vEyeOcclusionRendererHalfExtent; // 0xAAC - 0xAB8
   unsigned char pad_AB8[0x10] // 0xAB8 - 0xAC8
   C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0xAC8 - 0xB28

}; // size - 0xB28


class CBaseFlex : public CBaseAnimGraph
{
public:

   CNetworkUtlVectorBase< float32 > m_flexWeight; // 0x820 - 0x838
   Vector m_vLookTargetPosition; // 0x838 - 0x844
   bool m_blinktoggle; // 0x844 - 0x845
   unsigned char pad_845[0x53] // 0x845 - 0x898
   GameTime_t m_flAllowResponsesEndTime; // 0x898 - 0x89C
   GameTime_t m_flLastFlexAnimationTime; // 0x89C - 0x8A0
   uint32_t m_nNextSceneEventId; // 0x8A0 - 0x8A4
   bool m_bUpdateLayerPriorities; // 0x8A4 - 0x8A5

}; // size - 0x8B0


class CServerOnlyEntity : public CBaseEntity
{
public:


}; // size - 0x4A0


class C_EconEntity : public C_BaseFlex
{
public:

   class AttachedModelData_t
   {
   public:

      int32_t m_iModelDisplayFlags; // 0x0 - 0x4

   }; // size - 0x4

   float m_flFlexDelayTime; // 0xB38 - 0xB3C
   unsigned char pad_B3C[0x4] // 0xB3C - 0xB40
   float32* m_flFlexDelayedWeight; // 0xB40 - 0xB48
   bool m_bAttributesInitialized; // 0xB48 - 0xB49
   unsigned char pad_B49[0x7] // 0xB49 - 0xB50
   C_AttributeContainer m_AttributeManager; // 0xB50 - 0xFF8
   uint32_t m_OriginalOwnerXuidLow; // 0xFF8 - 0xFFC
   uint32_t m_OriginalOwnerXuidHigh; // 0xFFC - 0x1000
   int32_t m_nFallbackPaintKit; // 0x1000 - 0x1004
   int32_t m_nFallbackSeed; // 0x1004 - 0x1008
   float m_flFallbackWear; // 0x1008 - 0x100C
   int32_t m_nFallbackStatTrak; // 0x100C - 0x1010
   bool m_bClientside; // 0x1010 - 0x1011
   bool m_bParticleSystemsCreated; // 0x1011 - 0x1012
   unsigned char pad_1012[0x6] // 0x1012 - 0x1018
   CUtlVector< int32 > m_vecAttachedParticles; // 0x1018 - 0x1030
   CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0x1030 - 0x1034
   int32_t m_iOldTeam; // 0x1034 - 0x1038
   bool m_bAttachmentDirty; // 0x1038 - 0x1039
   unsigned char pad_1039[0x3] // 0x1039 - 0x103C
   int32_t m_nUnloadedModelIndex; // 0x103C - 0x1040
   int32_t m_iNumOwnerValidationRetries; // 0x1040 - 0x1044
   unsigned char pad_1044[0xC] // 0x1044 - 0x1050
   CHandle< C_BaseEntity > m_hOldProvidee; // 0x1050 - 0x1054
   unsigned char pad_1054[0x4] // 0x1054 - 0x1058
   CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0x1058 - 0x1070

}; // size - 0x1070


class CEconEntity : public CBaseFlex
{
public:

   CAttributeContainer m_AttributeManager; // 0x8C0 - 0xB88
   uint32_t m_OriginalOwnerXuidLow; // 0xB88 - 0xB8C
   uint32_t m_OriginalOwnerXuidHigh; // 0xB8C - 0xB90
   int32_t m_nFallbackPaintKit; // 0xB90 - 0xB94
   int32_t m_nFallbackSeed; // 0xB94 - 0xB98
   float m_flFallbackWear; // 0xB98 - 0xB9C
   int32_t m_nFallbackStatTrak; // 0xB9C - 0xBA0
   CHandle< CBaseEntity > m_hOldProvidee; // 0xBA0 - 0xBA4
   int32_t m_iOldOwnerClass; // 0xBA4 - 0xBA8

}; // size - 0xBA8


class CParticleFunctionInitializer : public CParticleFunction
{
public:

   int32_t m_nAssociatedEmitterIndex; // 0x1E8 - 0x1EC

}; // size - 0x1F0


class CBaseProp : public CBaseAnimGraph
{
public:

   bool m_bModelOverrodeBlockLOS; // 0x820 - 0x821
   unsigned char pad_821[0x3] // 0x821 - 0x824
   int32_t m_iShapeType; // 0x824 - 0x828
   bool m_bConformToCollisionBounds; // 0x828 - 0x829
   unsigned char pad_829[0x3] // 0x829 - 0x82C
   matrix3x4_t m_mPreferredCatchTransform; // 0x82C - 0x85C

}; // size - 0x860


class CBaseToggle : public CBaseModelEntity
{
public:

   TOGGLE_STATE m_toggle_state; // 0x6F0 - 0x6F4
   float m_flMoveDistance; // 0x6F4 - 0x6F8
   float m_flWait; // 0x6F8 - 0x6FC
   float m_flLip; // 0x6FC - 0x700
   bool m_bAlwaysFireBlockedOutputs; // 0x700 - 0x701
   unsigned char pad_701[0x3] // 0x701 - 0x704
   Vector m_vecPosition1; // 0x704 - 0x710
   Vector m_vecPosition2; // 0x710 - 0x71C
   QAngle m_vecMoveAng; // 0x71C - 0x728
   QAngle m_vecAngle1; // 0x728 - 0x734
   QAngle m_vecAngle2; // 0x734 - 0x740
   float m_flHeight; // 0x740 - 0x744
   CHandle< CBaseEntity > m_hActivator; // 0x744 - 0x748
   Vector m_vecFinalDest; // 0x748 - 0x754
   QAngle m_vecFinalAngle; // 0x754 - 0x760
   int32_t m_movementType; // 0x760 - 0x764
   unsigned char pad_764[0x4] // 0x764 - 0x768
   CUtlSymbolLarge m_sMaster; // 0x768 - 0x770

}; // size - 0x770


class CBasePlayerWeapon : public CEconEntity
{
public:

   WeaponState_t m_iState; // 0xBA8 - 0xBAC
   bool m_bRemoveable; // 0xBAC - 0xBAD
   unsigned char pad_BAD[0x3] // 0xBAD - 0xBB0
   GameTick_t m_nNextPrimaryAttackTick; // 0xBB0 - 0xBB4
   float m_flNextPrimaryAttackTickRatio; // 0xBB4 - 0xBB8
   GameTick_t m_nNextSecondaryAttackTick; // 0xBB8 - 0xBBC
   float m_flNextSecondaryAttackTickRatio; // 0xBBC - 0xBC0
   int32_t m_iClip1; // 0xBC0 - 0xBC4
   int32_t m_iClip2; // 0xBC4 - 0xBC8
   int32 m_pReserveAmmo[2]; // 0xBC8 - 0xBD0
   CEntityIOOutput m_OnPlayerUse; // 0xBD0 - 0xBF8

}; // size - 0xBF8


class C_BasePlayerWeapon : public C_EconEntity
{
public:

   WeaponState_t m_iState; // 0x1070 - 0x1074
   WeaponState_t m_iOldState; // 0x1074 - 0x1078
   bool m_bRemoveable; // 0x1078 - 0x1079
   unsigned char pad_1079[0x3] // 0x1079 - 0x107C
   GameTick_t m_nNextPrimaryAttackTick; // 0x107C - 0x1080
   float m_flNextPrimaryAttackTickRatio; // 0x1080 - 0x1084
   GameTick_t m_nNextSecondaryAttackTick; // 0x1084 - 0x1088
   float m_flNextSecondaryAttackTickRatio; // 0x1088 - 0x108C
   int32_t m_iClip1; // 0x108C - 0x1090
   int32_t m_iClip2; // 0x1090 - 0x1094
   int32 m_pReserveAmmo[2]; // 0x1094 - 0x109C

}; // size - 0x10A0


class CBreakableProp : public CBaseProp
{
public:

   CEntityIOOutput m_OnBreak; // 0x870 - 0x898
   CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x898 - 0x8C0
   CEntityIOOutput m_OnTakeDamage; // 0x8C0 - 0x8E8
   float m_impactEnergyScale; // 0x8E8 - 0x8EC
   int32_t m_iMinHealthDmg; // 0x8EC - 0x8F0
   QAngle m_preferredCarryAngles; // 0x8F0 - 0x8FC
   float m_flPressureDelay; // 0x8FC - 0x900
   CHandle< CBaseEntity > m_hBreaker; // 0x900 - 0x904
   PerformanceMode_t m_PerformanceMode; // 0x904 - 0x908
   float m_flDmgModBullet; // 0x908 - 0x90C
   float m_flDmgModClub; // 0x90C - 0x910
   float m_flDmgModExplosive; // 0x910 - 0x914
   float m_flDmgModFire; // 0x914 - 0x918
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x918 - 0x920
   CUtlSymbolLarge m_iszBasePropData; // 0x920 - 0x928
   int32_t m_iInteractions; // 0x928 - 0x92C
   GameTime_t m_flPreventDamageBeforeTime; // 0x92C - 0x930
   bool m_bHasBreakPiecesOrCommands; // 0x930 - 0x931
   unsigned char pad_931[0x3] // 0x931 - 0x934
   float m_explodeDamage; // 0x934 - 0x938
   float m_explodeRadius; // 0x938 - 0x93C
   unsigned char pad_93C[0x4] // 0x93C - 0x940
   float m_explosionDelay; // 0x940 - 0x944
   unsigned char pad_944[0x4] // 0x944 - 0x948
   CUtlSymbolLarge m_explosionBuildupSound; // 0x948 - 0x950
   CUtlSymbolLarge m_explosionCustomEffect; // 0x950 - 0x958
   CUtlSymbolLarge m_explosionCustomSound; // 0x958 - 0x960
   CUtlSymbolLarge m_explosionModifier; // 0x960 - 0x968
   CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x968 - 0x96C
   GameTime_t m_flLastPhysicsInfluenceTime; // 0x96C - 0x970
   bool m_bOriginalBlockLOS; // 0x970 - 0x971
   unsigned char pad_971[0x3] // 0x971 - 0x974
   float m_flDefaultFadeScale; // 0x974 - 0x978
   CHandle< CBaseEntity > m_hLastAttacker; // 0x978 - 0x97C
   CHandle< CBaseEntity > m_hFlareEnt; // 0x97C - 0x980
   bool m_bUsePuntSound; // 0x980 - 0x981
   unsigned char pad_981[0x7] // 0x981 - 0x988
   CUtlSymbolLarge m_iszPuntSound; // 0x988 - 0x990
   bool m_noGhostCollision; // 0x990 - 0x991

}; // size - 0x998


class CPointEntity : public CBaseEntity
{
public:


}; // size - 0x4A0


class CLogicalEntity : public CServerOnlyEntity
{
public:


}; // size - 0x4A0


class CWeaponCSBase : public CBasePlayerWeapon
{
public:

   float m_flFireSequenceStartTime; // 0xC20 - 0xC24
   int32_t m_nFireSequenceStartTimeChange; // 0xC24 - 0xC28
   int32_t m_nFireSequenceStartTimeAck; // 0xC28 - 0xC2C
   bool m_bPlayerFireEventIsPrimary; // 0xC2C - 0xC2D
   unsigned char pad_C2D[0x3] // 0xC2D - 0xC30
   HSequence m_seqIdle; // 0xC30 - 0xC34
   HSequence m_seqFirePrimary; // 0xC34 - 0xC38
   HSequence m_seqFireSecondary; // 0xC38 - 0xC3C
   unsigned char pad_C3C[0xC] // 0xC3C - 0xC48
   bool m_bPlayerAmmoStockOnPickup; // 0xC48 - 0xC49
   bool m_bRequireUseToTouch; // 0xC49 - 0xC4A
   unsigned char pad_C4A[0x2] // 0xC4A - 0xC4C
   GameTime_t m_flLastTimeInAir; // 0xC4C - 0xC50
   GameTime_t m_flLastDeployTime; // 0xC50 - 0xC54
   uint32_t m_nViewModelIndex; // 0xC54 - 0xC58
   bool m_bReloadsWithClips; // 0xC58 - 0xC59
   unsigned char pad_C59[0x3] // 0xC59 - 0xC5C
   GameTime_t m_flTimeWeaponIdle; // 0xC5C - 0xC60
   bool m_bFireOnEmpty; // 0xC60 - 0xC61
   unsigned char pad_C61[0x7] // 0xC61 - 0xC68
   CEntityIOOutput m_OnPlayerPickup; // 0xC68 - 0xC90
   CSWeaponMode m_weaponMode; // 0xC90 - 0xC94
   float m_flTurningInaccuracyDelta; // 0xC94 - 0xC98
   Vector m_vecTurningInaccuracyEyeDirLast; // 0xC98 - 0xCA4
   float m_flTurningInaccuracy; // 0xCA4 - 0xCA8
   float m_fAccuracyPenalty; // 0xCA8 - 0xCAC
   GameTime_t m_flLastAccuracyUpdateTime; // 0xCAC - 0xCB0
   float m_fAccuracySmoothedForZoom; // 0xCB0 - 0xCB4
   GameTime_t m_fScopeZoomEndTime; // 0xCB4 - 0xCB8
   int32_t m_iRecoilIndex; // 0xCB8 - 0xCBC
   float m_flRecoilIndex; // 0xCBC - 0xCC0
   bool m_bBurstMode; // 0xCC0 - 0xCC1
   unsigned char pad_CC1[0x3] // 0xCC1 - 0xCC4
   GameTime_t m_flPostponeFireReadyTime; // 0xCC4 - 0xCC8
   bool m_bInReload; // 0xCC8 - 0xCC9
   bool m_bReloadVisuallyComplete; // 0xCC9 - 0xCCA
   unsigned char pad_CCA[0x2] // 0xCCA - 0xCCC
   GameTime_t m_flDroppedAtTime; // 0xCCC - 0xCD0
   bool m_bIsHauledBack; // 0xCD0 - 0xCD1
   bool m_bSilencerOn; // 0xCD1 - 0xCD2
   unsigned char pad_CD2[0x2] // 0xCD2 - 0xCD4
   GameTime_t m_flTimeSilencerSwitchComplete; // 0xCD4 - 0xCD8
   int32_t m_iOriginalTeamNumber; // 0xCD8 - 0xCDC
   float m_flNextAttackRenderTimeOffset; // 0xCDC - 0xCE0
   unsigned char pad_CE0[0x8] // 0xCE0 - 0xCE8
   bool m_bCanBePickedUp; // 0xCE8 - 0xCE9
   bool m_bUseCanOverrideNextOwnerTouchTime; // 0xCE9 - 0xCEA
   unsigned char pad_CEA[0x2] // 0xCEA - 0xCEC
   GameTime_t m_nextOwnerTouchTime; // 0xCEC - 0xCF0
   GameTime_t m_nextPrevOwnerTouchTime; // 0xCF0 - 0xCF4
   CHandle< CCSPlayerPawnBase > m_hPrevOwner; // 0xCF4 - 0xCF8
   unsigned char pad_CF8[0x1C] // 0xCF8 - 0xD14
   bool m_donated; // 0xD14 - 0xD15
   unsigned char pad_D15[0x3] // 0xD15 - 0xD18
   GameTime_t m_fLastShotTime; // 0xD18 - 0xD1C
   bool m_bWasOwnedByCT; // 0xD1C - 0xD1D
   bool m_bWasOwnedByTerrorist; // 0xD1D - 0xD1E
   bool m_bFiredOutOfAmmoEvent; // 0xD1E - 0xD1F
   unsigned char pad_D1F[0x1] // 0xD1F - 0xD20
   int32_t m_numRemoveUnownedWeaponThink; // 0xD20 - 0xD24
   unsigned char pad_D24[0x4] // 0xD24 - 0xD28
   CIronSightController m_IronSightController; // 0xD28 - 0xD40
   int32_t m_iIronSightMode; // 0xD40 - 0xD44
   GameTime_t m_flLastLOSTraceFailureTime; // 0xD44 - 0xD48
   int32_t m_iNumEmptyAttacks; // 0xD48 - 0xD4C

}; // size - 0xD50


class C_WeaponCSBase : public C_BasePlayerWeapon
{
public:

   float m_flFireSequenceStartTime; // 0x10D8 - 0x10DC
   int32_t m_nFireSequenceStartTimeChange; // 0x10DC - 0x10E0
   int32_t m_nFireSequenceStartTimeAck; // 0x10E0 - 0x10E4
   bool m_bPlayerFireEventIsPrimary; // 0x10E4 - 0x10E5
   unsigned char pad_10E5[0x3] // 0x10E5 - 0x10E8
   HSequence m_seqIdle; // 0x10E8 - 0x10EC
   HSequence m_seqFirePrimary; // 0x10EC - 0x10F0
   HSequence m_seqFireSecondary; // 0x10F0 - 0x10F4
   unsigned char pad_10F4[0x14] // 0x10F4 - 0x1108
   float m_flCrosshairDistance; // 0x1108 - 0x110C
   int32_t m_iAmmoLastCheck; // 0x110C - 0x1110
   int32_t m_iAlpha; // 0x1110 - 0x1114
   int32_t m_iScopeTextureID; // 0x1114 - 0x1118
   int32_t m_iCrosshairTextureID; // 0x1118 - 0x111C
   float m_flGunAccuracyPosition; // 0x111C - 0x1120
   uint32_t m_nViewModelIndex; // 0x1120 - 0x1124
   bool m_bReloadsWithClips; // 0x1124 - 0x1125
   unsigned char pad_1125[0x3] // 0x1125 - 0x1128
   GameTime_t m_flTimeWeaponIdle; // 0x1128 - 0x112C
   bool m_bFireOnEmpty; // 0x112C - 0x112D
   unsigned char pad_112D[0x3] // 0x112D - 0x1130
   CEntityIOOutput m_OnPlayerPickup; // 0x1130 - 0x1158
   CSWeaponMode m_weaponMode; // 0x1158 - 0x115C
   float m_flTurningInaccuracyDelta; // 0x115C - 0x1160
   Vector m_vecTurningInaccuracyEyeDirLast; // 0x1160 - 0x116C
   float m_flTurningInaccuracy; // 0x116C - 0x1170
   float m_fAccuracyPenalty; // 0x1170 - 0x1174
   GameTime_t m_flLastAccuracyUpdateTime; // 0x1174 - 0x1178
   float m_fAccuracySmoothedForZoom; // 0x1178 - 0x117C
   GameTime_t m_fScopeZoomEndTime; // 0x117C - 0x1180
   int32_t m_iRecoilIndex; // 0x1180 - 0x1184
   float m_flRecoilIndex; // 0x1184 - 0x1188
   bool m_bBurstMode; // 0x1188 - 0x1189
   unsigned char pad_1189[0x3] // 0x1189 - 0x118C
   GameTime_t m_flPostponeFireReadyTime; // 0x118C - 0x1190
   bool m_bInReload; // 0x1190 - 0x1191
   bool m_bReloadVisuallyComplete; // 0x1191 - 0x1192
   unsigned char pad_1192[0x2] // 0x1192 - 0x1194
   GameTime_t m_flDroppedAtTime; // 0x1194 - 0x1198
   bool m_bIsHauledBack; // 0x1198 - 0x1199
   bool m_bSilencerOn; // 0x1199 - 0x119A
   unsigned char pad_119A[0x2] // 0x119A - 0x119C
   GameTime_t m_flTimeSilencerSwitchComplete; // 0x119C - 0x11A0
   int32_t m_iOriginalTeamNumber; // 0x11A0 - 0x11A4
   float m_flNextAttackRenderTimeOffset; // 0x11A4 - 0x11A8
   unsigned char pad_11A8[0x88] // 0x11A8 - 0x1230
   bool m_bVisualsDataSet; // 0x1230 - 0x1231
   bool m_bOldFirstPersonSpectatedState; // 0x1231 - 0x1232
   unsigned char pad_1232[0x2] // 0x1232 - 0x1234
   CHandle< C_BaseEntity > m_hOurPing; // 0x1234 - 0x1238
   CEntityIndex m_nOurPingIndex; // 0x1238 - 0x123C
   Vector m_vecOurPingPos; // 0x123C - 0x1248
   bool m_bGlowForPing; // 0x1248 - 0x1249
   bool m_bUIWeapon; // 0x1249 - 0x124A
   unsigned char pad_124A[0xE] // 0x124A - 0x1258
   CHandle< C_CSPlayerPawnBase > m_hPrevOwner; // 0x1258 - 0x125C
   unsigned char pad_125C[0x20] // 0x125C - 0x127C
   bool m_donated; // 0x127C - 0x127D
   unsigned char pad_127D[0x3] // 0x127D - 0x1280
   GameTime_t m_fLastShotTime; // 0x1280 - 0x1284
   bool m_bWasOwnedByCT; // 0x1284 - 0x1285
   bool m_bWasOwnedByTerrorist; // 0x1285 - 0x1286
   unsigned char pad_1286[0x2] // 0x1286 - 0x1288
   float m_gunHeat; // 0x1288 - 0x128C
   uint32_t m_smokeAttachments; // 0x128C - 0x1290
   GameTime_t m_lastSmokeTime; // 0x1290 - 0x1294
   float m_flLastClientFireBulletTime; // 0x1294 - 0x1298
   unsigned char pad_1298[0x58] // 0x1298 - 0x12F0
   C_IronSightController m_IronSightController; // 0x12F0 - 0x13A0
   int32_t m_iIronSightMode; // 0x13A0 - 0x13A4
   unsigned char pad_13A4[0xC] // 0x13A4 - 0x13B0
   GameTime_t m_flLastLOSTraceFailureTime; // 0x13B0 - 0x13B4
   int32_t m_iNumEmptyAttacks; // 0x13B4 - 0x13B8

}; // size - 0x13D0


class CAnimUpdateNodeBase
{
public:

   CAnimNodePath m_nodePath; // 0x18 - 0x48
   CUtlString m_name; // 0x48 - 0x50
   AnimNodeNetworkMode m_networkMode; // 0x50 - 0x54

}; // size - 0x58


class CPlayerPawnComponent
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30

}; // size - 0x40


class CAnimNodeBase
{
public:

   CUtlString m_sName; // 0x20 - 0x28
   Vector2D m_vecPosition; // 0x28 - 0x30
   AnimNodeID m_nNodeID; // 0x30 - 0x34
   AnimNodeNetworkMode m_networkMode; // 0x34 - 0x38

}; // size - 0x38


class CPhysicsProp : public CBreakableProp
{
public:

   CEntityIOOutput m_MotionEnabled; // 0x9A0 - 0x9C8
   CEntityIOOutput m_OnAwakened; // 0x9C8 - 0x9F0
   CEntityIOOutput m_OnAwake; // 0x9F0 - 0xA18
   CEntityIOOutput m_OnAsleep; // 0xA18 - 0xA40
   CEntityIOOutput m_OnPlayerUse; // 0xA40 - 0xA68
   CEntityIOOutput m_OnPlayerPickup; // 0xA68 - 0xA90
   CEntityIOOutput m_OnOutOfWorld; // 0xA90 - 0xAB8
   float m_massScale; // 0xAB8 - 0xABC
   float m_inertiaScale; // 0xABC - 0xAC0
   int32_t m_damageType; // 0xAC0 - 0xAC4
   int32_t m_damageToEnableMotion; // 0xAC4 - 0xAC8
   float m_flForceToEnableMotion; // 0xAC8 - 0xACC
   bool m_bThrownByPlayer; // 0xACC - 0xACD
   bool m_bDroppedByPlayer; // 0xACD - 0xACE
   bool m_bTouchedByPlayer; // 0xACE - 0xACF
   bool m_bFirstCollisionAfterLaunch; // 0xACF - 0xAD0
   int32_t m_iExploitableByPlayer; // 0xAD0 - 0xAD4
   bool m_bHasBeenAwakened; // 0xAD4 - 0xAD5
   bool m_bIsOverrideProp; // 0xAD5 - 0xAD6
   unsigned char pad_AD6[0x2] // 0xAD6 - 0xAD8
   GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xAD8 - 0xADC
   int32_t m_iInitialGlowState; // 0xADC - 0xAE0
   int32_t m_nGlowRange; // 0xAE0 - 0xAE4
   int32_t m_nGlowRangeMin; // 0xAE4 - 0xAE8
   Color m_glowColor; // 0xAE8 - 0xAEC
   bool m_bForceNavIgnore; // 0xAEC - 0xAED
   bool m_bNoNavmeshBlocker; // 0xAED - 0xAEE
   bool m_bForceNpcExclude; // 0xAEE - 0xAEF
   bool m_bShouldAutoConvertBackFromDebris; // 0xAEF - 0xAF0
   bool m_bMuteImpactEffects; // 0xAF0 - 0xAF1
   unsigned char pad_AF1[0x7] // 0xAF1 - 0xAF8
   bool m_bAcceptDamageFromHeldObjects; // 0xAF8 - 0xAF9
   bool m_bEnableUseOutput; // 0xAF9 - 0xAFA
   bool m_bAwake; // 0xAFA - 0xAFB
   unsigned char pad_AFB[0x1] // 0xAFB - 0xAFC
   int32_t m_nCollisionGroupOverride; // 0xAFC - 0xB00

}; // size - 0xB00


class CBaseTrigger : public CBaseToggle
{
public:

   bool m_bDisabled; // 0x770 - 0x771
   unsigned char pad_771[0x7] // 0x771 - 0x778
   CUtlSymbolLarge m_iFilterName; // 0x778 - 0x780
   CHandle< CBaseFilter > m_hFilter; // 0x780 - 0x784
   unsigned char pad_784[0x4] // 0x784 - 0x788
   CEntityIOOutput m_OnStartTouch; // 0x788 - 0x7B0
   CEntityIOOutput m_OnStartTouchAll; // 0x7B0 - 0x7D8
   CEntityIOOutput m_OnEndTouch; // 0x7D8 - 0x800
   CEntityIOOutput m_OnEndTouchAll; // 0x800 - 0x828
   CEntityIOOutput m_OnTouching; // 0x828 - 0x850
   CEntityIOOutput m_OnNotTouching; // 0x850 - 0x878
   CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x878 - 0x890
   bool m_bClientSidePredicted; // 0x890 - 0x891

}; // size - 0x898


class CParticleFunctionPreEmission : public CParticleFunctionOperator
{
public:

   bool m_bRunOnce; // 0x1F0 - 0x1F1

}; // size - 0x200


class CPhysicsPropMultiplayer : public CPhysicsProp
{
public:


}; // size - 0xB00


class CBaseProp : public CBaseAnimGraph
{
public:

   bool m_bModelOverrodeBlockLOS; // 0x998 - 0x999
   unsigned char pad_999[0x3] // 0x999 - 0x99C
   int32_t m_iShapeType; // 0x99C - 0x9A0
   bool m_bConformToCollisionBounds; // 0x9A0 - 0x9A1
   unsigned char pad_9A1[0x3] // 0x9A1 - 0x9A4
   matrix3x4_t m_mPreferredCatchTransform; // 0x9A4 - 0x9D4

}; // size - 0x9D8


class CParticleFunctionRenderer : public CParticleFunction
{
public:

   CParticleVisibilityInputs VisibilityInputs; // 0x1E8 - 0x22C
   bool m_bCannotBeRefracted; // 0x22C - 0x22D
   bool m_bSkipRenderingOnMobile; // 0x22D - 0x22E

}; // size - 0x230


class CWeaponCSBaseGun : public CWeaponCSBase
{
public:

   int32_t m_zoomLevel; // 0xD50 - 0xD54
   int32_t m_iBurstShotsRemaining; // 0xD54 - 0xD58
   unsigned char pad_D58[0x8] // 0xD58 - 0xD60
   int32_t m_silencedModelIndex; // 0xD60 - 0xD64
   bool m_inPrecache; // 0xD64 - 0xD65
   bool m_bNeedsBoltAction; // 0xD65 - 0xD66
   bool m_bSkillReloadAvailable; // 0xD66 - 0xD67
   bool m_bSkillReloadLiftedReloadKey; // 0xD67 - 0xD68
   bool m_bSkillBoltInterruptAvailable; // 0xD68 - 0xD69
   bool m_bSkillBoltLiftedFireKey; // 0xD69 - 0xD6A

}; // size - 0xD70


class C_WeaponCSBaseGun : public C_WeaponCSBase
{
public:

   int32_t m_zoomLevel; // 0x13D0 - 0x13D4
   int32_t m_iBurstShotsRemaining; // 0x13D4 - 0x13D8
   int32_t m_iSilencerBodygroup; // 0x13D8 - 0x13DC
   unsigned char pad_13DC[0xC] // 0x13DC - 0x13E8
   int32_t m_silencedModelIndex; // 0x13E8 - 0x13EC
   bool m_inPrecache; // 0x13EC - 0x13ED
   bool m_bNeedsBoltAction; // 0x13ED - 0x13EE

}; // size - 0x13F0


class CBrBaseItem : public CPhysicsPropMultiplayer
{
public:


}; // size - 0xB28


class CEntityComponent
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class CUnaryUpdateNode : public CAnimUpdateNodeBase
{
public:

   CAnimUpdateNodeRef m_pChildNode; // 0x58 - 0x68

}; // size - 0x68


class C_BreakableProp : public CBaseProp
{
public:

   CEntityIOOutput m_OnBreak; // 0x9E0 - 0xA08
   CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xA08 - 0xA30
   CEntityIOOutput m_OnTakeDamage; // 0xA30 - 0xA58
   float m_impactEnergyScale; // 0xA58 - 0xA5C
   int32_t m_iMinHealthDmg; // 0xA5C - 0xA60
   float m_flPressureDelay; // 0xA60 - 0xA64
   CHandle< C_BaseEntity > m_hBreaker; // 0xA64 - 0xA68
   PerformanceMode_t m_PerformanceMode; // 0xA68 - 0xA6C
   float m_flDmgModBullet; // 0xA6C - 0xA70
   float m_flDmgModClub; // 0xA70 - 0xA74
   float m_flDmgModExplosive; // 0xA74 - 0xA78
   float m_flDmgModFire; // 0xA78 - 0xA7C
   unsigned char pad_A7C[0x4] // 0xA7C - 0xA80
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xA80 - 0xA88
   CUtlSymbolLarge m_iszBasePropData; // 0xA88 - 0xA90
   int32_t m_iInteractions; // 0xA90 - 0xA94
   GameTime_t m_flPreventDamageBeforeTime; // 0xA94 - 0xA98
   bool m_bHasBreakPiecesOrCommands; // 0xA98 - 0xA99
   unsigned char pad_A99[0x3] // 0xA99 - 0xA9C
   float m_explodeDamage; // 0xA9C - 0xAA0
   float m_explodeRadius; // 0xAA0 - 0xAA4
   unsigned char pad_AA4[0x4] // 0xAA4 - 0xAA8
   float m_explosionDelay; // 0xAA8 - 0xAAC
   unsigned char pad_AAC[0x4] // 0xAAC - 0xAB0
   CUtlSymbolLarge m_explosionBuildupSound; // 0xAB0 - 0xAB8
   CUtlSymbolLarge m_explosionCustomEffect; // 0xAB8 - 0xAC0
   CUtlSymbolLarge m_explosionCustomSound; // 0xAC0 - 0xAC8
   CUtlSymbolLarge m_explosionModifier; // 0xAC8 - 0xAD0
   CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0xAD0 - 0xAD4
   GameTime_t m_flLastPhysicsInfluenceTime; // 0xAD4 - 0xAD8
   float m_flDefaultFadeScale; // 0xAD8 - 0xADC
   CHandle< C_BaseEntity > m_hLastAttacker; // 0xADC - 0xAE0
   CHandle< C_BaseEntity > m_hFlareEnt; // 0xAE0 - 0xAE4
   bool m_noGhostCollision; // 0xAE4 - 0xAE5

}; // size - 0xAE8


class CServerOnlyPointEntity : public CServerOnlyEntity
{
public:


}; // size - 0x4A0


class CParticleFunctionForce : public CParticleFunction
{
public:


}; // size - 0x1F0


class C_BaseCombatCharacter : public C_BaseFlex
{
public:

   enum class WaterWakeMode_t : std::uint32_t
   {
      WATER_WAKE_NONE = 0,
      WATER_WAKE_IDLE = 1,
      WATER_WAKE_WALKING = 2,
      WATER_WAKE_RUNNING = 3,
      WATER_WAKE_WATER_OVERHEAD = 4
   };

   C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0xB28 - 0xB40
   int32_t m_bloodColor; // 0xB40 - 0xB44
   AttachmentHandle_t m_leftFootAttachment; // 0xB44 - 0xB45
   AttachmentHandle_t m_rightFootAttachment; // 0xB45 - 0xB46
   unsigned char pad_B46[0x2] // 0xB46 - 0xB48
   C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xB48 - 0xB4C
   float m_flWaterWorldZ; // 0xB4C - 0xB50
   float m_flWaterNextTraceTime; // 0xB50 - 0xB54
   float m_flFieldOfView; // 0xB54 - 0xB58

}; // size - 0xBB8


class EventSimulate_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   bool m_bFirstTick; // 0x28 - 0x29
   bool m_bLastTick; // 0x29 - 0x2A

}; // size - 0x30


class CBoneConstraintBase
{
public:


}; // size - 0x28


class CPhysPropWeaponUpgrade : public CBrBaseItem
{
public:

   int32_t m_nEventPriority; // 0xB28 - 0xB2C
   GameTime_t m_flTimeLastUsed; // 0xB2C - 0xB30

}; // size - 0xB30


class CBaseFilter : public CLogicalEntity
{
public:

   bool m_bNegated; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x7] // 0x4A1 - 0x4A8
   CEntityIOOutput m_OnPass; // 0x4A8 - 0x4D0
   CEntityIOOutput m_OnFail; // 0x4D0 - 0x4F8

}; // size - 0x4F8


class CBaseGrenade : public CBaseFlex
{
public:

   CEntityIOOutput m_OnPlayerPickup; // 0x8B8 - 0x8E0
   CEntityIOOutput m_OnExplode; // 0x8E0 - 0x908
   bool m_bHasWarnedAI; // 0x908 - 0x909
   bool m_bIsSmokeGrenade; // 0x909 - 0x90A
   bool m_bIsLive; // 0x90A - 0x90B
   unsigned char pad_90B[0x1] // 0x90B - 0x90C
   float m_DmgRadius; // 0x90C - 0x910
   GameTime_t m_flDetonateTime; // 0x910 - 0x914
   float m_flWarnAITime; // 0x914 - 0x918
   float m_flDamage; // 0x918 - 0x91C
   unsigned char pad_91C[0x4] // 0x91C - 0x920
   CUtlSymbolLarge m_iszBounceSound; // 0x920 - 0x928
   CUtlString m_ExplosionSound; // 0x928 - 0x930
   unsigned char pad_930[0x4] // 0x930 - 0x934
   CHandle< CBaseEntity > m_hThrower; // 0x934 - 0x938
   unsigned char pad_938[0x18] // 0x938 - 0x950
   GameTime_t m_flNextAttack; // 0x950 - 0x954
   CHandle< CBaseEntity > m_hOriginalThrower; // 0x954 - 0x958

}; // size - 0x958


class CDynamicProp : public CBreakableProp
{
public:

   bool m_bCreateNavObstacle; // 0x9A0 - 0x9A1
   bool m_bUseHitboxesForRenderBox; // 0x9A1 - 0x9A2
   bool m_bUseAnimGraph; // 0x9A2 - 0x9A3
   unsigned char pad_9A3[0x5] // 0x9A3 - 0x9A8
   CEntityIOOutput m_pOutputAnimBegun; // 0x9A8 - 0x9D0
   CEntityIOOutput m_pOutputAnimOver; // 0x9D0 - 0x9F8
   CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x9F8 - 0xA20
   CEntityIOOutput m_OnAnimReachedStart; // 0xA20 - 0xA48
   CEntityIOOutput m_OnAnimReachedEnd; // 0xA48 - 0xA70
   CUtlSymbolLarge m_iszDefaultAnim; // 0xA70 - 0xA78
   AnimLoopMode_t m_nDefaultAnimLoopMode; // 0xA78 - 0xA7C
   bool m_bAnimateOnServer; // 0xA7C - 0xA7D
   bool m_bRandomizeCycle; // 0xA7D - 0xA7E
   bool m_bStartDisabled; // 0xA7E - 0xA7F
   bool m_bScriptedMovement; // 0xA7F - 0xA80
   bool m_bFiredStartEndOutput; // 0xA80 - 0xA81
   bool m_bForceNpcExclude; // 0xA81 - 0xA82
   bool m_bCreateNonSolid; // 0xA82 - 0xA83
   bool m_bIsOverrideProp; // 0xA83 - 0xA84
   int32_t m_iInitialGlowState; // 0xA84 - 0xA88
   int32_t m_nGlowRange; // 0xA88 - 0xA8C
   int32_t m_nGlowRangeMin; // 0xA8C - 0xA90
   Color m_glowColor; // 0xA90 - 0xA94
   int32_t m_nGlowTeam; // 0xA94 - 0xA98

}; // size - 0xA98


class CMotionMetricBase
{
public:

   float m_flWeight; // 0x20 - 0x24

}; // size - 0x28


class CMotionMetricEvaluator
{
public:

   CUtlVector< float32 > m_means; // 0x18 - 0x30
   CUtlVector< float32 > m_standardDeviations; // 0x30 - 0x48
   float m_flWeight; // 0x48 - 0x4C
   int32_t m_nDimensionStartIndex; // 0x4C - 0x50

}; // size - 0x50


class C_BaseToggle : public C_BaseModelEntity
{
public:


}; // size - 0x838


class CParticleFunctionConstraint : public CParticleFunction
{
public:


}; // size - 0x1F0


class CLeafUpdateNode : public CAnimUpdateNodeBase
{
public:


}; // size - 0x58


class CPhysConstraint : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_nameAttach1; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_nameAttach2; // 0x4B0 - 0x4B8
   CUtlSymbolLarge m_breakSound; // 0x4B8 - 0x4C0
   float m_forceLimit; // 0x4C0 - 0x4C4
   float m_torqueLimit; // 0x4C4 - 0x4C8
   uint32_t m_teleportTick; // 0x4C8 - 0x4CC
   float m_minTeleportDistance; // 0x4CC - 0x4D0
   CEntityIOOutput m_OnBreak; // 0x4D0 - 0x4F8

}; // size - 0x4F8


class CAnimTagBase
{
public:

   CUtlString m_name; // 0x20 - 0x28
   CUtlString m_group; // 0x28 - 0x30
   AnimTagID m_tagID; // 0x30 - 0x34
   bool m_bIsReferenced; // 0x34 - 0x35

}; // size - 0x38


class CBaseCombatCharacter : public CBaseFlex
{
public:

   bool m_bForceServerRagdoll; // 0x8B0 - 0x8B1
   unsigned char pad_8B1[0x7] // 0x8B1 - 0x8B8
   CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0x8B8 - 0x8D0
   float m_flFieldOfView; // 0x8D0 - 0x8D4
   float m_impactEnergyScale; // 0x8D4 - 0x8D8
   HitGroup_t m_LastHitGroup; // 0x8D8 - 0x8DC
   bool m_bApplyStressDamage; // 0x8DC - 0x8DD
   unsigned char pad_8DD[0x3] // 0x8DD - 0x8E0
   int32_t m_bloodColor; // 0x8E0 - 0x8E4
   unsigned char pad_8E4[0x5C] // 0x8E4 - 0x940
   int32_t m_registeredNavTeam; // 0x940 - 0x944
   int32_t m_navMeshID; // 0x944 - 0x948
   int32_t m_iDamageCount; // 0x948 - 0x94C
   unsigned char pad_94C[0x4] // 0x94C - 0x950
   CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0x950 - 0x958
   CUtlSymbolLarge m_strRelationships; // 0x958 - 0x960
   Hull_t m_eHull; // 0x960 - 0x964
   uint32_t m_nNavHullIdx; // 0x964 - 0x968

}; // size - 0x968


class C_BasePlayerPawn : public C_BaseCombatCharacter
{
public:

   CPlayer_WeaponServices* m_pWeaponServices; // 0xBB8 - 0xBC0
   CPlayer_ItemServices* m_pItemServices; // 0xBC0 - 0xBC8
   CPlayer_AutoaimServices* m_pAutoaimServices; // 0xBC8 - 0xBD0
   CPlayer_ObserverServices* m_pObserverServices; // 0xBD0 - 0xBD8
   CPlayer_WaterServices* m_pWaterServices; // 0xBD8 - 0xBE0
   CPlayer_UseServices* m_pUseServices; // 0xBE0 - 0xBE8
   CPlayer_FlashlightServices* m_pFlashlightServices; // 0xBE8 - 0xBF0
   CPlayer_CameraServices* m_pCameraServices; // 0xBF0 - 0xBF8
   CPlayer_MovementServices* m_pMovementServices; // 0xBF8 - 0xC00
   unsigned char pad_C00[0x8] // 0xC00 - 0xC08
   QAngle v_angle; // 0xC08 - 0xC14
   uint32_t m_iHideHUD; // 0xC14 - 0xC18
   sky3dparams_t m_skybox3d; // 0xC18 - 0xCA8
   GameTime_t m_flDeathTime; // 0xCA8 - 0xCAC
   Vector m_vecPredictionError; // 0xCAC - 0xCB8
   GameTime_t m_flPredictionErrorTime; // 0xCB8 - 0xCBC
   float m_flFOVSensitivityAdjust; // 0xCBC - 0xCC0
   float m_flMouseSensitivity; // 0xCC0 - 0xCC4
   Vector m_vOldOrigin; // 0xCC4 - 0xCD0
   float m_flOldSimulationTime; // 0xCD0 - 0xCD4
   int32_t m_nLastExecutedCommandNumber; // 0xCD4 - 0xCD8
   int32_t m_nLastExecutedCommandTick; // 0xCD8 - 0xCDC
   CHandle< CBasePlayerController > m_hController; // 0xCDC - 0xCE0
   bool m_bIsSwappingToPredictableController; // 0xCE0 - 0xCE1

}; // size - 0xCE8


class C_PhysicsProp : public C_BreakableProp
{
public:

   bool m_bAwake; // 0xAE8 - 0xAE9

}; // size - 0xAF0


class CAnimComponentBase
{
public:

   CUtlString m_group; // 0x18 - 0x20
   unsigned char pad_20[0x8] // 0x20 - 0x28
   AnimComponentID m_id; // 0x28 - 0x2C
   bool m_bStartEnabled; // 0x2C - 0x2D
   unsigned char pad_2D[0x3] // 0x2D - 0x30
   int32_t m_nPriority; // 0x30 - 0x34
   AnimNodeNetworkMode m_networkMode; // 0x34 - 0x38

}; // size - 0x38


class CAnimComponentUpdater
{
public:

   CUtlString m_name; // 0x18 - 0x20
   AnimComponentID m_id; // 0x20 - 0x24
   AnimNodeNetworkMode m_networkMode; // 0x24 - 0x28
   bool m_bStartEnabled; // 0x28 - 0x29

}; // size - 0x30


class CItem : public CBaseAnimGraph
{
public:

   CEntityIOOutput m_OnPlayerTouch; // 0x828 - 0x850
   bool m_bActivateWhenAtRest; // 0x850 - 0x851
   unsigned char pad_851[0x7] // 0x851 - 0x858
   CEntityIOOutput m_OnCacheInteraction; // 0x858 - 0x880
   CEntityIOOutput m_OnPlayerPickup; // 0x880 - 0x8A8
   CEntityIOOutput m_OnGlovePulled; // 0x8A8 - 0x8D0
   Vector m_vOriginalSpawnOrigin; // 0x8D0 - 0x8DC
   QAngle m_vOriginalSpawnAngles; // 0x8DC - 0x8E8
   bool m_bPhysStartAsleep; // 0x8E8 - 0x8E9

}; // size - 0x8F8


class CModelConfigElement
{
public:

   CUtlString m_ElementName; // 0x8 - 0x10
   CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10 - 0x28

}; // size - 0x48


class C_BaseGrenade : public C_BaseFlex
{
public:

   bool m_bHasWarnedAI; // 0xB28 - 0xB29
   bool m_bIsSmokeGrenade; // 0xB29 - 0xB2A
   bool m_bIsLive; // 0xB2A - 0xB2B
   unsigned char pad_B2B[0x1] // 0xB2B - 0xB2C
   float m_DmgRadius; // 0xB2C - 0xB30
   GameTime_t m_flDetonateTime; // 0xB30 - 0xB34
   float m_flWarnAITime; // 0xB34 - 0xB38
   float m_flDamage; // 0xB38 - 0xB3C
   unsigned char pad_B3C[0x4] // 0xB3C - 0xB40
   CUtlSymbolLarge m_iszBounceSound; // 0xB40 - 0xB48
   CUtlString m_ExplosionSound; // 0xB48 - 0xB50
   unsigned char pad_B50[0x4] // 0xB50 - 0xB54
   CHandle< C_BaseEntity > m_hThrower; // 0xB54 - 0xB58
   unsigned char pad_B58[0x18] // 0xB58 - 0xB70
   GameTime_t m_flNextAttack; // 0xB70 - 0xB74
   CHandle< C_BaseEntity > m_hOriginalThrower; // 0xB74 - 0xB78

}; // size - 0xB78


class CBtNode
{
public:


}; // size - 0x58


class CEntitySubclassVDataBase
{
public:


}; // size - 0x28


class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity
{
public:

   int32_t m_nOrdinal; // 0x538 - 0x53C
   unsigned char pad_53C[0x4] // 0x53C - 0x540
   CUtlString m_sWeaponName; // 0x540 - 0x548
   uint64_t m_xuid; // 0x548 - 0x550
   C_EconItemView m_weaponItem; // 0x550 - 0x998

}; // size - 0x9D0


class CBaseCSGrenade : public CWeaponCSBase
{
public:

   bool m_bRedraw; // 0xD70 - 0xD71
   bool m_bIsHeldByPlayer; // 0xD71 - 0xD72
   bool m_bPinPulled; // 0xD72 - 0xD73
   unsigned char pad_D73[0x1] // 0xD73 - 0xD74
   EGrenadeThrowState m_eThrowStatus; // 0xD74 - 0xD78
   GameTime_t m_fThrowTime; // 0xD78 - 0xD7C
   float m_flThrowStrength; // 0xD7C - 0xD80
   float m_flThrowStrengthApproach; // 0xD80 - 0xD84
   GameTime_t m_fDropTime; // 0xD84 - 0xD88

}; // size - 0xD90


class CNavVolume
{
public:


}; // size - 0x70


class C_BaseCSGrenade : public C_WeaponCSBase
{
public:

   bool m_bRedraw; // 0x13F0 - 0x13F1
   bool m_bIsHeldByPlayer; // 0x13F1 - 0x13F2
   bool m_bPinPulled; // 0x13F2 - 0x13F3
   unsigned char pad_13F3[0x1] // 0x13F3 - 0x13F4
   EGrenadeThrowState m_eThrowStatus; // 0x13F4 - 0x13F8
   GameTime_t m_fThrowTime; // 0x13F8 - 0x13FC
   float m_flThrowStrength; // 0x13FC - 0x1400
   float m_flThrowStrengthApproach; // 0x1400 - 0x1404
   GameTime_t m_fDropTime; // 0x1404 - 0x1408

}; // size - 0x1410


class C_PointEntity : public C_BaseEntity
{
public:


}; // size - 0x538


class CBaseConstraint : public CBoneConstraintBase
{
public:

   CUtlString m_name; // 0x28 - 0x30
   Vector m_vUpVector; // 0x30 - 0x3C
   unsigned char pad_3C[0x4] // 0x3C - 0x40
   CUtlVector< CConstraintSlave > m_slaves; // 0x40 - 0x58
   CUtlVector< CConstraintTarget > m_targets; // 0x58 - 0x70

}; // size - 0x70


class CBasePlatTrain : public CBaseToggle
{
public:

   CUtlSymbolLarge m_NoiseMoving; // 0x770 - 0x778
   CUtlSymbolLarge m_NoiseArrived; // 0x778 - 0x780
   unsigned char pad_780[0x8] // 0x780 - 0x788
   float m_volume; // 0x788 - 0x78C
   float m_flTWidth; // 0x78C - 0x790
   float m_flTLength; // 0x790 - 0x794

}; // size - 0x798


class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity
{
public:

   int32_t m_nOrdinal; // 0x4A0 - 0x4A4
   unsigned char pad_4A4[0x4] // 0x4A4 - 0x4A8
   CUtlString m_sWeaponName; // 0x4A8 - 0x4B0
   uint64_t m_xuid; // 0x4B0 - 0x4B8
   CEconItemView m_weaponItem; // 0x4B8 - 0x730

}; // size - 0x730


class CConditionBase
{
public:


}; // size - 0x28


class CPlayerControllerComponent
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30

}; // size - 0x40


class CRuleEntity : public CBaseModelEntity
{
public:

   CUtlSymbolLarge m_iszMaster; // 0x6F0 - 0x6F8

}; // size - 0x6F8


class CMarkupVolume : public CBaseModelEntity
{
public:

   bool m_bEnabled; // 0x6F0 - 0x6F1

}; // size - 0x6F8


class CSimpleSimTimer
{
public:

   GameTime_t m_next; // 0x0 - 0x4
   WorldGroupId_t m_nWorldGroupId; // 0x4 - 0x8

}; // size - 0x8


class C_BaseClientUIEntity : public C_BaseModelEntity
{
public:

   bool m_bEnabled; // 0x840 - 0x841
   unsigned char pad_841[0x7] // 0x841 - 0x848
   CUtlSymbolLarge m_DialogXMLName; // 0x848 - 0x850
   CUtlSymbolLarge m_PanelClassName; // 0x850 - 0x858
   CUtlSymbolLarge m_PanelID; // 0x858 - 0x860

}; // size - 0x868


class C_CSPlayerPawnBase : public C_BasePlayerPawn
{
public:

   CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xD00 - 0xD08
   CCSPlayer_PingServices* m_pPingServices; // 0xD08 - 0xD10
   CCSPlayer_ViewModelServices* m_pViewModelServices; // 0xD10 - 0xD18
   float32 m_fRenderingClipPlane[4]; // 0xD18 - 0xD28
   int32_t m_nLastClipPlaneSetupFrame; // 0xD28 - 0xD2C
   Vector m_vecLastClipCameraPos; // 0xD2C - 0xD38
   Vector m_vecLastClipCameraForward; // 0xD38 - 0xD44
   bool m_bClipHitStaticWorld; // 0xD44 - 0xD45
   bool m_bCachedPlaneIsValid; // 0xD45 - 0xD46
   unsigned char pad_D46[0x2] // 0xD46 - 0xD48
   C_WeaponCSBase* m_pClippingWeapon; // 0xD48 - 0xD50
   CSPlayerState m_previousPlayerState; // 0xD50 - 0xD54
   float m_flLastCollisionCeiling; // 0xD54 - 0xD58
   float m_flLastCollisionCeilingChangeTime; // 0xD58 - 0xD5C
   unsigned char pad_D5C[0x5C] // 0xD5C - 0xDB8
   bool m_bInLanding; // 0xDB8 - 0xDB9
   unsigned char pad_DB9[0x3] // 0xDB9 - 0xDBC
   float m_flLandingTime; // 0xDBC - 0xDC0
   GameTime_t m_grenadeParameterStashTime; // 0xDC0 - 0xDC4
   bool m_bGrenadeParametersStashed; // 0xDC4 - 0xDC5
   unsigned char pad_DC5[0x3] // 0xDC5 - 0xDC8
   QAngle m_angStashedShootAngles; // 0xDC8 - 0xDD4
   Vector m_vecStashedGrenadeThrowPosition; // 0xDD4 - 0xDE0
   Vector m_vecStashedVelocity; // 0xDE0 - 0xDEC
   QAngle m_angShootAngleHistory[2]; // 0xDEC - 0xE04
   Vector m_vecThrowPositionHistory[2]; // 0xE04 - 0xE1C
   Vector m_vecVelocityHistory[2]; // 0xE1C - 0xE34
   unsigned char pad_E34[0x4] // 0xE34 - 0xE38
   QAngle m_thirdPersonHeading; // 0xE38 - 0xE44
   unsigned char pad_E44[0xC] // 0xE44 - 0xE50
   float m_flSlopeDropOffset; // 0xE50 - 0xE54
   unsigned char pad_E54[0xC] // 0xE54 - 0xE60
   float m_flSlopeDropHeight; // 0xE60 - 0xE64
   unsigned char pad_E64[0xC] // 0xE64 - 0xE70
   Vector m_vHeadConstraintOffset; // 0xE70 - 0xE7C
   unsigned char pad_E7C[0xC] // 0xE7C - 0xE88
   bool m_bClientTransparentImmunityAlphaEffectEnabled; // 0xE88 - 0xE89
   bool m_bClientDeferDrawToImmunityAlphaPass; // 0xE89 - 0xE8A
   bool m_bIsScoped; // 0xE8A - 0xE8B
   bool m_bIsWalking; // 0xE8B - 0xE8C
   bool m_bResumeZoom; // 0xE8C - 0xE8D
   unsigned char pad_E8D[0x3] // 0xE8D - 0xE90
   CSPlayerState m_iPlayerState; // 0xE90 - 0xE94
   bool m_bIsDefusing; // 0xE94 - 0xE95
   bool m_bIsGrabbingHostage; // 0xE95 - 0xE96
   unsigned char pad_E96[0x2] // 0xE96 - 0xE98
   CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0xE98 - 0xE9C
   bool m_bIsRescuing; // 0xE9C - 0xE9D
   unsigned char pad_E9D[0x3] // 0xE9D - 0xEA0
   GameTime_t m_fImmuneToGunGameDamageTime; // 0xEA0 - 0xEA4
   GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0xEA4 - 0xEA8
   bool m_bGunGameImmunity; // 0xEA8 - 0xEA9
   bool m_bHasMovedSinceSpawn; // 0xEA9 - 0xEAA
   bool m_bMadeFinalGunGameProgressiveKill; // 0xEAA - 0xEAB
   unsigned char pad_EAB[0x1] // 0xEAB - 0xEAC
   int32_t m_iGunGameProgressiveWeaponIndex; // 0xEAC - 0xEB0
   int32_t m_iNumGunGameTRKillPoints; // 0xEB0 - 0xEB4
   int32_t m_iNumGunGameKillsWithCurrentWeapon; // 0xEB4 - 0xEB8
   uint32_t m_unTotalRoundDamageDealt; // 0xEB8 - 0xEBC
   float m_fMolotovUseTime; // 0xEBC - 0xEC0
   float m_fMolotovDamageTime; // 0xEC0 - 0xEC4
   bool m_bInBombZone; // 0xEC4 - 0xEC5
   unsigned char pad_EC5[0x3] // 0xEC5 - 0xEC8
   int32_t m_nWhichBombZone; // 0xEC8 - 0xECC
   bool m_bInBuyZone; // 0xECC - 0xECD
   bool m_bInNoDefuseArea; // 0xECD - 0xECE
   unsigned char pad_ECE[0x2] // 0xECE - 0xED0
   int32_t m_iThrowGrenadeCounter; // 0xED0 - 0xED4
   bool m_bWaitForNoAttack; // 0xED4 - 0xED5
   bool m_bIsRespawningForDMBonus; // 0xED5 - 0xED6
   unsigned char pad_ED6[0x2] // 0xED6 - 0xED8
   float m_flGuardianTooFarDistFrac; // 0xED8 - 0xEDC
   GameTime_t m_flDetectedByEnemySensorTime; // 0xEDC - 0xEE0
   float m_flNextGuardianTooFarWarning; // 0xEE0 - 0xEE4
   bool m_bSuppressGuardianTooFarWarningAudio; // 0xEE4 - 0xEE5
   bool m_bKilledByTaser; // 0xEE5 - 0xEE6
   unsigned char pad_EE6[0x2] // 0xEE6 - 0xEE8
   int32_t m_iMoveState; // 0xEE8 - 0xEEC
   bool m_bCanMoveDuringFreezePeriod; // 0xEEC - 0xEED
   bool m_isCurrentGunGameLeader; // 0xEED - 0xEEE
   bool m_isCurrentGunGameTeamLeader; // 0xEEE - 0xEEF
   unsigned char pad_EEF[0x1] // 0xEEF - 0xEF0
   float m_flLowerBodyYawTarget; // 0xEF0 - 0xEF4
   bool m_bStrafing; // 0xEF4 - 0xEF5
   char m_szLastPlaceName[18]; // 0xEF5 - 0xF07
   unsigned char pad_F07[0x1] // 0xF07 - 0xF08
   float m_flLastExoJumpTime; // 0xF08 - 0xF0C
   unsigned char pad_F0C[0xC] // 0xF0C - 0xF18
   GameTime_t m_flLastSpawnTimeIndex; // 0xF18 - 0xF1C
   int32_t m_iAddonBits; // 0xF1C - 0xF20
   int32_t m_iPrimaryAddon; // 0xF20 - 0xF24
   int32_t m_iSecondaryAddon; // 0xF24 - 0xF28
   int32_t m_iProgressBarDuration; // 0xF28 - 0xF2C
   float m_flProgressBarStartTime; // 0xF2C - 0xF30
   float m_flStamina; // 0xF30 - 0xF34
   int32_t m_iDirection; // 0xF34 - 0xF38
   int32_t m_iShotsFired; // 0xF38 - 0xF3C
   bool m_bNightVisionOn; // 0xF3C - 0xF3D
   bool m_bHasNightVision; // 0xF3D - 0xF3E
   unsigned char pad_F3E[0x2] // 0xF3E - 0xF40
   float m_flVelocityModifier; // 0xF40 - 0xF44
   float m_flGroundAccelLinearFracLastTime; // 0xF44 - 0xF48
   int32_t m_iStartAccount; // 0xF48 - 0xF4C
   bool m_bIsSpawnRappelling; // 0xF4C - 0xF4D
   unsigned char pad_F4D[0x3] // 0xF4D - 0xF50
   Vector m_vecSpawnRappellingRopeOrigin; // 0xF50 - 0xF5C
   float m_flSpawnRappellingFadeOutForClientViewOffset; // 0xF5C - 0xF60
   int32_t m_nSurvivalTeam; // 0xF60 - 0xF64
   CHandle< C_CSPlayerPawnBase > m_hSurvivalAssassinationTarget; // 0xF64 - 0xF68
   float m_flHealthShotBoostExpirationTime; // 0xF68 - 0xF6C
   float m_flLastKnownParachuteScreenEffectAmount; // 0xF6C - 0xF70
   Vector m_vecIntroStartEyePosition; // 0xF70 - 0xF7C
   Vector m_vecIntroStartPlayerForward; // 0xF7C - 0xF88
   float m_flClientDeathTime; // 0xF88 - 0xF8C
   unsigned char pad_F8C[0x8] // 0xF8C - 0xF94
   float m_flNightVisionAlpha; // 0xF94 - 0xF98
   bool m_bScreenTearFrameCaptured; // 0xF98 - 0xF99
   unsigned char pad_F99[0x3] // 0xF99 - 0xF9C
   float m_flFlashBangTime; // 0xF9C - 0xFA0
   float m_flFlashScreenshotAlpha; // 0xFA0 - 0xFA4
   float m_flFlashOverlayAlpha; // 0xFA4 - 0xFA8
   bool m_bFlashBuildUp; // 0xFA8 - 0xFA9
   bool m_bFlashDspHasBeenCleared; // 0xFA9 - 0xFAA
   bool m_bFlashScreenshotHasBeenGrabbed; // 0xFAA - 0xFAB
   unsigned char pad_FAB[0x1] // 0xFAB - 0xFAC
   float m_flFlashMaxAlpha; // 0xFAC - 0xFB0
   float m_flFlashDuration; // 0xFB0 - 0xFB4
   float m_flLastFiredWeaponTime; // 0xFB4 - 0xFB8
   Vector m_lastStandingPos; // 0xFB8 - 0xFC4
   Vector m_vecLastMuzzleFlashPos; // 0xFC4 - 0xFD0
   QAngle m_angLastMuzzleFlashAngle; // 0xFD0 - 0xFDC
   CHandle< C_BaseEntity > m_hMuzzleFlashShape; // 0xFDC - 0xFE0
   int32_t m_iHealthBarRenderMaskIndex; // 0xFE0 - 0xFE4
   float m_flHealthFadeValue; // 0xFE4 - 0xFE8
   float m_flHealthFadeAlpha; // 0xFE8 - 0xFEC
   int32_t m_nMyCollisionGroup; // 0xFEC - 0xFF0
   float m_ignoreLadderJumpTime; // 0xFF0 - 0xFF4
   unsigned char pad_FF4[0x4] // 0xFF4 - 0xFF8
   CountdownTimer m_ladderSurpressionTimer; // 0xFF8 - 0x1010
   Vector m_lastLadderNormal; // 0x1010 - 0x101C
   Vector m_lastLadderPos; // 0x101C - 0x1028
   unsigned char pad_1028[0x8] // 0x1028 - 0x1030
   float m_flDeathCCWeight; // 0x1030 - 0x1034
   bool m_bOldIsScoped; // 0x1034 - 0x1035
   unsigned char pad_1035[0x3] // 0x1035 - 0x1038
   float m_flPrevRoundEndTime; // 0x1038 - 0x103C
   float m_flPrevMatchEndTime; // 0x103C - 0x1040
   uint16_t m_unCurrentEquipmentValue; // 0x1040 - 0x1042
   uint16_t m_unRoundStartEquipmentValue; // 0x1042 - 0x1044
   uint16_t m_unFreezetimeEndEquipmentValue; // 0x1044 - 0x1046
   bool m_passiveItems[4]; // 0x1046 - 0x104A
   unsigned char pad_104A[0x2] // 0x104A - 0x104C
   Vector m_vecThirdPersonViewPositionOverride; // 0x104C - 0x1058
   int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0x1058 - 0x105C
   int32_t m_ArmorValue; // 0x105C - 0x1060
   QAngle m_angEyeAngles; // 0x1060 - 0x106C
   unsigned char pad_106C[0xC] // 0x106C - 0x1078
   bool m_bInHostageRescueZone; // 0x1078 - 0x1079
   unsigned char pad_1079[0x3] // 0x1079 - 0x107C
   float m_fNextThinkPushAway; // 0x107C - 0x1080
   bool m_bShouldAutobuyDMWeapons; // 0x1080 - 0x1081
   bool m_bShouldAutobuyNow; // 0x1081 - 0x1082
   bool m_bHud_MiniScoreHidden; // 0x1082 - 0x1083
   bool m_bHud_RadarHidden; // 0x1083 - 0x1084
   CEntityIndex m_nLastKillerIndex; // 0x1084 - 0x1088
   int32_t m_nLastConcurrentKilled; // 0x1088 - 0x108C
   int32_t m_nDeathCamMusic; // 0x108C - 0x1090
   CEntityIndex m_iIDEntIndex; // 0x1090 - 0x1094
   unsigned char pad_1094[0x4] // 0x1094 - 0x1098
   CountdownTimer m_delayTargetIDTimer; // 0x1098 - 0x10B0
   CEntityIndex m_iTargetedWeaponEntIndex; // 0x10B0 - 0x10B4
   CEntityIndex m_iOldIDEntIndex; // 0x10B4 - 0x10B8
   CountdownTimer m_holdTargetIDTimer; // 0x10B8 - 0x10D0
   unsigned char pad_10D0[0x4C] // 0x10D0 - 0x111C
   float m_flCurrentMusicStartTime; // 0x111C - 0x1120
   float m_flMusicRoundStartTime; // 0x1120 - 0x1124
   int32_t m_cycleLatch; // 0x1124 - 0x1128
   float m_serverIntendedCycle; // 0x1128 - 0x112C
   uint32 m_vecPlayerPatchEconIndices[5]; // 0x112C - 0x1140
   bool m_bClientEconPatchesNeedUpdate; // 0x1140 - 0x1141
   bool m_bHideTargetID; // 0x1141 - 0x1142
   unsigned char pad_1142[0x2] // 0x1142 - 0x1144
   float m_nextTaserShakeTime; // 0x1144 - 0x1148
   float m_firstTaserShakeTime; // 0x1148 - 0x114C
   float m_flLastSmokeOverlayAlpha; // 0x114C - 0x1150
   Vector m_vLastSmokeOverlayColor; // 0x1150 - 0x115C
   ParticleIndex_t m_nPlayerSmokedFx; // 0x115C - 0x1160
   float m_flLastKnownAccumulatedWeaponEncumbrance; // 0x1160 - 0x1164
   float m_flLastTimeComputedAccumulatedWeaponEncumbrance; // 0x1164 - 0x1168
   float m_flNextMagDropTime; // 0x1168 - 0x116C
   int32_t m_nLastMagDropAttachmentIndex; // 0x116C - 0x1170
   CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // 0x1170 - 0x1188
   CUtlVector< C_PickUpModelSlerper* > m_vecPickupModelSlerpers; // 0x1188 - 0x11A0
   Vector m_vecLastAliveLocalVelocity; // 0x11A0 - 0x11AC
   float m_flLastNearbyItemHighlightCheck; // 0x11AC - 0x11B0
   bool m_bInSurvivalDangerZone; // 0x11B0 - 0x11B1
   bool m_bNearDangerZone; // 0x11B1 - 0x11B2
   unsigned char pad_11B2[0x36] // 0x11B2 - 0x11E8
   EntitySpottedState_t m_entitySpottedState; // 0x11E8 - 0x1200
   float m_flTimeOfLastInjury; // 0x1200 - 0x1204
   RelativeDamagedDirection_t m_nRelativeDirectionOfLastInjury; // 0x1204 - 0x1208
   int32_t m_nSurvivalTeamNumber; // 0x1208 - 0x120C
   float m_flNextSprayDecalTime; // 0x120C - 0x1210
   bool m_bPreviouslyInBuyZone; // 0x1210 - 0x1211
   unsigned char pad_1211[0x3] // 0x1211 - 0x1214
   uint32_t m_unPreviousWeaponHash; // 0x1214 - 0x1218
   uint32_t m_unWeaponHash; // 0x1218 - 0x121C
   bool m_bPrevDefuser; // 0x121C - 0x121D
   bool m_bPrevHelmet; // 0x121D - 0x121E
   unsigned char pad_121E[0x2] // 0x121E - 0x1220
   int32_t m_nPrevArmorVal; // 0x1220 - 0x1224
   bool m_bGuardianShouldSprayCustomXMark; // 0x1224 - 0x1225
   unsigned char pad_1225[0x3] // 0x1225 - 0x1228
   QAngle m_aimPunchAngle; // 0x1228 - 0x1234
   QAngle m_aimPunchAngleVel; // 0x1234 - 0x1240
   int32_t m_aimPunchTickBase; // 0x1240 - 0x1244
   float m_aimPunchTickFraction; // 0x1244 - 0x1248
   CUtlVector< QAngle > m_aimPunchCache; // 0x1248 - 0x1260
   unsigned char pad_1260[0x8] // 0x1260 - 0x1268
   float m_flOldFallVelocity; // 0x1268 - 0x126C
   bool m_bHasDeathInfo; // 0x126C - 0x126D
   unsigned char pad_126D[0x3] // 0x126D - 0x1270
   float m_flDeathInfoTime; // 0x1270 - 0x1274
   Vector m_vecDeathInfoOrigin; // 0x1274 - 0x1280
   bool m_bKilledByHeadshot; // 0x1280 - 0x1281
   unsigned char pad_1281[0x3] // 0x1281 - 0x1284
   CHandle< CCSPlayerController > m_hOriginalController; // 0x1284 - 0x1288
   unsigned char pad_1288[0x10] // 0x1288 - 0x1298
   float m_flLandseconds; // 0x1298 - 0x129C

}; // size - 0x12A0


class SpawnPoint : public CServerOnlyPointEntity
{
public:

   int32_t m_iPriority; // 0x4A0 - 0x4A4
   bool m_bEnabled; // 0x4A4 - 0x4A5
   unsigned char pad_4A5[0x3] // 0x4A5 - 0x4A8
   int32_t m_nType; // 0x4A8 - 0x4AC

}; // size - 0x4B0


class CSoundOpvarSetPointBase : public CBaseEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   CEntityHandle m_hSource; // 0x4A4 - 0x4A8
   unsigned char pad_4A8[0x8] // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_iszSourceEntityName; // 0x4B0 - 0x4B8
   unsigned char pad_4B8[0x50] // 0x4B8 - 0x508
   Vector m_vLastPosition; // 0x508 - 0x514
   unsigned char pad_514[0x4] // 0x514 - 0x518
   CUtlSymbolLarge m_iszStackName; // 0x518 - 0x520
   CUtlSymbolLarge m_iszOperatorName; // 0x520 - 0x528
   CUtlSymbolLarge m_iszOpvarName; // 0x528 - 0x530
   int32_t m_iOpvarIndex; // 0x530 - 0x534
   bool m_bUseAutoCompare; // 0x534 - 0x535

}; // size - 0x538


class C_CSGO_MapPreviewCameraPath : public C_BaseEntity
{
public:

   float m_flZFar; // 0x538 - 0x53C
   float m_flZNear; // 0x53C - 0x540
   bool m_bLoop; // 0x540 - 0x541
   bool m_bVerticalFOV; // 0x541 - 0x542
   bool m_bConstantSpeed; // 0x542 - 0x543
   unsigned char pad_543[0x1] // 0x543 - 0x544
   float m_flDuration; // 0x544 - 0x548
   unsigned char pad_548[0x40] // 0x548 - 0x588
   float m_flPathLength; // 0x588 - 0x58C
   float m_flPathDuration; // 0x58C - 0x590

}; // size - 0x598


class C_SoundOpvarSetPointBase : public C_BaseEntity
{
public:

   CUtlSymbolLarge m_iszStackName; // 0x538 - 0x540
   CUtlSymbolLarge m_iszOperatorName; // 0x540 - 0x548
   CUtlSymbolLarge m_iszOpvarName; // 0x548 - 0x550
   int32_t m_iOpvarIndex; // 0x550 - 0x554
   bool m_bUseAutoCompare; // 0x554 - 0x555

}; // size - 0x558


class CAnimParameterBase
{
public:

   CAnimGraphSymbolWithStorage m_name; // 0x18 - 0x38
   CUtlString m_group; // 0x38 - 0x40
   AnimParamID m_id; // 0x40 - 0x44
   unsigned char pad_44[0x14] // 0x44 - 0x58
   CUtlString m_componentName; // 0x58 - 0x60
   unsigned char pad_60[0x4] // 0x60 - 0x64
   AnimParamButton_t m_previewButton; // 0x64 - 0x68
   bool m_bUseMostRecentValue; // 0x68 - 0x69
   bool m_bAutoReset; // 0x69 - 0x6A
   unsigned char pad_6A[0x2] // 0x6A - 0x6C
   AnimParamNetworkSetting m_eNetworkSetting; // 0x6C - 0x70
   bool m_bGameWritable; // 0x70 - 0x71
   bool m_bGraphWritable; // 0x71 - 0x72
   bool m_bIsReferenced; // 0x72 - 0x73
   bool m_bNetworkingRequested; // 0x73 - 0x74

}; // size - 0x78


class CBaseCSGrenadeProjectile : public CBaseGrenade
{
public:

   Vector m_vInitialVelocity; // 0x958 - 0x964
   int32_t m_nBounces; // 0x964 - 0x968
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0x968 - 0x970
   int32_t m_nExplodeEffectTickBegin; // 0x970 - 0x974
   Vector m_vecExplodeEffectOrigin; // 0x974 - 0x980
   uint8_t m_unOGSExtraFlags; // 0x980 - 0x981
   bool m_bDetonationRecorded; // 0x981 - 0x982
   unsigned char pad_982[0x2] // 0x982 - 0x984
   GameTime_t m_flDetonateTime; // 0x984 - 0x988
   uint16_t m_nItemIndex; // 0x988 - 0x98A
   unsigned char pad_98A[0x2] // 0x98A - 0x98C
   Vector m_vecOriginalSpawnLocation; // 0x98C - 0x998
   GameTime_t m_flLastBounceSoundTime; // 0x998 - 0x99C

}; // size - 0x9A0


class CEnvSoundscape : public CServerOnlyEntity
{
public:

   CEntityIOOutput m_OnPlay; // 0x4A0 - 0x4C8
   float m_flRadius; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4] // 0x4CC - 0x4D0
   CUtlSymbolLarge m_soundscapeName; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_soundEventName; // 0x4D8 - 0x4E0
   bool m_bOverrideWithEvent; // 0x4E0 - 0x4E1
   unsigned char pad_4E1[0x3] // 0x4E1 - 0x4E4
   int32_t m_soundscapeIndex; // 0x4E4 - 0x4E8
   int32_t m_soundscapeEntityListId; // 0x4E8 - 0x4EC
   uint32_t m_soundEventHash; // 0x4EC - 0x4F0
   CUtlSymbolLarge m_positionNames[8]; // 0x4F0 - 0x530
   CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x530 - 0x534
   bool m_bDisabled; // 0x534 - 0x535

}; // size - 0x538


class CModelPointEntity : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CTriggerMultiple : public CBaseTrigger
{
public:

   CEntityIOOutput m_OnTrigger; // 0x898 - 0x8C0

}; // size - 0x8C0


class C_BaseTrigger : public C_BaseToggle
{
public:

   bool m_bDisabled; // 0x838 - 0x839
   bool m_bClientSidePredicted; // 0x839 - 0x83A

}; // size - 0x840


class MaterialParam_t
{
public:

   CUtlString m_name; // 0x0 - 0x8

}; // size - 0x8


class CGameRules
{
public:

   char m_szQuestName[128]; // 0x8 - 0x88
   int32_t m_nQuestPhase; // 0x88 - 0x8C

}; // size - 0x90


class C_GameRules
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   int32_t m_nInputMin; // 0x1F4 - 0x1F8
   int32_t m_nInputMax; // 0x1F8 - 0x1FC
   int32_t m_nScaleControlPoint; // 0x1FC - 0x200
   int32_t m_nScaleControlPointField; // 0x200 - 0x204
   float m_flOutputMin; // 0x204 - 0x208
   float m_flOutputMax; // 0x208 - 0x20C
   ParticleSetMethod_t m_nSetMethod; // 0x20C - 0x210
   bool m_bActiveRange; // 0x210 - 0x211
   bool m_bInvert; // 0x211 - 0x212
   bool m_bWrap; // 0x212 - 0x213
   unsigned char pad_213[0x1] // 0x213 - 0x214
   float m_flRemapBias; // 0x214 - 0x218

}; // size - 0x220


class CAnimMotorBase
{
public:

   CUtlString m_name; // 0x18 - 0x20
   bool m_bDefault; // 0x20 - 0x21

}; // size - 0x28


class CAnimMotorUpdaterBase
{
public:

   CUtlString m_name; // 0x10 - 0x18
   bool m_bDefault; // 0x18 - 0x19

}; // size - 0x20


class CAnimationGraphVisualizerPrimitiveBase
{
public:

   CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8 - 0xC

}; // size - 0x10


class CBaseClientUIEntity : public CBaseModelEntity
{
public:

   bool m_bEnabled; // 0x6F0 - 0x6F1
   unsigned char pad_6F1[0x7] // 0x6F1 - 0x6F8
   CUtlSymbolLarge m_DialogXMLName; // 0x6F8 - 0x700
   CUtlSymbolLarge m_PanelClassName; // 0x700 - 0x708
   CUtlSymbolLarge m_PanelID; // 0x708 - 0x710
   CEntityIOOutput m_CustomOutput0; // 0x710 - 0x738
   CEntityIOOutput m_CustomOutput1; // 0x738 - 0x760
   CEntityIOOutput m_CustomOutput2; // 0x760 - 0x788
   CEntityIOOutput m_CustomOutput3; // 0x788 - 0x7B0
   CEntityIOOutput m_CustomOutput4; // 0x7B0 - 0x7D8
   CEntityIOOutput m_CustomOutput5; // 0x7D8 - 0x800
   CEntityIOOutput m_CustomOutput6; // 0x800 - 0x828
   CEntityIOOutput m_CustomOutput7; // 0x828 - 0x850
   CEntityIOOutput m_CustomOutput8; // 0x850 - 0x878
   CEntityIOOutput m_CustomOutput9; // 0x878 - 0x8A0

}; // size - 0x8A0


class CBodyComponent : public CEntityComponent
{
public:

   CGameSceneNode* m_pSceneNode; // 0x8 - 0x10
   unsigned char pad_10[0x10] // 0x10 - 0x20
   CNetworkVarChainer __m_pChainEntity; // 0x20 - 0x48

}; // size - 0x50


class CBodyComponent : public CEntityComponent
{
public:

   CGameSceneNode* m_pSceneNode; // 0x8 - 0x10
   unsigned char pad_10[0x10] // 0x10 - 0x20
   CNetworkVarChainer __m_pChainEntity; // 0x20 - 0x48

}; // size - 0x50


class C_DynamicProp : public C_BreakableProp
{
public:

   bool m_bUseHitboxesForRenderBox; // 0xAE8 - 0xAE9
   bool m_bUseAnimGraph; // 0xAE9 - 0xAEA
   unsigned char pad_AEA[0x6] // 0xAEA - 0xAF0
   CEntityIOOutput m_pOutputAnimBegun; // 0xAF0 - 0xB18
   CEntityIOOutput m_pOutputAnimOver; // 0xB18 - 0xB40
   CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xB40 - 0xB68
   CEntityIOOutput m_OnAnimReachedStart; // 0xB68 - 0xB90
   CEntityIOOutput m_OnAnimReachedEnd; // 0xB90 - 0xBB8
   CUtlSymbolLarge m_iszDefaultAnim; // 0xBB8 - 0xBC0
   AnimLoopMode_t m_nDefaultAnimLoopMode; // 0xBC0 - 0xBC4
   bool m_bAnimateOnServer; // 0xBC4 - 0xBC5
   bool m_bRandomizeCycle; // 0xBC5 - 0xBC6
   bool m_bStartDisabled; // 0xBC6 - 0xBC7
   bool m_bScriptedMovement; // 0xBC7 - 0xBC8
   bool m_bFiredStartEndOutput; // 0xBC8 - 0xBC9
   bool m_bForceNpcExclude; // 0xBC9 - 0xBCA
   bool m_bCreateNonSolid; // 0xBCA - 0xBCB
   bool m_bIsOverrideProp; // 0xBCB - 0xBCC
   int32_t m_iInitialGlowState; // 0xBCC - 0xBD0
   int32_t m_nGlowRange; // 0xBD0 - 0xBD4
   int32_t m_nGlowRangeMin; // 0xBD4 - 0xBD8
   Color m_glowColor; // 0xBD8 - 0xBDC
   int32_t m_nGlowTeam; // 0xBDC - 0xBE0
   int32_t m_iCachedFrameCount; // 0xBE0 - 0xBE4
   Vector m_vecCachedRenderMins; // 0xBE4 - 0xBF0
   Vector m_vecCachedRenderMaxs; // 0xBF0 - 0xBFC

}; // size - 0xC00


class CBasePropDoor : public CDynamicProp
{
public:

   float m_flAutoReturnDelay; // 0xAA8 - 0xAAC
   unsigned char pad_AAC[0x4] // 0xAAC - 0xAB0
   CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xAB0 - 0xAC8
   int32_t m_nHardwareType; // 0xAC8 - 0xACC
   bool m_bNeedsHardware; // 0xACC - 0xACD
   unsigned char pad_ACD[0x3] // 0xACD - 0xAD0
   DoorState_t m_eDoorState; // 0xAD0 - 0xAD4
   bool m_bLocked; // 0xAD4 - 0xAD5
   unsigned char pad_AD5[0x3] // 0xAD5 - 0xAD8
   Vector m_closedPosition; // 0xAD8 - 0xAE4
   QAngle m_closedAngles; // 0xAE4 - 0xAF0
   CHandle< CBaseEntity > m_hBlocker; // 0xAF0 - 0xAF4
   bool m_bFirstBlocked; // 0xAF4 - 0xAF5
   unsigned char pad_AF5[0x3] // 0xAF5 - 0xAF8
   locksound_t m_ls; // 0xAF8 - 0xB18
   bool m_bForceClosed; // 0xB18 - 0xB19
   unsigned char pad_B19[0x3] // 0xB19 - 0xB1C
   Vector m_vecLatchWorldPosition; // 0xB1C - 0xB28
   CHandle< CBaseEntity > m_hActivator; // 0xB28 - 0xB2C
   unsigned char pad_B2C[0x8] // 0xB2C - 0xB34
   uint32_t m_sndParamAngularSpeed; // 0xB34 - 0xB38
   CUtlSymbolLarge m_SoundMoving; // 0xB38 - 0xB40
   CUtlSymbolLarge m_SoundOpen; // 0xB40 - 0xB48
   CUtlSymbolLarge m_SoundClose; // 0xB48 - 0xB50
   CUtlSymbolLarge m_SoundLock; // 0xB50 - 0xB58
   CUtlSymbolLarge m_SoundUnlock; // 0xB58 - 0xB60
   CUtlSymbolLarge m_SoundLatch; // 0xB60 - 0xB68
   CUtlSymbolLarge m_SoundPound; // 0xB68 - 0xB70
   CUtlSymbolLarge m_SoundJiggle; // 0xB70 - 0xB78
   CUtlSymbolLarge m_SoundLockedAnim; // 0xB78 - 0xB80
   int32_t m_numCloseAttempts; // 0xB80 - 0xB84
   CUtlStringToken m_nPhysicsMaterial; // 0xB84 - 0xB88
   CUtlSymbolLarge m_SlaveName; // 0xB88 - 0xB90
   CHandle< CBasePropDoor > m_hMaster; // 0xB90 - 0xB94
   unsigned char pad_B94[0x4] // 0xB94 - 0xB98
   CEntityIOOutput m_OnBlockedClosing; // 0xB98 - 0xBC0
   CEntityIOOutput m_OnBlockedOpening; // 0xBC0 - 0xBE8
   CEntityIOOutput m_OnUnblockedClosing; // 0xBE8 - 0xC10
   CEntityIOOutput m_OnUnblockedOpening; // 0xC10 - 0xC38
   CEntityIOOutput m_OnFullyClosed; // 0xC38 - 0xC60
   CEntityIOOutput m_OnFullyOpen; // 0xC60 - 0xC88
   CEntityIOOutput m_OnClose; // 0xC88 - 0xCB0
   CEntityIOOutput m_OnOpen; // 0xCB0 - 0xCD8
   CEntityIOOutput m_OnLockedUse; // 0xCD8 - 0xD00
   CEntityIOOutput m_OnAjarOpen; // 0xD00 - 0xD28

}; // size - 0xD28


class CBaseRendererSource2 : public CParticleFunctionRenderer
{
public:

   CParticleCollectionFloatInput m_flRadiusScale; // 0x230 - 0x368
   CParticleCollectionFloatInput m_flAlphaScale; // 0x368 - 0x4A0
   CParticleCollectionFloatInput m_flRollScale; // 0x4A0 - 0x5D8
   ParticleAttributeIndex_t m_nAlpha2Field; // 0x5D8 - 0x5DC
   unsigned char pad_5DC[0x4] // 0x5DC - 0x5E0
   CParticleCollectionVecInput m_vecColorScale; // 0x5E0 - 0xBA8
   ParticleColorBlendType_t m_nColorBlendType; // 0xBA8 - 0xBAC
   SpriteCardShaderType_t m_nShaderType; // 0xBAC - 0xBB0
   CUtlString m_strShaderOverride; // 0xBB0 - 0xBB8
   CParticleCollectionFloatInput m_flCenterXOffset; // 0xBB8 - 0xCF0
   CParticleCollectionFloatInput m_flCenterYOffset; // 0xCF0 - 0xE28
   float m_flBumpStrength; // 0xE28 - 0xE2C
   ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xE2C - 0xE30
   CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0xE30 - 0xE48
   float m_flAnimationRate; // 0xE48 - 0xE4C
   AnimationType_t m_nAnimationType; // 0xE4C - 0xE50
   bool m_bAnimateInFPS; // 0xE50 - 0xE51
   unsigned char pad_E51[0x7] // 0xE51 - 0xE58
   CParticleCollectionFloatInput m_flSelfIllumAmount; // 0xE58 - 0xF90
   CParticleCollectionFloatInput m_flDiffuseAmount; // 0xF90 - 0x10C8
   int32_t m_nLightingControlPoint; // 0x10C8 - 0x10CC
   ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x10CC - 0x10D0
   ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x10D0 - 0x10D4
   bool m_bGammaCorrectVertexColors; // 0x10D4 - 0x10D5
   bool m_bSaturateColorPreAlphaBlend; // 0x10D5 - 0x10D6
   unsigned char pad_10D6[0x2] // 0x10D6 - 0x10D8
   CParticleCollectionFloatInput m_flAddSelfAmount; // 0x10D8 - 0x1210
   CParticleCollectionFloatInput m_flDesaturation; // 0x1210 - 0x1348
   CParticleCollectionFloatInput m_flOverbrightFactor; // 0x1348 - 0x1480
   int32_t m_nHSVShiftControlPoint; // 0x1480 - 0x1484
   ParticleFogType_t m_nFogType; // 0x1484 - 0x1488
   bool m_bTintByFOW; // 0x1488 - 0x1489
   bool m_bTintByGlobalLight; // 0x1489 - 0x148A
   unsigned char pad_148A[0x2] // 0x148A - 0x148C
   SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x148C - 0x1490
   SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x1490 - 0x1494
   ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x1494 - 0x1498
   CParticleCollectionFloatInput m_flAlphaReferenceSoftness; // 0x1498 - 0x15D0
   CParticleCollectionFloatInput m_flSourceAlphaValueToMapToZero; // 0x15D0 - 0x1708
   CParticleCollectionFloatInput m_flSourceAlphaValueToMapToOne; // 0x1708 - 0x1840
   bool m_bRefract; // 0x1840 - 0x1841
   bool m_bRefractSolid; // 0x1841 - 0x1842
   unsigned char pad_1842[0x6] // 0x1842 - 0x1848
   CParticleCollectionFloatInput m_flRefractAmount; // 0x1848 - 0x1980
   int32_t m_nRefractBlurRadius; // 0x1980 - 0x1984
   BlurFilterType_t m_nRefractBlurType; // 0x1984 - 0x1988
   bool m_bOnlyRenderInEffectsBloomPass; // 0x1988 - 0x1989
   bool m_bOnlyRenderInEffectsWaterPass; // 0x1989 - 0x198A
   bool m_bUseMixedResolutionRendering; // 0x198A - 0x198B
   bool m_bOnlyRenderInEffecsGameOverlay; // 0x198B - 0x198C
   char m_stencilTestID[128]; // 0x198C - 0x1A0C
   bool m_bStencilTestExclude; // 0x1A0C - 0x1A0D
   char m_stencilWriteID[128]; // 0x1A0D - 0x1A8D
   bool m_bWriteStencilOnDepthPass; // 0x1A8D - 0x1A8E
   bool m_bWriteStencilOnDepthFail; // 0x1A8E - 0x1A8F
   bool m_bReverseZBuffering; // 0x1A8F - 0x1A90
   bool m_bDisableZBuffering; // 0x1A90 - 0x1A91
   unsigned char pad_1A91[0x3] // 0x1A91 - 0x1A94
   ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1A94 - 0x1A98
   CParticleCollectionFloatInput m_flFeatheringMinDist; // 0x1A98 - 0x1BD0
   CParticleCollectionFloatInput m_flFeatheringMaxDist; // 0x1BD0 - 0x1D08
   CParticleCollectionFloatInput m_flFeatheringFilter; // 0x1D08 - 0x1E40
   float m_flDepthBias; // 0x1E40 - 0x1E44
   ParticleSortingChoiceList_t m_nSortMethod; // 0x1E44 - 0x1E48
   bool m_bBlendFramesSeq0; // 0x1E48 - 0x1E49
   bool m_bMaxLuminanceBlendingSequence0; // 0x1E49 - 0x1E4A

}; // size - 0x2050


class CFuncPlat : public CBasePlatTrain
{
public:

   CUtlSymbolLarge m_sNoise; // 0x798 - 0x7A0

}; // size - 0x7A0


class CLightEntity : public CBaseModelEntity
{
public:

   CLightComponent* m_CLightComponent; // 0x6F0 - 0x6F8

}; // size - 0x6F8


class CMarkupVolumeTagged : public CMarkupVolume
{
public:

   bool m_bIsGroup; // 0x728 - 0x729
   bool m_bGroupByPrefab; // 0x729 - 0x72A
   bool m_bGroupByVolume; // 0x72A - 0x72B
   bool m_bGroupOtherGroups; // 0x72B - 0x72C
   bool m_bIsInGroup; // 0x72C - 0x72D

}; // size - 0x730


class C_LightEntity : public C_BaseModelEntity
{
public:

   CLightComponent* m_CLightComponent; // 0x838 - 0x840

}; // size - 0x840


class CAnimActionBase
{
public:


}; // size - 0x28


class CAnimActionUpdater
{
public:


}; // size - 0x18


class CBasePlayerPawn : public CBaseCombatCharacter
{
public:

   CPlayer_WeaponServices* m_pWeaponServices; // 0x968 - 0x970
   CPlayer_ItemServices* m_pItemServices; // 0x970 - 0x978
   CPlayer_AutoaimServices* m_pAutoaimServices; // 0x978 - 0x980
   CPlayer_ObserverServices* m_pObserverServices; // 0x980 - 0x988
   CPlayer_WaterServices* m_pWaterServices; // 0x988 - 0x990
   CPlayer_UseServices* m_pUseServices; // 0x990 - 0x998
   CPlayer_FlashlightServices* m_pFlashlightServices; // 0x998 - 0x9A0
   CPlayer_CameraServices* m_pCameraServices; // 0x9A0 - 0x9A8
   CPlayer_MovementServices* m_pMovementServices; // 0x9A8 - 0x9B0
   unsigned char pad_9B0[0x8] // 0x9B0 - 0x9B8
   QAngle v_angle; // 0x9B8 - 0x9C4
   unsigned char pad_9C4[0x10] // 0x9C4 - 0x9D4
   uint32_t m_iHideHUD; // 0x9D4 - 0x9D8
   sky3dparams_t m_skybox3d; // 0x9D8 - 0xA68
   GameTime_t m_fTimeLastHurt; // 0xA68 - 0xA6C
   GameTime_t m_flDeathTime; // 0xA6C - 0xA70
   GameTime_t m_fNextSuicideTime; // 0xA70 - 0xA74
   bool m_fInitHUD; // 0xA74 - 0xA75
   unsigned char pad_A75[0x3] // 0xA75 - 0xA78
   GameTime_t m_flNextDecalTime; // 0xA78 - 0xA7C
   unsigned char pad_A7C[0x4] // 0xA7C - 0xA80
   CAI_Expresser* m_pExpresser; // 0xA80 - 0xA88
   CHandle< CBasePlayerController > m_hController; // 0xA88 - 0xA8C
   unsigned char pad_A8C[0x4] // 0xA8C - 0xA90
   float m_fHltvReplayDelay; // 0xA90 - 0xA94
   float m_fHltvReplayEnd; // 0xA94 - 0xA98
   CEntityIndex m_iHltvReplayEntity; // 0xA98 - 0xA9C

}; // size - 0xAA0


class CParticleFunctionEmitter : public CParticleFunction
{
public:

   int32_t m_nEmitterIndex; // 0x1E8 - 0x1EC

}; // size - 0x1F0


class CSprite : public CBaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x6F0 - 0x6F8
   CHandle< CBaseEntity > m_hAttachedToEntity; // 0x6F8 - 0x6FC
   AttachmentHandle_t m_nAttachment; // 0x6FC - 0x6FD
   unsigned char pad_6FD[0x3] // 0x6FD - 0x700
   float m_flSpriteFramerate; // 0x700 - 0x704
   float m_flFrame; // 0x704 - 0x708
   GameTime_t m_flDieTime; // 0x708 - 0x70C
   unsigned char pad_70C[0xC] // 0x70C - 0x718
   uint32_t m_nBrightness; // 0x718 - 0x71C
   float m_flBrightnessDuration; // 0x71C - 0x720
   float m_flSpriteScale; // 0x720 - 0x724
   float m_flScaleDuration; // 0x724 - 0x728
   bool m_bWorldSpaceScale; // 0x728 - 0x729
   unsigned char pad_729[0x3] // 0x729 - 0x72C
   float m_flGlowProxySize; // 0x72C - 0x730
   float m_flHDRColorScale; // 0x730 - 0x734
   GameTime_t m_flLastTime; // 0x734 - 0x738
   float m_flMaxFrame; // 0x738 - 0x73C
   float m_flStartScale; // 0x73C - 0x740
   float m_flDestScale; // 0x740 - 0x744
   GameTime_t m_flScaleTimeStart; // 0x744 - 0x748
   int32_t m_nStartBrightness; // 0x748 - 0x74C
   int32_t m_nDestBrightness; // 0x74C - 0x750
   GameTime_t m_flBrightnessTimeStart; // 0x750 - 0x754
   int32_t m_nSpriteWidth; // 0x754 - 0x758
   int32_t m_nSpriteHeight; // 0x758 - 0x75C

}; // size - 0x760


class C_BaseCSGrenadeProjectile : public C_BaseGrenade
{
public:

   Vector m_vInitialVelocity; // 0xB78 - 0xB84
   int32_t m_nBounces; // 0xB84 - 0xB88
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0xB88 - 0xB90
   int32_t m_nExplodeEffectTickBegin; // 0xB90 - 0xB94
   Vector m_vecExplodeEffectOrigin; // 0xB94 - 0xBA0
   GameTime_t m_flSpawnTime; // 0xBA0 - 0xBA4
   Vector vecLastTrailLinePos; // 0xBA4 - 0xBB0
   GameTime_t flNextTrailLineTime; // 0xBB0 - 0xBB4
   bool m_bExplodeEffectBegan; // 0xBB4 - 0xBB5
   bool m_bCanCreateGrenadeTrail; // 0xBB5 - 0xBB6
   unsigned char pad_BB6[0x2] // 0xBB6 - 0xBB8
   ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0xBB8 - 0xBBC
   unsigned char pad_BBC[0x4] // 0xBBC - 0xBC0
   CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // 0xBC0 - 0xBC8
   CUtlVector< Vector > m_arrTrajectoryTrailPoints; // 0xBC8 - 0xBE0
   CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // 0xBE0 - 0xBF8
   float m_flTrajectoryTrailEffectCreationTime; // 0xBF8 - 0xBFC

}; // size - 0xC00


class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath
{
public:

   bool m_bDofEnabled; // 0x598 - 0x599
   unsigned char pad_599[0x3] // 0x599 - 0x59C
   float m_flDofNearBlurry; // 0x59C - 0x5A0
   float m_flDofNearCrisp; // 0x5A0 - 0x5A4
   float m_flDofFarCrisp; // 0x5A4 - 0x5A8
   float m_flDofFarBlurry; // 0x5A8 - 0x5AC
   float m_flDofTiltToGround; // 0x5AC - 0x5B0

}; // size - 0x5B0


class C_CSPlayerPawn : public C_CSPlayerPawnBase
{
public:

   CCSPlayer_BulletServices* m_pBulletServices; // 0x12A0 - 0x12A8
   CCSPlayer_HostageServices* m_pHostageServices; // 0x12A8 - 0x12B0
   CCSPlayer_GlowServices* m_pGlowServices; // 0x12B0 - 0x12B8
   bool m_bIsBuyMenuOpen; // 0x12B8 - 0x12B9
   unsigned char pad_12B9[0xCF] // 0x12B9 - 0x1388
   int32_t m_iRetakesOffering; // 0x1388 - 0x138C
   int32_t m_iRetakesOfferingCard; // 0x138C - 0x1390
   bool m_bRetakesHasDefuseKit; // 0x1390 - 0x1391
   bool m_bRetakesMVPLastRound; // 0x1391 - 0x1392
   unsigned char pad_1392[0x2] // 0x1392 - 0x1394
   int32_t m_iRetakesMVPBoostItem; // 0x1394 - 0x1398
   loadout_positions_t m_RetakesMVPBoostExtraUtility; // 0x1398 - 0x139C
   unsigned char pad_139C[0x10] // 0x139C - 0x13AC
   bool m_bNeedToReApplyGloves; // 0x13AC - 0x13AD
   unsigned char pad_13AD[0x3] // 0x13AD - 0x13B0
   C_EconItemView m_EconGloves; // 0x13B0 - 0x17F8
   bool m_bMustSyncRagdollState; // 0x17F8 - 0x17F9
   unsigned char pad_17F9[0x3] // 0x17F9 - 0x17FC
   int32_t m_nRagdollDamageBone; // 0x17FC - 0x1800
   Vector m_vRagdollDamageForce; // 0x1800 - 0x180C
   Vector m_vRagdollDamagePosition; // 0x180C - 0x1818
   char m_szRagdollDamageWeaponName[64]; // 0x1818 - 0x1858
   bool m_bRagdollDamageHeadshot; // 0x1858 - 0x1859
   unsigned char pad_1859[0x127] // 0x1859 - 0x1980
   bool m_bLastHeadBoneTransformIsValid; // 0x1980 - 0x1981
   unsigned char pad_1981[0x1B] // 0x1981 - 0x199C
   QAngle m_qDeathEyeAngles; // 0x199C - 0x19A8

}; // size - 0x19A8


class C_PhysicsPropMultiplayer : public C_PhysicsProp
{
public:


}; // size - 0xAF0


class RnShapeDesc_t
{
public:

   uint32_t m_nCollisionAttributeIndex; // 0x0 - 0x4
   uint32_t m_nSurfacePropertyIndex; // 0x4 - 0x8
   CUtlString m_UserFriendlyName; // 0x8 - 0x10

}; // size - 0x10


class CBaseButton : public CBaseToggle
{
public:

   QAngle m_angMoveEntitySpace; // 0x770 - 0x77C
   bool m_fStayPushed; // 0x77C - 0x77D
   bool m_fRotating; // 0x77D - 0x77E
   unsigned char pad_77E[0x2] // 0x77E - 0x780
   locksound_t m_ls; // 0x780 - 0x7A0
   CUtlSymbolLarge m_sUseSound; // 0x7A0 - 0x7A8
   CUtlSymbolLarge m_sLockedSound; // 0x7A8 - 0x7B0
   CUtlSymbolLarge m_sUnlockedSound; // 0x7B0 - 0x7B8
   bool m_bLocked; // 0x7B8 - 0x7B9
   bool m_bDisabled; // 0x7B9 - 0x7BA
   unsigned char pad_7BA[0x2] // 0x7BA - 0x7BC
   GameTime_t m_flUseLockedTime; // 0x7BC - 0x7C0
   bool m_bSolidBsp; // 0x7C0 - 0x7C1
   unsigned char pad_7C1[0x7] // 0x7C1 - 0x7C8
   CEntityIOOutput m_OnDamaged; // 0x7C8 - 0x7F0
   CEntityIOOutput m_OnPressed; // 0x7F0 - 0x818
   CEntityIOOutput m_OnUseLocked; // 0x818 - 0x840
   CEntityIOOutput m_OnIn; // 0x840 - 0x868
   CEntityIOOutput m_OnOut; // 0x868 - 0x890
   int32_t m_nState; // 0x890 - 0x894
   CEntityHandle m_hConstraint; // 0x894 - 0x898
   CEntityHandle m_hConstraintParent; // 0x898 - 0x89C
   bool m_bForceNpcExclude; // 0x89C - 0x89D
   unsigned char pad_89D[0x3] // 0x89D - 0x8A0
   CUtlSymbolLarge m_sGlowEntity; // 0x8A0 - 0x8A8
   CHandle< CBaseModelEntity > m_glowEntity; // 0x8A8 - 0x8AC
   bool m_usable; // 0x8AC - 0x8AD
   unsigned char pad_8AD[0x3] // 0x8AD - 0x8B0
   CUtlSymbolLarge m_szDisplayText; // 0x8B0 - 0x8B8

}; // size - 0x8B8


class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase
{
public:

   CEntityIOOutput m_OnEnter; // 0x538 - 0x560
   CEntityIOOutput m_OnExit; // 0x560 - 0x588
   bool m_bAutoDisable; // 0x588 - 0x589
   unsigned char pad_589[0x43] // 0x589 - 0x5CC
   float m_flDistanceMin; // 0x5CC - 0x5D0
   float m_flDistanceMax; // 0x5D0 - 0x5D4
   float m_flDistanceMapMin; // 0x5D4 - 0x5D8
   float m_flDistanceMapMax; // 0x5D8 - 0x5DC
   float m_flOcclusionRadius; // 0x5DC - 0x5E0
   float m_flOcclusionMin; // 0x5E0 - 0x5E4
   float m_flOcclusionMax; // 0x5E4 - 0x5E8
   float m_flValSetOnDisable; // 0x5E8 - 0x5EC
   bool m_bSetValueOnDisable; // 0x5EC - 0x5ED
   unsigned char pad_5ED[0x3] // 0x5ED - 0x5F0
   int32_t m_nSimulationMode; // 0x5F0 - 0x5F4
   int32_t m_nVisibilitySamples; // 0x5F4 - 0x5F8
   Vector m_vDynamicProxyPoint; // 0x5F8 - 0x604
   float m_flDynamicMaximumOcclusion; // 0x604 - 0x608
   CEntityHandle m_hDynamicEntity; // 0x608 - 0x60C
   unsigned char pad_60C[0x4] // 0x60C - 0x610
   CUtlSymbolLarge m_iszDynamicEntityName; // 0x610 - 0x618
   float m_flPathingDistanceNormFactor; // 0x618 - 0x61C
   Vector m_vPathingSourcePos; // 0x61C - 0x628
   Vector m_vPathingListenerPos; // 0x628 - 0x634

}; // size - 0x638


class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase
{
public:


}; // size - 0x558


class CBinaryUpdateNode : public CAnimUpdateNodeBase
{
public:

   CAnimUpdateNodeRef m_pChild1; // 0x58 - 0x68
   CAnimUpdateNodeRef m_pChild2; // 0x68 - 0x78
   BinaryNodeTiming m_timingBehavior; // 0x78 - 0x7C
   float m_flTimingBlend; // 0x7C - 0x80
   bool m_bResetChild1; // 0x80 - 0x81
   bool m_bResetChild2; // 0x81 - 0x82

}; // size - 0x88


class CGeneralRandomRotation : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flDegrees; // 0x1F4 - 0x1F8
   float m_flDegreesMin; // 0x1F8 - 0x1FC
   float m_flDegreesMax; // 0x1FC - 0x200
   float m_flRotationRandExponent; // 0x200 - 0x204
   bool m_bRandomlyFlipDirection; // 0x204 - 0x205

}; // size - 0x210


class CGlowOverlay
{
public:

   Vector m_vPos; // 0x8 - 0x14
   bool m_bDirectional; // 0x14 - 0x15
   unsigned char pad_15[0x3] // 0x15 - 0x18
   Vector m_vDirection; // 0x18 - 0x24
   bool m_bInSky; // 0x24 - 0x25
   unsigned char pad_25[0x3] // 0x25 - 0x28
   float m_skyObstructionScale; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   CGlowSprite m_Sprites[4]; // 0x30 - 0xB0
   int32_t m_nSprites; // 0xB0 - 0xB4
   float m_flProxyRadius; // 0xB4 - 0xB8
   float m_flHDRColorScale; // 0xB8 - 0xBC
   float m_flGlowObstructionScale; // 0xBC - 0xC0
   bool m_bCacheGlowObstruction; // 0xC0 - 0xC1
   bool m_bCacheSkyObstruction; // 0xC1 - 0xC2
   int16_t m_bActivated; // 0xC2 - 0xC4
   uint16_t m_ListIndex; // 0xC4 - 0xC6
   unsigned char pad_C6[0x2] // 0xC6 - 0xC8
   int32_t m_queryHandle; // 0xC8 - 0xCC

}; // size - 0xD0


class CParticleFloatInput
{
public:

   ParticleFloatType_t m_nType; // 0x0 - 0x4
   ParticleFloatMapType_t m_nMapType; // 0x4 - 0x8
   float m_flLiteralValue; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CKV3MemberNameWithStorage m_NamedValue; // 0x10 - 0x48
   int32_t m_nControlPoint; // 0x48 - 0x4C
   ParticleAttributeIndex_t m_nScalarAttribute; // 0x4C - 0x50
   ParticleAttributeIndex_t m_nVectorAttribute; // 0x50 - 0x54
   int32_t m_nVectorComponent; // 0x54 - 0x58
   float m_flRandomMin; // 0x58 - 0x5C
   float m_flRandomMax; // 0x5C - 0x60
   bool m_bHasRandomSignFlip; // 0x60 - 0x61
   unsigned char pad_61[0x3] // 0x61 - 0x64
   ParticleFloatRandomMode_t m_nRandomMode; // 0x64 - 0x68
   unsigned char pad_68[0x4] // 0x68 - 0x6C
   float m_flLOD0; // 0x6C - 0x70
   float m_flLOD1; // 0x70 - 0x74
   float m_flLOD2; // 0x74 - 0x78
   float m_flLOD3; // 0x78 - 0x7C
   ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0x7C - 0x80
   float m_flNoiseOutputMin; // 0x80 - 0x84
   float m_flNoiseOutputMax; // 0x84 - 0x88
   float m_flNoiseScale; // 0x88 - 0x8C
   Vector m_vecNoiseOffsetRate; // 0x8C - 0x98
   float m_flNoiseOffset; // 0x98 - 0x9C
   int32_t m_nNoiseOctaves; // 0x9C - 0xA0
   PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xA0 - 0xA4
   PFNoiseType_t m_nNoiseType; // 0xA4 - 0xA8
   PFNoiseModifier_t m_nNoiseModifier; // 0xA8 - 0xAC
   float m_flNoiseTurbulenceScale; // 0xAC - 0xB0
   float m_flNoiseTurbulenceMix; // 0xB0 - 0xB4
   float m_flNoiseImgPreviewScale; // 0xB4 - 0xB8
   bool m_bNoiseImgPreviewLive; // 0xB8 - 0xB9
   unsigned char pad_B9[0x7] // 0xB9 - 0xC0
   ParticleFloatInputMode_t m_nInputMode; // 0xC0 - 0xC4
   float m_flMultFactor; // 0xC4 - 0xC8
   float m_flInput0; // 0xC8 - 0xCC
   float m_flInput1; // 0xCC - 0xD0
   float m_flOutput0; // 0xD0 - 0xD4
   float m_flOutput1; // 0xD4 - 0xD8
   float m_flNotchedRangeMin; // 0xD8 - 0xDC
   float m_flNotchedRangeMax; // 0xDC - 0xE0
   float m_flNotchedOutputOutside; // 0xE0 - 0xE4
   float m_flNotchedOutputInside; // 0xE4 - 0xE8
   ParticleFloatBiasType_t m_nBiasType; // 0xE8 - 0xEC
   float m_flBiasParameter; // 0xEC - 0xF0
   CPiecewiseCurve m_Curve; // 0xF0 - 0x130

}; // size - 0x138


class CPhysPropLootCrate : public CBrBaseItem
{
public:

   bool m_bRenderInPSPM; // 0xB28 - 0xB29
   bool m_bRenderInTablet; // 0xB29 - 0xB2A
   unsigned char pad_B2A[0x2] // 0xB2A - 0xB2C
   GameTime_t m_flSpawnTime; // 0xB2C - 0xB30
   bool m_bTakeDamageFromDangerZone; // 0xB30 - 0xB31
   unsigned char pad_B31[0x7] // 0xB31 - 0xB38
   char* m_pszCrateName; // 0xB38 - 0xB40
   CHandle< CBasePlayerPawn > m_hCrateOwner; // 0xB40 - 0xB44
   bool m_bOwnedByPlayer; // 0xB44 - 0xB45
   unsigned char pad_B45[0x3] // 0xB45 - 0xB48
   float m_flDampingOriginalSpeed; // 0xB48 - 0xB4C
   float m_flDampingOriginalRot; // 0xB4C - 0xB50

}; // size - 0xB50


class CPhysPropWeaponUpgradeTablet : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CRulePointEntity : public CRuleEntity
{
public:

   int32_t m_Score; // 0x6F8 - 0x6FC

}; // size - 0x700


class CSoundEventEntity : public CBaseEntity
{
public:

   bool m_bStartOnSpawn; // 0x4A0 - 0x4A1
   bool m_bToLocalPlayer; // 0x4A1 - 0x4A2
   bool m_bStopOnNew; // 0x4A2 - 0x4A3
   bool m_bSaveRestore; // 0x4A3 - 0x4A4
   bool m_bSavedIsPlaying; // 0x4A4 - 0x4A5
   unsigned char pad_4A5[0x3] // 0x4A5 - 0x4A8
   float m_flSavedElapsedTime; // 0x4A8 - 0x4AC
   unsigned char pad_4AC[0x4] // 0x4AC - 0x4B0
   CUtlSymbolLarge m_iszSourceEntityName; // 0x4B0 - 0x4B8
   CUtlSymbolLarge m_iszAttachmentName; // 0x4B8 - 0x4C0
   CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x4C0 - 0x4E8
   CEntityIOOutput m_onSoundFinished; // 0x4E8 - 0x510
   unsigned char pad_510[0x20] // 0x510 - 0x530
   CUtlSymbolLarge m_iszSoundName; // 0x530 - 0x538
   unsigned char pad_538[0x8] // 0x538 - 0x540
   CEntityHandle m_hSource; // 0x540 - 0x544

}; // size - 0x548


class CStopwatchBase : public CSimpleSimTimer
{
public:

   bool m_fIsRunning; // 0x8 - 0x9

}; // size - 0xC


class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F8
   CUtlVector< CUtlString > m_names; // 0x1F8 - 0x210
   bool m_bShuffle; // 0x210 - 0x211
   bool m_bLinear; // 0x211 - 0x212
   bool m_bModelFromRenderer; // 0x212 - 0x213
   unsigned char pad_213[0x1] // 0x213 - 0x214
   ParticleAttributeIndex_t m_nFieldOutput; // 0x214 - 0x218

}; // size - 0x220


class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F8
   CUtlVector< CUtlString > m_names; // 0x1F8 - 0x210
   CUtlVector< float32 > m_values; // 0x210 - 0x228
   ParticleAttributeIndex_t m_nFieldInput; // 0x228 - 0x22C
   ParticleAttributeIndex_t m_nFieldOutput; // 0x22C - 0x230
   ParticleSetMethod_t m_nSetMethod; // 0x230 - 0x234
   bool m_bModelFromRenderer; // 0x234 - 0x235

}; // size - 0x240


class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x220 - 0x228
   CUtlString m_outputMinName; // 0x228 - 0x230
   CUtlString m_outputMaxName; // 0x230 - 0x238
   bool m_bModelFromRenderer; // 0x238 - 0x239

}; // size - 0x240


class C_ModelPointEntity : public C_BaseModelEntity
{
public:


}; // size - 0x838


class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F8
   CUtlVector< CUtlString > m_inNames; // 0x1F8 - 0x210
   CUtlVector< CUtlString > m_outNames; // 0x210 - 0x228
   CUtlVector< CUtlString > m_fallbackNames; // 0x228 - 0x240
   bool m_bModelFromRenderer; // 0x240 - 0x241
   unsigned char pad_241[0x3] // 0x241 - 0x244
   ParticleAttributeIndex_t m_nFieldInput; // 0x244 - 0x248
   ParticleAttributeIndex_t m_nFieldOutput; // 0x248 - 0x24C

}; // size - 0x250


class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F8
   CUtlVector< CUtlString > m_inNames; // 0x1F8 - 0x210
   CUtlVector< CUtlString > m_outNames; // 0x210 - 0x228
   CUtlVector< CUtlString > m_fallbackNames; // 0x228 - 0x240
   bool m_bModelFromRenderer; // 0x240 - 0x241
   bool m_bProportional; // 0x241 - 0x242
   unsigned char pad_242[0x2] // 0x242 - 0x244
   ParticleAttributeIndex_t m_nFieldInput; // 0x244 - 0x248
   ParticleAttributeIndex_t m_nFieldOutput; // 0x248 - 0x24C
   float m_flRemapTime; // 0x24C - 0x250

}; // size - 0x250


class C_PointClientUIWorldPanel : public C_BaseClientUIEntity
{
public:

   bool m_bForceRecreateNextUpdate; // 0x870 - 0x871
   bool m_bMoveViewToPlayerNextThink; // 0x871 - 0x872
   bool m_bCheckCSSClasses; // 0x872 - 0x873
   unsigned char pad_873[0xD] // 0x873 - 0x880
   CTransform m_anchorDeltaTransform; // 0x880 - 0x8A0
   unsigned char pad_8A0[0x180] // 0x8A0 - 0xA20
   CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xA20 - 0xA28
   unsigned char pad_A28[0x20] // 0xA28 - 0xA48
   bool m_bIgnoreInput; // 0xA48 - 0xA49
   bool m_bLit; // 0xA49 - 0xA4A
   bool m_bFollowPlayerAcrossTeleport; // 0xA4A - 0xA4B
   unsigned char pad_A4B[0x1] // 0xA4B - 0xA4C
   float m_flWidth; // 0xA4C - 0xA50
   float m_flHeight; // 0xA50 - 0xA54
   float m_flDPI; // 0xA54 - 0xA58
   float m_flInteractDistance; // 0xA58 - 0xA5C
   float m_flDepthOffset; // 0xA5C - 0xA60
   uint32_t m_unOwnerContext; // 0xA60 - 0xA64
   uint32_t m_unHorizontalAlign; // 0xA64 - 0xA68
   uint32_t m_unVerticalAlign; // 0xA68 - 0xA6C
   uint32_t m_unOrientation; // 0xA6C - 0xA70
   bool m_bAllowInteractionFromAllSceneWorlds; // 0xA70 - 0xA71
   unsigned char pad_A71[0x7] // 0xA71 - 0xA78
   C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xA78 - 0xA90
   bool m_bOpaque; // 0xA90 - 0xA91
   bool m_bNoDepth; // 0xA91 - 0xA92
   bool m_bRenderBackface; // 0xA92 - 0xA93
   bool m_bUseOffScreenIndicator; // 0xA93 - 0xA94
   bool m_bExcludeFromSaveGames; // 0xA94 - 0xA95
   bool m_bGrabbable; // 0xA95 - 0xA96
   bool m_bOnlyRenderToTexture; // 0xA96 - 0xA97
   bool m_bDisableMipGen; // 0xA97 - 0xA98
   int32_t m_nExplicitImageLayout; // 0xA98 - 0xA9C

}; // size - 0xAA0


class C_Sprite : public C_BaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x850 - 0x858
   CHandle< C_BaseEntity > m_hAttachedToEntity; // 0x858 - 0x85C
   AttachmentHandle_t m_nAttachment; // 0x85C - 0x85D
   unsigned char pad_85D[0x3] // 0x85D - 0x860
   float m_flSpriteFramerate; // 0x860 - 0x864
   float m_flFrame; // 0x864 - 0x868
   GameTime_t m_flDieTime; // 0x868 - 0x86C
   unsigned char pad_86C[0xC] // 0x86C - 0x878
   uint32_t m_nBrightness; // 0x878 - 0x87C
   float m_flBrightnessDuration; // 0x87C - 0x880
   float m_flSpriteScale; // 0x880 - 0x884
   float m_flScaleDuration; // 0x884 - 0x888
   bool m_bWorldSpaceScale; // 0x888 - 0x889
   unsigned char pad_889[0x3] // 0x889 - 0x88C
   float m_flGlowProxySize; // 0x88C - 0x890
   float m_flHDRColorScale; // 0x890 - 0x894
   GameTime_t m_flLastTime; // 0x894 - 0x898
   float m_flMaxFrame; // 0x898 - 0x89C
   float m_flStartScale; // 0x89C - 0x8A0
   float m_flDestScale; // 0x8A0 - 0x8A4
   GameTime_t m_flScaleTimeStart; // 0x8A4 - 0x8A8
   int32_t m_nStartBrightness; // 0x8A8 - 0x8AC
   int32_t m_nDestBrightness; // 0x8AC - 0x8B0
   GameTime_t m_flBrightnessTimeStart; // 0x8B0 - 0x8B4
   unsigned char pad_8B4[0x4] // 0x8B4 - 0x8B8
   CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0x8B8 - 0x8C0
   unsigned char pad_8C0[0xA0] // 0x8C0 - 0x960
   int32_t m_nSpriteWidth; // 0x960 - 0x964
   int32_t m_nSpriteHeight; // 0x964 - 0x968

}; // size - 0x968


class CAI_Expresser
{
public:

   GameTime_t m_flStopTalkTime; // 0x38 - 0x3C
   GameTime_t m_flStopTalkTimeWithoutDelay; // 0x3C - 0x40
   GameTime_t m_flBlockedTalkTime; // 0x40 - 0x44
   int32_t m_voicePitch; // 0x44 - 0x48
   GameTime_t m_flLastTimeAcceptedSpeak; // 0x48 - 0x4C
   bool m_bAllowSpeakingInterrupts; // 0x4C - 0x4D
   bool m_bConsiderSceneInvolvementAsSpeech; // 0x4D - 0x4E
   unsigned char pad_4E[0x2] // 0x4E - 0x50
   int32_t m_nLastSpokenPriority; // 0x50 - 0x54
   unsigned char pad_54[0x4] // 0x54 - 0x58
   CBaseFlex* m_pOuter; // 0x58 - 0x60

}; // size - 0x60


class CBaseViewModel : public CBaseAnimGraph
{
public:

   Vector m_vecLastFacing; // 0x828 - 0x834
   uint32_t m_nViewModelIndex; // 0x834 - 0x838
   uint32_t m_nAnimationParity; // 0x838 - 0x83C
   float m_flAnimationStartTime; // 0x83C - 0x840
   CHandle< CBasePlayerWeapon > m_hWeapon; // 0x840 - 0x844
   unsigned char pad_844[0x4] // 0x844 - 0x848
   CUtlSymbolLarge m_sVMName; // 0x848 - 0x850
   CUtlSymbolLarge m_sAnimationPrefix; // 0x850 - 0x858
   HSequence m_hOldLayerSequence; // 0x858 - 0x85C
   int32_t m_oldLayer; // 0x85C - 0x860
   float m_oldLayerStartTime; // 0x860 - 0x864
   CEntityHandle m_hControlPanel; // 0x864 - 0x868

}; // size - 0x868


class CBtNodeDecorator : public CBtNode
{
public:


}; // size - 0x58


class CFuncPlatRot : public CFuncPlat
{
public:

   QAngle m_end; // 0x7A0 - 0x7AC
   QAngle m_start; // 0x7AC - 0x7B8

}; // size - 0x7B8


class CHostageExpresserShim : public CBaseCombatCharacter
{
public:

   CAI_Expresser* m_pExpresser; // 0x968 - 0x970

}; // size - 0x970


class CLogicNPCCounter : public CBaseEntity
{
public:

   CEntityIOOutput m_OnMinCountAll; // 0x4A0 - 0x4C8
   CEntityIOOutput m_OnMaxCountAll; // 0x4C8 - 0x4F0
   CEntityOutputTemplate< float32 > m_OnFactorAll; // 0x4F0 - 0x518
   CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // 0x518 - 0x540
   CEntityIOOutput m_OnMinCount_1; // 0x540 - 0x568
   CEntityIOOutput m_OnMaxCount_1; // 0x568 - 0x590
   CEntityOutputTemplate< float32 > m_OnFactor_1; // 0x590 - 0x5B8
   CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // 0x5B8 - 0x5E0
   CEntityIOOutput m_OnMinCount_2; // 0x5E0 - 0x608
   CEntityIOOutput m_OnMaxCount_2; // 0x608 - 0x630
   CEntityOutputTemplate< float32 > m_OnFactor_2; // 0x630 - 0x658
   CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // 0x658 - 0x680
   CEntityIOOutput m_OnMinCount_3; // 0x680 - 0x6A8
   CEntityIOOutput m_OnMaxCount_3; // 0x6A8 - 0x6D0
   CEntityOutputTemplate< float32 > m_OnFactor_3; // 0x6D0 - 0x6F8
   CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // 0x6F8 - 0x720
   CEntityHandle m_hSource; // 0x720 - 0x724
   unsigned char pad_724[0x4] // 0x724 - 0x728
   CUtlSymbolLarge m_iszSourceEntityName; // 0x728 - 0x730
   float m_flDistanceMax; // 0x730 - 0x734
   bool m_bDisabled; // 0x734 - 0x735
   unsigned char pad_735[0x3] // 0x735 - 0x738
   int32_t m_nMinCountAll; // 0x738 - 0x73C
   int32_t m_nMaxCountAll; // 0x73C - 0x740
   int32_t m_nMinFactorAll; // 0x740 - 0x744
   int32_t m_nMaxFactorAll; // 0x744 - 0x748
   unsigned char pad_748[0x8] // 0x748 - 0x750
   CUtlSymbolLarge m_iszNPCClassname_1; // 0x750 - 0x758
   int32_t m_nNPCState_1; // 0x758 - 0x75C
   bool m_bInvertState_1; // 0x75C - 0x75D
   unsigned char pad_75D[0x3] // 0x75D - 0x760
   int32_t m_nMinCount_1; // 0x760 - 0x764
   int32_t m_nMaxCount_1; // 0x764 - 0x768
   int32_t m_nMinFactor_1; // 0x768 - 0x76C
   int32_t m_nMaxFactor_1; // 0x76C - 0x770
   unsigned char pad_770[0x4] // 0x770 - 0x774
   float m_flDefaultDist_1; // 0x774 - 0x778
   CUtlSymbolLarge m_iszNPCClassname_2; // 0x778 - 0x780
   int32_t m_nNPCState_2; // 0x780 - 0x784
   bool m_bInvertState_2; // 0x784 - 0x785
   unsigned char pad_785[0x3] // 0x785 - 0x788
   int32_t m_nMinCount_2; // 0x788 - 0x78C
   int32_t m_nMaxCount_2; // 0x78C - 0x790
   int32_t m_nMinFactor_2; // 0x790 - 0x794
   int32_t m_nMaxFactor_2; // 0x794 - 0x798
   unsigned char pad_798[0x4] // 0x798 - 0x79C
   float m_flDefaultDist_2; // 0x79C - 0x7A0
   CUtlSymbolLarge m_iszNPCClassname_3; // 0x7A0 - 0x7A8
   int32_t m_nNPCState_3; // 0x7A8 - 0x7AC
   bool m_bInvertState_3; // 0x7AC - 0x7AD
   unsigned char pad_7AD[0x3] // 0x7AD - 0x7B0
   int32_t m_nMinCount_3; // 0x7B0 - 0x7B4
   int32_t m_nMaxCount_3; // 0x7B4 - 0x7B8
   int32_t m_nMinFactor_3; // 0x7B8 - 0x7BC
   int32_t m_nMaxFactor_3; // 0x7BC - 0x7C0
   unsigned char pad_7C0[0x4] // 0x7C0 - 0x7C4
   float m_flDefaultDist_3; // 0x7C4 - 0x7C8

}; // size - 0x7E0


class CMultiplayRules : public CGameRules
{
public:


}; // size - 0x90


class CPlayer_MovementServices : public CPlayerPawnComponent
{
public:

   int32_t m_nImpulse; // 0x40 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   CInButtonState m_nButtons; // 0x48 - 0x68
   uint64_t m_nQueuedButtonDownMask; // 0x68 - 0x70
   uint64_t m_nQueuedButtonChangeMask; // 0x70 - 0x78
   uint64_t m_nButtonDoublePressed; // 0x78 - 0x80
   uint32 m_pButtonPressedCmdNumber[64]; // 0x80 - 0x180
   uint32_t m_nLastCommandNumberProcessed; // 0x180 - 0x184
   unsigned char pad_184[0x4] // 0x184 - 0x188
   uint64_t m_nToggleButtonDownMask; // 0x188 - 0x190
   float m_flMaxspeed; // 0x190 - 0x194
   float m_flForceSubtickMoveWhen; // 0x194 - 0x198
   float m_flForwardMove; // 0x198 - 0x19C
   float m_flLeftMove; // 0x19C - 0x1A0
   float m_flUpMove; // 0x1A0 - 0x1A4
   QAngle m_vecOldViewAngles; // 0x1A4 - 0x1B0

}; // size - 0x1B8


class CPlayer_MovementServices : public CPlayerPawnComponent
{
public:

   int32_t m_nImpulse; // 0x40 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   CInButtonState m_nButtons; // 0x48 - 0x68
   uint64_t m_nQueuedButtonDownMask; // 0x68 - 0x70
   uint64_t m_nQueuedButtonChangeMask; // 0x70 - 0x78
   uint64_t m_nButtonDoublePressed; // 0x78 - 0x80
   uint32 m_pButtonPressedCmdNumber[64]; // 0x80 - 0x180
   uint32_t m_nLastCommandNumberProcessed; // 0x180 - 0x184
   unsigned char pad_184[0x4] // 0x184 - 0x188
   uint64_t m_nToggleButtonDownMask; // 0x188 - 0x190
   float m_flMaxspeed; // 0x190 - 0x194
   float m_flForceSubtickMoveWhen; // 0x194 - 0x198
   float m_flForwardMove; // 0x198 - 0x19C
   float m_flLeftMove; // 0x19C - 0x1A0
   float m_flUpMove; // 0x1A0 - 0x1A4
   QAngle m_vecOldViewAngles; // 0x1A4 - 0x1B0

}; // size - 0x1B8


class CPropDoorRotating : public CBasePropDoor
{
public:

   Vector m_vecAxis; // 0xD28 - 0xD34
   float m_flDistance; // 0xD34 - 0xD38
   PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xD38 - 0xD3C
   PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xD3C - 0xD40
   PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xD40 - 0xD44
   float m_flAjarAngle; // 0xD44 - 0xD48
   QAngle m_angRotationAjarDeprecated; // 0xD48 - 0xD54
   QAngle m_angRotationClosed; // 0xD54 - 0xD60
   QAngle m_angRotationOpenForward; // 0xD60 - 0xD6C
   QAngle m_angRotationOpenBack; // 0xD6C - 0xD78
   QAngle m_angGoal; // 0xD78 - 0xD84
   Vector m_vecForwardBoundsMin; // 0xD84 - 0xD90
   Vector m_vecForwardBoundsMax; // 0xD90 - 0xD9C
   Vector m_vecBackBoundsMin; // 0xD9C - 0xDA8
   Vector m_vecBackBoundsMax; // 0xDA8 - 0xDB4
   CHandle< CEntityBlocker > m_hEntityBlocker; // 0xDB4 - 0xDB8

}; // size - 0xDB8


class C_BaseViewModel : public CBaseAnimGraph
{
public:

   Vector m_vecLastFacing; // 0x9A0 - 0x9AC
   uint32_t m_nViewModelIndex; // 0x9AC - 0x9B0
   uint32_t m_nAnimationParity; // 0x9B0 - 0x9B4
   float m_flAnimationStartTime; // 0x9B4 - 0x9B8
   CHandle< C_BasePlayerWeapon > m_hWeapon; // 0x9B8 - 0x9BC
   unsigned char pad_9BC[0x4] // 0x9BC - 0x9C0
   CUtlSymbolLarge m_sVMName; // 0x9C0 - 0x9C8
   CUtlSymbolLarge m_sAnimationPrefix; // 0x9C8 - 0x9D0
   CHandle< C_ViewmodelWeapon > m_hWeaponModel; // 0x9D0 - 0x9D4
   AttachmentHandle_t m_iCameraAttachment; // 0x9D4 - 0x9D5
   unsigned char pad_9D5[0x3] // 0x9D5 - 0x9D8
   QAngle m_vecLastCameraAngles; // 0x9D8 - 0x9E4
   float m_previousElapsedDuration; // 0x9E4 - 0x9E8
   float m_previousCycle; // 0x9E8 - 0x9EC
   int32_t m_nOldAnimationParity; // 0x9EC - 0x9F0
   HSequence m_hOldLayerSequence; // 0x9F0 - 0x9F4
   int32_t m_oldLayer; // 0x9F4 - 0x9F8
   float m_oldLayerStartTime; // 0x9F8 - 0x9FC
   CEntityHandle m_hControlPanel; // 0x9FC - 0xA00

}; // size - 0xA00


class C_MultiplayRules : public C_GameRules
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class BaseSceneObjectOverride_t
{
public:

   uint32_t m_nSceneObjectIndex; // 0x0 - 0x4

}; // size - 0x4


class CAnimState
{
public:

   CUtlVector< CSmartPtr< CAnimStateTransition > > m_transitions; // 0x28 - 0x40
   CUtlVector< CStateAction > m_actions; // 0x40 - 0x58
   CUtlString m_name; // 0x58 - 0x60
   AnimStateID m_stateID; // 0x60 - 0x64
   Vector2D m_position; // 0x64 - 0x6C
   bool m_bIsStartState; // 0x6C - 0x6D
   bool m_bIsEndtState; // 0x6D - 0x6E
   bool m_bIsPassthrough; // 0x6E - 0x6F

}; // size - 0x70


class CAnimStateTransition
{
public:

   CConditionContainer m_conditionList; // 0x28 - 0x60
   AnimStateID m_srcState; // 0x60 - 0x64
   AnimStateID m_destState; // 0x64 - 0x68
   bool m_bDisabled; // 0x68 - 0x69

}; // size - 0x70


class CBarnLight : public CBaseModelEntity
{
public:

   bool m_bEnabled; // 0x6F0 - 0x6F1
   unsigned char pad_6F1[0x3] // 0x6F1 - 0x6F4
   int32_t m_nColorMode; // 0x6F4 - 0x6F8
   Color m_Color; // 0x6F8 - 0x6FC
   float m_flColorTemperature; // 0x6FC - 0x700
   float m_flBrightness; // 0x700 - 0x704
   float m_flBrightnessScale; // 0x704 - 0x708
   int32_t m_nDirectLight; // 0x708 - 0x70C
   int32_t m_nBakedShadowIndex; // 0x70C - 0x710
   int32_t m_nLuminaireShape; // 0x710 - 0x714
   float m_flLuminaireSize; // 0x714 - 0x718
   float m_flLuminaireAnisotropy; // 0x718 - 0x71C
   unsigned char pad_71C[0x4] // 0x71C - 0x720
   CUtlString m_LightStyleString; // 0x720 - 0x728
   GameTime_t m_flLightStyleStartTime; // 0x728 - 0x72C
   unsigned char pad_72C[0x4] // 0x72C - 0x730
   CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x730 - 0x748
   CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x748 - 0x760
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // 0x760 - 0x778
   CEntityIOOutput m_StyleEvent[4]; // 0x778 - 0x818
   CUtlString m_StyleRadianceVar; // 0x818 - 0x820
   CUtlString m_StyleVar; // 0x820 - 0x828
   unsigned char pad_828[0x20] // 0x828 - 0x848
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x848 - 0x850
   float m_flShape; // 0x850 - 0x854
   float m_flSoftX; // 0x854 - 0x858
   float m_flSoftY; // 0x858 - 0x85C
   float m_flSkirt; // 0x85C - 0x860
   float m_flSkirtNear; // 0x860 - 0x864
   Vector m_vSizeParams; // 0x864 - 0x870
   float m_flRange; // 0x870 - 0x874
   Vector m_vShear; // 0x874 - 0x880
   int32_t m_nBakeSpecularToCubemaps; // 0x880 - 0x884
   Vector m_vBakeSpecularToCubemapsSize; // 0x884 - 0x890
   int32_t m_nCastShadows; // 0x890 - 0x894
   int32_t m_nShadowMapSize; // 0x894 - 0x898
   int32_t m_nShadowPriority; // 0x898 - 0x89C
   bool m_bContactShadow; // 0x89C - 0x89D
   unsigned char pad_89D[0x3] // 0x89D - 0x8A0
   int32_t m_nBounceLight; // 0x8A0 - 0x8A4
   float m_flBounceScale; // 0x8A4 - 0x8A8
   float m_flMinRoughness; // 0x8A8 - 0x8AC
   int32_t m_nFog; // 0x8AC - 0x8B0
   float m_flFogStrength; // 0x8B0 - 0x8B4
   int32_t m_nFogShadows; // 0x8B4 - 0x8B8
   float m_flFogScale; // 0x8B8 - 0x8BC
   float m_flFadeSizeStart; // 0x8BC - 0x8C0
   float m_flFadeSizeEnd; // 0x8C0 - 0x8C4
   float m_flShadowFadeSizeStart; // 0x8C4 - 0x8C8
   float m_flShadowFadeSizeEnd; // 0x8C8 - 0x8CC
   bool m_bPrecomputedFieldsValid; // 0x8CC - 0x8CD
   unsigned char pad_8CD[0x3] // 0x8CD - 0x8D0
   Vector m_vPrecomputedBoundsMins; // 0x8D0 - 0x8DC
   Vector m_vPrecomputedBoundsMaxs; // 0x8DC - 0x8E8
   Vector m_vPrecomputedOBBOrigin; // 0x8E8 - 0x8F4
   QAngle m_vPrecomputedOBBAngles; // 0x8F4 - 0x900
   Vector m_vPrecomputedOBBExtent; // 0x900 - 0x90C
   bool m_bPvsModifyEntity; // 0x90C - 0x90D

}; // size - 0x918


class CBaseDoor : public CBaseToggle
{
public:

   QAngle m_angMoveEntitySpace; // 0x780 - 0x78C
   Vector m_vecMoveDirParentSpace; // 0x78C - 0x798
   locksound_t m_ls; // 0x798 - 0x7B8
   bool m_bForceClosed; // 0x7B8 - 0x7B9
   bool m_bDoorGroup; // 0x7B9 - 0x7BA
   bool m_bLocked; // 0x7BA - 0x7BB
   bool m_bIgnoreDebris; // 0x7BB - 0x7BC
   FuncDoorSpawnPos_t m_eSpawnPosition; // 0x7BC - 0x7C0
   float m_flBlockDamage; // 0x7C0 - 0x7C4
   unsigned char pad_7C4[0x4] // 0x7C4 - 0x7C8
   CUtlSymbolLarge m_NoiseMoving; // 0x7C8 - 0x7D0
   CUtlSymbolLarge m_NoiseArrived; // 0x7D0 - 0x7D8
   CUtlSymbolLarge m_NoiseMovingClosed; // 0x7D8 - 0x7E0
   CUtlSymbolLarge m_NoiseArrivedClosed; // 0x7E0 - 0x7E8
   CUtlSymbolLarge m_ChainTarget; // 0x7E8 - 0x7F0
   CEntityIOOutput m_OnBlockedClosing; // 0x7F0 - 0x818
   CEntityIOOutput m_OnBlockedOpening; // 0x818 - 0x840
   CEntityIOOutput m_OnUnblockedClosing; // 0x840 - 0x868
   CEntityIOOutput m_OnUnblockedOpening; // 0x868 - 0x890
   CEntityIOOutput m_OnFullyClosed; // 0x890 - 0x8B8
   CEntityIOOutput m_OnFullyOpen; // 0x8B8 - 0x8E0
   CEntityIOOutput m_OnClose; // 0x8E0 - 0x908
   CEntityIOOutput m_OnOpen; // 0x908 - 0x930
   CEntityIOOutput m_OnLockedUse; // 0x930 - 0x958
   bool m_bLoopMoveSound; // 0x958 - 0x959
   unsigned char pad_959[0x17] // 0x959 - 0x970
   bool m_bCreateNavObstacle; // 0x970 - 0x971
   bool m_isChaining; // 0x971 - 0x972
   bool m_bIsUsable; // 0x972 - 0x973

}; // size - 0x978


class CBeam : public CBaseModelEntity
{
public:

   float m_flFrameRate; // 0x6F0 - 0x6F4
   float m_flHDRColorScale; // 0x6F4 - 0x6F8
   GameTime_t m_flFireTime; // 0x6F8 - 0x6FC
   float m_flDamage; // 0x6FC - 0x700
   uint8_t m_nNumBeamEnts; // 0x700 - 0x701
   unsigned char pad_701[0x7] // 0x701 - 0x708
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x708 - 0x710
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x710 - 0x718
   BeamType_t m_nBeamType; // 0x718 - 0x71C
   uint32_t m_nBeamFlags; // 0x71C - 0x720
   CHandle< CBaseEntity > m_hAttachEntity[10]; // 0x720 - 0x748
   AttachmentHandle_t m_nAttachIndex[10]; // 0x748 - 0x752
   unsigned char pad_752[0x2] // 0x752 - 0x754
   float m_fWidth; // 0x754 - 0x758
   float m_fEndWidth; // 0x758 - 0x75C
   float m_fFadeLength; // 0x75C - 0x760
   float m_fHaloScale; // 0x760 - 0x764
   float m_fAmplitude; // 0x764 - 0x768
   float m_fStartFrame; // 0x768 - 0x76C
   float m_fSpeed; // 0x76C - 0x770
   float m_flFrame; // 0x770 - 0x774
   BeamClipStyle_t m_nClipStyle; // 0x774 - 0x778
   bool m_bTurnedOff; // 0x778 - 0x779
   unsigned char pad_779[0x3] // 0x779 - 0x77C
   Vector m_vecEndPos; // 0x77C - 0x788
   CHandle< CBaseEntity > m_hEndEntity; // 0x788 - 0x78C
   int32_t m_nDissolveType; // 0x78C - 0x790

}; // size - 0x790


class CBlend2DItemBase
{
public:

   Vector2D m_blendValue; // 0x18 - 0x20
   unsigned char pad_20[0x8] // 0x20 - 0x28
   bool m_bUseCustomDuration; // 0x28 - 0x29
   unsigned char pad_29[0x3] // 0x29 - 0x2C
   float m_flCustomDuration; // 0x2C - 0x30

}; // size - 0x30


class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:

   CSkeletonInstance m_skeletonInstance; // 0x50 - 0x440
   CNetworkVarChainer __m_pChainEntity; // 0x440 - 0x468

}; // size - 0x470


class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:

   CSkeletonInstance m_skeletonInstance; // 0x50 - 0x440
   CNetworkVarChainer __m_pChainEntity; // 0x440 - 0x468

}; // size - 0x470


class CBreakable : public CBaseModelEntity
{
public:

   Materials m_Material; // 0x700 - 0x704
   CHandle< CBaseEntity > m_hBreaker; // 0x704 - 0x708
   Explosions m_Explosion; // 0x708 - 0x70C
   unsigned char pad_70C[0x4] // 0x70C - 0x710
   CUtlSymbolLarge m_iszSpawnObject; // 0x710 - 0x718
   float m_flPressureDelay; // 0x718 - 0x71C
   int32_t m_iMinHealthDmg; // 0x71C - 0x720
   CUtlSymbolLarge m_iszPropData; // 0x720 - 0x728
   float m_impactEnergyScale; // 0x728 - 0x72C
   EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x72C - 0x730
   CEntityIOOutput m_OnBreak; // 0x730 - 0x758
   CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x758 - 0x780
   float m_flDmgModBullet; // 0x780 - 0x784
   float m_flDmgModClub; // 0x784 - 0x788
   float m_flDmgModExplosive; // 0x788 - 0x78C
   float m_flDmgModFire; // 0x78C - 0x790
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x790 - 0x798
   CUtlSymbolLarge m_iszBasePropData; // 0x798 - 0x7A0
   int32_t m_iInteractions; // 0x7A0 - 0x7A4
   PerformanceMode_t m_PerformanceMode; // 0x7A4 - 0x7A8
   CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x7A8 - 0x7AC
   GameTime_t m_flLastPhysicsInfluenceTime; // 0x7AC - 0x7B0

}; // size - 0x7B0


class CCSGO_TeamIntroCharacterPosition : public CCSGO_TeamPreviewCharacterPosition
{
public:


}; // size - 0x730


class CCSGO_TeamSelectCharacterPosition : public CCSGO_TeamPreviewCharacterPosition
{
public:


}; // size - 0x730


class CCSPlayerPawnBase : public CBasePlayerPawn
{
public:

   CTouchExpansionComponent m_CTouchExpansionComponent; // 0xAB0 - 0xAD0
   CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xAD0 - 0xAD8
   CCSPlayer_ViewModelServices* m_pViewModelServices; // 0xAD8 - 0xAE0
   uint32_t m_iDisplayHistoryBits; // 0xAE0 - 0xAE4
   float m_flLastAttackedTeammate; // 0xAE4 - 0xAE8
   CHandle< CCSPlayerController > m_hOriginalController; // 0xAE8 - 0xAEC
   GameTime_t m_blindUntilTime; // 0xAEC - 0xAF0
   GameTime_t m_blindStartTime; // 0xAF0 - 0xAF4
   GameTime_t m_allowAutoFollowTime; // 0xAF4 - 0xAF8
   EntitySpottedState_t m_entitySpottedState; // 0xAF8 - 0xB10
   int32_t m_nSpotRules; // 0xB10 - 0xB14
   float m_flTimeOfLastInjury; // 0xB14 - 0xB18
   RelativeDamagedDirection_t m_nRelativeDirectionOfLastInjury; // 0xB18 - 0xB1C
   CSPlayerState m_iPlayerState; // 0xB1C - 0xB20
   unsigned char pad_B20[0x8] // 0xB20 - 0xB28
   CountdownTimer m_chickenIdleSoundTimer; // 0xB28 - 0xB40
   CountdownTimer m_chickenJumpSoundTimer; // 0xB40 - 0xB58
   unsigned char pad_B58[0xA0] // 0xB58 - 0xBF8
   Vector m_vecLastBookmarkedPosition; // 0xBF8 - 0xC04
   float m_flLastDistanceTraveledNotice; // 0xC04 - 0xC08
   float m_flAccumulatedDistanceTraveled; // 0xC08 - 0xC0C
   float m_flLastFriendlyFireDamageReductionRatio; // 0xC0C - 0xC10
   bool m_bRespawning; // 0xC10 - 0xC11
   unsigned char pad_C11[0x3] // 0xC11 - 0xC14
   int32_t m_iNumGunGameTRBombTotalPoints; // 0xC14 - 0xC18
   bool m_bShouldProgressGunGameTRBombModeWeapon; // 0xC18 - 0xC19
   unsigned char pad_C19[0x3] // 0xC19 - 0xC1C
   int32_t m_nLastPickupPriority; // 0xC1C - 0xC20
   float m_flLastPickupPriorityTime; // 0xC20 - 0xC24
   bool m_passiveItems[4]; // 0xC24 - 0xC28
   bool m_bIsScoped; // 0xC28 - 0xC29
   bool m_bIsWalking; // 0xC29 - 0xC2A
   bool m_bResumeZoom; // 0xC2A - 0xC2B
   bool m_bIsDefusing; // 0xC2B - 0xC2C
   bool m_bIsGrabbingHostage; // 0xC2C - 0xC2D
   unsigned char pad_C2D[0x3] // 0xC2D - 0xC30
   CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0xC30 - 0xC34
   GameTime_t m_fImmuneToGunGameDamageTime; // 0xC34 - 0xC38
   bool m_bGunGameImmunity; // 0xC38 - 0xC39
   bool m_bMadeFinalGunGameProgressiveKill; // 0xC39 - 0xC3A
   unsigned char pad_C3A[0x2] // 0xC3A - 0xC3C
   int32_t m_iGunGameProgressiveWeaponIndex; // 0xC3C - 0xC40
   int32_t m_iNumGunGameTRKillPoints; // 0xC40 - 0xC44
   int32_t m_iNumGunGameKillsWithCurrentWeapon; // 0xC44 - 0xC48
   uint32_t m_unTotalRoundDamageDealt; // 0xC48 - 0xC4C
   float m_fMolotovDamageTime; // 0xC4C - 0xC50
   bool m_bHasMovedSinceSpawn; // 0xC50 - 0xC51
   bool m_bCanMoveDuringFreezePeriod; // 0xC51 - 0xC52
   bool m_isCurrentGunGameLeader; // 0xC52 - 0xC53
   bool m_isCurrentGunGameTeamLeader; // 0xC53 - 0xC54
   float m_flGuardianTooFarDistFrac; // 0xC54 - 0xC58
   float m_flNextGuardianTooFarHurtTime; // 0xC58 - 0xC5C
   GameTime_t m_flDetectedByEnemySensorTime; // 0xC5C - 0xC60
   bool m_bIsSpawnRappelling; // 0xC60 - 0xC61
   unsigned char pad_C61[0x3] // 0xC61 - 0xC64
   Vector m_vecSpawnRappellingRopeOrigin; // 0xC64 - 0xC70
   int32_t m_nSurvivalTeam; // 0xC70 - 0xC74
   CHandle< CCSPlayerPawnBase > m_hSurvivalAssassinationTarget; // 0xC74 - 0xC78
   int32_t m_nCompletedSurvivalAssassinations; // 0xC78 - 0xC7C
   float m_flDealtDamageToEnemyMostRecentTimestamp; // 0xC7C - 0xC80
   float m_flHealthShotBoostExpirationTime; // 0xC80 - 0xC84
   GameTime_t m_flLastEquippedHelmetTime; // 0xC84 - 0xC88
   GameTime_t m_flLastEquippedArmorTime; // 0xC88 - 0xC8C
   int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0xC8C - 0xC90
   bool m_bResetArmorNextSpawn; // 0xC90 - 0xC91
   unsigned char pad_C91[0x3] // 0xC91 - 0xC94
   float m_flLastExoJumpTime; // 0xC94 - 0xC98
   GameTime_t m_flLastBumpMineBumpTime; // 0xC98 - 0xC9C
   unsigned char pad_C9C[0xC] // 0xC9C - 0xCA8
   bool m_bEscaped; // 0xCA8 - 0xCA9
   bool m_bIsVIP; // 0xCA9 - 0xCAA
   unsigned char pad_CAA[0x2] // 0xCAA - 0xCAC
   int32_t m_iNumSpawns; // 0xCAC - 0xCB0
   int32_t m_iShouldHaveCash; // 0xCB0 - 0xCB4
   bool m_bJustKilledTeammate; // 0xCB4 - 0xCB5
   bool m_bPunishedForTK; // 0xCB5 - 0xCB6
   bool m_bInvalidSteamLogonDelayed; // 0xCB6 - 0xCB7
   unsigned char pad_CB7[0x1] // 0xCB7 - 0xCB8
   int32_t m_iTeamKills; // 0xCB8 - 0xCBC
   GameTime_t m_flLastAction; // 0xCBC - 0xCC0
   float32 m_flNameChangeHistory[5]; // 0xCC0 - 0xCD4
   float m_fLastGivenDefuserTime; // 0xCD4 - 0xCD8
   float m_fLastGivenBombTime; // 0xCD8 - 0xCDC
   bool m_bHasNightVision; // 0xCDC - 0xCDD
   bool m_bNightVisionOn; // 0xCDD - 0xCDE
   unsigned char pad_CDE[0x2] // 0xCDE - 0xCE0
   float m_fNextRadarUpdateTime; // 0xCE0 - 0xCE4
   float m_flLastMoneyUpdateTime; // 0xCE4 - 0xCE8
   char m_MenuStringBuffer[1024]; // 0xCE8 - 0x10E8
   CHandle< CBaseEntity > m_pIntroCamera; // 0x10E8 - 0x10EC
   float m_fIntroCamTime; // 0x10EC - 0x10F0
   int32_t m_nMyCollisionGroup; // 0x10F0 - 0x10F4
   bool m_bInBombZone; // 0x10F4 - 0x10F5
   bool m_bInBuyZone; // 0x10F5 - 0x10F6
   bool m_bInNoDefuseArea; // 0x10F6 - 0x10F7
   bool m_bKilledByTaser; // 0x10F7 - 0x10F8
   int32_t m_iMoveState; // 0x10F8 - 0x10FC
   unsigned char pad_10FC[0x4] // 0x10FC - 0x1100
   CStrongHandle< InfoForResourceTypeCModel > m_nPreviousModelIndex; // 0x1100 - 0x1108
   GameTime_t m_grenadeParameterStashTime; // 0x1108 - 0x110C
   bool m_bGrenadeParametersStashed; // 0x110C - 0x110D
   unsigned char pad_110D[0x3] // 0x110D - 0x1110
   QAngle m_angStashedShootAngles; // 0x1110 - 0x111C
   Vector m_vecStashedGrenadeThrowPosition; // 0x111C - 0x1128
   Vector m_vecStashedVelocity; // 0x1128 - 0x1134
   QAngle m_angShootAngleHistory[2]; // 0x1134 - 0x114C
   Vector m_vecThrowPositionHistory[2]; // 0x114C - 0x1164
   Vector m_vecVelocityHistory[2]; // 0x1164 - 0x117C
   uint16_t m_nCharacterDefIndex; // 0x117C - 0x117E
   bool m_bDiedAirborne; // 0x117E - 0x117F
   unsigned char pad_117F[0x1] // 0x117F - 0x1180
   CEntityIndex m_iBombSiteIndex; // 0x1180 - 0x1184
   int32_t m_nWhichBombZone; // 0x1184 - 0x1188
   bool m_bInBombZoneTrigger; // 0x1188 - 0x1189
   bool m_bWasInBombZoneTrigger; // 0x1189 - 0x118A
   bool m_bWasInHostageRescueZone; // 0x118A - 0x118B
   bool m_bWasInBuyZone; // 0x118B - 0x118C
   bool m_bInHostageRescueZone; // 0x118C - 0x118D
   unsigned char pad_118D[0x3] // 0x118D - 0x1190
   float m_flStamina; // 0x1190 - 0x1194
   int32_t m_iDirection; // 0x1194 - 0x1198
   int32_t m_iShotsFired; // 0x1198 - 0x119C
   int32_t m_ArmorValue; // 0x119C - 0x11A0
   float m_flFlinchStack; // 0x11A0 - 0x11A4
   float m_flVelocityModifier; // 0x11A4 - 0x11A8
   float m_flGroundAccelLinearFracLastTime; // 0x11A8 - 0x11AC
   int32_t m_iHostagesKilled; // 0x11AC - 0x11B0
   Vector m_vecTotalBulletForce; // 0x11B0 - 0x11BC
   float m_flFlashDuration; // 0x11BC - 0x11C0
   float m_flFlashMaxAlpha; // 0x11C0 - 0x11C4
   float m_flProgressBarStartTime; // 0x11C4 - 0x11C8
   int32_t m_iProgressBarDuration; // 0x11C8 - 0x11CC
   bool m_bWaitForNoAttack; // 0x11CC - 0x11CD
   bool m_bIsRespawningForDMBonus; // 0x11CD - 0x11CE
   unsigned char pad_11CE[0x2] // 0x11CE - 0x11D0
   float m_flLowerBodyYawTarget; // 0x11D0 - 0x11D4
   bool m_bStrafing; // 0x11D4 - 0x11D5
   unsigned char pad_11D5[0x3] // 0x11D5 - 0x11D8
   Vector m_lastStandingPos; // 0x11D8 - 0x11E4
   float m_ignoreLadderJumpTime; // 0x11E4 - 0x11E8
   CountdownTimer m_ladderSurpressionTimer; // 0x11E8 - 0x1200
   Vector m_lastLadderNormal; // 0x1200 - 0x120C
   Vector m_lastLadderPos; // 0x120C - 0x1218
   QAngle m_thirdPersonHeading; // 0x1218 - 0x1224
   float m_flSlopeDropOffset; // 0x1224 - 0x1228
   float m_flSlopeDropHeight; // 0x1228 - 0x122C
   Vector m_vHeadConstraintOffset; // 0x122C - 0x1238
   unsigned char pad_1238[0x8] // 0x1238 - 0x1240
   int32_t m_iLastWeaponFireUsercmd; // 0x1240 - 0x1244
   QAngle m_angEyeAngles; // 0x1244 - 0x1250
   bool m_bVCollisionInitted; // 0x1250 - 0x1251
   unsigned char pad_1251[0x3] // 0x1251 - 0x1254
   Vector m_storedSpawnPosition; // 0x1254 - 0x1260
   QAngle m_storedSpawnAngle; // 0x1260 - 0x126C
   bool m_bIsSpawning; // 0x126C - 0x126D
   bool m_bHideTargetID; // 0x126D - 0x126E
   unsigned char pad_126E[0x2] // 0x126E - 0x1270
   int32_t m_nNumDangerZoneDamageHits; // 0x1270 - 0x1274
   bool m_bHud_MiniScoreHidden; // 0x1274 - 0x1275
   bool m_bHud_RadarHidden; // 0x1275 - 0x1276
   unsigned char pad_1276[0x2] // 0x1276 - 0x1278
   CEntityIndex m_nLastKillerIndex; // 0x1278 - 0x127C
   int32_t m_nLastConcurrentKilled; // 0x127C - 0x1280
   int32_t m_nDeathCamMusic; // 0x1280 - 0x1284
   int32_t m_iAddonBits; // 0x1284 - 0x1288
   int32_t m_iPrimaryAddon; // 0x1288 - 0x128C
   int32_t m_iSecondaryAddon; // 0x128C - 0x1290
   int32_t m_nTeamDamageGivenForMatch; // 0x1290 - 0x1294
   bool m_bTDGaveProtectionWarning; // 0x1294 - 0x1295
   bool m_bTDGaveProtectionWarningThisRound; // 0x1295 - 0x1296
   unsigned char pad_1296[0x2] // 0x1296 - 0x1298
   float m_applyDeafnessTime; // 0x1298 - 0x129C
   float m_flLastTHWarningTime; // 0x129C - 0x12A0
   CUtlStringToken m_currentDeafnessFilter; // 0x12A0 - 0x12A4
   unsigned char pad_12A4[0x4] // 0x12A4 - 0x12A8
   CUtlVector< CHandle< CCSPlayerPawnBase > > m_enemyPlayersKilledThisRound; // 0x12A8 - 0x12C0
   int32_t m_NumEnemiesKilledThisSpawn; // 0x12C0 - 0x12C4
   int32_t m_maxNumEnemiesKillStreak; // 0x12C4 - 0x12C8
   int32_t m_NumEnemiesKilledThisRound; // 0x12C8 - 0x12CC
   int32_t m_NumEnemiesAtRoundStart; // 0x12CC - 0x12D0
   int32_t m_iRoundsWon; // 0x12D0 - 0x12D4
   bool m_bHasUsedDMBonusRespawn; // 0x12D4 - 0x12D5
   unsigned char pad_12D5[0x3] // 0x12D5 - 0x12D8
   int32_t m_lastRoundResult; // 0x12D8 - 0x12DC
   bool m_wasNotKilledNaturally; // 0x12DC - 0x12DD
   unsigned char pad_12DD[0x3] // 0x12DD - 0x12E0
   uint32 m_vecPlayerPatchEconIndices[5]; // 0x12E0 - 0x12F4
   int32_t m_iDeathFlags; // 0x12F4 - 0x12F8
   CHandle< CChicken > m_hPet; // 0x12F8 - 0x12FC
   float m_flLastKnownAccumulatedWeaponEncumbrance; // 0x12FC - 0x1300
   float m_flLastTimeComputedAccumulatedWeaponEncumbrance; // 0x1300 - 0x1304
   unsigned char pad_1304[0x1CC] // 0x1304 - 0x14D0
   uint16_t m_unCurrentEquipmentValue; // 0x14D0 - 0x14D2
   uint16_t m_unRoundStartEquipmentValue; // 0x14D2 - 0x14D4
   uint16_t m_unFreezetimeEndEquipmentValue; // 0x14D4 - 0x14D6
   char m_szLastPlaceName[18]; // 0x14D6 - 0x14E8
   int32_t m_nSuicides; // 0x14E8 - 0x14EC
   int32_t m_nSurvivalTeamNumber; // 0x14EC - 0x14F0
   QAngle m_aimPunchAngle; // 0x14F0 - 0x14FC
   QAngle m_aimPunchAngleVel; // 0x14FC - 0x1508
   int32_t m_aimPunchTickBase; // 0x1508 - 0x150C
   float m_aimPunchTickFraction; // 0x150C - 0x1510
   CUtlVector< QAngle > m_aimPunchCache; // 0x1510 - 0x1528
   bool m_bHasDeathInfo; // 0x1528 - 0x1529
   unsigned char pad_1529[0x3] // 0x1529 - 0x152C
   float m_flDeathInfoTime; // 0x152C - 0x1530
   Vector m_vecDeathInfoOrigin; // 0x1530 - 0x153C
   bool m_bKilledByHeadshot; // 0x153C - 0x153D
   unsigned char pad_153D[0x3] // 0x153D - 0x1540
   int32_t m_LastHitBox; // 0x1540 - 0x1544
   int32_t m_LastHealth; // 0x1544 - 0x1548
   float m_flLastCollisionCeiling; // 0x1548 - 0x154C
   float m_flLastCollisionCeilingChangeTime; // 0x154C - 0x1550
   CUtlString m_strVOPrefix; // 0x1550 - 0x1558
   float m_flLandseconds; // 0x1558 - 0x155C
   unsigned char pad_155C[0x4] // 0x155C - 0x1560
   CCSBot* m_pBot; // 0x1560 - 0x1568
   bool m_bBotAllowActive; // 0x1568 - 0x1569
   bool m_bCommittingSuicideOnTeamChange; // 0x1569 - 0x156A

}; // size - 0x1570


class CContainerAnimNodeBase : public CAnimNodeBase
{
public:

   AnimNodeID m_inputNodeID; // 0x48 - 0x4C
   AnimNodeID m_outputNodeID; // 0x4C - 0x50
   CUtlHashtable< AnimNodeOutputID, CAnimNodeConnection > m_inputConnectionMap; // 0x50 - 0x70

}; // size - 0x70


class CCycleBase
{
public:

   float m_flCycle; // 0x0 - 0x4

}; // size - 0x4


class CExampleSchemaVData_PolymorphicBase
{
public:

   int32_t m_nBase; // 0x8 - 0xC

}; // size - 0x10


class CFuncBrush : public CBaseModelEntity
{
public:

   BrushSolidities_e m_iSolidity; // 0x6F0 - 0x6F4
   int32_t m_iDisabled; // 0x6F4 - 0x6F8
   bool m_bSolidBsp; // 0x6F8 - 0x6F9
   unsigned char pad_6F9[0x7] // 0x6F9 - 0x700
   CUtlSymbolLarge m_iszExcludedClass; // 0x700 - 0x708
   bool m_bInvertExclusion; // 0x708 - 0x709
   bool m_bScriptedMovement; // 0x709 - 0x70A

}; // size - 0x710


class CFuncMoveLinear : public CBaseToggle
{
public:

   MoveLinearAuthoredPos_t m_authoredPosition; // 0x770 - 0x774
   QAngle m_angMoveEntitySpace; // 0x774 - 0x780
   Vector m_vecMoveDirParentSpace; // 0x780 - 0x78C
   unsigned char pad_78C[0x4] // 0x78C - 0x790
   CUtlSymbolLarge m_soundStart; // 0x790 - 0x798
   CUtlSymbolLarge m_soundStop; // 0x798 - 0x7A0
   CUtlSymbolLarge m_currentSound; // 0x7A0 - 0x7A8
   float m_flBlockDamage; // 0x7A8 - 0x7AC
   float m_flStartPosition; // 0x7AC - 0x7B0
   float m_flMoveDistance; // 0x7B0 - 0x7B4
   unsigned char pad_7B4[0xC] // 0x7B4 - 0x7C0
   CEntityIOOutput m_OnFullyOpen; // 0x7C0 - 0x7E8
   CEntityIOOutput m_OnFullyClosed; // 0x7E8 - 0x810
   bool m_bCreateNavObstacle; // 0x810 - 0x811

}; // size - 0x820


class CGeneralSpin : public CParticleFunctionOperator
{
public:

   int32_t m_nSpinRateDegrees; // 0x1F0 - 0x1F4
   int32_t m_nSpinRateMinDegrees; // 0x1F4 - 0x1F8
   unsigned char pad_1F8[0x4] // 0x1F8 - 0x1FC
   float m_fSpinRateStopTime; // 0x1FC - 0x200

}; // size - 0x210


class CLogicalEntity : public C_BaseEntity
{
public:


}; // size - 0x538


class CMotionItem
{
public:

   CMotionParameterManager m_paramManager; // 0x28 - 0x50
   CUtlVector< CSmartPtr< CAnimTagSpan > > m_blockSpans; // 0x50 - 0x68
   CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x68 - 0x80
   CUtlVector< CSmartPtr< CAnimParamSpan > > m_paramSpans; // 0x80 - 0x98
   unsigned char pad_98[0x8] // 0x98 - 0xA0
   bool m_bLoop; // 0xA0 - 0xA1

}; // size - 0xA8


class CMotionNode
{
public:

   CUtlString m_name; // 0x18 - 0x20
   AnimNodeID m_id; // 0x20 - 0x24

}; // size - 0x28


class CParticleVecInput
{
public:

   ParticleVecType_t m_nType; // 0x0 - 0x4
   Vector m_vLiteralValue; // 0x4 - 0x10
   Color m_LiteralColor; // 0x10 - 0x14
   unsigned char pad_14[0x4] // 0x14 - 0x18
   CKV3MemberNameWithStorage m_NamedValue; // 0x18 - 0x50
   bool m_bFollowNamedValue; // 0x50 - 0x51
   unsigned char pad_51[0x3] // 0x51 - 0x54
   ParticleAttributeIndex_t m_nVectorAttribute; // 0x54 - 0x58
   Vector m_vVectorAttributeScale; // 0x58 - 0x64
   int32_t m_nControlPoint; // 0x64 - 0x68
   Vector m_vCPValueScale; // 0x68 - 0x74
   Vector m_vCPRelativePosition; // 0x74 - 0x80
   Vector m_vCPRelativeDir; // 0x80 - 0x8C
   unsigned char pad_8C[0x4] // 0x8C - 0x90
   CParticleFloatInput m_FloatComponentX; // 0x90 - 0x1C8
   CParticleFloatInput m_FloatComponentY; // 0x1C8 - 0x300
   CParticleFloatInput m_FloatComponentZ; // 0x300 - 0x438
   CParticleFloatInput m_FloatInterp; // 0x438 - 0x570
   float m_flInterpInput0; // 0x570 - 0x574
   float m_flInterpInput1; // 0x574 - 0x578
   Vector m_vInterpOutput0; // 0x578 - 0x584
   Vector m_vInterpOutput1; // 0x584 - 0x590
   CColorGradient m_Gradient; // 0x590 - 0x5A8
   Vector m_vRandomMin; // 0x5A8 - 0x5B4
   Vector m_vRandomMax; // 0x5B4 - 0x5C0

}; // size - 0x5C8


class CPathAnimMotorBase : public CAnimMotorBase
{
public:

   bool m_bLockToPath; // 0x28 - 0x29

}; // size - 0x30


class CPathAnimMotorUpdaterBase : public CAnimMotorUpdaterBase
{
public:

   bool m_bLockToPath; // 0x20 - 0x21

}; // size - 0x28


class CPhysForce : public CPointEntity
{
public:

   CUtlSymbolLarge m_nameAttach; // 0x4A8 - 0x4B0
   float m_force; // 0x4B0 - 0x4B4
   float m_forceTime; // 0x4B4 - 0x4B8
   CHandle< CBaseEntity > m_attachedObject; // 0x4B8 - 0x4BC
   bool m_wasRestored; // 0x4BC - 0x4BD
   unsigned char pad_4BD[0x3] // 0x4BD - 0x4C0
   CConstantForceController m_integrator; // 0x4C0 - 0x500

}; // size - 0x500


class CPointClientUIWorldPanel : public CBaseClientUIEntity
{
public:

   bool m_bIgnoreInput; // 0x8A0 - 0x8A1
   bool m_bLit; // 0x8A1 - 0x8A2
   bool m_bFollowPlayerAcrossTeleport; // 0x8A2 - 0x8A3
   unsigned char pad_8A3[0x1] // 0x8A3 - 0x8A4
   float m_flWidth; // 0x8A4 - 0x8A8
   float m_flHeight; // 0x8A8 - 0x8AC
   float m_flDPI; // 0x8AC - 0x8B0
   float m_flInteractDistance; // 0x8B0 - 0x8B4
   float m_flDepthOffset; // 0x8B4 - 0x8B8
   uint32_t m_unOwnerContext; // 0x8B8 - 0x8BC
   uint32_t m_unHorizontalAlign; // 0x8BC - 0x8C0
   uint32_t m_unVerticalAlign; // 0x8C0 - 0x8C4
   uint32_t m_unOrientation; // 0x8C4 - 0x8C8
   bool m_bAllowInteractionFromAllSceneWorlds; // 0x8C8 - 0x8C9
   unsigned char pad_8C9[0x7] // 0x8C9 - 0x8D0
   CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x8D0 - 0x8E8
   bool m_bOpaque; // 0x8E8 - 0x8E9
   bool m_bNoDepth; // 0x8E9 - 0x8EA
   bool m_bRenderBackface; // 0x8EA - 0x8EB
   bool m_bUseOffScreenIndicator; // 0x8EB - 0x8EC
   bool m_bExcludeFromSaveGames; // 0x8EC - 0x8ED
   bool m_bGrabbable; // 0x8ED - 0x8EE
   bool m_bOnlyRenderToTexture; // 0x8EE - 0x8EF
   bool m_bDisableMipGen; // 0x8EF - 0x8F0
   int32_t m_nExplicitImageLayout; // 0x8F0 - 0x8F4

}; // size - 0x8F8


class CProxyAnimNodeBase : public CAnimNodeBase
{
public:

   CUtlVector< CConnectionProxyItem > m_proxyItems; // 0x40 - 0x58

}; // size - 0x58


class CRagdollProp : public CBaseAnimGraph
{
public:

   ragdoll_t m_ragdoll; // 0x828 - 0x860
   bool m_bStartDisabled; // 0x860 - 0x861
   unsigned char pad_861[0x7] // 0x861 - 0x868
   CNetworkUtlVectorBase< Vector > m_ragPos; // 0x868 - 0x880
   CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0x880 - 0x898
   CHandle< CBaseEntity > m_hRagdollSource; // 0x898 - 0x89C
   uint32_t m_lastUpdateTickCount; // 0x89C - 0x8A0
   bool m_allAsleep; // 0x8A0 - 0x8A1
   bool m_bFirstCollisionAfterLaunch; // 0x8A1 - 0x8A2
   unsigned char pad_8A2[0x2] // 0x8A2 - 0x8A4
   CHandle< CBaseEntity > m_hDamageEntity; // 0x8A4 - 0x8A8
   CHandle< CBaseEntity > m_hKiller; // 0x8A8 - 0x8AC
   CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x8AC - 0x8B0
   GameTime_t m_flLastPhysicsInfluenceTime; // 0x8B0 - 0x8B4
   GameTime_t m_flFadeOutStartTime; // 0x8B4 - 0x8B8
   float m_flFadeTime; // 0x8B8 - 0x8BC
   Vector m_vecLastOrigin; // 0x8BC - 0x8C8
   GameTime_t m_flAwakeTime; // 0x8C8 - 0x8CC
   GameTime_t m_flLastOriginChangeTime; // 0x8CC - 0x8D0
   int32_t m_nBloodColor; // 0x8D0 - 0x8D4
   unsigned char pad_8D4[0x4] // 0x8D4 - 0x8D8
   CUtlSymbolLarge m_strOriginClassName; // 0x8D8 - 0x8E0
   CUtlSymbolLarge m_strSourceClassName; // 0x8E0 - 0x8E8
   bool m_bHasBeenPhysgunned; // 0x8E8 - 0x8E9
   bool m_bShouldTeleportPhysics; // 0x8E9 - 0x8EA
   unsigned char pad_8EA[0x2] // 0x8EA - 0x8EC
   float m_flBlendWeight; // 0x8EC - 0x8F0
   float m_flDefaultFadeScale; // 0x8F0 - 0x8F4
   unsigned char pad_8F4[0x4] // 0x8F4 - 0x8F8
   CUtlVector< Vector > m_ragdollMins; // 0x8F8 - 0x910
   CUtlVector< Vector > m_ragdollMaxs; // 0x910 - 0x928
   bool m_bShouldDeleteActivationRecord; // 0x928 - 0x929
   unsigned char pad_929[0x5F] // 0x929 - 0x988
   bool m_bValidatePoweredRagdollPose; // 0x988 - 0x989

}; // size - 0x9C8


class CSSDSMsg_LayerBase
{
public:

   SceneViewId_t m_viewId; // 0x0 - 0x10
   CUtlString m_ViewName; // 0x10 - 0x18
   int32_t m_nLayerIndex; // 0x18 - 0x1C
   unsigned char pad_1C[0x4] // 0x1C - 0x20
   uint64_t m_nLayerId; // 0x20 - 0x28
   CUtlString m_LayerName; // 0x28 - 0x30
   CUtlString m_displayText; // 0x30 - 0x38

}; // size - 0x38


class CSceneEntity : public CPointEntity
{
public:

   CUtlSymbolLarge m_iszSceneFile; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_iszResumeSceneFile; // 0x4B0 - 0x4B8
   CUtlSymbolLarge m_iszTarget1; // 0x4B8 - 0x4C0
   CUtlSymbolLarge m_iszTarget2; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_iszTarget3; // 0x4C8 - 0x4D0
   CUtlSymbolLarge m_iszTarget4; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_iszTarget5; // 0x4D8 - 0x4E0
   CUtlSymbolLarge m_iszTarget6; // 0x4E0 - 0x4E8
   CUtlSymbolLarge m_iszTarget7; // 0x4E8 - 0x4F0
   CUtlSymbolLarge m_iszTarget8; // 0x4F0 - 0x4F8
   CHandle< CBaseEntity > m_hTarget1; // 0x4F8 - 0x4FC
   CHandle< CBaseEntity > m_hTarget2; // 0x4FC - 0x500
   CHandle< CBaseEntity > m_hTarget3; // 0x500 - 0x504
   CHandle< CBaseEntity > m_hTarget4; // 0x504 - 0x508
   CHandle< CBaseEntity > m_hTarget5; // 0x508 - 0x50C
   CHandle< CBaseEntity > m_hTarget6; // 0x50C - 0x510
   CHandle< CBaseEntity > m_hTarget7; // 0x510 - 0x514
   CHandle< CBaseEntity > m_hTarget8; // 0x514 - 0x518
   bool m_bIsPlayingBack; // 0x518 - 0x519
   bool m_bPaused; // 0x519 - 0x51A
   bool m_bMultiplayer; // 0x51A - 0x51B
   bool m_bAutogenerated; // 0x51B - 0x51C
   float m_flForceClientTime; // 0x51C - 0x520
   float m_flCurrentTime; // 0x520 - 0x524
   float m_flFrameTime; // 0x524 - 0x528
   bool m_bCancelAtNextInterrupt; // 0x528 - 0x529
   unsigned char pad_529[0x3] // 0x529 - 0x52C
   float m_fPitch; // 0x52C - 0x530
   bool m_bAutomated; // 0x530 - 0x531
   unsigned char pad_531[0x3] // 0x531 - 0x534
   int32_t m_nAutomatedAction; // 0x534 - 0x538
   float m_flAutomationDelay; // 0x538 - 0x53C
   float m_flAutomationTime; // 0x53C - 0x540
   CHandle< CBaseEntity > m_hWaitingForThisResumeScene; // 0x540 - 0x544
   bool m_bWaitingForResumeScene; // 0x544 - 0x545
   bool m_bPausedViaInput; // 0x545 - 0x546
   bool m_bPauseAtNextInterrupt; // 0x546 - 0x547
   bool m_bWaitingForActor; // 0x547 - 0x548
   bool m_bWaitingForInterrupt; // 0x548 - 0x549
   bool m_bInterruptedActorsScenes; // 0x549 - 0x54A
   bool m_bBreakOnNonIdle; // 0x54A - 0x54B
   unsigned char pad_54B[0x5] // 0x54B - 0x550
   CNetworkUtlVectorBase< CHandle< CBaseFlex > > m_hActorList; // 0x550 - 0x568
   CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList; // 0x568 - 0x580
   unsigned char pad_580[0x10] // 0x580 - 0x590
   int32_t m_nSceneFlushCounter; // 0x590 - 0x594
   uint16_t m_nSceneStringIndex; // 0x594 - 0x596
   unsigned char pad_596[0x2] // 0x596 - 0x598
   CEntityIOOutput m_OnStart; // 0x598 - 0x5C0
   CEntityIOOutput m_OnCompletion; // 0x5C0 - 0x5E8
   CEntityIOOutput m_OnCanceled; // 0x5E8 - 0x610
   CEntityIOOutput m_OnPaused; // 0x610 - 0x638
   CEntityIOOutput m_OnResumed; // 0x638 - 0x660
   CEntityIOOutput m_OnTrigger[16]; // 0x660 - 0x8E0
   unsigned char pad_8E0[0x90] // 0x8E0 - 0x970
   CHandle< CSceneEntity > m_hInterruptScene; // 0x970 - 0x974
   int32_t m_nInterruptCount; // 0x974 - 0x978
   bool m_bSceneMissing; // 0x978 - 0x979
   bool m_bInterrupted; // 0x979 - 0x97A
   bool m_bCompletedEarly; // 0x97A - 0x97B
   bool m_bInterruptSceneFinished; // 0x97B - 0x97C
   bool m_bRestoring; // 0x97C - 0x97D
   unsigned char pad_97D[0x3] // 0x97D - 0x980
   CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion; // 0x980 - 0x998
   CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x998 - 0x9B0
   unsigned char pad_9B0[0x28] // 0x9B0 - 0x9D8
   CUtlSymbolLarge m_iszSoundName; // 0x9D8 - 0x9E0
   CHandle< CBaseFlex > m_hActor; // 0x9E0 - 0x9E4
   CHandle< CBaseEntity > m_hActivator; // 0x9E4 - 0x9E8
   CHandle< CBaseEntity > m_hCamera; // 0x9E8 - 0x9EC
   int32_t m_BusyActor; // 0x9EC - 0x9F0
   SceneOnPlayerDeath_t m_iPlayerDeathBehavior; // 0x9F0 - 0x9F4

}; // size - 0xA00


class CServerOnlyModelEntity : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CSkeletonAnimationController
{
public:

   CSkeletonInstance* m_pSkeletonInstance; // 0x8 - 0x10

}; // size - 0x10


class CSosGroupActionSchema
{
public:

   CUtlString m_name; // 0x8 - 0x10
   ActionType_t m_actionType; // 0x10 - 0x14
   ActionType_t m_actionInstanceType; // 0x14 - 0x18

}; // size - 0x18


class CSoundAreaEntityBase : public CBaseEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x7] // 0x4A1 - 0x4A8
   CUtlSymbolLarge m_iszSoundAreaType; // 0x4A8 - 0x4B0
   Vector m_vPos; // 0x4B0 - 0x4BC

}; // size - 0x4C0


class CTriggerHurt : public CBaseTrigger
{
public:

   float m_flOriginalDamage; // 0x898 - 0x89C
   float m_flDamage; // 0x89C - 0x8A0
   float m_flDamageCap; // 0x8A0 - 0x8A4
   GameTime_t m_flLastDmgTime; // 0x8A4 - 0x8A8
   float m_flForgivenessDelay; // 0x8A8 - 0x8AC
   int32_t m_bitsDamageInflict; // 0x8AC - 0x8B0
   int32_t m_damageModel; // 0x8B0 - 0x8B4
   bool m_bNoDmgForce; // 0x8B4 - 0x8B5
   unsigned char pad_8B5[0x3] // 0x8B5 - 0x8B8
   Vector m_vDamageForce; // 0x8B8 - 0x8C4
   bool m_thinkAlways; // 0x8C4 - 0x8C5
   unsigned char pad_8C5[0x3] // 0x8C5 - 0x8C8
   float m_hurtThinkPeriod; // 0x8C8 - 0x8CC
   unsigned char pad_8CC[0x4] // 0x8CC - 0x8D0
   CEntityIOOutput m_OnHurt; // 0x8D0 - 0x8F8
   CEntityIOOutput m_OnHurtPlayer; // 0x8F8 - 0x920
   CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x920 - 0x938

}; // size - 0x938


class CTriggerOnce : public CTriggerMultiple
{
public:


}; // size - 0x8C0


class C_BarnLight : public C_BaseModelEntity
{
public:

   bool m_bEnabled; // 0x838 - 0x839
   unsigned char pad_839[0x3] // 0x839 - 0x83C
   int32_t m_nColorMode; // 0x83C - 0x840
   Color m_Color; // 0x840 - 0x844
   float m_flColorTemperature; // 0x844 - 0x848
   float m_flBrightness; // 0x848 - 0x84C
   float m_flBrightnessScale; // 0x84C - 0x850
   int32_t m_nDirectLight; // 0x850 - 0x854
   int32_t m_nBakedShadowIndex; // 0x854 - 0x858
   int32_t m_nLuminaireShape; // 0x858 - 0x85C
   float m_flLuminaireSize; // 0x85C - 0x860
   float m_flLuminaireAnisotropy; // 0x860 - 0x864
   unsigned char pad_864[0x4] // 0x864 - 0x868
   CUtlString m_LightStyleString; // 0x868 - 0x870
   GameTime_t m_flLightStyleStartTime; // 0x870 - 0x874
   unsigned char pad_874[0x4] // 0x874 - 0x878
   C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x878 - 0x890
   C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x890 - 0x8A8
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // 0x8A8 - 0x8C0
   CEntityIOOutput m_StyleEvent[4]; // 0x8C0 - 0x960
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x960 - 0x968
   float m_flShape; // 0x968 - 0x96C
   float m_flSoftX; // 0x96C - 0x970
   float m_flSoftY; // 0x970 - 0x974
   float m_flSkirt; // 0x974 - 0x978
   float m_flSkirtNear; // 0x978 - 0x97C
   Vector m_vSizeParams; // 0x97C - 0x988
   float m_flRange; // 0x988 - 0x98C
   Vector m_vShear; // 0x98C - 0x998
   int32_t m_nBakeSpecularToCubemaps; // 0x998 - 0x99C
   Vector m_vBakeSpecularToCubemapsSize; // 0x99C - 0x9A8
   int32_t m_nCastShadows; // 0x9A8 - 0x9AC
   int32_t m_nShadowMapSize; // 0x9AC - 0x9B0
   int32_t m_nShadowPriority; // 0x9B0 - 0x9B4
   bool m_bContactShadow; // 0x9B4 - 0x9B5
   unsigned char pad_9B5[0x3] // 0x9B5 - 0x9B8
   int32_t m_nBounceLight; // 0x9B8 - 0x9BC
   float m_flBounceScale; // 0x9BC - 0x9C0
   float m_flMinRoughness; // 0x9C0 - 0x9C4
   int32_t m_nFog; // 0x9C4 - 0x9C8
   float m_flFogStrength; // 0x9C8 - 0x9CC
   int32_t m_nFogShadows; // 0x9CC - 0x9D0
   float m_flFogScale; // 0x9D0 - 0x9D4
   float m_flFadeSizeStart; // 0x9D4 - 0x9D8
   float m_flFadeSizeEnd; // 0x9D8 - 0x9DC
   float m_flShadowFadeSizeStart; // 0x9DC - 0x9E0
   float m_flShadowFadeSizeEnd; // 0x9E0 - 0x9E4
   bool m_bPrecomputedFieldsValid; // 0x9E4 - 0x9E5
   unsigned char pad_9E5[0x3] // 0x9E5 - 0x9E8
   Vector m_vPrecomputedBoundsMins; // 0x9E8 - 0x9F4
   Vector m_vPrecomputedBoundsMaxs; // 0x9F4 - 0xA00
   Vector m_vPrecomputedOBBOrigin; // 0xA00 - 0xA0C
   QAngle m_vPrecomputedOBBAngles; // 0xA0C - 0xA18
   Vector m_vPrecomputedOBBExtent; // 0xA18 - 0xA24

}; // size - 0xA70


class C_CSGO_EndOfMatchLineupEndpoint : public C_BaseEntity
{
public:


}; // size - 0x538


class C_CSGO_PreviewPlayer : public C_CSPlayerPawn
{
public:

   CUtlString m_animgraph; // 0x19A8 - 0x19B0
   CUtlString m_animgraphCharacterModeString; // 0x19B0 - 0x19B8
   float m_flInitialModelScale; // 0x19B8 - 0x19BC

}; // size - 0x1A30


class C_CSGO_TeamIntroCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:


}; // size - 0x9D0


class C_CSGO_TeamSelectCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:


}; // size - 0x9D0


class C_FuncBrush : public C_BaseModelEntity
{
public:


}; // size - 0x838


class C_Item : public C_EconEntity
{
public:

   bool m_bShouldGlow; // 0x1070 - 0x1071
   char m_pReticleHintTextName[256]; // 0x1071 - 0x1171

}; // size - 0x1178


class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator
{
public:

   int32_t m_nCP0; // 0x1F0 - 0x1F4
   int32_t m_nCP1; // 0x1F4 - 0x1F8
   float m_flMinInputValue; // 0x1F8 - 0x1FC
   float m_flMaxInputValue; // 0x1FC - 0x200
   bool m_bInfiniteLine; // 0x200 - 0x201

}; // size - 0x210


class C_ParticleSystem : public C_BaseModelEntity
{
public:

   char m_szSnapshotFileName[512]; // 0x838 - 0xA38
   bool m_bActive; // 0xA38 - 0xA39
   bool m_bFrozen; // 0xA39 - 0xA3A
   unsigned char pad_A3A[0x2] // 0xA3A - 0xA3C
   float m_flFreezeTransitionDuration; // 0xA3C - 0xA40
   int32_t m_nStopType; // 0xA40 - 0xA44
   bool m_bAnimateDuringGameplayPause; // 0xA44 - 0xA45
   unsigned char pad_A45[0x3] // 0xA45 - 0xA48
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xA48 - 0xA50
   GameTime_t m_flStartTime; // 0xA50 - 0xA54
   float m_flPreSimTime; // 0xA54 - 0xA58
   Vector m_vServerControlPoints[4]; // 0xA58 - 0xA88
   uint8 m_iServerControlPointAssignments[4]; // 0xA88 - 0xA8C
   CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xA8C - 0xB8C
   bool m_bNoSave; // 0xB8C - 0xB8D
   bool m_bNoFreeze; // 0xB8D - 0xB8E
   bool m_bStartActive; // 0xB8E - 0xB8F
   unsigned char pad_B8F[0x1] // 0xB8F - 0xB90
   CUtlSymbolLarge m_iszEffectName; // 0xB90 - 0xB98
   CUtlSymbolLarge m_iszControlPointNames[64]; // 0xB98 - 0xD98
   int32_t m_nDataCP; // 0xD98 - 0xD9C
   Vector m_vecDataCPValue; // 0xD9C - 0xDA8
   int32_t m_nTintCP; // 0xDA8 - 0xDAC
   Color m_clrTint; // 0xDAC - 0xDB0
   unsigned char pad_DB0[0x20] // 0xDB0 - 0xDD0
   bool m_bOldActive; // 0xDD0 - 0xDD1
   bool m_bOldFrozen; // 0xDD1 - 0xDD2

}; // size - 0xDE8


class C_SoundAreaEntityBase : public C_BaseEntity
{
public:

   bool m_bDisabled; // 0x538 - 0x539
   unsigned char pad_539[0x7] // 0x539 - 0x540
   bool m_bWasEnabled; // 0x540 - 0x541
   unsigned char pad_541[0x7] // 0x541 - 0x548
   CUtlSymbolLarge m_iszSoundAreaType; // 0x548 - 0x550
   Vector m_vPos; // 0x550 - 0x55C

}; // size - 0x560


class EventAdvanceTick_t : public EventSimulate_t
{
public:

   int32_t m_nCurrentTick; // 0x30 - 0x34
   int32_t m_nCurrentTickThisFrame; // 0x34 - 0x38
   int32_t m_nTotalTicksThisFrame; // 0x38 - 0x3C
   int32_t m_nTotalTicks; // 0x3C - 0x40

}; // size - 0x40


class EventPostAdvanceTick_t : public EventSimulate_t
{
public:

   int32_t m_nCurrentTick; // 0x30 - 0x34
   int32_t m_nCurrentTickThisFrame; // 0x34 - 0x38
   int32_t m_nTotalTicksThisFrame; // 0x38 - 0x3C
   int32_t m_nTotalTicks; // 0x3C - 0x40

}; // size - 0x40


class IEconItemInterface
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class AmmoTypeInfo_t
{
public:

   int32_t m_nMaxCarry; // 0x10 - 0x14
   unsigned char pad_14[0x8] // 0x14 - 0x1C
   CRangeInt m_nSplashSize; // 0x1C - 0x24
   AmmoFlags_t m_nFlags; // 0x24 - 0x28
   float m_flMass; // 0x28 - 0x2C
   CRangeFloat m_flSpeed; // 0x2C - 0x34

}; // size - 0x38


class AnimationSnapshotBase_t
{
public:

   float m_flRealTime; // 0x0 - 0x4
   unsigned char pad_4[0xC] // 0x4 - 0x10
   matrix3x4a_t m_rootToWorld; // 0x10 - 0x40
   bool m_bBonesInWorldSpace; // 0x40 - 0x41
   unsigned char pad_41[0x7] // 0x41 - 0x48
   CUtlVector< uint32 > m_boneSetupMask; // 0x48 - 0x60
   CUtlVector< matrix3x4a_t > m_boneTransforms; // 0x60 - 0x78
   CUtlVector< float32 > m_flexControllers; // 0x78 - 0x90
   AnimationSnapshotType_t m_SnapshotType; // 0x90 - 0x94
   bool m_bHasDecodeDump; // 0x94 - 0x95
   unsigned char pad_95[0x3] // 0x95 - 0x98
   AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98 - 0x108

}; // size - 0x110


class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:

   ResponseFollowup* m_pPostponedFollowup; // 0x60 - 0x68

}; // size - 0x70


class CAnimGraphSettingsGroup
{
public:


}; // size - 0x20


class CAnimNodeManager
{
public:

   CUtlHashtable< AnimNodeID, CSmartPtr< CAnimNodeBase > > m_nodes; // 0x8 - 0x28

}; // size - 0x48


class CAnimationSubGraph
{
public:

   CAnimNodeManager m_nodeManager; // 0x8 - 0x50
   CAnimComponentManager m_componentManager; // 0x50 - 0x78
   CUtlVector< CSmartPtr< CAnimParameterBase > > m_localParameters; // 0x78 - 0x90
   CUtlVector< CSmartPtr< CAnimTagBase > > m_localTags; // 0x90 - 0xA8
   CUtlVector< CUtlString > m_referencedParamGroups; // 0xA8 - 0xC0
   CUtlVector< CUtlString > m_referencedTagGroups; // 0xC0 - 0xD8

}; // size - 0xE0


class CAttributeManager
{
public:

   class cached_attribute_float_t
   {
   public:

      float flIn; // 0x0 - 0x4
      unsigned char pad_4[0x4] // 0x4 - 0x8
      CUtlSymbolLarge iAttribHook; // 0x8 - 0x10
      float flOut; // 0x10 - 0x14

   }; // size - 0x18

   class cached_attribute_float_t
   {
   public:

      float flIn; // 0x0 - 0x4
      unsigned char pad_4[0x4] // 0x4 - 0x8
      CUtlSymbolLarge iAttribHook; // 0x8 - 0x10
      float flOut; // 0x10 - 0x14

   }; // size - 0x18

   CUtlVector< CHandle< CBaseEntity > > m_Providers; // 0x8 - 0x20
   int32_t m_iReapplyProvisionParity; // 0x20 - 0x24
   CHandle< CBaseEntity > m_hOuter; // 0x24 - 0x28
   bool m_bPreventLoopback; // 0x28 - 0x29
   unsigned char pad_29[0x3] // 0x29 - 0x2C
   attributeprovidertypes_t m_ProviderType; // 0x2C - 0x30
   CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x30 - 0x48

}; // size - 0x50


class CAttributeManager
{
public:

   class cached_attribute_float_t
   {
   public:

      float flIn; // 0x0 - 0x4
      unsigned char pad_4[0x4] // 0x4 - 0x8
      CUtlSymbolLarge iAttribHook; // 0x8 - 0x10
      float flOut; // 0x10 - 0x14

   }; // size - 0x18

   class cached_attribute_float_t
   {
   public:

      float flIn; // 0x0 - 0x4
      unsigned char pad_4[0x4] // 0x4 - 0x8
      CUtlSymbolLarge iAttribHook; // 0x8 - 0x10
      float flOut; // 0x10 - 0x14

   }; // size - 0x18

   CUtlVector< CHandle< C_BaseEntity > > m_Providers; // 0x8 - 0x20
   int32_t m_iReapplyProvisionParity; // 0x20 - 0x24
   CHandle< C_BaseEntity > m_hOuter; // 0x24 - 0x28
   bool m_bPreventLoopback; // 0x28 - 0x29
   unsigned char pad_29[0x3] // 0x29 - 0x2C
   attributeprovidertypes_t m_ProviderType; // 0x2C - 0x30
   CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x30 - 0x48

}; // size - 0x50


class CBaseFire : public CBaseEntity
{
public:

   float m_flScale; // 0x4A0 - 0x4A4
   float m_flStartScale; // 0x4A4 - 0x4A8
   float m_flScaleTime; // 0x4A8 - 0x4AC
   uint32_t m_nFlags; // 0x4AC - 0x4B0

}; // size - 0x4B0


class CBasePlayerController : public C_BaseEntity
{
public:

   int32_t m_nFinalPredictedTick; // 0x540 - 0x544
   unsigned char pad_544[0x4] // 0x544 - 0x548
   C_CommandContext m_CommandContext; // 0x548 - 0x5C8
   uint64_t m_nInButtonsWhichAreToggles; // 0x5C8 - 0x5D0
   uint32_t m_nTickBase; // 0x5D0 - 0x5D4
   CHandle< C_BasePlayerPawn > m_hPawn; // 0x5D4 - 0x5D8
   CHandle< C_BasePlayerPawn > m_hPredictedPawn; // 0x5D8 - 0x5DC
   CSplitScreenSlot m_nSplitScreenSlot; // 0x5DC - 0x5E0
   CHandle< CBasePlayerController > m_hSplitOwner; // 0x5E0 - 0x5E4
   unsigned char pad_5E4[0x4] // 0x5E4 - 0x5E8
   CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x5E8 - 0x600
   bool m_bIsHLTV; // 0x600 - 0x601
   unsigned char pad_601[0x3] // 0x601 - 0x604
   PlayerConnectedState m_iConnected; // 0x604 - 0x608
   char m_iszPlayerName[128]; // 0x608 - 0x688
   unsigned char pad_688[0x8] // 0x688 - 0x690
   uint64_t m_steamID; // 0x690 - 0x698
   bool m_bIsLocalPlayerController; // 0x698 - 0x699
   unsigned char pad_699[0x3] // 0x699 - 0x69C
   uint32_t m_iDesiredFOV; // 0x69C - 0x6A0

}; // size - 0x6A0


class CBasePlayerController : public CBaseEntity
{
public:

   uint64_t m_nInButtonsWhichAreToggles; // 0x4A8 - 0x4B0
   uint32_t m_nTickBase; // 0x4B0 - 0x4B4
   unsigned char pad_4B4[0x2C] // 0x4B4 - 0x4E0
   CHandle< CBasePlayerPawn > m_hPawn; // 0x4E0 - 0x4E4
   CSplitScreenSlot m_nSplitScreenSlot; // 0x4E4 - 0x4E8
   CHandle< CBasePlayerController > m_hSplitOwner; // 0x4E8 - 0x4EC
   unsigned char pad_4EC[0x4] // 0x4EC - 0x4F0
   CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x4F0 - 0x508
   bool m_bIsHLTV; // 0x508 - 0x509
   unsigned char pad_509[0x3] // 0x509 - 0x50C
   PlayerConnectedState m_iConnected; // 0x50C - 0x510
   char m_iszPlayerName[128]; // 0x510 - 0x590
   CUtlString m_szNetworkIDString; // 0x590 - 0x598
   float m_fLerpTime; // 0x598 - 0x59C
   bool m_bLagCompensation; // 0x59C - 0x59D
   bool m_bPredict; // 0x59D - 0x59E
   bool m_bAutoKickDisabled; // 0x59E - 0x59F
   bool m_bIsLowViolence; // 0x59F - 0x5A0
   bool m_bGamePaused; // 0x5A0 - 0x5A1
   unsigned char pad_5A1[0x77] // 0x5A1 - 0x618
   int32_t m_nHighestCommandNumberReceived; // 0x618 - 0x61C
   unsigned char pad_61C[0x4] // 0x61C - 0x620
   int64_t m_nUsecTimestampLastUserCmdReceived; // 0x620 - 0x628
   unsigned char pad_628[0x10] // 0x628 - 0x638
   ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x638 - 0x63C
   float m_flLastPlayerTalkTime; // 0x63C - 0x640
   float m_flLastEntitySteadyState; // 0x640 - 0x644
   int32_t m_nAvailableEntitySteadyState; // 0x644 - 0x648
   bool m_bHasAnySteadyStateEnts; // 0x648 - 0x649
   unsigned char pad_649[0xF] // 0x649 - 0x658
   uint64_t m_steamID; // 0x658 - 0x660
   uint32_t m_iDesiredFOV; // 0x660 - 0x664

}; // size - 0x668


class CBasePlayerWeaponVData : public CEntitySubclassVDataBase
{
public:

   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x28 - 0x108
   bool m_bBuiltRightHanded; // 0x108 - 0x109
   bool m_bAllowFlipping; // 0x109 - 0x10A
   bool m_bIsFullAuto; // 0x10A - 0x10B
   unsigned char pad_10B[0x1] // 0x10B - 0x10C
   int32_t m_nNumBullets; // 0x10C - 0x110
   CUtlString m_sMuzzleAttachment; // 0x110 - 0x118
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x118 - 0x1F8
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0x1F8 - 0x2D8
   ItemFlagTypes_t m_iFlags; // 0x2D8 - 0x2D9
   AmmoIndex_t m_nPrimaryAmmoType; // 0x2D9 - 0x2DA
   AmmoIndex_t m_nSecondaryAmmoType; // 0x2DA - 0x2DB
   unsigned char pad_2DB[0x1] // 0x2DB - 0x2DC
   int32_t m_iMaxClip1; // 0x2DC - 0x2E0
   int32_t m_iMaxClip2; // 0x2E0 - 0x2E4
   int32_t m_iDefaultClip1; // 0x2E4 - 0x2E8
   int32_t m_iDefaultClip2; // 0x2E8 - 0x2EC
   int32_t m_iWeight; // 0x2EC - 0x2F0
   bool m_bAutoSwitchTo; // 0x2F0 - 0x2F1
   bool m_bAutoSwitchFrom; // 0x2F1 - 0x2F2
   unsigned char pad_2F2[0x2] // 0x2F2 - 0x2F4
   RumbleEffect_t m_iRumbleEffect; // 0x2F4 - 0x2F8
   CUtlMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x2F8 - 0x318
   int32_t m_iSlot; // 0x318 - 0x31C
   int32_t m_iPosition; // 0x31C - 0x320

}; // size - 0x320


class CBasePlayerWeaponVData : public CEntitySubclassVDataBase
{
public:

   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x28 - 0x108
   bool m_bBuiltRightHanded; // 0x108 - 0x109
   bool m_bAllowFlipping; // 0x109 - 0x10A
   bool m_bIsFullAuto; // 0x10A - 0x10B
   unsigned char pad_10B[0x1] // 0x10B - 0x10C
   int32_t m_nNumBullets; // 0x10C - 0x110
   CUtlString m_sMuzzleAttachment; // 0x110 - 0x118
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x118 - 0x1F8
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0x1F8 - 0x2D8
   ItemFlagTypes_t m_iFlags; // 0x2D8 - 0x2D9
   AmmoIndex_t m_nPrimaryAmmoType; // 0x2D9 - 0x2DA
   AmmoIndex_t m_nSecondaryAmmoType; // 0x2DA - 0x2DB
   unsigned char pad_2DB[0x1] // 0x2DB - 0x2DC
   int32_t m_iMaxClip1; // 0x2DC - 0x2E0
   int32_t m_iMaxClip2; // 0x2E0 - 0x2E4
   int32_t m_iDefaultClip1; // 0x2E4 - 0x2E8
   int32_t m_iDefaultClip2; // 0x2E8 - 0x2EC
   int32_t m_iWeight; // 0x2EC - 0x2F0
   bool m_bAutoSwitchTo; // 0x2F0 - 0x2F1
   bool m_bAutoSwitchFrom; // 0x2F1 - 0x2F2
   unsigned char pad_2F2[0x2] // 0x2F2 - 0x2F4
   RumbleEffect_t m_iRumbleEffect; // 0x2F4 - 0x2F8
   CUtlMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x2F8 - 0x318
   int32_t m_iSlot; // 0x318 - 0x31C
   int32_t m_iPosition; // 0x31C - 0x320

}; // size - 0x320


class CBaseTrailRenderer : public CBaseRendererSource2
{
public:

   ParticleOrientationChoiceList_t m_nOrientationType; // 0x2050 - 0x2054
   int32_t m_nOrientationControlPoint; // 0x2054 - 0x2058
   float m_flMinSize; // 0x2058 - 0x205C
   float m_flMaxSize; // 0x205C - 0x2060
   CParticleCollectionFloatInput m_flStartFadeSize; // 0x2060 - 0x2198
   CParticleCollectionFloatInput m_flEndFadeSize; // 0x2198 - 0x22D0
   bool m_bClampV; // 0x22D0 - 0x22D1

}; // size - 0x22E0


class CBot
{
public:

   CCSPlayerPawnBase* m_pPlayer; // 0x10 - 0x18
   bool m_bHasSpawned; // 0x18 - 0x19
   unsigned char pad_19[0x3] // 0x19 - 0x1C
   uint32_t m_id; // 0x1C - 0x20
   unsigned char pad_20[0x70] // 0x20 - 0x90
   bool m_isRunning; // 0x90 - 0x91
   bool m_isCrouching; // 0x91 - 0x92
   unsigned char pad_92[0x2] // 0x92 - 0x94
   float m_forwardSpeed; // 0x94 - 0x98
   float m_leftSpeed; // 0x98 - 0x9C
   float m_verticalSpeed; // 0x9C - 0xA0
   uint64_t m_buttonFlags; // 0xA0 - 0xA8
   float m_jumpTimestamp; // 0xA8 - 0xAC
   Vector m_viewForward; // 0xAC - 0xB8
   unsigned char pad_B8[0x10] // 0xB8 - 0xC8
   int32_t m_postureStackIndex; // 0xC8 - 0xCC

}; // size - 0xD0


class CBtNodeCondition : public CBtNodeDecorator
{
public:

   bool m_bNegated; // 0x58 - 0x59

}; // size - 0x60


class CEnvCubemap : public CBaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x590 - 0x598
   bool m_bCustomCubemapTexture; // 0x598 - 0x599
   unsigned char pad_599[0x3] // 0x599 - 0x59C
   float m_flInfluenceRadius; // 0x59C - 0x5A0
   Vector m_vBoxProjectMins; // 0x5A0 - 0x5AC
   Vector m_vBoxProjectMaxs; // 0x5AC - 0x5B8
   CUtlSymbolLarge m_LightGroups; // 0x5B8 - 0x5C0
   bool m_bMoveable; // 0x5C0 - 0x5C1
   unsigned char pad_5C1[0x3] // 0x5C1 - 0x5C4
   int32_t m_nHandshake; // 0x5C4 - 0x5C8
   int32_t m_nEnvCubeMapArrayIndex; // 0x5C8 - 0x5CC
   int32_t m_nPriority; // 0x5CC - 0x5D0
   float m_flEdgeFadeDist; // 0x5D0 - 0x5D4
   Vector m_vEdgeFadeDists; // 0x5D4 - 0x5E0
   float m_flDiffuseScale; // 0x5E0 - 0x5E4
   bool m_bStartDisabled; // 0x5E4 - 0x5E5
   bool m_bDefaultEnvMap; // 0x5E5 - 0x5E6
   bool m_bDefaultSpecEnvMap; // 0x5E6 - 0x5E7
   bool m_bIndoorCubeMap; // 0x5E7 - 0x5E8
   bool m_bCopyDiffuseFromDefaultCubemap; // 0x5E8 - 0x5E9
   unsigned char pad_5E9[0xF] // 0x5E9 - 0x5F8
   bool m_bEnabled; // 0x5F8 - 0x5F9

}; // size - 0x600


class CEnvSoundscapeProxy : public CEnvSoundscape
{
public:

   CUtlSymbolLarge m_MainSoundscapeName; // 0x538 - 0x540

}; // size - 0x540


class CEnvSoundscapeTriggerable : public CEnvSoundscape
{
public:


}; // size - 0x538


class CFuncLadder : public CBaseModelEntity
{
public:

   Vector m_vecLadderDir; // 0x6F0 - 0x6FC
   unsigned char pad_6FC[0x4] // 0x6FC - 0x700
   CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x700 - 0x718
   Vector m_vecLocalTop; // 0x718 - 0x724
   Vector m_vecPlayerMountPositionTop; // 0x724 - 0x730
   Vector m_vecPlayerMountPositionBottom; // 0x730 - 0x73C
   float m_flAutoRideSpeed; // 0x73C - 0x740
   bool m_bDisabled; // 0x740 - 0x741
   bool m_bFakeLadder; // 0x741 - 0x742
   bool m_bHasSlack; // 0x742 - 0x743
   unsigned char pad_743[0x5] // 0x743 - 0x748
   CUtlSymbolLarge m_surfacePropName; // 0x748 - 0x750
   CEntityIOOutput m_OnPlayerGotOnLadder; // 0x750 - 0x778
   CEntityIOOutput m_OnPlayerGotOffLadder; // 0x778 - 0x7A0

}; // size - 0x7A0


class CFuncNavBlocker : public CBaseModelEntity
{
public:

   bool m_bDisabled; // 0x6F0 - 0x6F1
   unsigned char pad_6F1[0x3] // 0x6F1 - 0x6F4
   int32_t m_nBlockedTeamNumber; // 0x6F4 - 0x6F8

}; // size - 0x700


class CFuncTrackChange : public CFuncPlatRot
{
public:

   CPathTrack* m_trackTop; // 0x7B8 - 0x7C0
   CPathTrack* m_trackBottom; // 0x7C0 - 0x7C8
   CFuncTrackTrain* m_train; // 0x7C8 - 0x7D0
   CUtlSymbolLarge m_trackTopName; // 0x7D0 - 0x7D8
   CUtlSymbolLarge m_trackBottomName; // 0x7D8 - 0x7E0
   CUtlSymbolLarge m_trainName; // 0x7E0 - 0x7E8
   TRAIN_CODE m_code; // 0x7E8 - 0x7EC
   int32_t m_targetState; // 0x7EC - 0x7F0
   int32_t m_use; // 0x7F0 - 0x7F4

}; // size - 0x7F8


class CFuncTrackTrain : public CBaseModelEntity
{
public:

   CHandle< CPathTrack > m_ppath; // 0x6F0 - 0x6F4
   float m_length; // 0x6F4 - 0x6F8
   Vector m_controlMins; // 0x6F8 - 0x704
   Vector m_controlMaxs; // 0x704 - 0x710
   Vector m_lastBlockPos; // 0x710 - 0x71C
   int32_t m_lastBlockTick; // 0x71C - 0x720
   float m_flVolume; // 0x720 - 0x724
   float m_flBank; // 0x724 - 0x728
   float m_oldSpeed; // 0x728 - 0x72C
   float m_flBlockDamage; // 0x72C - 0x730
   float m_height; // 0x730 - 0x734
   float m_maxSpeed; // 0x734 - 0x738
   float m_dir; // 0x738 - 0x73C
   unsigned char pad_73C[0x4] // 0x73C - 0x740
   CUtlSymbolLarge m_iszSoundMove; // 0x740 - 0x748
   CUtlSymbolLarge m_iszSoundMovePing; // 0x748 - 0x750
   CUtlSymbolLarge m_iszSoundStart; // 0x750 - 0x758
   CUtlSymbolLarge m_iszSoundStop; // 0x758 - 0x760
   CUtlSymbolLarge m_strPathTarget; // 0x760 - 0x768
   float m_flMoveSoundMinDuration; // 0x768 - 0x76C
   float m_flMoveSoundMaxDuration; // 0x76C - 0x770
   GameTime_t m_flNextMoveSoundTime; // 0x770 - 0x774
   float m_flMoveSoundMinPitch; // 0x774 - 0x778
   float m_flMoveSoundMaxPitch; // 0x778 - 0x77C
   TrainOrientationType_t m_eOrientationType; // 0x77C - 0x780
   TrainVelocityType_t m_eVelocityType; // 0x780 - 0x784
   unsigned char pad_784[0xC] // 0x784 - 0x790
   CEntityIOOutput m_OnStart; // 0x790 - 0x7B8
   CEntityIOOutput m_OnNext; // 0x7B8 - 0x7E0
   CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x7E0 - 0x808
   bool m_bManualSpeedChanges; // 0x808 - 0x809
   unsigned char pad_809[0x3] // 0x809 - 0x80C
   float m_flDesiredSpeed; // 0x80C - 0x810
   GameTime_t m_flSpeedChangeTime; // 0x810 - 0x814
   float m_flAccelSpeed; // 0x814 - 0x818
   float m_flDecelSpeed; // 0x818 - 0x81C
   bool m_bAccelToSpeed; // 0x81C - 0x81D
   unsigned char pad_81D[0x3] // 0x81D - 0x820
   float m_flTimeScale; // 0x820 - 0x824
   GameTime_t m_flNextMPSoundTime; // 0x824 - 0x828

}; // size - 0x828


class CFuncWall : public CBaseModelEntity
{
public:

   int32_t m_nState; // 0x6F0 - 0x6F4

}; // size - 0x6F8


class CGameRulesProxy : public CBaseEntity
{
public:


}; // size - 0x4A0


class CGameSceneNode
{
public:

   CTransform m_nodeToWorld; // 0x10 - 0x30
   CEntityInstance* m_pOwner; // 0x30 - 0x38
   CGameSceneNode* m_pParent; // 0x38 - 0x40
   CGameSceneNode* m_pChild; // 0x40 - 0x48
   CGameSceneNode* m_pNextSibling; // 0x48 - 0x50
   unsigned char pad_50[0x20] // 0x50 - 0x70
   CGameSceneNodeHandle m_hParent; // 0x70 - 0x80
   CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80 - 0xB0
   unsigned char pad_B0[0x8] // 0xB0 - 0xB8
   QAngle m_angRotation; // 0xB8 - 0xC4
   float m_flScale; // 0xC4 - 0xC8
   Vector m_vecAbsOrigin; // 0xC8 - 0xD4
   QAngle m_angAbsRotation; // 0xD4 - 0xE0
   float m_flAbsScale; // 0xE0 - 0xE4
   int16_t m_nParentAttachmentOrBone; // 0xE4 - 0xE6
   bool m_bDebugAbsOriginChanges; // 0xE6 - 0xE7
   bool m_bDormant; // 0xE7 - 0xE8
   bool m_bForceParentToBeNetworked; // 0xE8 - 0xE9
   bitfield:1 m_bDirtyHierarchy; // 0x0 - 0x0
   bitfield:1 m_bDirtyBoneMergeInfo; // 0x0 - 0x0
   bitfield:1 m_bNetworkedPositionChanged; // 0x0 - 0x0
   bitfield:1 m_bNetworkedAnglesChanged; // 0x0 - 0x0
   bitfield:1 m_bNetworkedScaleChanged; // 0x0 - 0x0
   bitfield:1 m_bWillBeCallingPostDataUpdate; // 0x0 - 0x0
   bitfield:1 m_bNotifyBoneTransformsChanged; // 0x0 - 0x0
   bitfield:1 m_bBoneMergeFlex; // 0x0 - 0x0
   bitfield:2 m_nLatchAbsOrigin; // 0x0 - 0x0
   bitfield:1 m_bDirtyBoneMergeBoneToRoot; // 0x0 - 0x0
   unsigned char pad_0[0xEB] // 0x0 - 0xEB
   uint8_t m_nHierarchicalDepth; // 0xEB - 0xEC
   uint8_t m_nHierarchyType; // 0xEC - 0xED
   uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xED - 0xEE
   unsigned char pad_EE[0x2] // 0xEE - 0xF0
   CUtlStringToken m_name; // 0xF0 - 0xF4
   unsigned char pad_F4[0x3C] // 0xF4 - 0x130
   CUtlStringToken m_hierarchyAttachName; // 0x130 - 0x134
   float m_flZOffset; // 0x134 - 0x138
   Vector m_vRenderOrigin; // 0x138 - 0x144

}; // size - 0x150


class CGameSceneNode
{
public:

   CTransform m_nodeToWorld; // 0x10 - 0x30
   CEntityInstance* m_pOwner; // 0x30 - 0x38
   CGameSceneNode* m_pParent; // 0x38 - 0x40
   CGameSceneNode* m_pChild; // 0x40 - 0x48
   CGameSceneNode* m_pNextSibling; // 0x48 - 0x50
   unsigned char pad_50[0x20] // 0x50 - 0x70
   CGameSceneNodeHandle m_hParent; // 0x70 - 0x80
   CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80 - 0xB0
   unsigned char pad_B0[0x8] // 0xB0 - 0xB8
   QAngle m_angRotation; // 0xB8 - 0xC4
   float m_flScale; // 0xC4 - 0xC8
   Vector m_vecAbsOrigin; // 0xC8 - 0xD4
   QAngle m_angAbsRotation; // 0xD4 - 0xE0
   float m_flAbsScale; // 0xE0 - 0xE4
   int16_t m_nParentAttachmentOrBone; // 0xE4 - 0xE6
   bool m_bDebugAbsOriginChanges; // 0xE6 - 0xE7
   bool m_bDormant; // 0xE7 - 0xE8
   bool m_bForceParentToBeNetworked; // 0xE8 - 0xE9
   bitfield:1 m_bDirtyHierarchy; // 0x0 - 0x0
   bitfield:1 m_bDirtyBoneMergeInfo; // 0x0 - 0x0
   bitfield:1 m_bNetworkedPositionChanged; // 0x0 - 0x0
   bitfield:1 m_bNetworkedAnglesChanged; // 0x0 - 0x0
   bitfield:1 m_bNetworkedScaleChanged; // 0x0 - 0x0
   bitfield:1 m_bWillBeCallingPostDataUpdate; // 0x0 - 0x0
   bitfield:1 m_bNotifyBoneTransformsChanged; // 0x0 - 0x0
   bitfield:1 m_bBoneMergeFlex; // 0x0 - 0x0
   bitfield:2 m_nLatchAbsOrigin; // 0x0 - 0x0
   bitfield:1 m_bDirtyBoneMergeBoneToRoot; // 0x0 - 0x0
   unsigned char pad_0[0xEB] // 0x0 - 0xEB
   uint8_t m_nHierarchicalDepth; // 0xEB - 0xEC
   uint8_t m_nHierarchyType; // 0xEC - 0xED
   uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xED - 0xEE
   unsigned char pad_EE[0x2] // 0xEE - 0xF0
   CUtlStringToken m_name; // 0xF0 - 0xF4
   unsigned char pad_F4[0x3C] // 0xF4 - 0x130
   CUtlStringToken m_hierarchyAttachName; // 0x130 - 0x134
   float m_flZOffset; // 0x134 - 0x138
   Vector m_vRenderOrigin; // 0x138 - 0x144

}; // size - 0x150


class CHostage : public CHostageExpresserShim
{
public:

   CEntityIOOutput m_OnHostageBeginGrab; // 0x980 - 0x9A8
   CEntityIOOutput m_OnFirstPickedUp; // 0x9A8 - 0x9D0
   CEntityIOOutput m_OnDroppedNotRescued; // 0x9D0 - 0x9F8
   CEntityIOOutput m_OnRescued; // 0x9F8 - 0xA20
   EntitySpottedState_t m_entitySpottedState; // 0xA20 - 0xA38
   int32_t m_nSpotRules; // 0xA38 - 0xA3C
   uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xA3C - 0xA40
   uint32_t m_nHostageSpawnRandomFactor; // 0xA40 - 0xA44
   bool m_bRemove; // 0xA44 - 0xA45
   unsigned char pad_A45[0x3] // 0xA45 - 0xA48
   Vector m_vel; // 0xA48 - 0xA54
   bool m_isRescued; // 0xA54 - 0xA55
   bool m_jumpedThisFrame; // 0xA55 - 0xA56
   unsigned char pad_A56[0x2] // 0xA56 - 0xA58
   int32_t m_nHostageState; // 0xA58 - 0xA5C
   CHandle< CBaseEntity > m_leader; // 0xA5C - 0xA60
   CHandle< CCSPlayerPawnBase > m_lastLeader; // 0xA60 - 0xA64
   unsigned char pad_A64[0x4] // 0xA64 - 0xA68
   CountdownTimer m_reuseTimer; // 0xA68 - 0xA80
   bool m_hasBeenUsed; // 0xA80 - 0xA81
   unsigned char pad_A81[0x3] // 0xA81 - 0xA84
   Vector m_accel; // 0xA84 - 0xA90
   bool m_isRunning; // 0xA90 - 0xA91
   bool m_isCrouching; // 0xA91 - 0xA92
   unsigned char pad_A92[0x6] // 0xA92 - 0xA98
   CountdownTimer m_jumpTimer; // 0xA98 - 0xAB0
   bool m_isWaitingForLeader; // 0xAB0 - 0xAB1
   unsigned char pad_AB1[0x200F] // 0xAB1 - 0x2AC0
   CountdownTimer m_repathTimer; // 0x2AC0 - 0x2AD8
   CountdownTimer m_inhibitDoorTimer; // 0x2AD8 - 0x2AF0
   unsigned char pad_2AF0[0x78] // 0x2AF0 - 0x2B68
   CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2B68 - 0x2B80
   unsigned char pad_2B80[0x8] // 0x2B80 - 0x2B88
   CountdownTimer m_wiggleTimer; // 0x2B88 - 0x2BA0
   unsigned char pad_2BA0[0x4] // 0x2BA0 - 0x2BA4
   bool m_isAdjusted; // 0x2BA4 - 0x2BA5
   bool m_bHandsHaveBeenCut; // 0x2BA5 - 0x2BA6
   unsigned char pad_2BA6[0x2] // 0x2BA6 - 0x2BA8
   CHandle< CCSPlayerPawn > m_pHostageGrabber; // 0x2BA8 - 0x2BAC
   GameTime_t m_fLastGrabTime; // 0x2BAC - 0x2BB0
   float m_flGrabbingLength; // 0x2BB0 - 0x2BB4
   Vector m_vecPositionWhenStartedDroppingToGround; // 0x2BB4 - 0x2BC0
   Vector m_vecGrabbedPos; // 0x2BC0 - 0x2BCC
   GameTime_t m_flRescueStartTime; // 0x2BCC - 0x2BD0
   GameTime_t m_flGrabSuccessTime; // 0x2BD0 - 0x2BD4
   GameTime_t m_flDropStartTime; // 0x2BD4 - 0x2BD8
   int32_t m_nApproachRewardPayouts; // 0x2BD8 - 0x2BDC
   int32_t m_nPickupEventCount; // 0x2BDC - 0x2BE0
   Vector m_vecSpawnGroundPos; // 0x2BE0 - 0x2BEC

}; // size - 0x2C00


class CHostageRescueZoneShim : public CBaseTrigger
{
public:


}; // size - 0x898


class CInferno : public CBaseModelEntity
{
public:

   int32 m_fireXDelta[64]; // 0x700 - 0x800
   int32 m_fireYDelta[64]; // 0x800 - 0x900
   int32 m_fireZDelta[64]; // 0x900 - 0xA00
   int32 m_fireParentXDelta[64]; // 0xA00 - 0xB00
   int32 m_fireParentYDelta[64]; // 0xB00 - 0xC00
   int32 m_fireParentZDelta[64]; // 0xC00 - 0xD00
   bool m_bFireIsBurning[64]; // 0xD00 - 0xD40
   Vector m_BurnNormal[64]; // 0xD40 - 0x1040
   int32_t m_fireCount; // 0x1040 - 0x1044
   int32_t m_nInfernoType; // 0x1044 - 0x1048
   int32_t m_nFireEffectTickBegin; // 0x1048 - 0x104C
   float m_nFireLifetime; // 0x104C - 0x1050
   bool m_bInPostEffectTime; // 0x1050 - 0x1051
   unsigned char pad_1051[0x3] // 0x1051 - 0x1054
   int32_t m_nFiresExtinguishCount; // 0x1054 - 0x1058
   bool m_bWasCreatedInSmoke; // 0x1058 - 0x1059
   unsigned char pad_1059[0x207] // 0x1059 - 0x1260
   Extent m_extent; // 0x1260 - 0x1278
   CountdownTimer m_damageTimer; // 0x1278 - 0x1290
   CountdownTimer m_damageRampTimer; // 0x1290 - 0x12A8
   Vector m_splashVelocity; // 0x12A8 - 0x12B4
   Vector m_InitialSplashVelocity; // 0x12B4 - 0x12C0
   Vector m_startPos; // 0x12C0 - 0x12CC
   Vector m_vecOriginalSpawnLocation; // 0x12CC - 0x12D8
   IntervalTimer m_activeTimer; // 0x12D8 - 0x12E8
   int32_t m_fireSpawnOffset; // 0x12E8 - 0x12EC
   int32_t m_nMaxFlames; // 0x12EC - 0x12F0
   CountdownTimer m_BookkeepingTimer; // 0x12F0 - 0x1308
   CountdownTimer m_NextSpreadTimer; // 0x1308 - 0x1320
   uint16_t m_nSourceItemDefIndex; // 0x1320 - 0x1322

}; // size - 0x1378


class CInfoDynamicShadowHint : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   float m_flRange; // 0x4A4 - 0x4A8
   int32_t m_nImportance; // 0x4A8 - 0x4AC
   int32_t m_nLightChoice; // 0x4AC - 0x4B0
   CHandle< CBaseEntity > m_hLight; // 0x4B0 - 0x4B4

}; // size - 0x4B8


class CInfoDynamicShadowHint : public C_PointEntity
{
public:

   bool m_bDisabled; // 0x538 - 0x539
   unsigned char pad_539[0x3] // 0x539 - 0x53C
   float m_flRange; // 0x53C - 0x540
   int32_t m_nImportance; // 0x540 - 0x544
   int32_t m_nLightChoice; // 0x544 - 0x548
   CHandle< C_BaseEntity > m_hLight; // 0x548 - 0x54C

}; // size - 0x550


class CItemAssaultSuit : public CItem
{
public:


}; // size - 0x8F8


class CItemDefuser : public CItem
{
public:

   EntitySpottedState_t m_entitySpottedState; // 0x8F8 - 0x910
   int32_t m_nSpotRules; // 0x910 - 0x914

}; // size - 0x918


class CKnife : public CWeaponCSBase
{
public:


}; // size - 0xD50


class CLightDirectionalEntity : public CLightEntity
{
public:


}; // size - 0x6F8


class CLogicAutosave : public CLogicalEntity
{
public:

   bool m_bForceNewLevelUnit; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   int32_t m_minHitPoints; // 0x4A4 - 0x4A8
   int32_t m_minHitPointsToCommit; // 0x4A8 - 0x4AC

}; // size - 0x4B0


class CLogicNPCCounterAABB : public CLogicNPCCounter
{
public:

   Vector m_vDistanceOuterMins; // 0x7E0 - 0x7EC
   Vector m_vDistanceOuterMaxs; // 0x7EC - 0x7F8
   Vector m_vOuterMins; // 0x7F8 - 0x804
   Vector m_vOuterMaxs; // 0x804 - 0x810

}; // size - 0x810


class CMarkupVolumeWithRef : public CMarkupVolumeTagged
{
public:

   bool m_bUseRef; // 0x730 - 0x731
   unsigned char pad_731[0x3] // 0x731 - 0x734
   Vector m_vRefPos; // 0x734 - 0x740
   float m_flRefDot; // 0x740 - 0x744

}; // size - 0x748


class CMolotovGrenade : public CBaseCSGrenade
{
public:


}; // size - 0xD90


class CMotionGraph
{
public:

   CParamSpanUpdater m_paramSpans; // 0x10 - 0x28
   CUtlVector< TagSpan_t > m_tags; // 0x28 - 0x40
   CSmartPtr< CMotionNode > m_pRootNode; // 0x40 - 0x48
   int32_t m_nParameterCount; // 0x48 - 0x4C
   int32_t m_nConfigStartIndex; // 0x4C - 0x50
   int32_t m_nConfigCount; // 0x50 - 0x54
   bool m_bLoop; // 0x54 - 0x55

}; // size - 0x58


class CNavVolumeCalculatedVector : public CNavVolume
{
public:


}; // size - 0x98


class CNavVolumeSphere : public CNavVolume
{
public:

   Vector m_vCenter; // 0x70 - 0x7C
   float m_flRadius; // 0x7C - 0x80

}; // size - 0x80


class CNavVolumeVector : public CNavVolume
{
public:

   bool m_bHasBeenPreFiltered; // 0x78 - 0x79

}; // size - 0x98


class CParticleSystem : public CBaseModelEntity
{
public:

   char m_szSnapshotFileName[512]; // 0x6F0 - 0x8F0
   bool m_bActive; // 0x8F0 - 0x8F1
   bool m_bFrozen; // 0x8F1 - 0x8F2
   unsigned char pad_8F2[0x2] // 0x8F2 - 0x8F4
   float m_flFreezeTransitionDuration; // 0x8F4 - 0x8F8
   int32_t m_nStopType; // 0x8F8 - 0x8FC
   bool m_bAnimateDuringGameplayPause; // 0x8FC - 0x8FD
   unsigned char pad_8FD[0x3] // 0x8FD - 0x900
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x900 - 0x908
   GameTime_t m_flStartTime; // 0x908 - 0x90C
   float m_flPreSimTime; // 0x90C - 0x910
   Vector m_vServerControlPoints[4]; // 0x910 - 0x940
   uint8 m_iServerControlPointAssignments[4]; // 0x940 - 0x944
   CHandle< CBaseEntity > m_hControlPointEnts[64]; // 0x944 - 0xA44
   bool m_bNoSave; // 0xA44 - 0xA45
   bool m_bNoFreeze; // 0xA45 - 0xA46
   bool m_bStartActive; // 0xA46 - 0xA47
   unsigned char pad_A47[0x1] // 0xA47 - 0xA48
   CUtlSymbolLarge m_iszEffectName; // 0xA48 - 0xA50
   CUtlSymbolLarge m_iszControlPointNames[64]; // 0xA50 - 0xC50
   int32_t m_nDataCP; // 0xC50 - 0xC54
   Vector m_vecDataCPValue; // 0xC54 - 0xC60
   int32_t m_nTintCP; // 0xC60 - 0xC64
   Color m_clrTint; // 0xC64 - 0xC68

}; // size - 0xC68


class CPathCorner : public CPointEntity
{
public:

   float m_flWait; // 0x4A0 - 0x4A4
   float m_flRadius; // 0x4A4 - 0x4A8
   CEntityIOOutput m_OnPass; // 0x4A8 - 0x4D0

}; // size - 0x4D0


class CPathKeyFrame : public CLogicalEntity
{
public:

   Vector m_Origin; // 0x4A0 - 0x4AC
   QAngle m_Angles; // 0x4AC - 0x4B8
   unsigned char pad_4B8[0x8] // 0x4B8 - 0x4C0
   Quaternion m_qAngle; // 0x4C0 - 0x4D0
   CUtlSymbolLarge m_iNextKey; // 0x4D0 - 0x4D8
   float m_flNextTime; // 0x4D8 - 0x4DC
   unsigned char pad_4DC[0x4] // 0x4DC - 0x4E0
   CPathKeyFrame* m_pNextKey; // 0x4E0 - 0x4E8
   CPathKeyFrame* m_pPrevKey; // 0x4E8 - 0x4F0
   float m_flSpeed; // 0x4F0 - 0x4F4

}; // size - 0x500


class CPathParticleRope : public CBaseEntity
{
public:

   bool m_bStartActive; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   float m_flMaxSimulationTime; // 0x4A4 - 0x4A8
   CUtlSymbolLarge m_iszEffectName; // 0x4A8 - 0x4B0
   CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x4B0 - 0x4C8
   float m_flParticleSpacing; // 0x4C8 - 0x4CC
   float m_flSlack; // 0x4CC - 0x4D0
   float m_flRadius; // 0x4D0 - 0x4D4
   Color m_ColorTint; // 0x4D4 - 0x4D8
   int32_t m_nEffectState; // 0x4D8 - 0x4DC
   unsigned char pad_4DC[0x4] // 0x4DC - 0x4E0
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x4E0 - 0x4E8
   CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x4E8 - 0x500
   CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x500 - 0x518
   CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x518 - 0x530
   CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x530 - 0x548
   CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x548 - 0x560
   CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x560 - 0x578

}; // size - 0x580


class CPhysHinge : public CPhysConstraint
{
public:

   ConstraintSoundInfo m_soundInfo; // 0x500 - 0x588
   CEntityIOOutput m_NotifyMinLimitReached; // 0x588 - 0x5B0
   CEntityIOOutput m_NotifyMaxLimitReached; // 0x5B0 - 0x5D8
   bool m_bAtMinLimit; // 0x5D8 - 0x5D9
   bool m_bAtMaxLimit; // 0x5D9 - 0x5DA
   unsigned char pad_5DA[0x2] // 0x5DA - 0x5DC
   constraint_hingeparams_t m_hinge; // 0x5DC - 0x61C
   float m_hingeFriction; // 0x61C - 0x620
   float m_systemLoadScale; // 0x620 - 0x624
   bool m_bIsAxisLocal; // 0x624 - 0x625
   unsigned char pad_625[0x3] // 0x625 - 0x628
   float m_flMinRotation; // 0x628 - 0x62C
   float m_flMaxRotation; // 0x62C - 0x630
   float m_flInitialRotation; // 0x630 - 0x634
   float m_flMotorFrequency; // 0x634 - 0x638
   float m_flMotorDampingRatio; // 0x638 - 0x63C
   float m_flAngleSpeed; // 0x63C - 0x640
   float m_flAngleSpeedThreshold; // 0x640 - 0x644
   unsigned char pad_644[0x4] // 0x644 - 0x648
   CEntityIOOutput m_OnStartMoving; // 0x648 - 0x670
   CEntityIOOutput m_OnStopMoving; // 0x670 - 0x698

}; // size - 0x698


class CPlantedC4 : public CBaseAnimGraph
{
public:

   bool m_bPlantedAtQuestTarget; // 0x820 - 0x821
   bool m_bBombTicking; // 0x821 - 0x822
   unsigned char pad_822[0x2] // 0x822 - 0x824
   GameTime_t m_flC4Blow; // 0x824 - 0x828
   int32_t m_nBombSite; // 0x828 - 0x82C
   int32_t m_nSourceSoundscapeHash; // 0x82C - 0x830
   CEntityIOOutput m_OnBombDefused; // 0x830 - 0x858
   CEntityIOOutput m_OnBombBeginDefuse; // 0x858 - 0x880
   CEntityIOOutput m_OnBombDefuseAborted; // 0x880 - 0x8A8
   bool m_bCannotBeDefused; // 0x8A8 - 0x8A9
   unsigned char pad_8A9[0x7] // 0x8A9 - 0x8B0
   EntitySpottedState_t m_entitySpottedState; // 0x8B0 - 0x8C8
   int32_t m_nSpotRules; // 0x8C8 - 0x8CC
   bool m_bTrainingPlacedByPlayer; // 0x8CC - 0x8CD
   bool m_bHasExploded; // 0x8CD - 0x8CE
   unsigned char pad_8CE[0x2] // 0x8CE - 0x8D0
   float m_flTimerLength; // 0x8D0 - 0x8D4
   bool m_bBeingDefused; // 0x8D4 - 0x8D5
   unsigned char pad_8D5[0x7] // 0x8D5 - 0x8DC
   GameTime_t m_fLastDefuseTime; // 0x8DC - 0x8E0
   unsigned char pad_8E0[0x4] // 0x8E0 - 0x8E4
   float m_flDefuseLength; // 0x8E4 - 0x8E8
   GameTime_t m_flDefuseCountDown; // 0x8E8 - 0x8EC
   bool m_bBombDefused; // 0x8EC - 0x8ED
   unsigned char pad_8ED[0x3] // 0x8ED - 0x8F0
   CHandle< CCSPlayerPawnBase > m_hBombDefuser; // 0x8F0 - 0x8F4
   CEntityHandle m_hControlPanel; // 0x8F4 - 0x8F8
   int32_t m_iProgressBarTime; // 0x8F8 - 0x8FC
   bool m_bVoiceAlertFired; // 0x8FC - 0x8FD
   bool m_bVoiceAlertPlayed[4]; // 0x8FD - 0x901
   unsigned char pad_901[0x3] // 0x901 - 0x904
   GameTime_t m_flNextBotBeepTime; // 0x904 - 0x908
   unsigned char pad_908[0x4] // 0x908 - 0x90C
   bool m_bPlantedAfterPickup; // 0x90C - 0x90D
   unsigned char pad_90D[0x3] // 0x90D - 0x910
   QAngle m_angCatchUpToPlayerEye; // 0x910 - 0x91C
   GameTime_t m_flLastSpinDetectionTime; // 0x91C - 0x920

}; // size - 0x920


class CPlayer_CameraServices : public CPlayerPawnComponent
{
public:

   uint32_t m_iFOV; // 0x40 - 0x44
   uint32_t m_iFOVStart; // 0x44 - 0x48
   GameTime_t m_flFOVTime; // 0x48 - 0x4C
   float m_flFOVRate; // 0x4C - 0x50
   QAngle m_vecPunchAngle; // 0x50 - 0x5C
   unsigned char pad_5C[0xC] // 0x5C - 0x68
   QAngle m_vecPunchAngleVel; // 0x68 - 0x74
   unsigned char pad_74[0xC] // 0x74 - 0x80
   GameTick_t m_nPunchAngleJoltTickClientSide; // 0x80 - 0x84
   GameTick_t m_nPunchAngleJoltTick; // 0x84 - 0x88
   CHandle< C_BaseEntity > m_hZoomOwner; // 0x88 - 0x8C
   unsigned char pad_8C[0x4] // 0x8C - 0x90
   C_fogplayerparams_t m_PlayerFog; // 0x90 - 0xD0
   CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // 0xD0 - 0xD4
   CHandle< C_BaseEntity > m_hViewEntity; // 0xD4 - 0xD8
   CHandle< C_TonemapController2 > m_hTonemapController; // 0xD8 - 0xDC
   unsigned char pad_DC[0x4] // 0xDC - 0xE0
   audioparams_t m_audio; // 0xE0 - 0x158
   C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x158 - 0x170
   float m_flOldPlayerZ; // 0x170 - 0x174
   float m_flOldPlayerViewOffsetZ; // 0x174 - 0x178
   fogparams_t m_CurrentFog; // 0x178 - 0x1E0
   CHandle< C_FogController > m_hOldFogController; // 0x1E0 - 0x1E4
   bool m_bOverrideFogColor[5]; // 0x1E4 - 0x1E9
   Color m_OverrideFogColor[5]; // 0x1E9 - 0x1FD
   bool m_bOverrideFogStartEnd[5]; // 0x1FD - 0x202
   unsigned char pad_202[0x2] // 0x202 - 0x204
   float32 m_fOverrideFogStart[5]; // 0x204 - 0x218
   float32 m_fOverrideFogEnd[5]; // 0x218 - 0x22C
   CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; // 0x22C - 0x230
   QAngle m_angDemoViewAngles; // 0x230 - 0x23C

}; // size - 0x248


class CPlayer_CameraServices : public CPlayerPawnComponent
{
public:

   uint32_t m_iFOV; // 0x40 - 0x44
   uint32_t m_iFOVStart; // 0x44 - 0x48
   GameTime_t m_flFOVTime; // 0x48 - 0x4C
   float m_flFOVRate; // 0x4C - 0x50
   QAngle m_vecPunchAngle; // 0x50 - 0x5C
   QAngle m_vecPunchAngleVel; // 0x5C - 0x68
   GameTick_t m_nPunchAngleJoltTick; // 0x68 - 0x6C
   CHandle< CBaseEntity > m_hZoomOwner; // 0x6C - 0x70
   fogplayerparams_t m_PlayerFog; // 0x70 - 0xB0
   CHandle< CColorCorrection > m_hColorCorrectionCtrl; // 0xB0 - 0xB4
   CHandle< CBaseEntity > m_hViewEntity; // 0xB4 - 0xB8
   CHandle< CTonemapController2 > m_hTonemapController; // 0xB8 - 0xBC
   unsigned char pad_BC[0x4] // 0xBC - 0xC0
   audioparams_t m_audio; // 0xC0 - 0x138
   CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // 0x138 - 0x150
   float m_flOldPlayerZ; // 0x150 - 0x154
   float m_flOldPlayerViewOffsetZ; // 0x154 - 0x158
   unsigned char pad_158[0x18] // 0x158 - 0x170
   CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList; // 0x170 - 0x188

}; // size - 0x188


class CPlayer_ItemServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_ItemServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:

   float m_flStepSoundTime; // 0x1B8 - 0x1BC
   float m_flFallVelocity; // 0x1BC - 0x1C0
   bool m_bInCrouch; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0x3] // 0x1C1 - 0x1C4
   uint32_t m_nCrouchState; // 0x1C4 - 0x1C8
   GameTime_t m_flCrouchTransitionStartTime; // 0x1C8 - 0x1CC
   bool m_bDucked; // 0x1CC - 0x1CD
   bool m_bDucking; // 0x1CD - 0x1CE
   bool m_bInDuckJump; // 0x1CE - 0x1CF
   unsigned char pad_1CF[0x1] // 0x1CF - 0x1D0
   Vector m_groundNormal; // 0x1D0 - 0x1DC
   float m_flSurfaceFriction; // 0x1DC - 0x1E0
   CUtlStringToken m_surfaceProps; // 0x1E0 - 0x1E4
   unsigned char pad_1E4[0xC] // 0x1E4 - 0x1F0
   int32_t m_nStepside; // 0x1F0 - 0x1F4
   int32_t m_iTargetVolume; // 0x1F4 - 0x1F8
   Vector m_vecSmoothedVelocity; // 0x1F8 - 0x204

}; // size - 0x208


class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:

   float m_flStepSoundTime; // 0x1B8 - 0x1BC
   float m_flFallVelocity; // 0x1BC - 0x1C0
   bool m_bInCrouch; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0x3] // 0x1C1 - 0x1C4
   uint32_t m_nCrouchState; // 0x1C4 - 0x1C8
   GameTime_t m_flCrouchTransitionStartTime; // 0x1C8 - 0x1CC
   bool m_bDucked; // 0x1CC - 0x1CD
   bool m_bDucking; // 0x1CD - 0x1CE
   bool m_bInDuckJump; // 0x1CE - 0x1CF
   unsigned char pad_1CF[0x1] // 0x1CF - 0x1D0
   Vector m_groundNormal; // 0x1D0 - 0x1DC
   float m_flSurfaceFriction; // 0x1DC - 0x1E0
   CUtlStringToken m_surfaceProps; // 0x1E0 - 0x1E4
   unsigned char pad_1E4[0xC] // 0x1E4 - 0x1F0
   int32_t m_nStepside; // 0x1F0 - 0x1F4

}; // size - 0x1F8


class CPlayer_ObserverServices : public CPlayerPawnComponent
{
public:

   uint8_t m_iObserverMode; // 0x40 - 0x41
   unsigned char pad_41[0x3] // 0x41 - 0x44
   CHandle< CBaseEntity > m_hObserverTarget; // 0x44 - 0x48
   ObserverMode_t m_iObserverLastMode; // 0x48 - 0x4C
   bool m_bForcedObserverMode; // 0x4C - 0x4D

}; // size - 0x50


class CPlayer_ObserverServices : public CPlayerPawnComponent
{
public:

   uint8_t m_iObserverMode; // 0x40 - 0x41
   unsigned char pad_41[0x3] // 0x41 - 0x44
   CHandle< C_BaseEntity > m_hObserverTarget; // 0x44 - 0x48
   ObserverMode_t m_iObserverLastMode; // 0x48 - 0x4C
   bool m_bForcedObserverMode; // 0x4C - 0x4D
   unsigned char pad_4D[0x3] // 0x4D - 0x50
   float m_flObserverChaseDistance; // 0x50 - 0x54

}; // size - 0x58


class CPlayer_UseServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_UseServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_WaterServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_WaterServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:

   bool m_bAllowSwitchToNoWeapon; // 0x40 - 0x41
   unsigned char pad_41[0x7] // 0x41 - 0x48
   CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > m_hMyWeapons; // 0x48 - 0x60
   CHandle< CBasePlayerWeapon > m_hActiveWeapon; // 0x60 - 0x64
   CHandle< CBasePlayerWeapon > m_hLastWeapon; // 0x64 - 0x68
   uint16 m_iAmmo[32]; // 0x68 - 0xA8
   bool m_bPreventWeaponPickup; // 0xA8 - 0xA9

}; // size - 0xB0


class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:

   bool m_bAllowSwitchToNoWeapon; // 0x40 - 0x41
   unsigned char pad_41[0x7] // 0x41 - 0x48
   C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons; // 0x48 - 0x60
   CHandle< C_BasePlayerWeapon > m_hActiveWeapon; // 0x60 - 0x64
   CHandle< C_BasePlayerWeapon > m_hLastWeapon; // 0x64 - 0x68
   uint16 m_iAmmo[32]; // 0x68 - 0xA8

}; // size - 0xA8


class CPointCamera : public CBaseEntity
{
public:

   float m_FOV; // 0x4A0 - 0x4A4
   float m_Resolution; // 0x4A4 - 0x4A8
   bool m_bFogEnable; // 0x4A8 - 0x4A9
   Color m_FogColor; // 0x4A9 - 0x4AD
   unsigned char pad_4AD[0x3] // 0x4AD - 0x4B0
   float m_flFogStart; // 0x4B0 - 0x4B4
   float m_flFogEnd; // 0x4B4 - 0x4B8
   float m_flFogMaxDensity; // 0x4B8 - 0x4BC
   bool m_bActive; // 0x4BC - 0x4BD
   bool m_bUseScreenAspectRatio; // 0x4BD - 0x4BE
   unsigned char pad_4BE[0x2] // 0x4BE - 0x4C0
   float m_flAspectRatio; // 0x4C0 - 0x4C4
   bool m_bNoSky; // 0x4C4 - 0x4C5
   unsigned char pad_4C5[0x3] // 0x4C5 - 0x4C8
   float m_fBrightness; // 0x4C8 - 0x4CC
   float m_flZFar; // 0x4CC - 0x4D0
   float m_flZNear; // 0x4D0 - 0x4D4
   bool m_bDofEnabled; // 0x4D4 - 0x4D5
   unsigned char pad_4D5[0x3] // 0x4D5 - 0x4D8
   float m_flDofNearBlurry; // 0x4D8 - 0x4DC
   float m_flDofNearCrisp; // 0x4DC - 0x4E0
   float m_flDofFarCrisp; // 0x4E0 - 0x4E4
   float m_flDofFarBlurry; // 0x4E4 - 0x4E8
   float m_flDofTiltToGround; // 0x4E8 - 0x4EC
   float m_TargetFOV; // 0x4EC - 0x4F0
   float m_DegreesPerSecond; // 0x4F0 - 0x4F4
   bool m_bIsOn; // 0x4F4 - 0x4F5
   unsigned char pad_4F5[0x3] // 0x4F5 - 0x4F8
   CPointCamera* m_pNext; // 0x4F8 - 0x500

}; // size - 0x500


class CPointDZItemSpawn : public CServerOnlyPointEntity
{
public:


}; // size - 0x4A8


class CPointDZItemSpawnGroup : public CServerOnlyPointEntity
{
public:

   float m_flRadius; // 0x4A0 - 0x4A4

}; // size - 0x4C0


class CPointHMDAnchor : public CBaseEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   GameTime_t m_flEnableTime; // 0x4A4 - 0x4A8
   int32_t m_nPlayerIndex; // 0x4A8 - 0x4AC

}; // size - 0x4B0


class CPredictedViewModel : public CBaseViewModel
{
public:


}; // size - 0x868


class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:

   bool m_bBreakable; // 0xDB8 - 0xDB9
   bool m_isAbleToCloseAreaPortals; // 0xDB9 - 0xDBA
   unsigned char pad_DBA[0x2] // 0xDBA - 0xDBC
   int32_t m_currentDamageState; // 0xDBC - 0xDC0
   CUtlVector< CUtlSymbolLarge > m_damageStates; // 0xDC0 - 0xDD8

}; // size - 0xDD8


class CRopeKeyframe : public CBaseModelEntity
{
public:

   uint16_t m_RopeFlags; // 0x6F8 - 0x6FA
   unsigned char pad_6FA[0x6] // 0x6FA - 0x700
   CUtlSymbolLarge m_iNextLinkName; // 0x700 - 0x708
   int16_t m_Slack; // 0x708 - 0x70A
   unsigned char pad_70A[0x2] // 0x70A - 0x70C
   float m_Width; // 0x70C - 0x710
   float m_TextureScale; // 0x710 - 0x714
   uint8_t m_nSegments; // 0x714 - 0x715
   bool m_bConstrainBetweenEndpoints; // 0x715 - 0x716
   unsigned char pad_716[0x2] // 0x716 - 0x718
   CUtlSymbolLarge m_strRopeMaterialModel; // 0x718 - 0x720
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x720 - 0x728
   uint8_t m_Subdiv; // 0x728 - 0x729
   uint8_t m_nChangeCount; // 0x729 - 0x72A
   int16_t m_RopeLength; // 0x72A - 0x72C
   uint8_t m_fLockedPoints; // 0x72C - 0x72D
   bool m_bCreatedFromMapFile; // 0x72D - 0x72E
   unsigned char pad_72E[0x2] // 0x72E - 0x730
   float m_flScrollSpeed; // 0x730 - 0x734
   bool m_bStartPointValid; // 0x734 - 0x735
   bool m_bEndPointValid; // 0x735 - 0x736
   unsigned char pad_736[0x2] // 0x736 - 0x738
   CHandle< CBaseEntity > m_hStartPoint; // 0x738 - 0x73C
   CHandle< CBaseEntity > m_hEndPoint; // 0x73C - 0x740
   AttachmentHandle_t m_iStartAttachment; // 0x740 - 0x741
   AttachmentHandle_t m_iEndAttachment; // 0x741 - 0x742

}; // size - 0x748


class CRotButton : public CBaseButton
{
public:


}; // size - 0x8B8


class CRuleBrushEntity : public CRuleEntity
{
public:


}; // size - 0x6F8


class CSAdditionalPerRoundStats_t
{
public:

   int32_t m_numChickensKilled; // 0x0 - 0x4
   int32_t m_killsWhileBlind; // 0x4 - 0x8
   int32_t m_bombCarrierkills; // 0x8 - 0xC
   int32_t m_iBurnDamageInflicted; // 0xC - 0x10
   int32_t m_iDinks; // 0x10 - 0x14

}; // size - 0x14


class CSPerRoundStats_t
{
public:

   int32_t m_iKills; // 0x30 - 0x34
   int32_t m_iDeaths; // 0x34 - 0x38
   int32_t m_iAssists; // 0x38 - 0x3C
   int32_t m_iDamage; // 0x3C - 0x40
   int32_t m_iEquipmentValue; // 0x40 - 0x44
   int32_t m_iMoneySaved; // 0x44 - 0x48
   int32_t m_iKillReward; // 0x48 - 0x4C
   int32_t m_iLiveTime; // 0x4C - 0x50
   int32_t m_iHeadShotKills; // 0x50 - 0x54
   int32_t m_iObjective; // 0x54 - 0x58
   int32_t m_iCashEarned; // 0x58 - 0x5C
   int32_t m_iUtilityDamage; // 0x5C - 0x60
   int32_t m_iEnemiesFlashed; // 0x60 - 0x64

}; // size - 0x68


class CSPerRoundStats_t
{
public:

   int32_t m_iKills; // 0x30 - 0x34
   int32_t m_iDeaths; // 0x34 - 0x38
   int32_t m_iAssists; // 0x38 - 0x3C
   int32_t m_iDamage; // 0x3C - 0x40
   int32_t m_iEquipmentValue; // 0x40 - 0x44
   int32_t m_iMoneySaved; // 0x44 - 0x48
   int32_t m_iKillReward; // 0x48 - 0x4C
   int32_t m_iLiveTime; // 0x4C - 0x50
   int32_t m_iHeadShotKills; // 0x50 - 0x54
   int32_t m_iObjective; // 0x54 - 0x58
   int32_t m_iCashEarned; // 0x58 - 0x5C
   int32_t m_iUtilityDamage; // 0x5C - 0x60
   int32_t m_iEnemiesFlashed; // 0x60 - 0x64

}; // size - 0x68


class CSequenceAnimNode : public CAnimNodeBase
{
public:

   CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x68 - 0x80
   CUtlVector< CSmartPtr< CAnimParamSpan > > m_paramSpans; // 0x80 - 0x98
   CUtlString m_sequenceName; // 0x98 - 0xA0
   float m_playbackSpeed; // 0xA0 - 0xA4
   bool m_bLoop; // 0xA4 - 0xA5

}; // size - 0xA8


class CSequenceUpdateNode : public CLeafUpdateNode
{
public:

   CParamSpanUpdater m_paramSpans; // 0x60 - 0x78
   CUtlVector< TagSpan_t > m_tags; // 0x78 - 0x90
   unsigned char pad_90[0x4] // 0x90 - 0x94
   HSequence m_hSequence; // 0x94 - 0x98
   float m_playbackSpeed; // 0x98 - 0x9C
   float m_duration; // 0x9C - 0xA0
   bool m_bLoop; // 0xA0 - 0xA1

}; // size - 0xA8


class CSosGroupBranchPattern
{
public:

   bool m_bMatchEventName; // 0x8 - 0x9
   bool m_bMatchEventSubString; // 0x9 - 0xA
   bool m_bMatchEntIndex; // 0xA - 0xB
   bool m_bMatchOpvar; // 0xB - 0xC

}; // size - 0x10


class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity
{
public:

   Vector m_vDistanceInnerMins; // 0x638 - 0x644
   Vector m_vDistanceInnerMaxs; // 0x644 - 0x650
   Vector m_vDistanceOuterMins; // 0x650 - 0x65C
   Vector m_vDistanceOuterMaxs; // 0x65C - 0x668
   int32_t m_nAABBDirection; // 0x668 - 0x66C
   Vector m_vInnerMins; // 0x66C - 0x678
   Vector m_vInnerMaxs; // 0x678 - 0x684
   Vector m_vOuterMins; // 0x684 - 0x690
   Vector m_vOuterMaxs; // 0x690 - 0x69C

}; // size - 0x6A0


class CSpinUpdateBase : public CParticleFunctionOperator
{
public:


}; // size - 0x1F0


class CStaticPoseCache
{
public:

   CUtlVector< CCachedPose > m_poses; // 0x10 - 0x28
   int32_t m_nBoneCount; // 0x28 - 0x2C
   int32_t m_nMorphCount; // 0x2C - 0x30

}; // size - 0x30


class CTabletBlockerShim : public CBaseTrigger
{
public:


}; // size - 0x898


class CTeam : public CBaseEntity
{
public:

   CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x4A0 - 0x4B8
   CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers; // 0x4B8 - 0x4D0
   int32_t m_iScore; // 0x4D0 - 0x4D4
   char m_szTeamname[129]; // 0x4D4 - 0x555

}; // size - 0x558


class CTeamplayRules : public CMultiplayRules
{
public:


}; // size - 0x90


class CTonemapController2 : public CBaseEntity
{
public:

   float m_flAutoExposureMin; // 0x4A0 - 0x4A4
   float m_flAutoExposureMax; // 0x4A4 - 0x4A8
   float m_flTonemapPercentTarget; // 0x4A8 - 0x4AC
   float m_flTonemapPercentBrightPixels; // 0x4AC - 0x4B0
   float m_flTonemapMinAvgLum; // 0x4B0 - 0x4B4
   float m_flExposureAdaptationSpeedUp; // 0x4B4 - 0x4B8
   float m_flExposureAdaptationSpeedDown; // 0x4B8 - 0x4BC
   float m_flTonemapEVSmoothingRange; // 0x4BC - 0x4C0

}; // size - 0x4C8


class CTriggerCustomBounds : public CBaseTrigger
{
public:


}; // size - 0x898


class CTriggerPush : public CBaseTrigger
{
public:

   QAngle m_angPushEntitySpace; // 0x898 - 0x8A4
   Vector m_vecPushDirEntitySpace; // 0x8A4 - 0x8B0
   bool m_bTriggerOnStartTouch; // 0x8B0 - 0x8B1
   unsigned char pad_8B1[0x3] // 0x8B1 - 0x8B4
   float m_flAlternateTicksFix; // 0x8B4 - 0x8B8
   float m_flPushSpeed; // 0x8B8 - 0x8BC

}; // size - 0x8C0


class CWeaponBaseItem : public CWeaponCSBase
{
public:

   CountdownTimer m_SequenceCompleteTimer; // 0xD50 - 0xD68
   bool m_bRedraw; // 0xD68 - 0xD69

}; // size - 0xD70


class C_BaseFire : public C_BaseEntity
{
public:

   float m_flScale; // 0x538 - 0x53C
   float m_flStartScale; // 0x53C - 0x540
   float m_flScaleTime; // 0x540 - 0x544
   uint32_t m_nFlags; // 0x544 - 0x548

}; // size - 0x548


class C_Breakable : public C_BaseModelEntity
{
public:


}; // size - 0x838


class C_CSGO_PreviewModel : public C_BaseFlex
{
public:

   CUtlString m_animgraph; // 0xB28 - 0xB30
   CUtlString m_animgraphCharacterModeString; // 0xB30 - 0xB38
   CUtlString m_defaultAnim; // 0xB38 - 0xB40
   AnimLoopMode_t m_nDefaultAnimLoopMode; // 0xB40 - 0xB44
   float m_flInitialModelScale; // 0xB44 - 0xB48

}; // size - 0xBF0


class C_EnvCubemap : public C_BaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x628 - 0x630
   bool m_bCustomCubemapTexture; // 0x630 - 0x631
   unsigned char pad_631[0x3] // 0x631 - 0x634
   float m_flInfluenceRadius; // 0x634 - 0x638
   Vector m_vBoxProjectMins; // 0x638 - 0x644
   Vector m_vBoxProjectMaxs; // 0x644 - 0x650
   CUtlSymbolLarge m_LightGroups; // 0x650 - 0x658
   bool m_bMoveable; // 0x658 - 0x659
   unsigned char pad_659[0x3] // 0x659 - 0x65C
   int32_t m_nHandshake; // 0x65C - 0x660
   int32_t m_nEnvCubeMapArrayIndex; // 0x660 - 0x664
   int32_t m_nPriority; // 0x664 - 0x668
   float m_flEdgeFadeDist; // 0x668 - 0x66C
   Vector m_vEdgeFadeDists; // 0x66C - 0x678
   float m_flDiffuseScale; // 0x678 - 0x67C
   bool m_bStartDisabled; // 0x67C - 0x67D
   bool m_bDefaultEnvMap; // 0x67D - 0x67E
   bool m_bDefaultSpecEnvMap; // 0x67E - 0x67F
   bool m_bIndoorCubeMap; // 0x67F - 0x680
   bool m_bCopyDiffuseFromDefaultCubemap; // 0x680 - 0x681
   unsigned char pad_681[0xF] // 0x681 - 0x690
   bool m_bEnabled; // 0x690 - 0x691

}; // size - 0x698


class C_GameRulesProxy : public C_BaseEntity
{
public:


}; // size - 0x538


class C_Inferno : public C_BaseModelEntity
{
public:

   ParticleIndex_t m_nfxFireDamageEffect; // 0x878 - 0x87C
   int32 m_fireXDelta[64]; // 0x87C - 0x97C
   int32 m_fireYDelta[64]; // 0x97C - 0xA7C
   int32 m_fireZDelta[64]; // 0xA7C - 0xB7C
   int32 m_fireParentXDelta[64]; // 0xB7C - 0xC7C
   int32 m_fireParentYDelta[64]; // 0xC7C - 0xD7C
   int32 m_fireParentZDelta[64]; // 0xD7C - 0xE7C
   bool m_bFireIsBurning[64]; // 0xE7C - 0xEBC
   Vector m_BurnNormal[64]; // 0xEBC - 0x11BC
   int32_t m_fireCount; // 0x11BC - 0x11C0
   int32_t m_nInfernoType; // 0x11C0 - 0x11C4
   float m_nFireLifetime; // 0x11C4 - 0x11C8
   bool m_bInPostEffectTime; // 0x11C8 - 0x11C9
   unsigned char pad_11C9[0x3] // 0x11C9 - 0x11CC
   int32_t m_lastFireCount; // 0x11CC - 0x11D0
   int32_t m_nFireEffectTickBegin; // 0x11D0 - 0x11D4
   unsigned char pad_11D4[0x6C0C] // 0x11D4 - 0x7DE0
   int32_t m_drawableCount; // 0x7DE0 - 0x7DE4
   bool m_blosCheck; // 0x7DE4 - 0x7DE5
   unsigned char pad_7DE5[0x3] // 0x7DE5 - 0x7DE8
   int32_t m_nlosperiod; // 0x7DE8 - 0x7DEC
   float m_maxFireHalfWidth; // 0x7DEC - 0x7DF0
   float m_maxFireHeight; // 0x7DF0 - 0x7DF4
   Vector m_minBounds; // 0x7DF4 - 0x7E00
   Vector m_maxBounds; // 0x7E00 - 0x7E0C
   float m_flLastGrassBurnThink; // 0x7E0C - 0x7E10

}; // size - 0x7E20


class C_Knife : public C_WeaponCSBase
{
public:


}; // size - 0x13D0


class C_LightDirectionalEntity : public C_LightEntity
{
public:


}; // size - 0x840


class C_MolotovGrenade : public C_BaseCSGrenade
{
public:


}; // size - 0x1430


class C_OP_RenderPoints : public CParticleFunctionRenderer
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x230 - 0x238

}; // size - 0x240


class C_PathParticleRope : public C_BaseEntity
{
public:

   bool m_bStartActive; // 0x538 - 0x539
   unsigned char pad_539[0x3] // 0x539 - 0x53C
   float m_flMaxSimulationTime; // 0x53C - 0x540
   CUtlSymbolLarge m_iszEffectName; // 0x540 - 0x548
   CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x548 - 0x560
   float m_flParticleSpacing; // 0x560 - 0x564
   float m_flSlack; // 0x564 - 0x568
   float m_flRadius; // 0x568 - 0x56C
   Color m_ColorTint; // 0x56C - 0x570
   int32_t m_nEffectState; // 0x570 - 0x574
   unsigned char pad_574[0x4] // 0x574 - 0x578
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x578 - 0x580
   C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x580 - 0x598
   C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x598 - 0x5B0
   C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x5B0 - 0x5C8
   C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x5C8 - 0x5E0
   C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x5E0 - 0x5F8
   C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x5F8 - 0x610

}; // size - 0x640


class C_PlantedC4 : public CBaseAnimGraph
{
public:

   bool m_bBombTicking; // 0x998 - 0x999
   unsigned char pad_999[0x3] // 0x999 - 0x99C
   int32_t m_nBombSite; // 0x99C - 0x9A0
   int32_t m_nSourceSoundscapeHash; // 0x9A0 - 0x9A4
   unsigned char pad_9A4[0x4] // 0x9A4 - 0x9A8
   EntitySpottedState_t m_entitySpottedState; // 0x9A8 - 0x9C0
   GameTime_t m_flNextGlow; // 0x9C0 - 0x9C4
   GameTime_t m_flNextBeep; // 0x9C4 - 0x9C8
   GameTime_t m_flC4Blow; // 0x9C8 - 0x9CC
   float m_flTimerLength; // 0x9CC - 0x9D0
   float m_bTenSecWarning; // 0x9D0 - 0x9D4
   float m_bTriggerWarning; // 0x9D4 - 0x9D8
   float m_bExplodeWarning; // 0x9D8 - 0x9DC
   bool m_bLocalBRMusicPlayed; // 0x9DC - 0x9DD
   unsigned char pad_9DD[0x3] // 0x9DD - 0x9E0
   float m_flDefuseLength; // 0x9E0 - 0x9E4
   GameTime_t m_flDefuseCountDown; // 0x9E4 - 0x9E8
   bool m_bBombDefused; // 0x9E8 - 0x9E9
   unsigned char pad_9E9[0x3] // 0x9E9 - 0x9EC
   CHandle< C_CSPlayerPawnBase > m_hBombDefuser; // 0x9EC - 0x9F0
   CEntityHandle m_hControlPanel; // 0x9F0 - 0x9F4
   CHandle< C_Multimeter > m_hDefuserMultimeter; // 0x9F4 - 0x9F8
   GameTime_t m_flNextRadarFlashTime; // 0x9F8 - 0x9FC
   bool m_bRadarFlash; // 0x9FC - 0x9FD
   unsigned char pad_9FD[0x3] // 0x9FD - 0xA00
   CHandle< C_CSPlayerPawnBase > m_hLocalDefusingPlayerHandle; // 0xA00 - 0xA04

}; // size - 0xA08


class C_PointCamera : public C_BaseEntity
{
public:

   float m_FOV; // 0x538 - 0x53C
   float m_Resolution; // 0x53C - 0x540
   bool m_bFogEnable; // 0x540 - 0x541
   Color m_FogColor; // 0x541 - 0x545
   unsigned char pad_545[0x3] // 0x545 - 0x548
   float m_flFogStart; // 0x548 - 0x54C
   float m_flFogEnd; // 0x54C - 0x550
   float m_flFogMaxDensity; // 0x550 - 0x554
   bool m_bActive; // 0x554 - 0x555
   bool m_bUseScreenAspectRatio; // 0x555 - 0x556
   unsigned char pad_556[0x2] // 0x556 - 0x558
   float m_flAspectRatio; // 0x558 - 0x55C
   bool m_bNoSky; // 0x55C - 0x55D
   unsigned char pad_55D[0x3] // 0x55D - 0x560
   float m_fBrightness; // 0x560 - 0x564
   float m_flZFar; // 0x564 - 0x568
   float m_flZNear; // 0x568 - 0x56C
   bool m_bDofEnabled; // 0x56C - 0x56D
   unsigned char pad_56D[0x3] // 0x56D - 0x570
   float m_flDofNearBlurry; // 0x570 - 0x574
   float m_flDofNearCrisp; // 0x574 - 0x578
   float m_flDofFarCrisp; // 0x578 - 0x57C
   float m_flDofFarBlurry; // 0x57C - 0x580
   float m_flDofTiltToGround; // 0x580 - 0x584
   float m_TargetFOV; // 0x584 - 0x588
   float m_DegreesPerSecond; // 0x588 - 0x58C
   bool m_bIsOn; // 0x58C - 0x58D
   unsigned char pad_58D[0x3] // 0x58D - 0x590
   C_PointCamera* m_pNext; // 0x590 - 0x598

}; // size - 0x598


class C_PointHMDAnchor : public C_BaseEntity
{
public:

   bool m_bDisabled; // 0x538 - 0x539
   unsigned char pad_539[0x3] // 0x539 - 0x53C
   GameTime_t m_flEnableTime; // 0x53C - 0x540
   int32_t m_nPlayerIndex; // 0x540 - 0x544
   int32_t m_nLastSimulateFrame; // 0x544 - 0x548

}; // size - 0x548


class C_PredictedViewModel : public C_BaseViewModel
{
public:

   QAngle m_LagAnglesHistory; // 0xA00 - 0xA0C
   unsigned char pad_A0C[0xC] // 0xA0C - 0xA18
   Vector m_vPredictedOffset; // 0xA18 - 0xA24

}; // size - 0xA28


class C_RagdollProp : public CBaseAnimGraph
{
public:

   C_NetworkUtlVectorBase< Vector > m_ragPos; // 0x9A0 - 0x9B8
   C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0x9B8 - 0x9D0
   float m_flBlendWeight; // 0x9D0 - 0x9D4
   CHandle< C_BaseEntity > m_hRagdollSource; // 0x9D4 - 0x9D8
   AttachmentHandle_t m_iEyeAttachment; // 0x9D8 - 0x9D9
   unsigned char pad_9D9[0x3] // 0x9D9 - 0x9DC
   float m_flBlendWeightCurrent; // 0x9DC - 0x9E0
   CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0x9E0 - 0x9F8
   CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0x9F8 - 0xA10

}; // size - 0xA10


class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity
{
public:


}; // size - 0x558


class C_Team : public C_BaseEntity
{
public:

   C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x538 - 0x550
   C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers; // 0x550 - 0x568
   int32_t m_iScore; // 0x568 - 0x56C
   char m_szTeamname[129]; // 0x56C - 0x5ED

}; // size - 0x5F0


class C_TeamplayRules : public C_MultiplayRules
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class C_TonemapController2 : public C_BaseEntity
{
public:

   float m_flAutoExposureMin; // 0x538 - 0x53C
   float m_flAutoExposureMax; // 0x53C - 0x540
   float m_flTonemapPercentTarget; // 0x540 - 0x544
   float m_flTonemapPercentBrightPixels; // 0x544 - 0x548
   float m_flTonemapMinAvgLum; // 0x548 - 0x54C
   float m_flExposureAdaptationSpeedUp; // 0x54C - 0x550
   float m_flExposureAdaptationSpeedDown; // 0x550 - 0x554
   float m_flTonemapEVSmoothingRange; // 0x554 - 0x558

}; // size - 0x560


class C_WeaponBaseItem : public C_WeaponCSBase
{
public:

   CountdownTimer m_SequenceCompleteTimer; // 0x13D0 - 0x13E8
   bool m_bRedraw; // 0x13E8 - 0x13E9

}; // size - 0x13F0


class FeBoxRigid_t
{
public:

   CTransform tmFrame2; // 0x0 - 0x20
   uint16_t nNode; // 0x20 - 0x22
   uint16_t nCollisionMask; // 0x22 - 0x24
   Vector vSize; // 0x24 - 0x30
   float flStickiness; // 0x30 - 0x34
   uint16_t nVertexMapIndex; // 0x34 - 0x36
   uint16_t nFlags; // 0x36 - 0x38
   float32 flReserved[2]; // 0x38 - 0x40

}; // size - 0x40


class FeSphereRigid_t
{
public:

   fltx4 vSphere; // 0x0 - 0x10
   float flStickiness; // 0x10 - 0x14
   uint16_t nNode; // 0x14 - 0x16
   uint16_t nCollisionMask; // 0x16 - 0x18
   uint16_t nVertexMapIndex; // 0x18 - 0x1A
   uint16_t nFlags; // 0x1A - 0x1C

}; // size - 0x20


class FeTaperedCapsuleRigid_t
{
public:

   fltx4 vSphere[2]; // 0x0 - 0x20
   float flStickiness; // 0x20 - 0x24
   uint16_t nNode; // 0x24 - 0x26
   uint16_t nCollisionMask; // 0x26 - 0x28
   uint16_t nVertexMapIndex; // 0x28 - 0x2A
   uint16_t nFlags; // 0x2A - 0x2C

}; // size - 0x30


class IChoreoServices
{
public:

   enum class ScriptState_t : std::uint32_t
   {
      SCRIPT_PLAYING = 0,
      SCRIPT_WAIT = 1,
      SCRIPT_POST_IDLE = 2,
      SCRIPT_CLEANUP = 3,
      SCRIPT_WALK_TO_MARK = 4,
      SCRIPT_RUN_TO_MARK = 5,
      SCRIPT_CUSTOM_MOVE_TO_MARK = 6
   };

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

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IClientAlphaProperty
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IParticleEffect
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IParticleSystemDefinition
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IRagdoll
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IntervalTimer
{
public:

   GameTime_t m_timestamp; // 0x8 - 0xC
   WorldGroupId_t m_nWorldGroupId; // 0xC - 0x10

}; // size - 0x10


class IntervalTimer
{
public:

   GameTime_t m_timestamp; // 0x8 - 0xC
   WorldGroupId_t m_nWorldGroupId; // 0xC - 0x10

}; // size - 0x10


class PointDefinition_t
{
public:

   int32_t m_nControlPoint; // 0x0 - 0x4
   bool m_bLocalCoords; // 0x4 - 0x5
   unsigned char pad_5[0x3] // 0x5 - 0x8
   Vector m_vOffset; // 0x8 - 0x14

}; // size - 0x14


class Relationship_t
{
public:

   Disposition_t disposition; // 0x0 - 0x4
   int32_t priority; // 0x4 - 0x8

}; // size - 0x8


class SpawnPointCoopEnemy : public SpawnPoint
{
public:

   enum class BotDefaultBehavior_t : std::uint32_t
   {
      DEFEND_AREA = 0,
      HUNT = 1,
      CHARGE_ENEMY = 2,
      DEFEND_INVESTIGATE = 3
   };

   CUtlSymbolLarge m_szWeaponsToGive; // 0x4B0 - 0x4B8
   CUtlSymbolLarge m_szPlayerModelToUse; // 0x4B8 - 0x4C0
   int32_t m_nArmorToSpawnWith; // 0x4C0 - 0x4C4
   SpawnPointCoopEnemy::BotDefaultBehavior_t m_nDefaultBehavior; // 0x4C4 - 0x4C8
   int32_t m_nBotDifficulty; // 0x4C8 - 0x4CC
   bool m_bIsAgressive; // 0x4CC - 0x4CD
   bool m_bStartAsleep; // 0x4CD - 0x4CE
   unsigned char pad_4CE[0x2] // 0x4CE - 0x4D0
   float m_flHideRadius; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0xC] // 0x4D4 - 0x4E0
   CUtlSymbolLarge m_szBehaviorTreeFile; // 0x4E0 - 0x4E8

}; // size - 0x4E8


class dynpitchvol_base_t
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


class AABB_t
{
public:

   Vector m_vMinBounds; // 0x0 - 0xC
   Vector m_vMaxBounds; // 0xC - 0x18

}; // size - 0x18


class ActiveModelConfig_t
{
public:

   ModelConfigHandle_t m_Handle; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   CUtlSymbolLarge m_Name; // 0x30 - 0x38
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_AssociatedEntities; // 0x38 - 0x50
   CNetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x50 - 0x68

}; // size - 0x68


class ActiveModelConfig_t
{
public:

   ModelConfigHandle_t m_Handle; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   CUtlSymbolLarge m_Name; // 0x30 - 0x38
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities; // 0x38 - 0x50
   C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x50 - 0x68

}; // size - 0x68


class AggregateMeshInfo_t
{
public:

   uint32_t m_nVisClusterMemberOffset; // 0x0 - 0x4
   uint8_t m_nVisClusterMemberCount; // 0x4 - 0x5
   bool m_bHasTransform; // 0x5 - 0x6
   int16_t m_nDrawCallIndex; // 0x6 - 0x8
   Color m_vTintColor; // 0x8 - 0xC
   uint8_t m_nLODGroupMask; // 0xC - 0xD
   unsigned char pad_D[0x3] // 0xD - 0x10
   ObjectTypeFlags_t m_objectFlags; // 0x10 - 0x14
   Vector m_vLODOrigin; // 0x14 - 0x20
   float m_fLODStartDrawDistance; // 0x20 - 0x24
   float m_fLODEndDrawDistance; // 0x24 - 0x28
   float m_fMaxObjectScale; // 0x28 - 0x2C
   int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x2C - 0x30

}; // size - 0x30


class AggregateSceneObject_t
{
public:

   ObjectTypeFlags_t m_allFlags; // 0x0 - 0x4
   ObjectTypeFlags_t m_anyFlags; // 0x4 - 0x8
   int16_t m_nLayer; // 0x8 - 0xA
   unsigned char pad_A[0x6] // 0xA - 0x10
   CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // 0x10 - 0x28
   CUtlVector< uint16 > m_visClusterMembership; // 0x28 - 0x40
   CUtlVector< matrix3x4_t > m_fragmentTransforms; // 0x40 - 0x58
   CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x58 - 0x60

}; // size - 0x60


class AimMatrixOpFixedSettings_t
{
public:

   CAnimAttachment m_attachment; // 0x0 - 0xFFFFFFFF
   CAnimInputDamping m_damping; // 0x80 - 0x90
   CPoseHandle m_poseCacheHandles[10]; // 0x90 - 0xB8
   AimMatrixBlendMode m_eBlendMode; // 0xB8 - 0xBC
   float m_fAngleIncrement; // 0xBC - 0xC0
   int32_t m_nSequenceMaxFrame; // 0xC0 - 0xC4
   int32_t m_nBoneMaskIndex; // 0xC4 - 0xC8
   bool m_bTargetIsPosition; // 0xC8 - 0xC9

}; // size - 0xD0


class AmmoIndex_t
{
public:

   int8_t m_Value; // 0x0 - 0x1

}; // size - 0x1


class AnimComponentID
{
public:

   uint32_t m_id; // 0x0 - 0x4

}; // size - 0x4


class AnimNodeID
{
public:

   uint32_t m_id; // 0x0 - 0x4

}; // size - 0x4


class AnimNodeOutputID
{
public:

   uint32_t m_id; // 0x0 - 0x4

}; // size - 0x4


class AnimParamID
{
public:

   uint32_t m_id; // 0x0 - 0x4

}; // size - 0x4


class AnimScriptHandle
{
public:

   uint32_t m_id; // 0x0 - 0x4

}; // size - 0x4


class AnimStateID
{
public:

   uint32_t m_id; // 0x0 - 0x4

}; // size - 0x4


class AnimTagID
{
public:

   uint32_t m_id; // 0x0 - 0x4

}; // size - 0x4


class AnimationDecodeDebugDumpElement_t
{
public:

   int32_t m_nEntityIndex; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CUtlString m_modelName; // 0x8 - 0x10
   CUtlVector< CUtlString > m_poseParams; // 0x10 - 0x28
   CUtlVector< CUtlString > m_decodeOps; // 0x28 - 0x40
   CUtlVector< CUtlString > m_internalOps; // 0x40 - 0x58
   CUtlVector< CUtlString > m_decodedAnims; // 0x58 - 0x70

}; // size - 0x70


class AnimationDecodeDebugDump_t
{
public:

   AnimationProcessingType_t m_processingType; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8 - 0x20

}; // size - 0x20


class AnimationSnapshot_t : public AnimationSnapshotBase_t
{
public:

   int32_t m_nEntIndex; // 0x110 - 0x114
   unsigned char pad_114[0x4] // 0x114 - 0x118
   CUtlString m_modelName; // 0x118 - 0x120

}; // size - 0x120


class AnimationUpdateListHandle_t
{
public:

   uint32_t m_Value; // 0x0 - 0x4

}; // size - 0x4


class AttachmentHandle_t
{
public:

   uint8_t m_Value; // 0x0 - 0x1

}; // size - 0x1


class BakedLightingInfo_t
{
public:

   uint32_t m_nLightmapVersionNumber; // 0x0 - 0x4
   uint32_t m_nLightmapGameVersionNumber; // 0x4 - 0x8
   Vector2D m_vLightmapUvScale; // 0x8 - 0x10
   bool m_bHasLightmaps; // 0x10 - 0x11
   unsigned char pad_11[0x7] // 0x11 - 0x18
   CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // 0x18 - 0x30

}; // size - 0x30


class BlendItem_t
{
public:

   CUtlVector< TagSpan_t > m_tags; // 0x0 - 0x18
   CAnimUpdateNodeRef m_pChild; // 0x18 - 0x28
   HSequence m_hSequence; // 0x28 - 0x2C
   Vector2D m_vPos; // 0x2C - 0x34
   float m_flDuration; // 0x34 - 0x38
   bool m_bUseCustomDuration; // 0x38 - 0x39

}; // size - 0x40


class CAISound : public CPointEntity
{
public:

   int32_t m_iSoundType; // 0x4A0 - 0x4A4
   int32_t m_iSoundContext; // 0x4A4 - 0x4A8
   int32_t m_iVolume; // 0x4A8 - 0x4AC
   int32_t m_iSoundIndex; // 0x4AC - 0x4B0
   float m_flDuration; // 0x4B0 - 0x4B4
   unsigned char pad_4B4[0x4] // 0x4B4 - 0x4B8
   CUtlSymbolLarge m_iszProxyEntityName; // 0x4B8 - 0x4C0

}; // size - 0x4C0


class CAI_ChangeHintGroup : public CBaseEntity
{
public:

   int32_t m_iSearchType; // 0x4A0 - 0x4A4
   unsigned char pad_4A4[0x4] // 0x4A4 - 0x4A8
   CUtlSymbolLarge m_strSearchName; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_strNewHintGroup; // 0x4B0 - 0x4B8
   float m_flRadius; // 0x4B8 - 0x4BC

}; // size - 0x4C0


class CAI_ChangeTarget : public CBaseEntity
{
public:

   CUtlSymbolLarge m_iszNewTarget; // 0x4A0 - 0x4A8

}; // size - 0x4A8


class CAK47 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CActionComponent : public CAnimComponentBase
{
public:

   CUtlVector< CSmartPtr< CAnimActionBase > > m_actions; // 0x38 - 0x50
   CUtlString m_sName; // 0x50 - 0x58

}; // size - 0x58


class CActionComponentUpdater : public CAnimComponentUpdater
{
public:

   CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x30 - 0x48

}; // size - 0x48


class CAddAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_baseInput; // 0x38 - 0x40
   CAnimNodeConnection m_additiveInput; // 0x40 - 0x48
   BinaryNodeTiming m_timingBehavior; // 0x48 - 0x4C
   float m_flTimingBlend; // 0x4C - 0x50
   BinaryNodeChildOption m_footMotionTiming; // 0x50 - 0x54
   bool m_bApplyToFootMotion; // 0x54 - 0x55
   bool m_bResetBase; // 0x55 - 0x56
   bool m_bResetAdditive; // 0x56 - 0x57
   bool m_bApplyChannelsSeparately; // 0x57 - 0x58
   bool m_bUseModelSpace; // 0x58 - 0x59

}; // size - 0x60


class CAddUpdateNode : public CBinaryUpdateNode
{
public:

   BinaryNodeChildOption m_footMotionTiming; // 0x8C - 0x90
   bool m_bApplyToFootMotion; // 0x90 - 0x91
   bool m_bApplyChannelsSeparately; // 0x91 - 0x92
   bool m_bUseModelSpace; // 0x92 - 0x93

}; // size - 0x98


class CAimConstraint : public CBaseConstraint
{
public:

   Quaternion m_qAimOffset; // 0x70 - 0x80
   uint32_t m_nUpType; // 0x80 - 0x84

}; // size - 0x90


class CAimMatrixAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x40 - 0x48
   CUtlString m_sequenceName; // 0x48 - 0x50
   float m_fAngleIncrement; // 0x50 - 0x54
   AnimVectorSource m_target; // 0x54 - 0x58
   AnimParamID m_param; // 0x58 - 0x5C
   unsigned char pad_5C[0x4] // 0x5C - 0x60
   CUtlString m_attachmentName; // 0x60 - 0x68
   AimMatrixBlendMode m_blendMode; // 0x68 - 0x6C
   unsigned char pad_6C[0x4] // 0x6C - 0x70
   CUtlString m_boneMaskName; // 0x70 - 0x78
   bool m_bResetBase; // 0x78 - 0x79
   bool m_bLockWhenWaning; // 0x79 - 0x7A
   unsigned char pad_7A[0x6] // 0x7A - 0x80
   CAnimInputDamping m_damping; // 0x80 - 0x90

}; // size - 0x90


class CAimMatrixUpdateNode : public CUnaryUpdateNode
{
public:

   AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70 - 0x140
   unsigned char pad_140[0x8] // 0x140 - 0x148
   AnimVectorSource m_target; // 0x148 - 0x14C
   CAnimParamHandle m_paramIndex; // 0x14C - 0x14E
   unsigned char pad_14E[0x2] // 0x14E - 0x150
   HSequence m_hSequence; // 0x150 - 0x154
   bool m_bResetChild; // 0x154 - 0x155
   bool m_bLockWhenWaning; // 0x155 - 0x156

}; // size - 0x160


class CAmbientGeneric : public CPointEntity
{
public:

   float m_radius; // 0x4A0 - 0x4A4
   float m_flMaxRadius; // 0x4A4 - 0x4A8
   soundlevel_t m_iSoundLevel; // 0x4A8 - 0x4AC
   dynpitchvol_t m_dpv; // 0x4AC - 0x510
   bool m_fActive; // 0x510 - 0x511
   bool m_fLooping; // 0x511 - 0x512
   unsigned char pad_512[0x6] // 0x512 - 0x518
   CUtlSymbolLarge m_iszSound; // 0x518 - 0x520
   CUtlSymbolLarge m_sSourceEntName; // 0x520 - 0x528
   CHandle< CBaseEntity > m_hSoundSource; // 0x528 - 0x52C
   CEntityIndex m_nSoundSourceEntIndex; // 0x52C - 0x530

}; // size - 0x538


class CAndCondition : public CConditionBase
{
public:


}; // size - 0x60


class CAnimActivity
{
public:

   CBufferString m_name; // 0x0 - 0x10
   int32_t m_nActivity; // 0x10 - 0x14
   int32_t m_nFlags; // 0x14 - 0x18
   int32_t m_nWeight; // 0x18 - 0x1C

}; // size - 0x20


class CAnimAnimEvent
{
public:

   int32_t m_nFrame; // 0x0 - 0x4
   float m_flCycle; // 0x4 - 0x8
   KeyValues3 m_EventData; // 0x8 - 0x18
   CBufferString m_sLegacyOptions; // 0x18 - 0x28
   CBufferString m_sEventName; // 0x28 - 0x38

}; // size - 0x38


class CAnimBone
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


class CAnimBoneDifference
{
public:

   CBufferString m_name; // 0x0 - 0x10
   CBufferString m_parent; // 0x10 - 0x20
   Vector m_posError; // 0x20 - 0x2C
   bool m_bHasRotation; // 0x2C - 0x2D
   bool m_bHasMovement; // 0x2D - 0x2E

}; // size - 0x30


class CAnimClipData
{
public:

   CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x20 - 0x38
   CUtlString m_clipName; // 0x38 - 0x40

}; // size - 0x48


class CAnimClipDataManager
{
public:

   CUtlHashtable< CUtlString, CSmartPtr< CAnimClipData > > m_itemTable; // 0x18 - 0x38

}; // size - 0x38


class CAnimComponentManager
{
public:

   CUtlVector< CSmartPtr< CAnimComponentBase > > m_components; // 0x8 - 0x20

}; // size - 0x28


class CAnimComponentState : public CAnimState
{
public:


}; // size - 0x70


class CAnimComponentStateTransition : public CAnimStateTransition
{
public:


}; // size - 0x70


class CAnimCycle : public CCycleBase
{
public:


}; // size - 0x4


class CAnimData
{
public:

   CBufferString m_name; // 0x10 - 0x20
   CUtlVector< CAnimDesc > m_animArray; // 0x20 - 0x38
   CUtlVector< CAnimDecoder > m_decoderArray; // 0x38 - 0x50
   int32_t m_nMaxUniqueFrameIndex; // 0x50 - 0x54
   unsigned char pad_54[0x4] // 0x54 - 0x58
   CUtlVector< CAnimFrameSegment > m_segmentArray; // 0x58 - 0x70

}; // size - 0x70


class CAnimDataChannelDesc
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


class CAnimDecoder
{
public:

   CBufferString m_szName; // 0x0 - 0x10
   int32_t m_nVersion; // 0x10 - 0x14
   int32_t m_nType; // 0x14 - 0x18

}; // size - 0x18


class CAnimDesc
{
public:

   CBufferString m_name; // 0x0 - 0x10
   CAnimDesc_Flag m_flags; // 0x10 - 0x18
   float fps; // 0x18 - 0x1C
   unsigned char pad_1C[0x4] // 0x1C - 0x20
   CAnimEncodedFrames m_Data; // 0x20 - 0xF8
   CUtlVector< CAnimMovement > m_movementArray; // 0xF8 - 0x110
   CUtlVector< CAnimAnimEvent > m_eventArray; // 0x110 - 0x128
   CUtlVector< CAnimActivity > m_activityArray; // 0x128 - 0x140
   CUtlVector< CAnimLocalHierarchy > m_hierarchyArray; // 0x140 - 0x158
   float framestalltime; // 0x158 - 0x15C
   Vector m_vecRootMin; // 0x15C - 0x168
   Vector m_vecRootMax; // 0x168 - 0x174
   unsigned char pad_174[0x4] // 0x174 - 0x178
   CUtlVector< Vector > m_vecBoneWorldMin; // 0x178 - 0x190
   CUtlVector< Vector > m_vecBoneWorldMax; // 0x190 - 0x1A8
   CAnimSequenceParams m_sequenceParams; // 0x1A8 - 0x1B0

}; // size - 0x1B0


class CAnimDesc_Flag
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


class CAnimEncodeDifference
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


class CAnimEncodedFrames
{
public:

   CBufferString m_fileName; // 0x0 - 0x10
   int32_t m_nFrames; // 0x10 - 0x14
   int32_t m_nFramesPerBlock; // 0x14 - 0x18
   CUtlVector< CAnimFrameBlockAnim > m_frameblockArray; // 0x18 - 0x30
   CAnimEncodeDifference m_usageDifferences; // 0x30 - 0xD8

}; // size - 0xD8


class CAnimEnum
{
public:

   uint8_t m_value; // 0x0 - 0x1

}; // size - 0x1


class CAnimFoot
{
public:

   CUtlString m_name; // 0x0 - 0x8
   Vector m_vBallOffset; // 0x8 - 0x14
   Vector m_vHeelOffset; // 0x14 - 0x20
   int32_t m_ankleBoneIndex; // 0x20 - 0x24
   int32_t m_toeBoneIndex; // 0x24 - 0x28

}; // size - 0x28


class CAnimFrameBlockAnim
{
public:

   int32_t m_nStartFrame; // 0x0 - 0x4
   int32_t m_nEndFrame; // 0x4 - 0x8
   CUtlVector< int32 > m_segmentIndexArray; // 0x8 - 0x20

}; // size - 0x20


class CAnimFrameSegment
{
public:

   int32_t m_nUniqueFrameIndex; // 0x0 - 0x4
   uint32_t m_nLocalElementMasks; // 0x4 - 0x8
   int32_t m_nLocalChannel; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlBinaryBlock m_container; // 0x10 - 0x28

}; // size - 0x28


class CAnimGraphDebugReplay
{
public:

   CUtlString m_animGraphFileName; // 0x40 - 0x48
   CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // 0x48 - 0x60
   int32_t m_startIndex; // 0x60 - 0x64
   int32_t m_writeIndex; // 0x64 - 0x68
   int32_t m_frameCount; // 0x68 - 0x6C

}; // size - 0x70


class CAnimGraphModelBinding
{
public:

   CUtlString m_modelName; // 0x8 - 0x10
   CSmartPtr< CAnimUpdateSharedData > m_pSharedData; // 0x10 - 0x18

}; // size - 0x28


class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup
{
public:

   bool m_bNetworkingEnabled; // 0x20 - 0x21

}; // size - 0x28


class CAnimGraphNetworkedVariables
{
public:

   CNetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; // 0x8 - 0x20
   CNetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // 0x20 - 0x38
   CNetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // 0x38 - 0x50
   CNetworkUtlVectorBase< int32 > m_PredNetIntVariables; // 0x50 - 0x68
   CNetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // 0x68 - 0x80
   CNetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // 0x80 - 0x98
   CNetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // 0x98 - 0xB0
   CNetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // 0xB0 - 0xC8
   CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; // 0xC8 - 0xE0
   CNetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; // 0xE0 - 0xF8
   CNetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; // 0xF8 - 0x110
   CNetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; // 0x110 - 0x128
   CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; // 0x128 - 0x140
   CNetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; // 0x140 - 0x158
   CNetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; // 0x158 - 0x170
   CNetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; // 0x170 - 0x188
   int32_t m_nBoolVariablesCount; // 0x188 - 0x18C
   int32_t m_nOwnerOnlyBoolVariablesCount; // 0x18C - 0x190
   int32_t m_nRandomSeedOffset; // 0x190 - 0x194
   float m_flLastTeleportTime; // 0x194 - 0x198

}; // size - 0x1A8


class CAnimGraphNetworkedVariables
{
public:

   C_NetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; // 0x8 - 0x20
   C_NetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // 0x20 - 0x38
   C_NetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // 0x38 - 0x50
   C_NetworkUtlVectorBase< int32 > m_PredNetIntVariables; // 0x50 - 0x68
   C_NetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // 0x68 - 0x80
   C_NetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // 0x80 - 0x98
   C_NetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // 0x98 - 0xB0
   C_NetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // 0xB0 - 0xC8
   C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; // 0xC8 - 0xE0
   C_NetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; // 0xE0 - 0xF8
   C_NetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; // 0xF8 - 0x110
   C_NetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; // 0x110 - 0x128
   C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; // 0x128 - 0x140
   C_NetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; // 0x140 - 0x158
   C_NetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; // 0x158 - 0x170
   C_NetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; // 0x170 - 0x188
   int32_t m_nBoolVariablesCount; // 0x188 - 0x18C
   int32_t m_nOwnerOnlyBoolVariablesCount; // 0x18C - 0x190
   int32_t m_nRandomSeedOffset; // 0x190 - 0x194
   unsigned char pad_194[0xF8C] // 0x194 - 0x1120
   float m_flLastTeleportTime; // 0x1120 - 0x1124

}; // size - 0x1138


class CAnimGraphSettingsManager
{
public:

   CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18 - 0x30

}; // size - 0x30


class CAnimInputDamping
{
public:

   DampingSpeedFunction m_speedFunction; // 0x8 - 0xC
   float m_fSpeedScale; // 0xC - 0x10

}; // size - 0x10


class CAnimKeyData
{
public:

   CBufferString m_name; // 0x0 - 0x10
   CUtlVector< CAnimBone > m_boneArray; // 0x10 - 0x28
   CUtlVector< CAnimUser > m_userArray; // 0x28 - 0x40
   CUtlVector< CBufferString > m_morphArray; // 0x40 - 0x58
   int32_t m_nChannelElements; // 0x58 - 0x5C
   unsigned char pad_5C[0x4] // 0x5C - 0x60
   CUtlVector< CAnimDataChannelDesc > m_dataChannelArray; // 0x60 - 0x78

}; // size - 0x78


class CAnimLocalHierarchy
{
public:

   CBufferString m_sBone; // 0x0 - 0x10
   CBufferString m_sNewParent; // 0x10 - 0x20
   int32_t m_nStartFrame; // 0x20 - 0x24
   int32_t m_nPeakFrame; // 0x24 - 0x28
   int32_t m_nTailFrame; // 0x28 - 0x2C
   int32_t m_nEndFrame; // 0x2C - 0x30

}; // size - 0x30


class CAnimMorphDifference
{
public:

   CBufferString m_name; // 0x0 - 0x10

}; // size - 0x10


class CAnimMovement
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


class CAnimNodeConnection
{
public:

   AnimNodeID m_nodeID; // 0x0 - 0x4
   AnimNodeOutputID m_outputID; // 0x4 - 0x8

}; // size - 0x8


class CAnimNodeList
{
public:

   CUtlVector< CAnimNodeBase* > m_nodes; // 0x10 - 0x28

}; // size - 0x28


class CAnimNodePath
{
public:

   AnimNodeID m_path[11]; // 0x0 - 0x2C
   int32_t m_nCount; // 0x2C - 0x30

}; // size - 0x30


class CAnimNodeState : public CAnimState
{
public:

   CAnimNodeConnection m_inputConnection; // 0x70 - 0x78
   bool m_bIsRootMotionExclusive; // 0x78 - 0x79

}; // size - 0x80


class CAnimNodeStateTransition : public CAnimStateTransition
{
public:

   CFloatAnimValue m_blendDuration; // 0x78 - 0x90
   bool m_bReset; // 0x90 - 0x91
   unsigned char pad_91[0x3] // 0x91 - 0x94
   ResetCycleOption m_resetCycleOption; // 0x94 - 0x98
   CFloatAnimValue m_flFixedCycleValue; // 0x98 - 0xB0
   CBlendCurve m_blendCurve; // 0xB0 - 0xB8

}; // size - 0xB8


class CAnimParamHandle
{
public:

   AnimParamType_t m_type; // 0x0 - 0x1
   uint8_t m_index; // 0x1 - 0x2

}; // size - 0x2


class CAnimParamHandleMap
{
public:

   CUtlHashtable< uint16, int16 > m_list; // 0x0 - 0x20

}; // size - 0x20


class CAnimParamSpan
{
public:

   CUtlVector< CAnimParamSpanSample > m_samples; // 0x20 - 0x38
   AnimParamID m_id; // 0x38 - 0x3C
   float m_flStartCycle; // 0x3C - 0x40
   float m_flEndCycle; // 0x40 - 0x44

}; // size - 0x48


class CAnimParamSpanSample
{
public:

   CAnimVariant m_value; // 0x8 - 0x19
   unsigned char pad_19[0x3] // 0x19 - 0x1C
   float m_flCycle; // 0x1C - 0x20

}; // size - 0x20


class CAnimParameterList
{
public:

   CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // 0x20 - 0x38

}; // size - 0x58


class CAnimParameterListUpdater
{
public:

   CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters; // 0x18 - 0x30
   CUtlHashtable< AnimParamID, int32 > m_idToIndexMap; // 0x30 - 0x50
   CUtlHashtable< CUtlString, int32 > m_nameToIndexMap; // 0x50 - 0x70
   CUtlVector< CAnimParamHandle > m_indexToHandle; // 0x70 - 0x88
   CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > > m_autoResetParams; // 0x88 - 0xA0
   CUtlHashtable< CAnimParamHandle, int16 > m_autoResetMap; // 0xA0 - 0xC0

}; // size - 0x100


class CAnimReplayFrame
{
public:

   CUtlVector< CUtlBinaryBlock > m_inputDataBlocks; // 0x10 - 0x28
   CUtlBinaryBlock m_instanceData; // 0x28 - 0x40
   CTransform m_startingLocalToWorldTransform; // 0x40 - 0x60
   CTransform m_localToWorldTransform; // 0x60 - 0x80
   float m_timeStamp; // 0x80 - 0x84

}; // size - 0x90


class CAnimScriptComponent : public CAnimComponentBase
{
public:

   CUtlString m_sName; // 0x40 - 0x48
   CUtlString m_scriptFilename; // 0x48 - 0x50

}; // size - 0x58


class CAnimScriptComponentUpdater : public CAnimComponentUpdater
{
public:

   AnimScriptHandle m_hScript; // 0x30 - 0x34

}; // size - 0x38


class CAnimScriptManager
{
public:

   CUtlVector< ScriptInfo_t > m_scriptInfo; // 0x10 - 0x28

}; // size - 0x110


class CAnimSequenceParams
{
public:

   float m_flFadeInTime; // 0x0 - 0x4
   float m_flFadeOutTime; // 0x4 - 0x8

}; // size - 0x8


class CAnimSkeleton
{
public:

   CUtlVector< CTransform > m_localSpaceTransforms; // 0x10 - 0x28
   CUtlVector< CTransform > m_modelSpaceTransforms; // 0x28 - 0x40
   CUtlVector< CUtlString > m_boneNames; // 0x40 - 0x58
   CUtlVector< CUtlVector< int32 > > m_children; // 0x58 - 0x70
   CUtlVector< int32 > m_parents; // 0x70 - 0x88
   CUtlVector< CAnimFoot > m_feet; // 0x88 - 0xA0
   CUtlVector< CUtlString > m_morphNames; // 0xA0 - 0xB8
   CUtlVector< int32 > m_lodBoneCounts; // 0xB8 - 0xD0

}; // size - 0xD0


class CAnimStateList
{
public:

   CUtlVector< CAnimState* > m_states; // 0x10 - 0x28

}; // size - 0x28


class CAnimStateMachine
{
public:

   CUtlVector< CSmartPtr< CAnimState > > m_states; // 0x8 - 0x20

}; // size - 0x28


class CAnimStateMachineUpdater
{
public:

   CUtlVector< CStateUpdateData > m_states; // 0x8 - 0x20
   CUtlVector< CTransitionUpdateData > m_transitions; // 0x20 - 0x38
   unsigned char pad_38[0x18] // 0x38 - 0x50
   int32_t m_startStateIndex; // 0x50 - 0x54

}; // size - 0x58


class CAnimTagManager
{
public:

   CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18 - 0x30

}; // size - 0x58


class CAnimTagManagerUpdater
{
public:

   CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18 - 0x30

}; // size - 0x38


class CAnimTagSpan
{
public:

   AnimTagID m_id; // 0x20 - 0x24
   float m_fStartCycle; // 0x24 - 0x28
   float m_fDuration; // 0x28 - 0x2C

}; // size - 0x30


class CAnimUpdateNodeRef
{
public:

   int32_t m_nodeIndex; // 0x8 - 0xC

}; // size - 0x10


class CAnimUpdateSharedData
{
public:

   CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes; // 0x10 - 0x28
   CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap; // 0x28 - 0x48
   CUtlVector< CSmartPtr< CAnimComponentUpdater > > m_components; // 0x48 - 0x60
   CSmartPtr< CAnimParameterListUpdater > m_pParamListUpdater; // 0x60 - 0x68
   CSmartPtr< CAnimTagManagerUpdater > m_pTagManagerUpdater; // 0x68 - 0x70
   CSmartPtr< CAnimScriptManager > m_scriptManager; // 0x70 - 0x78
   CAnimGraphSettingsManager m_settings; // 0x78 - 0xA8
   CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache; // 0xA8 - 0xB0
   CSmartPtr< CAnimSkeleton > m_pSkeleton; // 0xB0 - 0xB8
   CAnimNodePath m_rootNodePath; // 0xB8 - 0xE8

}; // size - 0x100


class CAnimUser
{
public:

   CBufferString m_name; // 0x0 - 0x10
   int32_t m_nType; // 0x10 - 0x14

}; // size - 0x18


class CAnimUserDifference
{
public:

   CBufferString m_name; // 0x0 - 0x10
   int32_t m_nType; // 0x10 - 0x14

}; // size - 0x18


class CAnimationGraph : public CAnimationSubGraph
{
public:

   CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // 0xE8 - 0xF0
   unsigned char pad_F0[0x8] // 0xF0 - 0xF8
   CAnimClipDataManager m_clipDataManager; // 0xF8 - 0x130
   unsigned char pad_130[0x10] // 0x130 - 0x140
   CUtlString m_modelName; // 0x140 - 0x148
   CUtlString m_previewModelName; // 0x148 - 0x150

}; // size - 0x150


class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:

   CTransform m_xWsTransform; // 0x10 - 0x30
   float m_flAxisSize; // 0x30 - 0x34

}; // size - 0x40


class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase
{
public:

   VectorAligned m_vWsPositionStart; // 0x10 - 0x20
   VectorAligned m_vWsPositionEnd; // 0x20 - 0x30
   Color m_Color; // 0x30 - 0x34

}; // size - 0x40


class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase
{
public:

   VectorAligned m_vWsCenter; // 0x10 - 0x20
   VectorAligned m_vWsStart; // 0x20 - 0x30
   VectorAligned m_vWsEnd; // 0x30 - 0x40
   Color m_Color; // 0x40 - 0x44

}; // size - 0x50


class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase
{
public:

   VectorAligned m_vWsPosition; // 0x10 - 0x20
   float m_flRadius; // 0x20 - 0x24
   Color m_Color; // 0x24 - 0x28

}; // size - 0x30


class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase
{
public:

   VectorAligned m_vWsPosition; // 0x10 - 0x20
   Color m_Color; // 0x20 - 0x24
   unsigned char pad_24[0x4] // 0x24 - 0x28
   CUtlString m_Text; // 0x28 - 0x30

}; // size - 0x30


class CAnimationGroup
{
public:

   uint32_t m_nFlags; // 0x10 - 0x14
   unsigned char pad_14[0x4] // 0x14 - 0x18
   CBufferString m_name; // 0x18 - 0x28
   unsigned char pad_28[0x38] // 0x28 - 0x60
   CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle; // 0x60 - 0x78
   CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle; // 0x78 - 0x90
   CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle; // 0x90 - 0x98
   CAnimKeyData m_decodeKey; // 0x98 - 0x110
   CUtlVector< CBufferString > m_szScripts; // 0x110 - 0x128

}; // size - 0x130


class CAttachment
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

}; // size - 0x90


class CAttributeContainer : public CAttributeManager
{
public:

   CEconItemView m_Item; // 0x50 - 0x2C8

}; // size - 0x2C8


class CAttributeList
{
public:

   CUtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes; // 0x8 - 0x58
   CAttributeManager* m_pManager; // 0x58 - 0x60

}; // size - 0x60


class CAttributeList
{
public:

   C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes; // 0x8 - 0x58
   CAttributeManager* m_pManager; // 0x58 - 0x60

}; // size - 0x60




class CAudioAnimTag : public CAnimTagBase
{
public:

   CUtlString m_clipName; // 0x40 - 0x48
   CUtlString m_attachmentName; // 0x48 - 0x50
   float m_flVolume; // 0x50 - 0x54
   bool m_bStopWhenTagEnds; // 0x54 - 0x55
   bool m_bStopWhenGraphEnds; // 0x55 - 0x56
   bool m_bPlayOnServer; // 0x56 - 0x57
   bool m_bPlayOnClient; // 0x57 - 0x58

}; // size - 0x58


class CBRC4Target : public CBaseAnimGraph
{
public:

   CHandle< CBaseEntity > m_hPlayerThatActivatedMe; // 0x848 - 0x84C
   bool m_bBrokenOpen; // 0x84C - 0x84D
   unsigned char pad_84D[0x3] // 0x84D - 0x850
   float m_flRadius; // 0x850 - 0x854

}; // size - 0x858


class CBaseAnimGraphController : public CSkeletonAnimationController
{
public:

   CNetworkedSequenceOperation m_baseLayer; // 0x18 - 0x40
   CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x40 - 0x1178
   unsigned char pad_1178[0x8] // 0x1178 - 0x1180
   bool m_bSequenceFinished; // 0x1180 - 0x1181
   unsigned char pad_1181[0x3] // 0x1181 - 0x1184
   float m_flLastEventCycle; // 0x1184 - 0x1188
   float m_flLastEventAnimTime; // 0x1188 - 0x118C
   CNetworkedQuantizedFloat m_flPlaybackRate; // 0x118C - 0x1194
   float m_flPrevAnimTime; // 0x1194 - 0x1198
   bool m_bClientSideAnimation; // 0x1198 - 0x1199
   bool m_bNetworkedAnimationInputsChanged; // 0x1199 - 0x119A
   uint8_t m_nPrevNewSequenceParity; // 0x119A - 0x119B
   uint8_t m_nPrevResetEventsParity; // 0x119B - 0x119C
   int32_t m_nNewSequenceParity; // 0x119C - 0x11A0
   int32_t m_nResetEventsParity; // 0x11A0 - 0x11A4
   AnimLoopMode_t m_nAnimLoopMode; // 0x11A4 - 0x11A8
   unsigned char pad_11A8[0x94] // 0x11A8 - 0x123C
   AnimationUpdateListHandle_t m_hAnimationUpdate; // 0x123C - 0x1240
   HSequence m_hLastAnimEventSequence; // 0x1240 - 0x1244

}; // size - 0x1298


class CBaseAnimGraphController : public CSkeletonAnimationController
{
public:

   CNetworkedSequenceOperation m_baseLayer; // 0x18 - 0x40
   CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x40 - 0x1E8
   unsigned char pad_1E8[0x8] // 0x1E8 - 0x1F0
   bool m_bSequenceFinished; // 0x1F0 - 0x1F1
   unsigned char pad_1F1[0x3] // 0x1F1 - 0x1F4
   float m_flLastEventCycle; // 0x1F4 - 0x1F8
   float m_flLastEventAnimTime; // 0x1F8 - 0x1FC
   CNetworkedQuantizedFloat m_flPlaybackRate; // 0x1FC - 0x204
   float m_flPrevAnimTime; // 0x204 - 0x208
   bool m_bClientSideAnimation; // 0x208 - 0x209
   bool m_bNetworkedAnimationInputsChanged; // 0x209 - 0x20A
   unsigned char pad_20A[0x2] // 0x20A - 0x20C
   int32_t m_nNewSequenceParity; // 0x20C - 0x210
   int32_t m_nResetEventsParity; // 0x210 - 0x214
   AnimLoopMode_t m_nAnimLoopMode; // 0x214 - 0x218
   unsigned char pad_218[0x94] // 0x218 - 0x2AC
   AnimationUpdateListHandle_t m_hAnimationUpdate; // 0x2AC - 0x2B0

}; // size - 0x2B0


class CBaseDMStart : public CPointEntity
{
public:

   CUtlSymbolLarge m_Master; // 0x4A0 - 0x4A8

}; // size - 0x4A8


class CBaseFlexAlias_funCBaseFlex : public CBaseFlex
{
public:


}; // size - 0x8B0


class CBaseIssue
{
public:

   char m_szTypeString[64]; // 0x20 - 0x60
   char m_szDetailsString[260]; // 0x60 - 0x164
   int32_t m_iNumYesVotes; // 0x164 - 0x168
   int32_t m_iNumNoVotes; // 0x168 - 0x16C
   int32_t m_iNumPotentialVotes; // 0x16C - 0x170
   CVoteController* m_pVoteController; // 0x170 - 0x178

}; // size - 0x178


class CBaseMoveBehavior : public CPathKeyFrame
{
public:

   int32_t m_iPositionInterpolator; // 0x500 - 0x504
   int32_t m_iRotationInterpolator; // 0x504 - 0x508
   float m_flAnimStartTime; // 0x508 - 0x50C
   float m_flAnimEndTime; // 0x50C - 0x510
   float m_flAverageSpeedAcrossFrame; // 0x510 - 0x514
   unsigned char pad_514[0x4] // 0x514 - 0x518
   CPathKeyFrame* m_pCurrentKeyFrame; // 0x518 - 0x520
   CPathKeyFrame* m_pTargetKeyFrame; // 0x520 - 0x528
   CPathKeyFrame* m_pPreKeyFrame; // 0x528 - 0x530
   CPathKeyFrame* m_pPostKeyFrame; // 0x530 - 0x538
   float m_flTimeIntoFrame; // 0x538 - 0x53C
   int32_t m_iDirection; // 0x53C - 0x540

}; // size - 0x540


class CBasePlayerVData : public CEntitySubclassVDataBase
{
public:

   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28 - 0x108
   CSkillFloat m_flHeadDamageMultiplier; // 0x108 - 0x118
   CSkillFloat m_flChestDamageMultiplier; // 0x118 - 0x128
   CSkillFloat m_flStomachDamageMultiplier; // 0x128 - 0x138
   CSkillFloat m_flArmDamageMultiplier; // 0x138 - 0x148
   CSkillFloat m_flLegDamageMultiplier; // 0x148 - 0x158
   float m_flHoldBreathTime; // 0x158 - 0x15C
   float m_flDrowningDamageInterval; // 0x15C - 0x160
   int32_t m_nDrowningDamageInitial; // 0x160 - 0x164
   int32_t m_nDrowningDamageMax; // 0x164 - 0x168
   int32_t m_nWaterSpeed; // 0x168 - 0x16C
   float m_flUseRange; // 0x16C - 0x170
   float m_flUseAngleTolerance; // 0x170 - 0x174
   float m_flCrouchTime; // 0x174 - 0x178

}; // size - 0x178


class CBasePlayerVData : public CEntitySubclassVDataBase
{
public:

   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28 - 0x108
   CSkillFloat m_flHeadDamageMultiplier; // 0x108 - 0x118
   CSkillFloat m_flChestDamageMultiplier; // 0x118 - 0x128
   CSkillFloat m_flStomachDamageMultiplier; // 0x128 - 0x138
   CSkillFloat m_flArmDamageMultiplier; // 0x138 - 0x148
   CSkillFloat m_flLegDamageMultiplier; // 0x148 - 0x158
   float m_flHoldBreathTime; // 0x158 - 0x15C
   float m_flDrowningDamageInterval; // 0x15C - 0x160
   int32_t m_nDrowningDamageInitial; // 0x160 - 0x164
   int32_t m_nDrowningDamageMax; // 0x164 - 0x168
   int32_t m_nWaterSpeed; // 0x168 - 0x16C
   float m_flUseRange; // 0x16C - 0x170
   float m_flUseAngleTolerance; // 0x170 - 0x174
   float m_flCrouchTime; // 0x174 - 0x178

}; // size - 0x178


class CBindPoseAnimNode : public CAnimNodeBase
{
public:


}; // size - 0x38


class CBindPoseUpdateNode : public CLeafUpdateNode
{
public:


}; // size - 0x60


class CBlend2DAnimNode : public CAnimNodeBase
{
public:

   CUtlVector< CSmartPtr< CBlend2DItemBase > > m_items; // 0x50 - 0x68
   CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x68 - 0x80
   CUtlVector< CSmartPtr< CAnimParamSpan > > m_paramSpans; // 0x80 - 0x98
   AnimValueSource m_blendSourceX; // 0x98 - 0x9C
   AnimParamID m_paramX; // 0x9C - 0xA0
   AnimValueSource m_blendSourceY; // 0xA0 - 0xA4
   AnimParamID m_paramY; // 0xA4 - 0xA8
   bool m_bLoop; // 0xA8 - 0xA9
   bool m_bLockBlendOnReset; // 0xA9 - 0xAA
   bool m_bLockWhenWaning; // 0xAA - 0xAB
   unsigned char pad_AB[0x1] // 0xAB - 0xAC
   float m_playbackSpeed; // 0xAC - 0xB0
   CAnimInputDamping m_damping; // 0xB0 - 0xC0
   bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xC0 - 0xC1

}; // size - 0xC8


class CBlend2DUpdateNode : public CAnimUpdateNodeBase
{
public:

   CUtlVector< BlendItem_t > m_items; // 0x60 - 0x78
   CUtlVector< TagSpan_t > m_tags; // 0x78 - 0x90
   CParamSpanUpdater m_paramSpans; // 0x90 - 0xA8
   CUtlVector< int32 > m_nodeItemIndices; // 0xA8 - 0xC0
   CAnimInputDamping m_damping; // 0xC0 - 0xD0
   AnimValueSource m_blendSourceX; // 0xD0 - 0xD4
   CAnimParamHandle m_paramX; // 0xD4 - 0xD6
   unsigned char pad_D6[0x2] // 0xD6 - 0xD8
   AnimValueSource m_blendSourceY; // 0xD8 - 0xDC
   CAnimParamHandle m_paramY; // 0xDC - 0xDE
   unsigned char pad_DE[0x2] // 0xDE - 0xE0
   Blend2DMode m_eBlendMode; // 0xE0 - 0xE4
   float m_playbackSpeed; // 0xE4 - 0xE8
   bool m_bLoop; // 0xE8 - 0xE9
   bool m_bLockBlendOnReset; // 0xE9 - 0xEA
   bool m_bLockWhenWaning; // 0xEA - 0xEB
   bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xEB - 0xEC

}; // size - 0xF0


class CBlendAnimNode : public CAnimNodeBase
{
public:

   CUtlVector< CBlendNodeChild > m_children; // 0x48 - 0x60
   AnimValueSource m_blendValueSource; // 0x60 - 0x64
   AnimParamID m_param; // 0x64 - 0x68
   BlendKeyType m_blendKeyType; // 0x68 - 0x6C
   bool m_bLockBlendOnReset; // 0x6C - 0x6D
   bool m_bSyncCycles; // 0x6D - 0x6E
   bool m_bLoop; // 0x6E - 0x6F
   bool m_bLockWhenWaning; // 0x6F - 0x70
   CAnimInputDamping m_damping; // 0x70 - 0x80

}; // size - 0x80


class CBlendCurve
{
public:

   float m_flControlPoint1; // 0x0 - 0x4
   float m_flControlPoint2; // 0x4 - 0x8

}; // size - 0x8


class CBlendNodeChild
{
public:

   CAnimNodeConnection m_inputConnection; // 0x8 - 0x10
   CUtlString m_name; // 0x10 - 0x18
   float m_blendValue; // 0x18 - 0x1C

}; // size - 0x20


class CBlendUpdateNode : public CAnimUpdateNodeBase
{
public:

   CUtlVector< CAnimUpdateNodeRef > m_children; // 0x60 - 0x78
   CUtlVector< uint8 > m_sortedOrder; // 0x78 - 0x90
   CUtlVector< float32 > m_targetValues; // 0x90 - 0xA8
   unsigned char pad_A8[0x4] // 0xA8 - 0xAC
   AnimValueSource m_blendValueSource; // 0xAC - 0xB0
   CAnimParamHandle m_paramIndex; // 0xB0 - 0xB2
   unsigned char pad_B2[0x6] // 0xB2 - 0xB8
   CAnimInputDamping m_damping; // 0xB8 - 0xC8
   BlendKeyType m_blendKeyType; // 0xC8 - 0xCC
   bool m_bLockBlendOnReset; // 0xCC - 0xCD
   bool m_bSyncCycles; // 0xCD - 0xCE
   bool m_bLoop; // 0xCE - 0xCF
   bool m_bLockWhenWaning; // 0xCF - 0xD0

}; // size - 0xD0


class CBlockSelectionMetric : public CMotionMetricBase
{
public:


}; // size - 0x28


class CBlockSelectionMetricEvaluator : public CMotionMetricEvaluator
{
public:


}; // size - 0x50


class CBlood : public CPointEntity
{
public:

   QAngle m_vecSprayAngles; // 0x4A0 - 0x4AC
   Vector m_vecSprayDir; // 0x4AC - 0x4B8
   float m_flAmount; // 0x4B8 - 0x4BC
   int32_t m_Color; // 0x4BC - 0x4C0

}; // size - 0x4C0


class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance
{
public:

   CBaseAnimGraphController m_animationController; // 0x470 - 0x1708
   CNetworkVarChainer __m_pChainEntity; // 0x1708 - 0x1730

}; // size - 0x1730


class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance
{
public:

   CBaseAnimGraphController m_animationController; // 0x470 - 0x720
   CNetworkVarChainer __m_pChainEntity; // 0x720 - 0x748

}; // size - 0x750


class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x470 - 0x498

}; // size - 0x4A0


class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x470 - 0x498

}; // size - 0x4A0


class CBodyComponentPoint : public CBodyComponent
{
public:

   CGameSceneNode m_sceneNode; // 0x50 - 0x1A0
   CNetworkVarChainer __m_pChainEntity; // 0x1A0 - 0x1C8

}; // size - 0x1D0


class CBodyComponentPoint : public CBodyComponent
{
public:

   CGameSceneNode m_sceneNode; // 0x50 - 0x1A0
   CNetworkVarChainer __m_pChainEntity; // 0x1A0 - 0x1C8

}; // size - 0x1D0


class CBodyGroupAnimTag : public CAnimTagBase
{
public:

   int32_t m_nPriority; // 0x40 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   CUtlVector< CBodyGroupSetting > m_bodyGroupSettings; // 0x48 - 0x60

}; // size - 0x60


class CBodyGroupSetting
{
public:

   CUtlString m_BodyGroupName; // 0x0 - 0x8
   int32_t m_nBodyGroupOption; // 0x8 - 0xC

}; // size - 0x10


class CBombTarget : public CBaseTrigger
{
public:

   CEntityIOOutput m_OnBombExplode; // 0x898 - 0x8C0
   CEntityIOOutput m_OnBombPlanted; // 0x8C0 - 0x8E8
   CEntityIOOutput m_OnBombDefused; // 0x8E8 - 0x910
   bool m_bIsBombSiteB; // 0x910 - 0x911
   bool m_bIsHeistBombTarget; // 0x911 - 0x912
   bool m_bBombPlantedHere; // 0x912 - 0x913
   unsigned char pad_913[0x5] // 0x913 - 0x918
   CUtlSymbolLarge m_szMountTarget; // 0x918 - 0x920
   CHandle< CBaseEntity > m_hInstructorHint; // 0x920 - 0x924

}; // size - 0x928


class CBoneConstraintPoseSpaceBone : public CBaseConstraint
{
public:

   class Input_t
   {
   public:

      Vector m_inputValue; // 0x0 - 0xC
      unsigned char pad_C[0x4] // 0xC - 0x10
      CUtlVector< CTransform > m_outputTransformList; // 0x10 - 0x28

   }; // size - 0x28

   CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList; // 0x70 - 0x88

}; // size - 0x98



class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase
{
public:

   class Input_t
   {
   public:

      Vector m_inputValue; // 0x0 - 0xC
      unsigned char pad_C[0x4] // 0xC - 0x10
      CUtlVector< float32 > m_outputWeightList; // 0x10 - 0x28

   }; // size - 0x28

   CUtlString m_sBoneName; // 0x28 - 0x30
   CUtlString m_sAttachmentName; // 0x30 - 0x38
   CUtlVector< CUtlString > m_outputMorph; // 0x38 - 0x50
   CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList; // 0x50 - 0x68
   bool m_bClamp; // 0x68 - 0x69

}; // size - 0xA8



class CBoneMaskAnimNode : public CAnimNodeBase
{
public:

   CUtlString m_weightListName; // 0x38 - 0x40
   CAnimNodeConnection m_inputConnection1; // 0x40 - 0x48
   CAnimNodeConnection m_inputConnection2; // 0x48 - 0x50
   BoneMaskBlendSpace m_blendSpace; // 0x50 - 0x54
   bool m_bUseBlendScale; // 0x54 - 0x55
   unsigned char pad_55[0x3] // 0x55 - 0x58
   AnimValueSource m_blendValueSource; // 0x58 - 0x5C
   AnimParamID m_blendParameter; // 0x5C - 0x60
   BinaryNodeTiming m_timingBehavior; // 0x60 - 0x64
   float m_flTimingBlend; // 0x64 - 0x68
   float m_flRootMotionBlend; // 0x68 - 0x6C
   BinaryNodeChildOption m_footMotionTiming; // 0x6C - 0x70
   bool m_bResetChild1; // 0x70 - 0x71
   bool m_bResetChild2; // 0x71 - 0x72

}; // size - 0x78


class CBoneMaskUpdateNode : public CBinaryUpdateNode
{
public:

   int32_t m_nWeightListIndex; // 0x8C - 0x90
   float m_flRootMotionBlend; // 0x90 - 0x94
   BoneMaskBlendSpace m_blendSpace; // 0x94 - 0x98
   BinaryNodeChildOption m_footMotionTiming; // 0x98 - 0x9C
   bool m_bUseBlendScale; // 0x9C - 0x9D
   unsigned char pad_9D[0x3] // 0x9D - 0xA0
   AnimValueSource m_blendValueSource; // 0xA0 - 0xA4
   CAnimParamHandle m_hBlendParameter; // 0xA4 - 0xA6

}; // size - 0xA8


class CBonePositionMetric : public CMotionMetricBase
{
public:

   CUtlString m_boneName; // 0x28 - 0x30

}; // size - 0x30


class CBonePositionMetricEvaluator : public CMotionMetricEvaluator
{
public:

   int32_t m_nBoneIndex; // 0x50 - 0x54

}; // size - 0x58


class CBoneVelocityMetric : public CMotionMetricBase
{
public:

   CUtlString m_boneName; // 0x28 - 0x30

}; // size - 0x30


class CBoneVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:

   int32_t m_nBoneIndex; // 0x50 - 0x54

}; // size - 0x58


class CBoolAnimParameter : public CAnimParameterBase
{
public:

   bool m_bDefaultValue; // 0x78 - 0x79

}; // size - 0x80


class CBreachCharge : public CWeaponCSBase
{
public:


}; // size - 0xD50


class CBreachChargeProjectile : public CBaseGrenade
{
public:

   bool m_bShouldExplode; // 0x958 - 0x959
   unsigned char pad_959[0x3] // 0x959 - 0x95C
   CHandle< CBaseEntity > m_weaponThatThrewMe; // 0x95C - 0x960
   int32_t m_nParentBoneIndex; // 0x960 - 0x964
   Vector m_vecParentBonePos; // 0x964 - 0x970
   bool m_bDefused; // 0x970 - 0x971
   bool m_bUnstuckFromPlayer; // 0x971 - 0x972
   bool m_bResolvedParent; // 0x972 - 0x973
   unsigned char pad_973[0x1] // 0x973 - 0x974
   Vector m_vecLastKnownValidPos; // 0x974 - 0x980
   CEntityHandle m_hDesiredParent; // 0x980 - 0x984

}; // size - 0x988


class CBtActionAim : public CBtNode
{
public:

   CUtlString m_szSensorInputKey; // 0x68 - 0x70
   unsigned char pad_70[0x10] // 0x70 - 0x80
   CUtlString m_szAimReadyKey; // 0x80 - 0x88
   float m_flZoomCooldownTimestamp; // 0x88 - 0x8C
   bool m_bDoneAiming; // 0x8C - 0x8D
   unsigned char pad_8D[0x3] // 0x8D - 0x90
   float m_flLerpStartTime; // 0x90 - 0x94
   float m_flNextLookTargetLerpTime; // 0x94 - 0x98
   float m_flPenaltyReductionRatio; // 0x98 - 0x9C
   QAngle m_NextLookTarget; // 0x9C - 0xA8
   CountdownTimer m_AimTimer; // 0xA8 - 0xC0
   CountdownTimer m_SniperHoldTimer; // 0xC0 - 0xD8
   CountdownTimer m_FocusIntervalTimer; // 0xD8 - 0xF0
   bool m_bAcquired; // 0xF0 - 0xF1

}; // size - 0xF8


class CBtActionCombatPositioning : public CBtNode
{
public:

   CUtlString m_szSensorInputKey; // 0x68 - 0x70
   unsigned char pad_70[0x10] // 0x70 - 0x80
   CUtlString m_szIsAttackingKey; // 0x80 - 0x88
   CountdownTimer m_ActionTimer; // 0x88 - 0xA0
   bool m_bCrouching; // 0xA0 - 0xA1

}; // size - 0xB0


class CBtActionMoveTo : public CBtNode
{
public:

   CUtlString m_szDestinationInputKey; // 0x60 - 0x68
   CUtlString m_szHidingSpotInputKey; // 0x68 - 0x70
   CUtlString m_szThreatInputKey; // 0x70 - 0x78
   Vector m_vecDestination; // 0x78 - 0x84
   bool m_bAutoLookAdjust; // 0x84 - 0x85
   bool m_bComputePath; // 0x85 - 0x86
   unsigned char pad_86[0x2] // 0x86 - 0x88
   float m_flDamagingAreasPenaltyCost; // 0x88 - 0x8C
   unsigned char pad_8C[0x4] // 0x8C - 0x90
   CountdownTimer m_CheckApproximateCornersTimer; // 0x90 - 0xA8
   CountdownTimer m_CheckHighPriorityItem; // 0xA8 - 0xC0
   CountdownTimer m_RepathTimer; // 0xC0 - 0xD8
   float m_flArrivalEpsilon; // 0xD8 - 0xDC
   float m_flAdditionalArrivalEpsilon2D; // 0xDC - 0xE0
   float m_flHidingSpotCheckDistanceThreshold; // 0xE0 - 0xE4
   float m_flNearestAreaDistanceThreshold; // 0xE4 - 0xE8

}; // size - 0xE8


class CBtActionParachutePositioning : public CBtNode
{
public:

   CountdownTimer m_ActionTimer; // 0x58 - 0x70

}; // size - 0x78


class CBtNodeComposite : public CBtNode
{
public:


}; // size - 0x58


class CBtNodeConditionInactive : public CBtNodeCondition
{
public:

   float m_flRoundStartThresholdSeconds; // 0x78 - 0x7C
   float m_flSensorInactivityThresholdSeconds; // 0x7C - 0x80
   CountdownTimer m_SensorInactivityTimer; // 0x80 - 0x98

}; // size - 0x98


class CBubbling : public CBaseModelEntity
{
public:

   int32_t m_density; // 0x6F0 - 0x6F4
   int32_t m_frequency; // 0x6F4 - 0x6F8
   int32_t m_state; // 0x6F8 - 0x6FC

}; // size - 0x700


class CBumpMine : public CWeaponCSBase
{
public:


}; // size - 0xD50


class CBumpMineProjectile : public CBaseGrenade
{
public:

   bool m_bShouldExplode; // 0x958 - 0x959
   unsigned char pad_959[0x3] // 0x959 - 0x95C
   int32_t m_nParentBoneIndex; // 0x95C - 0x960
   Vector m_vecParentBonePos; // 0x960 - 0x96C
   bool m_bArmed; // 0x96C - 0x96D
   bool m_bDefused; // 0x96D - 0x96E
   bool m_bUnstuckFromPlayer; // 0x96E - 0x96F
   unsigned char pad_96F[0x1] // 0x96F - 0x970
   CUtlVector< CHandle< CBaseEntity > > m_vecTargetedObjects; // 0x970 - 0x988
   unsigned char pad_988[0x28] // 0x988 - 0x9B0
   bool m_bResolvedParent; // 0x9B0 - 0x9B1
   unsigned char pad_9B1[0x3] // 0x9B1 - 0x9B4
   Vector m_vecLastKnownValidPos; // 0x9B4 - 0x9C0
   CEntityHandle m_hDesiredParent; // 0x9C0 - 0x9C4
   bool m_bBeingUsed; // 0x9C4 - 0x9C5

}; // size - 0x9C8


class CBuoyancyHelper
{
public:

   float m_flFluidDensity; // 0x18 - 0x1C

}; // size - 0x20


class CBuoyancyHelper
{
public:

   float m_flFluidDensity; // 0x18 - 0x1C

}; // size - 0x20


class CBuyZone : public CBaseTrigger
{
public:

   int32_t m_LegacyTeamNum; // 0x898 - 0x89C

}; // size - 0x8A0


class CC4 : public CWeaponCSBase
{
public:

   Vector m_vecLastValidPlayerHeldPosition; // 0xD50 - 0xD5C
   Vector m_vecLastValidDroppedPosition; // 0xD5C - 0xD68
   bool m_bDoValidDroppedPositionCheck; // 0xD68 - 0xD69
   bool m_bStartedArming; // 0xD69 - 0xD6A
   unsigned char pad_D6A[0x2] // 0xD6A - 0xD6C
   GameTime_t m_fArmedTime; // 0xD6C - 0xD70
   bool m_bBombPlacedAnimation; // 0xD70 - 0xD71
   bool m_bShowC4LED; // 0xD71 - 0xD72
   bool m_bIsPlantingViaUse; // 0xD72 - 0xD73
   unsigned char pad_D73[0x5] // 0xD73 - 0xD78
   EntitySpottedState_t m_entitySpottedState; // 0xD78 - 0xD90
   int32_t m_nSpotRules; // 0xD90 - 0xD94
   bool m_bPlayedArmingBeeps[7]; // 0xD94 - 0xD9B
   bool m_bBombPlanted; // 0xD9B - 0xD9C
   bool m_bDroppedFromDeath; // 0xD9C - 0xD9D

}; // size - 0xDA0


class CCSBot : public CBot
{
public:

   CHandle< SpawnPointCoopEnemy > m_lastCoopSpawnPoint; // 0xD0 - 0xD4
   unsigned char pad_D4[0xC] // 0xD4 - 0xE0
   Vector m_eyePosition; // 0xE0 - 0xEC
   char m_name[64]; // 0xEC - 0x12C
   float m_combatRange; // 0x12C - 0x130
   bool m_isRogue; // 0x130 - 0x131
   unsigned char pad_131[0x7] // 0x131 - 0x138
   CountdownTimer m_rogueTimer; // 0x138 - 0x150
   unsigned char pad_150[0x4] // 0x150 - 0x154
   bool m_diedLastRound; // 0x154 - 0x155
   unsigned char pad_155[0x3] // 0x155 - 0x158
   float m_safeTime; // 0x158 - 0x15C
   bool m_wasSafe; // 0x15C - 0x15D
   unsigned char pad_15D[0x7] // 0x15D - 0x164
   bool m_blindFire; // 0x164 - 0x165
   unsigned char pad_165[0x3] // 0x165 - 0x168
   CountdownTimer m_surpriseTimer; // 0x168 - 0x180
   bool m_bAllowActive; // 0x180 - 0x181
   bool m_isFollowing; // 0x181 - 0x182
   unsigned char pad_182[0x2] // 0x182 - 0x184
   CHandle< CCSPlayerPawn > m_leader; // 0x184 - 0x188
   float m_followTimestamp; // 0x188 - 0x18C
   float m_allowAutoFollowTime; // 0x18C - 0x190
   CountdownTimer m_hurryTimer; // 0x190 - 0x1A8
   CountdownTimer m_alertTimer; // 0x1A8 - 0x1C0
   CountdownTimer m_sneakTimer; // 0x1C0 - 0x1D8
   CountdownTimer m_panicTimer; // 0x1D8 - 0x1F0
   unsigned char pad_1F0[0x2E8] // 0x1F0 - 0x4D8
   float m_stateTimestamp; // 0x4D8 - 0x4DC
   bool m_isAttacking; // 0x4DC - 0x4DD
   bool m_isOpeningDoor; // 0x4DD - 0x4DE
   unsigned char pad_4DE[0x6] // 0x4DE - 0x4E4
   CHandle< CBaseEntity > m_taskEntity; // 0x4E4 - 0x4E8
   unsigned char pad_4E8[0xC] // 0x4E8 - 0x4F4
   Vector m_goalPosition; // 0x4F4 - 0x500
   CHandle< CBaseEntity > m_goalEntity; // 0x500 - 0x504
   CHandle< CBaseEntity > m_avoid; // 0x504 - 0x508
   float m_avoidTimestamp; // 0x508 - 0x50C
   bool m_isStopping; // 0x50C - 0x50D
   bool m_hasVisitedEnemySpawn; // 0x50D - 0x50E
   unsigned char pad_50E[0x2] // 0x50E - 0x510
   IntervalTimer m_stillTimer; // 0x510 - 0x520
   bool m_bEyeAnglesUnderPathFinderControl; // 0x520 - 0x521
   unsigned char pad_521[0x60F7] // 0x521 - 0x6618
   int32_t m_pathIndex; // 0x6618 - 0x661C
   GameTime_t m_areaEnteredTimestamp; // 0x661C - 0x6620
   CountdownTimer m_repathTimer; // 0x6620 - 0x6638
   CountdownTimer m_avoidFriendTimer; // 0x6638 - 0x6650
   bool m_isFriendInTheWay; // 0x6650 - 0x6651
   unsigned char pad_6651[0x7] // 0x6651 - 0x6658
   CountdownTimer m_politeTimer; // 0x6658 - 0x6670
   bool m_isWaitingBehindFriend; // 0x6670 - 0x6671
   unsigned char pad_6671[0x2B] // 0x6671 - 0x669C
   float m_pathLadderEnd; // 0x669C - 0x66A0
   unsigned char pad_66A0[0x48] // 0x66A0 - 0x66E8
   CountdownTimer m_mustRunTimer; // 0x66E8 - 0x6700
   CountdownTimer m_waitTimer; // 0x6700 - 0x6718
   CountdownTimer m_updateTravelDistanceTimer; // 0x6718 - 0x6730
   float32 m_playerTravelDistance[64]; // 0x6730 - 0x6830
   uint8_t m_travelDistancePhase; // 0x6830 - 0x6831
   unsigned char pad_6831[0x197] // 0x6831 - 0x69C8
   uint8_t m_hostageEscortCount; // 0x69C8 - 0x69C9
   unsigned char pad_69C9[0x3] // 0x69C9 - 0x69CC
   float m_hostageEscortCountTimestamp; // 0x69CC - 0x69D0
   int32_t m_desiredTeam; // 0x69D0 - 0x69D4
   bool m_hasJoined; // 0x69D4 - 0x69D5
   bool m_isWaitingForHostage; // 0x69D5 - 0x69D6
   unsigned char pad_69D6[0x2] // 0x69D6 - 0x69D8
   CountdownTimer m_inhibitWaitingForHostageTimer; // 0x69D8 - 0x69F0
   CountdownTimer m_waitForHostageTimer; // 0x69F0 - 0x6A08
   Vector m_noisePosition; // 0x6A08 - 0x6A14
   float m_noiseTravelDistance; // 0x6A14 - 0x6A18
   float m_noiseTimestamp; // 0x6A18 - 0x6A1C
   unsigned char pad_6A1C[0x4] // 0x6A1C - 0x6A20
   CBasePlayerPawn* m_noiseSource; // 0x6A20 - 0x6A28
   unsigned char pad_6A28[0x10] // 0x6A28 - 0x6A38
   CountdownTimer m_noiseBendTimer; // 0x6A38 - 0x6A50
   Vector m_bentNoisePosition; // 0x6A50 - 0x6A5C
   bool m_bendNoisePositionValid; // 0x6A5C - 0x6A5D
   unsigned char pad_6A5D[0x3] // 0x6A5D - 0x6A60
   float m_lookAroundStateTimestamp; // 0x6A60 - 0x6A64
   float m_lookAheadAngle; // 0x6A64 - 0x6A68
   float m_forwardAngle; // 0x6A68 - 0x6A6C
   float m_inhibitLookAroundTimestamp; // 0x6A6C - 0x6A70
   unsigned char pad_6A70[0x4] // 0x6A70 - 0x6A74
   Vector m_lookAtSpot; // 0x6A74 - 0x6A80
   unsigned char pad_6A80[0x4] // 0x6A80 - 0x6A84
   float m_lookAtSpotDuration; // 0x6A84 - 0x6A88
   float m_lookAtSpotTimestamp; // 0x6A88 - 0x6A8C
   float m_lookAtSpotAngleTolerance; // 0x6A8C - 0x6A90
   bool m_lookAtSpotClearIfClose; // 0x6A90 - 0x6A91
   bool m_lookAtSpotAttack; // 0x6A91 - 0x6A92
   unsigned char pad_6A92[0x6] // 0x6A92 - 0x6A98
   char* m_lookAtDesc; // 0x6A98 - 0x6AA0
   float m_peripheralTimestamp; // 0x6AA0 - 0x6AA4
   unsigned char pad_6AA4[0x184] // 0x6AA4 - 0x6C28
   uint8_t m_approachPointCount; // 0x6C28 - 0x6C29
   unsigned char pad_6C29[0x3] // 0x6C29 - 0x6C2C
   Vector m_approachPointViewPosition; // 0x6C2C - 0x6C38
   IntervalTimer m_viewSteadyTimer; // 0x6C38 - 0x6C48
   unsigned char pad_6C48[0x8] // 0x6C48 - 0x6C50
   CountdownTimer m_tossGrenadeTimer; // 0x6C50 - 0x6C68
   unsigned char pad_6C68[0x8] // 0x6C68 - 0x6C70
   CountdownTimer m_isAvoidingGrenade; // 0x6C70 - 0x6C88
   unsigned char pad_6C88[0x8] // 0x6C88 - 0x6C90
   float m_spotCheckTimestamp; // 0x6C90 - 0x6C94
   unsigned char pad_6C94[0x404] // 0x6C94 - 0x7098
   int32_t m_checkedHidingSpotCount; // 0x7098 - 0x709C
   float m_lookPitch; // 0x709C - 0x70A0
   float m_lookPitchVel; // 0x70A0 - 0x70A4
   float m_lookYaw; // 0x70A4 - 0x70A8
   float m_lookYawVel; // 0x70A8 - 0x70AC
   Vector m_targetSpot; // 0x70AC - 0x70B8
   Vector m_targetSpotVelocity; // 0x70B8 - 0x70C4
   Vector m_targetSpotPredicted; // 0x70C4 - 0x70D0
   QAngle m_aimError; // 0x70D0 - 0x70DC
   QAngle m_aimGoal; // 0x70DC - 0x70E8
   GameTime_t m_targetSpotTime; // 0x70E8 - 0x70EC
   float m_aimFocus; // 0x70EC - 0x70F0
   float m_aimFocusInterval; // 0x70F0 - 0x70F4
   GameTime_t m_aimFocusNextUpdate; // 0x70F4 - 0x70F8
   unsigned char pad_70F8[0x8] // 0x70F8 - 0x7100
   CountdownTimer m_ignoreEnemiesTimer; // 0x7100 - 0x7118
   CHandle< CCSPlayerPawnBase > m_enemy; // 0x7118 - 0x711C
   bool m_isEnemyVisible; // 0x711C - 0x711D
   uint8_t m_visibleEnemyParts; // 0x711D - 0x711E
   unsigned char pad_711E[0x2] // 0x711E - 0x7120
   Vector m_lastEnemyPosition; // 0x7120 - 0x712C
   float m_lastSawEnemyTimestamp; // 0x712C - 0x7130
   float m_firstSawEnemyTimestamp; // 0x7130 - 0x7134
   float m_currentEnemyAcquireTimestamp; // 0x7134 - 0x7138
   float m_enemyDeathTimestamp; // 0x7138 - 0x713C
   float m_friendDeathTimestamp; // 0x713C - 0x7140
   bool m_isLastEnemyDead; // 0x7140 - 0x7141
   unsigned char pad_7141[0x3] // 0x7141 - 0x7144
   int32_t m_nearbyEnemyCount; // 0x7144 - 0x7148
   unsigned char pad_7148[0x208] // 0x7148 - 0x7350
   CHandle< CCSPlayerPawnBase > m_bomber; // 0x7350 - 0x7354
   int32_t m_nearbyFriendCount; // 0x7354 - 0x7358
   CHandle< CCSPlayerPawnBase > m_closestVisibleFriend; // 0x7358 - 0x735C
   CHandle< CCSPlayerPawnBase > m_closestVisibleHumanFriend; // 0x735C - 0x7360
   IntervalTimer m_attentionInterval; // 0x7360 - 0x7370
   CHandle< CCSPlayerPawnBase > m_attacker; // 0x7370 - 0x7374
   float m_attackedTimestamp; // 0x7374 - 0x7378
   IntervalTimer m_burnedByFlamesTimer; // 0x7378 - 0x7388
   int32_t m_lastVictimID; // 0x7388 - 0x738C
   bool m_isAimingAtEnemy; // 0x738C - 0x738D
   bool m_isRapidFiring; // 0x738D - 0x738E
   unsigned char pad_738E[0x2] // 0x738E - 0x7390
   IntervalTimer m_equipTimer; // 0x7390 - 0x73A0
   CountdownTimer m_zoomTimer; // 0x73A0 - 0x73B8
   GameTime_t m_fireWeaponTimestamp; // 0x73B8 - 0x73BC
   unsigned char pad_73BC[0x4] // 0x73BC - 0x73C0
   CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x73C0 - 0x73D8
   bool m_bIsSleeping; // 0x73D8 - 0x73D9
   bool m_isEnemySniperVisible; // 0x73D9 - 0x73DA
   unsigned char pad_73DA[0x6] // 0x73DA - 0x73E0
   CountdownTimer m_sawEnemySniperTimer; // 0x73E0 - 0x73F8
   unsigned char pad_73F8[0xA0] // 0x73F8 - 0x7498
   uint8_t m_enemyQueueIndex; // 0x7498 - 0x7499
   uint8_t m_enemyQueueCount; // 0x7499 - 0x749A
   uint8_t m_enemyQueueAttendIndex; // 0x749A - 0x749B
   bool m_isStuck; // 0x749B - 0x749C
   GameTime_t m_stuckTimestamp; // 0x749C - 0x74A0
   Vector m_stuckSpot; // 0x74A0 - 0x74AC
   unsigned char pad_74AC[0x4] // 0x74AC - 0x74B0
   CountdownTimer m_wiggleTimer; // 0x74B0 - 0x74C8
   CountdownTimer m_stuckJumpTimer; // 0x74C8 - 0x74E0
   GameTime_t m_nextCleanupCheckTimestamp; // 0x74E0 - 0x74E4
   float32 m_avgVel[10]; // 0x74E4 - 0x750C
   int32_t m_avgVelIndex; // 0x750C - 0x7510
   int32_t m_avgVelCount; // 0x7510 - 0x7514
   Vector m_lastOrigin; // 0x7514 - 0x7520
   unsigned char pad_7520[0x4] // 0x7520 - 0x7524
   float m_lastRadioRecievedTimestamp; // 0x7524 - 0x7528
   float m_lastRadioSentTimestamp; // 0x7528 - 0x752C
   CHandle< CCSPlayerPawnBase > m_radioSubject; // 0x752C - 0x7530
   Vector m_radioPosition; // 0x7530 - 0x753C
   float m_voiceEndTimestamp; // 0x753C - 0x7540
   unsigned char pad_7540[0x8] // 0x7540 - 0x7548
   int32_t m_lastValidReactionQueueFrame; // 0x7548 - 0x754C

}; // size - 0x7550


class CCSEnvGunfire : public CPointEntity
{
public:

   int32_t m_iMinBurstSize; // 0x4A0 - 0x4A4
   int32_t m_iMaxBurstSize; // 0x4A4 - 0x4A8
   float m_flMinBurstDelay; // 0x4A8 - 0x4AC
   float m_flMaxBurstDelay; // 0x4AC - 0x4B0
   float m_flRateOfFire; // 0x4B0 - 0x4B4
   unsigned char pad_4B4[0x4] // 0x4B4 - 0x4B8
   CUtlSymbolLarge m_iszShootSound; // 0x4B8 - 0x4C0
   CUtlSymbolLarge m_iszTracerType; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_iszWeaponName; // 0x4C8 - 0x4D0
   bool m_bDisabled; // 0x4D0 - 0x4D1
   unsigned char pad_4D1[0x3] // 0x4D1 - 0x4D4
   int32_t m_iShotsRemaining; // 0x4D4 - 0x4D8
   int32_t m_iSpread; // 0x4D8 - 0x4DC
   Vector m_vecSpread; // 0x4DC - 0x4E8
   Vector m_vecTargetPosition; // 0x4E8 - 0x4F4
   float m_flTargetDist; // 0x4F4 - 0x4F8
   float m_flBias; // 0x4F8 - 0x4FC
   bool m_bCollide; // 0x4FC - 0x4FD
   unsigned char pad_4FD[0x3] // 0x4FD - 0x500
   CHandle< CBaseEntity > m_hTarget; // 0x500 - 0x504
   bool m_bAllowNullTarget; // 0x504 - 0x505
   bool m_bAlwaysWallbangTracer; // 0x505 - 0x506
   unsigned char pad_506[0x2] // 0x506 - 0x508
   float m_flDamageScaleValue; // 0x508 - 0x50C
   float m_flAdditionalSpread; // 0x50C - 0x510

}; // size - 0x510


class CCSGOPlayerAnimGraphState
{
public:


}; // size - 0x120


class CCSGOViewModel : public CPredictedViewModel
{
public:

   bool m_bShouldIgnoreOffsetAndAccuracy; // 0x868 - 0x869
   unsigned char pad_869[0x3] // 0x869 - 0x86C
   uint32_t m_nWeaponParity; // 0x86C - 0x870
   uint32_t m_nOldWeaponParity; // 0x870 - 0x874

}; // size - 0x878


class CCSGO_TeamIntroCounterTerroristPosition : public CCSGO_TeamIntroCharacterPosition
{
public:


}; // size - 0x730


class CCSGO_TeamIntroTerroristPosition : public CCSGO_TeamIntroCharacterPosition
{
public:


}; // size - 0x730


class CCSGO_TeamSelectCounterTerroristPosition : public CCSGO_TeamSelectCharacterPosition
{
public:


}; // size - 0x730


class CCSGO_TeamSelectTerroristPosition : public CCSGO_TeamSelectCharacterPosition
{
public:


}; // size - 0x730


class CCSGameRules : public CTeamplayRules
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x98 - 0xC0
   CHandle< CBaseEntity > m_coopMissionManager; // 0xC0 - 0xC4
   bool m_bFreezePeriod; // 0xC4 - 0xC5
   bool m_bWarmupPeriod; // 0xC5 - 0xC6
   unsigned char pad_C6[0x2] // 0xC6 - 0xC8
   GameTime_t m_fWarmupPeriodEnd; // 0xC8 - 0xCC
   GameTime_t m_fWarmupPeriodStart; // 0xCC - 0xD0
   bool m_bTerroristTimeOutActive; // 0xD0 - 0xD1
   bool m_bCTTimeOutActive; // 0xD1 - 0xD2
   unsigned char pad_D2[0x2] // 0xD2 - 0xD4
   float m_flTerroristTimeOutRemaining; // 0xD4 - 0xD8
   float m_flCTTimeOutRemaining; // 0xD8 - 0xDC
   int32_t m_nTerroristTimeOuts; // 0xDC - 0xE0
   int32_t m_nCTTimeOuts; // 0xE0 - 0xE4
   bool m_bTechnicalTimeOut; // 0xE4 - 0xE5
   bool m_bMatchWaitingForResume; // 0xE5 - 0xE6
   unsigned char pad_E6[0x2] // 0xE6 - 0xE8
   int32_t m_iRoundTime; // 0xE8 - 0xEC
   float m_fMatchStartTime; // 0xEC - 0xF0
   GameTime_t m_fRoundStartTime; // 0xF0 - 0xF4
   GameTime_t m_flRestartRoundTime; // 0xF4 - 0xF8
   bool m_bGameRestart; // 0xF8 - 0xF9
   unsigned char pad_F9[0x3] // 0xF9 - 0xFC
   float m_flGameStartTime; // 0xFC - 0x100
   float m_timeUntilNextPhaseStarts; // 0x100 - 0x104
   int32_t m_gamePhase; // 0x104 - 0x108
   int32_t m_totalRoundsPlayed; // 0x108 - 0x10C
   int32_t m_nRoundsPlayedThisPhase; // 0x10C - 0x110
   int32_t m_nOvertimePlaying; // 0x110 - 0x114
   int32_t m_iHostagesRemaining; // 0x114 - 0x118
   bool m_bAnyHostageReached; // 0x118 - 0x119
   bool m_bMapHasBombTarget; // 0x119 - 0x11A
   bool m_bMapHasRescueZone; // 0x11A - 0x11B
   bool m_bMapHasBuyZone; // 0x11B - 0x11C
   bool m_bIsQueuedMatchmaking; // 0x11C - 0x11D
   unsigned char pad_11D[0x3] // 0x11D - 0x120
   int32_t m_nQueuedMatchmakingMode; // 0x120 - 0x124
   bool m_bIsValveDS; // 0x124 - 0x125
   bool m_bLogoMap; // 0x125 - 0x126
   bool m_bPlayAllStepSoundsOnServer; // 0x126 - 0x127
   unsigned char pad_127[0x1] // 0x127 - 0x128
   int32_t m_iNumGunGameProgressiveWeaponsCT; // 0x128 - 0x12C
   int32_t m_iNumGunGameProgressiveWeaponsT; // 0x12C - 0x130
   int32_t m_iSpectatorSlotCount; // 0x130 - 0x134
   int32 m_GGProgressiveWeaponOrderCT[60]; // 0x134 - 0x224
   int32 m_GGProgressiveWeaponOrderT[60]; // 0x224 - 0x314
   int32 m_GGProgressiveWeaponKillUpgradeOrderCT[60]; // 0x314 - 0x404
   int32 m_GGProgressiveWeaponKillUpgradeOrderT[60]; // 0x404 - 0x4F4
   int32_t m_MatchDevice; // 0x4F4 - 0x4F8
   bool m_bHasMatchStarted; // 0x4F8 - 0x4F9
   unsigned char pad_4F9[0x3] // 0x4F9 - 0x4FC
   float m_flDMBonusStartTime; // 0x4FC - 0x500
   float m_flDMBonusTimeLength; // 0x500 - 0x504
   uint16_t m_unDMBonusWeaponLoadoutSlot; // 0x504 - 0x506
   bool m_bDMBonusActive; // 0x506 - 0x507
   unsigned char pad_507[0x1] // 0x507 - 0x508
   int32_t m_nNextMapInMapgroup; // 0x508 - 0x50C
   char m_szTournamentEventName[512]; // 0x50C - 0x70C
   char m_szTournamentEventStage[512]; // 0x70C - 0x90C
   char m_szMatchStatTxt[512]; // 0x90C - 0xB0C
   char m_szTournamentPredictionsTxt[512]; // 0xB0C - 0xD0C
   int32_t m_nTournamentPredictionsPct; // 0xD0C - 0xD10
   GameTime_t m_flCMMItemDropRevealStartTime; // 0xD10 - 0xD14
   GameTime_t m_flCMMItemDropRevealEndTime; // 0xD14 - 0xD18
   bool m_bIsDroppingItems; // 0xD18 - 0xD19
   bool m_bIsQuestEligible; // 0xD19 - 0xD1A
   unsigned char pad_D1A[0x2] // 0xD1A - 0xD1C
   int32_t m_nGuardianModeWaveNumber; // 0xD1C - 0xD20
   int32_t m_nGuardianModeSpecialKillsRemaining; // 0xD20 - 0xD24
   int32_t m_nGuardianModeSpecialWeaponNeeded; // 0xD24 - 0xD28
   int32_t m_nGuardianGrenadesToGiveBots; // 0xD28 - 0xD2C
   int32_t m_nNumHeaviesToSpawn; // 0xD2C - 0xD30
   uint32_t m_numGlobalGiftsGiven; // 0xD30 - 0xD34
   uint32_t m_numGlobalGifters; // 0xD34 - 0xD38
   uint32_t m_numGlobalGiftsPeriodSeconds; // 0xD38 - 0xD3C
   uint32 m_arrFeaturedGiftersAccounts[4]; // 0xD3C - 0xD4C
   uint32 m_arrFeaturedGiftersGifts[4]; // 0xD4C - 0xD5C
   uint16 m_arrProhibitedItemIndices[100]; // 0xD5C - 0xE24
   uint32 m_arrTournamentActiveCasterAccounts[4]; // 0xE24 - 0xE34
   int32_t m_numBestOfMaps; // 0xE34 - 0xE38
   int32_t m_nHalloweenMaskListSeed; // 0xE38 - 0xE3C
   bool m_bBombDropped; // 0xE3C - 0xE3D
   bool m_bBombPlanted; // 0xE3D - 0xE3E
   unsigned char pad_E3E[0x2] // 0xE3E - 0xE40
   int32_t m_iRoundWinStatus; // 0xE40 - 0xE44
   int32_t m_eRoundWinReason; // 0xE44 - 0xE48
   bool m_bTCantBuy; // 0xE48 - 0xE49
   bool m_bCTCantBuy; // 0xE49 - 0xE4A
   unsigned char pad_E4A[0x2] // 0xE4A - 0xE4C
   GameTime_t m_flGuardianBuyUntilTime; // 0xE4C - 0xE50
   int32 m_iMatchStats_RoundResults[30]; // 0xE50 - 0xEC8
   int32 m_iMatchStats_PlayersAlive_CT[30]; // 0xEC8 - 0xF40
   int32 m_iMatchStats_PlayersAlive_T[30]; // 0xF40 - 0xFB8
   float32 m_TeamRespawnWaveTimes[32]; // 0xFB8 - 0x1038
   GameTime_t m_flNextRespawnWave[32]; // 0x1038 - 0x10B8
   int32_t m_nServerQuestID; // 0x10B8 - 0x10BC
   bool m_bDontIncrementCoopWave; // 0x10BC - 0x10BD
   bool m_bSpawnedTerrorHuntHeavy; // 0x10BD - 0x10BE
   unsigned char pad_10BE[0x2] // 0x10BE - 0x10C0
   int32 m_nEndMatchMapGroupVoteTypes[10]; // 0x10C0 - 0x10E8
   int32 m_nEndMatchMapGroupVoteOptions[10]; // 0x10E8 - 0x1110
   int32_t m_nEndMatchMapVoteWinner; // 0x1110 - 0x1114
   int32_t m_iNumConsecutiveCTLoses; // 0x1114 - 0x1118
   int32_t m_iNumConsecutiveTerroristLoses; // 0x1118 - 0x111C
   unsigned char pad_111C[0x1C] // 0x111C - 0x1138
   bool m_bHasHostageBeenTouched; // 0x1138 - 0x1139
   unsigned char pad_1139[0x3] // 0x1139 - 0x113C
   GameTime_t m_flIntermissionStartTime; // 0x113C - 0x1140
   GameTime_t m_flIntermissionEndTime; // 0x1140 - 0x1144
   bool m_bLevelInitialized; // 0x1144 - 0x1145
   unsigned char pad_1145[0x3] // 0x1145 - 0x1148
   int32_t m_iTotalRoundsPlayed; // 0x1148 - 0x114C
   int32_t m_iUnBalancedRounds; // 0x114C - 0x1150
   bool m_endMatchOnRoundReset; // 0x1150 - 0x1151
   bool m_endMatchOnThink; // 0x1151 - 0x1152
   unsigned char pad_1152[0x2] // 0x1152 - 0x1154
   int32_t m_iFreezeTime; // 0x1154 - 0x1158
   int32_t m_iNumTerrorist; // 0x1158 - 0x115C
   int32_t m_iNumCT; // 0x115C - 0x1160
   int32_t m_iNumSpawnableTerrorist; // 0x1160 - 0x1164
   int32_t m_iNumSpawnableCT; // 0x1164 - 0x1168
   CUtlVector< int32 > m_arrSelectedHostageSpawnIndices; // 0x1168 - 0x1180
   bool m_bFirstConnected; // 0x1180 - 0x1181
   bool m_bCompleteReset; // 0x1181 - 0x1182
   bool m_bPickNewTeamsOnReset; // 0x1182 - 0x1183
   bool m_bScrambleTeamsOnRestart; // 0x1183 - 0x1184
   bool m_bSwapTeamsOnRestart; // 0x1184 - 0x1185
   unsigned char pad_1185[0xB] // 0x1185 - 0x1190
   CUtlVector< int32 > m_nEndMatchTiedVotes; // 0x1190 - 0x11A8
   unsigned char pad_11A8[0x4] // 0x11A8 - 0x11AC
   bool m_bNeedToAskPlayersForContinueVote; // 0x11AC - 0x11AD
   unsigned char pad_11AD[0x3] // 0x11AD - 0x11B0
   uint32_t m_numQueuedMatchmakingAccounts; // 0x11B0 - 0x11B4
   unsigned char pad_11B4[0x4] // 0x11B4 - 0x11B8
   char* m_pQueuedMatchmakingReservationString; // 0x11B8 - 0x11C0
   uint32_t m_numTotalTournamentDrops; // 0x11C0 - 0x11C4
   uint32_t m_numSpectatorsCountMax; // 0x11C4 - 0x11C8
   uint32_t m_numSpectatorsCountMaxTV; // 0x11C8 - 0x11CC
   uint32_t m_numSpectatorsCountMaxLnk; // 0x11CC - 0x11D0
   unsigned char pad_11D0[0x8] // 0x11D0 - 0x11D8
   bool m_bForceTeamChangeSilent; // 0x11D8 - 0x11D9
   bool m_bLoadingRoundBackupData; // 0x11D9 - 0x11DA
   unsigned char pad_11DA[0x36] // 0x11DA - 0x1210
   int32_t m_nMatchInfoShowType; // 0x1210 - 0x1214
   float m_flMatchInfoDecidedTime; // 0x1214 - 0x1218
   unsigned char pad_1218[0x18] // 0x1218 - 0x1230
   float m_flCoopRespawnAndHealTime; // 0x1230 - 0x1234
   int32_t m_coopBonusCoinsFound; // 0x1234 - 0x1238
   bool m_coopBonusPistolsOnly; // 0x1238 - 0x1239
   bool m_coopPlayersInDeploymentZone; // 0x1239 - 0x123A
   bool m_coopMissionDeadPlayerRespawnEnabled; // 0x123A - 0x123B
   unsigned char pad_123B[0x1] // 0x123B - 0x123C
   int32_t mTeamDMLastWinningTeamNumber; // 0x123C - 0x1240
   float mTeamDMLastThinkTime; // 0x1240 - 0x1244
   float m_flTeamDMLastAnnouncementTime; // 0x1244 - 0x1248
   int32_t m_iAccountTerrorist; // 0x1248 - 0x124C
   int32_t m_iAccountCT; // 0x124C - 0x1250
   int32_t m_iSpawnPointCount_Terrorist; // 0x1250 - 0x1254
   int32_t m_iSpawnPointCount_CT; // 0x1254 - 0x1258
   int32_t m_iMaxNumTerrorists; // 0x1258 - 0x125C
   int32_t m_iMaxNumCTs; // 0x125C - 0x1260
   int32_t m_iLoserBonus; // 0x1260 - 0x1264
   int32_t m_iLoserBonusMostRecentTeam; // 0x1264 - 0x1268
   float m_tmNextPeriodicThink; // 0x1268 - 0x126C
   bool m_bVoiceWonMatchBragFired; // 0x126C - 0x126D
   unsigned char pad_126D[0x3] // 0x126D - 0x1270
   float m_fWarmupNextChatNoticeTime; // 0x1270 - 0x1274
   unsigned char pad_1274[0x4] // 0x1274 - 0x1278
   int32_t m_iHostagesRescued; // 0x1278 - 0x127C
   int32_t m_iHostagesTouched; // 0x127C - 0x1280
   float m_flNextHostageAnnouncement; // 0x1280 - 0x1284
   bool m_bNoTerroristsKilled; // 0x1284 - 0x1285
   bool m_bNoCTsKilled; // 0x1285 - 0x1286
   bool m_bNoEnemiesKilled; // 0x1286 - 0x1287
   bool m_bCanDonateWeapons; // 0x1287 - 0x1288
   unsigned char pad_1288[0x4] // 0x1288 - 0x128C
   float m_firstKillTime; // 0x128C - 0x1290
   unsigned char pad_1290[0x4] // 0x1290 - 0x1294
   float m_firstBloodTime; // 0x1294 - 0x1298
   unsigned char pad_1298[0x18] // 0x1298 - 0x12B0
   bool m_hostageWasInjured; // 0x12B0 - 0x12B1
   bool m_hostageWasKilled; // 0x12B1 - 0x12B2
   unsigned char pad_12B2[0xE] // 0x12B2 - 0x12C0
   bool m_bVoteCalled; // 0x12C0 - 0x12C1
   bool m_bServerVoteOnReset; // 0x12C1 - 0x12C2
   unsigned char pad_12C2[0x2] // 0x12C2 - 0x12C4
   float m_flVoteCheckThrottle; // 0x12C4 - 0x12C8
   bool m_bBuyTimeEnded; // 0x12C8 - 0x12C9
   unsigned char pad_12C9[0x3] // 0x12C9 - 0x12CC
   int32_t m_nLastFreezeEndBeep; // 0x12CC - 0x12D0
   int32_t m_iHaveEscaped; // 0x12D0 - 0x12D4
   bool m_bMapHasEscapeZone; // 0x12D4 - 0x12D5
   unsigned char pad_12D5[0x3] // 0x12D5 - 0x12D8
   int32_t m_iNumEscapers; // 0x12D8 - 0x12DC
   int32_t m_iNumEscapeRounds; // 0x12DC - 0x12E0
   bool m_bTargetBombed; // 0x12E0 - 0x12E1
   bool m_bBombDefused; // 0x12E1 - 0x12E2
   bool m_bMapHasBombZone; // 0x12E2 - 0x12E3
   bool m_bGunGameRespawnWithBomb; // 0x12E3 - 0x12E4
   float m_fGunGameBombRespawnTimer; // 0x12E4 - 0x12E8
   unsigned char pad_12E8[0x1C] // 0x12E8 - 0x1304
   Vector m_vecMainCTSpawnPos; // 0x1304 - 0x1310
   CUtlVector< SpawnPoint* > m_CTSpawnPointsMasterList; // 0x1310 - 0x1328
   CUtlVector< SpawnPoint* > m_TerroristSpawnPointsMasterList; // 0x1328 - 0x1340
   int32_t m_iNextCTSpawnPoint; // 0x1340 - 0x1344
   int32_t m_iNextTerroristSpawnPoint; // 0x1344 - 0x1348
   CUtlVector< SpawnPoint* > m_CTSpawnPoints; // 0x1348 - 0x1360
   CUtlVector< SpawnPoint* > m_TerroristSpawnPoints; // 0x1360 - 0x1378
   bool m_bIsUnreservedGameServer; // 0x1378 - 0x1379
   unsigned char pad_1379[0x3] // 0x1379 - 0x137C
   float m_fAutobalanceDisplayTime; // 0x137C - 0x1380
   unsigned char pad_1380[0x268] // 0x1380 - 0x15E8
   bool m_bAllowWeaponSwitch; // 0x15E8 - 0x15E9
   bool m_bRoundTimeWarningTriggered; // 0x15E9 - 0x15EA
   unsigned char pad_15EA[0x2] // 0x15EA - 0x15EC
   GameTime_t m_phaseChangeAnnouncementTime; // 0x15EC - 0x15F0
   float m_fNextUpdateTeamClanNamesTime; // 0x15F0 - 0x15F4
   GameTime_t m_flLastThinkTime; // 0x15F4 - 0x15F8
   float m_fAccumulatedRoundOffDamage; // 0x15F8 - 0x15FC
   int32_t m_nShorthandedBonusLastEvalRound; // 0x15FC - 0x1600
   unsigned char pad_1600[0x260] // 0x1600 - 0x1860
   bool m_bHasTriggeredRoundStartMusic; // 0x1860 - 0x1861
   bool m_bHasTriggeredCoopSpawnReset; // 0x1861 - 0x1862
   bool m_bSwitchingTeamsAtRoundReset; // 0x1862 - 0x1863
   unsigned char pad_1863[0x1] // 0x1863 - 0x1864
   int32_t m_iMaxGunGameProgressiveWeaponIndex; // 0x1864 - 0x1868
   unsigned char pad_1868[0x18] // 0x1868 - 0x1880
   CSurvivalGameRules m_SurvivalRules; // 0x1880 - 0x3518
   KeyValues3 m_BtGlobalBlackboard; // 0x3518 - 0x3528
   unsigned char pad_3528[0x58] // 0x3528 - 0x3580
   CHandle< CBaseEntity > m_hPlayerResource; // 0x3580 - 0x3584
   unsigned char pad_3584[0x4] // 0x3584 - 0x3588
   CRetakeGameRules m_RetakeRules; // 0x3588 - 0x3720
   unsigned char pad_3720[0x4C] // 0x3720 - 0x376C
   int32_t m_GuardianBotSkillLevelMax; // 0x376C - 0x3770
   int32_t m_GuardianBotSkillLevelMin; // 0x3770 - 0x3774
   unsigned char pad_3774[0x4] // 0x3774 - 0x3778
   CUtlVector< int32 > m_arrTeamUniqueKillWeaponsMatch[4]; // 0x3778 - 0x37D8
   bool m_bTeamLastKillUsedUniqueWeaponMatch[4]; // 0x37D8 - 0x37DC
   unsigned char pad_37DC[0x24] // 0x37DC - 0x3800
   uint8_t m_nMatchEndCount; // 0x3800 - 0x3801
   bool m_bTeamIntroPeriod; // 0x3801 - 0x3802
   unsigned char pad_3802[0x2] // 0x3802 - 0x3804
   GameTime_t m_fTeamIntroPeriodEnd; // 0x3804 - 0x3808

}; // size - 0x3808


class CCSGameRulesProxy : public CGameRulesProxy
{
public:

   CCSGameRules* m_pGameRules; // 0x4A0 - 0x4A8

}; // size - 0x4A8


class CCSObserverPawn : public CCSPlayerPawnBase
{
public:


}; // size - 0x1598


class CCSPlace : public CServerOnlyModelEntity
{
public:

   CUtlSymbolLarge m_name; // 0x6F8 - 0x700

}; // size - 0x700


class CCSPlayerController : public CBasePlayerController
{
public:

   CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x678 - 0x680
   CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x680 - 0x688
   CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x688 - 0x690
   CCSPlayerController_DamageServices* m_pDamageServices; // 0x690 - 0x698
   uint32_t m_iPing; // 0x698 - 0x69C
   bool m_bHasCommunicationAbuseMute; // 0x69C - 0x69D
   unsigned char pad_69D[0x3] // 0x69D - 0x6A0
   CUtlSymbolLarge m_szCrosshairCodes; // 0x6A0 - 0x6A8
   uint8_t m_iPendingTeamNum; // 0x6A8 - 0x6A9
   unsigned char pad_6A9[0x3] // 0x6A9 - 0x6AC
   GameTime_t m_flForceTeamTime; // 0x6AC - 0x6B0
   int32_t m_iCompTeammateColor; // 0x6B0 - 0x6B4
   bool m_bEverPlayedOnTeam; // 0x6B4 - 0x6B5
   bool m_bAttemptedToGetColor; // 0x6B5 - 0x6B6
   unsigned char pad_6B6[0x2] // 0x6B6 - 0x6B8
   int32_t m_iTeammatePreferredColor; // 0x6B8 - 0x6BC
   bool m_bTeamChanged; // 0x6BC - 0x6BD
   bool m_bInSwitchTeam; // 0x6BD - 0x6BE
   bool m_bHasSeenJoinGame; // 0x6BE - 0x6BF
   bool m_bJustBecameSpectator; // 0x6BF - 0x6C0
   bool m_bSwitchTeamsOnNextRoundReset; // 0x6C0 - 0x6C1
   unsigned char pad_6C1[0x7] // 0x6C1 - 0x6C8
   CUtlSymbolLarge m_szClan; // 0x6C8 - 0x6D0
   char m_szClanName[32]; // 0x6D0 - 0x6F0
   int32_t m_iCoachingTeam; // 0x6F0 - 0x6F4
   unsigned char pad_6F4[0x4] // 0x6F4 - 0x6F8
   uint64_t m_nPlayerDominated; // 0x6F8 - 0x700
   uint64_t m_nPlayerDominatingMe; // 0x700 - 0x708
   int32_t m_iCompetitiveRanking; // 0x708 - 0x70C
   int32_t m_iCompetitiveWins; // 0x70C - 0x710
   int8_t m_iCompetitiveRankType; // 0x710 - 0x711
   unsigned char pad_711[0x3] // 0x711 - 0x714
   int32_t m_nEndMatchNextMapVote; // 0x714 - 0x718
   uint16_t m_unActiveQuestId; // 0x718 - 0x71A
   unsigned char pad_71A[0x2] // 0x71A - 0x71C
   QuestProgress::Reason m_nQuestProgressReason; // 0x71C - 0x720
   uint32_t m_unPlayerTvControlFlags; // 0x720 - 0x724
   unsigned char pad_724[0x6C] // 0x724 - 0x790
   int32_t m_iDraftIndex; // 0x790 - 0x794
   uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x794 - 0x798
   uint32_t m_uiAbandonRecordedReason; // 0x798 - 0x79C
   bool m_bEverFullyConnected; // 0x79C - 0x79D
   bool m_bAbandonAllowsSurrender; // 0x79D - 0x79E
   bool m_bDisconnection1MinWarningPrinted; // 0x79E - 0x79F
   bool m_bScoreReported; // 0x79F - 0x7A0
   int32_t m_nDisconnectionTick; // 0x7A0 - 0x7A4
   unsigned char pad_7A4[0xC] // 0x7A4 - 0x7B0
   bool m_bControllingBot; // 0x7B0 - 0x7B1
   bool m_bHasControlledBotThisRound; // 0x7B1 - 0x7B2
   bool m_bHasBeenControlledByPlayerThisRound; // 0x7B2 - 0x7B3
   unsigned char pad_7B3[0x1] // 0x7B3 - 0x7B4
   int32_t m_nBotsControlledThisRound; // 0x7B4 - 0x7B8
   bool m_bCanControlObservedBot; // 0x7B8 - 0x7B9
   unsigned char pad_7B9[0x3] // 0x7B9 - 0x7BC
   CHandle< CCSPlayerPawn > m_hPlayerPawn; // 0x7BC - 0x7C0
   CHandle< CCSObserverPawn > m_hObserverPawn; // 0x7C0 - 0x7C4
   int32_t m_DesiredObserverMode; // 0x7C4 - 0x7C8
   CEntityHandle m_hDesiredObserverTarget; // 0x7C8 - 0x7CC
   bool m_bPawnIsAlive; // 0x7CC - 0x7CD
   unsigned char pad_7CD[0x3] // 0x7CD - 0x7D0
   uint32_t m_iPawnHealth; // 0x7D0 - 0x7D4
   int32_t m_iPawnArmor; // 0x7D4 - 0x7D8
   bool m_bPawnHasDefuser; // 0x7D8 - 0x7D9
   bool m_bPawnHasHelmet; // 0x7D9 - 0x7DA
   uint16_t m_nPawnCharacterDefIndex; // 0x7DA - 0x7DC
   int32_t m_iPawnLifetimeStart; // 0x7DC - 0x7E0
   int32_t m_iPawnLifetimeEnd; // 0x7E0 - 0x7E4
   int32_t m_iPawnGunGameLevel; // 0x7E4 - 0x7E8
   int32_t m_iPawnBotDifficulty; // 0x7E8 - 0x7EC
   CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x7EC - 0x7F0
   int32_t m_iScore; // 0x7F0 - 0x7F4
   int32_t m_iRoundScore; // 0x7F4 - 0x7F8
   CNetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x7F8 - 0x810
   int32_t m_iMVPs; // 0x810 - 0x814
   int32_t m_nUpdateCounter; // 0x814 - 0x818
   unsigned char pad_818[0xF0A0] // 0x818 - 0xF8B8
   IntervalTimer m_lastHeldVoteTimer; // 0xF8B8 - 0xF8C8
   unsigned char pad_F8C8[0x8] // 0xF8C8 - 0xF8D0
   bool m_bShowHints; // 0xF8D0 - 0xF8D1
   unsigned char pad_F8D1[0x3] // 0xF8D1 - 0xF8D4
   int32_t m_iNextTimeCheck; // 0xF8D4 - 0xF8D8

}; // size - 0xF8D8


class CCSPlayerController : public CBasePlayerController
{
public:

   CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6B0 - 0x6B8
   CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x6B8 - 0x6C0
   CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x6C0 - 0x6C8
   CCSPlayerController_DamageServices* m_pDamageServices; // 0x6C8 - 0x6D0
   uint32_t m_iPing; // 0x6D0 - 0x6D4
   bool m_bHasCommunicationAbuseMute; // 0x6D4 - 0x6D5
   unsigned char pad_6D5[0x3] // 0x6D5 - 0x6D8
   CUtlSymbolLarge m_szCrosshairCodes; // 0x6D8 - 0x6E0
   uint8_t m_iPendingTeamNum; // 0x6E0 - 0x6E1
   unsigned char pad_6E1[0x3] // 0x6E1 - 0x6E4
   GameTime_t m_flForceTeamTime; // 0x6E4 - 0x6E8
   int32_t m_iCompTeammateColor; // 0x6E8 - 0x6EC
   bool m_bEverPlayedOnTeam; // 0x6EC - 0x6ED
   unsigned char pad_6ED[0x3] // 0x6ED - 0x6F0
   GameTime_t m_flPreviousForceJoinTeamTime; // 0x6F0 - 0x6F4
   unsigned char pad_6F4[0x4] // 0x6F4 - 0x6F8
   CUtlSymbolLarge m_szClan; // 0x6F8 - 0x700
   CUtlString m_sSanitizedPlayerName; // 0x700 - 0x708
   int32_t m_iCoachingTeam; // 0x708 - 0x70C
   unsigned char pad_70C[0x4] // 0x70C - 0x710
   uint64_t m_nPlayerDominated; // 0x710 - 0x718
   uint64_t m_nPlayerDominatingMe; // 0x718 - 0x720
   int32_t m_iCompetitiveRanking; // 0x720 - 0x724
   int32_t m_iCompetitiveWins; // 0x724 - 0x728
   int8_t m_iCompetitiveRankType; // 0x728 - 0x729
   unsigned char pad_729[0x3] // 0x729 - 0x72C
   int32_t m_nEndMatchNextMapVote; // 0x72C - 0x730
   uint16_t m_unActiveQuestId; // 0x730 - 0x732
   unsigned char pad_732[0x2] // 0x732 - 0x734
   QuestProgress::Reason m_nQuestProgressReason; // 0x734 - 0x738
   uint32_t m_unPlayerTvControlFlags; // 0x738 - 0x73C
   unsigned char pad_73C[0x6C] // 0x73C - 0x7A8
   int32_t m_iDraftIndex; // 0x7A8 - 0x7AC
   uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7AC - 0x7B0
   uint32_t m_uiAbandonRecordedReason; // 0x7B0 - 0x7B4
   bool m_bEverFullyConnected; // 0x7B4 - 0x7B5
   bool m_bAbandonAllowsSurrender; // 0x7B5 - 0x7B6
   bool m_bDisconnection1MinWarningPrinted; // 0x7B6 - 0x7B7
   bool m_bScoreReported; // 0x7B7 - 0x7B8
   int32_t m_nDisconnectionTick; // 0x7B8 - 0x7BC
   unsigned char pad_7BC[0xC] // 0x7BC - 0x7C8
   bool m_bControllingBot; // 0x7C8 - 0x7C9
   bool m_bHasControlledBotThisRound; // 0x7C9 - 0x7CA
   bool m_bHasBeenControlledByPlayerThisRound; // 0x7CA - 0x7CB
   unsigned char pad_7CB[0x1] // 0x7CB - 0x7CC
   int32_t m_nBotsControlledThisRound; // 0x7CC - 0x7D0
   bool m_bCanControlObservedBot; // 0x7D0 - 0x7D1
   unsigned char pad_7D1[0x3] // 0x7D1 - 0x7D4
   CHandle< C_CSPlayerPawn > m_hPlayerPawn; // 0x7D4 - 0x7D8
   CHandle< C_CSObserverPawn > m_hObserverPawn; // 0x7D8 - 0x7DC
   bool m_bPawnIsAlive; // 0x7DC - 0x7DD
   unsigned char pad_7DD[0x3] // 0x7DD - 0x7E0
   uint32_t m_iPawnHealth; // 0x7E0 - 0x7E4
   int32_t m_iPawnArmor; // 0x7E4 - 0x7E8
   bool m_bPawnHasDefuser; // 0x7E8 - 0x7E9
   bool m_bPawnHasHelmet; // 0x7E9 - 0x7EA
   uint16_t m_nPawnCharacterDefIndex; // 0x7EA - 0x7EC
   int32_t m_iPawnLifetimeStart; // 0x7EC - 0x7F0
   int32_t m_iPawnLifetimeEnd; // 0x7F0 - 0x7F4
   int32_t m_iPawnGunGameLevel; // 0x7F4 - 0x7F8
   int32_t m_iPawnBotDifficulty; // 0x7F8 - 0x7FC
   CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x7FC - 0x800
   int32_t m_iScore; // 0x800 - 0x804
   unsigned char pad_804[0x4] // 0x804 - 0x808
   C_NetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x808 - 0x820
   int32_t m_iMVPs; // 0x820 - 0x824
   bool m_bIsPlayerNameDirty; // 0x824 - 0x825

}; // size - 0x828


class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent
{
public:

   CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // 0x40 - 0x90
   CSMatchStats_t m_matchStats; // 0x90 - 0x148
   int32_t m_iNumRoundKills; // 0x148 - 0x14C
   int32_t m_iNumRoundKillsHeadshots; // 0x14C - 0x150

}; // size - 0x200


class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent
{
public:

   C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // 0x40 - 0x90
   CSMatchStats_t m_matchStats; // 0x90 - 0x108
   int32_t m_iNumRoundKills; // 0x108 - 0x10C
   int32_t m_iNumRoundKillsHeadshots; // 0x10C - 0x110

}; // size - 0x110


class CCSPlayerController_DamageServices : public CPlayerControllerComponent
{
public:

   int32_t m_nSendUpdate; // 0x40 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   CUtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList; // 0x48 - 0x98

}; // size - 0x98


class CCSPlayerController_DamageServices : public CPlayerControllerComponent
{
public:

   int32_t m_nSendUpdate; // 0x40 - 0x44
   int32_t m_nCachedSendUpdate; // 0x44 - 0x48
   C_UtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList; // 0x48 - 0x98

}; // size - 0x98


class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:

   int32_t m_iAccount; // 0x40 - 0x44
   int32_t m_iStartAccount; // 0x44 - 0x48
   int32_t m_iTotalCashSpent; // 0x48 - 0x4C
   int32_t m_iCashSpentThisRound; // 0x4C - 0x50
   int32_t m_nPreviousAccount; // 0x50 - 0x54

}; // size - 0x58


class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:

   bool m_bReceivesMoneyNextRound; // 0x40 - 0x41
   unsigned char pad_41[0x3] // 0x41 - 0x44
   int32_t m_iAccountMoneyEarnedForNextRound; // 0x44 - 0x48
   int32_t m_iAccount; // 0x48 - 0x4C
   int32_t m_iStartAccount; // 0x4C - 0x50
   int32_t m_iTotalCashSpent; // 0x50 - 0x54
   int32_t m_iCashSpentThisRound; // 0x54 - 0x58

}; // size - 0x58


class CCSPlayerController_InventoryServices : public CPlayerControllerComponent
{
public:

   uint16_t m_unMusicID; // 0x40 - 0x42
   unsigned char pad_42[0x2] // 0x42 - 0x44
   MedalRank_t m_rank[6]; // 0x44 - 0x5C
   int32_t m_nPersonaDataPublicLevel; // 0x5C - 0x60
   int32_t m_nPersonaDataPublicCommendsLeader; // 0x60 - 0x64
   int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64 - 0x68
   int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68 - 0x6C
   unsigned char pad_6C[0x4] // 0x6C - 0x70
   C_UtlVectorEmbeddedNetworkVar< C_EconItemView > m_vecTerroristLoadoutCache; // 0x70 - 0xC0
   C_UtlVectorEmbeddedNetworkVar< C_EconItemView > m_vecCounterTerroristLoadoutCache; // 0xC0 - 0x110

}; // size - 0x110


class CCSPlayerController_InventoryServices : public CPlayerControllerComponent
{
public:

   uint16_t m_unMusicID; // 0x40 - 0x42
   unsigned char pad_42[0x2] // 0x42 - 0x44
   MedalRank_t m_rank[6]; // 0x44 - 0x5C
   int32_t m_nPersonaDataPublicLevel; // 0x5C - 0x60
   int32_t m_nPersonaDataPublicCommendsLeader; // 0x60 - 0x64
   int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64 - 0x68
   int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68 - 0x6C
   unsigned char pad_6C[0x7FC] // 0x6C - 0x868
   uint32 m_unEquippedPlayerSprayIDs[1]; // 0x868 - 0x86C
   unsigned char pad_86C[0x4] // 0x86C - 0x870
   CUtlVectorEmbeddedNetworkVar< CEconItemView > m_vecTerroristLoadoutCache; // 0x870 - 0x8C0
   CUtlVectorEmbeddedNetworkVar< CEconItemView > m_vecCounterTerroristLoadoutCache; // 0x8C0 - 0x910

}; // size - 0x910


class CCSPlayerPawn : public CCSPlayerPawnBase
{
public:

   CCSPlayer_ParachuteServices* m_pParachuteServices; // 0x1570 - 0x1578
   CCSPlayer_BulletServices* m_pBulletServices; // 0x1578 - 0x1580
   CCSPlayer_HostageServices* m_pHostageServices; // 0x1580 - 0x1588
   CCSPlayer_BuyServices* m_pBuyServices; // 0x1588 - 0x1590
   CCSPlayer_PingServices* m_pPingServices; // 0x1590 - 0x1598
   CCSPlayer_RadioServices* m_pRadioServices; // 0x1598 - 0x15A0
   CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x15A0 - 0x15A8
   unsigned char pad_15A8[0xC8] // 0x15A8 - 0x1670
   int32_t m_iRetakesOffering; // 0x1670 - 0x1674
   int32_t m_iRetakesOfferingCard; // 0x1674 - 0x1678
   bool m_bRetakesHasDefuseKit; // 0x1678 - 0x1679
   bool m_bRetakesMVPLastRound; // 0x1679 - 0x167A
   unsigned char pad_167A[0x2] // 0x167A - 0x167C
   int32_t m_iRetakesMVPBoostItem; // 0x167C - 0x1680
   loadout_positions_t m_RetakesMVPBoostExtraUtility; // 0x1680 - 0x1684
   bool m_bIsBuyMenuOpen; // 0x1684 - 0x1685
   unsigned char pad_1685[0x15B] // 0x1685 - 0x17E0
   CTransform m_xLastHeadBoneTransform; // 0x17E0 - 0x1800
   bool m_bLastHeadBoneTransformIsValid; // 0x1800 - 0x1801
   unsigned char pad_1801[0x3] // 0x1801 - 0x1804
   int32_t m_iPlayerLocked; // 0x1804 - 0x1808
   unsigned char pad_1808[0x4] // 0x1808 - 0x180C
   float m_flNextSprayDecalTime; // 0x180C - 0x1810
   unsigned char pad_1810[0x4] // 0x1810 - 0x1814
   int32_t m_nRagdollDamageBone; // 0x1814 - 0x1818
   Vector m_vRagdollDamageForce; // 0x1818 - 0x1824
   Vector m_vRagdollDamagePosition; // 0x1824 - 0x1830
   char m_szRagdollDamageWeaponName[64]; // 0x1830 - 0x1870
   bool m_bRagdollDamageHeadshot; // 0x1870 - 0x1871
   unsigned char pad_1871[0x7] // 0x1871 - 0x1878
   CEconItemView m_EconGloves; // 0x1878 - 0x1AF0
   QAngle m_qDeathEyeAngles; // 0x1AF0 - 0x1AFC

}; // size - 0x1B00


class CCSPlayerResource : public CBaseEntity
{
public:

   bool m_bHostageAlive[12]; // 0x4A0 - 0x4AC
   bool m_isHostageFollowingSomeone[12]; // 0x4AC - 0x4B8
   CEntityIndex m_iHostageEntityIDs[12]; // 0x4B8 - 0x4E8
   Vector m_bombsiteCenterA; // 0x4E8 - 0x4F4
   Vector m_bombsiteCenterB; // 0x4F4 - 0x500
   int32 m_hostageRescueX[4]; // 0x500 - 0x510
   int32 m_hostageRescueY[4]; // 0x510 - 0x520
   int32 m_hostageRescueZ[4]; // 0x520 - 0x530
   bool m_bEndMatchNextMapAllVoted; // 0x530 - 0x531
   bool m_foundGoalPositions; // 0x531 - 0x532

}; // size - 0x538


class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
public:

   bool m_bIsRescuing; // 0x40 - 0x41
   unsigned char pad_41[0x3] // 0x41 - 0x44
   int32 m_iWeaponPurchasesThisMatch[256]; // 0x44 - 0x444
   int32 m_iWeaponPurchasesThisRound[256]; // 0x444 - 0x844

}; // size - 0x848


class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
public:

   CBasePlayerWeapon* m_lastWeaponBeforeC4AutoSwitch; // 0x230 - 0x238
   unsigned char pad_238[0x30] // 0x238 - 0x268
   bool m_bIsRescuing; // 0x268 - 0x269
   unsigned char pad_269[0x3] // 0x269 - 0x26C
   int32 m_iWeaponPurchasesThisMatch[256]; // 0x26C - 0x66C
   int32 m_iWeaponPurchasesThisRound[256]; // 0x66C - 0xA6C

}; // size - 0xA70


class CCSPlayer_BulletServices : public CPlayerPawnComponent
{
public:

   int32_t m_totalHitsOnServer; // 0x40 - 0x44

}; // size - 0x48


class CCSPlayer_BulletServices : public CPlayerPawnComponent
{
public:

   int32_t m_totalHitsOnServer; // 0x40 - 0x44

}; // size - 0x80


class CCSPlayer_BuyServices : public CPlayerPawnComponent
{
public:

   float m_flNextAutoBuyAmmoTime; // 0x40 - 0x44

}; // size - 0xC8


class CCSPlayer_CameraServices : public CPlayer_CameraServices
{
public:

   float m_flLastShotFOV; // 0x248 - 0x24C
   float m_flDeathCamTilt; // 0x24C - 0x250

}; // size - 0x250


class CCSPlayer_CameraServices : public CPlayer_CameraServices
{
public:

   CUtlVector< CHandle< CBaseEntity > > m_hTriggerFogList; // 0x188 - 0x1A0
   CHandle< CBaseEntity > m_hLastFogTrigger; // 0x1A0 - 0x1A4

}; // size - 0x1A8


class CCSPlayer_DamageReactServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CCSPlayer_GlowServices : public CPlayerPawnComponent
{
public:


}; // size - 0x70


class CCSPlayer_HostageServices : public CPlayerPawnComponent
{
public:

   CHandle< CBaseEntity > m_hCarriedHostage; // 0x40 - 0x44
   CHandle< CBaseEntity > m_hCarriedHostageProp; // 0x44 - 0x48

}; // size - 0x50


class CCSPlayer_HostageServices : public CPlayerPawnComponent
{
public:

   CHandle< C_BaseEntity > m_hCarriedHostage; // 0x40 - 0x44
   CHandle< C_BaseEntity > m_hCarriedHostageProp; // 0x44 - 0x48

}; // size - 0x48


class CCSPlayer_ItemServices : public CPlayer_ItemServices
{
public:

   bool m_bHasDefuser; // 0x40 - 0x41
   bool m_bHasHelmet; // 0x41 - 0x42
   bool m_bHasHeavyArmor; // 0x42 - 0x43

}; // size - 0x48


class CCSPlayer_ItemServices : public CPlayer_ItemServices
{
public:

   bool m_bHasDefuser; // 0x40 - 0x41
   bool m_bHasHelmet; // 0x41 - 0x42
   bool m_bHasHeavyArmor; // 0x42 - 0x43

}; // size - 0x48


class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:

   float m_flMaxFallVelocity; // 0x208 - 0x20C
   Vector m_vecLadderNormal; // 0x20C - 0x218
   int32_t m_nLadderSurfacePropIndex; // 0x218 - 0x21C
   bool m_bAllowAutoMovement; // 0x21C - 0x21D
   unsigned char pad_21D[0x3] // 0x21D - 0x220
   float m_flDuckAmount; // 0x220 - 0x224
   float m_flDuckSpeed; // 0x224 - 0x228
   bool m_bDuckOverride; // 0x228 - 0x229
   unsigned char pad_229[0x3] // 0x229 - 0x22C
   float m_flDuckOffset; // 0x22C - 0x230
   uint32_t m_nDuckTimeMsecs; // 0x230 - 0x234
   uint32_t m_nDuckJumpTimeMsecs; // 0x234 - 0x238
   uint32_t m_nJumpTimeMsecs; // 0x238 - 0x23C
   float m_flLastDuckTime; // 0x23C - 0x240
   unsigned char pad_240[0x8] // 0x240 - 0x248
   Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x248 - 0x250
   bool m_duckUntilOnGround; // 0x250 - 0x251
   bool m_bHasWalkMovedSinceLastJump; // 0x251 - 0x252
   bool m_bInStuckTest; // 0x252 - 0x253
   unsigned char pad_253[0x5] // 0x253 - 0x258
   uint64 m_CachedGetPointContents[64][3]; // 0x258 - 0x858
   Vector m_CachedGetPointContentsPoint[64][3]; // 0x858 - 0x1158
   unsigned char pad_1158[0x8] // 0x1158 - 0x1160
   float32 m_flStuckCheckTime[64][2]; // 0x1160 - 0x1360
   int32_t m_nTraceCount; // 0x1360 - 0x1364
   int32_t m_StuckLast; // 0x1364 - 0x1368
   bool m_bSpeedCropped; // 0x1368 - 0x1369
   unsigned char pad_1369[0x3] // 0x1369 - 0x136C
   int32_t m_nOldWaterLevel; // 0x136C - 0x1370
   float m_flWaterEntryTime; // 0x1370 - 0x1374
   Vector m_vecForward; // 0x1374 - 0x1380
   Vector m_vecLeft; // 0x1380 - 0x138C
   Vector m_vecUp; // 0x138C - 0x1398
   Vector m_vecPreviouslyPredictedOrigin; // 0x1398 - 0x13A4
   bool m_bMadeFootstepNoise; // 0x13A4 - 0x13A5
   unsigned char pad_13A5[0x3] // 0x13A5 - 0x13A8
   int32_t m_iFootsteps; // 0x13A8 - 0x13AC
   int32_t m_nRoundFootstepsMade; // 0x13AC - 0x13B0
   bool m_bOldJumpPressed; // 0x13B0 - 0x13B1
   unsigned char pad_13B1[0x3] // 0x13B1 - 0x13B4
   float m_flJumpUntil; // 0x13B4 - 0x13B8
   float m_flJumpVel; // 0x13B8 - 0x13BC
   GameTime_t m_fStashGrenadeParameterWhen; // 0x13BC - 0x13C0

}; // size - 0x13C0


class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:

   float m_flMaxFallVelocity; // 0x1F8 - 0x1FC
   Vector m_vecLadderNormal; // 0x1FC - 0x208
   int32_t m_nLadderSurfacePropIndex; // 0x208 - 0x20C
   bool m_bAllowAutoMovement; // 0x20C - 0x20D
   unsigned char pad_20D[0x3] // 0x20D - 0x210
   float m_flDuckAmount; // 0x210 - 0x214
   float m_flDuckSpeed; // 0x214 - 0x218
   bool m_bDuckOverride; // 0x218 - 0x219
   unsigned char pad_219[0x3] // 0x219 - 0x21C
   float m_flDuckOffset; // 0x21C - 0x220
   uint32_t m_nDuckTimeMsecs; // 0x220 - 0x224
   uint32_t m_nDuckJumpTimeMsecs; // 0x224 - 0x228
   uint32_t m_nJumpTimeMsecs; // 0x228 - 0x22C
   float m_flLastDuckTime; // 0x22C - 0x230
   unsigned char pad_230[0x8] // 0x230 - 0x238
   Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x238 - 0x240
   bool m_duckUntilOnGround; // 0x240 - 0x241
   bool m_bHasWalkMovedSinceLastJump; // 0x241 - 0x242
   bool m_bInStuckTest; // 0x242 - 0x243
   unsigned char pad_243[0x5] // 0x243 - 0x248
   uint64 m_CachedGetPointContents[64][3]; // 0x248 - 0x848
   Vector m_CachedGetPointContentsPoint[64][3]; // 0x848 - 0x1148
   unsigned char pad_1148[0x8] // 0x1148 - 0x1150
   float32 m_flStuckCheckTime[64][2]; // 0x1150 - 0x1350
   int32_t m_nTraceCount; // 0x1350 - 0x1354
   int32_t m_StuckLast; // 0x1354 - 0x1358
   bool m_bSpeedCropped; // 0x1358 - 0x1359
   unsigned char pad_1359[0x3] // 0x1359 - 0x135C
   int32_t m_nOldWaterLevel; // 0x135C - 0x1360
   float m_flWaterEntryTime; // 0x1360 - 0x1364
   Vector m_vecForward; // 0x1364 - 0x1370
   Vector m_vecLeft; // 0x1370 - 0x137C
   Vector m_vecUp; // 0x137C - 0x1388
   Vector m_vecPreviouslyPredictedOrigin; // 0x1388 - 0x1394
   bool m_bOldJumpPressed; // 0x1394 - 0x1395
   unsigned char pad_1395[0x3] // 0x1395 - 0x1398
   float m_flJumpUntil; // 0x1398 - 0x139C
   float m_flJumpVel; // 0x139C - 0x13A0
   GameTime_t m_fStashGrenadeParameterWhen; // 0x13A0 - 0x13A4
   bool m_bUpdatePredictedOriginAfterDataUpdate; // 0x13A4 - 0x13A5

}; // size - 0x13A8


class CCSPlayer_ObserverServices : public CPlayer_ObserverServices
{
public:


}; // size - 0x50


class CCSPlayer_ObserverServices : public CPlayer_ObserverServices
{
public:

   CEntityHandle m_hLastObserverTarget; // 0x58 - 0x5C
   Vector m_vecObserverInterpolateOffset; // 0x5C - 0x68
   Vector m_vecObserverInterpStartPos; // 0x68 - 0x74
   float m_flObsInterp_PathLength; // 0x74 - 0x78
   unsigned char pad_78[0x8] // 0x78 - 0x80
   Quaternion m_qObsInterp_OrientationStart; // 0x80 - 0x90
   Quaternion m_qObsInterp_OrientationTravelDir; // 0x90 - 0xA0
   ObserverInterpState_t m_obsInterpState; // 0xA0 - 0xA4
   bool m_bObserverInterpolationNeedsDeferredSetup; // 0xA4 - 0xA5
   unsigned char pad_A5[0x3] // 0xA5 - 0xA8
   int32_t m_nLastKillerDamageTaken; // 0xA8 - 0xAC
   int32_t m_nLastKillerHitsTaken; // 0xAC - 0xB0
   int32_t m_nLastKillerDamageGiven; // 0xB0 - 0xB4
   int32_t m_nLastKillerHitsGiven; // 0xB4 - 0xB8
   int32_t m_nLastKillerActualDamageGiven; // 0xB8 - 0xBC
   int32_t m_nLastKillerActualDamageTaken; // 0xBC - 0xC0
   bool m_bCanShowDeathPanelNow; // 0xC0 - 0xC1
   bool m_bWasShowingDeathPanel; // 0xC1 - 0xC2

}; // size - 0xD0


class CCSPlayer_ParachuteServices : public CPlayerPawnComponent
{
public:


}; // size - 0x78


class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:

   GameTime_t m_flPlayerPingTokens[5]; // 0x40 - 0x54
   CHandle< CBaseEntity > m_hPlayerPing; // 0x54 - 0x58

}; // size - 0x58


class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:

   CHandle< C_BaseEntity > m_hPlayerPing; // 0x40 - 0x44

}; // size - 0x48


class CCSPlayer_RadioServices : public CPlayerPawnComponent
{
public:

   GameTime_t m_flGotHostageTalkTimer; // 0x40 - 0x44
   GameTime_t m_flDefusingTalkTimer; // 0x44 - 0x48
   GameTime_t m_flC4PlantTalkTimer; // 0x48 - 0x4C
   float32 m_flRadioTokenSlots[3]; // 0x4C - 0x58
   bool m_bIgnoreRadio; // 0x58 - 0x59

}; // size - 0x60


class CCSPlayer_UseServices : public CPlayer_UseServices
{
public:


}; // size - 0x40


class CCSPlayer_UseServices : public CPlayer_UseServices
{
public:

   CHandle< CBaseEntity > m_hLastKnownUseEntity; // 0x40 - 0x44
   GameTime_t m_flLastUseTimeStamp; // 0x44 - 0x48
   GameTime_t m_flTimeStartedHoldingUse; // 0x48 - 0x4C
   GameTime_t m_flTimeLastUsedWindow; // 0x4C - 0x50

}; // size - 0x50


class CCSPlayer_ViewModelServices : public CPlayerPawnComponent
{
public:

   CHandle< C_BaseViewModel > m_hViewModel[3]; // 0x40 - 0x4C

}; // size - 0x50


class CCSPlayer_ViewModelServices : public CPlayerPawnComponent
{
public:

   CHandle< CBaseViewModel > m_hViewModel[3]; // 0x40 - 0x4C

}; // size - 0x50


class CCSPlayer_WaterServices : public CPlayer_WaterServices
{
public:

   float m_NextDrownDamageTime; // 0x40 - 0x44
   int32_t m_nDrownDmgRate; // 0x44 - 0x48
   GameTime_t m_AirFinishedTime; // 0x48 - 0x4C
   float m_flWaterJumpTime; // 0x4C - 0x50
   Vector m_vecWaterJumpVel; // 0x50 - 0x5C
   float m_flSwimSoundTime; // 0x5C - 0x60

}; // size - 0x68


class CCSPlayer_WaterServices : public CPlayer_WaterServices
{
public:

   float m_flWaterJumpTime; // 0x40 - 0x44
   Vector m_vecWaterJumpVel; // 0x44 - 0x50
   float m_flSwimSoundTime; // 0x50 - 0x54

}; // size - 0x60


class CCSPlayer_WeaponServices : public CPlayer_WeaponServices
{
public:

   GameTime_t m_flNextAttack; // 0xB0 - 0xB4
   bool m_bIsLookingAtWeapon; // 0xB4 - 0xB5
   bool m_bIsHoldingLookAtWeapon; // 0xB5 - 0xB6
   unsigned char pad_B6[0x2] // 0xB6 - 0xB8
   CHandle< CBasePlayerWeapon > m_hSavedWeapon; // 0xB8 - 0xBC
   int32_t m_nTimeToMelee; // 0xBC - 0xC0
   int32_t m_nTimeToSecondary; // 0xC0 - 0xC4
   int32_t m_nTimeToPrimary; // 0xC4 - 0xC8
   int32_t m_nTimeToSniperRifle; // 0xC8 - 0xCC
   bool m_bIsBeingGivenItem; // 0xCC - 0xCD
   bool m_bPickedUpWeapon; // 0xCD - 0xCE

}; // size - 0x460


class CCSPlayer_WeaponServices : public CPlayer_WeaponServices
{
public:

   GameTime_t m_flNextAttack; // 0xA8 - 0xAC
   bool m_bIsLookingAtWeapon; // 0xAC - 0xAD
   bool m_bIsHoldingLookAtWeapon; // 0xAD - 0xAE

}; // size - 0xB0


class CCSPropExplodingBarrel : public CPhysicsProp
{
public:

   CEntityHandle m_hBarrelTop; // 0xB08 - 0xB0C
   bool m_bExploded; // 0xB0C - 0xB0D
   unsigned char pad_B0D[0x3] // 0xB0D - 0xB10
   int32_t m_nAccumulatedDamage; // 0xB10 - 0xB14

}; // size - 0xB18


class CCSPropExplodingBarrelTop : public CPhysicsProp
{
public:

   float m_flOverrideAlpha; // 0xB00 - 0xB04

}; // size - 0xB08


class CCSSprite : public CSprite
{
public:


}; // size - 0x760


class CCSTeam : public CTeam
{
public:

   int32_t m_nLastRecievedShorthandedRoundBonus; // 0x558 - 0x55C
   int32_t m_nShorthandedRoundBonusStartRound; // 0x55C - 0x560
   bool m_bSurrendered; // 0x560 - 0x561
   char m_szTeamMatchStat[512]; // 0x561 - 0x761
   unsigned char pad_761[0x3] // 0x761 - 0x764
   int32_t m_numMapVictories; // 0x764 - 0x768
   int32_t m_scoreFirstHalf; // 0x768 - 0x76C
   int32_t m_scoreSecondHalf; // 0x76C - 0x770
   int32_t m_scoreOvertime; // 0x770 - 0x774
   char m_szClanTeamname[129]; // 0x774 - 0x7F5
   unsigned char pad_7F5[0x3] // 0x7F5 - 0x7F8
   uint32_t m_iClanID; // 0x7F8 - 0x7FC
   char m_szTeamFlagImage[8]; // 0x7FC - 0x804
   char m_szTeamLogoImage[8]; // 0x804 - 0x80C
   float m_flNextResourceTime; // 0x80C - 0x810
   int32_t m_iLastUpdateSentAt; // 0x810 - 0x814
   float m_flLastPlayerSortTime; // 0x814 - 0x818
   CPlayerSlot m_nLastGGLeader_CT; // 0x818 - 0x81C
   CPlayerSlot m_nLastGGLeader_T; // 0x81C - 0x820
   CPlayerSlot m_nGGLeaderSlot_CT; // 0x820 - 0x824
   CPlayerSlot m_nGGLeaderSlot_T; // 0x824 - 0x828
   bool m_bGGHasLeader_CT; // 0x828 - 0x829
   bool m_bGGHasLeader_T; // 0x829 - 0x82A

}; // size - 0x830


class CCachedPose
{
public:

   CUtlVector< CTransform > m_transforms; // 0x8 - 0x20
   CUtlVector< float32 > m_morphWeights; // 0x20 - 0x38
   HSequence m_hSequence; // 0x38 - 0x3C
   float m_flCycle; // 0x3C - 0x40

}; // size - 0x40


class CChangeLevel : public CBaseTrigger
{
public:

   CUtlString m_sMapName; // 0x898 - 0x8A0
   CUtlString m_sLandmarkName; // 0x8A0 - 0x8A8
   CEntityIOOutput m_OnChangeLevel; // 0x8A8 - 0x8D0
   bool m_bTouched; // 0x8D0 - 0x8D1
   bool m_bNoTouch; // 0x8D1 - 0x8D2
   bool m_bNewChapter; // 0x8D2 - 0x8D3
   bool m_bOnChangeLevelFired; // 0x8D3 - 0x8D4

}; // size - 0x8D8


class CChicken : public CDynamicProp
{
public:

   CAttributeContainer m_AttributeManager; // 0xAB8 - 0xD80
   uint32_t m_OriginalOwnerXuidLow; // 0xD80 - 0xD84
   uint32_t m_OriginalOwnerXuidHigh; // 0xD84 - 0xD88
   CountdownTimer m_updateTimer; // 0xD88 - 0xDA0
   Vector m_stuckAnchor; // 0xDA0 - 0xDAC
   unsigned char pad_DAC[0x4] // 0xDAC - 0xDB0
   CountdownTimer m_stuckTimer; // 0xDB0 - 0xDC8
   CountdownTimer m_collisionStuckTimer; // 0xDC8 - 0xDE0
   bool m_isOnGround; // 0xDE0 - 0xDE1
   unsigned char pad_DE1[0x3] // 0xDE1 - 0xDE4
   ChickenActivity m_activity; // 0xDE4 - 0xDE8
   CountdownTimer m_activityTimer; // 0xDE8 - 0xE00
   float m_turnRate; // 0xE00 - 0xE04
   CHandle< CBaseEntity > m_fleeFrom; // 0xE04 - 0xE08
   CountdownTimer m_moveRateThrottleTimer; // 0xE08 - 0xE20
   CountdownTimer m_startleTimer; // 0xE20 - 0xE38
   CountdownTimer m_vocalizeTimer; // 0xE38 - 0xE50
   GameTime_t m_flWhenZombified; // 0xE50 - 0xE54
   bool m_jumpedThisFrame; // 0xE54 - 0xE55
   unsigned char pad_E55[0x3] // 0xE55 - 0xE58
   CHandle< CCSPlayerPawnBase > m_leader; // 0xE58 - 0xE5C
   unsigned char pad_E5C[0x4] // 0xE5C - 0xE60
   CountdownTimer m_reuseTimer; // 0xE60 - 0xE78
   bool m_hasBeenUsed; // 0xE78 - 0xE79
   unsigned char pad_E79[0x7] // 0xE79 - 0xE80
   CountdownTimer m_jumpTimer; // 0xE80 - 0xE98
   float m_flLastJumpTime; // 0xE98 - 0xE9C
   bool m_bInJump; // 0xE9C - 0xE9D
   bool m_isWaitingForLeader; // 0xE9D - 0xE9E
   unsigned char pad_E9E[0x200A] // 0xE9E - 0x2EA8
   CountdownTimer m_repathTimer; // 0x2EA8 - 0x2EC0
   CountdownTimer m_inhibitDoorTimer; // 0x2EC0 - 0x2ED8
   unsigned char pad_2ED8[0x78] // 0x2ED8 - 0x2F50
   CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2F50 - 0x2F68
   unsigned char pad_2F68[0x8] // 0x2F68 - 0x2F70
   Vector m_vecPathGoal; // 0x2F70 - 0x2F7C
   float m_flActiveFollowStartTime; // 0x2F7C - 0x2F80
   CountdownTimer m_followMinuteTimer; // 0x2F80 - 0x2F98
   Vector m_vecLastEggPoopPosition; // 0x2F98 - 0x2FA4
   unsigned char pad_2FA4[0x4] // 0x2FA4 - 0x2FA8
   CUtlVector< CHandle< CBaseEntity > > m_vecEggsPooped; // 0x2FA8 - 0x2FC0
   unsigned char pad_2FC0[0x8] // 0x2FC0 - 0x2FC8
   CountdownTimer m_BlockDirectionTimer; // 0x2FC8 - 0x2FE0

}; // size - 0x2FE0


class CChoiceAnimNode : public CAnimNodeBase
{
public:

   CUtlVector< CChoiceNodeChild > m_children; // 0x38 - 0x50
   int32_t m_seed; // 0x50 - 0x54
   ChoiceMethod m_choiceMethod; // 0x54 - 0x58
   ChoiceChangeMethod m_choiceChangeMethod; // 0x58 - 0x5C
   ChoiceBlendMethod m_blendMethod; // 0x5C - 0x60
   float m_blendTime; // 0x60 - 0x64
   bool m_bCrossFade; // 0x64 - 0x65
   bool m_bResetChosen; // 0x65 - 0x66
   bool m_bDontResetSameSelection; // 0x66 - 0x67

}; // size - 0x68


class CChoiceNodeChild
{
public:

   CAnimNodeConnection m_inputConnection; // 0x0 - 0x8
   CUtlString m_name; // 0x8 - 0x10
   float m_weight; // 0x10 - 0x14
   float m_blendTime; // 0x14 - 0x18

}; // size - 0x18


class CChoiceUpdateNode : public CAnimUpdateNodeBase
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

}; // size - 0xB8


class CChoreoAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40

}; // size - 0x40


class CChoreoUpdateNode : public CUnaryUpdateNode
{
public:


}; // size - 0x70


class CClientAlphaProperty : public IClientAlphaProperty
{
public:

   uint8_t m_nRenderFX; // 0x10 - 0x11
   uint8_t m_nRenderMode; // 0x11 - 0x12
   bitfield:1 m_bAlphaOverride; // 0x0 - 0x0
   bitfield:1 m_bShadowAlphaOverride; // 0x0 - 0x0
   bitfield:6 m_nReserved; // 0x0 - 0x0
   unsigned char pad_0[0x13] // 0x0 - 0x13
   uint8_t m_nAlpha; // 0x13 - 0x14
   uint16_t m_nDesyncOffset; // 0x14 - 0x16
   uint16_t m_nReserved2; // 0x16 - 0x18
   uint16_t m_nDistFadeStart; // 0x18 - 0x1A
   uint16_t m_nDistFadeEnd; // 0x1A - 0x1C
   float m_flFadeScale; // 0x1C - 0x20
   GameTime_t m_flRenderFxStartTime; // 0x20 - 0x24
   float m_flRenderFxDuration; // 0x24 - 0x28

}; // size - 0x30


class CClothSettingsAnimTag : public CAnimTagBase
{
public:

   float m_flStiffness; // 0x40 - 0x44
   float m_flEaseIn; // 0x44 - 0x48
   float m_flEaseOut; // 0x48 - 0x4C
   unsigned char pad_4C[0x4] // 0x4C - 0x50
   CUtlString m_nVertexSet; // 0x50 - 0x58

}; // size - 0x58


class CCollisionProperty
{
public:

   VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10 - 0x40
   Vector m_vecMins; // 0x40 - 0x4C
   Vector m_vecMaxs; // 0x4C - 0x58
   unsigned char pad_58[0x2] // 0x58 - 0x5A
   uint8_t m_usSolidFlags; // 0x5A - 0x5B
   SolidType_t m_nSolidType; // 0x5B - 0x5C
   uint8_t m_triggerBloat; // 0x5C - 0x5D
   SurroundingBoundsType_t m_nSurroundType; // 0x5D - 0x5E
   uint8_t m_CollisionGroup; // 0x5E - 0x5F
   uint8_t m_nEnablePhysics; // 0x5F - 0x60
   float m_flBoundingRadius; // 0x60 - 0x64
   Vector m_vecSpecifiedSurroundingMins; // 0x64 - 0x70
   Vector m_vecSpecifiedSurroundingMaxs; // 0x70 - 0x7C
   Vector m_vecSurroundingMaxs; // 0x7C - 0x88
   Vector m_vecSurroundingMins; // 0x88 - 0x94
   Vector m_vCapsuleCenter1; // 0x94 - 0xA0
   Vector m_vCapsuleCenter2; // 0xA0 - 0xAC
   float m_flCapsuleRadius; // 0xAC - 0xB0

}; // size - 0xB0


class CCollisionProperty
{
public:

   VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10 - 0x40
   Vector m_vecMins; // 0x40 - 0x4C
   Vector m_vecMaxs; // 0x4C - 0x58
   unsigned char pad_58[0x2] // 0x58 - 0x5A
   uint8_t m_usSolidFlags; // 0x5A - 0x5B
   SolidType_t m_nSolidType; // 0x5B - 0x5C
   uint8_t m_triggerBloat; // 0x5C - 0x5D
   SurroundingBoundsType_t m_nSurroundType; // 0x5D - 0x5E
   uint8_t m_CollisionGroup; // 0x5E - 0x5F
   uint8_t m_nEnablePhysics; // 0x5F - 0x60
   float m_flBoundingRadius; // 0x60 - 0x64
   Vector m_vecSpecifiedSurroundingMins; // 0x64 - 0x70
   Vector m_vecSpecifiedSurroundingMaxs; // 0x70 - 0x7C
   Vector m_vecSurroundingMaxs; // 0x7C - 0x88
   Vector m_vecSurroundingMins; // 0x88 - 0x94
   Vector m_vCapsuleCenter1; // 0x94 - 0xA0
   Vector m_vCapsuleCenter2; // 0xA0 - 0xAC
   float m_flCapsuleRadius; // 0xAC - 0xB0

}; // size - 0xB0


class CColorCorrection : public CBaseEntity
{
public:

   float m_flFadeInDuration; // 0x4A0 - 0x4A4
   float m_flFadeOutDuration; // 0x4A4 - 0x4A8
   float m_flStartFadeInWeight; // 0x4A8 - 0x4AC
   float m_flStartFadeOutWeight; // 0x4AC - 0x4B0
   GameTime_t m_flTimeStartFadeIn; // 0x4B0 - 0x4B4
   GameTime_t m_flTimeStartFadeOut; // 0x4B4 - 0x4B8
   float m_flMaxWeight; // 0x4B8 - 0x4BC
   bool m_bStartDisabled; // 0x4BC - 0x4BD
   bool m_bEnabled; // 0x4BD - 0x4BE
   bool m_bMaster; // 0x4BE - 0x4BF
   bool m_bClientSide; // 0x4BF - 0x4C0
   bool m_bExclusive; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x3] // 0x4C1 - 0x4C4
   float m_MinFalloff; // 0x4C4 - 0x4C8
   float m_MaxFalloff; // 0x4C8 - 0x4CC
   float m_flCurWeight; // 0x4CC - 0x4D0
   char m_netlookupFilename[512]; // 0x4D0 - 0x6D0
   CUtlSymbolLarge m_lookupFilename; // 0x6D0 - 0x6D8

}; // size - 0x6D8


class CColorCorrectionVolume : public CBaseTrigger
{
public:

   bool m_bEnabled; // 0x898 - 0x899
   unsigned char pad_899[0x3] // 0x899 - 0x89C
   float m_MaxWeight; // 0x89C - 0x8A0
   float m_FadeDuration; // 0x8A0 - 0x8A4
   bool m_bStartDisabled; // 0x8A4 - 0x8A5
   unsigned char pad_8A5[0x3] // 0x8A5 - 0x8A8
   float m_Weight; // 0x8A8 - 0x8AC
   char m_lookupFilename[512]; // 0x8AC - 0xAAC
   float m_LastEnterWeight; // 0xAAC - 0xAB0
   GameTime_t m_LastEnterTime; // 0xAB0 - 0xAB4
   float m_LastExitWeight; // 0xAB4 - 0xAB8
   GameTime_t m_LastExitTime; // 0xAB8 - 0xABC

}; // size - 0xAC0


class CCommentAnimNode : public CAnimNodeBase
{
public:

   CUtlString m_commentText; // 0x40 - 0x48
   Vector2D m_size; // 0x48 - 0x50
   Color m_color; // 0x50 - 0x54

}; // size - 0x58


class CCommentaryAuto : public CBaseEntity
{
public:

   CEntityIOOutput m_OnCommentaryNewGame; // 0x4A0 - 0x4C8
   CEntityIOOutput m_OnCommentaryMidGame; // 0x4C8 - 0x4F0
   CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x4F0 - 0x518

}; // size - 0x518


class CCommentarySystem
{
public:

   bool m_bCommentaryConvarsChanging; // 0x11 - 0x12
   bool m_bCommentaryEnabledMidGame; // 0x12 - 0x13
   unsigned char pad_13[0x1] // 0x13 - 0x14
   GameTime_t m_flNextTeleportTime; // 0x14 - 0x18
   int32_t m_iTeleportStage; // 0x18 - 0x1C
   bool m_bCheatState; // 0x1C - 0x1D
   bool m_bIsFirstSpawnGroupToLoad; // 0x1D - 0x1E
   unsigned char pad_1E[0x1A] // 0x1E - 0x38
   CHandle< CPointCommentaryNode > m_hCurrentNode; // 0x38 - 0x3C
   CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // 0x3C - 0x40
   CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // 0x40 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes; // 0x48 - 0x60

}; // size - 0x60


class CCommentaryViewPosition : public CSprite
{
public:


}; // size - 0x760


class CCompositeMaterialEditorDoc
{
public:

   int32_t m_nVersion; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< CompositeMaterialEditorPoint_t > m_Points; // 0x10 - 0x28
   KeyValues3 m_KVthumbnail; // 0x28 - 0x38

}; // size - 0x38


class CCompressorGroup
{
public:

   int32_t m_nTotalElementCount; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CUtlVector< char* > m_szChannelClass; // 0x8 - 0x20
   CUtlVector< char* > m_szVariableName; // 0x20 - 0x38
   CUtlVector< fieldtype_t > m_nType; // 0x38 - 0x50
   CUtlVector< int32 > m_nFlags; // 0x50 - 0x68
   CUtlVector< CUtlString > m_szGrouping; // 0x68 - 0x80
   CUtlVector< int32 > m_nCompressorIndex; // 0x80 - 0x98
   CUtlVector< CUtlVector< char* > > m_szElementNames; // 0x98 - 0xB0
   CUtlVector< CUtlVector< int32 > > m_nElementUniqueID; // 0xB0 - 0xC8
   CUtlVector< uint32 > m_nElementMask; // 0xC8 - 0xE0
   unsigned char pad_E0[0x18] // 0xE0 - 0xF8
   CUtlVector< CCompressor< Vector >* > m_vectorCompressor; // 0xF8 - 0x110
   CUtlVector< CCompressor< QuaternionStorage >* > m_quaternionCompressor; // 0x110 - 0x128
   CUtlVector< CCompressor< int32 >* > m_intCompressor; // 0x128 - 0x140
   CUtlVector< CCompressor< bool >* > m_boolCompressor; // 0x140 - 0x158
   CUtlVector< CCompressor< Color >* > m_colorCompressor; // 0x158 - 0x170
   CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor; // 0x170 - 0x188
   CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor; // 0x188 - 0x1A0

}; // size - 0x1A0


class CConditionContainer
{
public:

   CUtlVector< CSmartPtr< CConditionBase > > m_conditions; // 0x10 - 0x28

}; // size - 0x38


class CConnectionProxyItem
{
public:

   CUtlString m_name; // 0x0 - 0x8
   AnimNodeOutputID m_outputID; // 0x8 - 0xC
   CAnimNodeConnection m_inputConnection; // 0xC - 0x14

}; // size - 0x18


class CConstantForceController
{
public:

   Vector m_linear; // 0xC - 0x18
   RotationVector m_angular; // 0x18 - 0x24
   Vector m_linearSave; // 0x24 - 0x30
   RotationVector m_angularSave; // 0x30 - 0x3C

}; // size - 0x40


class CConstraintAnchor : public CBaseAnimGraph
{
public:

   float m_massScale; // 0x820 - 0x824

}; // size - 0x828


class CConstraintSlave
{
public:

   Quaternion m_qBaseOrientation; // 0x0 - 0x10
   Vector m_vBasePosition; // 0x10 - 0x1C
   uint32_t m_nBoneHash; // 0x1C - 0x20
   float m_flWeight; // 0x20 - 0x24
   unsigned char pad_24[0x4] // 0x24 - 0x28
   CUtlString m_sName; // 0x28 - 0x30

}; // size - 0x60


class CConstraintTarget
{
public:

   Quaternion m_qOffset; // 0x20 - 0x30
   Vector m_vOffset; // 0x30 - 0x3C
   uint32_t m_nBoneHash; // 0x3C - 0x40
   CUtlString m_sName; // 0x40 - 0x48
   float m_flWeight; // 0x48 - 0x4C
   unsigned char pad_4C[0xD] // 0x4C - 0x59
   bool m_bIsAttachment; // 0x59 - 0x5A

}; // size - 0x60


class CCoopBonusCoin : public CDynamicProp
{
public:


}; // size - 0xA98


class CCopyRecipientFilter
{
public:

   int32_t m_Flags; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< CPlayerSlot > m_Recipients; // 0x10 - 0x28

}; // size - 0x28


class CCredits : public CPointEntity
{
public:

   CEntityIOOutput m_OnCreditsDone; // 0x4A0 - 0x4C8
   bool m_bRolledOutroCredits; // 0x4C8 - 0x4C9
   unsigned char pad_4C9[0x3] // 0x4C9 - 0x4CC
   float m_flLogoLength; // 0x4CC - 0x4D0

}; // size - 0x4D0


class CCurrentRotationVelocityMetric : public CMotionMetricBase
{
public:


}; // size - 0x28


class CCurrentRotationVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:


}; // size - 0x50


class CCurrentVelocityMetric : public CMotionMetricBase
{
public:


}; // size - 0x28


class CCurrentVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:


}; // size - 0x50


class CCycleCondition : public CConditionBase
{
public:

   Comparison_t m_comparisonOp; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   CUtlString m_comparisonString; // 0x30 - 0x38
   float m_comparisonValue; // 0x38 - 0x3C
   ComparisonValueType m_comparisonValueType; // 0x3C - 0x3D
   unsigned char pad_3D[0x3] // 0x3D - 0x40
   AnimParamID m_comparisonParamID; // 0x40 - 0x44

}; // size - 0x48


class CCycleControlAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   AnimValueSource m_valueSource; // 0x40 - 0x44
   AnimParamID m_param; // 0x44 - 0x48

}; // size - 0x48


class CCycleControlClipAnimNode : public CAnimNodeBase
{
public:

   CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x50 - 0x68
   CUtlString m_sequenceName; // 0x68 - 0x70
   AnimValueSource m_valueSource; // 0x70 - 0x74
   AnimParamID m_param; // 0x74 - 0x78

}; // size - 0x78


class CCycleControlClipUpdateNode : public CLeafUpdateNode
{
public:

   CUtlVector< TagSpan_t > m_tags; // 0x60 - 0x78
   unsigned char pad_78[0x4] // 0x78 - 0x7C
   HSequence m_hSequence; // 0x7C - 0x80
   float m_duration; // 0x80 - 0x84
   AnimValueSource m_valueSource; // 0x84 - 0x88
   CAnimParamHandle m_paramIndex; // 0x88 - 0x8A

}; // size - 0x90


class CCycleControlUpdateNode : public CUnaryUpdateNode
{
public:

   AnimValueSource m_valueSource; // 0x68 - 0x6C
   CAnimParamHandle m_paramIndex; // 0x6C - 0x6E

}; // size - 0x70


class CDEagle : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CDSPMixgroupModifier
{
public:

   CUtlString m_mixgroup; // 0x0 - 0x8
   float m_flModifier; // 0x8 - 0xC
   float m_flModifierMin; // 0xC - 0x10
   float m_flSourceModifier; // 0x10 - 0x14
   float m_flSourceModifierMin; // 0x14 - 0x18
   float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18 - 0x1C

}; // size - 0x20


class CDSPPresetMixgroupModifierTable
{
public:

   CUtlVector< CDspPresetModifierList > m_table; // 0x0 - 0x18

}; // size - 0x18


class CDZDoor : public CPropDoorRotatingBreakable
{
public:

   bool m_bIsSecurityDoor; // 0xDE0 - 0xDE1
   unsigned char pad_DE1[0x3] // 0xDE1 - 0xDE4
   CHandle< CPointDZWeaponSpawn > m_hSpawnPoint; // 0xDE4 - 0xDE8
   bool m_bPaidToUnlock; // 0xDE8 - 0xDE9
   unsigned char pad_DE9[0x3] // 0xDE9 - 0xDEC
   int32_t m_nPlayDoorOpenSound; // 0xDEC - 0xDF0
   unsigned char pad_DF0[0x30] // 0xDF0 - 0xE20
   AttachmentHandle_t m_nAttachmentIndex1; // 0xE20 - 0xE21
   AttachmentHandle_t m_nAttachmentIndex2; // 0xE21 - 0xE22

}; // size - 0xE28


class CDamageRecord
{
public:

   CHandle< C_CSPlayerPawnBase > m_PlayerDamager; // 0x28 - 0x2C
   CHandle< C_CSPlayerPawnBase > m_PlayerRecipient; // 0x2C - 0x30
   CHandle< CCSPlayerController > m_hPlayerControllerDamager; // 0x30 - 0x34
   CHandle< CCSPlayerController > m_hPlayerControllerRecipient; // 0x34 - 0x38
   CUtlString m_szPlayerDamagerName; // 0x38 - 0x40
   CUtlString m_szPlayerRecipientName; // 0x40 - 0x48
   uint64_t m_DamagerXuid; // 0x48 - 0x50
   uint64_t m_RecipientXuid; // 0x50 - 0x58
   int32_t m_iDamage; // 0x58 - 0x5C
   int32_t m_iActualHealthRemoved; // 0x5C - 0x60
   int32_t m_iNumHits; // 0x60 - 0x64
   int32_t m_iLastBulletUpdate; // 0x64 - 0x68
   bool m_bIsOtherEnemy; // 0x68 - 0x69
   EKillTypes_t m_killType; // 0x69 - 0x6A

}; // size - 0x70


class CDamageRecord
{
public:

   CHandle< CCSPlayerPawnBase > m_PlayerDamager; // 0x28 - 0x2C
   CHandle< CCSPlayerPawnBase > m_PlayerRecipient; // 0x2C - 0x30
   CHandle< CCSPlayerController > m_hPlayerControllerDamager; // 0x30 - 0x34
   CHandle< CCSPlayerController > m_hPlayerControllerRecipient; // 0x34 - 0x38
   CUtlString m_szPlayerDamagerName; // 0x38 - 0x40
   CUtlString m_szPlayerRecipientName; // 0x40 - 0x48
   uint64_t m_DamagerXuid; // 0x48 - 0x50
   uint64_t m_RecipientXuid; // 0x50 - 0x58
   int32_t m_iDamage; // 0x58 - 0x5C
   int32_t m_iActualHealthRemoved; // 0x5C - 0x60
   int32_t m_iNumHits; // 0x60 - 0x64
   int32_t m_iLastBulletUpdate; // 0x64 - 0x68
   bool m_bIsOtherEnemy; // 0x68 - 0x69
   EKillTypes_t m_killType; // 0x69 - 0x6A

}; // size - 0x70


class CDampedPathAnimMotor : public CPathAnimMotorBase
{
public:

   float m_flAnticipationTime; // 0x30 - 0x34
   float m_flMinSpeedScale; // 0x34 - 0x38
   AnimParamID m_anticipationPosParam; // 0x38 - 0x3C
   AnimParamID m_anticipationHeadingParam; // 0x3C - 0x40
   float m_flSpringConstant; // 0x40 - 0x44
   float m_flMinSpringTension; // 0x44 - 0x48
   float m_flMaxSpringTension; // 0x48 - 0x4C

}; // size - 0x50


class CDampedPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase
{
public:

   float m_flAnticipationTime; // 0x2C - 0x30
   float m_flMinSpeedScale; // 0x30 - 0x34
   CAnimParamHandle m_hAnticipationPosParam; // 0x34 - 0x36
   CAnimParamHandle m_hAnticipationHeadingParam; // 0x36 - 0x38
   float m_flSpringConstant; // 0x38 - 0x3C
   float m_flMinSpringTension; // 0x3C - 0x40
   float m_flMaxSpringTension; // 0x40 - 0x44

}; // size - 0x48


class CDampedValueComponent : public CAnimComponentBase
{
public:

   CUtlString m_name; // 0x38 - 0x40
   CUtlVector< CDampedValueItem > m_items; // 0x40 - 0x58

}; // size - 0x58


class CDampedValueComponentUpdater : public CAnimComponentUpdater
{
public:

   CUtlVector< CDampedValueUpdateItem > m_items; // 0x30 - 0x48

}; // size - 0x48


class CDampedValueItem
{
public:

   DampedValueType m_valueType; // 0x0 - 0x4
   AnimParamID m_floatParamIn; // 0x4 - 0x8
   AnimParamID m_floatParamOut; // 0x8 - 0xC
   AnimParamID m_vectorParamIn; // 0xC - 0x10
   AnimParamID m_vectorParamOut; // 0x10 - 0x14
   unsigned char pad_14[0x4] // 0x14 - 0x18
   CAnimInputDamping m_damping; // 0x18 - 0x28

}; // size - 0x28


class CDampedValueUpdateItem
{
public:

   CAnimInputDamping m_damping; // 0x0 - 0x10
   unsigned char pad_10[0x8] // 0x10 - 0x18
   CAnimParamHandle m_hParamIn; // 0x18 - 0x1A
   CAnimParamHandle m_hParamOut; // 0x1A - 0x1C

}; // size - 0x20


class CDangerZone : public CPointEntity
{
public:

   Vector m_vecDangerZoneOriginStartedAt; // 0x4A0 - 0x4AC
   GameTime_t m_flBombLaunchTime; // 0x4AC - 0x4B0
   float m_flExtraRadius; // 0x4B0 - 0x4B4
   GameTime_t m_flExtraRadiusStartTime; // 0x4B4 - 0x4B8
   float m_flExtraRadiusTotalLerpTime; // 0x4B8 - 0x4BC
   int32_t m_nDropOrder; // 0x4BC - 0x4C0
   int32_t m_iWave; // 0x4C0 - 0x4C4
   int32_t m_nMyZoneIndex; // 0x4C4 - 0x4C8
   int32 m_nZoneNeighbors[6]; // 0x4C8 - 0x4E0

}; // size - 0x4E8


class CDangerZoneController : public CBaseEntity
{
public:

   bool m_bDangerZoneControllerEnabled; // 0x4A0 - 0x4A1
   bool m_bMissionControlledExplosions; // 0x4A1 - 0x4A2
   unsigned char pad_4A2[0x2] // 0x4A2 - 0x4A4
   Vector m_vecEndGameCircleStart; // 0x4A4 - 0x4B0
   Vector m_vecEndGameCircleEnd; // 0x4B0 - 0x4BC
   GameTime_t m_flStartTime; // 0x4BC - 0x4C0
   float m_flFinalExpansionTime; // 0x4C0 - 0x4C4
   CHandle< CDangerZone > m_DangerZones[42]; // 0x4C4 - 0x56C
   GameTime_t m_flWaveEndTimes[5]; // 0x56C - 0x580
   CHandle< CDangerZone > m_hTheFinalZone; // 0x580 - 0x584
   float m_flLastDangerZoneStatusLogged; // 0x584 - 0x588
   GameTime_t m_flLastDangerZoneDamageTime; // 0x588 - 0x58C
   bool m_bFirstBombWarning; // 0x58C - 0x58D
   unsigned char pad_58D[0x3] // 0x58D - 0x590
   int32_t m_numWaveRewardsGranted; // 0x590 - 0x594
   unsigned char pad_594[0x4] // 0x594 - 0x598
   CUtlVector< CPointEntity* > m_pGasCanLaunchers; // 0x598 - 0x5B0

}; // size - 0x5B0


class CDebugHistory : public CBaseEntity
{
public:

   int32_t m_nNpcEvents; // 0x1F44E0 - 0x1F44E4

}; // size - 0x1F5488


class CDecalInfo
{
public:

   float m_flAnimationScale; // 0x0 - 0x4
   float m_flAnimationLifeSpan; // 0x4 - 0x8
   float m_flPlaceTime; // 0x8 - 0xC
   float m_flFadeStartTime; // 0xC - 0x10
   float m_flFadeDuration; // 0x10 - 0x14
   int32_t m_nVBSlot; // 0x14 - 0x18
   int32_t m_nBoneIndex; // 0x18 - 0x1C
   unsigned char pad_1C[0xC] // 0x1C - 0x28
   CDecalInfo* m_pNext; // 0x28 - 0x30
   CDecalInfo* m_pPrev; // 0x30 - 0x38
   unsigned char pad_38[0x58] // 0x38 - 0x90
   int32_t m_nDecalMaterialIndex; // 0x90 - 0x94

}; // size - 0x98


class CDecoyGrenade : public CBaseCSGrenade
{
public:


}; // size - 0xD90


class CDecoyProjectile : public CBaseCSGrenadeProjectile
{
public:

   int32_t m_shotsRemaining; // 0x9A8 - 0x9AC
   GameTime_t m_fExpireTime; // 0x9AC - 0x9B0
   unsigned char pad_9B0[0x8] // 0x9B0 - 0x9B8
   uint16_t m_decoyWeaponDefIndex; // 0x9B8 - 0x9BA

}; // size - 0x9C0


class CDirectPlaybackAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   bool m_bFinishEarly; // 0x40 - 0x41
   bool m_bResetOnFinish; // 0x41 - 0x42

}; // size - 0x48


class CDirectPlaybackTagData
{
public:

   CUtlString m_sequenceName; // 0x0 - 0x8
   CUtlVector< TagSpan_t > m_tags; // 0x8 - 0x20

}; // size - 0x20


class CDirectPlaybackUpdateNode : public CUnaryUpdateNode
{
public:

   bool m_bFinishEarly; // 0x6C - 0x6D
   bool m_bResetOnFinish; // 0x6D - 0x6E
   unsigned char pad_6E[0x2] // 0x6E - 0x70
   CUtlVector< CDirectPlaybackTagData > m_allTags; // 0x70 - 0x88

}; // size - 0x88


class CDirectionalBlendAnimNode : public CAnimNodeBase
{
public:

   CUtlString m_animNamePrefix; // 0x40 - 0x48
   AnimValueSource m_blendValueSource; // 0x48 - 0x4C
   AnimParamID m_param; // 0x4C - 0x50
   bool m_bLoop; // 0x50 - 0x51
   bool m_bLockBlendOnReset; // 0x51 - 0x52
   unsigned char pad_52[0x2] // 0x52 - 0x54
   float m_playbackSpeed; // 0x54 - 0x58
   CAnimInputDamping m_damping; // 0x58 - 0x68

}; // size - 0x68


class CDirectionalBlendUpdateNode : public CLeafUpdateNode
{
public:

   HSequence m_hSequences[8]; // 0x5C - 0x7C
   unsigned char pad_7C[0x4] // 0x7C - 0x80
   CAnimInputDamping m_damping; // 0x80 - 0x90
   AnimValueSource m_blendValueSource; // 0x90 - 0x94
   CAnimParamHandle m_paramIndex; // 0x94 - 0x96
   unsigned char pad_96[0x2] // 0x96 - 0x98
   float m_playbackSpeed; // 0x98 - 0x9C
   float m_duration; // 0x9C - 0xA0
   bool m_bLoop; // 0xA0 - 0xA1
   bool m_bLockBlendOnReset; // 0xA1 - 0xA2

}; // size - 0xA8


class CDistanceRemainingMetric : public CMotionMetricBase
{
public:

   float m_flMaxDistance; // 0x28 - 0x2C
   bool m_bFilterFixedMinDistance; // 0x2C - 0x2D
   unsigned char pad_2D[0x3] // 0x2D - 0x30
   float m_flMinDistance; // 0x30 - 0x34
   bool m_bFilterGoalDistance; // 0x34 - 0x35
   unsigned char pad_35[0x3] // 0x35 - 0x38
   float m_flStartGoalFilterDistance; // 0x38 - 0x3C
   bool m_bFilterGoalOvershoot; // 0x3C - 0x3D
   unsigned char pad_3D[0x3] // 0x3D - 0x40
   float m_flMaxGoalOvershootScale; // 0x40 - 0x44

}; // size - 0x48


class CDistanceRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:

   float m_flMaxDistance; // 0x50 - 0x54
   float m_flMinDistance; // 0x54 - 0x58
   float m_flStartGoalFilterDistance; // 0x58 - 0x5C
   float m_flMaxGoalOvershootScale; // 0x5C - 0x60
   bool m_bFilterFixedMinDistance; // 0x60 - 0x61
   bool m_bFilterGoalDistance; // 0x61 - 0x62
   bool m_bFilterGoalOvershoot; // 0x62 - 0x63

}; // size - 0x68


class CDrawCullingData
{
public:

   Vector m_vConeApex; // 0x0 - 0xC
   int8 m_ConeAxis[3]; // 0xC - 0xF
   int8_t m_ConeCutoff; // 0xF - 0x10

}; // size - 0x10


class CDrone : public CPhysicsProp
{
public:

   CEntityHandle m_hMoveToThisEntity; // 0xB18 - 0xB1C
   CEntityHandle m_hDeliveryCargo; // 0xB1C - 0xB20
   CEntityHandle m_hRecentCargo; // 0xB20 - 0xB24
   bool m_bPilotTakeoverAllowed; // 0xB24 - 0xB25
   unsigned char pad_B25[0x3] // 0xB25 - 0xB28
   CEntityHandle m_hPotentialCargo; // 0xB28 - 0xB2C
   CEntityHandle m_hCurrentPilot; // 0xB2C - 0xB30
   Vector m_vecTagPositions[24]; // 0xB30 - 0xC50
   int32 m_vecTagIncrements[24]; // 0xC50 - 0xCB0
   GameTime_t m_flLastUpdateTargetScanTime; // 0xCB0 - 0xCB4
   bool m_bWasControlledByPlayer; // 0xCB4 - 0xCB5
   bool m_bHovering; // 0xCB5 - 0xCB6
   unsigned char pad_CB6[0x2] // 0xCB6 - 0xCB8
   CSoundPatch* m_pStateSound; // 0xCB8 - 0xCC0
   Vector m_vecGroundOffset; // 0xCC0 - 0xCCC
   unsigned char pad_CCC[0x1C] // 0xCCC - 0xCE8
   bool m_bQueuingOrders; // 0xCE8 - 0xCE9
   unsigned char pad_CE9[0x3] // 0xCE9 - 0xCEC
   GameTime_t m_flLastOrdersChangeTimestamp; // 0xCEC - 0xCF0
   Vector m_vecLastKnownAcceleration; // 0xCF0 - 0xCFC
   Vector m_vecLastKnownVelocity; // 0xCFC - 0xD08
   RotationVector m_vecLastKnownAngImpulse; // 0xD08 - 0xD14
   float m_flLastKnownSpeed; // 0xD14 - 0xD18
   float m_flMaxSpeed; // 0xD18 - 0xD1C
   Vector m_vecCurrentDestination; // 0xD1C - 0xD28
   float m_flLastKnownDistanceToDestination; // 0xD28 - 0xD2C
   float m_flLastKnownWaypointAccuracy; // 0xD2C - 0xD30
   CUtlVector< Vector > m_vecWaypointQueue; // 0xD30 - 0xD48
   CUtlVector< Vector > m_vecSparsePositionHistory; // 0xD48 - 0xD60
   CUtlVector< Vector > m_vecPositionHistory; // 0xD60 - 0xD78
   CUtlVector< Vector > m_vecUnstuckQueue; // 0xD78 - 0xD90
   float m_flLastKnownGroundHeight; // 0xD90 - 0xD94
   unsigned char pad_D94[0x4] // 0xD94 - 0xD98
   CountdownTimer m_GroundCheckTimer; // 0xD98 - 0xDB0
   CountdownTimer m_ActInjuredTimer; // 0xDB0 - 0xDC8
   GameTime_t m_flPowerCutUntil; // 0xDC8 - 0xDCC
   unsigned char pad_DCC[0x4] // 0xDCC - 0xDD0
   CountdownTimer m_WanderTimer; // 0xDD0 - 0xDE8
   GameTime_t m_flLastTimeSawAttackTarget; // 0xDE8 - 0xDEC
   Vector m_vecLastKnownAttackTargetPosition; // 0xDEC - 0xDF8
   CHandle< CBaseEntity > m_hAttackTarget; // 0xDF8 - 0xDFC
   unsigned char pad_DFC[0x4] // 0xDFC - 0xE00
   CountdownTimer m_IntervalThinkTimer; // 0xE00 - 0xE18
   bool m_bDoIntervalThink; // 0xE18 - 0xE19
   unsigned char pad_E19[0x3] // 0xE19 - 0xE1C
   GameTime_t m_flLastDroppedGrenadeAt; // 0xE1C - 0xE20
   GameTime_t m_flSpawnTimeStamp; // 0xE20 - 0xE24
   bool m_bInPlayArea; // 0xE24 - 0xE25
   unsigned char pad_E25[0x3] // 0xE25 - 0xE28
   Vector m_vecSpawnPosition; // 0xE28 - 0xE34
   Vector m_vecLastKnownMoveToEntityPosition; // 0xE34 - 0xE40
   int32_t m_tCargoCollisionGroup; // 0xE40 - 0xE44
   GameTime_t m_flTimeArrivedAtMoveToEntity; // 0xE44 - 0xE48
   Vector m_vecAvoidanceDir; // 0xE48 - 0xE54
   GameTime_t m_flAvoidanceTime; // 0xE54 - 0xE58
   bool m_bUpgraded; // 0xE58 - 0xE59
   unsigned char pad_E59[0x3] // 0xE59 - 0xE5C
   CHandle< CBasePlayerPawn > m_hCargoOwner; // 0xE5C - 0xE60
   unsigned char pad_E60[0x8] // 0xE60 - 0xE68
   Vector m_vecPlayerControlThrust; // 0xE68 - 0xE74
   float m_flRopeLength; // 0xE74 - 0xE78
   bool m_bDidDropOnRoofWarning; // 0xE78 - 0xE79
   unsigned char pad_E79[0x3] // 0xE79 - 0xE7C
   GameTime_t m_flSelfDestructTime; // 0xE7C - 0xE80
   bool m_bSelfDestructFire; // 0xE80 - 0xE81
   bool m_bSelfDestructSpark; // 0xE81 - 0xE82
   unsigned char pad_E82[0x2] // 0xE82 - 0xE84
   CEntityHandle m_hLastKnownPilot; // 0xE84 - 0xE88
   bool m_bHasAlwaysBeenInZone; // 0xE88 - 0xE89
   unsigned char pad_E89[0x3] // 0xE89 - 0xE8C
   int32_t m_nJammedAmount; // 0xE8C - 0xE90
   CHandle< CBaseEntity > m_hPlayerThatOrderedMe; // 0xE90 - 0xE94

}; // size - 0xE98


class CDronegun : public CBaseAnimGraph
{
public:

   Vector m_vecAttentionTarget; // 0x830 - 0x83C
   Vector m_vecTargetOffset; // 0x83C - 0x848
   bool m_bHasTarget; // 0x848 - 0x849
   unsigned char pad_849[0x3] // 0x849 - 0x84C
   Vector m_vecAttentionCurrent; // 0x84C - 0x858
   int32_t m_nPoseParamPitch; // 0x858 - 0x85C
   int32_t m_nPoseParamYaw; // 0x85C - 0x860
   bool m_bVarInit; // 0x860 - 0x861
   unsigned char pad_861[0x3] // 0x861 - 0x864
   GameTime_t m_flDisorientEndTime; // 0x864 - 0x868
   unsigned char pad_868[0x18] // 0x868 - 0x880
   CHandle< CBaseEntity > m_hEnvGunfire; // 0x880 - 0x884
   GameTime_t m_flLastShootTime; // 0x884 - 0x888
   GameTime_t m_flLastSound1; // 0x888 - 0x88C
   GameTime_t m_flLastSound2; // 0x88C - 0x890
   GameTime_t m_flLastSound3; // 0x890 - 0x894
   AttachmentHandle_t m_nAttachMuzzle; // 0x894 - 0x895

}; // size - 0x898


class CDspPresetModifierList
{
public:

   CUtlString m_dspName; // 0x0 - 0x8
   CUtlVector< CDSPMixgroupModifier > m_modifiers; // 0x8 - 0x20

}; // size - 0x20


class CDynamicLight : public CBaseModelEntity
{
public:

   uint8_t m_ActualFlags; // 0x6F0 - 0x6F1
   uint8_t m_Flags; // 0x6F1 - 0x6F2
   uint8_t m_LightStyle; // 0x6F2 - 0x6F3
   bool m_On; // 0x6F3 - 0x6F4
   float m_Radius; // 0x6F4 - 0x6F8
   int32_t m_Exponent; // 0x6F8 - 0x6FC
   float m_InnerAngle; // 0x6FC - 0x700
   float m_OuterAngle; // 0x700 - 0x704
   float m_SpotRadius; // 0x704 - 0x708

}; // size - 0x708


class CDynamicPropAlias_cable_dynamic : public CDynamicProp
{
public:


}; // size - 0xA98


class CDynamicPropAlias_dynamic_prop : public CDynamicProp
{
public:


}; // size - 0xA98


class CDynamicPropAlias_prop_dynamic_override : public CDynamicProp
{
public:


}; // size - 0xA98


class CEconItemAttribute
{
public:

   uint16_t m_iAttributeDefinitionIndex; // 0x30 - 0x32
   unsigned char pad_32[0x2] // 0x32 - 0x34
   float m_flValue; // 0x34 - 0x38
   float m_flInitialValue; // 0x38 - 0x3C
   int32_t m_nRefundableCurrency; // 0x3C - 0x40
   bool m_bSetBonus; // 0x40 - 0x41

}; // size - 0x48


class CEconItemAttribute
{
public:

   uint16_t m_iAttributeDefinitionIndex; // 0x30 - 0x32
   unsigned char pad_32[0x2] // 0x32 - 0x34
   float m_flValue; // 0x34 - 0x38
   float m_flInitialValue; // 0x38 - 0x3C
   int32_t m_nRefundableCurrency; // 0x3C - 0x40
   bool m_bSetBonus; // 0x40 - 0x41

}; // size - 0x48


class CEconItemView : public IEconItemInterface
{
public:

   uint16_t m_iItemDefinitionIndex; // 0x38 - 0x3A
   unsigned char pad_3A[0x2] // 0x3A - 0x3C
   int32_t m_iEntityQuality; // 0x3C - 0x40
   uint32_t m_iEntityLevel; // 0x40 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   uint64_t m_iItemID; // 0x48 - 0x50
   uint32_t m_iItemIDHigh; // 0x50 - 0x54
   uint32_t m_iItemIDLow; // 0x54 - 0x58
   uint32_t m_iAccountID; // 0x58 - 0x5C
   uint32_t m_iInventoryPosition; // 0x5C - 0x60
   unsigned char pad_60[0x8] // 0x60 - 0x68
   bool m_bInitialized; // 0x68 - 0x69
   unsigned char pad_69[0x7] // 0x69 - 0x70
   CAttributeList m_AttributeList; // 0x70 - 0xD0
   CAttributeList m_NetworkedDynamicAttributes; // 0xD0 - 0x130
   char m_szCustomName[161]; // 0x130 - 0x1D1
   char m_szCustomNameOverride[161]; // 0x1D1 - 0x272

}; // size - 0x278


class CEconWearable : public CEconEntity
{
public:

   int32_t m_nForceSkin; // 0xBA8 - 0xBAC
   bool m_bAlwaysAllow; // 0xBAC - 0xBAD

}; // size - 0xBB0


class CEditableMotionGraph : public CMotionGraph
{
public:


}; // size - 0x58


class CEffectData
{
public:

   Vector m_vOrigin; // 0x8 - 0x14
   Vector m_vStart; // 0x14 - 0x20
   Vector m_vNormal; // 0x20 - 0x2C
   QAngle m_vAngles; // 0x2C - 0x38
   CEntityHandle m_hEntity; // 0x38 - 0x3C
   CEntityHandle m_hOtherEntity; // 0x3C - 0x40
   float m_flScale; // 0x40 - 0x44
   float m_flMagnitude; // 0x44 - 0x48
   float m_flRadius; // 0x48 - 0x4C
   CUtlStringToken m_nSurfaceProp; // 0x4C - 0x50
   CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // 0x50 - 0x58
   uint32_t m_nDamageType; // 0x58 - 0x5C
   uint8_t m_nPenetrate; // 0x5C - 0x5D
   unsigned char pad_5D[0x1] // 0x5D - 0x5E
   uint16_t m_nMaterial; // 0x5E - 0x60
   uint16_t m_nHitBox; // 0x60 - 0x62
   uint8_t m_nColor; // 0x62 - 0x63
   uint8_t m_fFlags; // 0x63 - 0x64
   AttachmentHandle_t m_nAttachmentIndex; // 0x64 - 0x65
   unsigned char pad_65[0x3] // 0x65 - 0x68
   CUtlStringToken m_nAttachmentName; // 0x68 - 0x6C
   uint16_t m_iEffectName; // 0x6C - 0x6E
   uint8_t m_nExplosionType; // 0x6E - 0x6F

}; // size - 0x70


class CEffectData
{
public:

   Vector m_vOrigin; // 0x8 - 0x14
   Vector m_vStart; // 0x14 - 0x20
   Vector m_vNormal; // 0x20 - 0x2C
   QAngle m_vAngles; // 0x2C - 0x38
   CEntityHandle m_hEntity; // 0x38 - 0x3C
   CEntityHandle m_hOtherEntity; // 0x3C - 0x40
   float m_flScale; // 0x40 - 0x44
   float m_flMagnitude; // 0x44 - 0x48
   float m_flRadius; // 0x48 - 0x4C
   CUtlStringToken m_nSurfaceProp; // 0x4C - 0x50
   CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // 0x50 - 0x58
   uint32_t m_nDamageType; // 0x58 - 0x5C
   uint8_t m_nPenetrate; // 0x5C - 0x5D
   unsigned char pad_5D[0x1] // 0x5D - 0x5E
   uint16_t m_nMaterial; // 0x5E - 0x60
   uint16_t m_nHitBox; // 0x60 - 0x62
   uint8_t m_nColor; // 0x62 - 0x63
   uint8_t m_fFlags; // 0x63 - 0x64
   AttachmentHandle_t m_nAttachmentIndex; // 0x64 - 0x65
   unsigned char pad_65[0x3] // 0x65 - 0x68
   CUtlStringToken m_nAttachmentName; // 0x68 - 0x6C
   uint16_t m_iEffectName; // 0x6C - 0x6E
   uint8_t m_nExplosionType; // 0x6E - 0x6F

}; // size - 0x70


class CEmitTagAction : public CAnimActionBase
{
public:

   AnimTagID m_tag; // 0x28 - 0x2C

}; // size - 0x30


class CEmitTagActionUpdater : public CAnimActionUpdater
{
public:

   int32_t m_nTagIndex; // 0x18 - 0x1C
   bool m_bIsZeroDuration; // 0x1C - 0x1D

}; // size - 0x20


class CEmptyEntityInstance
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class CEnableMotionFixup : public CBaseEntity
{
public:


}; // size - 0x4A0


class CEntityBlocker : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CEntityComponentHelper
{
public:

   uint32_t m_flags; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   EntComponentInfo_t* m_pInfo; // 0x10 - 0x18
   int32_t m_nPriority; // 0x18 - 0x1C
   unsigned char pad_1C[0x4] // 0x1C - 0x20
   CEntityComponentHelper* m_pNext; // 0x20 - 0x28

}; // size - 0x28


class CEntityDissolve : public CBaseModelEntity
{
public:

   float m_flFadeInStart; // 0x6F0 - 0x6F4
   float m_flFadeInLength; // 0x6F4 - 0x6F8
   float m_flFadeOutModelStart; // 0x6F8 - 0x6FC
   float m_flFadeOutModelLength; // 0x6FC - 0x700
   float m_flFadeOutStart; // 0x700 - 0x704
   float m_flFadeOutLength; // 0x704 - 0x708
   GameTime_t m_flStartTime; // 0x708 - 0x70C
   EntityDisolveType_t m_nDissolveType; // 0x70C - 0x710
   Vector m_vDissolverOrigin; // 0x710 - 0x71C
   uint32_t m_nMagnitude; // 0x71C - 0x720

}; // size - 0x720


class CEntityFlame : public CBaseEntity
{
public:

   CHandle< CBaseEntity > m_hEntAttached; // 0x4A0 - 0x4A4
   bool m_bCheapEffect; // 0x4A4 - 0x4A5
   unsigned char pad_4A5[0x3] // 0x4A5 - 0x4A8
   float m_flSize; // 0x4A8 - 0x4AC
   bool m_bUseHitboxes; // 0x4AC - 0x4AD
   unsigned char pad_4AD[0x3] // 0x4AD - 0x4B0
   int32_t m_iNumHitboxFires; // 0x4B0 - 0x4B4
   float m_flHitboxFireScale; // 0x4B4 - 0x4B8
   GameTime_t m_flLifetime; // 0x4B8 - 0x4BC
   CHandle< CBaseEntity > m_hAttacker; // 0x4BC - 0x4C0
   int32_t m_iDangerSound; // 0x4C0 - 0x4C4
   float m_flDirectDamagePerSecond; // 0x4C4 - 0x4C8
   int32_t m_iCustomDamageType; // 0x4C8 - 0x4CC

}; // size - 0x4D8


class CEntityIOOutput
{
public:

   CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18 - 0x28

}; // size - 0x28


class CEntityIdentity
{
public:

   int32_t m_nameStringableIndex; // 0x14 - 0x18
   CUtlSymbolLarge m_name; // 0x18 - 0x20
   CUtlSymbolLarge m_designerName; // 0x20 - 0x28
   unsigned char pad_28[0x8] // 0x28 - 0x30
   uint32_t m_flags; // 0x30 - 0x34
   unsigned char pad_34[0x4] // 0x34 - 0x38
   WorldGroupId_t m_worldGroupId; // 0x38 - 0x3C
   uint32_t m_fDataObjectTypes; // 0x3C - 0x40
   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40 - 0x42
   unsigned char pad_42[0x16] // 0x42 - 0x58
   CEntityIdentity* m_pPrev; // 0x58 - 0x60
   CEntityIdentity* m_pNext; // 0x60 - 0x68
   CEntityIdentity* m_pPrevByClass; // 0x68 - 0x70
   CEntityIdentity* m_pNextByClass; // 0x70 - 0x78

}; // size - 0x78


class CEntityIdentity
{
public:

   int32_t m_nameStringableIndex; // 0x14 - 0x18
   CUtlSymbolLarge m_name; // 0x18 - 0x20
   CUtlSymbolLarge m_designerName; // 0x20 - 0x28
   unsigned char pad_28[0x8] // 0x28 - 0x30
   uint32_t m_flags; // 0x30 - 0x34
   unsigned char pad_34[0x4] // 0x34 - 0x38
   WorldGroupId_t m_worldGroupId; // 0x38 - 0x3C
   uint32_t m_fDataObjectTypes; // 0x3C - 0x40
   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40 - 0x42
   unsigned char pad_42[0x16] // 0x42 - 0x58
   CEntityIdentity* m_pPrev; // 0x58 - 0x60
   CEntityIdentity* m_pNext; // 0x60 - 0x68
   CEntityIdentity* m_pPrevByClass; // 0x68 - 0x70
   CEntityIdentity* m_pNextByClass; // 0x70 - 0x78

}; // size - 0x78


class CEntityIdentity
{
public:

   int32_t m_nameStringableIndex; // 0x14 - 0x18
   CUtlSymbolLarge m_name; // 0x18 - 0x20
   CUtlSymbolLarge m_designerName; // 0x20 - 0x28
   unsigned char pad_28[0x8] // 0x28 - 0x30
   uint32_t m_flags; // 0x30 - 0x34
   unsigned char pad_34[0x4] // 0x34 - 0x38
   WorldGroupId_t m_worldGroupId; // 0x38 - 0x3C
   uint32_t m_fDataObjectTypes; // 0x3C - 0x40
   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40 - 0x42
   unsigned char pad_42[0x16] // 0x42 - 0x58
   CEntityIdentity* m_pPrev; // 0x58 - 0x60
   CEntityIdentity* m_pNext; // 0x60 - 0x68
   CEntityIdentity* m_pPrevByClass; // 0x68 - 0x70
   CEntityIdentity* m_pNextByClass; // 0x70 - 0x78

}; // size - 0x78


class CEntityIdentity
{
public:

   int32_t m_nameStringableIndex; // 0x14 - 0x18
   CUtlSymbolLarge m_name; // 0x18 - 0x20
   CUtlSymbolLarge m_designerName; // 0x20 - 0x28
   unsigned char pad_28[0x8] // 0x28 - 0x30
   uint32_t m_flags; // 0x30 - 0x34
   unsigned char pad_34[0x4] // 0x34 - 0x38
   WorldGroupId_t m_worldGroupId; // 0x38 - 0x3C
   uint32_t m_fDataObjectTypes; // 0x3C - 0x40
   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40 - 0x42
   unsigned char pad_42[0x16] // 0x42 - 0x58
   CEntityIdentity* m_pPrev; // 0x58 - 0x60
   CEntityIdentity* m_pNext; // 0x60 - 0x68
   CEntityIdentity* m_pPrevByClass; // 0x68 - 0x70
   CEntityIdentity* m_pNextByClass; // 0x70 - 0x78

}; // size - 0x78


class CEntityInstance : public IHandleEntity
{
public:

   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x10
   CEntityIdentity* m_pEntity; // 0x10 - 0x18
   unsigned char pad_18[0x10] // 0x18 - 0x28
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x30

}; // size - 0x30


class CEntityInstance : public IHandleEntity
{
public:

   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x10
   CEntityIdentity* m_pEntity; // 0x10 - 0x18
   unsigned char pad_18[0x10] // 0x18 - 0x28
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x30

}; // size - 0x30


class CEnumAnimParameter : public CAnimParameterBase
{
public:

   uint8_t m_defaultValue; // 0x80 - 0x81
   unsigned char pad_81[0x7] // 0x81 - 0x88
   CUtlVector< CUtlString > m_enumOptions; // 0x88 - 0xA0

}; // size - 0xD0


class CEnvBeam : public CBeam
{
public:

   int32_t m_active; // 0x790 - 0x794
   unsigned char pad_794[0x4] // 0x794 - 0x798
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x798 - 0x7A0
   CUtlSymbolLarge m_iszStartEntity; // 0x7A0 - 0x7A8
   CUtlSymbolLarge m_iszEndEntity; // 0x7A8 - 0x7B0
   float m_life; // 0x7B0 - 0x7B4
   float m_boltWidth; // 0x7B4 - 0x7B8
   float m_noiseAmplitude; // 0x7B8 - 0x7BC
   int32_t m_speed; // 0x7BC - 0x7C0
   float m_restrike; // 0x7C0 - 0x7C4
   unsigned char pad_7C4[0x4] // 0x7C4 - 0x7C8
   CUtlSymbolLarge m_iszSpriteName; // 0x7C8 - 0x7D0
   int32_t m_frameStart; // 0x7D0 - 0x7D4
   Vector m_vEndPointWorld; // 0x7D4 - 0x7E0
   Vector m_vEndPointRelative; // 0x7E0 - 0x7EC
   float m_radius; // 0x7EC - 0x7F0
   Touch_t m_TouchType; // 0x7F0 - 0x7F4
   unsigned char pad_7F4[0x4] // 0x7F4 - 0x7F8
   CUtlSymbolLarge m_iFilterName; // 0x7F8 - 0x800
   CHandle< CBaseEntity > m_hFilter; // 0x800 - 0x804
   unsigned char pad_804[0x4] // 0x804 - 0x808
   CUtlSymbolLarge m_iszDecal; // 0x808 - 0x810
   CEntityIOOutput m_OnTouchedByEntity; // 0x810 - 0x838

}; // size - 0x838


class CEnvBeverage : public CBaseEntity
{
public:

   bool m_CanInDispenser; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   int32_t m_nBeverageType; // 0x4A4 - 0x4A8

}; // size - 0x4A8


class CEnvCombinedLightProbeVolume : public CBaseEntity
{
public:

   Color m_Color; // 0x1570 - 0x1574
   float m_flBrightness; // 0x1574 - 0x1578
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1578 - 0x1580
   bool m_bCustomCubemapTexture; // 0x1580 - 0x1581
   unsigned char pad_1581[0x7] // 0x1581 - 0x1588
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1588 - 0x1590
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1590 - 0x1598
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1598 - 0x15A0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x15A0 - 0x15A8
   Vector m_vBoxMins; // 0x15A8 - 0x15B4
   Vector m_vBoxMaxs; // 0x15B4 - 0x15C0
   CUtlSymbolLarge m_LightGroups; // 0x15C0 - 0x15C8
   bool m_bMoveable; // 0x15C8 - 0x15C9
   unsigned char pad_15C9[0x3] // 0x15C9 - 0x15CC
   int32_t m_nHandshake; // 0x15CC - 0x15D0
   int32_t m_nEnvCubeMapArrayIndex; // 0x15D0 - 0x15D4
   int32_t m_nPriority; // 0x15D4 - 0x15D8
   bool m_bStartDisabled; // 0x15D8 - 0x15D9
   unsigned char pad_15D9[0x3] // 0x15D9 - 0x15DC
   float m_flEdgeFadeDist; // 0x15DC - 0x15E0
   Vector m_vEdgeFadeDists; // 0x15E0 - 0x15EC
   int32_t m_nLightProbeSizeX; // 0x15EC - 0x15F0
   int32_t m_nLightProbeSizeY; // 0x15F0 - 0x15F4
   int32_t m_nLightProbeSizeZ; // 0x15F4 - 0x15F8
   int32_t m_nLightProbeAtlasX; // 0x15F8 - 0x15FC
   int32_t m_nLightProbeAtlasY; // 0x15FC - 0x1600
   int32_t m_nLightProbeAtlasZ; // 0x1600 - 0x1604
   unsigned char pad_1604[0x15] // 0x1604 - 0x1619
   bool m_bEnabled; // 0x1619 - 0x161A

}; // size - 0x1620


class CEnvCubemapBox : public CEnvCubemap
{
public:


}; // size - 0x600


class CEnvCubemapFog : public CBaseEntity
{
public:

   float m_flEndDistance; // 0x4A0 - 0x4A4
   float m_flStartDistance; // 0x4A4 - 0x4A8
   float m_flFogFalloffExponent; // 0x4A8 - 0x4AC
   bool m_bHeightFogEnabled; // 0x4AC - 0x4AD
   unsigned char pad_4AD[0x3] // 0x4AD - 0x4B0
   float m_flFogHeightWidth; // 0x4B0 - 0x4B4
   float m_flFogHeightEnd; // 0x4B4 - 0x4B8
   float m_flFogHeightStart; // 0x4B8 - 0x4BC
   float m_flFogHeightExponent; // 0x4BC - 0x4C0
   float m_flLODBias; // 0x4C0 - 0x4C4
   bool m_bActive; // 0x4C4 - 0x4C5
   bool m_bStartDisabled; // 0x4C5 - 0x4C6
   unsigned char pad_4C6[0x2] // 0x4C6 - 0x4C8
   float m_flFogMaxOpacity; // 0x4C8 - 0x4CC
   int32_t m_nCubemapSourceType; // 0x4CC - 0x4D0
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_iszSkyEntity; // 0x4D8 - 0x4E0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x4E0 - 0x4E8
   bool m_bHasHeightFogEnd; // 0x4E8 - 0x4E9
   bool m_bFirstTime; // 0x4E9 - 0x4EA

}; // size - 0x4F0


class CEnvDecal : public CBaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x6F0 - 0x6F8
   float m_flWidth; // 0x6F8 - 0x6FC
   float m_flHeight; // 0x6FC - 0x700
   float m_flDepth; // 0x700 - 0x704
   uint32_t m_nRenderOrder; // 0x704 - 0x708
   bool m_bProjectOnWorld; // 0x708 - 0x709
   bool m_bProjectOnCharacters; // 0x709 - 0x70A
   bool m_bProjectOnWater; // 0x70A - 0x70B
   unsigned char pad_70B[0x1] // 0x70B - 0x70C
   float m_flDepthSortBias; // 0x70C - 0x710

}; // size - 0x710


class CEnvDetailController : public CBaseEntity
{
public:

   float m_flFadeStartDist; // 0x4A0 - 0x4A4
   float m_flFadeEndDist; // 0x4A4 - 0x4A8

}; // size - 0x4A8


class CEnvEntityIgniter : public CBaseEntity
{
public:

   float m_flLifetime; // 0x4A0 - 0x4A4

}; // size - 0x4A8


class CEnvEntityMaker : public CPointEntity
{
public:

   Vector m_vecEntityMins; // 0x4A0 - 0x4AC
   Vector m_vecEntityMaxs; // 0x4AC - 0x4B8
   CHandle< CBaseEntity > m_hCurrentInstance; // 0x4B8 - 0x4BC
   CHandle< CBaseEntity > m_hCurrentBlocker; // 0x4BC - 0x4C0
   Vector m_vecBlockerOrigin; // 0x4C0 - 0x4CC
   QAngle m_angPostSpawnDirection; // 0x4CC - 0x4D8
   float m_flPostSpawnDirectionVariance; // 0x4D8 - 0x4DC
   float m_flPostSpawnSpeed; // 0x4DC - 0x4E0
   bool m_bPostSpawnUseAngles; // 0x4E0 - 0x4E1
   unsigned char pad_4E1[0x7] // 0x4E1 - 0x4E8
   CUtlSymbolLarge m_iszTemplate; // 0x4E8 - 0x4F0
   CEntityIOOutput m_pOutputOnSpawned; // 0x4F0 - 0x518
   CEntityIOOutput m_pOutputOnFailedSpawn; // 0x518 - 0x540

}; // size - 0x540


class CEnvExplosion : public CModelPointEntity
{
public:

   int32_t m_iMagnitude; // 0x6F0 - 0x6F4
   float m_flPlayerDamage; // 0x6F4 - 0x6F8
   int32_t m_iRadiusOverride; // 0x6F8 - 0x6FC
   float m_flInnerRadius; // 0x6FC - 0x700
   int32_t m_spriteScale; // 0x700 - 0x704
   float m_flDamageForce; // 0x704 - 0x708
   CHandle< CBaseEntity > m_hInflictor; // 0x708 - 0x70C
   int32_t m_iCustomDamageType; // 0x70C - 0x710
   unsigned char pad_710[0x8] // 0x710 - 0x718
   CUtlSymbolLarge m_iszExplosionType; // 0x718 - 0x720
   CUtlSymbolLarge m_iszCustomEffectName; // 0x720 - 0x728
   CUtlSymbolLarge m_iszCustomSoundName; // 0x728 - 0x730
   Class_T m_iClassIgnore; // 0x730 - 0x734
   Class_T m_iClassIgnore2; // 0x734 - 0x738
   CUtlSymbolLarge m_iszEntityIgnoreName; // 0x738 - 0x740
   CHandle< CBaseEntity > m_hEntityIgnore; // 0x740 - 0x744

}; // size - 0x748


class CEnvFade : public CLogicalEntity
{
public:

   Color m_fadeColor; // 0x4A0 - 0x4A4
   float m_Duration; // 0x4A4 - 0x4A8
   float m_HoldDuration; // 0x4A8 - 0x4AC
   unsigned char pad_4AC[0x4] // 0x4AC - 0x4B0
   CEntityIOOutput m_OnBeginFade; // 0x4B0 - 0x4D8

}; // size - 0x4D8


class CEnvFireSensor : public CBaseEntity
{
public:

   bool m_bEnabled; // 0x4A0 - 0x4A1
   bool m_bHeatAtLevel; // 0x4A1 - 0x4A2
   unsigned char pad_4A2[0x2] // 0x4A2 - 0x4A4
   float m_radius; // 0x4A4 - 0x4A8
   float m_targetLevel; // 0x4A8 - 0x4AC
   float m_targetTime; // 0x4AC - 0x4B0
   float m_levelTime; // 0x4B0 - 0x4B4
   unsigned char pad_4B4[0x4] // 0x4B4 - 0x4B8
   CEntityIOOutput m_OnHeatLevelStart; // 0x4B8 - 0x4E0
   CEntityIOOutput m_OnHeatLevelEnd; // 0x4E0 - 0x508

}; // size - 0x508


class CEnvFireSource : public CBaseEntity
{
public:

   bool m_bEnabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   float m_radius; // 0x4A4 - 0x4A8
   float m_damage; // 0x4A8 - 0x4AC

}; // size - 0x4B0


class CEnvFunnel : public CBaseEntity
{
public:


}; // size - 0x4A0


class CEnvGasCanister : public CBaseAnimGraph
{
public:

   bool m_bLanded; // 0x820 - 0x821
   unsigned char pad_821[0x3] // 0x821 - 0x824
   float m_flDamageRadius; // 0x824 - 0x828
   float m_flDamage; // 0x828 - 0x82C
   bool m_bIncomingSoundStarted; // 0x82C - 0x82D
   bool m_bHasDetonated; // 0x82D - 0x82E
   bool m_bLaunched; // 0x82E - 0x82F
   unsigned char pad_82F[0x1] // 0x82F - 0x830
   CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnLaunched; // 0x830 - 0x858
   CEntityIOOutput m_OnImpacted; // 0x858 - 0x880
   CEntityIOOutput m_OnOpened; // 0x880 - 0x8A8
   Vector m_vecImpactPosition; // 0x8A8 - 0x8B4
   Vector m_vecStartPosition; // 0x8B4 - 0x8C0
   Vector m_vecEnterWorldPosition; // 0x8C0 - 0x8CC
   Vector m_vecDirection; // 0x8CC - 0x8D8
   QAngle m_vecStartAngles; // 0x8D8 - 0x8E4
   float m_flFlightTime; // 0x8E4 - 0x8E8
   float m_flFlightSpeed; // 0x8E8 - 0x8EC
   GameTime_t m_flLaunchTime; // 0x8EC - 0x8F0
   float m_flInitialZSpeed; // 0x8F0 - 0x8F4
   float m_flZAcceleration; // 0x8F4 - 0x8F8
   float m_flHorizSpeed; // 0x8F8 - 0x8FC
   bool m_bLaunchedFromWithinWorld; // 0x8FC - 0x8FD
   unsigned char pad_8FD[0x3] // 0x8FD - 0x900
   Vector m_vecParabolaDirection; // 0x900 - 0x90C
   float m_flWorldEnterTime; // 0x90C - 0x910
   Vector m_vecSkyboxOrigin; // 0x910 - 0x91C
   float m_flSkyboxScale; // 0x91C - 0x920
   bool m_bInSkybox; // 0x920 - 0x921
   bool m_bDoImpactEffects; // 0x921 - 0x922
   unsigned char pad_922[0x2] // 0x922 - 0x924
   int32_t m_nMyZoneIndex; // 0x924 - 0x928
   CHandle< CBaseEntity > m_hSkyboxCopy; // 0x928 - 0x92C
   float m_flLaunchHeight; // 0x92C - 0x930

}; // size - 0x948


class CEnvGlobal : public CLogicalEntity
{
public:

   CEntityOutputTemplate< int32 > m_outCounter; // 0x4A0 - 0x4C8
   CUtlSymbolLarge m_globalstate; // 0x4C8 - 0x4D0
   int32_t m_triggermode; // 0x4D0 - 0x4D4
   int32_t m_initialstate; // 0x4D4 - 0x4D8
   int32_t m_counter; // 0x4D8 - 0x4DC

}; // size - 0x4E0


class CEnvHudHint : public CPointEntity
{
public:

   CUtlSymbolLarge m_iszMessage; // 0x4A0 - 0x4A8

}; // size - 0x4A8


class CEnvInstructorHint : public CPointEntity
{
public:

   CUtlSymbolLarge m_iszName; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_iszReplace_Key; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_iszHintTargetEntity; // 0x4B0 - 0x4B8
   int32_t m_iTimeout; // 0x4B8 - 0x4BC
   int32_t m_iDisplayLimit; // 0x4BC - 0x4C0
   CUtlSymbolLarge m_iszIcon_Onscreen; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_iszIcon_Offscreen; // 0x4C8 - 0x4D0
   CUtlSymbolLarge m_iszCaption; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_iszActivatorCaption; // 0x4D8 - 0x4E0
   Color m_Color; // 0x4E0 - 0x4E4
   float m_fIconOffset; // 0x4E4 - 0x4E8
   float m_fRange; // 0x4E8 - 0x4EC
   uint8_t m_iPulseOption; // 0x4EC - 0x4ED
   uint8_t m_iAlphaOption; // 0x4ED - 0x4EE
   uint8_t m_iShakeOption; // 0x4EE - 0x4EF
   bool m_bStatic; // 0x4EF - 0x4F0
   bool m_bNoOffscreen; // 0x4F0 - 0x4F1
   bool m_bForceCaption; // 0x4F1 - 0x4F2
   unsigned char pad_4F2[0x2] // 0x4F2 - 0x4F4
   int32_t m_iInstanceType; // 0x4F4 - 0x4F8
   bool m_bSuppressRest; // 0x4F8 - 0x4F9
   unsigned char pad_4F9[0x7] // 0x4F9 - 0x500
   CUtlSymbolLarge m_iszBinding; // 0x500 - 0x508
   bool m_bAllowNoDrawTarget; // 0x508 - 0x509
   bool m_bAutoStart; // 0x509 - 0x50A
   bool m_bLocalPlayerOnly; // 0x50A - 0x50B

}; // size - 0x510


class CEnvInstructorVRHint : public CPointEntity
{
public:

   CUtlSymbolLarge m_iszName; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_iszHintTargetEntity; // 0x4A8 - 0x4B0
   int32_t m_iTimeout; // 0x4B0 - 0x4B4
   unsigned char pad_4B4[0x4] // 0x4B4 - 0x4B8
   CUtlSymbolLarge m_iszCaption; // 0x4B8 - 0x4C0
   CUtlSymbolLarge m_iszStartSound; // 0x4C0 - 0x4C8
   int32_t m_iLayoutFileType; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4] // 0x4CC - 0x4D0
   CUtlSymbolLarge m_iszCustomLayoutFile; // 0x4D0 - 0x4D8
   int32_t m_iAttachType; // 0x4D8 - 0x4DC
   float m_flHeightOffset; // 0x4DC - 0x4E0

}; // size - 0x4E0


class CEnvLaser : public CBeam
{
public:

   CUtlSymbolLarge m_iszLaserTarget; // 0x790 - 0x798
   CSprite* m_pSprite; // 0x798 - 0x7A0
   CUtlSymbolLarge m_iszSpriteName; // 0x7A0 - 0x7A8
   Vector m_firePosition; // 0x7A8 - 0x7B4
   float m_flStartFrame; // 0x7B4 - 0x7B8

}; // size - 0x7B8


class CEnvLightProbeVolume : public CBaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1480 - 0x1488
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1488 - 0x1490
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1490 - 0x1498
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1498 - 0x14A0
   Vector m_vBoxMins; // 0x14A0 - 0x14AC
   Vector m_vBoxMaxs; // 0x14AC - 0x14B8
   CUtlSymbolLarge m_LightGroups; // 0x14B8 - 0x14C0
   bool m_bMoveable; // 0x14C0 - 0x14C1
   unsigned char pad_14C1[0x3] // 0x14C1 - 0x14C4
   int32_t m_nHandshake; // 0x14C4 - 0x14C8
   int32_t m_nPriority; // 0x14C8 - 0x14CC
   bool m_bStartDisabled; // 0x14CC - 0x14CD
   unsigned char pad_14CD[0x3] // 0x14CD - 0x14D0
   int32_t m_nLightProbeSizeX; // 0x14D0 - 0x14D4
   int32_t m_nLightProbeSizeY; // 0x14D4 - 0x14D8
   int32_t m_nLightProbeSizeZ; // 0x14D8 - 0x14DC
   int32_t m_nLightProbeAtlasX; // 0x14DC - 0x14E0
   int32_t m_nLightProbeAtlasY; // 0x14E0 - 0x14E4
   int32_t m_nLightProbeAtlasZ; // 0x14E4 - 0x14E8
   unsigned char pad_14E8[0x9] // 0x14E8 - 0x14F1
   bool m_bEnabled; // 0x14F1 - 0x14F2

}; // size - 0x14F8


class CEnvMicrophone : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   CHandle< CBaseEntity > m_hMeasureTarget; // 0x4A4 - 0x4A8
   int32_t m_nSoundMask; // 0x4A8 - 0x4AC
   float m_flSensitivity; // 0x4AC - 0x4B0
   float m_flSmoothFactor; // 0x4B0 - 0x4B4
   float m_flMaxRange; // 0x4B4 - 0x4B8
   CUtlSymbolLarge m_iszSpeakerName; // 0x4B8 - 0x4C0
   CHandle< CBaseEntity > m_hSpeaker; // 0x4C0 - 0x4C4
   bool m_bAvoidFeedback; // 0x4C4 - 0x4C5
   unsigned char pad_4C5[0x3] // 0x4C5 - 0x4C8
   int32_t m_iSpeakerDSPPreset; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4] // 0x4CC - 0x4D0
   CUtlSymbolLarge m_iszListenFilter; // 0x4D0 - 0x4D8
   CHandle< CBaseFilter > m_hListenFilter; // 0x4D8 - 0x4DC
   unsigned char pad_4DC[0x4] // 0x4DC - 0x4E0
   CEntityOutputTemplate< float32 > m_SoundLevel; // 0x4E0 - 0x508
   CEntityIOOutput m_OnRoutedSound; // 0x508 - 0x530
   CEntityIOOutput m_OnHeardSound; // 0x530 - 0x558
   char m_szLastSound[256]; // 0x558 - 0x658
   int32_t m_iLastRoutedFrame; // 0x658 - 0x65C

}; // size - 0x660


class CEnvMuzzleFlash : public CPointEntity
{
public:

   float m_flScale; // 0x4A0 - 0x4A4
   unsigned char pad_4A4[0x4] // 0x4A4 - 0x4A8
   CUtlSymbolLarge m_iszParentAttachment; // 0x4A8 - 0x4B0

}; // size - 0x4B0


class CEnvParticleGlow : public CParticleSystem
{
public:

   float m_flAlphaScale; // 0xC68 - 0xC6C
   float m_flRadiusScale; // 0xC6C - 0xC70
   float m_flSelfIllumScale; // 0xC70 - 0xC74
   Color m_ColorTint; // 0xC74 - 0xC78
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xC78 - 0xC80

}; // size - 0xC80


class CEnvProjectedTexture : public CModelPointEntity
{
public:

   CHandle< CBaseEntity > m_hTargetEntity; // 0x6F0 - 0x6F4
   bool m_bState; // 0x6F4 - 0x6F5
   bool m_bAlwaysUpdate; // 0x6F5 - 0x6F6
   unsigned char pad_6F6[0x2] // 0x6F6 - 0x6F8
   float m_flLightFOV; // 0x6F8 - 0x6FC
   bool m_bEnableShadows; // 0x6FC - 0x6FD
   bool m_bSimpleProjection; // 0x6FD - 0x6FE
   bool m_bLightOnlyTarget; // 0x6FE - 0x6FF
   bool m_bLightWorld; // 0x6FF - 0x700
   bool m_bCameraSpace; // 0x700 - 0x701
   unsigned char pad_701[0x3] // 0x701 - 0x704
   float m_flBrightnessScale; // 0x704 - 0x708
   Color m_LightColor; // 0x708 - 0x70C
   float m_flIntensity; // 0x70C - 0x710
   float m_flLinearAttenuation; // 0x710 - 0x714
   float m_flQuadraticAttenuation; // 0x714 - 0x718
   bool m_bVolumetric; // 0x718 - 0x719
   unsigned char pad_719[0x3] // 0x719 - 0x71C
   float m_flNoiseStrength; // 0x71C - 0x720
   float m_flFlashlightTime; // 0x720 - 0x724
   uint32_t m_nNumPlanes; // 0x724 - 0x728
   float m_flPlaneOffset; // 0x728 - 0x72C
   float m_flVolumetricIntensity; // 0x72C - 0x730
   float m_flColorTransitionTime; // 0x730 - 0x734
   float m_flAmbient; // 0x734 - 0x738
   char m_SpotlightTextureName[512]; // 0x738 - 0x938
   int32_t m_nSpotlightTextureFrame; // 0x938 - 0x93C
   uint32_t m_nShadowQuality; // 0x93C - 0x940
   float m_flNearZ; // 0x940 - 0x944
   float m_flFarZ; // 0x944 - 0x948
   float m_flProjectionSize; // 0x948 - 0x94C
   float m_flRotation; // 0x94C - 0x950
   bool m_bFlipHorizontal; // 0x950 - 0x951

}; // size - 0x958


class CEnvScreenOverlay : public CPointEntity
{
public:

   CUtlSymbolLarge m_iszOverlayNames[10]; // 0x4A0 - 0x4F0
   float32 m_flOverlayTimes[10]; // 0x4F0 - 0x518
   GameTime_t m_flStartTime; // 0x518 - 0x51C
   int32_t m_iDesiredOverlay; // 0x51C - 0x520
   bool m_bIsActive; // 0x520 - 0x521

}; // size - 0x528


class CEnvShake : public CPointEntity
{
public:

   CUtlSymbolLarge m_limitToEntity; // 0x4A0 - 0x4A8
   float m_Amplitude; // 0x4A8 - 0x4AC
   float m_Frequency; // 0x4AC - 0x4B0
   float m_Duration; // 0x4B0 - 0x4B4
   float m_Radius; // 0x4B4 - 0x4B8
   GameTime_t m_stopTime; // 0x4B8 - 0x4BC
   GameTime_t m_nextShake; // 0x4BC - 0x4C0
   float m_currentAmp; // 0x4C0 - 0x4C4
   Vector m_maxForce; // 0x4C4 - 0x4D0
   unsigned char pad_4D0[0x8] // 0x4D0 - 0x4D8
   CPhysicsShake m_shakeCallback; // 0x4D8 - 0x4F0

}; // size - 0x4F0


class CEnvSky : public CBaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x6F0 - 0x6F8
   bool m_bStartDisabled; // 0x6F8 - 0x6F9
   Color m_vTintColor; // 0x6F9 - 0x6FD
   unsigned char pad_6FD[0x3] // 0x6FD - 0x700
   float m_flBrightnessScale; // 0x700 - 0x704
   int32_t m_nFogType; // 0x704 - 0x708
   float m_flFogMinStart; // 0x708 - 0x70C
   float m_flFogMinEnd; // 0x70C - 0x710
   float m_flFogMaxStart; // 0x710 - 0x714
   float m_flFogMaxEnd; // 0x714 - 0x718
   bool m_bEnabled; // 0x718 - 0x719

}; // size - 0x738


class CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape
{
public:


}; // size - 0x538


class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy
{
public:


}; // size - 0x540


class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable
{
public:


}; // size - 0x538


class CEnvSpark : public CPointEntity
{
public:

   float m_flDelay; // 0x4A0 - 0x4A4
   int32_t m_nMagnitude; // 0x4A4 - 0x4A8
   int32_t m_nTrailLength; // 0x4A8 - 0x4AC
   int32_t m_nType; // 0x4AC - 0x4B0
   CEntityIOOutput m_OnSpark; // 0x4B0 - 0x4D8

}; // size - 0x4D8


class CEnvSplash : public CPointEntity
{
public:

   float m_flScale; // 0x4A0 - 0x4A4

}; // size - 0x4A8


class CEnvTilt : public CPointEntity
{
public:

   float m_Duration; // 0x4A0 - 0x4A4
   float m_Radius; // 0x4A4 - 0x4A8
   float m_TiltTime; // 0x4A8 - 0x4AC
   GameTime_t m_stopTime; // 0x4AC - 0x4B0

}; // size - 0x4B0


class CEnvTracer : public CPointEntity
{
public:

   Vector m_vecEnd; // 0x4A0 - 0x4AC
   float m_flDelay; // 0x4AC - 0x4B0

}; // size - 0x4B0


class CEnvViewPunch : public CPointEntity
{
public:

   float m_flRadius; // 0x4A0 - 0x4A4
   QAngle m_angViewPunch; // 0x4A4 - 0x4B0

}; // size - 0x4B0


class CEnvVolumetricFogController : public CBaseEntity
{
public:

   float m_flScattering; // 0x4A0 - 0x4A4
   float m_flAnisotropy; // 0x4A4 - 0x4A8
   float m_flFadeSpeed; // 0x4A8 - 0x4AC
   float m_flDrawDistance; // 0x4AC - 0x4B0
   float m_flFadeInStart; // 0x4B0 - 0x4B4
   float m_flFadeInEnd; // 0x4B4 - 0x4B8
   float m_flIndirectStrength; // 0x4B8 - 0x4BC
   int32_t m_nIndirectTextureDimX; // 0x4BC - 0x4C0
   int32_t m_nIndirectTextureDimY; // 0x4C0 - 0x4C4
   int32_t m_nIndirectTextureDimZ; // 0x4C4 - 0x4C8
   Vector m_vBoxMins; // 0x4C8 - 0x4D4
   Vector m_vBoxMaxs; // 0x4D4 - 0x4E0
   bool m_bActive; // 0x4E0 - 0x4E1
   unsigned char pad_4E1[0x3] // 0x4E1 - 0x4E4
   GameTime_t m_flStartAnisoTime; // 0x4E4 - 0x4E8
   GameTime_t m_flStartScatterTime; // 0x4E8 - 0x4EC
   GameTime_t m_flStartDrawDistanceTime; // 0x4EC - 0x4F0
   float m_flStartAnisotropy; // 0x4F0 - 0x4F4
   float m_flStartScattering; // 0x4F4 - 0x4F8
   float m_flStartDrawDistance; // 0x4F8 - 0x4FC
   float m_flDefaultAnisotropy; // 0x4FC - 0x500
   float m_flDefaultScattering; // 0x500 - 0x504
   float m_flDefaultDrawDistance; // 0x504 - 0x508
   bool m_bStartDisabled; // 0x508 - 0x509
   bool m_bEnableIndirect; // 0x509 - 0x50A
   bool m_bIsMaster; // 0x50A - 0x50B
   unsigned char pad_50B[0x5] // 0x50B - 0x510
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x510 - 0x518
   int32_t m_nForceRefreshCount; // 0x518 - 0x51C
   bool m_bFirstTime; // 0x51C - 0x51D

}; // size - 0x520


class CEnvVolumetricFogVolume : public CBaseEntity
{
public:

   bool m_bActive; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   Vector m_vBoxMins; // 0x4A4 - 0x4B0
   Vector m_vBoxMaxs; // 0x4B0 - 0x4BC
   bool m_bStartDisabled; // 0x4BC - 0x4BD
   unsigned char pad_4BD[0x3] // 0x4BD - 0x4C0
   float m_flStrength; // 0x4C0 - 0x4C4
   int32_t m_nFalloffShape; // 0x4C4 - 0x4C8
   float m_flFalloffExponent; // 0x4C8 - 0x4CC

}; // size - 0x4D0


class CEnvWind : public CBaseEntity
{
public:

   CEnvWindShared m_EnvWindShared; // 0x4A0 - 0x6F8

}; // size - 0x6F8


class CEnvWindShared
{
public:

   class WindAveEvent_t
   {
   public:

      float m_flStartWindSpeed; // 0x0 - 0x4
      float m_flAveWindSpeed; // 0x4 - 0x8

   }; // size - 0x8

   class WindVariationEvent_t
   {
   public:

      float m_flWindAngleVariation; // 0x0 - 0x4
      float m_flWindSpeedVariation; // 0x4 - 0x8

   }; // size - 0x8

   GameTime_t m_flStartTime; // 0x8 - 0xC
   uint32_t m_iWindSeed; // 0xC - 0x10
   uint16_t m_iMinWind; // 0x10 - 0x12
   uint16_t m_iMaxWind; // 0x12 - 0x14
   int32_t m_windRadius; // 0x14 - 0x18
   uint16_t m_iMinGust; // 0x18 - 0x1A
   uint16_t m_iMaxGust; // 0x1A - 0x1C
   float m_flMinGustDelay; // 0x1C - 0x20
   float m_flMaxGustDelay; // 0x20 - 0x24
   float m_flGustDuration; // 0x24 - 0x28
   uint16_t m_iGustDirChange; // 0x28 - 0x2A
   unsigned char pad_2A[0x2] // 0x2A - 0x2C
   Vector m_location; // 0x2C - 0x38
   int32_t m_iszGustSound; // 0x38 - 0x3C
   int32_t m_iWindDir; // 0x3C - 0x40
   float m_flWindSpeed; // 0x40 - 0x44
   Vector m_currentWindVector; // 0x44 - 0x50
   Vector m_CurrentSwayVector; // 0x50 - 0x5C
   Vector m_PrevSwayVector; // 0x5C - 0x68
   uint16_t m_iInitialWindDir; // 0x68 - 0x6A
   unsigned char pad_6A[0x2] // 0x6A - 0x6C
   float m_flInitialWindSpeed; // 0x6C - 0x70
   CEntityIOOutput m_OnGustStart; // 0x70 - 0x98
   CEntityIOOutput m_OnGustEnd; // 0x98 - 0xC0
   GameTime_t m_flVariationTime; // 0xC0 - 0xC4
   GameTime_t m_flSwayTime; // 0xC4 - 0xC8
   GameTime_t m_flSimTime; // 0xC8 - 0xCC
   GameTime_t m_flSwitchTime; // 0xCC - 0xD0
   float m_flAveWindSpeed; // 0xD0 - 0xD4
   bool m_bGusting; // 0xD4 - 0xD5
   unsigned char pad_D5[0x3] // 0xD5 - 0xD8
   float m_flWindAngleVariation; // 0xD8 - 0xDC
   float m_flWindSpeedVariation; // 0xDC - 0xE0
   CEntityIndex m_iEntIndex; // 0xE0 - 0xE4

}; // size - 0x258




class CEnvZoom : public CPointEntity
{
public:

   float m_flSpeed; // 0x4A0 - 0x4A4
   int32_t m_nFOV; // 0x4A4 - 0x4A8

}; // size - 0x4A8


class CExampleSchemaVData_Monomorphic
{
public:

   int32_t m_nExample1; // 0x0 - 0x4
   int32_t m_nExample2; // 0x4 - 0x8

}; // size - 0x8


class CExampleSchemaVData_PolymorphicDerivedA : public CExampleSchemaVData_PolymorphicBase
{
public:

   int32_t m_nDerivedA; // 0x10 - 0x14

}; // size - 0x18


class CExampleSchemaVData_PolymorphicDerivedB : public CExampleSchemaVData_PolymorphicBase
{
public:

   int32_t m_nDerivedB; // 0x10 - 0x14

}; // size - 0x18


class CExpressionAction : public CAnimActionBase
{
public:

   AnimParamID m_param; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   CUtlString m_expression; // 0x30 - 0x38

}; // size - 0x38


class CExpressionActionUpdater : public CAnimActionUpdater
{
public:

   CAnimParamHandle m_hParam; // 0x18 - 0x1A
   AnimParamType_t m_eParamType; // 0x1A - 0x1B
   unsigned char pad_1B[0x1] // 0x1B - 0x1C
   AnimScriptHandle m_hScript; // 0x1C - 0x20

}; // size - 0x20


class CFeIndexedJiggleBone
{
public:

   uint32_t m_nNode; // 0x0 - 0x4
   uint32_t m_nJiggleParent; // 0x4 - 0x8
   CFeJiggleBone m_jiggleBone; // 0x8 - 0xA4

}; // size - 0xA4


class CFeJiggleBone
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

}; // size - 0x9C


class CFeMorphLayer
{
public:

   CUtlString m_Name; // 0x0 - 0x8
   uint32_t m_nNameHash; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< uint16 > m_Nodes; // 0x10 - 0x28
   CUtlVector< Vector > m_InitPos; // 0x28 - 0x40
   CUtlVector< float32 > m_Gravity; // 0x40 - 0x58
   CUtlVector< float32 > m_GoalStrength; // 0x58 - 0x70
   CUtlVector< float32 > m_GoalDamping; // 0x70 - 0x88

}; // size - 0x88


class CFeNamedJiggleBone
{
public:

   CUtlString m_strParentBone; // 0x0 - 0x8
   unsigned char pad_8[0x8] // 0x8 - 0x10
   CTransform m_transform; // 0x10 - 0x30
   uint32_t m_nJiggleParent; // 0x30 - 0x34
   CFeJiggleBone m_jiggleBone; // 0x34 - 0xD0

}; // size - 0xD0


class CFeVertexMapBuildArray
{
public:

   CUtlVector< FeVertexMapBuild_t* > m_Array; // 0x0 - 0x18

}; // size - 0x18


class CFilterAttributeInt : public CBaseFilter
{
public:

   CUtlStringToken m_sAttributeName; // 0x4F8 - 0x4FC

}; // size - 0x500


class CFilterClass : public CBaseFilter
{
public:

   CUtlSymbolLarge m_iFilterClass; // 0x4F8 - 0x500

}; // size - 0x500


class CFilterContext : public CBaseFilter
{
public:

   CUtlSymbolLarge m_iFilterContext; // 0x4F8 - 0x500

}; // size - 0x500


class CFilterEnemy : public CBaseFilter
{
public:

   CUtlSymbolLarge m_iszEnemyName; // 0x4F8 - 0x500
   float m_flRadius; // 0x500 - 0x504
   float m_flOuterRadius; // 0x504 - 0x508
   int32_t m_nMaxSquadmatesPerEnemy; // 0x508 - 0x50C
   unsigned char pad_50C[0x4] // 0x50C - 0x510
   CUtlSymbolLarge m_iszPlayerName; // 0x510 - 0x518

}; // size - 0x518


class CFilterLOS : public CBaseFilter
{
public:


}; // size - 0x4F8


class CFilterMassGreater : public CBaseFilter
{
public:

   float m_fFilterMass; // 0x4F8 - 0x4FC

}; // size - 0x500


class CFilterModel : public CBaseFilter
{
public:

   CUtlSymbolLarge m_iFilterModel; // 0x4F8 - 0x500

}; // size - 0x500


class CFilterMultiple : public CBaseFilter
{
public:

   filter_t m_nFilterType; // 0x4F8 - 0x4FC
   unsigned char pad_4FC[0x4] // 0x4FC - 0x500
   CUtlSymbolLarge m_iFilterName[10]; // 0x500 - 0x550
   CHandle< CBaseEntity > m_hFilter[10]; // 0x550 - 0x578
   int32_t m_nFilterCount; // 0x578 - 0x57C

}; // size - 0x580


class CFilterName : public CBaseFilter
{
public:

   CUtlSymbolLarge m_iFilterName; // 0x4F8 - 0x500

}; // size - 0x500


class CFilterProximity : public CBaseFilter
{
public:

   float m_flRadius; // 0x4F8 - 0x4FC

}; // size - 0x500


class CFingerBone
{
public:

   CUtlString m_boneName; // 0x0 - 0x8
   Vector m_hingeAxis; // 0x8 - 0x14
   Vector m_vCapsulePos1; // 0x14 - 0x20
   Vector m_vCapsulePos2; // 0x20 - 0x2C
   float m_flMinAngle; // 0x2C - 0x30
   float m_flMaxAngle; // 0x30 - 0x34
   float m_flRadius; // 0x34 - 0x38

}; // size - 0x38


class CFingerChain
{
public:

   CUtlVector< CFingerSource > m_targets; // 0x0 - 0x18
   CUtlVector< CFingerBone > m_bones; // 0x18 - 0x30
   CUtlString m_name; // 0x30 - 0x38
   CUtlString m_tipParentBoneName; // 0x38 - 0x40
   Vector m_vTipOffset; // 0x40 - 0x4C
   unsigned char pad_4C[0x4] // 0x4C - 0x50
   CUtlString m_metacarpalBoneName; // 0x50 - 0x58
   Vector m_vSplayHingeAxis; // 0x58 - 0x64
   float m_flSplayMinAngle; // 0x64 - 0x68
   float m_flSplayMaxAngle; // 0x68 - 0x6C
   float m_flFingerScaleRatio; // 0x6C - 0x70

}; // size - 0x70


class CFingerSource
{
public:

   AnimVRFinger_t m_nFingerIndex; // 0x0 - 0x4
   float m_flFingerWeight; // 0x4 - 0x8

}; // size - 0x8


class CFinishedCondition : public CConditionBase
{
public:

   FinishedConditionOption m_option; // 0x28 - 0x2C
   bool m_bIsFinished; // 0x2C - 0x2D

}; // size - 0x30


class CFire : public CBaseModelEntity
{
public:

   CHandle< CBaseFire > m_hEffect; // 0x6F0 - 0x6F4
   CHandle< CBaseEntity > m_hOwner; // 0x6F4 - 0x6F8
   int32_t m_nFireType; // 0x6F8 - 0x6FC
   float m_flFuel; // 0x6FC - 0x700
   GameTime_t m_flDamageTime; // 0x700 - 0x704
   GameTime_t m_lastDamage; // 0x704 - 0x708
   float m_flFireSize; // 0x708 - 0x70C
   GameTime_t m_flLastNavUpdateTime; // 0x70C - 0x710
   float m_flHeatLevel; // 0x710 - 0x714
   float m_flHeatAbsorb; // 0x714 - 0x718
   float m_flDamageScale; // 0x718 - 0x71C
   float m_flMaxHeat; // 0x71C - 0x720
   float m_flLastHeatLevel; // 0x720 - 0x724
   float m_flAttackTime; // 0x724 - 0x728
   bool m_bEnabled; // 0x728 - 0x729
   bool m_bStartDisabled; // 0x729 - 0x72A
   bool m_bDidActivate; // 0x72A - 0x72B
   unsigned char pad_72B[0x5] // 0x72B - 0x730
   CEntityIOOutput m_OnIgnited; // 0x730 - 0x758
   CEntityIOOutput m_OnExtinguished; // 0x758 - 0x780

}; // size - 0x780


class CFireCrackerBlast : public CInferno
{
public:


}; // size - 0x1378


class CFireOverlay : public CGlowOverlay
{
public:

   C_FireSmoke* m_pOwner; // 0xD0 - 0xD8
   Vector m_vBaseColors[4]; // 0xD8 - 0x108
   float m_flScale; // 0x108 - 0x10C
   int32_t m_nGUID; // 0x10C - 0x110

}; // size - 0x110


class CFireSmoke : public CBaseFire
{
public:

   int32_t m_nFlameModelIndex; // 0x4B0 - 0x4B4
   int32_t m_nFlameFromAboveModelIndex; // 0x4B4 - 0x4B8

}; // size - 0x4B8


class CFiringModeFloat
{
public:

   float32 m_flValues[2]; // 0x0 - 0x8

}; // size - 0x8


class CFiringModeInt
{
public:

   int32 m_nValues[2]; // 0x0 - 0x8

}; // size - 0x8


class CFish : public CBaseAnimGraph
{
public:

   CHandle< CFishPool > m_pool; // 0x820 - 0x824
   uint32_t m_id; // 0x824 - 0x828
   float m_x; // 0x828 - 0x82C
   float m_y; // 0x82C - 0x830
   float m_z; // 0x830 - 0x834
   float m_angle; // 0x834 - 0x838
   float m_angleChange; // 0x838 - 0x83C
   Vector m_forward; // 0x83C - 0x848
   Vector m_perp; // 0x848 - 0x854
   Vector m_poolOrigin; // 0x854 - 0x860
   float m_waterLevel; // 0x860 - 0x864
   float m_speed; // 0x864 - 0x868
   float m_desiredSpeed; // 0x868 - 0x86C
   float m_calmSpeed; // 0x86C - 0x870
   float m_panicSpeed; // 0x870 - 0x874
   float m_avoidRange; // 0x874 - 0x878
   CountdownTimer m_turnTimer; // 0x878 - 0x890
   bool m_turnClockwise; // 0x890 - 0x891
   unsigned char pad_891[0x7] // 0x891 - 0x898
   CountdownTimer m_goTimer; // 0x898 - 0x8B0
   CountdownTimer m_moveTimer; // 0x8B0 - 0x8C8
   CountdownTimer m_panicTimer; // 0x8C8 - 0x8E0
   CountdownTimer m_disperseTimer; // 0x8E0 - 0x8F8
   CountdownTimer m_proximityTimer; // 0x8F8 - 0x910
   CUtlVector< CFish* > m_visible; // 0x910 - 0x928

}; // size - 0x928


class CFishPool : public CBaseEntity
{
public:

   int32_t m_fishCount; // 0x4B0 - 0x4B4
   float m_maxRange; // 0x4B4 - 0x4B8
   float m_swimDepth; // 0x4B8 - 0x4BC
   float m_waterLevel; // 0x4BC - 0x4C0
   bool m_isDormant; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x7] // 0x4C1 - 0x4C8
   CUtlVector< CHandle< CFish > > m_fishes; // 0x4C8 - 0x4E0
   CountdownTimer m_visTimer; // 0x4E0 - 0x4F8

}; // size - 0x4F8


class CFists : public CWeaponCSBase
{
public:

   bool m_bPlayingUninterruptableAct; // 0xD50 - 0xD51
   unsigned char pad_D51[0x3] // 0xD51 - 0xD54
   PlayerAnimEvent_t m_nUninterruptableActivity; // 0xD54 - 0xD58
   bool m_bRestorePrevWep; // 0xD58 - 0xD59
   unsigned char pad_D59[0x3] // 0xD59 - 0xD5C
   CHandle< CBasePlayerWeapon > m_hWeaponBeforePrevious; // 0xD5C - 0xD60
   CHandle< CBasePlayerWeapon > m_hWeaponPrevious; // 0xD60 - 0xD64
   bool m_bDelayedHardPunchIncoming; // 0xD64 - 0xD65
   bool m_bDestroyAfterTaunt; // 0xD65 - 0xD66

}; // size - 0xD68


class CFlashbang : public CBaseCSGrenade
{
public:


}; // size - 0xD90


class CFlashbangProjectile : public CBaseCSGrenadeProjectile
{
public:

   float m_flTimeToDetonate; // 0x9A0 - 0x9A4
   uint8_t m_numOpponentsHit; // 0x9A4 - 0x9A5
   uint8_t m_numTeammatesHit; // 0x9A5 - 0x9A6

}; // size - 0x9A8


class CFlashlightEffect
{
public:

   bool m_bIsOn; // 0x10 - 0x11
   unsigned char pad_11[0xF] // 0x11 - 0x20
   bool m_bMuzzleFlashEnabled; // 0x20 - 0x21
   unsigned char pad_21[0x3] // 0x21 - 0x24
   float m_flMuzzleFlashBrightness; // 0x24 - 0x28
   unsigned char pad_28[0x8] // 0x28 - 0x30
   Quaternion m_quatMuzzleFlashOrientation; // 0x30 - 0x40
   Vector m_vecMuzzleFlashOrigin; // 0x40 - 0x4C
   float m_flFov; // 0x4C - 0x50
   float m_flFarZ; // 0x50 - 0x54
   float m_flLinearAtten; // 0x54 - 0x58
   bool m_bCastsShadows; // 0x58 - 0x59
   unsigned char pad_59[0x3] // 0x59 - 0x5C
   float m_flCurrentPullBackDist; // 0x5C - 0x60
   CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x60 - 0x68
   CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x68 - 0x70
   char m_textureName[64]; // 0x70 - 0xB0

}; // size - 0x2E0


class CFlexController
{
public:

   CUtlString m_szName; // 0x0 - 0x8
   CUtlString m_szType; // 0x8 - 0x10
   float min; // 0x10 - 0x14
   float max; // 0x14 - 0x18

}; // size - 0x18


class CFlexDesc
{
public:

   CUtlString m_szFacs; // 0x0 - 0x8

}; // size - 0x8


class CFlexOp
{
public:

   FlexOpCode_t m_OpCode; // 0x0 - 0x4
   int32_t m_Data; // 0x4 - 0x8

}; // size - 0x8


class CFlexRule
{
public:

   int32_t m_nFlex; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CUtlVector< CFlexOp > m_FlexOps; // 0x8 - 0x20

}; // size - 0x20


class CFloatAnimParameter : public CAnimParameterBase
{
public:

   float m_fDefaultValue; // 0x78 - 0x7C
   float m_fMinValue; // 0x7C - 0x80
   float m_fMaxValue; // 0x80 - 0x84
   bool m_bInterpolate; // 0x84 - 0x85

}; // size - 0x88


class CFloatAnimValue
{
public:

   float m_flConstValue; // 0x8 - 0xC
   AnimParamID m_paramID; // 0xC - 0x10
   EAnimValueSource m_eSource; // 0x10 - 0x14

}; // size - 0x18


class CFogController : public CBaseEntity
{
public:

   fogparams_t m_fog; // 0x4A0 - 0x508
   bool m_bUseAngles; // 0x508 - 0x509
   unsigned char pad_509[0x3] // 0x509 - 0x50C
   int32_t m_iChangedVariables; // 0x50C - 0x510

}; // size - 0x510


class CFogTrigger : public CBaseTrigger
{
public:

   fogparams_t m_fog; // 0x898 - 0x900

}; // size - 0x900


class CFogVolume : public CServerOnlyModelEntity
{
public:

   CUtlSymbolLarge m_fogName; // 0x6F0 - 0x6F8
   CUtlSymbolLarge m_postProcessName; // 0x6F8 - 0x700
   CUtlSymbolLarge m_colorCorrectionName; // 0x700 - 0x708
   unsigned char pad_708[0x8] // 0x708 - 0x710
   bool m_bDisabled; // 0x710 - 0x711
   bool m_bInFogVolumesList; // 0x711 - 0x712

}; // size - 0x718


class CFollowAttachmentAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   CUtlString m_boneName; // 0x40 - 0x48
   CUtlString m_attachmentName; // 0x48 - 0x50
   bool m_bMatchTranslation; // 0x50 - 0x51
   bool m_bMatchRotation; // 0x51 - 0x52

}; // size - 0x58


class CFollowAttachmentUpdateNode : public CUnaryUpdateNode
{
public:

   FollowAttachmentSettings_t m_opFixedData; // 0x70 - 0x100

}; // size - 0x110


class CFollowPathAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   float m_flBlendOutTime; // 0x40 - 0x44
   bool m_bBlockNonPathMovement; // 0x44 - 0x45
   bool m_bStopFeetAtGoal; // 0x45 - 0x46
   bool m_bScaleSpeed; // 0x46 - 0x47
   unsigned char pad_47[0x1] // 0x47 - 0x48
   float m_flScale; // 0x48 - 0x4C
   float m_flMinAngle; // 0x4C - 0x50
   float m_flMaxAngle; // 0x50 - 0x54
   float m_flSpeedScaleBlending; // 0x54 - 0x58
   bool m_bTurnToFace; // 0x58 - 0x59
   unsigned char pad_59[0x3] // 0x59 - 0x5C
   AnimValueSource m_facingTarget; // 0x5C - 0x60
   AnimParamID m_param; // 0x60 - 0x64
   float m_flTurnToFaceOffset; // 0x64 - 0x68
   CAnimInputDamping m_damping; // 0x68 - 0x78

}; // size - 0x78


class CFollowPathUpdateNode : public CUnaryUpdateNode
{
public:

   float m_flBlendOutTime; // 0x6C - 0x70
   bool m_bBlockNonPathMovement; // 0x70 - 0x71
   bool m_bStopFeetAtGoal; // 0x71 - 0x72
   bool m_bScaleSpeed; // 0x72 - 0x73
   unsigned char pad_73[0x1] // 0x73 - 0x74
   float m_flScale; // 0x74 - 0x78
   float m_flMinAngle; // 0x78 - 0x7C
   float m_flMaxAngle; // 0x7C - 0x80
   float m_flSpeedScaleBlending; // 0x80 - 0x84
   unsigned char pad_84[0x4] // 0x84 - 0x88
   CAnimInputDamping m_turnDamping; // 0x88 - 0x98
   AnimValueSource m_facingTarget; // 0x98 - 0x9C
   CAnimParamHandle m_hParam; // 0x9C - 0x9E
   unsigned char pad_9E[0x2] // 0x9E - 0xA0
   float m_flTurnToFaceOffset; // 0xA0 - 0xA4
   bool m_bTurnToFace; // 0xA4 - 0xA5

}; // size - 0xA8


class CFootAdjustmentAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   AnimParamID m_facingTarget; // 0x40 - 0x44
   bool m_bResetChild; // 0x44 - 0x45
   bool m_bAnimationDriven; // 0x45 - 0x46
   unsigned char pad_46[0x2] // 0x46 - 0x48
   CUtlString m_baseClipName; // 0x48 - 0x50
   CUtlVector< CUtlString > m_clips; // 0x50 - 0x68
   float m_flTurnTimeMin; // 0x68 - 0x6C
   float m_flTurnTimeMax; // 0x6C - 0x70
   float m_flStepHeightMax; // 0x70 - 0x74
   float m_flStepHeightMaxAngle; // 0x74 - 0x78

}; // size - 0x78


class CFootAdjustmentUpdateNode : public CUnaryUpdateNode
{
public:

   CUtlVector< HSequence > m_clips; // 0x70 - 0x88
   CPoseHandle m_hBasePoseCacheHandle; // 0x88 - 0x8C
   CAnimParamHandle m_facingTarget; // 0x8C - 0x8E
   unsigned char pad_8E[0x2] // 0x8E - 0x90
   float m_flTurnTimeMin; // 0x90 - 0x94
   float m_flTurnTimeMax; // 0x94 - 0x98
   float m_flStepHeightMax; // 0x98 - 0x9C
   float m_flStepHeightMaxAngle; // 0x9C - 0xA0
   bool m_bResetChild; // 0xA0 - 0xA1
   bool m_bAnimationDriven; // 0xA1 - 0xA2

}; // size - 0xA8


class CFootCycle : public CCycleBase
{
public:


}; // size - 0x4


class CFootCycleDefinition
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


class CFootCycleMetric : public CMotionMetricBase
{
public:

   CUtlVector< CUtlString > m_feet; // 0x28 - 0x40

}; // size - 0x40


class CFootCycleMetricEvaluator : public CMotionMetricEvaluator
{
public:

   CUtlVector< int32 > m_footIndices; // 0x50 - 0x68

}; // size - 0x68


class CFootDefinition
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


class CFootFallAnimTag : public CAnimTagBase
{
public:

   FootFallTagFoot_t m_foot; // 0x40 - 0x44

}; // size - 0x48


class CFootLockAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   CUtlVector< CFootLockItem > m_items; // 0x40 - 0x58
   CUtlString m_hipBoneName; // 0x58 - 0x60
   float m_flBlendTime; // 0x60 - 0x64
   bool m_bApplyFootRotationLimits; // 0x64 - 0x65
   bool m_bResetChild; // 0x65 - 0x66
   unsigned char pad_66[0x2] // 0x66 - 0x68
   IKSolverType m_ikSolverType; // 0x68 - 0x6C
   bool m_bAlwaysUseFallbackHinge; // 0x6C - 0x6D
   bool m_bApplyLegTwistLimits; // 0x6D - 0x6E
   unsigned char pad_6E[0x2] // 0x6E - 0x70
   float m_flMaxLegTwist; // 0x70 - 0x74
   float m_flStrideCurveScale; // 0x74 - 0x78
   float m_flStrideCurveLimitScale; // 0x78 - 0x7C
   bool m_bEnableVerticalCurvedPaths; // 0x7C - 0x7D
   bool m_bModulateStepHeight; // 0x7D - 0x7E
   unsigned char pad_7E[0x2] // 0x7E - 0x80
   float m_flStepHeightIncreaseScale; // 0x80 - 0x84
   float m_flStepHeightDecreaseScale; // 0x84 - 0x88
   bool m_bEnableHipShift; // 0x88 - 0x89
   unsigned char pad_89[0x3] // 0x89 - 0x8C
   float m_flHipShiftScale; // 0x8C - 0x90
   CAnimInputDamping m_hipShiftDamping; // 0x90 - 0xA0
   bool m_bApplyTilt; // 0xA0 - 0xA1
   unsigned char pad_A1[0x3] // 0xA1 - 0xA4
   float m_flTiltPlanePitchSpringStrength; // 0xA4 - 0xA8
   float m_flTiltPlaneRollSpringStrength; // 0xA8 - 0xAC
   bool m_bEnableLockBreaking; // 0xAC - 0xAD
   unsigned char pad_AD[0x3] // 0xAD - 0xB0
   float m_flLockBreakTolerance; // 0xB0 - 0xB4
   float m_flLockBreakBlendTime; // 0xB4 - 0xB8
   bool m_bEnableStretching; // 0xB8 - 0xB9
   unsigned char pad_B9[0x3] // 0xB9 - 0xBC
   float m_flMaxStretchAmount; // 0xBC - 0xC0
   float m_flStretchExtensionScale; // 0xC0 - 0xC4
   bool m_bEnableGroundTracing; // 0xC4 - 0xC5
   unsigned char pad_C5[0x3] // 0xC5 - 0xC8
   float m_flTraceAngleBlend; // 0xC8 - 0xCC
   bool m_bApplyHipDrop; // 0xCC - 0xCD
   unsigned char pad_CD[0x3] // 0xCD - 0xD0
   float m_flMaxFootHeight; // 0xD0 - 0xD4
   float m_flExtensionScale; // 0xD4 - 0xD8
   CAnimInputDamping m_hipDampingSettings; // 0xD8 - 0xE8
   bool m_bEnableRootHeightDamping; // 0xE8 - 0xE9
   unsigned char pad_E9[0x7] // 0xE9 - 0xF0
   CAnimInputDamping m_rootHeightDamping; // 0xF0 - 0x100
   float m_flMaxRootHeightOffset; // 0x100 - 0x104
   float m_flMinRootHeightOffset; // 0x104 - 0x108

}; // size - 0x108


class CFootLockItem
{
public:

   CUtlString m_footName; // 0x0 - 0x8
   CUtlString m_targetBoneName; // 0x8 - 0x10
   CUtlString m_ikChainName; // 0x10 - 0x18
   AnimTagID m_disableTagID; // 0x18 - 0x1C
   float m_flMaxRotationLeft; // 0x1C - 0x20
   float m_flMaxRotationRight; // 0x20 - 0x24
   AnimTagID m_footstepLandedTag; // 0x24 - 0x28

}; // size - 0x28


class CFootLockUpdateNode : public CUnaryUpdateNode
{
public:

   FootLockPoseOpFixedSettings m_opFixedSettings; // 0x68 - 0xC8
   unsigned char pad_C8[0x8] // 0xC8 - 0xD0
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

}; // size - 0x138


class CFootMotion
{
public:

   CUtlVector< CFootStride > m_strides; // 0x0 - 0x18
   CUtlString m_name; // 0x18 - 0x20
   bool m_bAdditive; // 0x20 - 0x21

}; // size - 0x28


class CFootPinningAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   CUtlVector< CFootPinningItem > m_items; // 0x40 - 0x58
   FootPinningTimingSource m_eTimingSource; // 0x58 - 0x5C
   float m_flBlendTime; // 0x5C - 0x60
   float m_flLockBreakDistance; // 0x60 - 0x64
   float m_flMaxLegStraightAmount; // 0x64 - 0x68
   bool m_bApplyFootRotationLimits; // 0x68 - 0x69
   unsigned char pad_69[0x7] // 0x69 - 0x70
   CUtlString m_hipBoneName; // 0x70 - 0x78
   bool m_bApplyLegTwistLimits; // 0x78 - 0x79
   unsigned char pad_79[0x3] // 0x79 - 0x7C
   float m_flMaxLegTwist; // 0x7C - 0x80
   bool m_bResetChild; // 0x80 - 0x81

}; // size - 0x88


class CFootPinningItem
{
public:

   CUtlString m_footName; // 0x0 - 0x8
   CUtlString m_targetBoneName; // 0x8 - 0x10
   CUtlString m_ikChainName; // 0x10 - 0x18
   AnimTagID m_tag; // 0x18 - 0x1C
   AnimParamID m_param; // 0x1C - 0x20
   float m_flMaxRotationLeft; // 0x20 - 0x24
   float m_flMaxRotationRight; // 0x24 - 0x28

}; // size - 0x28


class CFootPinningUpdateNode : public CUnaryUpdateNode
{
public:

   FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x70 - 0xA0
   FootPinningTimingSource m_eTimingSource; // 0xA0 - 0xA4
   unsigned char pad_A4[0x4] // 0xA4 - 0xA8
   CUtlVector< CAnimParamHandle > m_params; // 0xA8 - 0xC0
   bool m_bResetChild; // 0xC0 - 0xC1

}; // size - 0xC8


class CFootPositionMetric : public CMotionMetricBase
{
public:

   CUtlVector< CUtlString > m_feet; // 0x28 - 0x40
   bool m_bIgnoreSlope; // 0x40 - 0x41

}; // size - 0x48


class CFootPositionMetricEvaluator : public CMotionMetricEvaluator
{
public:

   CUtlVector< int32 > m_footIndices; // 0x50 - 0x68
   bool m_bIgnoreSlope; // 0x68 - 0x69

}; // size - 0x70


class CFootStepTriggerAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   float m_flTolerance; // 0x40 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   CUtlVector< CFootStepTriggerItem > m_items; // 0x48 - 0x60

}; // size - 0x60


class CFootStepTriggerItem
{
public:

   CUtlString m_footName; // 0x0 - 0x8
   StepPhase m_triggerPhase; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< AnimTagID > m_tags; // 0x10 - 0x28

}; // size - 0x28


class CFootStepTriggerUpdateNode : public CUnaryUpdateNode
{
public:

   CUtlVector< FootStepTrigger > m_triggers; // 0x68 - 0x80
   unsigned char pad_80[0x4] // 0x80 - 0x84
   float m_flTolerance; // 0x84 - 0x88

}; // size - 0x88


class CFootStride
{
public:

   CFootCycleDefinition m_definition; // 0x0 - 0x3C
   unsigned char pad_3C[0x4] // 0x3C - 0x40
   CFootTrajectories m_trajectories; // 0x40 - 0x58

}; // size - 0x58


class CFootTrajectories
{
public:

   CUtlVector< CFootTrajectory > m_trajectories; // 0x0 - 0x18

}; // size - 0x18


class CFootTrajectory
{
public:

   Vector m_vOffset; // 0x0 - 0xC
   float m_flRotationOffset; // 0xC - 0x10
   float m_flProgression; // 0x10 - 0x14

}; // size - 0x14


class CFootstepControl : public CBaseTrigger
{
public:

   CUtlSymbolLarge m_source; // 0x898 - 0x8A0
   CUtlSymbolLarge m_destination; // 0x8A0 - 0x8A8

}; // size - 0x8A8


class CFootstepLandedAnimTag : public CAnimTagBase
{
public:

   FootstepLandedFootSoundType_t m_FootstepType; // 0x40 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   CUtlString m_OverrideSoundName; // 0x48 - 0x50
   CUtlString m_DebugAnimSourceString; // 0x50 - 0x58
   CUtlString m_BoneName; // 0x58 - 0x60

}; // size - 0x60


class CFootstepTableHandle
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class CFuncConveyor : public CBaseModelEntity
{
public:

   CUtlSymbolLarge m_szConveyorModels; // 0x6F0 - 0x6F8
   float m_flTransitionDurationSeconds; // 0x6F8 - 0x6FC
   QAngle m_angMoveEntitySpace; // 0x6FC - 0x708
   Vector m_vecMoveDirEntitySpace; // 0x708 - 0x714
   float m_flTargetSpeed; // 0x714 - 0x718
   GameTick_t m_nTransitionStartTick; // 0x718 - 0x71C
   int32_t m_nTransitionDurationTicks; // 0x71C - 0x720
   float m_flTransitionStartSpeed; // 0x720 - 0x724
   unsigned char pad_724[0x4] // 0x724 - 0x728
   CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels; // 0x728 - 0x740

}; // size - 0x740


class CFuncElectrifiedVolume : public CFuncBrush
{
public:

   CUtlSymbolLarge m_EffectName; // 0x710 - 0x718
   CUtlSymbolLarge m_EffectInterpenetrateName; // 0x718 - 0x720
   CUtlSymbolLarge m_EffectZapName; // 0x720 - 0x728
   CUtlSymbolLarge m_iszEffectSource; // 0x728 - 0x730

}; // size - 0x748


class CFuncIllusionary : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CFuncInteractionLayerClip : public CBaseModelEntity
{
public:

   bool m_bDisabled; // 0x6F0 - 0x6F1
   unsigned char pad_6F1[0x7] // 0x6F1 - 0x6F8
   CUtlSymbolLarge m_iszInteractsAs; // 0x6F8 - 0x700
   CUtlSymbolLarge m_iszInteractsWith; // 0x700 - 0x708

}; // size - 0x708


class CFuncLadderAlias_func_useableladder : public CFuncLadder
{
public:


}; // size - 0x7A0


class CFuncMonitor : public CFuncBrush
{
public:

   CUtlString m_targetCamera; // 0x710 - 0x718
   int32_t m_nResolutionEnum; // 0x718 - 0x71C
   bool m_bRenderShadows; // 0x71C - 0x71D
   bool m_bUseUniqueColorTarget; // 0x71D - 0x71E
   unsigned char pad_71E[0x2] // 0x71E - 0x720
   CUtlString m_brushModelName; // 0x720 - 0x728
   CHandle< CBaseEntity > m_hTargetCamera; // 0x728 - 0x72C
   bool m_bEnabled; // 0x72C - 0x72D
   bool m_bDraw3DSkybox; // 0x72D - 0x72E
   bool m_bStartEnabled; // 0x72E - 0x72F

}; // size - 0x730


class CFuncMoveLinearAlias_momentary_door : public CFuncMoveLinear
{
public:


}; // size - 0x820


class CFuncNavObstruction : public CBaseModelEntity
{
public:

   bool m_bDisabled; // 0x6F8 - 0x6F9

}; // size - 0x700


class CFuncPropRespawnZone : public CBaseEntity
{
public:


}; // size - 0x4A0


class CFuncRotating : public CBaseModelEntity
{
public:

   QAngle m_vecMoveAng; // 0x6F0 - 0x6FC
   float m_flFanFriction; // 0x6FC - 0x700
   float m_flAttenuation; // 0x700 - 0x704
   float m_flVolume; // 0x704 - 0x708
   float m_flTargetSpeed; // 0x708 - 0x70C
   float m_flMaxSpeed; // 0x70C - 0x710
   float m_flBlockDamage; // 0x710 - 0x714
   float m_flTimeScale; // 0x714 - 0x718
   CUtlSymbolLarge m_NoiseRunning; // 0x718 - 0x720
   bool m_bReversed; // 0x720 - 0x721
   unsigned char pad_721[0xB] // 0x721 - 0x72C
   QAngle m_angStart; // 0x72C - 0x738
   bool m_bStopAtStartPos; // 0x738 - 0x739
   unsigned char pad_739[0x3] // 0x739 - 0x73C
   Vector m_vecClientOrigin; // 0x73C - 0x748
   QAngle m_vecClientAngles; // 0x748 - 0x754

}; // size - 0x758


class CFuncShatterglass : public CBaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialDamaged; // 0x6F0 - 0x6F8
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialUndamaged; // 0x6F8 - 0x700
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFace; // 0x700 - 0x708
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeCaps; // 0x708 - 0x710
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFins; // 0x710 - 0x718
   matrix3x4_t m_matPanelTransform; // 0x718 - 0x748
   matrix3x4_t m_matPanelTransformWsTemp; // 0x748 - 0x778
   CUtlVector< uint32 > m_vecShatterGlassShards; // 0x778 - 0x790
   Vector2D m_PanelSize; // 0x790 - 0x798
   Vector m_vecPanelNormalWs; // 0x798 - 0x7A4
   int32_t m_nNumShardsEverCreated; // 0x7A4 - 0x7A8
   GameTime_t m_flLastShatterSoundEmitTime; // 0x7A8 - 0x7AC
   GameTime_t m_flLastCleanupTime; // 0x7AC - 0x7B0
   GameTime_t m_flInitAtTime; // 0x7B0 - 0x7B4
   float m_flGlassThickness; // 0x7B4 - 0x7B8
   float m_flSpawnInvulnerability; // 0x7B8 - 0x7BC
   bool m_bBreakSilent; // 0x7BC - 0x7BD
   bool m_bBreakShardless; // 0x7BD - 0x7BE
   bool m_bBroken; // 0x7BE - 0x7BF
   bool m_bHasRateLimitedShards; // 0x7BF - 0x7C0
   bool m_bGlassNavIgnore; // 0x7C0 - 0x7C1
   bool m_bGlassInFrame; // 0x7C1 - 0x7C2
   bool m_bStartBroken; // 0x7C2 - 0x7C3
   uint8_t m_iInitialDamageType; // 0x7C3 - 0x7C4
   unsigned char pad_7C4[0x4] // 0x7C4 - 0x7C8
   CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x7C8 - 0x7D0
   CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x7D0 - 0x7D8
   CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x7D8 - 0x7E0
   CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x7E0 - 0x7E8
   CUtlVector< Vector > m_vInitialDamagePositions; // 0x7E8 - 0x800
   CUtlVector< Vector > m_vExtraDamagePositions; // 0x800 - 0x818
   CEntityIOOutput m_OnBroken; // 0x818 - 0x840
   unsigned char pad_840[0x1] // 0x840 - 0x841
   uint8_t m_iSurfaceType; // 0x841 - 0x842

}; // size - 0x848


class CFuncTankTrain : public CFuncTrackTrain
{
public:

   CEntityIOOutput m_OnDeath; // 0x828 - 0x850

}; // size - 0x850


class CFuncTimescale : public CBaseEntity
{
public:

   float m_flDesiredTimescale; // 0x4A0 - 0x4A4
   float m_flAcceleration; // 0x4A4 - 0x4A8
   float m_flMinBlendRate; // 0x4A8 - 0x4AC
   float m_flBlendDeltaMultiplier; // 0x4AC - 0x4B0
   bool m_isStarted; // 0x4B0 - 0x4B1

}; // size - 0x4B8


class CFuncTrackAuto : public CFuncTrackChange
{
public:


}; // size - 0x7F8


class CFuncTrain : public CBasePlatTrain
{
public:

   CHandle< CBaseEntity > m_hCurrentTarget; // 0x798 - 0x79C
   bool m_activated; // 0x79C - 0x79D
   unsigned char pad_79D[0x3] // 0x79D - 0x7A0
   CHandle< CBaseEntity > m_hEnemy; // 0x7A0 - 0x7A4
   float m_flBlockDamage; // 0x7A4 - 0x7A8
   GameTime_t m_flNextBlockTime; // 0x7A8 - 0x7AC
   unsigned char pad_7AC[0x4] // 0x7AC - 0x7B0
   CUtlSymbolLarge m_iszLastTarget; // 0x7B0 - 0x7B8

}; // size - 0x7B8


class CFuncTrainControls : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CFuncVPhysicsClip : public CBaseModelEntity
{
public:

   bool m_bDisabled; // 0x6F0 - 0x6F1

}; // size - 0x6F8


class CFuncVehicleClip : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CFuncWallToggle : public CFuncWall
{
public:


}; // size - 0x6F8


class CFuncWater : public CBaseDoor
{
public:


}; // size - 0x978


class CFuncWaterAnalog : public CFuncMoveLinear
{
public:


}; // size - 0x820


class CFuseProgram
{
public:

   CUtlVector< uint8 > m_programBuffer; // 0x0 - 0x18
   CUtlVector< FuseVariableIndex_t > m_variablesRead; // 0x18 - 0x30
   CUtlVector< FuseVariableIndex_t > m_variablesWritten; // 0x30 - 0x48
   int32_t m_nMaxTempVarsUsed; // 0x48 - 0x4C

}; // size - 0x50


class CFuseSymbolTable
{
public:

   CUtlHashtable< CUtlStringToken, ConstantInfo_t > m_constants; // 0x8 - 0x28
   CUtlHashtable< CUtlStringToken, VariableInfo_t > m_variables; // 0x28 - 0x48
   CUtlHashtable< CUtlStringToken, FunctionInfo_t > m_functions; // 0x48 - 0x68

}; // size - 0x68


class CFutureFacingMetric : public CMotionMetricBase
{
public:

   float m_flDistance; // 0x28 - 0x2C
   float m_flTime; // 0x2C - 0x30

}; // size - 0x30


class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator
{
public:

   float m_flDistance; // 0x50 - 0x54
   float m_flTime; // 0x54 - 0x58

}; // size - 0x58


class CFutureVelocityMetric : public CMotionMetricBase
{
public:

   float m_flDistance; // 0x28 - 0x2C
   float m_flStoppingDistance; // 0x2C - 0x30
   VelocityMetricMode m_eMode; // 0x30 - 0x31
   bool m_bAutoTargetSpeed; // 0x31 - 0x32
   unsigned char pad_32[0x2] // 0x32 - 0x34
   float m_flManualTargetSpeed; // 0x34 - 0x38

}; // size - 0x38


class CFutureVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:

   float m_flDistance; // 0x50 - 0x54
   float m_flStoppingDistance; // 0x54 - 0x58
   float m_flTargetSpeed; // 0x58 - 0x5C
   VelocityMetricMode m_eMode; // 0x5C - 0x5D

}; // size - 0x60


class CGameChoreoServices : public IChoreoServices
{
public:

   CHandle< CBaseAnimGraph > m_hOwner; // 0x8 - 0xC
   CHandle< CScriptedSequence > m_hScriptedSequence; // 0xC - 0x10
   IChoreoServices::ScriptState_t m_scriptState; // 0x10 - 0x14
   IChoreoServices::ChoreoState_t m_choreoState; // 0x14 - 0x18
   GameTime_t m_flTimeStartedState; // 0x18 - 0x1C

}; // size - 0x20


class CGameEnd : public CRulePointEntity
{
public:


}; // size - 0x700


class CGameGibManager : public CBaseEntity
{
public:

   bool m_bAllowNewGibs; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x3] // 0x4C1 - 0x4C4
   int32_t m_iCurrentMaxPieces; // 0x4C4 - 0x4C8
   int32_t m_iMaxPieces; // 0x4C8 - 0x4CC
   int32_t m_iLastFrame; // 0x4CC - 0x4D0

}; // size - 0x4D0


class CGamePlayerEquip : public CRulePointEntity
{
public:

   CUtlSymbolLarge m_weaponNames[32]; // 0x700 - 0x800
   int32 m_weaponCount[32]; // 0x800 - 0x880

}; // size - 0x880


class CGamePlayerZone : public CRuleBrushEntity
{
public:

   CEntityIOOutput m_OnPlayerInZone; // 0x6F8 - 0x720
   CEntityIOOutput m_OnPlayerOutZone; // 0x720 - 0x748
   CEntityOutputTemplate< int32 > m_PlayersInCount; // 0x748 - 0x770
   CEntityOutputTemplate< int32 > m_PlayersOutCount; // 0x770 - 0x798

}; // size - 0x798


class CGameSceneNodeHandle
{
public:

   CEntityHandle m_hOwner; // 0x8 - 0xC
   CUtlStringToken m_name; // 0xC - 0x10

}; // size - 0x10


class CGameSceneNodeHandle
{
public:

   CEntityHandle m_hOwner; // 0x8 - 0xC
   CUtlStringToken m_name; // 0xC - 0x10

}; // size - 0x10


class CGameScriptedMoveData
{
public:

   Vector m_vDest; // 0x0 - 0xC
   Vector m_vSrc; // 0xC - 0x18
   QAngle m_angSrc; // 0x18 - 0x24
   QAngle m_angDst; // 0x24 - 0x30
   QAngle m_angCurrent; // 0x30 - 0x3C
   float m_flAngRate; // 0x3C - 0x40
   float m_flDuration; // 0x40 - 0x44
   GameTime_t m_flStartTime; // 0x44 - 0x48
   MoveType_t m_nPrevMoveType; // 0x48 - 0x49
   bool m_bActive; // 0x49 - 0x4A
   bool m_bTeleportOnEnd; // 0x4A - 0x4B
   bool m_bIgnoreRotation; // 0x4B - 0x4C
   ScriptedMoveType_t m_nType; // 0x4C - 0x50
   bool m_bSuccess; // 0x50 - 0x51
   unsigned char pad_51[0x3] // 0x51 - 0x54
   ForcedCrouchState_t m_nForcedCrouchState; // 0x54 - 0x58
   bool m_bIgnoreCollisions; // 0x58 - 0x59

}; // size - 0x5C


class CGameText : public CRulePointEntity
{
public:

   CUtlSymbolLarge m_iszMessage; // 0x700 - 0x708
   hudtextparms_t m_textParms; // 0x708 - 0x71C

}; // size - 0x720


class CGameWeaponManager : public CBaseEntity
{
public:

   CUtlSymbolLarge m_iszWeaponName; // 0x4A0 - 0x4A8
   unsigned char pad_4A8[0x8] // 0x4A8 - 0x4B0
   int32_t m_iMaxPieces; // 0x4B0 - 0x4B4
   float m_flAmmoMod; // 0x4B4 - 0x4B8
   bool m_bExpectingWeapon; // 0x4B8 - 0x4B9
   unsigned char pad_4B9[0x7] // 0x4B9 - 0x4C0
   CUtlVector< CHandle< CBaseEntity > > m_ManagedNonWeapons; // 0x4C0 - 0x4D8

}; // size - 0x4D8


class CGenericConstraint : public CPhysConstraint
{
public:

   JointMotion_t m_nLinearMotionX; // 0x500 - 0x504
   JointMotion_t m_nLinearMotionY; // 0x504 - 0x508
   JointMotion_t m_nLinearMotionZ; // 0x508 - 0x50C
   float m_flLinearFrequencyX; // 0x50C - 0x510
   float m_flLinearFrequencyY; // 0x510 - 0x514
   float m_flLinearFrequencyZ; // 0x514 - 0x518
   float m_flLinearDampingRatioX; // 0x518 - 0x51C
   float m_flLinearDampingRatioY; // 0x51C - 0x520
   float m_flLinearDampingRatioZ; // 0x520 - 0x524
   float m_flMaxLinearImpulseX; // 0x524 - 0x528
   float m_flMaxLinearImpulseY; // 0x528 - 0x52C
   float m_flMaxLinearImpulseZ; // 0x52C - 0x530
   float m_flBreakAfterTimeX; // 0x530 - 0x534
   float m_flBreakAfterTimeY; // 0x534 - 0x538
   float m_flBreakAfterTimeZ; // 0x538 - 0x53C
   GameTime_t m_flBreakAfterTimeStartTimeX; // 0x53C - 0x540
   GameTime_t m_flBreakAfterTimeStartTimeY; // 0x540 - 0x544
   GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x544 - 0x548
   float m_flBreakAfterTimeThresholdX; // 0x548 - 0x54C
   float m_flBreakAfterTimeThresholdY; // 0x54C - 0x550
   float m_flBreakAfterTimeThresholdZ; // 0x550 - 0x554
   float m_flNotifyForceX; // 0x554 - 0x558
   float m_flNotifyForceY; // 0x558 - 0x55C
   float m_flNotifyForceZ; // 0x55C - 0x560
   float m_flNotifyForceMinTimeX; // 0x560 - 0x564
   float m_flNotifyForceMinTimeY; // 0x564 - 0x568
   float m_flNotifyForceMinTimeZ; // 0x568 - 0x56C
   GameTime_t m_flNotifyForceLastTimeX; // 0x56C - 0x570
   GameTime_t m_flNotifyForceLastTimeY; // 0x570 - 0x574
   GameTime_t m_flNotifyForceLastTimeZ; // 0x574 - 0x578
   bool m_bAxisNotifiedX; // 0x578 - 0x579
   bool m_bAxisNotifiedY; // 0x579 - 0x57A
   bool m_bAxisNotifiedZ; // 0x57A - 0x57B
   unsigned char pad_57B[0x1] // 0x57B - 0x57C
   JointMotion_t m_nAngularMotionX; // 0x57C - 0x580
   JointMotion_t m_nAngularMotionY; // 0x580 - 0x584
   JointMotion_t m_nAngularMotionZ; // 0x584 - 0x588
   float m_flAngularFrequencyX; // 0x588 - 0x58C
   float m_flAngularFrequencyY; // 0x58C - 0x590
   float m_flAngularFrequencyZ; // 0x590 - 0x594
   float m_flAngularDampingRatioX; // 0x594 - 0x598
   float m_flAngularDampingRatioY; // 0x598 - 0x59C
   float m_flAngularDampingRatioZ; // 0x59C - 0x5A0
   float m_flMaxAngularImpulseX; // 0x5A0 - 0x5A4
   float m_flMaxAngularImpulseY; // 0x5A4 - 0x5A8
   float m_flMaxAngularImpulseZ; // 0x5A8 - 0x5AC
   unsigned char pad_5AC[0x4] // 0x5AC - 0x5B0
   CEntityIOOutput m_NotifyForceReachedX; // 0x5B0 - 0x5D8
   CEntityIOOutput m_NotifyForceReachedY; // 0x5D8 - 0x600
   CEntityIOOutput m_NotifyForceReachedZ; // 0x600 - 0x628

}; // size - 0x628


class CGlobalLightBase
{
public:

   bool m_bSpotLight; // 0x10 - 0x11
   unsigned char pad_11[0x3] // 0x11 - 0x14
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
   unsigned char pad_7A[0x2] // 0x7A - 0x7C
   float m_flSunDistance; // 0x7C - 0x80
   float m_flFOV; // 0x80 - 0x84
   float m_flNearZ; // 0x84 - 0x88
   float m_flFarZ; // 0x88 - 0x8C
   bool m_bEnableShadows; // 0x8C - 0x8D
   bool m_bOldEnableShadows; // 0x8D - 0x8E
   bool m_bBackgroundClearNotRequired; // 0x8E - 0x8F
   unsigned char pad_8F[0x1] // 0x8F - 0x90
   float m_flCloudScale; // 0x90 - 0x94
   float m_flCloud1Speed; // 0x94 - 0x98
   float m_flCloud1Direction; // 0x98 - 0x9C
   float m_flCloud2Speed; // 0x9C - 0xA0
   float m_flCloud2Direction; // 0xA0 - 0xA4
   float m_flAmbientScale1; // 0xA4 - 0xA8
   float m_flAmbientScale2; // 0xA8 - 0xAC
   float m_flGroundScale; // 0xAC - 0xB0
   float m_flLightScale; // 0xB0 - 0xB4
   float m_flFoWDarkness; // 0xB4 - 0xB8
   bool m_bEnableSeparateSkyboxFog; // 0xB8 - 0xB9
   unsigned char pad_B9[0x3] // 0xB9 - 0xBC
   Vector m_vFowColor; // 0xBC - 0xC8
   Vector m_ViewOrigin; // 0xC8 - 0xD4
   QAngle m_ViewAngles; // 0xD4 - 0xE0
   float m_flViewFoV; // 0xE0 - 0xE4
   Vector m_WorldPoints[8]; // 0xE4 - 0x144
   unsigned char pad_144[0x364] // 0x144 - 0x4A8
   Vector2D m_vFogOffsetLayer0; // 0x4A8 - 0x4B0
   Vector2D m_vFogOffsetLayer1; // 0x4B0 - 0x4B8
   CHandle< C_BaseEntity > m_hEnvWind; // 0x4B8 - 0x4BC
   CHandle< C_BaseEntity > m_hEnvSky; // 0x4BC - 0x4C0

}; // size - 0x4C0


class CGlowProperty
{
public:

   Vector m_fGlowColor; // 0x8 - 0x14
   unsigned char pad_14[0x1C] // 0x14 - 0x30
   int32_t m_iGlowType; // 0x30 - 0x34
   int32_t m_iGlowTeam; // 0x34 - 0x38
   int32_t m_nGlowRange; // 0x38 - 0x3C
   int32_t m_nGlowRangeMin; // 0x3C - 0x40
   Color m_glowColorOverride; // 0x40 - 0x44
   bool m_bFlashing; // 0x44 - 0x45
   unsigned char pad_45[0x3] // 0x45 - 0x48
   float m_flGlowTime; // 0x48 - 0x4C
   float m_flGlowStartTime; // 0x4C - 0x50
   bool m_bEligibleForScreenHighlight; // 0x50 - 0x51
   bool m_bGlowing; // 0x51 - 0x52

}; // size - 0x58


class CGlowProperty
{
public:

   Vector m_fGlowColor; // 0x8 - 0x14
   unsigned char pad_14[0x1C] // 0x14 - 0x30
   int32_t m_iGlowType; // 0x30 - 0x34
   int32_t m_iGlowTeam; // 0x34 - 0x38
   int32_t m_nGlowRange; // 0x38 - 0x3C
   int32_t m_nGlowRangeMin; // 0x3C - 0x40
   Color m_glowColorOverride; // 0x40 - 0x44
   bool m_bFlashing; // 0x44 - 0x45
   unsigned char pad_45[0x3] // 0x45 - 0x48
   float m_flGlowTime; // 0x48 - 0x4C
   float m_flGlowStartTime; // 0x4C - 0x50
   bool m_bEligibleForScreenHighlight; // 0x50 - 0x51
   bool m_bGlowing; // 0x51 - 0x52

}; // size - 0x58


class CGlowSprite
{
public:

   Vector m_vColor; // 0x0 - 0xC
   float m_flHorzSize; // 0xC - 0x10
   float m_flVertSize; // 0x10 - 0x14
   unsigned char pad_14[0x4] // 0x14 - 0x18
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18 - 0x20

}; // size - 0x20


class CGradientFog : public CBaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x4A0 - 0x4A8
   float m_flFogStartDistance; // 0x4A8 - 0x4AC
   float m_flFogEndDistance; // 0x4AC - 0x4B0
   bool m_bHeightFogEnabled; // 0x4B0 - 0x4B1
   unsigned char pad_4B1[0x3] // 0x4B1 - 0x4B4
   float m_flFogStartHeight; // 0x4B4 - 0x4B8
   float m_flFogEndHeight; // 0x4B8 - 0x4BC
   float m_flFarZ; // 0x4BC - 0x4C0
   float m_flFogMaxOpacity; // 0x4C0 - 0x4C4
   float m_flFogFalloffExponent; // 0x4C4 - 0x4C8
   float m_flFogVerticalExponent; // 0x4C8 - 0x4CC
   Color m_fogColor; // 0x4CC - 0x4D0
   float m_flFogStrength; // 0x4D0 - 0x4D4
   float m_flFadeTime; // 0x4D4 - 0x4D8
   bool m_bStartDisabled; // 0x4D8 - 0x4D9
   bool m_bIsEnabled; // 0x4D9 - 0x4DA
   bool m_bGradientFogNeedsTextures; // 0x4DA - 0x4DB

}; // size - 0x4E0


class CGraphMotionItem : public CMotionItem
{
public:

   CUtlString m_name; // 0xB0 - 0xB8
   CMotionNodeManager m_nodeManager; // 0xB8 - 0x108

}; // size - 0x108


class CGrassBurn : public CPointEntity
{
public:

   float m_flGrassBurnClearTime; // 0x4A0 - 0x4A4

}; // size - 0x4A8


class CGrenadeTracer : public C_BaseModelEntity
{
public:

   float m_flTracerDuration; // 0x858 - 0x85C
   GrenadeType_t m_nType; // 0x85C - 0x860

}; // size - 0x898


class CGroupAnimNode : public CContainerAnimNodeBase
{
public:

   CAnimNodeManager m_nodeMgr; // 0x70 - 0xB8

}; // size - 0xB8


class CGroupInputAnimNode : public CProxyAnimNodeBase
{
public:


}; // size - 0x60


class CGroupOutputAnimNode : public CProxyAnimNodeBase
{
public:


}; // size - 0x58


class CGunTarget : public CBaseToggle
{
public:

   bool m_on; // 0x770 - 0x771
   unsigned char pad_771[0x3] // 0x771 - 0x774
   CHandle< CBaseEntity > m_hTargetEnt; // 0x774 - 0x778
   CEntityIOOutput m_OnDeath; // 0x778 - 0x7A0

}; // size - 0x7A0


class CHEGrenade : public CBaseCSGrenade
{
public:


}; // size - 0xD90


class CHEGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:


}; // size - 0x9A0


class CHandleDummy : public CBaseEntity
{
public:


}; // size - 0x4A0


class CHandleTest : public CBaseEntity
{
public:

   CHandle< CBaseEntity > m_Handle; // 0x4A0 - 0x4A4
   bool m_bSendHandle; // 0x4A4 - 0x4A5

}; // size - 0x4A8


class CHintMessage
{
public:

   char* m_hintString; // 0x8 - 0x10
   CUtlVector< char* > m_args; // 0x10 - 0x28
   float m_duration; // 0x28 - 0x2C

}; // size - 0x30


class CHintMessageQueue
{
public:

   float m_tmMessageEnd; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< CHintMessage* > m_messages; // 0x10 - 0x28
   CBasePlayerController* m_pPlayerController; // 0x28 - 0x30

}; // size - 0x30


class CHitBox
{
public:

   Vector m_vMinBounds; // 0x20 - 0x2C
   Vector m_vMaxBounds; // 0x2C - 0x38
   CUtlString m_name; // 0x38 - 0x40
   CUtlString m_sSurfaceProperty; // 0x40 - 0x48
   CUtlString m_sBoneName; // 0x48 - 0x50
   float m_flShapeRadius; // 0x50 - 0x54
   uint32_t m_nBoneNameHash; // 0x54 - 0x58
   int32_t m_nGroupId; // 0x58 - 0x5C
   Color m_cRenderColor; // 0x5C - 0x60
   uint16_t m_nHitBoxIndex; // 0x60 - 0x62
   uint8_t m_nShapeType; // 0x62 - 0x63
   unsigned char pad_63[0x1] // 0x63 - 0x64
   bool m_bTranslationOnly; // 0x64 - 0x65
   bool m_bVisible; // 0x65 - 0x66
   bool m_bSelected; // 0x66 - 0x67

}; // size - 0x70


class CHitBoxSet
{
public:

   CUtlString m_name; // 0x0 - 0x8
   uint32_t m_nNameHash; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< CHitBox > m_HitBoxes; // 0x10 - 0x28
   CUtlString m_SourceFilename; // 0x28 - 0x30

}; // size - 0x30


class CHitBoxSetList
{
public:

   CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0 - 0x18

}; // size - 0x18


class CHitReactAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   float m_flMinDelayBetweenHits; // 0x40 - 0x44
   AnimParamID m_triggerParam; // 0x44 - 0x48
   AnimParamID m_hitBoneParam; // 0x48 - 0x4C
   AnimParamID m_hitOffsetParam; // 0x4C - 0x50
   AnimParamID m_hitDirectionParam; // 0x50 - 0x54
   AnimParamID m_hitStrengthParam; // 0x54 - 0x58
   CUtlString m_weightListName; // 0x58 - 0x60
   CUtlString m_hipBoneName; // 0x60 - 0x68
   float m_flHipBoneTranslationScale; // 0x68 - 0x6C
   int32_t m_nEffectedBoneCount; // 0x6C - 0x70
   float m_flMaxImpactForce; // 0x70 - 0x74
   float m_flMinImpactForce; // 0x74 - 0x78
   float m_flWhipImpactScale; // 0x78 - 0x7C
   float m_flCounterRotationScale; // 0x7C - 0x80
   float m_flDistanceFadeScale; // 0x80 - 0x84
   float m_flPropagationScale; // 0x84 - 0x88
   float m_flWhipDelay; // 0x88 - 0x8C
   float m_flSpringStrength; // 0x8C - 0x90
   float m_flWhipSpringStrength; // 0x90 - 0x94
   float m_flHipDipSpringStrength; // 0x94 - 0x98
   float m_flHipDipImpactScale; // 0x98 - 0x9C
   float m_flHipDipDelay; // 0x9C - 0xA0
   bool m_bResetBase; // 0xA0 - 0xA1

}; // size - 0xA8


class CHitReactUpdateNode : public CUnaryUpdateNode
{
public:

   HitReactFixedSettings_t m_opFixedSettings; // 0x68 - 0xAC
   unsigned char pad_AC[0x8] // 0xAC - 0xB4
   CAnimParamHandle m_triggerParam; // 0xB4 - 0xB6
   CAnimParamHandle m_hitBoneParam; // 0xB6 - 0xB8
   CAnimParamHandle m_hitOffsetParam; // 0xB8 - 0xBA
   CAnimParamHandle m_hitDirectionParam; // 0xBA - 0xBC
   CAnimParamHandle m_hitStrengthParam; // 0xBC - 0xBE
   unsigned char pad_BE[0x2] // 0xBE - 0xC0
   float m_flMinDelayBetweenHits; // 0xC0 - 0xC4
   bool m_bResetChild; // 0xC4 - 0xC5

}; // size - 0xC8


class CHitboxComponent : public CEntityComponent
{
public:

   uint32 m_bvDisabledHitGroups[1]; // 0x24 - 0x28

}; // size - 0x28


class CHitboxComponent : public CEntityComponent
{
public:

   uint32 m_bvDisabledHitGroups[1]; // 0x24 - 0x28

}; // size - 0x28


class CHostageAlias_info_hostage_spawn : public CHostage
{
public:


}; // size - 0x2C00


class CHostageCarriableProp : public CBaseAnimGraph
{
public:


}; // size - 0x820


class CHostageRescueZone : public CHostageRescueZoneShim
{
public:


}; // size - 0x8A8


class CInButtonState
{
public:

   uint64 m_pButtonStates[3]; // 0x8 - 0x20

}; // size - 0x20


class CIncendiaryGrenade : public CMolotovGrenade
{
public:


}; // size - 0xD90


class CInfoArmsRaceCounterterrorist : public SpawnPoint
{
public:


}; // size - 0x4B0


class CInfoArmsRaceTerrorist : public SpawnPoint
{
public:


}; // size - 0x4B0


class CInfoData : public CServerOnlyEntity
{
public:


}; // size - 0x830


class CInfoDeathmatchSpawn : public SpawnPoint
{
public:


}; // size - 0x4B0


class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint
{
public:

   Vector m_vBoxMins; // 0x4B8 - 0x4C4
   Vector m_vBoxMaxs; // 0x4C4 - 0x4D0

}; // size - 0x4D0


class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint
{
public:

   Vector m_vBoxMins; // 0x550 - 0x55C
   Vector m_vBoxMaxs; // 0x55C - 0x568

}; // size - 0x568


class CInfoEnemyTerroristSpawn : public SpawnPointCoopEnemy
{
public:


}; // size - 0x4E8


class CInfoGameEventProxy : public CPointEntity
{
public:

   CUtlSymbolLarge m_iszEventName; // 0x4A0 - 0x4A8
   float m_flRange; // 0x4A8 - 0x4AC

}; // size - 0x4B0


class CInfoGasCanisterLaunchPoint : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoInstructorHintBombTargetA : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoInstructorHintBombTargetB : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoInstructorHintHostageRescueZone : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoInstructorHintTarget : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoLadderDismount : public CBaseEntity
{
public:


}; // size - 0x4A0


class CInfoLandmark : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoMapRegion : public CPointEntity
{
public:

   float m_flRadius; // 0x4A0 - 0x4A4
   unsigned char pad_4A4[0x4] // 0x4A4 - 0x4A8
   CUtlSymbolLarge m_strLocToken; // 0x4A8 - 0x4B0
   char m_szLocToken[128]; // 0x4B0 - 0x530

}; // size - 0x530


class CInfoOffscreenPanoramaTexture : public C_PointEntity
{
public:

   bool m_bDisabled; // 0x538 - 0x539
   unsigned char pad_539[0x3] // 0x539 - 0x53C
   int32_t m_nResolutionX; // 0x53C - 0x540
   int32_t m_nResolutionY; // 0x540 - 0x544
   unsigned char pad_544[0x4] // 0x544 - 0x548
   CUtlSymbolLarge m_szLayoutFileName; // 0x548 - 0x550
   CUtlSymbolLarge m_RenderAttrName; // 0x550 - 0x558
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // 0x558 - 0x570
   int32_t m_nTargetChangeCount; // 0x570 - 0x574
   unsigned char pad_574[0x4] // 0x574 - 0x578
   C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x578 - 0x590
   unsigned char pad_590[0x160] // 0x590 - 0x6F0
   bool m_bCheckCSSClasses; // 0x6F0 - 0x6F1

}; // size - 0x720


class CInfoOffscreenPanoramaTexture : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   int32_t m_nResolutionX; // 0x4A4 - 0x4A8
   int32_t m_nResolutionY; // 0x4A8 - 0x4AC
   unsigned char pad_4AC[0x4] // 0x4AC - 0x4B0
   CUtlSymbolLarge m_szLayoutFileName; // 0x4B0 - 0x4B8
   CUtlSymbolLarge m_RenderAttrName; // 0x4B8 - 0x4C0
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // 0x4C0 - 0x4D8
   int32_t m_nTargetChangeCount; // 0x4D8 - 0x4DC
   unsigned char pad_4DC[0x4] // 0x4DC - 0x4E0
   CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x4E0 - 0x4F8
   CUtlSymbolLarge m_szTargetsName; // 0x4F8 - 0x500
   CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // 0x500 - 0x518

}; // size - 0x518


class CInfoParticleTarget : public C_PointEntity
{
public:


}; // size - 0x538


class CInfoParticleTarget : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoPlayerCounterterrorist : public SpawnPoint
{
public:


}; // size - 0x4B0


class CInfoPlayerStart : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1

}; // size - 0x4A8


class CInfoPlayerTerrorist : public SpawnPoint
{
public:


}; // size - 0x4B0


class CInfoSpawnGroupLandmark : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoSpawnGroupLoadUnload : public CLogicalEntity
{
public:

   CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4A0 - 0x4C8
   CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x4C8 - 0x4F0
   CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x4F0 - 0x518
   CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x518 - 0x540
   CUtlSymbolLarge m_iszSpawnGroupName; // 0x540 - 0x548
   CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x548 - 0x550
   CUtlSymbolLarge m_iszLandmarkName; // 0x550 - 0x558
   CUtlString m_sFixedSpawnGroupName; // 0x558 - 0x560
   float m_flTimeoutInterval; // 0x560 - 0x564
   bool m_bStreamingStarted; // 0x564 - 0x565
   bool m_bUnloadingStarted; // 0x565 - 0x566

}; // size - 0x5A0


class CInfoTarget : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoTarget : public C_PointEntity
{
public:


}; // size - 0x538


class CInfoTeleportDestination : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoVisibilityBox : public CBaseEntity
{
public:

   int32_t m_nMode; // 0x4A4 - 0x4A8
   Vector m_vBoxSize; // 0x4A8 - 0x4B4
   bool m_bEnabled; // 0x4B4 - 0x4B5

}; // size - 0x4B8


class CInfoWorldLayer : public C_BaseEntity
{
public:

   CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x538 - 0x560
   CUtlSymbolLarge m_worldName; // 0x560 - 0x568
   CUtlSymbolLarge m_layerName; // 0x568 - 0x570
   bool m_bWorldLayerVisible; // 0x570 - 0x571
   bool m_bEntitiesSpawned; // 0x571 - 0x572
   bool m_bCreateAsChildSpawnGroup; // 0x572 - 0x573
   unsigned char pad_573[0x1] // 0x573 - 0x574
   uint32_t m_hLayerSpawnGroup; // 0x574 - 0x578
   bool m_bWorldLayerActuallyVisible; // 0x578 - 0x579

}; // size - 0x580


class CInfoWorldLayer : public CBaseEntity
{
public:

   CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4A0 - 0x4C8
   CUtlSymbolLarge m_worldName; // 0x4C8 - 0x4D0
   CUtlSymbolLarge m_layerName; // 0x4D0 - 0x4D8
   bool m_bWorldLayerVisible; // 0x4D8 - 0x4D9
   bool m_bEntitiesSpawned; // 0x4D9 - 0x4DA
   bool m_bCreateAsChildSpawnGroup; // 0x4DA - 0x4DB
   unsigned char pad_4DB[0x1] // 0x4DB - 0x4DC
   uint32_t m_hLayerSpawnGroup; // 0x4DC - 0x4E0

}; // size - 0x4E0


class CInputStreamAnimNode : public CAnimNodeBase
{
public:


}; // size - 0x38


class CInputStreamUpdateNode : public CLeafUpdateNode
{
public:


}; // size - 0x60


class CInstancedSceneEntity : public CSceneEntity
{
public:

   CHandle< CBaseEntity > m_hOwner; // 0xA00 - 0xA04
   bool m_bHadOwner; // 0xA04 - 0xA05
   unsigned char pad_A05[0x3] // 0xA05 - 0xA08
   float m_flPostSpeakDelay; // 0xA08 - 0xA0C
   float m_flPreDelay; // 0xA0C - 0xA10
   bool m_bIsBackground; // 0xA10 - 0xA11

}; // size - 0xA18


class CInstructorEventEntity : public CPointEntity
{
public:

   CUtlSymbolLarge m_iszName; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_iszHintTargetEntity; // 0x4A8 - 0x4B0
   CHandle< CBasePlayerPawn > m_hTargetPlayer; // 0x4B0 - 0x4B4

}; // size - 0x4B8


class CIntAnimParameter : public CAnimParameterBase
{
public:

   int32_t m_defaultValue; // 0x78 - 0x7C
   int32_t m_minValue; // 0x7C - 0x80
   int32_t m_maxValue; // 0x80 - 0x84

}; // size - 0x88


class CInterpolatedValue
{
public:

   float m_flStartTime; // 0x0 - 0x4
   float m_flEndTime; // 0x4 - 0x8
   float m_flStartValue; // 0x8 - 0xC
   float m_flEndValue; // 0xC - 0x10
   int32_t m_nInterpType; // 0x10 - 0x14

}; // size - 0x14


class CIronSightController
{
public:

   bool m_bIronSightAvailable; // 0x8 - 0x9
   unsigned char pad_9[0x3] // 0x9 - 0xC
   float m_flIronSightAmount; // 0xC - 0x10
   float m_flIronSightAmountGained; // 0x10 - 0x14
   float m_flIronSightAmountBiased; // 0x14 - 0x18

}; // size - 0x18


class CItemCash : public CItem
{
public:

   char m_bufCashOriginalSource[64]; // 0x8F8 - 0x938
   int32_t m_nBundleSize; // 0x938 - 0x93C
   unsigned char pad_93C[0x4] // 0x93C - 0x940
   float m_flAllowPickupTime; // 0x940 - 0x944

}; // size - 0x948


class CItemDefuserAlias_item_defuser : public CItemDefuser
{
public:


}; // size - 0x918


class CItemDogtags : public CItem
{
public:

   CHandle< CCSPlayerPawnBase > m_OwningPlayer; // 0x8F8 - 0x8FC
   CHandle< CCSPlayerPawnBase > m_KillingPlayer; // 0x8FC - 0x900

}; // size - 0x900


class CItemGeneric : public CItem
{
public:

   bool m_bHasTriggerRadius; // 0x900 - 0x901
   bool m_bHasPickupRadius; // 0x901 - 0x902
   unsigned char pad_902[0x2] // 0x902 - 0x904
   float m_flPickupRadiusSqr; // 0x904 - 0x908
   float m_flTriggerRadiusSqr; // 0x908 - 0x90C
   GameTime_t m_flLastPickupCheck; // 0x90C - 0x910
   bool m_bPlayerCounterListenerAdded; // 0x910 - 0x911
   bool m_bPlayerInTriggerRadius; // 0x911 - 0x912
   unsigned char pad_912[0x6] // 0x912 - 0x918
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0x918 - 0x920
   CUtlSymbolLarge m_pAmbientSoundEffect; // 0x920 - 0x928
   bool m_bAutoStartAmbientSound; // 0x928 - 0x929
   unsigned char pad_929[0x7] // 0x929 - 0x930
   CUtlSymbolLarge m_pSpawnScriptFunction; // 0x930 - 0x938
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0x938 - 0x940
   CUtlSymbolLarge m_pPickupSoundEffect; // 0x940 - 0x948
   CUtlSymbolLarge m_pPickupScriptFunction; // 0x948 - 0x950
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0x950 - 0x958
   CUtlSymbolLarge m_pTimeoutSoundEffect; // 0x958 - 0x960
   CUtlSymbolLarge m_pTimeoutScriptFunction; // 0x960 - 0x968
   CUtlSymbolLarge m_pPickupFilterName; // 0x968 - 0x970
   CHandle< CBaseFilter > m_hPickupFilter; // 0x970 - 0x974
   unsigned char pad_974[0x4] // 0x974 - 0x978
   CEntityIOOutput m_OnPickup; // 0x978 - 0x9A0
   CEntityIOOutput m_OnTimeout; // 0x9A0 - 0x9C8
   CEntityIOOutput m_OnTriggerStartTouch; // 0x9C8 - 0x9F0
   CEntityIOOutput m_OnTriggerTouch; // 0x9F0 - 0xA18
   CEntityIOOutput m_OnTriggerEndTouch; // 0xA18 - 0xA40
   CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xA40 - 0xA48
   float m_flPickupRadius; // 0xA48 - 0xA4C
   float m_flTriggerRadius; // 0xA4C - 0xA50
   CUtlSymbolLarge m_pTriggerSoundEffect; // 0xA50 - 0xA58
   bool m_bGlowWhenInTrigger; // 0xA58 - 0xA59
   Color m_glowColor; // 0xA59 - 0xA5D
   bool m_bUseable; // 0xA5D - 0xA5E
   unsigned char pad_A5E[0x2] // 0xA5E - 0xA60
   CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xA60 - 0xA64

}; // size - 0xA68


class CItemGenericTriggerHelper : public CBaseModelEntity
{
public:

   CHandle< CItemGeneric > m_hParentItem; // 0x6F0 - 0x6F4

}; // size - 0x6F8


class CItemHeavyAssaultSuit : public CItemAssaultSuit
{
public:


}; // size - 0x8F8


class CItemKevlar : public CItem
{
public:


}; // size - 0x8F8


class CItemSoda : public CBaseAnimGraph
{
public:


}; // size - 0x820


class CItem_Healthshot : public CWeaponBaseItem
{
public:


}; // size - 0xD70


class CJiggleBoneAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   CUtlVector< CJiggleBoneItem > m_items; // 0x40 - 0x58

}; // size - 0x58


class CJiggleBoneItem
{
public:

   CUtlString m_boneName; // 0x0 - 0x8
   float m_flSpringStrength; // 0x8 - 0xC
   float m_flSimRateFPS; // 0xC - 0x10
   float m_flDamping; // 0x10 - 0x14
   JiggleBoneSimSpace m_eSimSpace; // 0x14 - 0x18
   Vector m_vBoundsMaxLS; // 0x18 - 0x24
   Vector m_vBoundsMinLS; // 0x24 - 0x30

}; // size - 0x30


class CJiggleBoneUpdateNode : public CUnaryUpdateNode
{
public:

   JiggleBoneSettingsList_t m_opFixedData; // 0x68 - 0x80

}; // size - 0x88


class CJumpHelperAnimNode : public CSequenceAnimNode
{
public:

   AnimParamID m_targetParamID; // 0xB0 - 0xB4
   float m_flJumpStartCycle; // 0xB4 - 0xB8
   float m_flJumpDuration; // 0xB8 - 0xBC
   bool m_bTranslateX; // 0xBC - 0xBD
   bool m_bTranslateY; // 0xBD - 0xBE
   bool m_bTranslateZ; // 0xBE - 0xBF
   bool m_bScaleSpeed; // 0xBF - 0xC0
   JumpCorrectionMethod m_eCorrectionMethod; // 0xC0 - 0xC4

}; // size - 0xC8


class CJumpHelperUpdateNode : public CSequenceUpdateNode
{
public:

   CAnimParamHandle m_hTargetParam; // 0xA8 - 0xAA
   unsigned char pad_AA[0x2] // 0xAA - 0xAC
   Vector m_flOriginalJumpMovement; // 0xAC - 0xB8
   float m_flOriginalJumpDuration; // 0xB8 - 0xBC
   float m_flJumpStartCycle; // 0xBC - 0xC0
   float m_flJumpEndCycle; // 0xC0 - 0xC4
   JumpCorrectionMethod m_eCorrectionMethod; // 0xC4 - 0xC8
   bool m_bTranslationAxis[3]; // 0xC8 - 0xCB
   bool m_bScaleSpeed; // 0xCB - 0xCC

}; // size - 0xD0


class CKeepUpright : public CPointEntity
{
public:

   Vector m_worldGoalAxis; // 0x4A8 - 0x4B4
   Vector m_localTestAxis; // 0x4B4 - 0x4C0
   unsigned char pad_4C0[0x8] // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_nameAttach; // 0x4C8 - 0x4D0
   CHandle< CBaseEntity > m_attachedObject; // 0x4D0 - 0x4D4
   float m_angularLimit; // 0x4D4 - 0x4D8
   bool m_bActive; // 0x4D8 - 0x4D9
   bool m_bDampAllRotation; // 0x4D9 - 0x4DA

}; // size - 0x4E0


class CKnifeGG : public CKnife
{
public:


}; // size - 0xD50


class CLODComponent : public CAnimComponentBase
{
public:

   int32_t m_nServerLOD; // 0x38 - 0x3C

}; // size - 0x40


class CLODComponentUpdater : public CAnimComponentUpdater
{
public:

   int32_t m_nServerLOD; // 0x30 - 0x34

}; // size - 0x38


class CLeanMatrixAnimNode : public CAnimNodeBase
{
public:

   CUtlString m_sequenceName; // 0x40 - 0x48
   float m_flMaxValue; // 0x48 - 0x4C
   AnimVectorSource m_blendSource; // 0x4C - 0x50
   AnimParamID m_param; // 0x50 - 0x54
   Vector m_verticalAxisDirection; // 0x54 - 0x60
   Vector m_horizontalAxisDirection; // 0x60 - 0x6C
   unsigned char pad_6C[0x4] // 0x6C - 0x70
   CAnimInputDamping m_damping; // 0x70 - 0x80

}; // size - 0x80


class CLeanMatrixUpdateNode : public CLeafUpdateNode
{
public:

   int32 m_frameCorners[3][3]; // 0x5C - 0x80
   CPoseHandle m_poses[9]; // 0x80 - 0xA4
   unsigned char pad_A4[0x4] // 0xA4 - 0xA8
   CAnimInputDamping m_damping; // 0xA8 - 0xB8
   AnimVectorSource m_blendSource; // 0xB8 - 0xBC
   CAnimParamHandle m_paramIndex; // 0xBC - 0xBE
   unsigned char pad_BE[0x2] // 0xBE - 0xC0
   Vector m_verticalAxis; // 0xC0 - 0xCC
   Vector m_horizontalAxis; // 0xCC - 0xD8
   HSequence m_hSequence; // 0xD8 - 0xDC
   float m_flMaxValue; // 0xDC - 0xE0
   int32_t m_nSequenceMaxFrame; // 0xE0 - 0xE4

}; // size - 0xE8


class CLightComponent : public CEntityComponent
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x48 - 0x70
   unsigned char pad_70[0x15] // 0x70 - 0x85
   Color m_Color; // 0x85 - 0x89
   Color m_SecondaryColor; // 0x89 - 0x8D
   unsigned char pad_8D[0x3] // 0x8D - 0x90
   float m_flBrightness; // 0x90 - 0x94
   float m_flBrightnessScale; // 0x94 - 0x98
   float m_flBrightnessMult; // 0x98 - 0x9C
   float m_flRange; // 0x9C - 0xA0
   float m_flFalloff; // 0xA0 - 0xA4
   float m_flAttenuation0; // 0xA4 - 0xA8
   float m_flAttenuation1; // 0xA8 - 0xAC
   float m_flAttenuation2; // 0xAC - 0xB0
   float m_flTheta; // 0xB0 - 0xB4
   float m_flPhi; // 0xB4 - 0xB8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0xB8 - 0xC0
   int32_t m_nCascades; // 0xC0 - 0xC4
   int32_t m_nCastShadows; // 0xC4 - 0xC8
   int32_t m_nShadowWidth; // 0xC8 - 0xCC
   int32_t m_nShadowHeight; // 0xCC - 0xD0
   bool m_bRenderDiffuse; // 0xD0 - 0xD1
   unsigned char pad_D1[0x3] // 0xD1 - 0xD4
   int32_t m_nRenderSpecular; // 0xD4 - 0xD8
   bool m_bRenderTransmissive; // 0xD8 - 0xD9
   unsigned char pad_D9[0x3] // 0xD9 - 0xDC
   float m_flOrthoLightWidth; // 0xDC - 0xE0
   float m_flOrthoLightHeight; // 0xE0 - 0xE4
   int32_t m_nStyle; // 0xE4 - 0xE8
   CUtlString m_Pattern; // 0xE8 - 0xF0
   int32_t m_nCascadeRenderStaticObjects; // 0xF0 - 0xF4
   float m_flShadowCascadeCrossFade; // 0xF4 - 0xF8
   float m_flShadowCascadeDistanceFade; // 0xF8 - 0xFC
   float m_flShadowCascadeDistance0; // 0xFC - 0x100
   float m_flShadowCascadeDistance1; // 0x100 - 0x104
   float m_flShadowCascadeDistance2; // 0x104 - 0x108
   float m_flShadowCascadeDistance3; // 0x108 - 0x10C
   int32_t m_nShadowCascadeResolution0; // 0x10C - 0x110
   int32_t m_nShadowCascadeResolution1; // 0x110 - 0x114
   int32_t m_nShadowCascadeResolution2; // 0x114 - 0x118
   int32_t m_nShadowCascadeResolution3; // 0x118 - 0x11C
   bool m_bUsesBakedShadowing; // 0x11C - 0x11D
   unsigned char pad_11D[0x3] // 0x11D - 0x120
   int32_t m_nShadowPriority; // 0x120 - 0x124
   int32_t m_nBakedShadowIndex; // 0x124 - 0x128
   bool m_bRenderToCubemaps; // 0x128 - 0x129
   unsigned char pad_129[0x7] // 0x129 - 0x130
   CUtlSymbolLarge m_LightGroups; // 0x130 - 0x138
   int32_t m_nDirectLight; // 0x138 - 0x13C
   int32_t m_nIndirectLight; // 0x13C - 0x140
   float m_flFadeMinDist; // 0x140 - 0x144
   float m_flFadeMaxDist; // 0x144 - 0x148
   float m_flShadowFadeMinDist; // 0x148 - 0x14C
   float m_flShadowFadeMaxDist; // 0x14C - 0x150
   bool m_bEnabled; // 0x150 - 0x151
   bool m_bFlicker; // 0x151 - 0x152
   bool m_bPrecomputedFieldsValid; // 0x152 - 0x153
   unsigned char pad_153[0x1] // 0x153 - 0x154
   Vector m_vPrecomputedBoundsMins; // 0x154 - 0x160
   Vector m_vPrecomputedBoundsMaxs; // 0x160 - 0x16C
   Vector m_vPrecomputedOBBOrigin; // 0x16C - 0x178
   QAngle m_vPrecomputedOBBAngles; // 0x178 - 0x184
   Vector m_vPrecomputedOBBExtent; // 0x184 - 0x190
   float m_flPrecomputedMaxRange; // 0x190 - 0x194
   int32_t m_nFogLightingMode; // 0x194 - 0x198
   float m_flFogContributionStength; // 0x198 - 0x19C
   float m_flNearClipPlane; // 0x19C - 0x1A0
   Color m_SkyColor; // 0x1A0 - 0x1A4
   float m_flSkyIntensity; // 0x1A4 - 0x1A8
   Color m_SkyAmbientBounce; // 0x1A8 - 0x1AC
   bool m_bUseSecondaryColor; // 0x1AC - 0x1AD
   bool m_bMixedShadows; // 0x1AD - 0x1AE
   unsigned char pad_1AE[0x2] // 0x1AE - 0x1B0
   GameTime_t m_flLightStyleStartTime; // 0x1B0 - 0x1B4
   float m_flCapsuleLength; // 0x1B4 - 0x1B8
   float m_flMinRoughness; // 0x1B8 - 0x1BC

}; // size - 0x1C8


class CLightComponent : public CEntityComponent
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x48 - 0x70
   unsigned char pad_70[0x15] // 0x70 - 0x85
   Color m_Color; // 0x85 - 0x89
   Color m_SecondaryColor; // 0x89 - 0x8D
   unsigned char pad_8D[0x3] // 0x8D - 0x90
   float m_flBrightness; // 0x90 - 0x94
   float m_flBrightnessScale; // 0x94 - 0x98
   float m_flBrightnessMult; // 0x98 - 0x9C
   float m_flRange; // 0x9C - 0xA0
   float m_flFalloff; // 0xA0 - 0xA4
   float m_flAttenuation0; // 0xA4 - 0xA8
   float m_flAttenuation1; // 0xA8 - 0xAC
   float m_flAttenuation2; // 0xAC - 0xB0
   float m_flTheta; // 0xB0 - 0xB4
   float m_flPhi; // 0xB4 - 0xB8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0xB8 - 0xC0
   int32_t m_nCascades; // 0xC0 - 0xC4
   int32_t m_nCastShadows; // 0xC4 - 0xC8
   int32_t m_nShadowWidth; // 0xC8 - 0xCC
   int32_t m_nShadowHeight; // 0xCC - 0xD0
   bool m_bRenderDiffuse; // 0xD0 - 0xD1
   unsigned char pad_D1[0x3] // 0xD1 - 0xD4
   int32_t m_nRenderSpecular; // 0xD4 - 0xD8
   bool m_bRenderTransmissive; // 0xD8 - 0xD9
   unsigned char pad_D9[0x3] // 0xD9 - 0xDC
   float m_flOrthoLightWidth; // 0xDC - 0xE0
   float m_flOrthoLightHeight; // 0xE0 - 0xE4
   int32_t m_nStyle; // 0xE4 - 0xE8
   CUtlString m_Pattern; // 0xE8 - 0xF0
   int32_t m_nCascadeRenderStaticObjects; // 0xF0 - 0xF4
   float m_flShadowCascadeCrossFade; // 0xF4 - 0xF8
   float m_flShadowCascadeDistanceFade; // 0xF8 - 0xFC
   float m_flShadowCascadeDistance0; // 0xFC - 0x100
   float m_flShadowCascadeDistance1; // 0x100 - 0x104
   float m_flShadowCascadeDistance2; // 0x104 - 0x108
   float m_flShadowCascadeDistance3; // 0x108 - 0x10C
   int32_t m_nShadowCascadeResolution0; // 0x10C - 0x110
   int32_t m_nShadowCascadeResolution1; // 0x110 - 0x114
   int32_t m_nShadowCascadeResolution2; // 0x114 - 0x118
   int32_t m_nShadowCascadeResolution3; // 0x118 - 0x11C
   bool m_bUsesBakedShadowing; // 0x11C - 0x11D
   unsigned char pad_11D[0x3] // 0x11D - 0x120
   int32_t m_nShadowPriority; // 0x120 - 0x124
   int32_t m_nBakedShadowIndex; // 0x124 - 0x128
   bool m_bRenderToCubemaps; // 0x128 - 0x129
   unsigned char pad_129[0x7] // 0x129 - 0x130
   CUtlSymbolLarge m_LightGroups; // 0x130 - 0x138
   int32_t m_nDirectLight; // 0x138 - 0x13C
   int32_t m_nIndirectLight; // 0x13C - 0x140
   float m_flFadeMinDist; // 0x140 - 0x144
   float m_flFadeMaxDist; // 0x144 - 0x148
   float m_flShadowFadeMinDist; // 0x148 - 0x14C
   float m_flShadowFadeMaxDist; // 0x14C - 0x150
   bool m_bEnabled; // 0x150 - 0x151
   bool m_bFlicker; // 0x151 - 0x152
   bool m_bPrecomputedFieldsValid; // 0x152 - 0x153
   unsigned char pad_153[0x1] // 0x153 - 0x154
   Vector m_vPrecomputedBoundsMins; // 0x154 - 0x160
   Vector m_vPrecomputedBoundsMaxs; // 0x160 - 0x16C
   Vector m_vPrecomputedOBBOrigin; // 0x16C - 0x178
   QAngle m_vPrecomputedOBBAngles; // 0x178 - 0x184
   Vector m_vPrecomputedOBBExtent; // 0x184 - 0x190
   float m_flPrecomputedMaxRange; // 0x190 - 0x194
   int32_t m_nFogLightingMode; // 0x194 - 0x198
   float m_flFogContributionStength; // 0x198 - 0x19C
   float m_flNearClipPlane; // 0x19C - 0x1A0
   Color m_SkyColor; // 0x1A0 - 0x1A4
   float m_flSkyIntensity; // 0x1A4 - 0x1A8
   Color m_SkyAmbientBounce; // 0x1A8 - 0x1AC
   bool m_bUseSecondaryColor; // 0x1AC - 0x1AD
   bool m_bMixedShadows; // 0x1AD - 0x1AE
   unsigned char pad_1AE[0x2] // 0x1AE - 0x1B0
   GameTime_t m_flLightStyleStartTime; // 0x1B0 - 0x1B4
   float m_flCapsuleLength; // 0x1B4 - 0x1B8
   float m_flMinRoughness; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0xC] // 0x1BC - 0x1C8
   bool m_bPvsModifyEntity; // 0x1C8 - 0x1C9

}; // size - 0x1D0


class CLightEnvironmentEntity : public CLightDirectionalEntity
{
public:


}; // size - 0x6F8


class CLightGlow : public CBaseModelEntity
{
public:

   uint32_t m_nHorizontalSize; // 0x6F0 - 0x6F4
   uint32_t m_nVerticalSize; // 0x6F4 - 0x6F8
   uint32_t m_nMinDist; // 0x6F8 - 0x6FC
   uint32_t m_nMaxDist; // 0x6FC - 0x700
   uint32_t m_nOuterMaxDist; // 0x700 - 0x704
   float m_flGlowProxySize; // 0x704 - 0x708
   float m_flHDRColorScale; // 0x708 - 0x70C

}; // size - 0x710


class CLightOrthoEntity : public CLightEntity
{
public:


}; // size - 0x6F8


class CLightSpotEntity : public CLightEntity
{
public:


}; // size - 0x6F8


class CLogicAchievement : public CLogicalEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x7] // 0x4A1 - 0x4A8
   CUtlSymbolLarge m_iszAchievementEventID; // 0x4A8 - 0x4B0
   CEntityIOOutput m_OnFired; // 0x4B0 - 0x4D8

}; // size - 0x4D8


class CLogicActiveAutosave : public CLogicAutosave
{
public:

   int32_t m_TriggerHitPoints; // 0x4B0 - 0x4B4
   float m_flTimeToTrigger; // 0x4B4 - 0x4B8
   GameTime_t m_flStartTime; // 0x4B8 - 0x4BC
   float m_flDangerousTime; // 0x4BC - 0x4C0

}; // size - 0x4C0


class CLogicAuto : public CBaseEntity
{
public:

   CEntityIOOutput m_OnMapSpawn; // 0x4A0 - 0x4C8
   CEntityIOOutput m_OnDemoMapSpawn; // 0x4C8 - 0x4F0
   CEntityIOOutput m_OnNewGame; // 0x4F0 - 0x518
   CEntityIOOutput m_OnLoadGame; // 0x518 - 0x540
   CEntityIOOutput m_OnMapTransition; // 0x540 - 0x568
   CEntityIOOutput m_OnBackgroundMap; // 0x568 - 0x590
   CEntityIOOutput m_OnMultiNewMap; // 0x590 - 0x5B8
   CEntityIOOutput m_OnMultiNewRound; // 0x5B8 - 0x5E0
   CEntityIOOutput m_OnVREnabled; // 0x5E0 - 0x608
   CEntityIOOutput m_OnVRNotEnabled; // 0x608 - 0x630
   CUtlSymbolLarge m_globalstate; // 0x630 - 0x638

}; // size - 0x638


class CLogicBranch : public CLogicalEntity
{
public:

   bool m_bInValue; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x7] // 0x4A1 - 0x4A8
   CUtlVector< CHandle< CBaseEntity > > m_Listeners; // 0x4A8 - 0x4C0
   CEntityIOOutput m_OnTrue; // 0x4C0 - 0x4E8
   CEntityIOOutput m_OnFalse; // 0x4E8 - 0x510

}; // size - 0x510


class CLogicBranchList : public CLogicalEntity
{
public:

   enum class LogicBranchListenerLastState_t : std::uint32_t
   {
      LOGIC_BRANCH_LISTENER_NOT_INIT = 0,
      LOGIC_BRANCH_LISTENER_ALL_TRUE = 1,
      LOGIC_BRANCH_LISTENER_ALL_FALSE = 2,
      LOGIC_BRANCH_LISTENER_MIXED = 3
   };

   CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4A0 - 0x520
   CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x520 - 0x538
   CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x538 - 0x53C
   unsigned char pad_53C[0x4] // 0x53C - 0x540
   CEntityIOOutput m_OnAllTrue; // 0x540 - 0x568
   CEntityIOOutput m_OnAllFalse; // 0x568 - 0x590
   CEntityIOOutput m_OnMixed; // 0x590 - 0x5B8

}; // size - 0x5B8


class CLogicCase : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_nCase[32]; // 0x4A0 - 0x5A0
   int32_t m_nShuffleCases; // 0x5A0 - 0x5A4
   int32_t m_nLastShuffleCase; // 0x5A4 - 0x5A8
   uint8 m_uchShuffleCaseMap[32]; // 0x5A8 - 0x5C8
   CEntityIOOutput m_OnCase[32]; // 0x5C8 - 0xAC8
   CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > > m_OnDefault; // 0xAC8 - 0xAF0

}; // size - 0xAF0


class CLogicCollisionPair : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_nameAttach1; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_nameAttach2; // 0x4A8 - 0x4B0
   bool m_disabled; // 0x4B0 - 0x4B1
   bool m_succeeded; // 0x4B1 - 0x4B2

}; // size - 0x4B8


class CLogicCompare : public CLogicalEntity
{
public:

   float m_flInValue; // 0x4A0 - 0x4A4
   float m_flCompareValue; // 0x4A4 - 0x4A8
   CEntityOutputTemplate< float32 > m_OnLessThan; // 0x4A8 - 0x4D0
   CEntityOutputTemplate< float32 > m_OnEqualTo; // 0x4D0 - 0x4F8
   CEntityOutputTemplate< float32 > m_OnNotEqualTo; // 0x4F8 - 0x520
   CEntityOutputTemplate< float32 > m_OnGreaterThan; // 0x520 - 0x548

}; // size - 0x548


class CLogicDistanceAutosave : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_iszTargetEntity; // 0x4A0 - 0x4A8
   float m_flDistanceToPlayer; // 0x4A8 - 0x4AC
   bool m_bForceNewLevelUnit; // 0x4AC - 0x4AD
   bool m_bCheckCough; // 0x4AD - 0x4AE
   bool m_bThinkDangerous; // 0x4AE - 0x4AF
   unsigned char pad_4AF[0x1] // 0x4AF - 0x4B0
   float m_flDangerousTime; // 0x4B0 - 0x4B4

}; // size - 0x4B8


class CLogicDistanceCheck : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_iszEntityA; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_iszEntityB; // 0x4A8 - 0x4B0
   float m_flZone1Distance; // 0x4B0 - 0x4B4
   float m_flZone2Distance; // 0x4B4 - 0x4B8
   CEntityIOOutput m_InZone1; // 0x4B8 - 0x4E0
   CEntityIOOutput m_InZone2; // 0x4E0 - 0x508
   CEntityIOOutput m_InZone3; // 0x508 - 0x530

}; // size - 0x530


class CLogicEventListener : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_iszEventName; // 0x4B0 - 0x4B8
   bool m_bIsEnabled; // 0x4B8 - 0x4B9
   unsigned char pad_4B9[0x3] // 0x4B9 - 0x4BC
   int32_t m_nTeam; // 0x4BC - 0x4C0
   bool m_bFetchEventData; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x7] // 0x4C1 - 0x4C8
   CEntityIOOutput m_OnEventFired; // 0x4C8 - 0x4F0

}; // size - 0x4F0


class CLogicGameEvent : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_iszEventName; // 0x4A0 - 0x4A8

}; // size - 0x4A8


class CLogicGameEventListener : public CLogicalEntity
{
public:

   CEntityIOOutput m_OnEventFired; // 0x4B0 - 0x4D8
   CUtlSymbolLarge m_iszGameEventName; // 0x4D8 - 0x4E0
   CUtlSymbolLarge m_iszGameEventItem; // 0x4E0 - 0x4E8
   bool m_bEnabled; // 0x4E8 - 0x4E9
   bool m_bStartDisabled; // 0x4E9 - 0x4EA

}; // size - 0x4F0


class CLogicLineToEntity : public CLogicalEntity
{
public:

   CEntityOutputTemplate< Vector > m_Line; // 0x4A0 - 0x4C8
   CUtlSymbolLarge m_SourceName; // 0x4C8 - 0x4D0
   CHandle< CBaseEntity > m_StartEntity; // 0x4D0 - 0x4D4
   CHandle< CBaseEntity > m_EndEntity; // 0x4D4 - 0x4D8

}; // size - 0x4D8


class CLogicMeasureMovement : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_strMeasureTarget; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_strMeasureReference; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_strTargetReference; // 0x4B0 - 0x4B8
   CHandle< CBaseEntity > m_hMeasureTarget; // 0x4B8 - 0x4BC
   CHandle< CBaseEntity > m_hMeasureReference; // 0x4BC - 0x4C0
   CHandle< CBaseEntity > m_hTarget; // 0x4C0 - 0x4C4
   CHandle< CBaseEntity > m_hTargetReference; // 0x4C4 - 0x4C8
   float m_flScale; // 0x4C8 - 0x4CC
   int32_t m_nMeasureType; // 0x4CC - 0x4D0

}; // size - 0x4D0


class CLogicNPCCounterOBB : public CLogicNPCCounterAABB
{
public:


}; // size - 0x810


class CLogicNavigation : public CLogicalEntity
{
public:

   bool m_isOn; // 0x4A8 - 0x4A9
   unsigned char pad_4A9[0x3] // 0x4A9 - 0x4AC
   navproperties_t m_navProperty; // 0x4AC - 0x4B0

}; // size - 0x4B0


class CLogicPlayerProxy : public CLogicalEntity
{
public:

   CHandle< CBaseEntity > m_hPlayer; // 0x4A0 - 0x4A4
   unsigned char pad_4A4[0x4] // 0x4A4 - 0x4A8
   CEntityIOOutput m_PlayerHasAmmo; // 0x4A8 - 0x4D0
   CEntityIOOutput m_PlayerHasNoAmmo; // 0x4D0 - 0x4F8
   CEntityIOOutput m_PlayerDied; // 0x4F8 - 0x520
   CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // 0x520 - 0x548

}; // size - 0x548


class CLogicProximity : public CPointEntity
{
public:


}; // size - 0x4A0


class CLogicRelay : public CLogicalEntity
{
public:

   CEntityIOOutput m_OnTrigger; // 0x4A0 - 0x4C8
   CEntityIOOutput m_OnSpawn; // 0x4C8 - 0x4F0
   bool m_bDisabled; // 0x4F0 - 0x4F1
   bool m_bWaitForRefire; // 0x4F1 - 0x4F2
   bool m_bTriggerOnce; // 0x4F2 - 0x4F3
   bool m_bFastRetrigger; // 0x4F3 - 0x4F4
   bool m_bPassthoughCaller; // 0x4F4 - 0x4F5

}; // size - 0x4F8


class CLogicRelay : public CLogicalEntity
{
public:

   CEntityIOOutput m_OnTrigger; // 0x538 - 0x560
   CEntityIOOutput m_OnSpawn; // 0x560 - 0x588
   bool m_bDisabled; // 0x588 - 0x589
   bool m_bWaitForRefire; // 0x589 - 0x58A
   bool m_bTriggerOnce; // 0x58A - 0x58B
   bool m_bFastRetrigger; // 0x58B - 0x58C
   bool m_bPassthoughCaller; // 0x58C - 0x58D

}; // size - 0x590


class CLogicScript : public CPointEntity
{
public:


}; // size - 0x4A0


class CLookAtAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   AnimVectorSource m_target; // 0x40 - 0x44
   AnimParamID m_param; // 0x44 - 0x48
   bool m_bIsPosition; // 0x48 - 0x49
   unsigned char pad_49[0x3] // 0x49 - 0x4C
   AnimParamID m_weightParam; // 0x4C - 0x50
   CUtlString m_lookatChainName; // 0x50 - 0x58
   CUtlString m_attachmentName; // 0x58 - 0x60
   bool m_bRotateYawForward; // 0x60 - 0x61
   unsigned char pad_61[0x3] // 0x61 - 0x64
   float m_flYawLimit; // 0x64 - 0x68
   float m_flPitchLimit; // 0x68 - 0x6C
   bool m_bMaintainUpDirection; // 0x6C - 0x6D
   bool m_bResetBase; // 0x6D - 0x6E
   bool m_bLockWhenWaning; // 0x6E - 0x6F
   bool m_bUseHysteresis; // 0x6F - 0x70
   float m_flHysteresisInnerAngle; // 0x70 - 0x74
   float m_flHysteresisOuterAngle; // 0x74 - 0x78
   CAnimInputDamping m_damping; // 0x78 - 0x88

}; // size - 0x88


class CLookAtUpdateNode : public CUnaryUpdateNode
{
public:

   LookAtOpFixedSettings_t m_opFixedSettings; // 0x70 - 0x130
   unsigned char pad_130[0x8] // 0x130 - 0x138
   AnimVectorSource m_target; // 0x138 - 0x13C
   CAnimParamHandle m_paramIndex; // 0x13C - 0x13E
   CAnimParamHandle m_weightParamIndex; // 0x13E - 0x140
   bool m_bResetChild; // 0x140 - 0x141
   bool m_bLockWhenWaning; // 0x141 - 0x142

}; // size - 0x150


class CLookComponent : public CAnimComponentBase
{
public:

   bool m_bNetworkLookTarget; // 0x40 - 0x41
   unsigned char pad_41[0x3] // 0x41 - 0x44
   AnimParamID m_lookHeadingID; // 0x44 - 0x48
   AnimParamID m_lookHeadingVelocityID; // 0x48 - 0x4C
   AnimParamID m_lookPitchID; // 0x4C - 0x50
   AnimParamID m_lookDirectionID; // 0x50 - 0x54
   AnimParamID m_lookTargetID; // 0x54 - 0x58
   AnimParamID m_lookTargetWorldSpaceID; // 0x58 - 0x5C

}; // size - 0x60


class CLookComponentUpdater : public CAnimComponentUpdater
{
public:

   CAnimParamHandle m_hLookHeading; // 0x34 - 0x36
   CAnimParamHandle m_hLookHeadingVelocity; // 0x36 - 0x38
   CAnimParamHandle m_hLookPitch; // 0x38 - 0x3A
   CAnimParamHandle m_hLookDirection; // 0x3A - 0x3C
   CAnimParamHandle m_hLookTarget; // 0x3C - 0x3E
   CAnimParamHandle m_hLookTargetWorldSpace; // 0x3E - 0x40
   bool m_bNetworkLookTarget; // 0x40 - 0x41

}; // size - 0x48


class CMapInfo : public CPointEntity
{
public:

   int32_t m_iBuyingStatus; // 0x4A0 - 0x4A4
   float m_flBombRadius; // 0x4A4 - 0x4A8
   int32_t m_iPetPopulation; // 0x4A8 - 0x4AC
   bool m_bUseNormalSpawnsForDM; // 0x4AC - 0x4AD
   bool m_bDisableAutoGeneratedDMSpawns; // 0x4AD - 0x4AE
   unsigned char pad_4AE[0x2] // 0x4AE - 0x4B0
   float m_flBotMaxVisionDistance; // 0x4B0 - 0x4B4
   int32_t m_iHostageCount; // 0x4B4 - 0x4B8
   bool m_bFadePlayerVisibilityFarZ; // 0x4B8 - 0x4B9

}; // size - 0x4C0


class CMapVetoPickController : public CBaseEntity
{
public:

   bool m_bPlayedIntroVcd; // 0x4A0 - 0x4A1
   bool m_bNeedToPlayFiveSecondsRemaining; // 0x4A1 - 0x4A2
   unsigned char pad_4A2[0x1E] // 0x4A2 - 0x4C0
   int32_t m_nDraftType; // 0x4C0 - 0x4C4
   int32_t m_nTeamWinningCoinToss; // 0x4C4 - 0x4C8
   int32 m_nTeamWithFirstChoice[64]; // 0x4C8 - 0x5C8
   int32 m_nVoteMapIdsList[7]; // 0x5C8 - 0x5E4
   int32 m_nAccountIDs[64]; // 0x5E4 - 0x6E4
   int32 m_nMapId0[64]; // 0x6E4 - 0x7E4
   int32 m_nMapId1[64]; // 0x7E4 - 0x8E4
   int32 m_nMapId2[64]; // 0x8E4 - 0x9E4
   int32 m_nMapId3[64]; // 0x9E4 - 0xAE4
   int32 m_nMapId4[64]; // 0xAE4 - 0xBE4
   int32 m_nMapId5[64]; // 0xBE4 - 0xCE4
   int32 m_nStartingSide0[64]; // 0xCE4 - 0xDE4
   int32_t m_nCurrentPhase; // 0xDE4 - 0xDE8
   int32_t m_nPhaseStartTick; // 0xDE8 - 0xDEC
   int32_t m_nPhaseDurationTicks; // 0xDEC - 0xDF0
   CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapVetoed; // 0xDF0 - 0xE18
   CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapPicked; // 0xE18 - 0xE40
   CEntityOutputTemplate< int32 > m_OnSidesPicked; // 0xE40 - 0xE68
   CEntityOutputTemplate< int32 > m_OnNewPhaseStarted; // 0xE68 - 0xE90
   CEntityOutputTemplate< int32 > m_OnLevelTransition; // 0xE90 - 0xEB8

}; // size - 0xEB8


class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged
{
public:


}; // size - 0x730


class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef
{
public:

   bool m_bFloodFillAttribute; // 0x748 - 0x749

}; // size - 0x750


class CMaterialAttributeAnimTag : public CAnimTagBase
{
public:

   CUtlString m_AttributeName; // 0x40 - 0x48
   MatterialAttributeTagType_t m_AttributeType; // 0x48 - 0x4C
   float m_flValue; // 0x4C - 0x50
   Color m_Color; // 0x50 - 0x54

}; // size - 0x58


class CMaterialDrawDescriptor
{
public:

   RenderPrimitiveType_t m_nPrimitiveType; // 0x0 - 0x4
   int32_t m_nBaseVertex; // 0x4 - 0x8
   int32_t m_nVertexCount; // 0x8 - 0xC
   int32_t m_nStartIndex; // 0xC - 0x10
   int32_t m_nIndexCount; // 0x10 - 0x14
   float m_flUvDensity; // 0x14 - 0x18
   Vector m_vTintColor; // 0x18 - 0x24
   float m_flAlpha; // 0x24 - 0x28
   unsigned char pad_28[0x4] // 0x28 - 0x2C
   uint32_t m_nFirstMeshlet; // 0x2C - 0x30
   uint16_t m_nNumMeshlets; // 0x30 - 0x32
   unsigned char pad_32[0x86] // 0x32 - 0xB8
   CRenderBufferBinding m_indexBuffer; // 0xB8 - 0xD0
   unsigned char pad_D0[0x10] // 0xD0 - 0xE0
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xE0 - 0xE8

}; // size - 0xE8


class CMathColorBlend : public CLogicalEntity
{
public:

   float m_flInMin; // 0x4A0 - 0x4A4
   float m_flInMax; // 0x4A4 - 0x4A8
   Color m_OutColor1; // 0x4A8 - 0x4AC
   Color m_OutColor2; // 0x4AC - 0x4B0
   CEntityOutputTemplate< Color > m_OutValue; // 0x4B0 - 0x4D8

}; // size - 0x4D8


class CMathCounter : public CLogicalEntity
{
public:

   float m_flMin; // 0x4A0 - 0x4A4
   float m_flMax; // 0x4A4 - 0x4A8
   bool m_bHitMin; // 0x4A8 - 0x4A9
   bool m_bHitMax; // 0x4A9 - 0x4AA
   bool m_bDisabled; // 0x4AA - 0x4AB
   unsigned char pad_4AB[0x5] // 0x4AB - 0x4B0
   CEntityOutputTemplate< float32 > m_OutValue; // 0x4B0 - 0x4D8
   CEntityOutputTemplate< float32 > m_OnGetValue; // 0x4D8 - 0x500
   CEntityIOOutput m_OnHitMin; // 0x500 - 0x528
   CEntityIOOutput m_OnHitMax; // 0x528 - 0x550
   CEntityIOOutput m_OnChangedFromMin; // 0x550 - 0x578
   CEntityIOOutput m_OnChangedFromMax; // 0x578 - 0x5A0

}; // size - 0x5A0


class CMathRemap : public CLogicalEntity
{
public:

   float m_flInMin; // 0x4A0 - 0x4A4
   float m_flInMax; // 0x4A4 - 0x4A8
   float m_flOut1; // 0x4A8 - 0x4AC
   float m_flOut2; // 0x4AC - 0x4B0
   float m_flOldInValue; // 0x4B0 - 0x4B4
   bool m_bEnabled; // 0x4B4 - 0x4B5
   unsigned char pad_4B5[0x3] // 0x4B5 - 0x4B8
   CEntityOutputTemplate< float32 > m_OutValue; // 0x4B8 - 0x4E0
   CEntityIOOutput m_OnRoseAboveMin; // 0x4E0 - 0x508
   CEntityIOOutput m_OnRoseAboveMax; // 0x508 - 0x530
   CEntityIOOutput m_OnFellBelowMin; // 0x530 - 0x558
   CEntityIOOutput m_OnFellBelowMax; // 0x558 - 0x580

}; // size - 0x580


class CMelee : public CWeaponCSBase
{
public:

   GameTime_t m_flThrowAt; // 0xD50 - 0xD54
   CHandle< CBaseEntity > m_hThrower; // 0xD54 - 0xD58
   bool m_bDidThrowDamage; // 0xD58 - 0xD59

}; // size - 0xD60


class CMeshletDescriptor
{
public:

   PackedAABB_t m_PackedAABB; // 0x0 - 0x8
   CDrawCullingData m_CullingData; // 0x8 - 0x18

}; // size - 0x18


class CMessage : public CPointEntity
{
public:

   CUtlSymbolLarge m_iszMessage; // 0x4A0 - 0x4A8
   float m_MessageVolume; // 0x4A8 - 0x4AC
   int32_t m_MessageAttenuation; // 0x4AC - 0x4B0
   float m_Radius; // 0x4B0 - 0x4B4
   unsigned char pad_4B4[0x4] // 0x4B4 - 0x4B8
   CUtlSymbolLarge m_sNoise; // 0x4B8 - 0x4C0
   CEntityIOOutput m_OnShowMessage; // 0x4C0 - 0x4E8

}; // size - 0x4E8


class CMessageEntity : public CPointEntity
{
public:

   int32_t m_radius; // 0x4A0 - 0x4A4
   unsigned char pad_4A4[0x4] // 0x4A4 - 0x4A8
   CUtlSymbolLarge m_messageText; // 0x4A8 - 0x4B0
   bool m_drawText; // 0x4B0 - 0x4B1
   bool m_bDeveloperOnly; // 0x4B1 - 0x4B2
   bool m_bEnabled; // 0x4B2 - 0x4B3

}; // size - 0x4B8


class CModelConfig
{
public:

   CUtlString m_ConfigName; // 0x0 - 0x8
   CUtlVector< CModelConfigElement* > m_Elements; // 0x8 - 0x20
   bool m_bTopLevel; // 0x20 - 0x21

}; // size - 0x28


class CModelConfigElement_AttachedModel : public CModelConfigElement
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

}; // size - 0xE8


class CModelConfigElement_Command : public CModelConfigElement
{
public:

   CUtlString m_Command; // 0x48 - 0x50
   KeyValues3 m_Args; // 0x50 - 0x60

}; // size - 0x60


class CModelConfigElement_RandomColor : public CModelConfigElement
{
public:

   CColorGradient m_Gradient; // 0x48 - 0x60

}; // size - 0x60


class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:

   CUtlVector< CUtlString > m_Choices; // 0x48 - 0x60

}; // size - 0x60


class CModelConfigElement_SetBodygroup : public CModelConfigElement
{
public:

   CUtlString m_GroupName; // 0x48 - 0x50
   int32_t m_nChoice; // 0x50 - 0x54

}; // size - 0x58


class CModelConfigElement_SetBodygroupOnAttachedModels : public CModelConfigElement
{
public:

   CUtlString m_GroupName; // 0x48 - 0x50
   int32_t m_nChoice; // 0x50 - 0x54

}; // size - 0x58


class CModelConfigElement_SetMaterialGroup : public CModelConfigElement
{
public:

   CUtlString m_MaterialGroupName; // 0x48 - 0x50

}; // size - 0x50


class CModelConfigElement_SetMaterialGroupOnAttachedModels : public CModelConfigElement
{
public:

   CUtlString m_MaterialGroupName; // 0x48 - 0x50

}; // size - 0x50


class CModelConfigElement_SetRenderColor : public CModelConfigElement
{
public:

   Color m_Color; // 0x48 - 0x4C

}; // size - 0x50


class CModelConfigElement_UserPick : public CModelConfigElement
{
public:

   CUtlVector< CUtlString > m_Choices; // 0x48 - 0x60

}; // size - 0x60


class CModelConfigList
{
public:

   bool m_bHideMaterialGroupInTools; // 0x0 - 0x1
   bool m_bHideRenderColorInTools; // 0x1 - 0x2
   unsigned char pad_2[0x6] // 0x2 - 0x8
   CUtlVector< CModelConfig* > m_Configs; // 0x8 - 0x20

}; // size - 0x20


class CModelState
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xA0 - 0xA8
   CUtlSymbolLarge m_ModelName; // 0xA8 - 0xB0
   unsigned char pad_B0[0x38] // 0xB0 - 0xE8
   bool m_bClientClothCreationSuppressed; // 0xE8 - 0xE9
   unsigned char pad_E9[0x97] // 0xE9 - 0x180
   uint64_t m_MeshGroupMask; // 0x180 - 0x188
   unsigned char pad_188[0x9A] // 0x188 - 0x222
   int8_t m_nIdealMotionType; // 0x222 - 0x223
   int8_t m_nForceLOD; // 0x223 - 0x224
   int8_t m_nClothUpdateFlags; // 0x224 - 0x225

}; // size - 0x230


class CModelState
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xA0 - 0xA8
   CUtlSymbolLarge m_ModelName; // 0xA8 - 0xB0
   unsigned char pad_B0[0x38] // 0xB0 - 0xE8
   bool m_bClientClothCreationSuppressed; // 0xE8 - 0xE9
   unsigned char pad_E9[0x97] // 0xE9 - 0x180
   uint64_t m_MeshGroupMask; // 0x180 - 0x188
   unsigned char pad_188[0x9A] // 0x188 - 0x222
   int8_t m_nIdealMotionType; // 0x222 - 0x223
   int8_t m_nForceLOD; // 0x223 - 0x224
   int8_t m_nClothUpdateFlags; // 0x224 - 0x225

}; // size - 0x230


class CMolotovProjectile : public CBaseCSGrenadeProjectile
{
public:

   bool m_bIsIncGrenade; // 0x9A0 - 0x9A1
   unsigned char pad_9A1[0xB] // 0x9A1 - 0x9AC
   bool m_bDetonated; // 0x9AC - 0x9AD
   unsigned char pad_9AD[0x3] // 0x9AD - 0x9B0
   IntervalTimer m_stillTimer; // 0x9B0 - 0x9C0
   unsigned char pad_9C0[0xD0] // 0x9C0 - 0xA90
   bool m_bHasBouncedOffPlayer; // 0xA90 - 0xA91

}; // size - 0xA98


class CMomentaryRotButton : public CRotButton
{
public:

   CEntityOutputTemplate< float32 > m_Position; // 0x8B8 - 0x8E0
   CEntityIOOutput m_OnUnpressed; // 0x8E0 - 0x908
   CEntityIOOutput m_OnFullyOpen; // 0x908 - 0x930
   CEntityIOOutput m_OnFullyClosed; // 0x930 - 0x958
   CEntityIOOutput m_OnReachedPosition; // 0x958 - 0x980
   int32_t m_lastUsed; // 0x980 - 0x984
   QAngle m_start; // 0x984 - 0x990
   QAngle m_end; // 0x990 - 0x99C
   float m_IdealYaw; // 0x99C - 0x9A0
   CUtlSymbolLarge m_sNoise; // 0x9A0 - 0x9A8
   bool m_bUpdateTarget; // 0x9A8 - 0x9A9
   unsigned char pad_9A9[0x3] // 0x9A9 - 0x9AC
   int32_t m_direction; // 0x9AC - 0x9B0
   float m_returnSpeed; // 0x9B0 - 0x9B4
   float m_flStartPosition; // 0x9B4 - 0x9B8

}; // size - 0x9B8


class CMoodVData
{
public:

   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x0 - 0xE0
   MoodType_t m_nMoodType; // 0xE0 - 0xE4
   unsigned char pad_E4[0x4] // 0xE4 - 0xE8
   CUtlVector< MoodAnimationLayer_t > m_animationLayers; // 0xE8 - 0x100

}; // size - 0x100


class CMorphBundleData
{
public:

   float m_flULeftSrc; // 0x0 - 0x4
   float m_flVTopSrc; // 0x4 - 0x8
   CUtlVector< float32 > m_offsets; // 0x8 - 0x20
   CUtlVector< float32 > m_ranges; // 0x20 - 0x38

}; // size - 0x38


class CMorphConstraint : public CBaseConstraint
{
public:

   CUtlString m_sTargetMorph; // 0x70 - 0x78
   int32_t m_nSlaveChannel; // 0x78 - 0x7C
   float m_flMin; // 0x7C - 0x80
   float m_flMax; // 0x80 - 0x84

}; // size - 0x90


class CMorphData
{
public:

   CUtlString m_name; // 0x0 - 0x8
   CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8 - 0x20

}; // size - 0x20


class CMorphRectData
{
public:

   int16_t m_nXLeftDst; // 0x0 - 0x2
   int16_t m_nYTopDst; // 0x2 - 0x4
   float m_flUWidthSrc; // 0x4 - 0x8
   float m_flVHeightSrc; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< CMorphBundleData > m_bundleDatas; // 0x10 - 0x28

}; // size - 0x28


class CMorphSetData
{
public:

   int32_t m_nWidth; // 0x10 - 0x14
   int32_t m_nHeight; // 0x14 - 0x18
   CUtlVector< MorphBundleType_t > m_bundleTypes; // 0x18 - 0x30
   CUtlVector< CMorphData > m_morphDatas; // 0x30 - 0x48
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas; // 0x48 - 0x50
   CUtlVector< CFlexDesc > m_FlexDesc; // 0x50 - 0x68
   CUtlVector< CFlexController > m_FlexControllers; // 0x68 - 0x80
   CUtlVector< CFlexRule > m_FlexRules; // 0x80 - 0x98

}; // size - 0x98


class CMotionDataSet
{
public:

   CUtlVector< CMotionGraphGroup > m_groups; // 0x0 - 0x18
   int32_t m_nDimensionCount; // 0x18 - 0x1C

}; // size - 0x20


class CMotionGraphConfig
{
public:

   float32 m_paramValues[4]; // 0x0 - 0x10
   float m_flDuration; // 0x10 - 0x14
   MotionIndex m_nMotionIndex; // 0x14 - 0x18
   int32_t m_nSampleStart; // 0x18 - 0x1C
   int32_t m_nSampleCount; // 0x1C - 0x20

}; // size - 0x20


class CMotionGraphGroup
{
public:

   CMotionSearchDB m_searchDB; // 0x0 - 0xB8
   CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs; // 0xB8 - 0xD0
   CUtlVector< CMotionGraphConfig > m_motionGraphConfigs; // 0xD0 - 0xE8
   CUtlVector< int32 > m_sampleToConfig; // 0xE8 - 0x100
   AnimScriptHandle m_hIsActiveScript; // 0x100 - 0x104

}; // size - 0x108


class CMotionItemGroup
{
public:

   CUtlVector< CSmartPtr< CMotionItem > > m_motions; // 0x20 - 0x38
   CUtlString m_name; // 0x38 - 0x40
   CConditionContainer m_conditions; // 0x40 - 0x78

}; // size - 0x78


class CMotionMatchingAnimNode : public CAnimNodeBase
{
public:

   CUtlVector< CSmartPtr< CMotionItemGroup > > m_groups; // 0x48 - 0x60
   CUtlVector< CSmartPtr< CMotionMetricBase > > m_metrics; // 0x60 - 0x78
   CBlendCurve m_blendCurve; // 0x78 - 0x80
   int32_t m_nRandomSeed; // 0x80 - 0x84
   float m_flSampleRate; // 0x84 - 0x88
   bool m_bSearchEveryTick; // 0x88 - 0x89
   unsigned char pad_89[0x3] // 0x89 - 0x8C
   float m_flSearchInterval; // 0x8C - 0x90
   bool m_bSearchWhenMotionEnds; // 0x90 - 0x91
   bool m_bSearchWhenGoalChanges; // 0x91 - 0x92
   unsigned char pad_92[0x2] // 0x92 - 0x94
   float m_flBlendTime; // 0x94 - 0x98
   float m_flSelectionThreshold; // 0x98 - 0x9C
   float m_flReselectionTimeWindow; // 0x9C - 0xA0
   bool m_bLockSelectionWhenWaning; // 0xA0 - 0xA1
   bool m_bEnableRotationCorrection; // 0xA1 - 0xA2
   bool m_bGoalAssist; // 0xA2 - 0xA3
   unsigned char pad_A3[0x1] // 0xA3 - 0xA4
   float m_flGoalAssistDistance; // 0xA4 - 0xA8
   float m_flGoalAssistTolerance; // 0xA8 - 0xAC
   bool m_bEnableDistanceScaling; // 0xAC - 0xAD
   unsigned char pad_AD[0x3] // 0xAD - 0xB0
   float m_flDistanceScale_OuterRadius; // 0xB0 - 0xB4
   float m_flDistanceScale_InnerRadius; // 0xB4 - 0xB8
   float m_flDistanceScale_MaxScale; // 0xB8 - 0xBC
   float m_flDistanceScale_MinScale; // 0xBC - 0xC0
   CAnimInputDamping m_distanceScale_Damping; // 0xC0 - 0xD0

}; // size - 0xD0


class CMotionMatchingUpdateNode : public CLeafUpdateNode
{
public:

   CMotionDataSet m_dataSet; // 0x58 - 0x78
   CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics; // 0x78 - 0x90
   CUtlVector< float32 > m_weights; // 0x90 - 0xA8
   unsigned char pad_A8[0x38] // 0xA8 - 0xE0
   bool m_bSearchEveryTick; // 0xE0 - 0xE1
   unsigned char pad_E1[0x3] // 0xE1 - 0xE4
   float m_flSearchInterval; // 0xE4 - 0xE8
   bool m_bSearchWhenClipEnds; // 0xE8 - 0xE9
   bool m_bSearchWhenGoalChanges; // 0xE9 - 0xEA
   unsigned char pad_EA[0x2] // 0xEA - 0xEC
   CBlendCurve m_blendCurve; // 0xEC - 0xF4
   float m_flSampleRate; // 0xF4 - 0xF8
   float m_flBlendTime; // 0xF8 - 0xFC
   bool m_bLockClipWhenWaning; // 0xFC - 0xFD
   unsigned char pad_FD[0x3] // 0xFD - 0x100
   float m_flSelectionThreshold; // 0x100 - 0x104
   float m_flReselectionTimeWindow; // 0x104 - 0x108
   bool m_bEnableRotationCorrection; // 0x108 - 0x109
   bool m_bGoalAssist; // 0x109 - 0x10A
   unsigned char pad_10A[0x2] // 0x10A - 0x10C
   float m_flGoalAssistDistance; // 0x10C - 0x110
   float m_flGoalAssistTolerance; // 0x110 - 0x114
   unsigned char pad_114[0x4] // 0x114 - 0x118
   CAnimInputDamping m_distanceScale_Damping; // 0x118 - 0x128
   float m_flDistanceScale_OuterRadius; // 0x128 - 0x12C
   float m_flDistanceScale_InnerRadius; // 0x12C - 0x130
   float m_flDistanceScale_MaxScale; // 0x130 - 0x134
   float m_flDistanceScale_MinScale; // 0x134 - 0x138
   bool m_bEnableDistanceScaling; // 0x138 - 0x139

}; // size - 0x140


class CMotionNodeBlend1D : public CMotionNode
{
public:

   CUtlVector< MotionBlendItem > m_blendItems; // 0x28 - 0x40
   int32_t m_nParamIndex; // 0x40 - 0x44

}; // size - 0x48


class CMotionNodeManager : public CAnimNodeManager
{
public:


}; // size - 0x50


class CMotionNodeSequence : public CMotionNode
{
public:

   CUtlVector< TagSpan_t > m_tags; // 0x28 - 0x40
   HSequence m_hSequence; // 0x40 - 0x44
   float m_flPlaybackSpeed; // 0x44 - 0x48

}; // size - 0x48


class CMotionParameter
{
public:

   CUtlString m_name; // 0x18 - 0x20
   AnimParamID m_id; // 0x20 - 0x24
   float m_flMinValue; // 0x24 - 0x28
   float m_flMaxValue; // 0x28 - 0x2C
   int32_t m_nSamples; // 0x2C - 0x30

}; // size - 0x30


class CMotionParameterManager
{
public:

   CUtlVector< CSmartPtr< CMotionParameter > > m_params; // 0x10 - 0x28

}; // size - 0x28


class CMotionSearchDB
{
public:

   CMotionSearchNode m_rootNode; // 0x0 - 0x80
   CProductQuantizer m_residualQuantizer; // 0x80 - 0xA0
   CUtlVector< MotionDBIndex > m_codeIndices; // 0xA0 - 0xB8

}; // size - 0xB8


class CMotionSearchNode
{
public:

   CUtlVector< CMotionSearchNode* > m_children; // 0x0 - 0x18
   CVectorQuantizer m_quantizer; // 0x18 - 0x38
   CUtlVector< CUtlVector< SampleCode > > m_sampleCodes; // 0x38 - 0x50
   CUtlVector< CUtlVector< int32 > > m_sampleIndices; // 0x50 - 0x68
   CUtlVector< int32 > m_selectableSamples; // 0x68 - 0x80

}; // size - 0x80


class CMotorController
{
public:

   float m_speed; // 0x8 - 0xC
   float m_maxTorque; // 0xC - 0x10
   Vector m_axis; // 0x10 - 0x1C
   float m_inertiaFactor; // 0x1C - 0x20

}; // size - 0x20


class CMovementComponent : public CAnimComponentBase
{
public:

   CUtlVector< CMovementMode > m_moveModes; // 0x40 - 0x58
   CUtlVector< CSmartPtr< CAnimMotorBase > > m_motors; // 0x58 - 0x70
   bool m_bNetworkPath; // 0x70 - 0x71
   unsigned char pad_71[0x3] // 0x71 - 0x74
   FacingMode m_eDefaultFacingMode; // 0x74 - 0x78
   CAnimInputDamping m_facingDamping; // 0x78 - 0x88
   bool m_bNetworkFacing; // 0x88 - 0x89
   unsigned char pad_89[0x3] // 0x89 - 0x8C
   AnimParamID m_paramIDs[30]; // 0x8C - 0x104

}; // size - 0x108


class CMovementComponentUpdater : public CAnimComponentUpdater
{
public:

   CUtlVector< CMovementMode > m_movementModes; // 0x30 - 0x48
   CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // 0x48 - 0x60
   CAnimInputDamping m_facingDamping; // 0x60 - 0x70
   FacingMode m_eDefaultFacingMode; // 0x70 - 0x74
   unsigned char pad_74[0x8] // 0x74 - 0x7C
   int32_t m_nDefaultMotorIndex; // 0x7C - 0x80
   bool m_bMoveVarsDisabled; // 0x80 - 0x81
   bool m_bNetworkPath; // 0x81 - 0x82
   bool m_bNetworkFacing; // 0x82 - 0x83
   CAnimParamHandle m_paramHandles[30]; // 0x83 - 0xBF

}; // size - 0xC0


class CMovementMode
{
public:

   CUtlString m_name; // 0x0 - 0x8
   float m_flSpeed; // 0x8 - 0xC

}; // size - 0x10


class CMoverAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   bool m_bApplyMovement; // 0x40 - 0x41
   unsigned char pad_41[0x3] // 0x41 - 0x44
   AnimParamID m_moveVectorParam; // 0x44 - 0x48
   bool m_bOrientMovement; // 0x48 - 0x49
   unsigned char pad_49[0x3] // 0x49 - 0x4C
   AnimParamID m_moveHeadingParam; // 0x4C - 0x50
   bool m_bAdditive; // 0x50 - 0x51
   bool m_bTurnToFace; // 0x51 - 0x52
   unsigned char pad_52[0x2] // 0x52 - 0x54
   AnimValueSource m_facingTarget; // 0x54 - 0x58
   AnimParamID m_param; // 0x58 - 0x5C
   bool m_bLimitOnly; // 0x5C - 0x5D
   unsigned char pad_5D[0x3] // 0x5D - 0x60
   float m_flTurnToFaceOffset; // 0x60 - 0x64
   float m_flTurnToFaceLimit; // 0x64 - 0x68
   CAnimInputDamping m_damping; // 0x68 - 0x78

}; // size - 0x78


class CMoverUpdateNode : public CUnaryUpdateNode
{
public:

   CAnimInputDamping m_damping; // 0x70 - 0x80
   AnimValueSource m_facingTarget; // 0x80 - 0x84
   CAnimParamHandle m_hMoveVecParam; // 0x84 - 0x86
   CAnimParamHandle m_hMoveHeadingParam; // 0x86 - 0x88
   CAnimParamHandle m_hTurnToFaceParam; // 0x88 - 0x8A
   unsigned char pad_8A[0x2] // 0x8A - 0x8C
   float m_flTurnToFaceOffset; // 0x8C - 0x90
   float m_flTurnToFaceLimit; // 0x90 - 0x94
   bool m_bAdditive; // 0x94 - 0x95
   bool m_bApplyMovement; // 0x95 - 0x96
   bool m_bOrientMovement; // 0x96 - 0x97
   bool m_bApplyRotation; // 0x97 - 0x98
   bool m_bLimitOnly; // 0x98 - 0x99

}; // size - 0xA0


class CMultiLightProxy : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_iszLightNameFilter; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_iszLightClassFilter; // 0x4A8 - 0x4B0
   float m_flLightRadiusFilter; // 0x4B0 - 0x4B4
   float m_flBrightnessDelta; // 0x4B4 - 0x4B8
   bool m_bPerformScreenFade; // 0x4B8 - 0x4B9
   unsigned char pad_4B9[0x3] // 0x4B9 - 0x4BC
   float m_flTargetBrightnessMultiplier; // 0x4BC - 0x4C0
   float m_flCurrentBrightnessMultiplier; // 0x4C0 - 0x4C4
   unsigned char pad_4C4[0x4] // 0x4C4 - 0x4C8
   CUtlVector< CHandle< CLightEntity > > m_vecLights; // 0x4C8 - 0x4E0

}; // size - 0x4E0


class CMultiSource : public CLogicalEntity
{
public:

   CHandle< CBaseEntity > m_rgEntities[32]; // 0x4A0 - 0x520
   int32 m_rgTriggered[32]; // 0x520 - 0x5A0
   CEntityIOOutput m_OnTrigger; // 0x5A0 - 0x5C8
   int32_t m_iTotal; // 0x5C8 - 0x5CC
   unsigned char pad_5CC[0x4] // 0x5CC - 0x5D0
   CUtlSymbolLarge m_globalstate; // 0x5D0 - 0x5D8

}; // size - 0x5D8


class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup
{
public:

   bool m_bAllowMultipleScenes; // 0x70 - 0x71

}; // size - 0x78


class CNavLinkAnimgraphVar
{
public:

   CUtlString m_strAnimgraphVar; // 0x0 - 0x8
   uint32_t m_unAlignmentDegrees; // 0x8 - 0xC

}; // size - 0x10


class CNavLinkAreaEntity : public CPointEntity
{
public:

   float m_flWidth; // 0x4A0 - 0x4A4
   Vector m_vLocatorOffset; // 0x4A4 - 0x4B0
   QAngle m_qLocatorAnglesOffset; // 0x4B0 - 0x4BC
   unsigned char pad_4BC[0x4] // 0x4BC - 0x4C0
   CUtlSymbolLarge m_strMovementForward; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_strMovementReverse; // 0x4C8 - 0x4D0
   int32_t m_nNavLinkIdForward; // 0x4D0 - 0x4D4
   int32_t m_nNavLinkIdReverse; // 0x4D4 - 0x4D8
   bool m_bEnabled; // 0x4D8 - 0x4D9
   unsigned char pad_4D9[0x7] // 0x4D9 - 0x4E0
   CUtlSymbolLarge m_strFilterName; // 0x4E0 - 0x4E8
   CHandle< CBaseFilter > m_hFilter; // 0x4E8 - 0x4EC
   unsigned char pad_4EC[0x4] // 0x4EC - 0x4F0
   CEntityIOOutput m_OnNavLinkStart; // 0x4F0 - 0x518
   CEntityIOOutput m_OnNavLinkFinish; // 0x518 - 0x540

}; // size - 0x540


class CNavLinkMovementVData
{
public:

   bool m_bIsInterpolated; // 0x0 - 0x1
   unsigned char pad_1[0x3] // 0x1 - 0x4
   uint32_t m_unRecommendedDistance; // 0x4 - 0x8
   CUtlVector< CNavLinkAnimgraphVar > m_vecAnimgraphVars; // 0x8 - 0x20

}; // size - 0x20


class CNavSpaceInfo : public CPointEntity
{
public:

   bool m_bCreateTacticalConnections; // 0x4A0 - 0x4A1
   bool m_bCreateFlightSpace; // 0x4A1 - 0x4A2
   unsigned char pad_4A2[0x2] // 0x4A2 - 0x4A4
   float m_flPhysicsOverheadBufferDist; // 0x4A4 - 0x4A8

}; // size - 0x4A8


class CNavVolumeAll : public CNavVolumeVector
{
public:


}; // size - 0x98


class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector
{
public:

   Vector m_vStartPos; // 0xA0 - 0xAC
   float m_flSearchDist; // 0xAC - 0xB0

}; // size - 0xB8


class CNavVolumeMarkupVolume : public CNavVolume
{
public:


}; // size - 0xD8


class CNavVolumeSphericalShell : public CNavVolumeSphere
{
public:

   float m_flRadiusInner; // 0x80 - 0x84

}; // size - 0x88


class CNavWalkable : public CPointEntity
{
public:


}; // size - 0x4A0


class CNetworkOriginCellCoordQuantizedVector
{
public:

   uint16_t m_cellX; // 0x10 - 0x12
   uint16_t m_cellY; // 0x12 - 0x14
   uint16_t m_cellZ; // 0x14 - 0x16
   uint16_t m_nOutsideWorld; // 0x16 - 0x18
   CNetworkedQuantizedFloat m_vecX; // 0x18 - 0x20
   CNetworkedQuantizedFloat m_vecY; // 0x20 - 0x28
   CNetworkedQuantizedFloat m_vecZ; // 0x28 - 0x30

}; // size - 0x30


class CNetworkOriginQuantizedVector
{
public:

   CNetworkedQuantizedFloat m_vecX; // 0x10 - 0x18
   CNetworkedQuantizedFloat m_vecY; // 0x18 - 0x20
   CNetworkedQuantizedFloat m_vecZ; // 0x20 - 0x28

}; // size - 0x28


class CNetworkTransmitComponent
{
public:

   uint8_t m_nTransmitStateOwnedCounter; // 0x16C - 0x16D

}; // size - 0x1A0


class CNetworkVarChainer
{
public:

   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20 - 0x22

}; // size - 0x28


class CNetworkVelocityVector
{
public:

   CNetworkedQuantizedFloat m_vecX; // 0x10 - 0x18
   CNetworkedQuantizedFloat m_vecY; // 0x18 - 0x20
   CNetworkedQuantizedFloat m_vecZ; // 0x20 - 0x28

}; // size - 0x28


class CNetworkViewOffsetVector
{
public:

   CNetworkedQuantizedFloat m_vecX; // 0x10 - 0x18
   CNetworkedQuantizedFloat m_vecY; // 0x18 - 0x20
   CNetworkedQuantizedFloat m_vecZ; // 0x20 - 0x28

}; // size - 0x28


class CNetworkedSequenceOperation
{
public:

   HSequence m_hSequence; // 0x8 - 0xC
   float m_flPrevCycle; // 0xC - 0x10
   float m_flCycle; // 0x10 - 0x14
   CNetworkedQuantizedFloat m_flWeight; // 0x14 - 0x1C
   bool m_bSequenceChangeNetworked; // 0x1C - 0x1D
   bool m_bDiscontinuity; // 0x1D - 0x1E
   unsigned char pad_1E[0x2] // 0x1E - 0x20
   float m_flPrevCycleFromDiscontinuity; // 0x20 - 0x24
   float m_flPrevCycleForAnimEventDetection; // 0x24 - 0x28

}; // size - 0x28


class CNetworkedSequenceOperation
{
public:

   HSequence m_hSequence; // 0x8 - 0xC
   float m_flPrevCycle; // 0xC - 0x10
   float m_flCycle; // 0x10 - 0x14
   CNetworkedQuantizedFloat m_flWeight; // 0x14 - 0x1C
   bool m_bSequenceChangeNetworked; // 0x1C - 0x1D
   bool m_bDiscontinuity; // 0x1D - 0x1E
   unsigned char pad_1E[0x2] // 0x1E - 0x20
   float m_flPrevCycleFromDiscontinuity; // 0x20 - 0x24
   float m_flPrevCycleForAnimEventDetection; // 0x24 - 0x28

}; // size - 0x28


class CNewParticleEffect : public IParticleEffect
{
public:

   CNewParticleEffect* m_pNext; // 0x10 - 0x18
   CNewParticleEffect* m_pPrev; // 0x18 - 0x20
   IParticleCollection* m_pParticles; // 0x20 - 0x28
   char* m_pDebugName; // 0x28 - 0x30
   bitfield:1 m_bDontRemove; // 0x0 - 0x0
   bitfield:1 m_bRemove; // 0x0 - 0x0
   bitfield:1 m_bNeedsBBoxUpdate; // 0x0 - 0x0
   bitfield:1 m_bIsFirstFrame; // 0x0 - 0x0
   bitfield:1 m_bAutoUpdateBBox; // 0x0 - 0x0
   bitfield:1 m_bAllocated; // 0x0 - 0x0
   bitfield:1 m_bSimulate; // 0x0 - 0x0
   bitfield:1 m_bShouldPerformCullCheck; // 0x0 - 0x0
   bitfield:1 m_bForceNoDraw; // 0x0 - 0x0
   bitfield:1 m_bShouldSave; // 0x0 - 0x0
   bitfield:1 m_bDisableAggregation; // 0x0 - 0x0
   bitfield:1 m_bShouldSimulateDuringGamePaused; // 0x0 - 0x0
   bitfield:1 m_bShouldCheckFoW; // 0x0 - 0x0
   unsigned char pad_0[0x40] // 0x0 - 0x40
   Vector m_vSortOrigin; // 0x40 - 0x4C
   float m_flScale; // 0x4C - 0x50
   PARTICLE_EHANDLE__* m_hOwner; // 0x50 - 0x58
   CParticleProperty* m_pOwningParticleProperty; // 0x58 - 0x60
   unsigned char pad_60[0x10] // 0x60 - 0x70
   float m_flFreezeTransitionStart; // 0x70 - 0x74
   float m_flFreezeTransitionDuration; // 0x74 - 0x78
   float m_flFreezeTransitionOverride; // 0x78 - 0x7C
   bool m_bFreezeTransitionActive; // 0x7C - 0x7D
   bool m_bFreezeTargetState; // 0x7D - 0x7E
   bool m_bCanFreeze; // 0x7E - 0x7F
   unsigned char pad_7F[0x1] // 0x7F - 0x80
   Vector m_LastMin; // 0x80 - 0x8C
   Vector m_LastMax; // 0x8C - 0x98
   CSplitScreenSlot m_nSplitScreenUser; // 0x98 - 0x9C
   Vector m_vecAggregationCenter; // 0x9C - 0xA8
   unsigned char pad_A8[0x18] // 0xA8 - 0xC0
   int32_t m_RefCount; // 0xC0 - 0xC4

}; // size - 0xC8


class CNodeBlend2DItem : public CBlend2DItemBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   CUtlString m_name; // 0x40 - 0x48

}; // size - 0x48


class CNullEntity : public CBaseEntity
{
public:


}; // size - 0x4A0


class COmniLight : public CBarnLight
{
public:

   float m_flInnerAngle; // 0x918 - 0x91C
   float m_flOuterAngle; // 0x91C - 0x920
   bool m_bShowLight; // 0x920 - 0x921

}; // size - 0x928


class COrCondition : public CConditionBase
{
public:


}; // size - 0x60


class COrientConstraint : public CBaseConstraint
{
public:


}; // size - 0x70


class COrnamentProp : public CDynamicProp
{
public:

   CUtlSymbolLarge m_initialOwner; // 0xA98 - 0xAA0

}; // size - 0xAA0


class CParadropChopper : public CBaseAnimGraph
{
public:

   Vector m_vecDropPos; // 0x824 - 0x830
   float m_flLastDistFromDrop; // 0x830 - 0x834
   bool m_bDroppedParadrop; // 0x834 - 0x835
   unsigned char pad_835[0x3] // 0x835 - 0x838
   CSoundPatch* m_pSoundLoop; // 0x838 - 0x840
   float m_flSpawnTime; // 0x840 - 0x844
   float m_flFlightTime; // 0x844 - 0x848
   bool m_bPlayerIsFinishedRappelling; // 0x848 - 0x849
   unsigned char pad_849[0x3] // 0x849 - 0x84C
   GameTime_t m_flPlayerFinishedRappellingTime; // 0x84C - 0x850
   CUtlString m_strFlyoverDropEvent; // 0x850 - 0x858
   CHandle< CBaseEntity > m_hCallingPlayer; // 0x858 - 0x85C
   bool m_bCalledByPlayer; // 0x85C - 0x85D

}; // size - 0x860


class CParamSpanUpdater
{
public:

   CUtlVector< ParamSpan_t > m_spans; // 0x0 - 0x18

}; // size - 0x18


class CParameterCondition : public CConditionBase
{
public:

   AnimParamID m_paramID; // 0x28 - 0x2C
   Comparison_t m_comparisonOp; // 0x2C - 0x30
   CAnimVariant m_comparisonValue; // 0x30 - 0x41
   unsigned char pad_41[0x7] // 0x41 - 0x48
   CUtlString m_comparisonString; // 0x48 - 0x50

}; // size - 0x50


class CParentConstraint : public CBaseConstraint
{
public:


}; // size - 0x70


class CParticleAnimTag : public CAnimTagBase
{
public:

   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem; // 0x40 - 0x48
   CUtlString m_particleSystemName; // 0x48 - 0x50
   CUtlString m_configName; // 0x50 - 0x58
   bool m_bDetachFromOwner; // 0x58 - 0x59
   bool m_bStopWhenTagEnds; // 0x59 - 0x5A
   bool m_bTagEndStopIsInstant; // 0x5A - 0x5B
   unsigned char pad_5B[0x5] // 0x5B - 0x60
   CUtlString m_attachmentName; // 0x60 - 0x68
   ParticleAttachment_t m_attachmentType; // 0x68 - 0x6C
   unsigned char pad_6C[0x4] // 0x6C - 0x70
   CUtlString m_attachmentCP1Name; // 0x70 - 0x78
   ParticleAttachment_t m_attachmentCP1Type; // 0x78 - 0x7C

}; // size - 0x80


class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:


}; // size - 0x138


class CParticleCollectionVecInput : public CParticleVecInput
{
public:


}; // size - 0x5C8


class CParticleProperty
{
public:


}; // size - 0x28


class CParticleRemapFloatInput : public CParticleFloatInput
{
public:


}; // size - 0x138


class CParticleSystemDefinition : public IParticleSystemDefinition
{
public:

   int32_t m_nBehaviorVersion; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators; // 0x10 - 0x28
   CUtlVector< CParticleFunctionEmitter* > m_Emitters; // 0x28 - 0x40
   CUtlVector< CParticleFunctionInitializer* > m_Initializers; // 0x40 - 0x58
   CUtlVector< CParticleFunctionOperator* > m_Operators; // 0x58 - 0x70
   CUtlVector< CParticleFunctionForce* > m_ForceGenerators; // 0x70 - 0x88
   CUtlVector< CParticleFunctionConstraint* > m_Constraints; // 0x88 - 0xA0
   CUtlVector< CParticleFunctionRenderer* > m_Renderers; // 0xA0 - 0xB8
   CUtlVector< ParticleChildrenInfo_t > m_Children; // 0xB8 - 0xD0
   unsigned char pad_D0[0xA8] // 0xD0 - 0x178
   int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178 - 0x17C
   unsigned char pad_17C[0x74] // 0x17C - 0x1F0
   int32_t m_nInitialParticles; // 0x1F0 - 0x1F4
   int32_t m_nMaxParticles; // 0x1F4 - 0x1F8
   int32_t m_nGroupID; // 0x1F8 - 0x1FC
   Vector m_BoundingBoxMin; // 0x1FC - 0x208
   Vector m_BoundingBoxMax; // 0x208 - 0x214
   float m_flDepthSortBias; // 0x214 - 0x218
   int32_t m_nSortOverridePositionCP; // 0x218 - 0x21C
   bool m_bInfiniteBounds; // 0x21C - 0x21D
   Color m_ConstantColor; // 0x21D - 0x221
   unsigned char pad_221[0x3] // 0x221 - 0x224
   Vector m_ConstantNormal; // 0x224 - 0x230
   float m_flConstantRadius; // 0x230 - 0x234
   float m_flConstantRotation; // 0x234 - 0x238
   float m_flConstantRotationSpeed; // 0x238 - 0x23C
   float m_flConstantLifespan; // 0x23C - 0x240
   int32_t m_nConstantSequenceNumber; // 0x240 - 0x244
   int32_t m_nConstantSequenceNumber1; // 0x244 - 0x248
   int32_t m_nSnapshotControlPoint; // 0x248 - 0x24C
   unsigned char pad_24C[0x4] // 0x24C - 0x250
   CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x250 - 0x258
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x258 - 0x260
   float m_flCullRadius; // 0x260 - 0x264
   float m_flCullFillCost; // 0x264 - 0x268
   int32_t m_nCullControlPoint; // 0x268 - 0x26C
   unsigned char pad_26C[0x4] // 0x26C - 0x270
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x270 - 0x278
   int32_t m_nFallbackMaxCount; // 0x278 - 0x27C
   unsigned char pad_27C[0x4] // 0x27C - 0x280
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x280 - 0x288
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x288 - 0x290
   float m_flPreSimulationTime; // 0x290 - 0x294
   float m_flStopSimulationAfterTime; // 0x294 - 0x298
   float m_flMaximumTimeStep; // 0x298 - 0x29C
   float m_flMaximumSimTime; // 0x29C - 0x2A0
   float m_flMinimumSimTime; // 0x2A0 - 0x2A4
   float m_flMinimumTimeStep; // 0x2A4 - 0x2A8
   int32_t m_nMinimumFrames; // 0x2A8 - 0x2AC
   int32_t m_nMinCPULevel; // 0x2AC - 0x2B0
   int32_t m_nMinGPULevel; // 0x2B0 - 0x2B4
   float m_flNoDrawTimeToGoToSleep; // 0x2B4 - 0x2B8
   float m_flMaxDrawDistance; // 0x2B8 - 0x2BC
   float m_flStartFadeDistance; // 0x2BC - 0x2C0
   float m_flMaxCreationDistance; // 0x2C0 - 0x2C4
   int32_t m_nAggregationMinAvailableParticles; // 0x2C4 - 0x2C8
   float m_flAggregateRadius; // 0x2C8 - 0x2CC
   bool m_bShouldBatch; // 0x2CC - 0x2CD
   bool m_bShouldHitboxesFallbackToRenderBounds; // 0x2CD - 0x2CE
   unsigned char pad_2CE[0x2] // 0x2CE - 0x2D0
   InheritableBoolType_t m_nViewModelEffect; // 0x2D0 - 0x2D4
   bool m_bScreenSpaceEffect; // 0x2D4 - 0x2D5
   unsigned char pad_2D5[0x3] // 0x2D5 - 0x2D8
   CUtlSymbolLarge m_pszTargetLayerID; // 0x2D8 - 0x2E0
   int32_t m_nSkipRenderControlPoint; // 0x2E0 - 0x2E4
   int32_t m_nAllowRenderControlPoint; // 0x2E4 - 0x2E8
   bool m_bShouldSort; // 0x2E8 - 0x2E9
   unsigned char pad_2E9[0x3F] // 0x2E9 - 0x328
   CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x328 - 0x340

}; // size - 0x3A0


class CParticleTransformInput
{
public:

   ParticleTransformType_t m_nType; // 0x4 - 0x8
   CKV3MemberNameWithStorage m_NamedValue; // 0x8 - 0x40
   bool m_bFollowNamedValue; // 0x40 - 0x41
   bool m_bSupportsDisabled; // 0x41 - 0x42
   bool m_bUseOrientation; // 0x42 - 0x43
   unsigned char pad_43[0x1] // 0x43 - 0x44
   int32_t m_nControlPoint; // 0x44 - 0x48
   int32_t m_nControlPointRangeMax; // 0x48 - 0x4C
   float m_flEndCPGrowthTime; // 0x4C - 0x50

}; // size - 0x50


class CParticleVisibilityInputs
{
public:

   float m_flCameraBias; // 0x0 - 0x4
   int32_t m_nCPin; // 0x4 - 0x8
   float m_flProxyRadius; // 0x8 - 0xC
   float m_flInputMin; // 0xC - 0x10
   float m_flInputMax; // 0x10 - 0x14
   float m_flNoPixelVisibilityFallback; // 0x14 - 0x18
   float m_flDistanceInputMin; // 0x18 - 0x1C
   float m_flDistanceInputMax; // 0x1C - 0x20
   float m_flDotInputMin; // 0x20 - 0x24
   float m_flDotInputMax; // 0x24 - 0x28
   bool m_bDotCPAngles; // 0x28 - 0x29
   bool m_bDotCameraAngles; // 0x29 - 0x2A
   unsigned char pad_2A[0x2] // 0x2A - 0x2C
   float m_flAlphaScaleMin; // 0x2C - 0x30
   float m_flAlphaScaleMax; // 0x30 - 0x34
   float m_flRadiusScaleMin; // 0x34 - 0x38
   float m_flRadiusScaleMax; // 0x38 - 0x3C
   float m_flRadiusScaleFOVBase; // 0x3C - 0x40
   bool m_bRightEye; // 0x40 - 0x41

}; // size - 0x44


class CPathAnimMotor : public CPathAnimMotorBase
{
public:


}; // size - 0x30


class CPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase
{
public:


}; // size - 0x28


class CPathCornerCrash : public CPathCorner
{
public:


}; // size - 0x4D0


class CPathHelperAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   float m_flStoppingRadius; // 0x40 - 0x44
   float m_flStoppingSpeedScale; // 0x44 - 0x48

}; // size - 0x48


class CPathHelperUpdateNode : public CUnaryUpdateNode
{
public:

   float m_flStoppingRadius; // 0x68 - 0x6C
   float m_flStoppingSpeedScale; // 0x6C - 0x70

}; // size - 0x70


class CPathMetric : public CMotionMetricBase
{
public:

   float m_flDistance; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   CUtlVector< float32 > m_pathSamples; // 0x30 - 0x48
   bool m_bExtrapolateMovement; // 0x48 - 0x49
   unsigned char pad_49[0x3] // 0x49 - 0x4C
   float m_flMinExtrapolationSpeed; // 0x4C - 0x50

}; // size - 0x50


class CPathMetricEvaluator : public CMotionMetricEvaluator
{
public:

   CUtlVector< float32 > m_pathTimeSamples; // 0x50 - 0x68
   float m_flDistance; // 0x68 - 0x6C
   bool m_bExtrapolateMovement; // 0x6C - 0x6D
   unsigned char pad_6D[0x3] // 0x6D - 0x70
   float m_flMinExtrapolationSpeed; // 0x70 - 0x74

}; // size - 0x78


class CPathParameters
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

}; // size - 0x40


class CPathParticleRopeAlias_path_particle_rope_clientside : public CPathParticleRope
{
public:


}; // size - 0x580


class CPathTrack : public CPointEntity
{
public:

   CPathTrack* m_pnext; // 0x4A0 - 0x4A8
   CPathTrack* m_pprevious; // 0x4A8 - 0x4B0
   CPathTrack* m_paltpath; // 0x4B0 - 0x4B8
   float m_flRadius; // 0x4B8 - 0x4BC
   float m_length; // 0x4BC - 0x4C0
   CUtlSymbolLarge m_altName; // 0x4C0 - 0x4C8
   int32_t m_nIterVal; // 0x4C8 - 0x4CC
   TrackOrientationType_t m_eOrientationType; // 0x4CC - 0x4D0
   CEntityIOOutput m_OnPass; // 0x4D0 - 0x4F8

}; // size - 0x4F8


class CPerParticleFloatInput : public CParticleFloatInput
{
public:


}; // size - 0x138


class CPerParticleVecInput : public CParticleVecInput
{
public:


}; // size - 0x5C8


class CPhysBallSocket : public CPhysConstraint
{
public:

   float m_flFriction; // 0x4F8 - 0x4FC
   bool m_bEnableSwingLimit; // 0x4FC - 0x4FD
   unsigned char pad_4FD[0x3] // 0x4FD - 0x500
   float m_flSwingLimit; // 0x500 - 0x504
   bool m_bEnableTwistLimit; // 0x504 - 0x505
   unsigned char pad_505[0x3] // 0x505 - 0x508
   float m_flMinTwistAngle; // 0x508 - 0x50C
   float m_flMaxTwistAngle; // 0x50C - 0x510

}; // size - 0x510


class CPhysBox : public CBreakable
{
public:

   int32_t m_damageType; // 0x7B0 - 0x7B4
   float m_massScale; // 0x7B4 - 0x7B8
   int32_t m_damageToEnableMotion; // 0x7B8 - 0x7BC
   float m_flForceToEnableMotion; // 0x7BC - 0x7C0
   QAngle m_angPreferredCarryAngles; // 0x7C0 - 0x7CC
   bool m_bNotSolidToWorld; // 0x7CC - 0x7CD
   bool m_bEnableUseOutput; // 0x7CD - 0x7CE
   unsigned char pad_7CE[0x2] // 0x7CE - 0x7D0
   int32_t m_iExploitableByPlayer; // 0x7D0 - 0x7D4
   float m_flTouchOutputPerEntityDelay; // 0x7D4 - 0x7D8
   CEntityIOOutput m_OnDamaged; // 0x7D8 - 0x800
   CEntityIOOutput m_OnAwakened; // 0x800 - 0x828
   CEntityIOOutput m_OnMotionEnabled; // 0x828 - 0x850
   CEntityIOOutput m_OnPlayerUse; // 0x850 - 0x878
   CEntityIOOutput m_OnStartTouch; // 0x878 - 0x8A0
   CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x8A0 - 0x8A4

}; // size - 0x8C0


class CPhysExplosion : public CPointEntity
{
public:

   bool m_bExplodeOnSpawn; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   float m_flMagnitude; // 0x4A4 - 0x4A8
   float m_flDamage; // 0x4A8 - 0x4AC
   float m_radius; // 0x4AC - 0x4B0
   CUtlSymbolLarge m_targetEntityName; // 0x4B0 - 0x4B8
   float m_flInnerRadius; // 0x4B8 - 0x4BC
   float m_flPushScale; // 0x4BC - 0x4C0
   bool m_bConvertToDebrisWhenPossible; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x7] // 0x4C1 - 0x4C8
   CEntityIOOutput m_OnPushedPlayer; // 0x4C8 - 0x4F0

}; // size - 0x4F0


class CPhysFixed : public CPhysConstraint
{
public:

   float m_flLinearFrequency; // 0x4F8 - 0x4FC
   float m_flLinearDampingRatio; // 0x4FC - 0x500
   float m_flAngularFrequency; // 0x500 - 0x504
   float m_flAngularDampingRatio; // 0x504 - 0x508
   bool m_bEnableLinearConstraint; // 0x508 - 0x509
   bool m_bEnableAngularConstraint; // 0x509 - 0x50A

}; // size - 0x510


class CPhysHingeAlias_phys_hinge_local : public CPhysHinge
{
public:


}; // size - 0x698


class CPhysImpact : public CPointEntity
{
public:

   float m_damage; // 0x4A0 - 0x4A4
   float m_distance; // 0x4A4 - 0x4A8
   CUtlSymbolLarge m_directionEntityName; // 0x4A8 - 0x4B0

}; // size - 0x4B0


class CPhysLength : public CPhysConstraint
{
public:

   Vector m_offset[2]; // 0x4F8 - 0x510
   Vector m_vecAttach; // 0x510 - 0x51C
   float m_addLength; // 0x51C - 0x520
   float m_minLength; // 0x520 - 0x524
   float m_totalLength; // 0x524 - 0x528
   bool m_bEnableCollision; // 0x528 - 0x529

}; // size - 0x530


class CPhysMagnet : public CBaseAnimGraph
{
public:

   CEntityIOOutput m_OnMagnetAttach; // 0x820 - 0x848
   CEntityIOOutput m_OnMagnetDetach; // 0x848 - 0x870
   float m_massScale; // 0x870 - 0x874
   float m_forceLimit; // 0x874 - 0x878
   float m_torqueLimit; // 0x878 - 0x87C
   unsigned char pad_87C[0x4] // 0x87C - 0x880
   CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x880 - 0x898
   bool m_bActive; // 0x898 - 0x899
   bool m_bHasHitSomething; // 0x899 - 0x89A
   unsigned char pad_89A[0x2] // 0x89A - 0x89C
   float m_flTotalMass; // 0x89C - 0x8A0
   float m_flRadius; // 0x8A0 - 0x8A4
   GameTime_t m_flNextSuckTime; // 0x8A4 - 0x8A8
   int32_t m_iMaxObjectsAttached; // 0x8A8 - 0x8AC

}; // size - 0x8B0


class CPhysMotor : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_nameAttach; // 0x4A0 - 0x4A8
   CHandle< CBaseEntity > m_hAttachedObject; // 0x4A8 - 0x4AC
   float m_spinUp; // 0x4AC - 0x4B0
   float m_additionalAcceleration; // 0x4B0 - 0x4B4
   float m_angularAcceleration; // 0x4B4 - 0x4B8
   GameTime_t m_lastTime; // 0x4B8 - 0x4BC
   unsigned char pad_4BC[0x14] // 0x4BC - 0x4D0
   CMotorController m_motor; // 0x4D0 - 0x4F0

}; // size - 0x4F0


class CPhysPropAmmoBox : public CBrBaseItem
{
public:

   int32_t m_nUsesRemaining; // 0xB28 - 0xB2C
   GameTime_t m_flTimeLastUsed; // 0xB2C - 0xB30

}; // size - 0xB38


class CPhysPropMapPlacedLongUseEntity : public CPhysPropWeaponUpgrade
{
public:

   CUtlSymbolLarge m_iszStartUseSound; // 0xB30 - 0xB38
   int32_t m_nPingType; // 0xB38 - 0xB3C
   int32_t m_nLongUseActionType; // 0xB3C - 0xB40
   float m_flLongUseDuration; // 0xB40 - 0xB44
   unsigned char pad_B44[0x4] // 0xB44 - 0xB48
   CEntityIOOutput m_OnUseCompleted; // 0xB48 - 0xB70

}; // size - 0xB70


class CPhysPropMetalCrate : public CPhysPropLootCrate
{
public:


}; // size - 0xB50


class CPhysPropMoneyCrate : public CPhysPropLootCrate
{
public:

   int32_t m_nCurrentCashCount; // 0xB50 - 0xB54
   int32_t m_nCashCount; // 0xB54 - 0xB58
   GameTime_t m_flTimeLastUsed; // 0xB58 - 0xB5C

}; // size - 0xB60


class CPhysPropParadropCrate : public CPhysPropLootCrate
{
public:

   bool m_bFalling; // 0xB50 - 0xB51
   unsigned char pad_B51[0x3] // 0xB51 - 0xB54
   int32_t m_nNumThinksAtZeroVerticalVelocity; // 0xB54 - 0xB58

}; // size - 0xB58


class CPhysPropRadarJammer : public CBrBaseItem
{
public:

   GameTime_t m_flSpawnTime; // 0xB30 - 0xB34
   GameTime_t m_flLastSoundTime; // 0xB34 - 0xB38
   CUtlVector< int32 > m_vecJammedHexCenters; // 0xB38 - 0xB50
   Vector m_vecLastJammedOrigin; // 0xB50 - 0xB5C

}; // size - 0xB60


class CPhysPropWeaponRefillHeavyArmor : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeArmor : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeArmorHelmet : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeContractKill : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeExoJump : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeHelmet : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeParachute : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeTabletDroneIntel : public CPhysPropWeaponUpgradeTablet
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeTabletHighres : public CPhysPropWeaponUpgradeTablet
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeTabletZoneIntel : public CPhysPropWeaponUpgradeTablet
{
public:


}; // size - 0xB30


class CPhysPulley : public CPhysConstraint
{
public:

   Vector m_position2; // 0x4F8 - 0x504
   Vector m_offset[2]; // 0x504 - 0x51C
   float m_addLength; // 0x51C - 0x520
   float m_gearRatio; // 0x520 - 0x524

}; // size - 0x528


class CPhysSlideConstraint : public CPhysConstraint
{
public:

   Vector m_axisEnd; // 0x500 - 0x50C
   float m_slideFriction; // 0x50C - 0x510
   float m_systemLoadScale; // 0x510 - 0x514
   float m_initialOffset; // 0x514 - 0x518
   bool m_bEnableLinearConstraint; // 0x518 - 0x519
   bool m_bEnableAngularConstraint; // 0x519 - 0x51A
   unsigned char pad_51A[0x2] // 0x51A - 0x51C
   float m_flMotorFrequency; // 0x51C - 0x520
   float m_flMotorDampingRatio; // 0x520 - 0x524
   bool m_bUseEntityPivot; // 0x524 - 0x525
   unsigned char pad_525[0x3] // 0x525 - 0x528
   ConstraintSoundInfo m_soundInfo; // 0x528 - 0x5B0

}; // size - 0x5B0


class CPhysSurfaceProperties
{
public:

   CUtlString m_name; // 0x0 - 0x8
   uint32_t m_nameHash; // 0x8 - 0xC
   uint32_t m_baseNameHash; // 0xC - 0x10
   unsigned char pad_10[0x8] // 0x10 - 0x18
   bool m_bHidden; // 0x18 - 0x19
   unsigned char pad_19[0x7] // 0x19 - 0x20
   CUtlString m_description; // 0x20 - 0x28
   CPhysSurfacePropertiesPhysics m_physics; // 0x28 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48 - 0x88
   CPhysSurfacePropertiesAudio m_audioParams; // 0x88 - 0xA8

}; // size - 0xA8


class CPhysSurfacePropertiesAudio
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


class CPhysSurfacePropertiesPhysics
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


class CPhysSurfacePropertiesSoundNames
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

}; // size - 0x40


class CPhysThruster : public CPhysForce
{
public:

   Vector m_localOrigin; // 0x500 - 0x50C

}; // size - 0x510


class CPhysTorque : public CPhysForce
{
public:

   Vector m_axis; // 0x500 - 0x50C

}; // size - 0x510


class CPhysWheelConstraint : public CPhysConstraint
{
public:

   float m_flSuspensionFrequency; // 0x4F8 - 0x4FC
   float m_flSuspensionDampingRatio; // 0x4FC - 0x500
   float m_flSuspensionHeightOffset; // 0x500 - 0x504
   bool m_bEnableSuspensionLimit; // 0x504 - 0x505
   unsigned char pad_505[0x3] // 0x505 - 0x508
   float m_flMinSuspensionOffset; // 0x508 - 0x50C
   float m_flMaxSuspensionOffset; // 0x50C - 0x510
   bool m_bEnableSteeringLimit; // 0x510 - 0x511
   unsigned char pad_511[0x3] // 0x511 - 0x514
   float m_flMinSteeringAngle; // 0x514 - 0x518
   float m_flMaxSteeringAngle; // 0x518 - 0x51C
   float m_flSteeringAxisFriction; // 0x51C - 0x520
   float m_flSpinAxisFriction; // 0x520 - 0x524

}; // size - 0x528


class CPhysicalButton : public CBaseButton
{
public:


}; // size - 0x8B8


class CPhysicsEntitySolver : public CLogicalEntity
{
public:

   CHandle< CBaseEntity > m_hMovingEntity; // 0x4A8 - 0x4AC
   CHandle< CBaseEntity > m_hPhysicsBlocker; // 0x4AC - 0x4B0
   float m_separationDuration; // 0x4B0 - 0x4B4
   GameTime_t m_cancelTime; // 0x4B4 - 0x4B8

}; // size - 0x4B8


class CPhysicsPropOverride : public CPhysicsProp
{
public:


}; // size - 0xB00


class CPhysicsPropRespawnable : public CPhysicsProp
{
public:

   Vector m_vOriginalSpawnOrigin; // 0xB00 - 0xB0C
   QAngle m_vOriginalSpawnAngles; // 0xB0C - 0xB18
   Vector m_vOriginalMins; // 0xB18 - 0xB24
   Vector m_vOriginalMaxs; // 0xB24 - 0xB30
   float m_flRespawnDuration; // 0xB30 - 0xB34

}; // size - 0xB38


class CPhysicsShake
{
public:

   Vector m_force; // 0x8 - 0x14

}; // size - 0x18


class CPhysicsSpring : public CBaseEntity
{
public:

   float m_flFrequency; // 0x4A8 - 0x4AC
   float m_flDampingRatio; // 0x4AC - 0x4B0
   float m_flRestLength; // 0x4B0 - 0x4B4
   unsigned char pad_4B4[0x4] // 0x4B4 - 0x4B8
   CUtlSymbolLarge m_nameAttachStart; // 0x4B8 - 0x4C0
   CUtlSymbolLarge m_nameAttachEnd; // 0x4C0 - 0x4C8
   Vector m_start; // 0x4C8 - 0x4D4
   Vector m_end; // 0x4D4 - 0x4E0
   uint32_t m_teleportTick; // 0x4E0 - 0x4E4

}; // size - 0x4E8


class CPhysicsWire : public CBaseEntity
{
public:

   int32_t m_nDensity; // 0x4A0 - 0x4A4

}; // size - 0x4A8


class CPlantedC4Survival : public CPlantedC4
{
public:


}; // size - 0x920


class CPlatTrigger : public CBaseModelEntity
{
public:

   CHandle< CFuncPlat > m_pPlatform; // 0x6F0 - 0x6F4

}; // size - 0x6F8


class CPlayerInputAnimMotor : public CAnimMotorBase
{
public:

   CUtlVector< float32 > m_sampleTimes; // 0x28 - 0x40
   bool m_bUseAcceleration; // 0x40 - 0x41
   unsigned char pad_41[0x3] // 0x41 - 0x44
   float m_flSpringConstant; // 0x44 - 0x48
   float m_flAnticipationDistance; // 0x48 - 0x4C
   AnimParamID m_anticipationPosParam; // 0x4C - 0x50
   AnimParamID m_anticipationHeadingParam; // 0x50 - 0x54

}; // size - 0x58


class CPlayerInputAnimMotorUpdater : public CAnimMotorUpdaterBase
{
public:

   CUtlVector< float32 > m_sampleTimes; // 0x20 - 0x38
   unsigned char pad_38[0x4] // 0x38 - 0x3C
   float m_flSpringConstant; // 0x3C - 0x40
   float m_flAnticipationDistance; // 0x40 - 0x44
   CAnimParamHandle m_hAnticipationPosParam; // 0x44 - 0x46
   CAnimParamHandle m_hAnticipationHeadingParam; // 0x46 - 0x48
   bool m_bUseAcceleration; // 0x48 - 0x49

}; // size - 0x50


class CPlayerPing : public CBaseEntity
{
public:

   CHandle< CBaseEntity > m_hPlayer; // 0x4A8 - 0x4AC
   CHandle< CBaseEntity > m_hPingedEntity; // 0x4AC - 0x4B0
   int32_t m_iType; // 0x4B0 - 0x4B4
   bool m_bUrgent; // 0x4B4 - 0x4B5
   char m_szPlaceName[18]; // 0x4B5 - 0x4C7

}; // size - 0x4C8


class CPlayerSprayDecal : public CModelPointEntity
{
public:

   int32_t m_nUniqueID; // 0x6F0 - 0x6F4
   uint32_t m_unAccountID; // 0x6F4 - 0x6F8
   uint32_t m_unTraceID; // 0x6F8 - 0x6FC
   uint32_t m_rtGcTime; // 0x6FC - 0x700
   Vector m_vecEndPos; // 0x700 - 0x70C
   Vector m_vecStart; // 0x70C - 0x718
   Vector m_vecLeft; // 0x718 - 0x724
   Vector m_vecNormal; // 0x724 - 0x730
   int32_t m_nPlayer; // 0x730 - 0x734
   int32_t m_nEntity; // 0x734 - 0x738
   int32_t m_nHitbox; // 0x738 - 0x73C
   float m_flCreationTime; // 0x73C - 0x740
   int32_t m_nTintID; // 0x740 - 0x744
   uint8_t m_nVersion; // 0x744 - 0x745
   uint8 m_ubSignature[128]; // 0x745 - 0x7C5

}; // size - 0x7C8


class CPlayerSprayDecalRenderHelper
{
public:


}; // size - 0x30


class CPlayer_AutoaimServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_AutoaimServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPointAngleSensor : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x7] // 0x4A1 - 0x4A8
   CUtlSymbolLarge m_nLookAtName; // 0x4A8 - 0x4B0
   CHandle< CBaseEntity > m_hTargetEntity; // 0x4B0 - 0x4B4
   CHandle< CBaseEntity > m_hLookAtEntity; // 0x4B4 - 0x4B8
   float m_flDuration; // 0x4B8 - 0x4BC
   float m_flDotTolerance; // 0x4BC - 0x4C0
   GameTime_t m_flFacingTime; // 0x4C0 - 0x4C4
   bool m_bFired; // 0x4C4 - 0x4C5
   unsigned char pad_4C5[0x3] // 0x4C5 - 0x4C8
   CEntityIOOutput m_OnFacingLookat; // 0x4C8 - 0x4F0
   CEntityIOOutput m_OnNotFacingLookat; // 0x4F0 - 0x518
   CEntityOutputTemplate< Vector > m_TargetDir; // 0x518 - 0x540
   CEntityOutputTemplate< float32 > m_FacingPercentage; // 0x540 - 0x568

}; // size - 0x568


class CPointAngularVelocitySensor : public CPointEntity
{
public:

   CHandle< CBaseEntity > m_hTargetEntity; // 0x4A0 - 0x4A4
   float m_flThreshold; // 0x4A4 - 0x4A8
   int32_t m_nLastCompareResult; // 0x4A8 - 0x4AC
   int32_t m_nLastFireResult; // 0x4AC - 0x4B0
   GameTime_t m_flFireTime; // 0x4B0 - 0x4B4
   float m_flFireInterval; // 0x4B4 - 0x4B8
   float m_flLastAngVelocity; // 0x4B8 - 0x4BC
   QAngle m_lastOrientation; // 0x4BC - 0x4C8
   Vector m_vecAxis; // 0x4C8 - 0x4D4
   bool m_bUseHelper; // 0x4D4 - 0x4D5
   unsigned char pad_4D5[0x3] // 0x4D5 - 0x4D8
   CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x4D8 - 0x500
   CEntityIOOutput m_OnLessThan; // 0x500 - 0x528
   CEntityIOOutput m_OnLessThanOrEqualTo; // 0x528 - 0x550
   CEntityIOOutput m_OnGreaterThan; // 0x550 - 0x578
   CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x578 - 0x5A0
   CEntityIOOutput m_OnEqualTo; // 0x5A0 - 0x5C8

}; // size - 0x5C8


class CPointBroadcastClientCommand : public CPointEntity
{
public:


}; // size - 0x4A0


class CPointCameraVFOV : public CPointCamera
{
public:

   float m_flVerticalFOV; // 0x500 - 0x504

}; // size - 0x508


class CPointClientCommand : public CPointEntity
{
public:


}; // size - 0x4A0


class CPointClientUIDialog : public CBaseClientUIEntity
{
public:

   CHandle< CBaseEntity > m_hActivator; // 0x8A0 - 0x8A4
   bool m_bStartEnabled; // 0x8A4 - 0x8A5

}; // size - 0x8A8


class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel
{
public:

   char m_messageText[512]; // 0x8F8 - 0xAF8

}; // size - 0xAF8


class CPointCommentaryNode : public CBaseAnimGraph
{
public:

   CUtlSymbolLarge m_iszPreCommands; // 0x820 - 0x828
   CUtlSymbolLarge m_iszPostCommands; // 0x828 - 0x830
   CUtlSymbolLarge m_iszCommentaryFile; // 0x830 - 0x838
   CUtlSymbolLarge m_iszViewTarget; // 0x838 - 0x840
   CHandle< CBaseEntity > m_hViewTarget; // 0x840 - 0x844
   CHandle< CBaseEntity > m_hViewTargetAngles; // 0x844 - 0x848
   CUtlSymbolLarge m_iszViewPosition; // 0x848 - 0x850
   CHandle< CBaseEntity > m_hViewPosition; // 0x850 - 0x854
   CHandle< CBaseEntity > m_hViewPositionMover; // 0x854 - 0x858
   bool m_bPreventMovement; // 0x858 - 0x859
   bool m_bUnderCrosshair; // 0x859 - 0x85A
   bool m_bUnstoppable; // 0x85A - 0x85B
   unsigned char pad_85B[0x1] // 0x85B - 0x85C
   GameTime_t m_flFinishedTime; // 0x85C - 0x860
   Vector m_vecFinishOrigin; // 0x860 - 0x86C
   QAngle m_vecOriginalAngles; // 0x86C - 0x878
   QAngle m_vecFinishAngles; // 0x878 - 0x884
   bool m_bPreventChangesWhileMoving; // 0x884 - 0x885
   bool m_bDisabled; // 0x885 - 0x886
   unsigned char pad_886[0x2] // 0x886 - 0x888
   Vector m_vecTeleportOrigin; // 0x888 - 0x894
   GameTime_t m_flAbortedPlaybackAt; // 0x894 - 0x898
   CEntityIOOutput m_pOnCommentaryStarted; // 0x898 - 0x8C0
   CEntityIOOutput m_pOnCommentaryStopped; // 0x8C0 - 0x8E8
   bool m_bActive; // 0x8E8 - 0x8E9
   unsigned char pad_8E9[0x3] // 0x8E9 - 0x8EC
   GameTime_t m_flStartTime; // 0x8EC - 0x8F0
   float m_flStartTimeInCommentary; // 0x8F0 - 0x8F4
   unsigned char pad_8F4[0x4] // 0x8F4 - 0x8F8
   CUtlSymbolLarge m_iszTitle; // 0x8F8 - 0x900
   CUtlSymbolLarge m_iszSpeakers; // 0x900 - 0x908
   int32_t m_iNodeNumber; // 0x908 - 0x90C
   int32_t m_iNodeNumberMax; // 0x90C - 0x910
   bool m_bListenedTo; // 0x910 - 0x911

}; // size - 0x918


class CPointConstraint : public CBaseConstraint
{
public:


}; // size - 0x70


class CPointDZDroneGunSpawn : public CServerOnlyPointEntity
{
public:

   bool m_bSpawnAutomatically; // 0x4A8 - 0x4A9

}; // size - 0x4B0


class CPointDZParachuteSpawn : public CServerOnlyPointEntity
{
public:


}; // size - 0x4A8


class CPointDZParadropDenialRegion : public CServerOnlyPointEntity
{
public:

   float m_flRadius; // 0x4A8 - 0x4AC

}; // size - 0x4B0


class CPointDZWeaponSpawn : public CPointDZItemSpawn
{
public:

   int32_t m_nGroupID; // 0x4B0 - 0x4B4
   float m_flDefaultWeight; // 0x4B4 - 0x4B8
   float m_flCurrentWeight; // 0x4B8 - 0x4BC
   CHandle< CBaseEntity > m_hItem; // 0x4BC - 0x4C0
   CUtlSymbolLarge m_iszDoorName; // 0x4C0 - 0x4C8
   CHandle< CDZDoor > m_hDoor; // 0x4C8 - 0x4CC
   int32_t m_nPrice; // 0x4CC - 0x4D0

}; // size - 0x4D0


class CPointDZWeaponSpawnGroup : public CPointDZItemSpawnGroup
{
public:


}; // size - 0x4C8


class CPointEntityFinder : public CBaseEntity
{
public:

   CHandle< CBaseEntity > m_hEntity; // 0x4A0 - 0x4A4
   unsigned char pad_4A4[0x4] // 0x4A4 - 0x4A8
   CUtlSymbolLarge m_iFilterName; // 0x4A8 - 0x4B0
   CHandle< CBaseFilter > m_hFilter; // 0x4B0 - 0x4B4
   unsigned char pad_4B4[0x4] // 0x4B4 - 0x4B8
   CUtlSymbolLarge m_iRefName; // 0x4B8 - 0x4C0
   CHandle< CBaseEntity > m_hReference; // 0x4C0 - 0x4C4
   EntFinderMethod_t m_FindMethod; // 0x4C4 - 0x4C8
   CEntityIOOutput m_OnFoundEntity; // 0x4C8 - 0x4F0

}; // size - 0x4F0


class CPointGamestatsCounter : public CPointEntity
{
public:

   CUtlSymbolLarge m_strStatisticName; // 0x4A0 - 0x4A8
   bool m_bDisabled; // 0x4A8 - 0x4A9

}; // size - 0x4B0


class CPointGiveAmmo : public CPointEntity
{
public:

   CHandle< CBaseEntity > m_pActivator; // 0x4A0 - 0x4A4

}; // size - 0x4A8


class CPointHMDAnchorOverride : public CPointHMDAnchor
{
public:


}; // size - 0x4B0


class CPointHintUi : public CPointClientUIWorldPanel
{
public:


}; // size - 0x900


class CPointHurt : public CPointEntity
{
public:

   int32_t m_nDamage; // 0x4A0 - 0x4A4
   int32_t m_bitsDamageType; // 0x4A4 - 0x4A8
   float m_flRadius; // 0x4A8 - 0x4AC
   float m_flDelay; // 0x4AC - 0x4B0
   CUtlSymbolLarge m_strTarget; // 0x4B0 - 0x4B8
   CHandle< CBaseEntity > m_pActivator; // 0x4B8 - 0x4BC

}; // size - 0x4C0


class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:

   bool m_bBeenEnabled; // 0xAA0 - 0xAA1
   bool m_bHide; // 0xAA1 - 0xAA2
   unsigned char pad_AA2[0x2] // 0xAA2 - 0xAA4
   float m_flSeenTargetTime; // 0xAA4 - 0xAA8
   C_PointClientUIWorldPanel* m_pTargetPanel; // 0xAA8 - 0xAB0

}; // size - 0xAB0


class CPointPrefab : public CServerOnlyPointEntity
{
public:

   CUtlSymbolLarge m_targetMapName; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_forceWorldGroupID; // 0x4A8 - 0x4B0
   bool m_fixupNames; // 0x4B0 - 0x4B1

}; // size - 0x4B8


class CPointProximitySensor : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   CHandle< CBaseEntity > m_hTargetEntity; // 0x4A4 - 0x4A8
   CEntityOutputTemplate< float32 > m_Distance; // 0x4A8 - 0x4D0

}; // size - 0x4D0


class CPointPush : public CPointEntity
{
public:

   bool m_bEnabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   float m_flMagnitude; // 0x4A4 - 0x4A8
   float m_flRadius; // 0x4A8 - 0x4AC
   float m_flInnerRadius; // 0x4AC - 0x4B0
   float m_flConeOfInfluence; // 0x4B0 - 0x4B4
   unsigned char pad_4B4[0x4] // 0x4B4 - 0x4B8
   CUtlSymbolLarge m_iszFilterName; // 0x4B8 - 0x4C0
   CHandle< CBaseFilter > m_hFilter; // 0x4C0 - 0x4C4

}; // size - 0x4C8


class CPointServerCommand : public CPointEntity
{
public:


}; // size - 0x4A0


class CPointTeleport : public CBaseEntity
{
public:

   Vector m_vSaveOrigin; // 0x4A0 - 0x4AC
   QAngle m_vSaveAngles; // 0x4AC - 0x4B8
   bool m_bTeleportParentedEntities; // 0x4B8 - 0x4B9

}; // size - 0x4C0


class CPointTemplate : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_iszWorldName; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_iszEntityFilterName; // 0x4B0 - 0x4B8
   float m_flTimeoutInterval; // 0x4B8 - 0x4BC
   bool m_bAsynchronouslySpawnEntities; // 0x4BC - 0x4BD
   unsigned char pad_4BD[0x3] // 0x4BD - 0x4C0
   CEntityIOOutput m_pOutputOnSpawned; // 0x4C0 - 0x4E8
   PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x4E8 - 0x4EC
   PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x4EC - 0x4F0
   CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x4F0 - 0x508
   CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x508 - 0x520
   HSCRIPT m_ScriptSpawnCallback; // 0x520 - 0x528
   HSCRIPT m_ScriptCallbackScope; // 0x528 - 0x530

}; // size - 0x530


class CPointTemplate : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_iszWorldName; // 0x538 - 0x540
   CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x540 - 0x548
   CUtlSymbolLarge m_iszEntityFilterName; // 0x548 - 0x550
   float m_flTimeoutInterval; // 0x550 - 0x554
   bool m_bAsynchronouslySpawnEntities; // 0x554 - 0x555
   unsigned char pad_555[0x3] // 0x555 - 0x558
   CEntityIOOutput m_pOutputOnSpawned; // 0x558 - 0x580
   PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x580 - 0x584
   PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x584 - 0x588
   CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x588 - 0x5A0
   CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x5A0 - 0x5B8
   HSCRIPT m_ScriptSpawnCallback; // 0x5B8 - 0x5C0
   HSCRIPT m_ScriptCallbackScope; // 0x5C0 - 0x5C8

}; // size - 0x5C8


class CPointValueRemapper : public CBaseEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   bool m_bUpdateOnClient; // 0x4A1 - 0x4A2
   unsigned char pad_4A2[0x2] // 0x4A2 - 0x4A4
   ValueRemapperInputType_t m_nInputType; // 0x4A4 - 0x4A8
   CUtlSymbolLarge m_iszRemapLineStartName; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_iszRemapLineEndName; // 0x4B0 - 0x4B8
   CHandle< CBaseEntity > m_hRemapLineStart; // 0x4B8 - 0x4BC
   CHandle< CBaseEntity > m_hRemapLineEnd; // 0x4BC - 0x4C0
   float m_flMaximumChangePerSecond; // 0x4C0 - 0x4C4
   float m_flDisengageDistance; // 0x4C4 - 0x4C8
   float m_flEngageDistance; // 0x4C8 - 0x4CC
   bool m_bRequiresUseKey; // 0x4CC - 0x4CD
   unsigned char pad_4CD[0x3] // 0x4CD - 0x4D0
   ValueRemapperOutputType_t m_nOutputType; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0x4] // 0x4D4 - 0x4D8
   CUtlSymbolLarge m_iszOutputEntityName; // 0x4D8 - 0x4E0
   CUtlSymbolLarge m_iszOutputEntity2Name; // 0x4E0 - 0x4E8
   CUtlSymbolLarge m_iszOutputEntity3Name; // 0x4E8 - 0x4F0
   CUtlSymbolLarge m_iszOutputEntity4Name; // 0x4F0 - 0x4F8
   CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // 0x4F8 - 0x510
   ValueRemapperHapticsType_t m_nHapticsType; // 0x510 - 0x514
   ValueRemapperMomentumType_t m_nMomentumType; // 0x514 - 0x518
   float m_flMomentumModifier; // 0x518 - 0x51C
   float m_flSnapValue; // 0x51C - 0x520
   float m_flCurrentMomentum; // 0x520 - 0x524
   ValueRemapperRatchetType_t m_nRatchetType; // 0x524 - 0x528
   float m_flRatchetOffset; // 0x528 - 0x52C
   float m_flInputOffset; // 0x52C - 0x530
   bool m_bEngaged; // 0x530 - 0x531
   bool m_bFirstUpdate; // 0x531 - 0x532
   unsigned char pad_532[0x2] // 0x532 - 0x534
   float m_flPreviousValue; // 0x534 - 0x538
   GameTime_t m_flPreviousUpdateTickTime; // 0x538 - 0x53C
   Vector m_vecPreviousTestPoint; // 0x53C - 0x548
   CHandle< CBasePlayerPawn > m_hUsingPlayer; // 0x548 - 0x54C
   float m_flCustomOutputValue; // 0x54C - 0x550
   CUtlSymbolLarge m_iszSoundEngage; // 0x550 - 0x558
   CUtlSymbolLarge m_iszSoundDisengage; // 0x558 - 0x560
   CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x560 - 0x568
   CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x568 - 0x570
   CUtlSymbolLarge m_iszSoundMovingLoop; // 0x570 - 0x578
   unsigned char pad_578[0x8] // 0x578 - 0x580
   CEntityOutputTemplate< float32 > m_Position; // 0x580 - 0x5A8
   CEntityOutputTemplate< float32 > m_PositionDelta; // 0x5A8 - 0x5D0
   CEntityIOOutput m_OnReachedValueZero; // 0x5D0 - 0x5F8
   CEntityIOOutput m_OnReachedValueOne; // 0x5F8 - 0x620
   CEntityIOOutput m_OnReachedValueCustom; // 0x620 - 0x648
   CEntityIOOutput m_OnEngage; // 0x648 - 0x670
   CEntityIOOutput m_OnDisengage; // 0x670 - 0x698

}; // size - 0x698


class CPointVelocitySensor : public CPointEntity
{
public:

   CHandle< CBaseEntity > m_hTargetEntity; // 0x4A0 - 0x4A4
   Vector m_vecAxis; // 0x4A4 - 0x4B0
   bool m_bEnabled; // 0x4B0 - 0x4B1
   unsigned char pad_4B1[0x3] // 0x4B1 - 0x4B4
   float m_fPrevVelocity; // 0x4B4 - 0x4B8
   float m_flAvgInterval; // 0x4B8 - 0x4BC
   unsigned char pad_4BC[0x4] // 0x4BC - 0x4C0
   CEntityOutputTemplate< float32 > m_Velocity; // 0x4C0 - 0x4E8

}; // size - 0x4E8


class CPointWorldText : public CModelPointEntity
{
public:

   char m_messageText[512]; // 0x6F0 - 0x8F0
   char m_FontName[64]; // 0x8F0 - 0x930
   bool m_bEnabled; // 0x930 - 0x931
   bool m_bFullbright; // 0x931 - 0x932
   unsigned char pad_932[0x2] // 0x932 - 0x934
   float m_flWorldUnitsPerPx; // 0x934 - 0x938
   float m_flFontSize; // 0x938 - 0x93C
   float m_flDepthOffset; // 0x93C - 0x940
   Color m_Color; // 0x940 - 0x944
   PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x944 - 0x948
   PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x948 - 0x94C
   PointWorldTextReorientMode_t m_nReorientMode; // 0x94C - 0x950

}; // size - 0x950


class CPoseHandle
{
public:

   uint16_t m_nIndex; // 0x0 - 0x2
   PoseType_t m_eType; // 0x2 - 0x3

}; // size - 0x4


class CPostProcessingVolume : public CBaseTrigger
{
public:

   CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x8A8 - 0x8B0
   float m_flFadeDuration; // 0x8B0 - 0x8B4
   float m_flMinLogExposure; // 0x8B4 - 0x8B8
   float m_flMaxLogExposure; // 0x8B8 - 0x8BC
   float m_flMinExposure; // 0x8BC - 0x8C0
   float m_flMaxExposure; // 0x8C0 - 0x8C4
   float m_flExposureCompensation; // 0x8C4 - 0x8C8
   float m_flExposureFadeSpeedUp; // 0x8C8 - 0x8CC
   float m_flExposureFadeSpeedDown; // 0x8CC - 0x8D0
   float m_flTonemapEVSmoothingRange; // 0x8D0 - 0x8D4
   bool m_bMaster; // 0x8D4 - 0x8D5
   bool m_bExposureControl; // 0x8D5 - 0x8D6
   unsigned char pad_8D6[0x2] // 0x8D6 - 0x8D8
   float m_flRate; // 0x8D8 - 0x8DC
   float m_flTonemapPercentTarget; // 0x8DC - 0x8E0
   float m_flTonemapPercentBrightPixels; // 0x8E0 - 0x8E4
   float m_flTonemapMinAvgLum; // 0x8E4 - 0x8E8

}; // size - 0x8E8


class CPrecipitation : public CBaseTrigger
{
public:


}; // size - 0x898


class CPrecipitationBlocker : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CPrecipitationVData : public CEntitySubclassVDataBase
{
public:

   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; // 0x28 - 0x108
   float m_flInnerDistance; // 0x108 - 0x10C
   ParticleAttachment_t m_nAttachType; // 0x10C - 0x110
   bool m_bBatchSameVolumeType; // 0x110 - 0x111
   unsigned char pad_111[0x3] // 0x111 - 0x114
   int32_t m_nRTEnvCP; // 0x114 - 0x118
   int32_t m_nRTEnvCPComponent; // 0x118 - 0x11C
   unsigned char pad_11C[0x4] // 0x11C - 0x120
   CUtlString m_szModifier; // 0x120 - 0x128

}; // size - 0x128


class CPrecipitationVData : public CEntitySubclassVDataBase
{
public:

   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; // 0x28 - 0x108
   float m_flInnerDistance; // 0x108 - 0x10C
   ParticleAttachment_t m_nAttachType; // 0x10C - 0x110
   bool m_bBatchSameVolumeType; // 0x110 - 0x111
   unsigned char pad_111[0x3] // 0x111 - 0x114
   int32_t m_nRTEnvCP; // 0x114 - 0x118
   int32_t m_nRTEnvCPComponent; // 0x118 - 0x11C
   unsigned char pad_11C[0x4] // 0x11C - 0x120
   CUtlString m_szModifier; // 0x120 - 0x128

}; // size - 0x128


class CProductQuantizer
{
public:

   CUtlVector< CVectorQuantizer > m_subQuantizers; // 0x0 - 0x18
   int32_t m_nDimensions; // 0x18 - 0x1C

}; // size - 0x20


class CProjectedDecal : public CPointEntity
{
public:

   int32_t m_nTexture; // 0x4A0 - 0x4A4
   float m_flDistance; // 0x4A4 - 0x4A8

}; // size - 0x4A8


class CProjectedTextureBase
{
public:

   CHandle< C_BaseEntity > m_hTargetEntity; // 0xC - 0x10
   bool m_bState; // 0x10 - 0x11
   bool m_bAlwaysUpdate; // 0x11 - 0x12
   unsigned char pad_12[0x2] // 0x12 - 0x14
   float m_flLightFOV; // 0x14 - 0x18
   bool m_bEnableShadows; // 0x18 - 0x19
   bool m_bSimpleProjection; // 0x19 - 0x1A
   bool m_bLightOnlyTarget; // 0x1A - 0x1B
   bool m_bLightWorld; // 0x1B - 0x1C
   bool m_bCameraSpace; // 0x1C - 0x1D
   unsigned char pad_1D[0x3] // 0x1D - 0x20
   float m_flBrightnessScale; // 0x20 - 0x24
   Color m_LightColor; // 0x24 - 0x28
   float m_flIntensity; // 0x28 - 0x2C
   float m_flLinearAttenuation; // 0x2C - 0x30
   float m_flQuadraticAttenuation; // 0x30 - 0x34
   bool m_bVolumetric; // 0x34 - 0x35
   unsigned char pad_35[0x3] // 0x35 - 0x38
   float m_flVolumetricIntensity; // 0x38 - 0x3C
   float m_flNoiseStrength; // 0x3C - 0x40
   float m_flFlashlightTime; // 0x40 - 0x44
   uint32_t m_nNumPlanes; // 0x44 - 0x48
   float m_flPlaneOffset; // 0x48 - 0x4C
   float m_flColorTransitionTime; // 0x4C - 0x50
   float m_flAmbient; // 0x50 - 0x54
   char m_SpotlightTextureName[512]; // 0x54 - 0x254
   int32_t m_nSpotlightTextureFrame; // 0x254 - 0x258
   uint32_t m_nShadowQuality; // 0x258 - 0x25C
   float m_flNearZ; // 0x25C - 0x260
   float m_flFarZ; // 0x260 - 0x264
   float m_flProjectionSize; // 0x264 - 0x268
   float m_flRotation; // 0x268 - 0x26C
   bool m_bFlipHorizontal; // 0x26C - 0x26D

}; // size - 0x2E0


class CPropCounter : public CBaseAnimGraph
{
public:

   float m_flDisplayValue; // 0x820 - 0x824
   int32_t m_nInitialValue; // 0x824 - 0x828

}; // size - 0x828


class CPushable : public CBreakable
{
public:


}; // size - 0x7B0


class CQuaternionAnimParameter : public CAnimParameterBase
{
public:

   Quaternion m_defaultValue; // 0x80 - 0x90
   bool m_bInterpolate; // 0x90 - 0x91

}; // size - 0xA0


class CRR_Response
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
   unsigned char pad_141[0x7] // 0x141 - 0x148
   ResponseParams m_Params; // 0x148 - 0x168
   float m_fMatchScore; // 0x168 - 0x16C
   unsigned char pad_16C[0x4] // 0x16C - 0x170
   char* m_szSpeakerContext; // 0x170 - 0x178
   char* m_szWorldContext; // 0x178 - 0x180
   ResponseFollowup m_Followup; // 0x180 - 0x1B1
   unsigned char pad_1B1[0x7] // 0x1B1 - 0x1B8
   CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1B8 - 0x1D0
   CUtlVector< char* > m_pchCriteriaValues; // 0x1D0 - 0x1E8

}; // size - 0x1E8


class CRagdoll : public IRagdoll
{
public:

   ragdoll_t m_ragdoll; // 0x8 - 0x40
   Vector m_mins; // 0x40 - 0x4C
   Vector m_maxs; // 0x4C - 0x58
   Vector m_origin; // 0x58 - 0x64
   float m_lastUpdate; // 0x64 - 0x68
   bool m_allAsleep; // 0x68 - 0x69
   unsigned char pad_69[0x3] // 0x69 - 0x6C
   Vector m_vecLastOrigin; // 0x6C - 0x78
   float m_flLastOriginChangeTime; // 0x78 - 0x7C
   float m_flAwakeTime; // 0x7C - 0x80

}; // size - 0x80


class CRagdollAnimNode : public CAnimNodeBase
{
public:

   CUtlString m_weightListName; // 0x38 - 0x40
   RagdollPoseControl m_poseControlMethod; // 0x40 - 0x44
   CAnimNodeConnection m_inputConnection; // 0x44 - 0x4C

}; // size - 0x50


class CRagdollAnimTag : public CAnimTagBase
{
public:

   AnimPoseControl m_nPoseControl; // 0x40 - 0x44
   float m_flFrequency; // 0x44 - 0x48
   float m_flDampingRatio; // 0x48 - 0x4C
   float m_flDecayDuration; // 0x4C - 0x50
   float m_flDecayBias; // 0x50 - 0x54
   bool m_bDestroy; // 0x54 - 0x55

}; // size - 0x58


class CRagdollComponent : public CAnimComponentBase
{
public:

   CUtlVector< CRigidBodyWeightList > m_weightLists; // 0x38 - 0x50
   float m_flSpringFrequencyMin; // 0x50 - 0x54
   float m_flSpringFrequencyMax; // 0x54 - 0x58

}; // size - 0x58


class CRagdollComponentUpdater : public CAnimComponentUpdater
{
public:

   CUtlVector< CAnimNodePath > m_ragdollNodePaths; // 0x30 - 0x48
   CUtlVector< int32 > m_boneIndices; // 0x48 - 0x60
   CUtlVector< CUtlString > m_boneNames; // 0x60 - 0x78
   CUtlVector< WeightList > m_weightLists; // 0x78 - 0x90
   float m_flSpringFrequencyMin; // 0x90 - 0x94
   float m_flSpringFrequencyMax; // 0x94 - 0x98

}; // size - 0xA0


class CRagdollConstraint : public CPhysConstraint
{
public:

   float m_xmin; // 0x4F8 - 0x4FC
   float m_xmax; // 0x4FC - 0x500
   float m_ymin; // 0x500 - 0x504
   float m_ymax; // 0x504 - 0x508
   float m_zmin; // 0x508 - 0x50C
   float m_zmax; // 0x50C - 0x510
   float m_xfriction; // 0x510 - 0x514
   float m_yfriction; // 0x514 - 0x518
   float m_zfriction; // 0x518 - 0x51C

}; // size - 0x520


class CRagdollMagnet : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   float m_radius; // 0x4A4 - 0x4A8
   float m_force; // 0x4A8 - 0x4AC
   Vector m_axis; // 0x4AC - 0x4B8

}; // size - 0x4B8


class CRagdollManager : public CBaseEntity
{
public:

   int8_t m_iCurrentMaxRagdollCount; // 0x4A0 - 0x4A1
   unsigned char pad_4A1[0x3] // 0x4A1 - 0x4A4
   int32_t m_iMaxRagdollCount; // 0x4A4 - 0x4A8
   bool m_bSaveImportant; // 0x4A8 - 0x4A9

}; // size - 0x4B0


class CRagdollPropAlias_physics_prop_ragdoll : public CRagdollProp
{
public:


}; // size - 0x9C8


class CRagdollPropAttached : public CRagdollProp
{
public:

   uint32_t m_boneIndexAttached; // 0x9C8 - 0x9CC
   uint32_t m_ragdollAttachedObjectIndex; // 0x9CC - 0x9D0
   Vector m_attachmentPointBoneSpace; // 0x9D0 - 0x9DC
   Vector m_attachmentPointRagdollSpace; // 0x9DC - 0x9E8
   bool m_bShouldDetach; // 0x9E8 - 0x9E9
   unsigned char pad_9E9[0xF] // 0x9E9 - 0x9F8
   bool m_bShouldDeleteAttachedActivationRecord; // 0x9F8 - 0x9F9

}; // size - 0xA08


class CRagdollUpdateNode : public CUnaryUpdateNode
{
public:

   int32_t m_nWeightListIndex; // 0x68 - 0x6C
   RagdollPoseControl m_poseControlMethod; // 0x6C - 0x70

}; // size - 0x70


class CRandSimTimer : public CSimpleSimTimer
{
public:

   float m_minInterval; // 0x8 - 0xC
   float m_maxInterval; // 0xC - 0x10

}; // size - 0x10


class CRandStopwatch : public CStopwatchBase
{
public:

   float m_minInterval; // 0xC - 0x10
   float m_maxInterval; // 0x10 - 0x14

}; // size - 0x14


class CRandomNumberGeneratorParameters
{
public:

   bool m_bDistributeEvenly; // 0x0 - 0x1
   unsigned char pad_1[0x3] // 0x1 - 0x4
   int32_t m_nSeed; // 0x4 - 0x8

}; // size - 0x8


class CRangeFloat
{
public:

   float32 m_pValue[2]; // 0x0 - 0x8

}; // size - 0x8


class CRangeInt
{
public:

   int32 m_pValue[2]; // 0x0 - 0x8

}; // size - 0x8


class CRectLight : public CBarnLight
{
public:

   bool m_bShowLight; // 0x918 - 0x919

}; // size - 0x920


class CRegionSVM
{
public:

   CUtlVector< RnPlane_t > m_Planes; // 0x0 - 0x18
   CUtlVector< uint32 > m_Nodes; // 0x18 - 0x30

}; // size - 0x30


class CRemapFloat
{
public:

   float32 m_pValue[4]; // 0x0 - 0x10

}; // size - 0x10


class CRenderBufferBinding
{
public:

   uint64_t m_hBuffer; // 0x0 - 0x8
   unsigned char pad_8[0x8] // 0x8 - 0x10
   uint32_t m_nBindOffsetBytes; // 0x10 - 0x14

}; // size - 0x18


class CRenderComponent : public CEntityComponent
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x10 - 0x38
   unsigned char pad_38[0x18] // 0x38 - 0x50
   bool m_bIsRenderingWithViewModels; // 0x50 - 0x51
   unsigned char pad_51[0x3] // 0x51 - 0x54
   uint32_t m_nSplitscreenFlags; // 0x54 - 0x58
   unsigned char pad_58[0x8] // 0x58 - 0x60
   bool m_bEnableRendering; // 0x60 - 0x61
   unsigned char pad_61[0x4F] // 0x61 - 0xB0
   bool m_bInterpolationReadyToDraw; // 0xB0 - 0xB1

}; // size - 0xB8


class CRenderComponent : public CEntityComponent
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x10 - 0x38
   unsigned char pad_38[0x18] // 0x38 - 0x50
   bool m_bIsRenderingWithViewModels; // 0x50 - 0x51
   unsigned char pad_51[0x3] // 0x51 - 0x54
   uint32_t m_nSplitscreenFlags; // 0x54 - 0x58
   unsigned char pad_58[0x8] // 0x58 - 0x60
   bool m_bEnableRendering; // 0x60 - 0x61
   unsigned char pad_61[0x4F] // 0x61 - 0xB0
   bool m_bInterpolationReadyToDraw; // 0xB0 - 0xB1

}; // size - 0xD8


class CRenderMesh
{
public:

   CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10 - 0xA0
   CUtlVector< CBaseConstraint* > m_constraints; // 0xA0 - 0xB8
   CRenderSkeleton m_skeleton; // 0xB8 - 0x108

}; // size - 0x1E0


class CRenderSkeleton
{
public:

   CUtlVector< RenderSkeletonBone_t > m_bones; // 0x0 - 0x18
   unsigned char pad_18[0x18] // 0x18 - 0x30
   CUtlVector< int32 > m_boneParents; // 0x30 - 0x48
   int32_t m_nBoneWeightCount; // 0x48 - 0x4C

}; // size - 0x50


class CResponseCriteriaSet
{
public:

   int32_t m_nNumPrefixedContexts; // 0x28 - 0x2C
   bool m_bOverrideOnAppend; // 0x2C - 0x2D

}; // size - 0x30


class CResponseQueue
{
public:

   class CDeferredResponse
   {
   public:

      CResponseCriteriaSet m_contexts; // 0x10 - 0x40
      float m_fDispatchTime; // 0x40 - 0x44
      CHandle< CBaseEntity > m_hIssuer; // 0x44 - 0x48
      unsigned char pad_48[0x8] // 0x48 - 0x50
      CRR_Response m_response; // 0x50 - 0x238
      bool m_bResponseValid; // 0x238 - 0x239

   }; // size - 0x240

   CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x50 - 0x68

}; // size - 0x68



class CRetakeGameRules
{
public:

   int32_t m_nMatchSeed; // 0xF8 - 0xFC
   bool m_bBlockersPresent; // 0xFC - 0xFD
   bool m_bRoundInProgress; // 0xFD - 0xFE
   unsigned char pad_FE[0x2] // 0xFE - 0x100
   int32_t m_iFirstSecondHalfRound; // 0x100 - 0x104
   int32_t m_iBombSite; // 0x104 - 0x108

}; // size - 0x198


class CRevertSaved : public CModelPointEntity
{
public:

   float m_loadTime; // 0x6F0 - 0x6F4
   float m_Duration; // 0x6F4 - 0x6F8
   float m_HoldTime; // 0x6F8 - 0x6FC

}; // size - 0x700


class CRigidBodyWeight
{
public:

   CUtlString m_name; // 0x0 - 0x8
   float m_flWeight; // 0x8 - 0xC

}; // size - 0x10


class CRigidBodyWeightList
{
public:

   CUtlString m_name; // 0x8 - 0x10
   CUtlVector< CRigidBodyWeight > m_weights; // 0x10 - 0x28

}; // size - 0x28


class CRootAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x50 - 0x58

}; // size - 0x58


class CRootUpdateNode : public CUnaryUpdateNode
{
public:


}; // size - 0x68


class CRopeKeyframeAlias_move_rope : public CRopeKeyframe
{
public:


}; // size - 0x748


class CRotDoor : public CBaseDoor
{
public:

   bool m_bSolidBsp; // 0x978 - 0x979

}; // size - 0x980


class CSAdditionalMatchStats_t : public CSAdditionalPerRoundStats_t
{
public:

   int32_t m_numRoundsSurvived; // 0x14 - 0x18
   int32_t m_maxNumRoundsSurvived; // 0x18 - 0x1C
   int32_t m_numRoundsSurvivedTotal; // 0x1C - 0x20
   int32_t m_iRoundsWonWithoutPurchase; // 0x20 - 0x24
   int32_t m_iRoundsWonWithoutPurchaseTotal; // 0x24 - 0x28
   int32_t m_numFirstKills; // 0x28 - 0x2C
   int32_t m_numClutchKills; // 0x2C - 0x30
   int32_t m_numPistolKills; // 0x30 - 0x34
   int32_t m_numSniperKills; // 0x34 - 0x38

}; // size - 0x38


class CSMatchStats_t : public CSPerRoundStats_t
{
public:

   int32_t m_iEnemy5Ks; // 0x68 - 0x6C
   int32_t m_iEnemy4Ks; // 0x6C - 0x70
   int32_t m_iEnemy3Ks; // 0x70 - 0x74

}; // size - 0x78


class CSMatchStats_t : public CSPerRoundStats_t
{
public:

   int32_t m_iEnemy5Ks; // 0x68 - 0x6C
   int32_t m_iEnemy4Ks; // 0x6C - 0x70
   int32_t m_iEnemy3Ks; // 0x70 - 0x74
   int32_t m_iEnemy2Ks; // 0x74 - 0x78
   int32_t m_iUtility_Count; // 0x78 - 0x7C
   int32_t m_iUtility_Successes; // 0x7C - 0x80
   int32_t m_iUtility_Enemies; // 0x80 - 0x84
   int32_t m_iFlash_Count; // 0x84 - 0x88
   int32_t m_iFlash_Successes; // 0x88 - 0x8C
   int32_t m_nHealthPointsRemovedTotal; // 0x8C - 0x90
   int32_t m_nHealthPointsDealtTotal; // 0x90 - 0x94
   int32_t m_nShotsFiredTotal; // 0x94 - 0x98
   int32_t m_nShotsOnTargetTotal; // 0x98 - 0x9C
   int32_t m_i1v1Count; // 0x9C - 0xA0
   int32_t m_i1v1Wins; // 0xA0 - 0xA4
   int32_t m_i1v2Count; // 0xA4 - 0xA8
   int32_t m_i1v2Wins; // 0xA8 - 0xAC
   int32_t m_iEntryCount; // 0xAC - 0xB0
   int32_t m_iEntryWins; // 0xB0 - 0xB4

}; // size - 0xB8


class CSSDSEndFrameViewInfo
{
public:

   uint64_t m_nViewId; // 0x0 - 0x8
   CUtlString m_ViewName; // 0x8 - 0x10

}; // size - 0x10


class CSSDSMsg_EndFrame
{
public:

   CUtlVector< CSSDSEndFrameViewInfo > m_Views; // 0x0 - 0x18

}; // size - 0x18


class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase
{
public:


}; // size - 0x38


class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase
{
public:


}; // size - 0x38


class CSSDSMsg_ViewRender
{
public:

   SceneViewId_t m_viewId; // 0x0 - 0x10
   CUtlString m_ViewName; // 0x10 - 0x18

}; // size - 0x18


class CSSDSMsg_ViewTarget
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


class CSSDSMsg_ViewTargetList
{
public:

   SceneViewId_t m_viewId; // 0x0 - 0x10
   CUtlString m_ViewName; // 0x10 - 0x18
   CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18 - 0x30

}; // size - 0x30


class CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity
{
public:


}; // size - 0xA00


class CSceneEventInfo
{
public:

   int32_t m_iLayer; // 0x0 - 0x4
   int32_t m_iPriority; // 0x4 - 0x8
   HSequence m_hSequence; // 0x8 - 0xC
   float m_flWeight; // 0xC - 0x10
   bool m_bIsMoving; // 0x10 - 0x11
   bool m_bHasArrived; // 0x11 - 0x12
   unsigned char pad_12[0x2] // 0x12 - 0x14
   float m_flInitialYaw; // 0x14 - 0x18
   float m_flTargetYaw; // 0x18 - 0x1C
   float m_flFacingYaw; // 0x1C - 0x20
   int32_t m_nType; // 0x20 - 0x24
   GameTime_t m_flNext; // 0x24 - 0x28
   bool m_bIsGesture; // 0x28 - 0x29
   bool m_bShouldRemove; // 0x29 - 0x2A
   unsigned char pad_2A[0x2A] // 0x2A - 0x54
   CHandle< CBaseEntity > m_hTarget; // 0x54 - 0x58
   uint32_t m_nSceneEventId; // 0x58 - 0x5C
   bool m_bClientSide; // 0x5C - 0x5D
   bool m_bStarted; // 0x5D - 0x5E

}; // size - 0x60


class CSceneListManager : public CLogicalEntity
{
public:

   CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x4A0 - 0x4B8
   CUtlSymbolLarge m_iszScenes[16]; // 0x4B8 - 0x538
   CHandle< CBaseEntity > m_hScenes[16]; // 0x538 - 0x578

}; // size - 0x578


class CSceneObjectData
{
public:

   Vector m_vMinBounds; // 0x0 - 0xC
   Vector m_vMaxBounds; // 0xC - 0x18
   CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x18 - 0x30
   CUtlVector< AABB_t > m_drawBounds; // 0x30 - 0x48
   CUtlVector< CMeshletDescriptor > m_meshlets; // 0x48 - 0x60
   Vector4D m_vTintColor; // 0x60 - 0x70

}; // size - 0x78


class CSchemaSystemInternalRegistration
{
public:

   Vector2D m_Vector2D; // 0x0 - 0x8
   Vector m_Vector; // 0x8 - 0x14
   unsigned char pad_14[0xC] // 0x14 - 0x20
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
   unsigned char pad_F4[0xC] // 0xF4 - 0x100
   CTransform m_CTransform; // 0x100 - 0x120
   KeyValues* m_pKeyValues; // 0x120 - 0x128
   CUtlBinaryBlock m_CUtlBinaryBlock; // 0x128 - 0x140
   CUtlString m_CUtlString; // 0x140 - 0x148
   CUtlSymbol m_CUtlSymbol; // 0x148 - 0x14A
   unsigned char pad_14A[0x2] // 0x14A - 0x14C
   CUtlStringToken m_stringToken; // 0x14C - 0x150
   CUtlStringTokenWithStorage m_stringTokenWithStorage; // 0x150 - 0x168
   CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x168 - 0x170
   KeyValues3 m_KV3; // 0x170 - 0x180

}; // size - 0x180


class CScriptComponent : public CEntityComponent
{
public:

   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x38

}; // size - 0x38


class CScriptComponent : public CEntityComponent
{
public:

   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x38

}; // size - 0x38


class CScriptComponent : public CEntityComponent
{
public:

   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x38

}; // size - 0x38


class CScriptComponent : public CEntityComponent
{
public:

   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x38

}; // size - 0x38


class CScriptItem : public CItem
{
public:

   CEntityIOOutput m_OnPlayerPickup; // 0x8F8 - 0x920
   MoveType_t m_MoveTypeOverride; // 0x920 - 0x921

}; // size - 0x928


class CScriptNavBlocker : public CFuncNavBlocker
{
public:

   Vector m_vExtent; // 0x700 - 0x70C

}; // size - 0x710


class CScriptTriggerHurt : public CTriggerHurt
{
public:

   Vector m_vExtent; // 0x938 - 0x944

}; // size - 0x948


class CScriptTriggerMultiple : public CTriggerMultiple
{
public:

   Vector m_vExtent; // 0x8C0 - 0x8CC

}; // size - 0x8D0


class CScriptTriggerOnce : public CTriggerOnce
{
public:

   Vector m_vExtent; // 0x8C0 - 0x8CC

}; // size - 0x8D0


class CScriptTriggerPush : public CTriggerPush
{
public:

   Vector m_vExtent; // 0x8C0 - 0x8CC

}; // size - 0x8D0


class CScriptUniformRandomStream
{
public:

   HSCRIPT m_hScriptScope; // 0x8 - 0x10
   unsigned char pad_10[0x8C] // 0x10 - 0x9C
   int32_t m_nInitialSeed; // 0x9C - 0xA0

}; // size - 0xA0


class CScriptedSequence : public CBaseEntity
{
public:

   CUtlSymbolLarge m_iszEntry; // 0x4A0 - 0x4A8
   CUtlSymbolLarge m_iszPreIdle; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_iszPlay; // 0x4B0 - 0x4B8
   CUtlSymbolLarge m_iszPostIdle; // 0x4B8 - 0x4C0
   CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_iszNextScript; // 0x4C8 - 0x4D0
   CUtlSymbolLarge m_iszEntity; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_iszSyncGroup; // 0x4D8 - 0x4E0
   ScriptedMoveTo_t m_nMoveTo; // 0x4E0 - 0x4E4
   bool m_bIsPlayingEntry; // 0x4E4 - 0x4E5
   bool m_bLoopActionSequence; // 0x4E5 - 0x4E6
   bool m_bSynchPostIdles; // 0x4E6 - 0x4E7
   bool m_bIgnoreGravity; // 0x4E7 - 0x4E8
   bool m_bDisableNPCCollisions; // 0x4E8 - 0x4E9
   bool m_bKeepAnimgraphLockedPost; // 0x4E9 - 0x4EA
   bool m_bDontAddModifiers; // 0x4EA - 0x4EB
   unsigned char pad_4EB[0x1] // 0x4EB - 0x4EC
   float m_flRadius; // 0x4EC - 0x4F0
   float m_flRepeat; // 0x4F0 - 0x4F4
   float m_flPlayAnimFadeInTime; // 0x4F4 - 0x4F8
   float m_flMoveInterpTime; // 0x4F8 - 0x4FC
   float m_flAngRate; // 0x4FC - 0x500
   int32_t m_iDelay; // 0x500 - 0x504
   GameTime_t m_startTime; // 0x504 - 0x508
   bool m_bWaitForBeginSequence; // 0x508 - 0x509
   unsigned char pad_509[0x3] // 0x509 - 0x50C
   int32_t m_saved_effects; // 0x50C - 0x510
   int32_t m_savedFlags; // 0x510 - 0x514
   int32_t m_savedCollisionGroup; // 0x514 - 0x518
   bool m_interruptable; // 0x518 - 0x519
   bool m_sequenceStarted; // 0x519 - 0x51A
   bool m_bPrevAnimatedEveryTick; // 0x51A - 0x51B
   bool m_bForcedAnimatedEveryTick; // 0x51B - 0x51C
   bool m_bPositionRelativeToOtherEntity; // 0x51C - 0x51D
   unsigned char pad_51D[0x3] // 0x51D - 0x520
   CHandle< CBaseEntity > m_hTargetEnt; // 0x520 - 0x524
   CHandle< CScriptedSequence > m_hNextCine; // 0x524 - 0x528
   bool m_bThinking; // 0x528 - 0x529
   bool m_bInitiatedSelfDelete; // 0x529 - 0x52A
   bool m_bIsTeleportingDueToMoveTo; // 0x52A - 0x52B
   bool m_bAllowCustomInterruptConditions; // 0x52B - 0x52C
   CHandle< CBaseEntity > m_hLastFoundEntity; // 0x52C - 0x530
   CHandle< CBaseAnimGraph > m_hForcedTarget; // 0x530 - 0x534
   bool m_bDontCancelOtherSequences; // 0x534 - 0x535
   bool m_bForceSynch; // 0x535 - 0x536
   bool m_bTargetWasAsleep; // 0x536 - 0x537
   bool m_bPreventUpdateYawOnFinish; // 0x537 - 0x538
   bool m_bEnsureOnNavmeshOnFinish; // 0x538 - 0x539
   unsigned char pad_539[0x3] // 0x539 - 0x53C
   ScriptedOnDeath_t m_onDeathBehavior; // 0x53C - 0x540
   ScriptedConflictResponse_t m_ConflictResponse; // 0x540 - 0x544
   unsigned char pad_544[0x4] // 0x544 - 0x548
   CEntityIOOutput m_OnBeginSequence; // 0x548 - 0x570
   CEntityIOOutput m_OnActionStartOrLoop; // 0x570 - 0x598
   CEntityIOOutput m_OnEndSequence; // 0x598 - 0x5C0
   CEntityIOOutput m_OnPostIdleEndSequence; // 0x5C0 - 0x5E8
   CEntityIOOutput m_OnCancelSequence; // 0x5E8 - 0x610
   CEntityIOOutput m_OnCancelFailedSequence; // 0x610 - 0x638
   CEntityIOOutput m_OnScriptEvent[8]; // 0x638 - 0x778
   unsigned char pad_778[0x8] // 0x778 - 0x780
   CTransform m_matOtherToMain; // 0x780 - 0x7A0
   CHandle< CBaseEntity > m_hInteractionMainEntity; // 0x7A0 - 0x7A4
   int32_t m_iPlayerDeathBehavior; // 0x7A4 - 0x7A8

}; // size - 0x7B0


class CSelectorAnimNode : public CAnimNodeBase
{
public:

   CUtlVector< CAnimNodeConnection > m_children; // 0x40 - 0x58
   CUtlVector< AnimTagID > m_tags; // 0x58 - 0x70
   SelectionSource_t m_selectionSource; // 0x70 - 0x74
   AnimParamID m_boolParamID; // 0x74 - 0x78
   AnimParamID m_enumParamID; // 0x78 - 0x7C
   unsigned char pad_7C[0x4] // 0x7C - 0x80
   CFloatAnimValue m_blendDuration; // 0x80 - 0x98
   SelectorTagBehavior_t m_tagBehavior; // 0x98 - 0x9C
   bool m_bResetOnChange; // 0x9C - 0x9D
   bool m_bSyncCyclesOnChange; // 0x9D - 0x9E
   unsigned char pad_9E[0x2] // 0x9E - 0xA0
   CBlendCurve m_blendCurve; // 0xA0 - 0xA8

}; // size - 0xA8


class CSelectorUpdateNode : public CAnimUpdateNodeBase
{
public:

   CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58 - 0x70
   CUtlVector< int8 > m_tags; // 0x70 - 0x88
   unsigned char pad_88[0x4] // 0x88 - 0x8C
   CBlendCurve m_blendCurve; // 0x8C - 0x94
   CAnimValue< float32 > m_flBlendTime; // 0x94 - 0x9C
   CAnimParamHandle m_hParameter; // 0x9C - 0x9E
   unsigned char pad_9E[0x2] // 0x9E - 0xA0
   SelectorTagBehavior_t m_eTagBehavior; // 0xA0 - 0xA4
   bool m_bResetOnChange; // 0xA4 - 0xA5
   bool m_bSyncCyclesOnChange; // 0xA5 - 0xA6

}; // size - 0xA8


class CSensorGrenade : public CBaseCSGrenade
{
public:


}; // size - 0xD90


class CSensorGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:

   GameTime_t m_fExpireTime; // 0x9A0 - 0x9A4
   GameTime_t m_fNextDetectPlayerSound; // 0x9A4 - 0x9A8
   CHandle< CBaseEntity > m_hDisplayGrenade; // 0x9A8 - 0x9AC

}; // size - 0x9B0


class CSeqAutoLayer
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


class CSeqAutoLayerFlag
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


class CSeqBoneMaskList
{
public:

   CBufferString m_sName; // 0x0 - 0x10
   CUtlVector< int16 > m_nLocalBoneArray; // 0x10 - 0x28
   CUtlVector< float32 > m_flBoneWeightArray; // 0x28 - 0x40
   float m_flDefaultMorphCtrlWeight; // 0x40 - 0x44
   unsigned char pad_44[0x4] // 0x44 - 0x48
   CUtlVector< CUtlPair< CBufferString, float32 > > m_morphCtrlWeightArray; // 0x48 - 0x60

}; // size - 0x60


class CSeqCmdLayer
{
public:

   int16_t m_cmd; // 0x0 - 0x2
   int16_t m_nLocalReference; // 0x2 - 0x4
   int16_t m_nLocalBonemask; // 0x4 - 0x6
   int16_t m_nDstResult; // 0x6 - 0x8
   int16_t m_nSrcResult; // 0x8 - 0xA
   bool m_bSpline; // 0xA - 0xB
   unsigned char pad_B[0x1] // 0xB - 0xC
   float m_flVar1; // 0xC - 0x10
   float m_flVar2; // 0x10 - 0x14
   int16_t m_nLineNumber; // 0x14 - 0x16

}; // size - 0x18


class CSeqCmdSeqDesc
{
public:

   CBufferString m_sName; // 0x0 - 0x10
   CSeqSeqDescFlag m_flags; // 0x10 - 0x1B
   unsigned char pad_1B[0x1] // 0x1B - 0x1C
   CSeqTransition m_transition; // 0x1C - 0x24
   int16_t m_nFrameRangeSequence; // 0x24 - 0x26
   int16_t m_nFrameCount; // 0x26 - 0x28
   float m_flFPS; // 0x28 - 0x2C
   int16_t m_nSubCycles; // 0x2C - 0x2E
   int16_t m_numLocalResults; // 0x2E - 0x30
   CUtlVector< CSeqCmdLayer > m_cmdLayerArray; // 0x30 - 0x48
   CUtlVector< CAnimAnimEvent > m_eventArray; // 0x48 - 0x60
   CUtlVector< CAnimActivity > m_activityArray; // 0x60 - 0x78
   CUtlVector< CSeqPoseSetting > m_poseSettingArray; // 0x78 - 0x90

}; // size - 0x90


class CSeqIKLock
{
public:

   float m_flPosWeight; // 0x0 - 0x4
   float m_flAngleWeight; // 0x4 - 0x8
   int16_t m_nLocalBone; // 0x8 - 0xA
   bool m_bBonesOrientedAlongPositiveX; // 0xA - 0xB

}; // size - 0xC


class CSeqMultiFetch
{
public:

   CSeqMultiFetchFlag m_flags; // 0x0 - 0x6
   unsigned char pad_6[0x2] // 0x6 - 0x8
   CUtlVector< int16 > m_localReferenceArray; // 0x8 - 0x20
   int32 m_nGroupSize[2]; // 0x20 - 0x28
   int32 m_nLocalPose[2]; // 0x28 - 0x30
   CUtlVector< float32 > m_poseKeyArray0; // 0x30 - 0x48
   CUtlVector< float32 > m_poseKeyArray1; // 0x48 - 0x60
   int32_t m_nLocalCyclePoseParameter; // 0x60 - 0x64
   bool m_bCalculatePoseParameters; // 0x64 - 0x65

}; // size - 0x68


class CSeqMultiFetchFlag
{
public:

   bool m_bRealtime; // 0x0 - 0x1
   bool m_bCylepose; // 0x1 - 0x2
   bool m_b0D; // 0x2 - 0x3
   bool m_b1D; // 0x3 - 0x4
   bool m_b2D; // 0x4 - 0x5
   bool m_b2D_TRI; // 0x5 - 0x6

}; // size - 0x6


class CSeqPoseParamDesc
{
public:

   CBufferString m_sName; // 0x0 - 0x10
   float m_flStart; // 0x10 - 0x14
   float m_flEnd; // 0x14 - 0x18
   float m_flLoop; // 0x18 - 0x1C
   bool m_bLooping; // 0x1C - 0x1D

}; // size - 0x20


class CSeqPoseSetting
{
public:

   CBufferString m_sPoseParameter; // 0x0 - 0x10
   CBufferString m_sAttachment; // 0x10 - 0x20
   CBufferString m_sReferenceSequence; // 0x20 - 0x30
   float m_flValue; // 0x30 - 0x34
   bool m_bX; // 0x34 - 0x35
   bool m_bY; // 0x35 - 0x36
   bool m_bZ; // 0x36 - 0x37
   unsigned char pad_37[0x1] // 0x37 - 0x38
   int32_t m_eType; // 0x38 - 0x3C

}; // size - 0x40


class CSeqS1SeqDesc
{
public:

   CBufferString m_sName; // 0x0 - 0x10
   CSeqSeqDescFlag m_flags; // 0x10 - 0x1B
   unsigned char pad_1B[0x5] // 0x1B - 0x20
   CSeqMultiFetch m_fetch; // 0x20 - 0x88
   int32_t m_nLocalWeightlist; // 0x88 - 0x8C
   unsigned char pad_8C[0x4] // 0x8C - 0x90
   CUtlVector< CSeqAutoLayer > m_autoLayerArray; // 0x90 - 0xA8
   CUtlVector< CSeqIKLock > m_IKLockArray; // 0xA8 - 0xC0
   CSeqTransition m_transition; // 0xC0 - 0xC8
   KeyValues3 m_SequenceKeys; // 0xC8 - 0xD8
   CBufferString m_LegacyKeyValueText; // 0xD8 - 0xE8
   CUtlVector< CAnimActivity > m_activityArray; // 0xE8 - 0x100
   CUtlVector< CFootMotion > m_footMotion; // 0x100 - 0x118

}; // size - 0x118


class CSeqScaleSet
{
public:

   CBufferString m_sName; // 0x0 - 0x10
   CUtlVector< int16 > m_nLocalBoneArray; // 0x10 - 0x28
   CUtlVector< float32 > m_flBoneScaleArray; // 0x28 - 0x40

}; // size - 0x40


class CSeqSeqDescFlag
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


class CSeqSynthAnimDesc
{
public:

   CBufferString m_sName; // 0x0 - 0x10
   CSeqSeqDescFlag m_flags; // 0x10 - 0x1B
   unsigned char pad_1B[0x1] // 0x1B - 0x1C
   CSeqTransition m_transition; // 0x1C - 0x24
   int16_t m_nLocalBaseReference; // 0x24 - 0x26
   int16_t m_nLocalBoneMask; // 0x26 - 0x28
   CUtlVector< CAnimActivity > m_activityArray; // 0x28 - 0x40

}; // size - 0x40


class CSeqTransition
{
public:

   float m_flFadeInTime; // 0x0 - 0x4
   float m_flFadeOutTime; // 0x4 - 0x8

}; // size - 0x8


class CSequenceBlend2DItem : public CBlend2DItemBase
{
public:

   CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x38 - 0x50
   CUtlString m_sequenceName; // 0x50 - 0x58

}; // size - 0x58


class CSequenceFinishedAnimTag : public CAnimTagBase
{
public:

   CUtlString m_sequenceName; // 0x40 - 0x48

}; // size - 0x48


class CSequenceGroupData
{
public:

   CBufferString m_sName; // 0x10 - 0x20
   uint32_t m_nFlags; // 0x20 - 0x24
   unsigned char pad_24[0x4] // 0x24 - 0x28
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


class CSequenceMotionItem : public CMotionItem
{
public:

   CUtlString m_sequenceName; // 0xB0 - 0xB8

}; // size - 0xB8


class CServerOnlyModelEntity : public C_BaseModelEntity
{
public:


}; // size - 0x838


class CServerRagdollTrigger : public CBaseTrigger
{
public:


}; // size - 0x898


class CSetFacingAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   FacingMode m_facingMode; // 0x40 - 0x44
   bool m_bResetChild; // 0x44 - 0x45

}; // size - 0x48


class CSetFacingUpdateNode : public CUnaryUpdateNode
{
public:

   FacingMode m_facingMode; // 0x68 - 0x6C
   bool m_bResetChild; // 0x6C - 0x6D

}; // size - 0x70


class CSetParameterAction : public CAnimActionBase
{
public:

   AnimParamID m_param; // 0x28 - 0x2C
   CAnimVariant m_value; // 0x2C - 0x3D

}; // size - 0x40


class CSetParameterActionUpdater : public CAnimActionUpdater
{
public:

   CAnimParamHandle m_hParam; // 0x18 - 0x1A
   CAnimVariant m_value; // 0x1A - 0x2B

}; // size - 0x30


class CShatterGlassShard
{
public:

   uint32_t m_hShardHandle; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< Vector2D > m_vecPanelVertices; // 0x10 - 0x28
   Vector2D m_vLocalPanelSpaceOrigin; // 0x28 - 0x30
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x30 - 0x38
   CHandle< CShatterGlassShardPhysics > m_hPhysicsEntity; // 0x38 - 0x3C
   CHandle< CFuncShatterglass > m_hParentPanel; // 0x3C - 0x40
   uint32_t m_hParentShard; // 0x40 - 0x44
   ShatterGlassStressType m_ShatterStressType; // 0x44 - 0x45
   unsigned char pad_45[0x3] // 0x45 - 0x48
   Vector m_vecStressVelocity; // 0x48 - 0x54
   bool m_bCreatedModel; // 0x54 - 0x55
   unsigned char pad_55[0x3] // 0x55 - 0x58
   float m_flLongestEdge; // 0x58 - 0x5C
   float m_flShortestEdge; // 0x5C - 0x60
   float m_flLongestAcross; // 0x60 - 0x64
   float m_flShortestAcross; // 0x64 - 0x68
   float m_flSumOfAllEdges; // 0x68 - 0x6C
   float m_flArea; // 0x6C - 0x70
   OnFrame m_nOnFrameEdge; // 0x70 - 0x71
   unsigned char pad_71[0x3] // 0x71 - 0x74
   int32_t m_nParentPanelsNthShard; // 0x74 - 0x78
   int32_t m_nSubShardGeneration; // 0x78 - 0x7C
   Vector2D m_vecAverageVertPosition; // 0x7C - 0x84
   bool m_bAverageVertPositionIsValid; // 0x84 - 0x85
   unsigned char pad_85[0x3] // 0x85 - 0x88
   Vector2D m_vecPanelSpaceStressPositionA; // 0x88 - 0x90
   Vector2D m_vecPanelSpaceStressPositionB; // 0x90 - 0x98
   bool m_bStressPositionAIsValid; // 0x98 - 0x99
   bool m_bStressPositionBIsValid; // 0x99 - 0x9A
   bool m_bFlaggedForRemoval; // 0x9A - 0x9B
   unsigned char pad_9B[0x1] // 0x9B - 0x9C
   GameTime_t m_flPhysicsEntitySpawnedAtTime; // 0x9C - 0xA0
   bool m_bShatterRateLimited; // 0xA0 - 0xA1
   unsigned char pad_A1[0x3] // 0xA1 - 0xA4
   CHandle< CBaseEntity > m_hEntityHittingMe; // 0xA4 - 0xA8
   CUtlVector< uint32 > m_vecNeighbors; // 0xA8 - 0xC0

}; // size - 0xC0


class CShatterGlassShardPhysics : public CPhysicsProp
{
public:

   bool m_bDebris; // 0xB00 - 0xB01
   unsigned char pad_B01[0x3] // 0xB01 - 0xB04
   uint32_t m_hParentShard; // 0xB04 - 0xB08
   shard_model_desc_t m_ShardDesc; // 0xB08 - 0xB68

}; // size - 0xB68


class CShower : public CModelPointEntity
{
public:


}; // size - 0x6F0


class CSimTimer : public CSimpleSimTimer
{
public:

   float m_interval; // 0x8 - 0xC

}; // size - 0xC


class CSimpleMarkupVolumeTagged : public CMarkupVolumeTagged
{
public:


}; // size - 0x730


class CSimpleStopwatch : public CStopwatchBase
{
public:


}; // size - 0xC


class CSingleFrameAnimNode : public CAnimNodeBase
{
public:

   CUtlString m_sequenceName; // 0x50 - 0x58
   SingleFrameSelection m_eFrameSelection; // 0x58 - 0x5C
   int32_t m_nFrameIndex; // 0x5C - 0x60
   CUtlVector< CSmartPtr< CAnimActionBase > > m_actions; // 0x60 - 0x78

}; // size - 0x78


class CSingleFrameUpdateNode : public CLeafUpdateNode
{
public:

   CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x58 - 0x70
   CPoseHandle m_hPoseCacheHandle; // 0x70 - 0x74
   HSequence m_hSequence; // 0x74 - 0x78
   float m_flCycle; // 0x78 - 0x7C

}; // size - 0x80


class CSingleplayRules : public CGameRules
{
public:

   bool m_bSinglePlayerGameEnding; // 0x90 - 0x91

}; // size - 0x98


class CSkeletalInputAnimNode : public CAnimNodeBase
{
public:

   AnimVrBoneTransformSource_t m_transformSource; // 0x38 - 0x3C
   AnimVRHandMotionRange_t m_motionRange; // 0x3C - 0x40
   bool m_bEnableIK; // 0x40 - 0x41
   bool m_bEnableCollision; // 0x41 - 0x42

}; // size - 0x48


class CSkeletalInputUpdateNode : public CLeafUpdateNode
{
public:

   SkeletalInputOpFixedSettings_t m_fixedOpData; // 0x58 - 0xA0

}; // size - 0xA8


class CSkeletonInstance : public CGameSceneNode
{
public:

   CModelState m_modelState; // 0x160 - 0x390
   bool m_bIsAnimationEnabled; // 0x390 - 0x391
   bool m_bUseParentRenderBounds; // 0x391 - 0x392
   bool m_bDisableSolidCollisionsForHierarchy; // 0x392 - 0x393
   bitfield:1 m_bDirtyMotionType; // 0x0 - 0x0
   bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0 - 0x0
   unsigned char pad_0[0x394] // 0x0 - 0x394
   CUtlStringToken m_materialGroup; // 0x394 - 0x398
   uint8_t m_nHitboxSet; // 0x398 - 0x399

}; // size - 0x3F0


class CSkeletonInstance : public CGameSceneNode
{
public:

   CModelState m_modelState; // 0x160 - 0x390
   bool m_bIsAnimationEnabled; // 0x390 - 0x391
   bool m_bUseParentRenderBounds; // 0x391 - 0x392
   bool m_bDisableSolidCollisionsForHierarchy; // 0x392 - 0x393
   bitfield:1 m_bDirtyMotionType; // 0x0 - 0x0
   bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0 - 0x0
   unsigned char pad_0[0x394] // 0x0 - 0x394
   CUtlStringToken m_materialGroup; // 0x394 - 0x398
   uint8_t m_nHitboxSet; // 0x398 - 0x399

}; // size - 0x3F0


class CSkillDamage
{
public:

   CSkillFloat m_flDamage; // 0x0 - 0x10
   float m_flPhysicsForceDamage; // 0x10 - 0x14

}; // size - 0x14


class CSkillFloat
{
public:

   float32 m_pValue[4]; // 0x0 - 0x10

}; // size - 0x10


class CSkillInt
{
public:

   int32 m_pValue[4]; // 0x0 - 0x10

}; // size - 0x10


class CSkyCamera : public CBaseEntity
{
public:

   sky3dparams_t m_skyboxData; // 0x4A0 - 0x530
   CUtlStringToken m_skyboxSlotToken; // 0x530 - 0x534
   bool m_bUseAngles; // 0x534 - 0x535
   unsigned char pad_535[0x3] // 0x535 - 0x538
   CSkyCamera* m_pNext; // 0x538 - 0x540

}; // size - 0x540


class CSkyboxReference : public C_BaseEntity
{
public:

   WorldGroupId_t m_worldGroupId; // 0x538 - 0x53C
   CHandle< C_SkyCamera > m_hSkyCamera; // 0x53C - 0x540

}; // size - 0x540


class CSkyboxReference : public CBaseEntity
{
public:

   WorldGroupId_t m_worldGroupId; // 0x4A0 - 0x4A4
   CHandle< CSkyCamera > m_hSkyCamera; // 0x4A4 - 0x4A8

}; // size - 0x4A8


class CSlopeComponent : public CAnimComponentBase
{
public:

   float m_flTraceDistance; // 0x40 - 0x44
   AnimParamID m_slopeAngleID; // 0x44 - 0x48
   AnimParamID m_slopeHeadingID; // 0x48 - 0x4C
   AnimParamID m_slopeAngleSideID; // 0x4C - 0x50
   AnimParamID m_slopeAngleFrontID; // 0x50 - 0x54
   AnimParamID m_slopeNormalID; // 0x54 - 0x58
   AnimParamID m_slopeNormal_WorldSpaceID; // 0x58 - 0x5C

}; // size - 0x60


class CSlopeComponentUpdater : public CAnimComponentUpdater
{
public:

   float m_flTraceDistance; // 0x34 - 0x38
   CAnimParamHandle m_hSlopeAngle; // 0x38 - 0x3A
   CAnimParamHandle m_hSlopeAngleFront; // 0x3A - 0x3C
   CAnimParamHandle m_hSlopeAngleSide; // 0x3C - 0x3E
   CAnimParamHandle m_hSlopeHeading; // 0x3E - 0x40
   CAnimParamHandle m_hSlopeNormal; // 0x40 - 0x42
   CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x42 - 0x44

}; // size - 0x48


class CSlowDownOnSlopesAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   float m_flSlowDownStrength; // 0x40 - 0x44

}; // size - 0x48


class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode
{
public:

   float m_flSlowDownStrength; // 0x68 - 0x6C

}; // size - 0x70


class CSmokeGrenade : public CBaseCSGrenade
{
public:


}; // size - 0xD98


class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:

   int32_t m_nSmokeEffectTickBegin; // 0x9B8 - 0x9BC
   bool m_bDidSmokeEffect; // 0x9BC - 0x9BD
   unsigned char pad_9BD[0x3] // 0x9BD - 0x9C0
   int32_t m_nRandomSeed; // 0x9C0 - 0x9C4
   Vector m_vSmokeColor; // 0x9C4 - 0x9D0
   Vector m_vSmokeDetonationPos; // 0x9D0 - 0x9DC
   unsigned char pad_9DC[0x4] // 0x9DC - 0x9E0
   CUtlVector< uint8 > m_VoxelFrameData; // 0x9E0 - 0x9F8
   GameTime_t m_flLastBounce; // 0x9F8 - 0x9FC
   GameTime_t m_fllastSimulationTime; // 0x9FC - 0xA00

}; // size - 0xB90


class CSmoothFunc
{
public:

   float m_flSmoothAmplitude; // 0x8 - 0xC
   float m_flSmoothBias; // 0xC - 0x10
   float m_flSmoothDuration; // 0x10 - 0x14
   float m_flSmoothRemainingTime; // 0x14 - 0x18
   int32_t m_nSmoothDir; // 0x18 - 0x1C

}; // size - 0x20


class CSolveIKChainAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x40 - 0x48
   CUtlVector< CSolveIKChainAnimNodeChainData > m_IkChains; // 0x48 - 0x60

}; // size - 0x60


class CSolveIKChainAnimNodeChainData
{
public:

   CUtlString m_IkChain; // 0x8 - 0x10
   SolveIKChainAnimNodeSettingSource m_SolverSettingSource; // 0x10 - 0x14
   IKSolverSettings_t m_OverrideSolverSettings; // 0x14 - 0x1C
   SolveIKChainAnimNodeSettingSource m_TargetSettingSource; // 0x1C - 0x20
   IKTargetSettings_t m_OverrideTargetSettings; // 0x20 - 0x40
   SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x40 - 0x44
   float m_flDebugNormalizedLength; // 0x44 - 0x48
   Vector m_vDebugOffset; // 0x48 - 0x54

}; // size - 0x58


class CSolveIKChainUpdateNode : public CUnaryUpdateNode
{
public:

   CUtlVector< CAnimParamHandle > m_targetHandles; // 0x68 - 0x80
   SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80 - 0x98

}; // size - 0xA0


class CSosGroupActionLimitSchema : public CSosGroupActionSchema
{
public:

   int32_t m_nMaxCount; // 0x18 - 0x1C
   SosActionStopType_t m_nStopType; // 0x1C - 0x20
   SosActionSortType_t m_nSortType; // 0x20 - 0x24

}; // size - 0x28


class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema
{
public:

   float m_flMaxDuration; // 0x18 - 0x1C

}; // size - 0x20


class CSosGroupMatchPattern : public CSosGroupBranchPattern
{
public:

   CUtlString m_matchSoundEventName; // 0x10 - 0x18
   CUtlString m_matchSoundEventSubString; // 0x18 - 0x20
   float m_flEntIndex; // 0x20 - 0x24
   float m_flOpvar; // 0x24 - 0x28

}; // size - 0x28


class CSosSoundEventGroupListSchema
{
public:

   CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0 - 0x18

}; // size - 0x18


class CSosSoundEventGroupSchema
{
public:

   CUtlString m_name; // 0x0 - 0x8
   SosGroupType_t m_nType; // 0x8 - 0xC
   bool m_bIsBlocking; // 0xC - 0xD
   unsigned char pad_D[0x3] // 0xD - 0x10
   int32_t m_nBlockMaxCount; // 0x10 - 0x14
   bool m_bInvertMatch; // 0x14 - 0x15
   unsigned char pad_15[0x3] // 0x15 - 0x18
   CSosGroupMatchPattern m_matchPattern; // 0x18 - 0x40
   CSosGroupBranchPattern m_branchPattern; // 0x40 - 0x50
   unsigned char pad_50[0x60] // 0x50 - 0xB0
   CSosGroupActionSchema* m_vActions[4]; // 0xB0 - 0xD0

}; // size - 0xD0


class CSound
{
public:

   CHandle< CBaseEntity > m_hOwner; // 0x0 - 0x4
   CHandle< CBaseEntity > m_hTarget; // 0x4 - 0x8
   int32_t m_iVolume; // 0x8 - 0xC
   float m_flOcclusionScale; // 0xC - 0x10
   int32_t m_iType; // 0x10 - 0x14
   int32_t m_iNextAudible; // 0x14 - 0x18
   GameTime_t m_flExpireTime; // 0x18 - 0x1C
   int16_t m_iNext; // 0x1C - 0x1E
   bool m_bNoExpirationTime; // 0x1E - 0x1F
   unsigned char pad_1F[0x1] // 0x1F - 0x20
   int32_t m_ownerChannelIndex; // 0x20 - 0x24
   Vector m_vecOrigin; // 0x24 - 0x30
   bool m_bHasOwner; // 0x30 - 0x31

}; // size - 0x34


class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase
{
public:

   Vector m_vMin; // 0x4C0 - 0x4CC
   Vector m_vMax; // 0x4CC - 0x4D8

}; // size - 0x4D8


class CSoundAreaEntitySphere : public CSoundAreaEntityBase
{
public:

   float m_flRadius; // 0x4C0 - 0x4C4

}; // size - 0x4C8


class CSoundEnt : public CPointEntity
{
public:

   int32_t m_iFreeSound; // 0x4A0 - 0x4A4
   int32_t m_iActiveSound; // 0x4A4 - 0x4A8
   int32_t m_cLastActiveSounds; // 0x4A8 - 0x4AC
   CSound m_SoundPool[128]; // 0x4AC - 0x1EAC

}; // size - 0x1EB0


class CSoundEnvelope
{
public:

   float m_current; // 0x0 - 0x4
   float m_target; // 0x4 - 0x8
   float m_rate; // 0x8 - 0xC
   bool m_forceupdate; // 0xC - 0xD

}; // size - 0x10


class CSoundEventAABBEntity : public CSoundEventEntity
{
public:

   Vector m_vMins; // 0x548 - 0x554
   Vector m_vMaxs; // 0x554 - 0x560

}; // size - 0x560


class CSoundEventEntityAlias_snd_event_point : public CSoundEventEntity
{
public:


}; // size - 0x548


class CSoundEventMetaData
{
public:

   CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix; // 0x0 - 0x8

}; // size - 0x8


class CSoundEventParameter : public CBaseEntity
{
public:

   CUtlSymbolLarge m_iszParamName; // 0x4A8 - 0x4B0
   float m_flFloatValue; // 0x4B0 - 0x4B4

}; // size - 0x4B8


class CSoundEventPathCornerEntity : public CSoundEventEntity
{
public:

   CUtlSymbolLarge m_iszPathCorner; // 0x548 - 0x550
   int32_t m_iCountMax; // 0x550 - 0x554
   float m_flDistanceMax; // 0x554 - 0x558
   float m_flDistMaxSqr; // 0x558 - 0x55C
   float m_flDotProductMax; // 0x55C - 0x560
   bool bPlaying; // 0x560 - 0x561

}; // size - 0x588


class CSoundOpvarSetEntity : public CBaseEntity
{
public:

   CUtlSymbolLarge m_iszStackName; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_iszOperatorName; // 0x4B0 - 0x4B8
   CUtlSymbolLarge m_iszOpvarName; // 0x4B8 - 0x4C0
   int32_t m_nOpvarType; // 0x4C0 - 0x4C4
   int32_t m_nOpvarIndex; // 0x4C4 - 0x4C8
   float m_flOpvarValue; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4] // 0x4CC - 0x4D0
   CUtlSymbolLarge m_OpvarValueString; // 0x4D0 - 0x4D8
   bool m_bSetOnSpawn; // 0x4D8 - 0x4D9

}; // size - 0x4E8


class CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity
{
public:


}; // size - 0x6A0


class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase
{
public:

   Vector m_vMins; // 0x538 - 0x544
   Vector m_vMaxs; // 0x544 - 0x550
   Vector m_vDistanceMins; // 0x550 - 0x55C
   Vector m_vDistanceMaxs; // 0x55C - 0x568
   float m_flWindMin; // 0x568 - 0x56C
   float m_flWindMax; // 0x56C - 0x570
   float m_flWindMapMin; // 0x570 - 0x574
   float m_flWindMapMax; // 0x574 - 0x578

}; // size - 0x578


class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity
{
public:

   float m_flDistMinSqr; // 0x650 - 0x654
   float m_flDistMaxSqr; // 0x654 - 0x658
   CUtlSymbolLarge m_iszPathCornerEntityName; // 0x658 - 0x660

}; // size - 0x660


class CSoundPatch
{
public:

   CSoundEnvelope m_pitch; // 0x8 - 0x18
   CSoundEnvelope m_volume; // 0x18 - 0x28
   unsigned char pad_28[0x8] // 0x28 - 0x30
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
   unsigned char pad_85[0x3] // 0x85 - 0x88
   CUtlSymbolLarge m_iszClassName; // 0x88 - 0x90

}; // size - 0x90


class CSoundStackSave : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_iszStackName; // 0x4A0 - 0x4A8

}; // size - 0x4A8


class CSpeedScaleAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   AnimParamID m_param; // 0x40 - 0x44

}; // size - 0x48


class CSpeedScaleUpdateNode : public CUnaryUpdateNode
{
public:

   CAnimParamHandle m_paramIndex; // 0x68 - 0x6A

}; // size - 0x70


class CSplineConstraint : public CPhysConstraint
{
public:


}; // size - 0x540


class CSpotlightEnd : public CBaseModelEntity
{
public:

   float m_flLightScale; // 0x6F0 - 0x6F4
   float m_Radius; // 0x6F4 - 0x6F8
   Vector m_vSpotlightDir; // 0x6F8 - 0x704
   Vector m_vSpotlightOrg; // 0x704 - 0x710

}; // size - 0x710


class CSprayCan : public CPointEntity
{
public:


}; // size - 0x4A0


class CSpriteAlias_env_glow : public CSprite
{
public:


}; // size - 0x760


class CSpriteOriented : public CSprite
{
public:


}; // size - 0x760


class CStanceOverrideAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   CAnimNodeConnection m_stanceSourceConnection; // 0x40 - 0x48
   AnimParamID m_blendParamID; // 0x48 - 0x4C
   StanceOverrideMode m_eMode; // 0x4C - 0x50
   CUtlString m_sequenceName; // 0x50 - 0x58
   int32_t m_nFrameIndex; // 0x58 - 0x5C

}; // size - 0x60


class CStanceOverrideUpdateNode : public CUnaryUpdateNode
{
public:

   CUtlVector< StanceInfo_t > m_footStanceInfo; // 0x68 - 0x80
   CAnimUpdateNodeRef m_pStanceSourceNode; // 0x80 - 0x90
   CAnimParamHandle m_hParameter; // 0x90 - 0x92
   unsigned char pad_92[0x2] // 0x92 - 0x94
   StanceOverrideMode m_eMode; // 0x94 - 0x98

}; // size - 0x98


class CStanceScaleAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   AnimParamID m_param; // 0x40 - 0x44

}; // size - 0x48


class CStanceScaleUpdateNode : public CUnaryUpdateNode
{
public:

   CAnimParamHandle m_hParam; // 0x68 - 0x6A

}; // size - 0x70


class CStateAction
{
public:

   CSmartPtr< CAnimActionBase > m_pAction; // 0x8 - 0x10
   StateActionBehavior m_eBehavior; // 0x10 - 0x14

}; // size - 0x18


class CStateActionUpdater
{
public:

   CSmartPtr< CAnimActionUpdater > m_pAction; // 0x0 - 0x8
   StateActionBehavior m_eBehavior; // 0x8 - 0xC

}; // size - 0x10


class CStateMachineAnimNode : public CAnimNodeBase
{
public:

   bool m_bBlockWaningTags; // 0x60 - 0x61
   bool m_bLockStateWhenWaning; // 0x61 - 0x62

}; // size - 0x68


class CStateMachineComponent : public CAnimComponentBase
{
public:

   CUtlString m_sName; // 0x60 - 0x68

}; // size - 0x68


class CStateMachineComponentUpdater : public CAnimComponentUpdater
{
public:

   CAnimStateMachineUpdater m_stateMachine; // 0x30 - 0x88

}; // size - 0x88


class CStateMachineUpdateNode : public CAnimUpdateNodeBase
{
public:

   CAnimStateMachineUpdater m_stateMachine; // 0x68 - 0xC0
   CUtlVector< CStateNodeStateData > m_stateData; // 0xC0 - 0xD8
   CUtlVector< CStateNodeTransitionData > m_transitionData; // 0xD8 - 0xF0
   unsigned char pad_F0[0x4] // 0xF0 - 0xF4
   bool m_bBlockWaningTags; // 0xF4 - 0xF5
   bool m_bLockStateWhenWaning; // 0xF5 - 0xF6

}; // size - 0xF8


class CStateNodeStateData
{
public:

   CAnimUpdateNodeRef m_pChild; // 0x0 - 0x10
   bitfield:1 m_bExclusiveRootMotion; // 0x0 - 0x0

}; // size - 0x18


class CStateNodeTransitionData
{
public:

   CBlendCurve m_curve; // 0x0 - 0x8
   CAnimValue< float32 > m_blendDuration; // 0x8 - 0x10
   CAnimValue< float32 > m_resetCycleValue; // 0x10 - 0x18
   bitfield:1 m_bReset; // 0x0 - 0x0
   bitfield:3 m_resetCycleOption; // 0x0 - 0x0

}; // size - 0x1C


class CStateStatusCondition : public CConditionBase
{
public:

   StateValue m_sourceValue; // 0x28 - 0x2C
   StateComparisonValueType m_comparisonValueType; // 0x2C - 0x30
   float m_comparisonFixedValue; // 0x30 - 0x34
   StateValue m_comparisonStateValue; // 0x34 - 0x38
   AnimParamID m_comparisonParamID; // 0x38 - 0x3C
   Comparison_t m_comparisonOp; // 0x3C - 0x40

}; // size - 0x40


class CStateUpdateData
{
public:

   CUtlString m_name; // 0x0 - 0x8
   AnimScriptHandle m_hScript; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< int32 > m_transitionIndices; // 0x10 - 0x28
   CUtlVector< CStateActionUpdater > m_actions; // 0x28 - 0x40
   AnimStateID m_stateID; // 0x40 - 0x44
   bitfield:1 m_bIsStartState; // 0x0 - 0x0
   bitfield:1 m_bIsEndState; // 0x0 - 0x0
   bitfield:1 m_bIsPassthrough; // 0x0 - 0x0

}; // size - 0x48


class CStaticPoseCacheBuilder : public CStaticPoseCache
{
public:


}; // size - 0x38


class CStepsRemainingMetric : public CMotionMetricBase
{
public:

   CUtlVector< CUtlString > m_feet; // 0x28 - 0x40
   float m_flMinStepsRemaining; // 0x40 - 0x44

}; // size - 0x48


class CStepsRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:

   CUtlVector< int32 > m_footIndices; // 0x50 - 0x68
   float m_flMinStepsRemaining; // 0x68 - 0x6C

}; // size - 0x70


class CStopAtGoalAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   float m_flOuterRadius; // 0x40 - 0x44
   float m_flInnerRadius; // 0x44 - 0x48
   float m_flMaxScale; // 0x48 - 0x4C
   float m_flMinScale; // 0x4C - 0x50
   CAnimInputDamping m_damping; // 0x50 - 0x60

}; // size - 0x60


class CStopAtGoalUpdateNode : public CUnaryUpdateNode
{
public:

   float m_flOuterRadius; // 0x6C - 0x70
   float m_flInnerRadius; // 0x70 - 0x74
   float m_flMaxScale; // 0x74 - 0x78
   float m_flMinScale; // 0x78 - 0x7C
   unsigned char pad_7C[0x4] // 0x7C - 0x80
   CAnimInputDamping m_damping; // 0x80 - 0x90

}; // size - 0x90


class CStopwatch : public CStopwatchBase
{
public:

   float m_interval; // 0xC - 0x10

}; // size - 0x10


class CStringAnimTag : public CAnimTagBase
{
public:


}; // size - 0x40


class CSubGraphAnimNode : public CContainerAnimNodeBase
{
public:

   CUtlString m_subGraphFilename; // 0x78 - 0x80
   CUtlHashtable< CUtlString, CUtlString > m_animNameMap; // 0x80 - 0xA0

}; // size - 0xB8


class CSubtractAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_baseInputConnection; // 0x38 - 0x40
   CAnimNodeConnection m_subtractInputConnection; // 0x40 - 0x48
   BinaryNodeTiming m_timingBehavior; // 0x48 - 0x4C
   float m_flTimingBlend; // 0x4C - 0x50
   BinaryNodeChildOption m_footMotionTiming; // 0x50 - 0x54
   bool m_bApplyToFootMotion; // 0x54 - 0x55
   bool m_bResetBase; // 0x55 - 0x56
   bool m_bResetSubtract; // 0x56 - 0x57
   bool m_bApplyChannelsSeparately; // 0x57 - 0x58
   bool m_bUseModelSpace; // 0x58 - 0x59

}; // size - 0x60


class CSubtractUpdateNode : public CBinaryUpdateNode
{
public:

   BinaryNodeChildOption m_footMotionTiming; // 0x8C - 0x90
   bool m_bApplyToFootMotion; // 0x90 - 0x91
   bool m_bApplyChannelsSeparately; // 0x91 - 0x92
   bool m_bUseModelSpace; // 0x92 - 0x93

}; // size - 0x98


class CSun : public CBaseModelEntity
{
public:

   Vector m_vDirection; // 0x6F0 - 0x6FC
   Color m_clrOverlay; // 0x6FC - 0x700
   CUtlSymbolLarge m_iszEffectName; // 0x700 - 0x708
   CUtlSymbolLarge m_iszSSEffectName; // 0x708 - 0x710
   bool m_bOn; // 0x710 - 0x711
   bool m_bmaxColor; // 0x711 - 0x712
   unsigned char pad_712[0x2] // 0x712 - 0x714
   float m_flSize; // 0x714 - 0x718
   float m_flRotation; // 0x718 - 0x71C
   float m_flHazeScale; // 0x71C - 0x720
   float m_flAlphaHaze; // 0x720 - 0x724
   float m_flAlphaHdr; // 0x724 - 0x728
   float m_flAlphaScale; // 0x728 - 0x72C
   float m_flHDRColorScale; // 0x72C - 0x730
   float m_flFarZScale; // 0x730 - 0x734

}; // size - 0x738


class CSurvivalGameRules
{
public:

   bool m_bBoundsInitialized; // 0x8 - 0x9
   unsigned char pad_9[0x3] // 0x9 - 0xC
   Vector m_vecPlayAreaMins; // 0xC - 0x18
   Vector m_vecPlayAreaMaxs; // 0x18 - 0x24
   int32 m_iPlayerSpawnHexIndices[64]; // 0x24 - 0x124
   ESurvivalSpawnTileState m_SpawnTileState[224]; // 0x124 - 0x204
   float m_flSpawnSelectionTimeStartCurrentStage; // 0x204 - 0x208
   float m_flSpawnSelectionTimeEndCurrentStage; // 0x208 - 0x20C
   float m_flSpawnSelectionTimeEndLastStage; // 0x20C - 0x210
   SpawnStage_t m_spawnStage; // 0x210 - 0x214
   float m_flTabletHexOriginX; // 0x214 - 0x218
   float m_flTabletHexOriginY; // 0x218 - 0x21C
   float m_flTabletHexSize; // 0x21C - 0x220
   uint64 m_roundData_playerXuids[64]; // 0x220 - 0x420
   int32 m_roundData_playerPositions[64]; // 0x420 - 0x520
   int32 m_roundData_playerTeams[64]; // 0x520 - 0x620
   ESurvivalGameRuleDecision_t m_SurvivalGameRuleDecisionTypes[16]; // 0x620 - 0x660
   int32 m_SurvivalGameRuleDecisionValues[16]; // 0x660 - 0x6A0
   float m_flSurvivalStartTime; // 0x6A0 - 0x6A4
   float m_flLastThinkTime; // 0x6A4 - 0x6A8
   bool m_nBlockedTileIndices[224]; // 0x6A8 - 0x788
   unsigned char pad_788[0x8] // 0x788 - 0x790
   CUtlVector< Vector > m_vecPlayerSpawnLocations; // 0x790 - 0x7A8
   bool m_bWaitingForMoreThanOnePlayer; // 0x7A8 - 0x7A9
   bool m_bSurvivalEventFired_FadeEveryoneOutFromMapSelection; // 0x7A9 - 0x7AA
   bool m_bSurvivalEventFired_TimeForSmokeBeacons; // 0x7AA - 0x7AB
   bool m_bSurvivalEventFired_FirstParadropIncoming; // 0x7AB - 0x7AC
   bool m_bSurvivalEventFired_WarnedEveryoneAboutRespawnEnding; // 0x7AC - 0x7AD
   unsigned char pad_7AD[0x3] // 0x7AD - 0x7B0
   float m_flLastWinConditionDetectedTime; // 0x7B0 - 0x7B4
   int32_t m_nWinConditionStageProgress; // 0x7B4 - 0x7B8
   int32_t m_nEntIndexOfRunnerUpPlayer; // 0x7B8 - 0x7BC
   int32_t m_nEntIndexOfKilledPlayerCheckingWinConditions; // 0x7BC - 0x7C0
   float m_flTimeOfLastParadrop; // 0x7C0 - 0x7C4
   unsigned char pad_7C4[0x34] // 0x7C4 - 0x7F8
   bool m_bSurvivalEventFired_PlayedWinnerSurrenderAnim; // 0x7F8 - 0x7F9
   unsigned char pad_7F9[0x3] // 0x7F9 - 0x7FC
   CEntityHandle m_hWinnerPlayer; // 0x7FC - 0x800
   CUtlVector< CEntityHandle > m_vecLoadedOutPlayers; // 0x800 - 0x818
   CUtlVector< CEntityHandle > m_vecRespawnedPlayers; // 0x818 - 0x830
   CUtlVector< CEntityHandle > m_vecMetalCrates; // 0x830 - 0x848
   float m_flLastDroneSpawnTime; // 0x848 - 0x84C
   unsigned char pad_84C[0x1C] // 0x84C - 0x868
   CHandle< CBaseEntity > m_hSpawnChopper; // 0x868 - 0x86C

}; // size - 0x1C98


class CSurvivalSpawnChopper : public CBaseAnimGraph
{
public:

   CSoundPatch* m_pSoundLoop; // 0x820 - 0x828
   GameTime_t m_flSpawnTimeStamp; // 0x828 - 0x82C
   float m_flFlightPathRotationOffset; // 0x82C - 0x830
   bool m_bFlipX; // 0x830 - 0x831
   bool m_bFlipY; // 0x831 - 0x832
   bool m_bCircling; // 0x832 - 0x833
   unsigned char pad_833[0x1] // 0x833 - 0x834
   GameTime_t m_flLastPassengerCheckTime; // 0x834 - 0x838

}; // size - 0x838


class CTablet : public CWeaponCSBase
{
public:

   bool m_bPendingBuyMenu; // 0xD58 - 0xD59
   unsigned char pad_D59[0x3] // 0xD59 - 0xD5C
   GameTime_t m_flUpgradeExpirationTime[4]; // 0xD5C - 0xD6C
   int32 m_vecLocalHexFlags[42]; // 0xD6C - 0xE14
   int32_t m_nContractKillGridIndex; // 0xE14 - 0xE18
   int32_t m_nContractKillGridHighResIndex; // 0xE18 - 0xE1C
   bool m_bTabletReceptionIsBlocked; // 0xE1C - 0xE1D
   unsigned char pad_E1D[0x3] // 0xE1D - 0xE20
   float m_flScanProgress; // 0xE20 - 0xE24
   GameTime_t m_flBootTime; // 0xE24 - 0xE28
   GameTime_t m_flShowMapTime; // 0xE28 - 0xE2C
   Vector m_vecNearestMetalCratePos; // 0xE2C - 0xE38
   tablet_skin_state_t m_skinState; // 0xE38 - 0xE39
   unsigned char pad_E39[0x3] // 0xE39 - 0xE3C
   int32 m_vecNotificationIds[8]; // 0xE3C - 0xE5C
   GameTime_t m_vecNotificationTimestamps[8]; // 0xE5C - 0xE7C
   int32_t m_nLastPurchaseIndex; // 0xE7C - 0xE80
   Vector m_vecPlayerPositionHistory[24]; // 0xE80 - 0xFA0
   Vector2D m_vecLastPlayerPosition; // 0xFA0 - 0xFA8
   GameTime_t m_flNextCheckForIncomingDronesTime; // 0xFA8 - 0xFAC
   GameTime_t m_flLastPlayerOccupiedGridUpdate; // 0xFAC - 0xFB0
   GameTime_t m_flLastTabletBlockedTime; // 0xFB0 - 0xFB4
   unsigned char pad_FB4[0xAC] // 0xFB4 - 0x1060
   float m_flLastClosePoseParamVal; // 0x1060 - 0x1064

}; // size - 0x1068


class CTabletBlocker : public CTabletBlockerShim
{
public:


}; // size - 0x8A0


class CTagCondition : public CConditionBase
{
public:

   AnimTagID m_tagID; // 0x28 - 0x2C
   bool m_comparisonValue; // 0x2C - 0x2D

}; // size - 0x30


class CTakeDamageInfo
{
public:

   Vector m_vecDamageForce; // 0x8 - 0x14
   Vector m_vecDamagePosition; // 0x14 - 0x20
   Vector m_vecReportedPosition; // 0x20 - 0x2C
   Vector m_vecDamageDirection; // 0x2C - 0x38
   CHandle< CBaseEntity > m_hInflictor; // 0x38 - 0x3C
   CHandle< CBaseEntity > m_hAttacker; // 0x3C - 0x40
   CHandle< CBaseEntity > m_hAbility; // 0x40 - 0x44
   float m_flDamage; // 0x44 - 0x48
   int32_t m_bitsDamageType; // 0x48 - 0x4C
   int32_t m_iDamageCustom; // 0x4C - 0x50
   AmmoIndex_t m_iAmmoType; // 0x50 - 0x51
   unsigned char pad_51[0xF] // 0x51 - 0x60
   float m_flOriginalDamage; // 0x60 - 0x64
   unsigned char pad_64[0xC] // 0x64 - 0x70
   TakeDamageFlags_t m_nDamageFlags; // 0x70 - 0x74
   int32_t m_nNumObjectsPenetrated; // 0x74 - 0x78
   HSCRIPT m_hScriptInstance; // 0x78 - 0x80
   unsigned char pad_80[0x18] // 0x80 - 0x98
   bool m_bInTakeDamageFlow; // 0x98 - 0x99

}; // size - 0xA0


class CTakeDamageResult
{
public:

   int32_t m_nHealthLost; // 0x0 - 0x4
   int32_t m_nDamageTaken; // 0x4 - 0x8

}; // size - 0x8


class CTakeDamageSummaryScopeGuard
{
public:

   CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries; // 0x8 - 0x20

}; // size - 0x20


class CTankTargetChange : public CPointEntity
{
public:

   CVariantBase< CVariantDefaultAllocator > m_newTarget; // 0x4A0 - 0x4B0
   CUtlSymbolLarge m_newTargetName; // 0x4B0 - 0x4B8

}; // size - 0x4B8


class CTankTrainAI : public CPointEntity
{
public:

   CHandle< CFuncTrackTrain > m_hTrain; // 0x4A0 - 0x4A4
   CHandle< CBaseEntity > m_hTargetEntity; // 0x4A4 - 0x4A8
   int32_t m_soundPlaying; // 0x4A8 - 0x4AC
   unsigned char pad_4AC[0x14] // 0x4AC - 0x4C0
   CUtlSymbolLarge m_startSoundName; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_engineSoundName; // 0x4C8 - 0x4D0
   CUtlSymbolLarge m_movementSoundName; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_targetEntityName; // 0x4D8 - 0x4E0

}; // size - 0x4E0


class CTaskStatusAnimTag : public CAnimTagBase
{
public:

   CUtlString m_identifierString; // 0x40 - 0x48

}; // size - 0x50


class CTestEffect : public CBaseEntity
{
public:

   int32_t m_iLoop; // 0x4A0 - 0x4A4
   int32_t m_iBeam; // 0x4A4 - 0x4A8
   CBeam* m_pBeam[24]; // 0x4A8 - 0x568
   GameTime_t m_flBeamTime[24]; // 0x568 - 0x5C8
   GameTime_t m_flStartTime; // 0x5C8 - 0x5CC

}; // size - 0x5D0


class CTextureBasedAnimatable : public CBaseModelEntity
{
public:

   bool m_bLoop; // 0x6F0 - 0x6F1
   unsigned char pad_6F1[0x3] // 0x6F1 - 0x6F4
   float m_flFPS; // 0x6F4 - 0x6F8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x6F8 - 0x700
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x700 - 0x708
   Vector m_vAnimationBoundsMin; // 0x708 - 0x714
   Vector m_vAnimationBoundsMax; // 0x714 - 0x720
   float m_flStartTime; // 0x720 - 0x724
   float m_flStartFrame; // 0x724 - 0x728

}; // size - 0x728


class CTiltTwistConstraint : public CBaseConstraint
{
public:

   int32_t m_nTargetAxis; // 0x70 - 0x74
   int32_t m_nSlaveAxis; // 0x74 - 0x78

}; // size - 0xA0


class CTimeCondition : public CConditionBase
{
public:

   Comparison_t m_comparisonOp; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   CUtlString m_comparisonString; // 0x30 - 0x38

}; // size - 0x38


class CTimeRemainingMetric : public CMotionMetricBase
{
public:

   bool m_bMatchByTimeRemaining; // 0x28 - 0x29
   unsigned char pad_29[0x3] // 0x29 - 0x2C
   float m_flMaxTimeRemaining; // 0x2C - 0x30
   bool m_bFilterByTimeRemaining; // 0x30 - 0x31
   unsigned char pad_31[0x3] // 0x31 - 0x34
   float m_flMinTimeRemaining; // 0x34 - 0x38

}; // size - 0x38


class CTimeRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:

   bool m_bMatchByTimeRemaining; // 0x50 - 0x51
   unsigned char pad_51[0x3] // 0x51 - 0x54
   float m_flMaxTimeRemaining; // 0x54 - 0x58
   bool m_bFilterByTimeRemaining; // 0x58 - 0x59
   unsigned char pad_59[0x3] // 0x59 - 0x5C
   float m_flMinTimeRemaining; // 0x5C - 0x60

}; // size - 0x60


class CTimeline : public IntervalTimer
{
public:

   float32 m_flValues[64]; // 0x10 - 0x110
   int32 m_nValueCounts[64]; // 0x110 - 0x210
   int32_t m_nBucketCount; // 0x210 - 0x214
   float m_flInterval; // 0x214 - 0x218
   float m_flFinalValue; // 0x218 - 0x21C
   TimelineCompression_t m_nCompressionType; // 0x21C - 0x220
   bool m_bStopped; // 0x220 - 0x221

}; // size - 0x228


class CTimeline : public IntervalTimer
{
public:

   float32 m_flValues[64]; // 0x10 - 0x110
   int32 m_nValueCounts[64]; // 0x110 - 0x210
   int32_t m_nBucketCount; // 0x210 - 0x214
   float m_flInterval; // 0x214 - 0x218
   float m_flFinalValue; // 0x218 - 0x21C
   TimelineCompression_t m_nCompressionType; // 0x21C - 0x220
   bool m_bStopped; // 0x220 - 0x221

}; // size - 0x228


class CTimerEntity : public CLogicalEntity
{
public:

   CEntityIOOutput m_OnTimer; // 0x4A0 - 0x4C8
   CEntityIOOutput m_OnTimerHigh; // 0x4C8 - 0x4F0
   CEntityIOOutput m_OnTimerLow; // 0x4F0 - 0x518
   int32_t m_iDisabled; // 0x518 - 0x51C
   float m_flInitialDelay; // 0x51C - 0x520
   float m_flRefireTime; // 0x520 - 0x524
   bool m_bUpDownState; // 0x524 - 0x525
   unsigned char pad_525[0x3] // 0x525 - 0x528
   int32_t m_iUseRandomTime; // 0x528 - 0x52C
   bool m_bPauseAfterFiring; // 0x52C - 0x52D
   unsigned char pad_52D[0x3] // 0x52D - 0x530
   float m_flLowerRandomBound; // 0x530 - 0x534
   float m_flUpperRandomBound; // 0x534 - 0x538
   float m_flRemainingTime; // 0x538 - 0x53C
   bool m_bPaused; // 0x53C - 0x53D

}; // size - 0x540


class CToggleComponentAction : public CAnimActionBase
{
public:

   AnimComponentID m_componentID; // 0x28 - 0x2C
   bool m_bSetEnabled; // 0x2C - 0x2D

}; // size - 0x30


class CToggleComponentActionUpdater : public CAnimActionUpdater
{
public:

   AnimComponentID m_componentID; // 0x18 - 0x1C
   bool m_bSetEnabled; // 0x1C - 0x1D

}; // size - 0x20


class CTonemapController2Alias_env_tonemap_controller2 : public CTonemapController2
{
public:


}; // size - 0x4C8


class CTonemapTrigger : public CBaseTrigger
{
public:

   CUtlSymbolLarge m_tonemapControllerName; // 0x898 - 0x8A0
   CEntityHandle m_hTonemapController; // 0x8A0 - 0x8A4

}; // size - 0x8A8


class CTouchExpansionComponent : public CEntityComponent
{
public:


}; // size - 0x20


class CTransitionUpdateData
{
public:

   uint8_t m_srcStateIndex; // 0x0 - 0x1
   uint8_t m_destStateIndex; // 0x1 - 0x2
   bitfield:1 m_bDisabled; // 0x0 - 0x0

}; // size - 0x3


class CTriggerActiveWeaponDetect : public CBaseTrigger
{
public:

   CEntityIOOutput m_OnTouchedActiveWeapon; // 0x898 - 0x8C0
   CUtlSymbolLarge m_iszWeaponClassName; // 0x8C0 - 0x8C8

}; // size - 0x8C8


class CTriggerBombReset : public CBaseTrigger
{
public:


}; // size - 0x898


class CTriggerBrush : public CBaseModelEntity
{
public:

   CEntityIOOutput m_OnStartTouch; // 0x6F0 - 0x718
   CEntityIOOutput m_OnEndTouch; // 0x718 - 0x740
   CEntityIOOutput m_OnUse; // 0x740 - 0x768
   int32_t m_iInputFilter; // 0x768 - 0x76C
   int32_t m_iDontMessageParent; // 0x76C - 0x770

}; // size - 0x770


class CTriggerBuoyancy : public CBaseTrigger
{
public:

   CBuoyancyHelper m_BuoyancyHelper; // 0x898 - 0x8B8
   float m_flFluidDensity; // 0x8B8 - 0x8BC

}; // size - 0x8C0


class CTriggerCallback : public CBaseTrigger
{
public:


}; // size - 0x8A0


class CTriggerCamera : public CBaseEntity
{
public:

   CHandle< CBaseEntity > m_hPlayer; // 0x4A0 - 0x4A4
   CHandle< CBaseEntity > m_hTarget; // 0x4A4 - 0x4A8
   CBaseEntity* m_pPath; // 0x4A8 - 0x4B0
   CUtlSymbolLarge m_sPath; // 0x4B0 - 0x4B8
   float m_flWait; // 0x4B8 - 0x4BC
   GameTime_t m_flReturnTime; // 0x4BC - 0x4C0
   GameTime_t m_flStopTime; // 0x4C0 - 0x4C4
   float m_moveDistance; // 0x4C4 - 0x4C8
   float m_targetSpeed; // 0x4C8 - 0x4CC
   float m_initialSpeed; // 0x4CC - 0x4D0
   float m_acceleration; // 0x4D0 - 0x4D4
   float m_deceleration; // 0x4D4 - 0x4D8
   int32_t m_state; // 0x4D8 - 0x4DC
   Vector m_vecMoveDir; // 0x4DC - 0x4E8
   float m_fov; // 0x4E8 - 0x4EC
   float m_fovSpeed; // 0x4EC - 0x4F0
   CUtlSymbolLarge m_iszTargetAttachment; // 0x4F0 - 0x4F8
   AttachmentHandle_t m_iAttachmentIndex; // 0x4F8 - 0x4F9
   bool m_bSnapToGoal; // 0x4F9 - 0x4FA
   bool m_bInterpolatePosition; // 0x4FA - 0x4FB
   unsigned char pad_4FB[0x1] // 0x4FB - 0x4FC
   Vector m_vStartPos; // 0x4FC - 0x508
   Vector m_vEndPos; // 0x508 - 0x514
   GameTime_t m_flInterpStartTime; // 0x514 - 0x518
   uint64_t m_nPlayerButtons; // 0x518 - 0x520
   bool m_bOldTakesDamage; // 0x520 - 0x521
   unsigned char pad_521[0x3] // 0x521 - 0x524
   TakeDamageFlags_t m_nOldTakeDamageFlags; // 0x524 - 0x528
   CEntityIOOutput m_OnEndFollow; // 0x528 - 0x550

}; // size - 0x550


class CTriggerDetectBulletFire : public CBaseTrigger
{
public:

   bool m_bPlayerFireOnly; // 0x898 - 0x899
   unsigned char pad_899[0x7] // 0x899 - 0x8A0
   CEntityIOOutput m_OnDetectedBulletFire; // 0x8A0 - 0x8C8

}; // size - 0x8C8


class CTriggerDetectExplosion : public CBaseTrigger
{
public:

   CEntityIOOutput m_OnDetectedExplosion; // 0x8D0 - 0x8F8

}; // size - 0x8F8


class CTriggerFan : public CBaseTrigger
{
public:

   Vector m_vFanOrigin; // 0x898 - 0x8A4
   Vector m_vFanEnd; // 0x8A4 - 0x8B0
   Vector m_vNoise; // 0x8B0 - 0x8BC
   float m_flForce; // 0x8BC - 0x8C0
   float m_flPlayerForce; // 0x8C0 - 0x8C4
   float m_flRampTime; // 0x8C4 - 0x8C8
   bool m_bFalloff; // 0x8C8 - 0x8C9
   bool m_bPushPlayer; // 0x8C9 - 0x8CA
   bool m_bRampDown; // 0x8CA - 0x8CB
   bool m_bAddNoise; // 0x8CB - 0x8CC
   unsigned char pad_8CC[0x4] // 0x8CC - 0x8D0
   CountdownTimer m_RampTimer; // 0x8D0 - 0x8E8

}; // size - 0x8E8


class CTriggerGameEvent : public CBaseTrigger
{
public:

   CUtlString m_strStartTouchEventName; // 0x898 - 0x8A0
   CUtlString m_strEndTouchEventName; // 0x8A0 - 0x8A8
   CUtlString m_strTriggerID; // 0x8A8 - 0x8B0

}; // size - 0x8B0


class CTriggerGravity : public CBaseTrigger
{
public:


}; // size - 0x898


class CTriggerHurtGhost : public CTriggerHurt
{
public:


}; // size - 0x938


class CTriggerImpact : public CTriggerMultiple
{
public:

   float m_flMagnitude; // 0x8C0 - 0x8C4
   float m_flNoise; // 0x8C4 - 0x8C8
   float m_flViewkick; // 0x8C8 - 0x8CC
   unsigned char pad_8CC[0x4] // 0x8CC - 0x8D0
   CEntityOutputTemplate< Vector > m_pOutputForce; // 0x8D0 - 0x8F8

}; // size - 0x8F8


class CTriggerLerpObject : public CBaseTrigger
{
public:

   CUtlSymbolLarge m_iszLerpTarget; // 0x898 - 0x8A0
   CHandle< CBaseEntity > m_hLerpTarget; // 0x8A0 - 0x8A4
   unsigned char pad_8A4[0x4] // 0x8A4 - 0x8A8
   CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x8A8 - 0x8B0
   AttachmentHandle_t m_hLerpTargetAttachment; // 0x8B0 - 0x8B1
   unsigned char pad_8B1[0x3] // 0x8B1 - 0x8B4
   float m_flLerpDuration; // 0x8B4 - 0x8B8
   bool m_bLerpRestoreMoveType; // 0x8B8 - 0x8B9
   bool m_bSingleLerpObject; // 0x8B9 - 0x8BA
   unsigned char pad_8BA[0x6] // 0x8BA - 0x8C0
   CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x8C0 - 0x8D8
   CUtlSymbolLarge m_iszLerpEffect; // 0x8D8 - 0x8E0
   CUtlSymbolLarge m_iszLerpSound; // 0x8E0 - 0x8E8
   CEntityIOOutput m_OnLerpStarted; // 0x8E8 - 0x910
   CEntityIOOutput m_OnLerpFinished; // 0x910 - 0x938

}; // size - 0x938


class CTriggerLook : public CTriggerOnce
{
public:

   CHandle< CBaseEntity > m_hLookTarget; // 0x8C0 - 0x8C4
   float m_flFieldOfView; // 0x8C4 - 0x8C8
   float m_flLookTime; // 0x8C8 - 0x8CC
   float m_flLookTimeTotal; // 0x8CC - 0x8D0
   GameTime_t m_flLookTimeLast; // 0x8D0 - 0x8D4
   float m_flTimeoutDuration; // 0x8D4 - 0x8D8
   bool m_bTimeoutFired; // 0x8D8 - 0x8D9
   bool m_bIsLooking; // 0x8D9 - 0x8DA
   bool m_b2DFOV; // 0x8DA - 0x8DB
   bool m_bUseVelocity; // 0x8DB - 0x8DC
   CHandle< CBaseEntity > m_hActivator; // 0x8DC - 0x8E0
   bool m_bTestOcclusion; // 0x8E0 - 0x8E1
   unsigned char pad_8E1[0x7] // 0x8E1 - 0x8E8
   CEntityIOOutput m_OnTimeout; // 0x8E8 - 0x910
   CEntityIOOutput m_OnStartLook; // 0x910 - 0x938
   CEntityIOOutput m_OnEndLook; // 0x938 - 0x960

}; // size - 0x960


class CTriggerPhysics : public CBaseTrigger
{
public:

   float m_gravityScale; // 0x8A8 - 0x8AC
   float m_linearLimit; // 0x8AC - 0x8B0
   float m_linearDamping; // 0x8B0 - 0x8B4
   float m_angularLimit; // 0x8B4 - 0x8B8
   float m_angularDamping; // 0x8B8 - 0x8BC
   float m_linearForce; // 0x8BC - 0x8C0
   float m_flFrequency; // 0x8C0 - 0x8C4
   float m_flDampingRatio; // 0x8C4 - 0x8C8
   Vector m_vecLinearForcePointAt; // 0x8C8 - 0x8D4
   bool m_bCollapseToForcePoint; // 0x8D4 - 0x8D5
   unsigned char pad_8D5[0x3] // 0x8D5 - 0x8D8
   Vector m_vecLinearForcePointAtWorld; // 0x8D8 - 0x8E4
   Vector m_vecLinearForceDirection; // 0x8E4 - 0x8F0
   bool m_bConvertToDebrisWhenPossible; // 0x8F0 - 0x8F1

}; // size - 0x8F8


class CTriggerProximity : public CBaseTrigger
{
public:

   CHandle< CBaseEntity > m_hMeasureTarget; // 0x898 - 0x89C
   unsigned char pad_89C[0x4] // 0x89C - 0x8A0
   CUtlSymbolLarge m_iszMeasureTarget; // 0x8A0 - 0x8A8
   float m_fRadius; // 0x8A8 - 0x8AC
   int32_t m_nTouchers; // 0x8AC - 0x8B0
   CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x8B0 - 0x8D8

}; // size - 0x8D8


class CTriggerRemove : public CBaseTrigger
{
public:

   CEntityIOOutput m_OnRemove; // 0x898 - 0x8C0

}; // size - 0x8C0


class CTriggerSafeMoneyGather : public CBaseTrigger
{
public:

   CUtlVector< CHandle< CBaseEntity > > m_vecCashBundles; // 0x898 - 0x8B0

}; // size - 0x8B0


class CTriggerSave : public CBaseTrigger
{
public:

   bool m_bForceNewLevelUnit; // 0x898 - 0x899
   unsigned char pad_899[0x3] // 0x899 - 0x89C
   float m_fDangerousTimer; // 0x89C - 0x8A0
   int32_t m_minHitPoints; // 0x8A0 - 0x8A4

}; // size - 0x8A8


class CTriggerSndSosOpvar : public CBaseTrigger
{
public:

   CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x898 - 0x8B0
   Vector m_flPosition; // 0x8B0 - 0x8BC
   float m_flCenterSize; // 0x8BC - 0x8C0
   float m_flMinVal; // 0x8C0 - 0x8C4
   float m_flMaxVal; // 0x8C4 - 0x8C8
   float m_flWait; // 0x8C8 - 0x8CC
   unsigned char pad_8CC[0x4] // 0x8CC - 0x8D0
   CUtlSymbolLarge m_opvarName; // 0x8D0 - 0x8D8
   CUtlSymbolLarge m_stackName; // 0x8D8 - 0x8E0
   CUtlSymbolLarge m_operatorName; // 0x8E0 - 0x8E8
   bool m_bVolIs2D; // 0x8E8 - 0x8E9
   char m_opvarNameChar[256]; // 0x8E9 - 0x9E9
   char m_stackNameChar[256]; // 0x9E9 - 0xAE9
   char m_operatorNameChar[256]; // 0xAE9 - 0xBE9
   unsigned char pad_BE9[0x3] // 0xBE9 - 0xBEC
   Vector m_VecNormPos; // 0xBEC - 0xBF8
   float m_flNormCenterSize; // 0xBF8 - 0xBFC

}; // size - 0xC00


class CTriggerSoundscape : public CBaseTrigger
{
public:

   CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x898 - 0x89C
   unsigned char pad_89C[0x4] // 0x89C - 0x8A0
   CUtlSymbolLarge m_SoundscapeName; // 0x8A0 - 0x8A8
   CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x8A8 - 0x8C0

}; // size - 0x8C0


class CTriggerSurvivalPlayArea : public CTriggerCustomBounds
{
public:


}; // size - 0x898


class CTriggerTeleport : public CBaseTrigger
{
public:

   CUtlSymbolLarge m_iLandmark; // 0x898 - 0x8A0
   bool m_bUseLandmarkAngles; // 0x8A0 - 0x8A1
   bool m_bMirrorPlayer; // 0x8A1 - 0x8A2

}; // size - 0x8A8


class CTriggerToggleSave : public CBaseTrigger
{
public:

   bool m_bDisabled; // 0x898 - 0x899

}; // size - 0x8A0


class CTriggerTripWire : public CBaseTrigger
{
public:


}; // size - 0x8A0


class CTriggerVolume : public CBaseModelEntity
{
public:

   CUtlSymbolLarge m_iFilterName; // 0x6F0 - 0x6F8
   CHandle< CBaseFilter > m_hFilter; // 0x6F8 - 0x6FC

}; // size - 0x700


class CTripWireFire : public CBaseCSGrenade
{
public:


}; // size - 0xD90


class CTripWireFireProjectile : public CBaseGrenade
{
public:

   GameTime_t m_flAttachTime; // 0x958 - 0x95C
   Vector m_vecTripWireEndPositions[10]; // 0x95C - 0x9D4
   bool m_bTripWireEndPositionsUsed[10]; // 0x9D4 - 0x9DE
   unsigned char pad_9DE[0x2] // 0x9DE - 0x9E0
   CHandle< CBaseEntity > m_hStuckToEnt; // 0x9E0 - 0x9E4
   int32_t m_nLastStuckToEntModelIndex; // 0x9E4 - 0x9E8
   unsigned char pad_9E8[0x8] // 0x9E8 - 0x9F0
   CTransform m_xformStuckToEnt; // 0x9F0 - 0xA10
   Vector m_vecTrapSetPosition; // 0xA10 - 0xA1C
   int32_t m_nWireSoundsPlayed; // 0xA1C - 0xA20

}; // size - 0xA20


class CTurnHelperAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   AnimValueSource m_facingTarget; // 0x40 - 0x44
   float m_turnStartTime; // 0x44 - 0x48
   float m_turnDuration; // 0x48 - 0x4C
   bool m_bMatchChildDuration; // 0x4C - 0x4D
   bool m_bUseManualTurnOffset; // 0x4D - 0x4E
   unsigned char pad_4E[0x2] // 0x4E - 0x50
   float m_manualTurnOffset; // 0x50 - 0x54

}; // size - 0x58


class CTurnHelperUpdateNode : public CUnaryUpdateNode
{
public:

   AnimValueSource m_facingTarget; // 0x6C - 0x70
   float m_turnStartTimeOffset; // 0x70 - 0x74
   float m_turnDuration; // 0x74 - 0x78
   bool m_bMatchChildDuration; // 0x78 - 0x79
   unsigned char pad_79[0x3] // 0x79 - 0x7C
   float m_manualTurnOffset; // 0x7C - 0x80
   bool m_bUseManualTurnOffset; // 0x80 - 0x81

}; // size - 0x88


class CTwistConstraint : public CBaseConstraint
{
public:

   bool m_bInverse; // 0x70 - 0x71
   unsigned char pad_71[0xF] // 0x71 - 0x80
   Quaternion m_qParentBindRotation; // 0x80 - 0x90
   Quaternion m_qChildBindRotation; // 0x90 - 0xA0

}; // size - 0xA0


class CTwoBoneIKAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   CUtlString m_ikChainName; // 0x40 - 0x48
   bool m_bAutoDetectHingeAxis; // 0x48 - 0x49
   unsigned char pad_49[0x3] // 0x49 - 0x4C
   IkEndEffectorType m_endEffectorType; // 0x4C - 0x50
   CUtlString m_endEffectorAttachmentName; // 0x50 - 0x58
   IkTargetType m_targetType; // 0x58 - 0x5C
   unsigned char pad_5C[0x4] // 0x5C - 0x60
   CUtlString m_attachmentName; // 0x60 - 0x68
   CUtlString m_targetBoneName; // 0x68 - 0x70
   AnimParamID m_targetParam; // 0x70 - 0x74
   bool m_bMatchTargetOrientation; // 0x74 - 0x75
   unsigned char pad_75[0x3] // 0x75 - 0x78
   AnimParamID m_rotationParam; // 0x78 - 0x7C
   bool m_bConstrainTwist; // 0x7C - 0x7D
   unsigned char pad_7D[0x3] // 0x7D - 0x80
   float m_flMaxTwist; // 0x80 - 0x84

}; // size - 0x88


class CTwoBoneIKUpdateNode : public CUnaryUpdateNode
{
public:

   TwoBoneIKSettings_t m_opFixedData; // 0x70 - 0x1D0

}; // size - 0x1E0


class CVPhysXSurfacePropertiesList
{
public:

   CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList; // 0x0 - 0x18

}; // size - 0x18


class CVRInputComponent : public CAnimComponentBase
{
public:

   AnimParamID m_FingerCurl_Thumb; // 0x38 - 0x3C
   AnimParamID m_FingerCurl_Index; // 0x3C - 0x40
   AnimParamID m_FingerCurl_Middle; // 0x40 - 0x44
   AnimParamID m_FingerCurl_Ring; // 0x44 - 0x48
   AnimParamID m_FingerCurl_Pinky; // 0x48 - 0x4C
   AnimParamID m_FingerSplay_Thumb_Index; // 0x4C - 0x50
   AnimParamID m_FingerSplay_Index_Middle; // 0x50 - 0x54
   AnimParamID m_FingerSplay_Middle_Ring; // 0x54 - 0x58
   AnimParamID m_FingerSplay_Ring_Pinky; // 0x58 - 0x5C

}; // size - 0x60


class CVRInputComponentUpdater : public CAnimComponentUpdater
{
public:

   CAnimParamHandle m_FingerCurl_Thumb; // 0x34 - 0x36
   CAnimParamHandle m_FingerCurl_Index; // 0x36 - 0x38
   CAnimParamHandle m_FingerCurl_Middle; // 0x38 - 0x3A
   CAnimParamHandle m_FingerCurl_Ring; // 0x3A - 0x3C
   CAnimParamHandle m_FingerCurl_Pinky; // 0x3C - 0x3E
   CAnimParamHandle m_FingerSplay_Thumb_Index; // 0x3E - 0x40
   CAnimParamHandle m_FingerSplay_Index_Middle; // 0x40 - 0x42
   CAnimParamHandle m_FingerSplay_Middle_Ring; // 0x42 - 0x44
   CAnimParamHandle m_FingerSplay_Ring_Pinky; // 0x44 - 0x46

}; // size - 0x48


class CVariantDefaultAllocator
{
public:


}; // size - 0x1


class CVectorAnimParameter : public CAnimParameterBase
{
public:

   Vector m_defaultValue; // 0x78 - 0x84
   bool m_bInterpolate; // 0x84 - 0x85

}; // size - 0x88


class CVectorQuantizer
{
public:

   CUtlVector< float32 > m_centroidVectors; // 0x0 - 0x18
   int32_t m_nCentroids; // 0x18 - 0x1C
   int32_t m_nDimensions; // 0x1C - 0x20

}; // size - 0x20


class CVoteController : public CBaseEntity
{
public:

   int32_t m_iActiveIssueIndex; // 0x4A0 - 0x4A4
   int32_t m_iOnlyTeamToVote; // 0x4A4 - 0x4A8
   int32 m_nVoteOptionCount[5]; // 0x4A8 - 0x4BC
   int32_t m_nPotentialVotes; // 0x4BC - 0x4C0
   bool m_bIsYesNoVote; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x7] // 0x4C1 - 0x4C8
   CountdownTimer m_acceptingVotesTimer; // 0x4C8 - 0x4E0
   CountdownTimer m_executeCommandTimer; // 0x4E0 - 0x4F8
   CountdownTimer m_resetVoteTimer; // 0x4F8 - 0x510
   CUtlVector< uint64 > m_arrVotedUsers; // 0x510 - 0x528
   int32 m_nVotesCast[64]; // 0x528 - 0x628
   CPlayerSlot m_playerHoldingVote; // 0x628 - 0x62C
   int32_t m_nHighestCountIndex; // 0x62C - 0x630
   CUtlVector< CBaseIssue* > m_potentialIssues; // 0x630 - 0x648
   CUtlVector< char* > m_VoteOptions; // 0x648 - 0x660

}; // size - 0x660


class CVoxelVisibility
{
public:

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

}; // size - 0xA0


class CVrSkeletalInputSettings
{
public:

   CUtlVector< CWristBone > m_wristBones; // 0x0 - 0x18
   CUtlVector< CFingerChain > m_fingers; // 0x18 - 0x30
   CUtlString m_name; // 0x30 - 0x38
   CUtlString m_outerKnuckle1; // 0x38 - 0x40
   CUtlString m_outerKnuckle2; // 0x40 - 0x48
   AnimVRHand_t m_eHand; // 0x48 - 0x4C

}; // size - 0x50


class CWaterBullet : public CBaseAnimGraph
{
public:


}; // size - 0x820


class CWayPointHelperAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x40
   float m_flStartCycle; // 0x40 - 0x44
   float m_flEndCycle; // 0x44 - 0x48
   bool m_bOnlyGoals; // 0x48 - 0x49
   bool m_bPreventOvershoot; // 0x49 - 0x4A
   bool m_bPreventUndershoot; // 0x4A - 0x4B

}; // size - 0x50


class CWayPointHelperUpdateNode : public CUnaryUpdateNode
{
public:

   float m_flStartCycle; // 0x6C - 0x70
   float m_flEndCycle; // 0x70 - 0x74
   bool m_bOnlyGoals; // 0x74 - 0x75
   bool m_bPreventOvershoot; // 0x75 - 0x76
   bool m_bPreventUndershoot; // 0x76 - 0x77

}; // size - 0x78


class CWeaponAWP : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponAug : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponBizon : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponCSBaseVData : public CBasePlayerWeaponVData
{
public:

   CSWeaponType m_WeaponType; // 0x320 - 0x324
   CSWeaponCategory m_WeaponCategory; // 0x324 - 0x328
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; // 0x328 - 0x408
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szPlayerModel; // 0x408 - 0x4E8
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldDroppedModel; // 0x4E8 - 0x5C8
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szAimsightLensMaskModel; // 0x5C8 - 0x6A8
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szMagazineModel; // 0x6A8 - 0x788
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szHeatEffect; // 0x788 - 0x868
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szEjectBrassEffect; // 0x868 - 0x948
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticleAlt; // 0x948 - 0xA28
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticle; // 0xA28 - 0xB08
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticleAlt; // 0xB08 - 0xBE8
   gear_slot_t m_GearSlot; // 0xBE8 - 0xBEC
   int32_t m_GearSlotPosition; // 0xBEC - 0xBF0
   loadout_positions_t m_DefaultLoadoutPosition; // 0xBF0 - 0xBF4
   unsigned char pad_BF4[0x4] // 0xBF4 - 0xBF8
   CUtlString m_sWrongTeamMsg; // 0xBF8 - 0xC00
   int32_t m_nPrice; // 0xC00 - 0xC04
   int32_t m_nKillAward; // 0xC04 - 0xC08
   int32_t m_nPrimaryReserveAmmoMax; // 0xC08 - 0xC0C
   int32_t m_nSecondaryReserveAmmoMax; // 0xC0C - 0xC10
   bool m_bMeleeWeapon; // 0xC10 - 0xC11
   bool m_bHasBurstMode; // 0xC11 - 0xC12
   bool m_bIsRevolver; // 0xC12 - 0xC13
   bool m_bCannotShootUnderwater; // 0xC13 - 0xC14
   unsigned char pad_C14[0x4] // 0xC14 - 0xC18
   CUtlString m_szName; // 0xC18 - 0xC20
   CUtlString m_szAnimExtension; // 0xC20 - 0xC28
   CSWeaponSilencerType m_eSilencerType; // 0xC28 - 0xC2C
   int32_t m_nCrosshairMinDistance; // 0xC2C - 0xC30
   int32_t m_nCrosshairDeltaDistance; // 0xC30 - 0xC34
   CFiringModeFloat m_flCycleTime; // 0xC34 - 0xC3C
   CFiringModeFloat m_flMaxSpeed; // 0xC3C - 0xC44
   CFiringModeFloat m_flSpread; // 0xC44 - 0xC4C
   CFiringModeFloat m_flInaccuracyCrouch; // 0xC4C - 0xC54
   CFiringModeFloat m_flInaccuracyStand; // 0xC54 - 0xC5C
   CFiringModeFloat m_flInaccuracyJump; // 0xC5C - 0xC64
   CFiringModeFloat m_flInaccuracyLand; // 0xC64 - 0xC6C
   CFiringModeFloat m_flInaccuracyLadder; // 0xC6C - 0xC74
   CFiringModeFloat m_flInaccuracyFire; // 0xC74 - 0xC7C
   CFiringModeFloat m_flInaccuracyMove; // 0xC7C - 0xC84
   CFiringModeFloat m_flRecoilAngle; // 0xC84 - 0xC8C
   CFiringModeFloat m_flRecoilAngleVariance; // 0xC8C - 0xC94
   CFiringModeFloat m_flRecoilMagnitude; // 0xC94 - 0xC9C
   CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xC9C - 0xCA4
   CFiringModeInt m_nTracerFrequency; // 0xCA4 - 0xCAC
   float m_flInaccuracyJumpInitial; // 0xCAC - 0xCB0
   float m_flInaccuracyJumpApex; // 0xCB0 - 0xCB4
   float m_flInaccuracyReload; // 0xCB4 - 0xCB8
   int32_t m_nRecoilSeed; // 0xCB8 - 0xCBC
   int32_t m_nSpreadSeed; // 0xCBC - 0xCC0
   float m_flTimeToIdleAfterFire; // 0xCC0 - 0xCC4
   float m_flIdleInterval; // 0xCC4 - 0xCC8
   float m_flAttackMovespeedFactor; // 0xCC8 - 0xCCC
   float m_flHeatPerShot; // 0xCCC - 0xCD0
   float m_flInaccuracyPitchShift; // 0xCD0 - 0xCD4
   float m_flInaccuracyAltSoundThreshold; // 0xCD4 - 0xCD8
   float m_flBotAudibleRange; // 0xCD8 - 0xCDC
   unsigned char pad_CDC[0x4] // 0xCDC - 0xCE0
   CUtlString m_szUseRadioSubtitle; // 0xCE0 - 0xCE8
   bool m_bUnzoomsAfterShot; // 0xCE8 - 0xCE9
   bool m_bHideViewModelWhenZoomed; // 0xCE9 - 0xCEA
   unsigned char pad_CEA[0x2] // 0xCEA - 0xCEC
   int32_t m_nZoomLevels; // 0xCEC - 0xCF0
   int32_t m_nZoomFOV1; // 0xCF0 - 0xCF4
   int32_t m_nZoomFOV2; // 0xCF4 - 0xCF8
   float m_flZoomTime0; // 0xCF8 - 0xCFC
   float m_flZoomTime1; // 0xCFC - 0xD00
   float m_flZoomTime2; // 0xD00 - 0xD04
   float m_flIronSightPullUpSpeed; // 0xD04 - 0xD08
   float m_flIronSightPutDownSpeed; // 0xD08 - 0xD0C
   float m_flIronSightFOV; // 0xD0C - 0xD10
   float m_flIronSightPivotForward; // 0xD10 - 0xD14
   float m_flIronSightLooseness; // 0xD14 - 0xD18
   QAngle m_angPivotAngle; // 0xD18 - 0xD24
   Vector m_vecIronSightEyePos; // 0xD24 - 0xD30
   int32_t m_nDamage; // 0xD30 - 0xD34
   float m_flHeadshotMultiplier; // 0xD34 - 0xD38
   float m_flArmorRatio; // 0xD38 - 0xD3C
   float m_flPenetration; // 0xD3C - 0xD40
   float m_flRange; // 0xD40 - 0xD44
   float m_flRangeModifier; // 0xD44 - 0xD48
   float m_flFlinchVelocityModifierLarge; // 0xD48 - 0xD4C
   float m_flFlinchVelocityModifierSmall; // 0xD4C - 0xD50
   float m_flRecoveryTimeCrouch; // 0xD50 - 0xD54
   float m_flRecoveryTimeStand; // 0xD54 - 0xD58
   float m_flRecoveryTimeCrouchFinal; // 0xD58 - 0xD5C
   float m_flRecoveryTimeStandFinal; // 0xD5C - 0xD60
   int32_t m_nRecoveryTransitionStartBullet; // 0xD60 - 0xD64
   int32_t m_nRecoveryTransitionEndBullet; // 0xD64 - 0xD68
   float m_flThrowVelocity; // 0xD68 - 0xD6C
   Vector m_vSmokeColor; // 0xD6C - 0xD78
   CUtlString m_szAnimClass; // 0xD78 - 0xD80

}; // size - 0xDA8


class CWeaponCSBaseVData : public CBasePlayerWeaponVData
{
public:

   CSWeaponType m_WeaponType; // 0x320 - 0x324
   CSWeaponCategory m_WeaponCategory; // 0x324 - 0x328
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; // 0x328 - 0x408
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szPlayerModel; // 0x408 - 0x4E8
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldDroppedModel; // 0x4E8 - 0x5C8
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szAimsightLensMaskModel; // 0x5C8 - 0x6A8
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szMagazineModel; // 0x6A8 - 0x788
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szHeatEffect; // 0x788 - 0x868
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szEjectBrassEffect; // 0x868 - 0x948
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticleAlt; // 0x948 - 0xA28
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticle; // 0xA28 - 0xB08
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticleAlt; // 0xB08 - 0xBE8
   gear_slot_t m_GearSlot; // 0xBE8 - 0xBEC
   int32_t m_GearSlotPosition; // 0xBEC - 0xBF0
   loadout_positions_t m_DefaultLoadoutPosition; // 0xBF0 - 0xBF4
   unsigned char pad_BF4[0x4] // 0xBF4 - 0xBF8
   CUtlString m_sWrongTeamMsg; // 0xBF8 - 0xC00
   int32_t m_nPrice; // 0xC00 - 0xC04
   int32_t m_nKillAward; // 0xC04 - 0xC08
   int32_t m_nPrimaryReserveAmmoMax; // 0xC08 - 0xC0C
   int32_t m_nSecondaryReserveAmmoMax; // 0xC0C - 0xC10
   bool m_bMeleeWeapon; // 0xC10 - 0xC11
   bool m_bHasBurstMode; // 0xC11 - 0xC12
   bool m_bIsRevolver; // 0xC12 - 0xC13
   bool m_bCannotShootUnderwater; // 0xC13 - 0xC14
   unsigned char pad_C14[0x4] // 0xC14 - 0xC18
   CUtlString m_szName; // 0xC18 - 0xC20
   CUtlString m_szAnimExtension; // 0xC20 - 0xC28
   CSWeaponSilencerType m_eSilencerType; // 0xC28 - 0xC2C
   int32_t m_nCrosshairMinDistance; // 0xC2C - 0xC30
   int32_t m_nCrosshairDeltaDistance; // 0xC30 - 0xC34
   CFiringModeFloat m_flCycleTime; // 0xC34 - 0xC3C
   CFiringModeFloat m_flMaxSpeed; // 0xC3C - 0xC44
   CFiringModeFloat m_flSpread; // 0xC44 - 0xC4C
   CFiringModeFloat m_flInaccuracyCrouch; // 0xC4C - 0xC54
   CFiringModeFloat m_flInaccuracyStand; // 0xC54 - 0xC5C
   CFiringModeFloat m_flInaccuracyJump; // 0xC5C - 0xC64
   CFiringModeFloat m_flInaccuracyLand; // 0xC64 - 0xC6C
   CFiringModeFloat m_flInaccuracyLadder; // 0xC6C - 0xC74
   CFiringModeFloat m_flInaccuracyFire; // 0xC74 - 0xC7C
   CFiringModeFloat m_flInaccuracyMove; // 0xC7C - 0xC84
   CFiringModeFloat m_flRecoilAngle; // 0xC84 - 0xC8C
   CFiringModeFloat m_flRecoilAngleVariance; // 0xC8C - 0xC94
   CFiringModeFloat m_flRecoilMagnitude; // 0xC94 - 0xC9C
   CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xC9C - 0xCA4
   CFiringModeInt m_nTracerFrequency; // 0xCA4 - 0xCAC
   float m_flInaccuracyJumpInitial; // 0xCAC - 0xCB0
   float m_flInaccuracyJumpApex; // 0xCB0 - 0xCB4
   float m_flInaccuracyReload; // 0xCB4 - 0xCB8
   int32_t m_nRecoilSeed; // 0xCB8 - 0xCBC
   int32_t m_nSpreadSeed; // 0xCBC - 0xCC0
   float m_flTimeToIdleAfterFire; // 0xCC0 - 0xCC4
   float m_flIdleInterval; // 0xCC4 - 0xCC8
   float m_flAttackMovespeedFactor; // 0xCC8 - 0xCCC
   float m_flHeatPerShot; // 0xCCC - 0xCD0
   float m_flInaccuracyPitchShift; // 0xCD0 - 0xCD4
   float m_flInaccuracyAltSoundThreshold; // 0xCD4 - 0xCD8
   float m_flBotAudibleRange; // 0xCD8 - 0xCDC
   unsigned char pad_CDC[0x4] // 0xCDC - 0xCE0
   CUtlString m_szUseRadioSubtitle; // 0xCE0 - 0xCE8
   bool m_bUnzoomsAfterShot; // 0xCE8 - 0xCE9
   bool m_bHideViewModelWhenZoomed; // 0xCE9 - 0xCEA
   unsigned char pad_CEA[0x2] // 0xCEA - 0xCEC
   int32_t m_nZoomLevels; // 0xCEC - 0xCF0
   int32_t m_nZoomFOV1; // 0xCF0 - 0xCF4
   int32_t m_nZoomFOV2; // 0xCF4 - 0xCF8
   float m_flZoomTime0; // 0xCF8 - 0xCFC
   float m_flZoomTime1; // 0xCFC - 0xD00
   float m_flZoomTime2; // 0xD00 - 0xD04
   float m_flIronSightPullUpSpeed; // 0xD04 - 0xD08
   float m_flIronSightPutDownSpeed; // 0xD08 - 0xD0C
   float m_flIronSightFOV; // 0xD0C - 0xD10
   float m_flIronSightPivotForward; // 0xD10 - 0xD14
   float m_flIronSightLooseness; // 0xD14 - 0xD18
   QAngle m_angPivotAngle; // 0xD18 - 0xD24
   Vector m_vecIronSightEyePos; // 0xD24 - 0xD30
   int32_t m_nDamage; // 0xD30 - 0xD34
   float m_flHeadshotMultiplier; // 0xD34 - 0xD38
   float m_flArmorRatio; // 0xD38 - 0xD3C
   float m_flPenetration; // 0xD3C - 0xD40
   float m_flRange; // 0xD40 - 0xD44
   float m_flRangeModifier; // 0xD44 - 0xD48
   float m_flFlinchVelocityModifierLarge; // 0xD48 - 0xD4C
   float m_flFlinchVelocityModifierSmall; // 0xD4C - 0xD50
   float m_flRecoveryTimeCrouch; // 0xD50 - 0xD54
   float m_flRecoveryTimeStand; // 0xD54 - 0xD58
   float m_flRecoveryTimeCrouchFinal; // 0xD58 - 0xD5C
   float m_flRecoveryTimeStandFinal; // 0xD5C - 0xD60
   int32_t m_nRecoveryTransitionStartBullet; // 0xD60 - 0xD64
   int32_t m_nRecoveryTransitionEndBullet; // 0xD64 - 0xD68
   float m_flThrowVelocity; // 0xD68 - 0xD6C
   Vector m_vSmokeColor; // 0xD6C - 0xD78
   CUtlString m_szAnimClass; // 0xD78 - 0xD80

}; // size - 0xDA8


class CWeaponElite : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponFamas : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponFiveSeven : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponG3SG1 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponGalilAR : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponGlock : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponHKP2000 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponM249 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponM4A1 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponMAC10 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponMP7 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponMP9 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponMag7 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponNOVA : public CWeaponCSBase
{
public:


}; // size - 0xD50


class CWeaponNegev : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponP250 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponP90 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponSCAR20 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponSG556 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponSSG08 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponSawedoff : public CWeaponCSBase
{
public:


}; // size - 0xD50


class CWeaponShield : public CWeaponCSBaseGun
{
public:

   float m_flBulletDamageAbsorbed; // 0xD70 - 0xD74
   GameTime_t m_flLastBulletHitSoundTime; // 0xD74 - 0xD78
   float m_flDisplayHealth; // 0xD78 - 0xD7C

}; // size - 0xD80


class CWeaponTaser : public CWeaponCSBaseGun
{
public:

   GameTime_t m_fFireTime; // 0xD70 - 0xD74

}; // size - 0xD78


class CWeaponTec9 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponUMP45 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponXM1014 : public CWeaponCSBase
{
public:


}; // size - 0xD50


class CWeaponZoneRepulsor : public CWeaponCSBaseGun
{
public:


}; // size - 0xD90


class CWorld : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CWristBone
{
public:

   CUtlString m_name; // 0x0 - 0x8
   Vector m_vForwardLS; // 0x8 - 0x14
   Vector m_vUpLS; // 0x14 - 0x20
   Vector m_vOffset; // 0x20 - 0x2C

}; // size - 0x30


class CZeroPoseAnimNode : public CAnimNodeBase
{
public:


}; // size - 0x38


class CZeroPoseUpdateNode : public CLeafUpdateNode
{
public:


}; // size - 0x60


class C_AK47 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_AttributeContainer : public CAttributeManager
{
public:

   C_EconItemView m_Item; // 0x50 - 0x498
   int32_t m_iExternalItemProviderRegisteredToken; // 0x498 - 0x49C
   unsigned char pad_49C[0x4] // 0x49C - 0x4A0
   uint64_t m_ullRegisteredAsItemID; // 0x4A0 - 0x4A8

}; // size - 0x4A8


class C_BRC4Target : public CBaseAnimGraph
{
public:

   bool m_bBrokenOpen; // 0x9A0 - 0x9A1
   unsigned char pad_9A1[0x3] // 0x9A1 - 0x9A4
   float m_flRadius; // 0x9A4 - 0x9A8

}; // size - 0x9A8


class C_BaseButton : public C_BaseToggle
{
public:

   CHandle< C_BaseModelEntity > m_glowEntity; // 0x838 - 0x83C
   bool m_usable; // 0x83C - 0x83D
   unsigned char pad_83D[0x3] // 0x83D - 0x840
   CUtlSymbolLarge m_szDisplayText; // 0x840 - 0x848

}; // size - 0x848


class C_BaseDoor : public C_BaseToggle
{
public:

   bool m_bIsUsable; // 0x838 - 0x839

}; // size - 0x840



class C_BasePropDoor : public C_DynamicProp
{
public:

   DoorState_t m_eDoorState; // 0xC10 - 0xC14
   bool m_modelChanged; // 0xC14 - 0xC15
   bool m_bLocked; // 0xC15 - 0xC16
   unsigned char pad_C16[0x2] // 0xC16 - 0xC18
   Vector m_closedPosition; // 0xC18 - 0xC24
   QAngle m_closedAngles; // 0xC24 - 0xC30
   CHandle< C_BasePropDoor > m_hMaster; // 0xC30 - 0xC34
   Vector m_vWhereToSetLightingOrigin; // 0xC34 - 0xC40

}; // size - 0xC40


class C_Beam : public C_BaseModelEntity
{
public:

   float m_flFrameRate; // 0x838 - 0x83C
   float m_flHDRColorScale; // 0x83C - 0x840
   GameTime_t m_flFireTime; // 0x840 - 0x844
   float m_flDamage; // 0x844 - 0x848
   uint8_t m_nNumBeamEnts; // 0x848 - 0x849
   unsigned char pad_849[0x3] // 0x849 - 0x84C
   int32_t m_queryHandleHalo; // 0x84C - 0x850
   unsigned char pad_850[0x20] // 0x850 - 0x870
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x870 - 0x878
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x878 - 0x880
   BeamType_t m_nBeamType; // 0x880 - 0x884
   uint32_t m_nBeamFlags; // 0x884 - 0x888
   CHandle< C_BaseEntity > m_hAttachEntity[10]; // 0x888 - 0x8B0
   AttachmentHandle_t m_nAttachIndex[10]; // 0x8B0 - 0x8BA
   unsigned char pad_8BA[0x2] // 0x8BA - 0x8BC
   float m_fWidth; // 0x8BC - 0x8C0
   float m_fEndWidth; // 0x8C0 - 0x8C4
   float m_fFadeLength; // 0x8C4 - 0x8C8
   float m_fHaloScale; // 0x8C8 - 0x8CC
   float m_fAmplitude; // 0x8CC - 0x8D0
   float m_fStartFrame; // 0x8D0 - 0x8D4
   float m_fSpeed; // 0x8D4 - 0x8D8
   float m_flFrame; // 0x8D8 - 0x8DC
   BeamClipStyle_t m_nClipStyle; // 0x8DC - 0x8E0
   bool m_bTurnedOff; // 0x8E0 - 0x8E1
   unsigned char pad_8E1[0x3] // 0x8E1 - 0x8E4
   Vector m_vecEndPos; // 0x8E4 - 0x8F0
   CHandle< C_BaseEntity > m_hEndEntity; // 0x8F0 - 0x8F4

}; // size - 0x8F8


class C_BreachCharge : public C_WeaponCSBase
{
public:


}; // size - 0x13E0


class C_BreachChargeProjectile : public C_BaseGrenade
{
public:

   bool m_bShouldExplode; // 0xB78 - 0xB79
   unsigned char pad_B79[0x3] // 0xB79 - 0xB7C
   CHandle< C_BaseEntity > m_weaponThatThrewMe; // 0xB7C - 0xB80
   int32_t m_nParentBoneIndex; // 0xB80 - 0xB84
   Vector m_vecParentBonePos; // 0xB84 - 0xB90

}; // size - 0xB90


class C_BulletHitModel : public CBaseAnimGraph
{
public:

   matrix3x4_t m_matLocal; // 0x998 - 0x9C8
   int32_t m_iBoneIndex; // 0x9C8 - 0x9CC
   CHandle< C_BaseEntity > m_hPlayerParent; // 0x9CC - 0x9D0
   bool m_bIsHit; // 0x9D0 - 0x9D1
   unsigned char pad_9D1[0x3] // 0x9D1 - 0x9D4
   float m_flTimeCreated; // 0x9D4 - 0x9D8
   Vector m_vecStartPos; // 0x9D8 - 0x9E4

}; // size - 0x9E8


class C_BumpMine : public C_WeaponCSBase
{
public:


}; // size - 0x13D0


class C_BumpMineProjectile : public C_BaseGrenade
{
public:

   bool m_bShouldExplode; // 0xB78 - 0xB79
   unsigned char pad_B79[0x3] // 0xB79 - 0xB7C
   int32_t m_nParentBoneIndex; // 0xB7C - 0xB80
   Vector m_vecParentBonePos; // 0xB80 - 0xB8C
   bool m_bArmed; // 0xB8C - 0xB8D

}; // size - 0xBB0


class C_C4 : public C_WeaponCSBase
{
public:

   char m_szScreenText[32]; // 0x13D0 - 0x13F0
   ParticleIndex_t m_bombdroppedlightParticleIndex; // 0x13F0 - 0x13F4
   bool m_bStartedArming; // 0x13F4 - 0x13F5
   unsigned char pad_13F5[0x3] // 0x13F5 - 0x13F8
   GameTime_t m_fArmedTime; // 0x13F8 - 0x13FC
   bool m_bBombPlacedAnimation; // 0x13FC - 0x13FD
   bool m_bShowC4LED; // 0x13FD - 0x13FE
   bool m_bIsPlantingViaUse; // 0x13FE - 0x13FF
   unsigned char pad_13FF[0x1] // 0x13FF - 0x1400
   EntitySpottedState_t m_entitySpottedState; // 0x1400 - 0x1418
   int32_t m_nSpotRules; // 0x1418 - 0x141C
   bool m_bPlayedArmingBeeps[7]; // 0x141C - 0x1423
   bool m_bBombPlanted; // 0x1423 - 0x1424
   bool m_bDroppedFromDeath; // 0x1424 - 0x1425

}; // size - 0x1430


class C_CSGOViewModel : public C_PredictedViewModel
{
public:

   bool m_bShouldIgnoreOffsetAndAccuracy; // 0xA28 - 0xA29
   unsigned char pad_A29[0x3] // 0xA29 - 0xA2C
   Vector m_vecCamDriverLastPos; // 0xA2C - 0xA38
   QAngle m_angCamDriverLastAng; // 0xA38 - 0xA44
   float m_flCamDriverAppliedTime; // 0xA44 - 0xA48
   float m_flCamDriverWeight; // 0xA48 - 0xA4C
   uint32_t m_nWeaponParity; // 0xA4C - 0xA50
   uint32_t m_nOldWeaponParity; // 0xA50 - 0xA54
   CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0xA54 - 0xA58
   bool m_bNeedToQueueHighResComposite; // 0xA58 - 0xA59
   unsigned char pad_A59[0x43] // 0xA59 - 0xA9C
   QAngle m_vLoweredWeaponOffset; // 0xA9C - 0xAA8

}; // size - 0xAA8


class C_CSGO_CounterTerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:


}; // size - 0x5B0


class C_CSGO_EndOfMatchCamera : public C_CSGO_TeamPreviewCamera
{
public:


}; // size - 0x5B0


class C_CSGO_EndOfMatchCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:


}; // size - 0x9D0


class C_CSGO_EndOfMatchLineupEnd : public C_CSGO_EndOfMatchLineupEndpoint
{
public:


}; // size - 0x538


class C_CSGO_EndOfMatchLineupStart : public C_CSGO_EndOfMatchLineupEndpoint
{
public:


}; // size - 0x538


class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity
{
public:

   CUtlSymbolLarge m_szParentPathUniqueID; // 0x538 - 0x540
   int32_t m_nPathIndex; // 0x540 - 0x544
   Vector m_vInTangentLocal; // 0x544 - 0x550
   Vector m_vOutTangentLocal; // 0x550 - 0x55C
   float m_flFOV; // 0x55C - 0x560
   float m_flSpeed; // 0x560 - 0x564
   float m_flEaseIn; // 0x564 - 0x568
   float m_flEaseOut; // 0x568 - 0x56C
   Vector m_vInTangentWorld; // 0x56C - 0x578
   Vector m_vOutTangentWorld; // 0x578 - 0x584

}; // size - 0x588


class C_CSGO_PreviewModelAlias_csgo_item_previewmodel : public C_CSGO_PreviewModel
{
public:


}; // size - 0xBF0


class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public C_CSGO_PreviewPlayer
{
public:


}; // size - 0x1A30


class C_CSGO_TeamIntroCounterTerroristPosition : public C_CSGO_TeamIntroCharacterPosition
{
public:


}; // size - 0x9D0


class C_CSGO_TeamIntroTerroristPosition : public C_CSGO_TeamIntroCharacterPosition
{
public:


}; // size - 0x9D0


class C_CSGO_TeamPreviewModel : public C_CSGO_PreviewPlayer
{
public:


}; // size - 0x1A30


class C_CSGO_TeamSelectCamera : public C_CSGO_TeamPreviewCamera
{
public:


}; // size - 0x5B0


class C_CSGO_TeamSelectCounterTerroristPosition : public C_CSGO_TeamSelectCharacterPosition
{
public:


}; // size - 0x9D0


class C_CSGO_TeamSelectTerroristPosition : public C_CSGO_TeamSelectCharacterPosition
{
public:


}; // size - 0x9D0


class C_CSGO_TerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:


}; // size - 0x5B0


class C_CSGameRules : public C_TeamplayRules
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   bool m_bFreezePeriod; // 0x30 - 0x31
   bool m_bWarmupPeriod; // 0x31 - 0x32
   unsigned char pad_32[0x2] // 0x32 - 0x34
   GameTime_t m_fWarmupPeriodEnd; // 0x34 - 0x38
   GameTime_t m_fWarmupPeriodStart; // 0x38 - 0x3C
   bool m_bTerroristTimeOutActive; // 0x3C - 0x3D
   bool m_bCTTimeOutActive; // 0x3D - 0x3E
   unsigned char pad_3E[0x2] // 0x3E - 0x40
   float m_flTerroristTimeOutRemaining; // 0x40 - 0x44
   float m_flCTTimeOutRemaining; // 0x44 - 0x48
   int32_t m_nTerroristTimeOuts; // 0x48 - 0x4C
   int32_t m_nCTTimeOuts; // 0x4C - 0x50
   bool m_bTechnicalTimeOut; // 0x50 - 0x51
   bool m_bMatchWaitingForResume; // 0x51 - 0x52
   unsigned char pad_52[0x2] // 0x52 - 0x54
   int32_t m_iRoundTime; // 0x54 - 0x58
   float m_fMatchStartTime; // 0x58 - 0x5C
   GameTime_t m_fRoundStartTime; // 0x5C - 0x60
   GameTime_t m_flRestartRoundTime; // 0x60 - 0x64
   bool m_bGameRestart; // 0x64 - 0x65
   unsigned char pad_65[0x3] // 0x65 - 0x68
   float m_flGameStartTime; // 0x68 - 0x6C
   float m_timeUntilNextPhaseStarts; // 0x6C - 0x70
   int32_t m_gamePhase; // 0x70 - 0x74
   int32_t m_totalRoundsPlayed; // 0x74 - 0x78
   int32_t m_nRoundsPlayedThisPhase; // 0x78 - 0x7C
   int32_t m_nOvertimePlaying; // 0x7C - 0x80
   int32_t m_iHostagesRemaining; // 0x80 - 0x84
   bool m_bAnyHostageReached; // 0x84 - 0x85
   bool m_bMapHasBombTarget; // 0x85 - 0x86
   bool m_bMapHasRescueZone; // 0x86 - 0x87
   bool m_bMapHasBuyZone; // 0x87 - 0x88
   bool m_bIsQueuedMatchmaking; // 0x88 - 0x89
   unsigned char pad_89[0x3] // 0x89 - 0x8C
   int32_t m_nQueuedMatchmakingMode; // 0x8C - 0x90
   bool m_bIsValveDS; // 0x90 - 0x91
   bool m_bLogoMap; // 0x91 - 0x92
   bool m_bPlayAllStepSoundsOnServer; // 0x92 - 0x93
   unsigned char pad_93[0x1] // 0x93 - 0x94
   int32_t m_iNumGunGameProgressiveWeaponsCT; // 0x94 - 0x98
   int32_t m_iNumGunGameProgressiveWeaponsT; // 0x98 - 0x9C
   int32_t m_iSpectatorSlotCount; // 0x9C - 0xA0
   int32 m_GGProgressiveWeaponOrderCT[60]; // 0xA0 - 0x190
   int32 m_GGProgressiveWeaponOrderT[60]; // 0x190 - 0x280
   int32 m_GGProgressiveWeaponKillUpgradeOrderCT[60]; // 0x280 - 0x370
   int32 m_GGProgressiveWeaponKillUpgradeOrderT[60]; // 0x370 - 0x460
   int32_t m_MatchDevice; // 0x460 - 0x464
   bool m_bHasMatchStarted; // 0x464 - 0x465
   unsigned char pad_465[0x3] // 0x465 - 0x468
   float m_flDMBonusStartTime; // 0x468 - 0x46C
   float m_flDMBonusTimeLength; // 0x46C - 0x470
   uint16_t m_unDMBonusWeaponLoadoutSlot; // 0x470 - 0x472
   bool m_bDMBonusActive; // 0x472 - 0x473
   unsigned char pad_473[0x1] // 0x473 - 0x474
   int32_t m_nNextMapInMapgroup; // 0x474 - 0x478
   char m_szTournamentEventName[512]; // 0x478 - 0x678
   char m_szTournamentEventStage[512]; // 0x678 - 0x878
   char m_szMatchStatTxt[512]; // 0x878 - 0xA78
   char m_szTournamentPredictionsTxt[512]; // 0xA78 - 0xC78
   int32_t m_nTournamentPredictionsPct; // 0xC78 - 0xC7C
   GameTime_t m_flCMMItemDropRevealStartTime; // 0xC7C - 0xC80
   GameTime_t m_flCMMItemDropRevealEndTime; // 0xC80 - 0xC84
   bool m_bIsDroppingItems; // 0xC84 - 0xC85
   bool m_bIsQuestEligible; // 0xC85 - 0xC86
   unsigned char pad_C86[0x2] // 0xC86 - 0xC88
   int32_t m_nGuardianModeWaveNumber; // 0xC88 - 0xC8C
   int32_t m_nGuardianModeSpecialKillsRemaining; // 0xC8C - 0xC90
   int32_t m_nGuardianModeSpecialWeaponNeeded; // 0xC90 - 0xC94
   int32_t m_nGuardianGrenadesToGiveBots; // 0xC94 - 0xC98
   int32_t m_nNumHeaviesToSpawn; // 0xC98 - 0xC9C
   uint32_t m_numGlobalGiftsGiven; // 0xC9C - 0xCA0
   uint32_t m_numGlobalGifters; // 0xCA0 - 0xCA4
   uint32_t m_numGlobalGiftsPeriodSeconds; // 0xCA4 - 0xCA8
   uint32 m_arrFeaturedGiftersAccounts[4]; // 0xCA8 - 0xCB8
   uint32 m_arrFeaturedGiftersGifts[4]; // 0xCB8 - 0xCC8
   uint16 m_arrProhibitedItemIndices[100]; // 0xCC8 - 0xD90
   uint32 m_arrTournamentActiveCasterAccounts[4]; // 0xD90 - 0xDA0
   int32_t m_numBestOfMaps; // 0xDA0 - 0xDA4
   int32_t m_nHalloweenMaskListSeed; // 0xDA4 - 0xDA8
   bool m_bBombDropped; // 0xDA8 - 0xDA9
   bool m_bBombPlanted; // 0xDA9 - 0xDAA
   unsigned char pad_DAA[0x2] // 0xDAA - 0xDAC
   int32_t m_iRoundWinStatus; // 0xDAC - 0xDB0
   int32_t m_eRoundWinReason; // 0xDB0 - 0xDB4
   bool m_bTCantBuy; // 0xDB4 - 0xDB5
   bool m_bCTCantBuy; // 0xDB5 - 0xDB6
   unsigned char pad_DB6[0x2] // 0xDB6 - 0xDB8
   GameTime_t m_flGuardianBuyUntilTime; // 0xDB8 - 0xDBC
   int32 m_iMatchStats_RoundResults[30]; // 0xDBC - 0xE34
   int32 m_iMatchStats_PlayersAlive_CT[30]; // 0xE34 - 0xEAC
   int32 m_iMatchStats_PlayersAlive_T[30]; // 0xEAC - 0xF24
   float32 m_TeamRespawnWaveTimes[32]; // 0xF24 - 0xFA4
   GameTime_t m_flNextRespawnWave[32]; // 0xFA4 - 0x1024
   int32_t m_nServerQuestID; // 0x1024 - 0x1028
   bool m_bDontIncrementCoopWave; // 0x1028 - 0x1029
   bool m_bSpawnedTerrorHuntHeavy; // 0x1029 - 0x102A
   unsigned char pad_102A[0x2] // 0x102A - 0x102C
   int32 m_nEndMatchMapGroupVoteTypes[10]; // 0x102C - 0x1054
   int32 m_nEndMatchMapGroupVoteOptions[10]; // 0x1054 - 0x107C
   int32_t m_nEndMatchMapVoteWinner; // 0x107C - 0x1080
   int32_t m_iNumConsecutiveCTLoses; // 0x1080 - 0x1084
   int32_t m_iNumConsecutiveTerroristLoses; // 0x1084 - 0x1088
   unsigned char pad_1088[0x18] // 0x1088 - 0x10A0
   bool m_bMarkClientStopRecordAtRoundEnd; // 0x10A0 - 0x10A1
   unsigned char pad_10A1[0x57] // 0x10A1 - 0x10F8
   bool m_bHasTriggeredRoundStartMusic; // 0x10F8 - 0x10F9
   bool m_bHasTriggeredCoopSpawnReset; // 0x10F9 - 0x10FA
   bool m_bSwitchingTeamsAtRoundReset; // 0x10FA - 0x10FB
   unsigned char pad_10FB[0x1] // 0x10FB - 0x10FC
   int32_t m_iMaxGunGameProgressiveWeaponIndex; // 0x10FC - 0x1100
   unsigned char pad_1100[0x18] // 0x1100 - 0x1118
   C_SurvivalGameRules m_SurvivalRules; // 0x1118 - 0x17D8
   C_RetakeGameRules m_RetakeRules; // 0x17D8 - 0x18F0
   uint8_t m_nMatchEndCount; // 0x18F0 - 0x18F1
   bool m_bTeamIntroPeriod; // 0x18F1 - 0x18F2

}; // size - 0x18F8


class C_CSGameRulesProxy : public C_GameRulesProxy
{
public:

   C_CSGameRules* m_pGameRules; // 0x538 - 0x540

}; // size - 0x540


class C_CSObserverPawn : public C_CSPlayerPawnBase
{
public:

   CEntityHandle m_hDetectParentChange; // 0x12A0 - 0x12A4

}; // size - 0x12A8


class C_CSPlayerResource : public C_BaseEntity
{
public:

   bool m_bHostageAlive[12]; // 0x538 - 0x544
   bool m_isHostageFollowingSomeone[12]; // 0x544 - 0x550
   CEntityIndex m_iHostageEntityIDs[12]; // 0x550 - 0x580
   Vector m_bombsiteCenterA; // 0x580 - 0x58C
   Vector m_bombsiteCenterB; // 0x58C - 0x598
   int32 m_hostageRescueX[4]; // 0x598 - 0x5A8
   int32 m_hostageRescueY[4]; // 0x5A8 - 0x5B8
   int32 m_hostageRescueZ[4]; // 0x5B8 - 0x5C8
   bool m_bEndMatchNextMapAllVoted; // 0x5C8 - 0x5C9
   bool m_foundGoalPositions; // 0x5C9 - 0x5CA

}; // size - 0x5D0


class C_CSPropExplodingBarrel : public C_PhysicsProp
{
public:


}; // size - 0xAF0


class C_CSPropExplodingBarrelTop : public C_PhysicsProp
{
public:

   float m_flOverrideAlpha; // 0xAF0 - 0xAF4

}; // size - 0xAF8


class C_CSTeam : public C_Team
{
public:

   char m_szTeamMatchStat[512]; // 0x5F0 - 0x7F0
   int32_t m_numMapVictories; // 0x7F0 - 0x7F4
   bool m_bSurrendered; // 0x7F4 - 0x7F5
   unsigned char pad_7F5[0x3] // 0x7F5 - 0x7F8
   int32_t m_scoreFirstHalf; // 0x7F8 - 0x7FC
   int32_t m_scoreSecondHalf; // 0x7FC - 0x800
   int32_t m_scoreOvertime; // 0x800 - 0x804
   char m_szClanTeamname[129]; // 0x804 - 0x885
   unsigned char pad_885[0x3] // 0x885 - 0x888
   uint32_t m_iClanID; // 0x888 - 0x88C
   CPlayerSlot m_nGGLeaderSlot_CT; // 0x88C - 0x890
   CPlayerSlot m_nGGLeaderSlot_T; // 0x890 - 0x894
   char m_szTeamFlagImage[8]; // 0x894 - 0x89C
   char m_szTeamLogoImage[8]; // 0x89C - 0x8A4

}; // size - 0x8A8


class C_Chicken : public C_DynamicProp
{
public:

   CHandle< CBaseAnimGraph > m_hHolidayHatAddon; // 0xC08 - 0xC0C
   bool m_jumpedThisFrame; // 0xC0C - 0xC0D
   unsigned char pad_C0D[0x3] // 0xC0D - 0xC10
   CHandle< C_CSPlayerPawnBase > m_leader; // 0xC10 - 0xC14
   unsigned char pad_C14[0x4] // 0xC14 - 0xC18
   C_AttributeContainer m_AttributeManager; // 0xC18 - 0x10C0
   uint32_t m_OriginalOwnerXuidLow; // 0x10C0 - 0x10C4
   uint32_t m_OriginalOwnerXuidHigh; // 0x10C4 - 0x10C8
   bool m_bAttributesInitialized; // 0x10C8 - 0x10C9

}; // size - 0x10D0


class C_ClientRagdoll : public CBaseAnimGraph
{
public:

   bool m_bFadeOut; // 0x998 - 0x999
   bool m_bImportant; // 0x999 - 0x99A
   unsigned char pad_99A[0x2] // 0x99A - 0x99C
   GameTime_t m_flEffectTime; // 0x99C - 0x9A0
   GameTime_t m_gibDespawnTime; // 0x9A0 - 0x9A4
   int32_t m_iCurrentFriction; // 0x9A4 - 0x9A8
   int32_t m_iMinFriction; // 0x9A8 - 0x9AC
   int32_t m_iMaxFriction; // 0x9AC - 0x9B0
   int32_t m_iFrictionAnimState; // 0x9B0 - 0x9B4
   bool m_bReleaseRagdoll; // 0x9B4 - 0x9B5
   AttachmentHandle_t m_iEyeAttachment; // 0x9B5 - 0x9B6
   bool m_bFadingOut; // 0x9B6 - 0x9B7
   unsigned char pad_9B7[0x1] // 0x9B7 - 0x9B8
   float32 m_flScaleEnd[10]; // 0x9B8 - 0x9E0
   GameTime_t m_flScaleTimeStart[10]; // 0x9E0 - 0xA08
   GameTime_t m_flScaleTimeEnd[10]; // 0xA08 - 0xA30

}; // size - 0xA30


class C_ColorCorrection : public C_BaseEntity
{
public:

   Vector m_vecOrigin; // 0x538 - 0x544
   float m_MinFalloff; // 0x544 - 0x548
   float m_MaxFalloff; // 0x548 - 0x54C
   float m_flFadeInDuration; // 0x54C - 0x550
   float m_flFadeOutDuration; // 0x550 - 0x554
   float m_flMaxWeight; // 0x554 - 0x558
   float m_flCurWeight; // 0x558 - 0x55C
   char m_netlookupFilename[512]; // 0x55C - 0x75C
   bool m_bEnabled; // 0x75C - 0x75D
   bool m_bMaster; // 0x75D - 0x75E
   bool m_bClientSide; // 0x75E - 0x75F
   bool m_bExclusive; // 0x75F - 0x760
   bool m_bEnabledOnClient[1]; // 0x760 - 0x761
   unsigned char pad_761[0x3] // 0x761 - 0x764
   float32 m_flCurWeightOnClient[1]; // 0x764 - 0x768
   bool m_bFadingIn[1]; // 0x768 - 0x769
   unsigned char pad_769[0x3] // 0x769 - 0x76C
   float32 m_flFadeStartWeight[1]; // 0x76C - 0x770
   float32 m_flFadeStartTime[1]; // 0x770 - 0x774
   float32 m_flFadeDuration[1]; // 0x774 - 0x778

}; // size - 0x780


class C_ColorCorrectionVolume : public C_BaseTrigger
{
public:

   float m_LastEnterWeight; // 0x840 - 0x844
   float m_LastEnterTime; // 0x844 - 0x848
   float m_LastExitWeight; // 0x848 - 0x84C
   float m_LastExitTime; // 0x84C - 0x850
   bool m_bEnabled; // 0x850 - 0x851
   unsigned char pad_851[0x3] // 0x851 - 0x854
   float m_MaxWeight; // 0x854 - 0x858
   float m_FadeDuration; // 0x858 - 0x85C
   float m_Weight; // 0x85C - 0x860
   char m_lookupFilename[512]; // 0x860 - 0xA60

}; // size - 0xA68


class C_CommandContext
{
public:

   bool needsprocessing; // 0x0 - 0x1
   unsigned char pad_1[0x77] // 0x1 - 0x78
   int32_t command_number; // 0x78 - 0x7C

}; // size - 0x80


class C_DEagle : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_DangerZone : public C_BaseEntity
{
public:

   Vector m_vecDangerZoneOriginStartedAt; // 0x538 - 0x544
   GameTime_t m_flBombLaunchTime; // 0x544 - 0x548
   float m_flExtraRadius; // 0x548 - 0x54C
   GameTime_t m_flExtraRadiusStartTime; // 0x54C - 0x550
   float m_flExtraRadiusTotalLerpTime; // 0x550 - 0x554
   int32_t m_nDropOrder; // 0x554 - 0x558
   int32_t m_iWave; // 0x558 - 0x55C

}; // size - 0x560


class C_DangerZoneController : public C_BaseEntity
{
public:

   bool m_bDangerZoneControllerEnabled; // 0x538 - 0x539
   bool m_bMissionControlledExplosions; // 0x539 - 0x53A
   unsigned char pad_53A[0x2] // 0x53A - 0x53C
   Vector m_vecEndGameCircleStart; // 0x53C - 0x548
   Vector m_vecEndGameCircleEnd; // 0x548 - 0x554
   GameTime_t m_flStartTime; // 0x554 - 0x558
   float m_flFinalExpansionTime; // 0x558 - 0x55C
   CHandle< C_DangerZone > m_DangerZones[42]; // 0x55C - 0x604
   GameTime_t m_flWaveEndTimes[5]; // 0x604 - 0x618
   CHandle< C_DangerZone > m_hTheFinalZone; // 0x618 - 0x61C

}; // size - 0x620


class C_DecoyGrenade : public C_BaseCSGrenade
{
public:


}; // size - 0x1410


class C_DecoyProjectile : public C_BaseCSGrenadeProjectile
{
public:

   GameTime_t m_flTimeParticleEffectSpawn; // 0xC20 - 0xC24

}; // size - 0xC28


class C_Drone : public C_PhysicsProp
{
public:

   CUtlVector< Vector > m_vecClientSideTrailPositions; // 0xB00 - 0xB18
   CEntityHandle m_hMoveToThisEntity; // 0xB18 - 0xB1C
   CEntityHandle m_hDeliveryCargo; // 0xB1C - 0xB20
   CEntityHandle m_hRecentCargo; // 0xB20 - 0xB24
   bool m_bPilotTakeoverAllowed; // 0xB24 - 0xB25
   unsigned char pad_B25[0x3] // 0xB25 - 0xB28
   CEntityHandle m_hPotentialCargo; // 0xB28 - 0xB2C
   CEntityHandle m_hCurrentPilot; // 0xB2C - 0xB30
   Vector m_vecTagPositions[24]; // 0xB30 - 0xC50
   int32 m_vecTagIncrements[24]; // 0xC50 - 0xCB0
   GameTime_t m_flLastTimeCargoWasAttached; // 0xCB0 - 0xCB4
   Vector m_vecLastKnownCargoAttachPositions[4]; // 0xCB4 - 0xCE4
   Vector m_vecThrusterLastPos; // 0xCE4 - 0xCF0
   Vector m_vecThrusterSmoothVel; // 0xCF0 - 0xCFC
   Vector m_vecThrusterSmoothAccel; // 0xCFC - 0xD08
   float m_flJammedEffectAmount; // 0xD08 - 0xD0C

}; // size - 0xD50


class C_Dronegun : public CBaseAnimGraph
{
public:

   Vector m_vecAttentionTarget; // 0x9A0 - 0x9AC
   Vector m_vecTargetOffset; // 0x9AC - 0x9B8
   bool m_bHasTarget; // 0x9B8 - 0x9B9
   unsigned char pad_9B9[0x3] // 0x9B9 - 0x9BC
   Vector m_vecAttentionCurrent; // 0x9BC - 0x9C8
   int32_t m_nPoseParamPitch; // 0x9C8 - 0x9CC
   int32_t m_nPoseParamYaw; // 0x9CC - 0x9D0
   bool m_bVarInit; // 0x9D0 - 0x9D1
   AttachmentHandle_t m_nAttachMuzzle; // 0x9D1 - 0x9D2
   unsigned char pad_9D2[0x2] // 0x9D2 - 0x9D4
   GameTime_t m_flLastClientThinkTime; // 0x9D4 - 0x9D8
   GameTime_t m_flNextSpark; // 0x9D8 - 0x9DC
   int32_t m_nBoneOverrideIndex; // 0x9DC - 0x9E0
   Vector m_vecLaserTracePos; // 0x9E0 - 0x9EC

}; // size - 0x9F0


class C_DynamicLight : public C_BaseModelEntity
{
public:

   uint8_t m_Flags; // 0x838 - 0x839
   uint8_t m_LightStyle; // 0x839 - 0x83A
   unsigned char pad_83A[0x2] // 0x83A - 0x83C
   float m_Radius; // 0x83C - 0x840
   int32_t m_Exponent; // 0x840 - 0x844
   float m_InnerAngle; // 0x844 - 0x848
   float m_OuterAngle; // 0x848 - 0x84C
   float m_SpotRadius; // 0x84C - 0x850

}; // size - 0x860


class C_DynamicPropAlias_cable_dynamic : public C_DynamicProp
{
public:


}; // size - 0xC00


class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp
{
public:


}; // size - 0xC00


class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp
{
public:


}; // size - 0xC00



class C_EconItemView : public IEconItemInterface
{
public:

   bool m_bInventoryImageRgbaRequested; // 0x60 - 0x61
   bool m_bInventoryImageTriedCache; // 0x61 - 0x62
   unsigned char pad_62[0x1E] // 0x62 - 0x80
   int32_t m_nInventoryImageRgbaWidth; // 0x80 - 0x84
   int32_t m_nInventoryImageRgbaHeight; // 0x84 - 0x88
   char m_szCurrentLoadCachedFileName[260]; // 0x88 - 0x18C
   unsigned char pad_18C[0x2C] // 0x18C - 0x1B8
   bool m_bRestoreCustomMaterialAfterPrecache; // 0x1B8 - 0x1B9
   unsigned char pad_1B9[0x1] // 0x1B9 - 0x1BA
   uint16_t m_iItemDefinitionIndex; // 0x1BA - 0x1BC
   int32_t m_iEntityQuality; // 0x1BC - 0x1C0
   uint32_t m_iEntityLevel; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4] // 0x1C4 - 0x1C8
   uint64_t m_iItemID; // 0x1C8 - 0x1D0
   uint32_t m_iItemIDHigh; // 0x1D0 - 0x1D4
   uint32_t m_iItemIDLow; // 0x1D4 - 0x1D8
   uint32_t m_iAccountID; // 0x1D8 - 0x1DC
   uint32_t m_iInventoryPosition; // 0x1DC - 0x1E0
   unsigned char pad_1E0[0x8] // 0x1E0 - 0x1E8
   bool m_bInitialized; // 0x1E8 - 0x1E9
   bool m_bIsStoreItem; // 0x1E9 - 0x1EA
   bool m_bIsTradeItem; // 0x1EA - 0x1EB
   unsigned char pad_1EB[0x1] // 0x1EB - 0x1EC
   int32_t m_iEntityQuantity; // 0x1EC - 0x1F0
   int32_t m_iRarityOverride; // 0x1F0 - 0x1F4
   int32_t m_iQualityOverride; // 0x1F4 - 0x1F8
   uint8_t m_unClientFlags; // 0x1F8 - 0x1F9
   uint8_t m_unOverrideStyle; // 0x1F9 - 0x1FA
   unsigned char pad_1FA[0x16] // 0x1FA - 0x210
   CAttributeList m_AttributeList; // 0x210 - 0x270
   CAttributeList m_NetworkedDynamicAttributes; // 0x270 - 0x2D0
   char m_szCustomName[161]; // 0x2D0 - 0x371
   char m_szCustomNameOverride[161]; // 0x371 - 0x412
   unsigned char pad_412[0x2E] // 0x412 - 0x440
   bool m_bInitializedTags; // 0x440 - 0x441

}; // size - 0x448


class C_EconWearable : public C_EconEntity
{
public:

   int32_t m_nForceSkin; // 0x1070 - 0x1074
   bool m_bAlwaysAllow; // 0x1074 - 0x1075

}; // size - 0x1078


class C_EntityDissolve : public C_BaseModelEntity
{
public:

   GameTime_t m_flStartTime; // 0x840 - 0x844
   float m_flFadeInStart; // 0x844 - 0x848
   float m_flFadeInLength; // 0x848 - 0x84C
   float m_flFadeOutModelStart; // 0x84C - 0x850
   float m_flFadeOutModelLength; // 0x850 - 0x854
   float m_flFadeOutStart; // 0x854 - 0x858
   float m_flFadeOutLength; // 0x858 - 0x85C
   GameTime_t m_flNextSparkTime; // 0x85C - 0x860
   EntityDisolveType_t m_nDissolveType; // 0x860 - 0x864
   Vector m_vDissolverOrigin; // 0x864 - 0x870
   uint32_t m_nMagnitude; // 0x870 - 0x874
   bool m_bCoreExplode; // 0x874 - 0x875
   bool m_bLinkedToServerEnt; // 0x875 - 0x876

}; // size - 0x880


class C_EntityFlame : public C_BaseEntity
{
public:

   CHandle< C_BaseEntity > m_hEntAttached; // 0x538 - 0x53C
   unsigned char pad_53C[0x24] // 0x53C - 0x560
   CHandle< C_BaseEntity > m_hOldAttached; // 0x560 - 0x564
   bool m_bCheapEffect; // 0x564 - 0x565

}; // size - 0x570


class C_EnvCombinedLightProbeVolume : public C_BaseEntity
{
public:

   Color m_Color; // 0x1608 - 0x160C
   float m_flBrightness; // 0x160C - 0x1610
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1610 - 0x1618
   bool m_bCustomCubemapTexture; // 0x1618 - 0x1619
   unsigned char pad_1619[0x7] // 0x1619 - 0x1620
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1620 - 0x1628
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1628 - 0x1630
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1630 - 0x1638
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1638 - 0x1640
   Vector m_vBoxMins; // 0x1640 - 0x164C
   Vector m_vBoxMaxs; // 0x164C - 0x1658
   CUtlSymbolLarge m_LightGroups; // 0x1658 - 0x1660
   bool m_bMoveable; // 0x1660 - 0x1661
   unsigned char pad_1661[0x3] // 0x1661 - 0x1664
   int32_t m_nHandshake; // 0x1664 - 0x1668
   int32_t m_nEnvCubeMapArrayIndex; // 0x1668 - 0x166C
   int32_t m_nPriority; // 0x166C - 0x1670
   bool m_bStartDisabled; // 0x1670 - 0x1671
   unsigned char pad_1671[0x3] // 0x1671 - 0x1674
   float m_flEdgeFadeDist; // 0x1674 - 0x1678
   Vector m_vEdgeFadeDists; // 0x1678 - 0x1684
   int32_t m_nLightProbeSizeX; // 0x1684 - 0x1688
   int32_t m_nLightProbeSizeY; // 0x1688 - 0x168C
   int32_t m_nLightProbeSizeZ; // 0x168C - 0x1690
   int32_t m_nLightProbeAtlasX; // 0x1690 - 0x1694
   int32_t m_nLightProbeAtlasY; // 0x1694 - 0x1698
   int32_t m_nLightProbeAtlasZ; // 0x1698 - 0x169C
   unsigned char pad_169C[0x15] // 0x169C - 0x16B1
   bool m_bEnabled; // 0x16B1 - 0x16B2

}; // size - 0x16B8


class C_EnvCubemapBox : public C_EnvCubemap
{
public:


}; // size - 0x698


class C_EnvCubemapFog : public C_BaseEntity
{
public:

   float m_flEndDistance; // 0x538 - 0x53C
   float m_flStartDistance; // 0x53C - 0x540
   float m_flFogFalloffExponent; // 0x540 - 0x544
   bool m_bHeightFogEnabled; // 0x544 - 0x545
   unsigned char pad_545[0x3] // 0x545 - 0x548
   float m_flFogHeightWidth; // 0x548 - 0x54C
   float m_flFogHeightEnd; // 0x54C - 0x550
   float m_flFogHeightStart; // 0x550 - 0x554
   float m_flFogHeightExponent; // 0x554 - 0x558
   float m_flLODBias; // 0x558 - 0x55C
   bool m_bActive; // 0x55C - 0x55D
   bool m_bStartDisabled; // 0x55D - 0x55E
   unsigned char pad_55E[0x2] // 0x55E - 0x560
   float m_flFogMaxOpacity; // 0x560 - 0x564
   int32_t m_nCubemapSourceType; // 0x564 - 0x568
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x568 - 0x570
   CUtlSymbolLarge m_iszSkyEntity; // 0x570 - 0x578
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x578 - 0x580
   bool m_bHasHeightFogEnd; // 0x580 - 0x581
   bool m_bFirstTime; // 0x581 - 0x582

}; // size - 0x588


class C_EnvDecal : public C_BaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x838 - 0x840
   float m_flWidth; // 0x840 - 0x844
   float m_flHeight; // 0x844 - 0x848
   float m_flDepth; // 0x848 - 0x84C
   uint32_t m_nRenderOrder; // 0x84C - 0x850
   bool m_bProjectOnWorld; // 0x850 - 0x851
   bool m_bProjectOnCharacters; // 0x851 - 0x852
   bool m_bProjectOnWater; // 0x852 - 0x853
   unsigned char pad_853[0x1] // 0x853 - 0x854
   float m_flDepthSortBias; // 0x854 - 0x858

}; // size - 0x870


class C_EnvDetailController : public C_BaseEntity
{
public:

   float m_flFadeStartDist; // 0x538 - 0x53C
   float m_flFadeEndDist; // 0x53C - 0x540

}; // size - 0x540


class C_EnvGasCanister : public CBaseAnimGraph
{
public:

   bool m_bLanded; // 0x998 - 0x999
   unsigned char pad_999[0x67] // 0x999 - 0xA00
   bool m_bSpawnedSkyboxParticles; // 0xA00 - 0xA01
   unsigned char pad_A01[0x3] // 0xA01 - 0xA04
   GameTime_t m_flKillImpactParticlesTime; // 0xA04 - 0xA08
   Vector m_vecImpactPosition; // 0xA08 - 0xA14
   Vector m_vecStartPosition; // 0xA14 - 0xA20
   Vector m_vecEnterWorldPosition; // 0xA20 - 0xA2C
   Vector m_vecDirection; // 0xA2C - 0xA38
   QAngle m_vecStartAngles; // 0xA38 - 0xA44
   float m_flFlightTime; // 0xA44 - 0xA48
   float m_flFlightSpeed; // 0xA48 - 0xA4C
   GameTime_t m_flLaunchTime; // 0xA4C - 0xA50
   float m_flInitialZSpeed; // 0xA50 - 0xA54
   float m_flZAcceleration; // 0xA54 - 0xA58
   float m_flHorizSpeed; // 0xA58 - 0xA5C
   bool m_bLaunchedFromWithinWorld; // 0xA5C - 0xA5D
   unsigned char pad_A5D[0x3] // 0xA5D - 0xA60
   Vector m_vecParabolaDirection; // 0xA60 - 0xA6C
   float m_flWorldEnterTime; // 0xA6C - 0xA70
   Vector m_vecSkyboxOrigin; // 0xA70 - 0xA7C
   float m_flSkyboxScale; // 0xA7C - 0xA80
   bool m_bInSkybox; // 0xA80 - 0xA81
   bool m_bDoImpactEffects; // 0xA81 - 0xA82
   unsigned char pad_A82[0x2] // 0xA82 - 0xA84
   int32_t m_nMyZoneIndex; // 0xA84 - 0xA88
   CHandle< C_BaseEntity > m_hSkyboxCopy; // 0xA88 - 0xA8C
   float m_flLaunchHeight; // 0xA8C - 0xA90

}; // size - 0xAA8


class C_EnvLightProbeVolume : public C_BaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1518 - 0x1520
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1520 - 0x1528
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1528 - 0x1530
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1530 - 0x1538
   Vector m_vBoxMins; // 0x1538 - 0x1544
   Vector m_vBoxMaxs; // 0x1544 - 0x1550
   CUtlSymbolLarge m_LightGroups; // 0x1550 - 0x1558
   bool m_bMoveable; // 0x1558 - 0x1559
   unsigned char pad_1559[0x3] // 0x1559 - 0x155C
   int32_t m_nHandshake; // 0x155C - 0x1560
   int32_t m_nPriority; // 0x1560 - 0x1564
   bool m_bStartDisabled; // 0x1564 - 0x1565
   unsigned char pad_1565[0x3] // 0x1565 - 0x1568
   int32_t m_nLightProbeSizeX; // 0x1568 - 0x156C
   int32_t m_nLightProbeSizeY; // 0x156C - 0x1570
   int32_t m_nLightProbeSizeZ; // 0x1570 - 0x1574
   int32_t m_nLightProbeAtlasX; // 0x1574 - 0x1578
   int32_t m_nLightProbeAtlasY; // 0x1578 - 0x157C
   int32_t m_nLightProbeAtlasZ; // 0x157C - 0x1580
   unsigned char pad_1580[0x9] // 0x1580 - 0x1589
   bool m_bEnabled; // 0x1589 - 0x158A

}; // size - 0x1590


class C_EnvParticleGlow : public C_ParticleSystem
{
public:

   float m_flAlphaScale; // 0xDE8 - 0xDEC
   float m_flRadiusScale; // 0xDEC - 0xDF0
   float m_flSelfIllumScale; // 0xDF0 - 0xDF4
   Color m_ColorTint; // 0xDF4 - 0xDF8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xDF8 - 0xE00

}; // size - 0xE00


class C_EnvProjectedTexture : public C_ModelPointEntity
{
public:


}; // size - 0xB20


class C_EnvScreenOverlay : public C_PointEntity
{
public:

   CUtlSymbolLarge m_iszOverlayNames[10]; // 0x538 - 0x588
   float32 m_flOverlayTimes[10]; // 0x588 - 0x5B0
   GameTime_t m_flStartTime; // 0x5B0 - 0x5B4
   int32_t m_iDesiredOverlay; // 0x5B4 - 0x5B8
   bool m_bIsActive; // 0x5B8 - 0x5B9
   bool m_bWasActive; // 0x5B9 - 0x5BA
   unsigned char pad_5BA[0x2] // 0x5BA - 0x5BC
   int32_t m_iCachedDesiredOverlay; // 0x5BC - 0x5C0
   int32_t m_iCurrentOverlay; // 0x5C0 - 0x5C4
   GameTime_t m_flCurrentOverlayTime; // 0x5C4 - 0x5C8

}; // size - 0x5C8


class C_EnvSky : public C_BaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x838 - 0x840
   bool m_bStartDisabled; // 0x840 - 0x841
   Color m_vTintColor; // 0x841 - 0x845
   unsigned char pad_845[0x3] // 0x845 - 0x848
   float m_flBrightnessScale; // 0x848 - 0x84C
   int32_t m_nFogType; // 0x84C - 0x850
   float m_flFogMinStart; // 0x850 - 0x854
   float m_flFogMinEnd; // 0x854 - 0x858
   float m_flFogMaxStart; // 0x858 - 0x85C
   float m_flFogMaxEnd; // 0x85C - 0x860
   bool m_bEnabled; // 0x860 - 0x861

}; // size - 0x880


class C_EnvVolumetricFogController : public C_BaseEntity
{
public:

   float m_flScattering; // 0x538 - 0x53C
   float m_flAnisotropy; // 0x53C - 0x540
   float m_flFadeSpeed; // 0x540 - 0x544
   float m_flDrawDistance; // 0x544 - 0x548
   float m_flFadeInStart; // 0x548 - 0x54C
   float m_flFadeInEnd; // 0x54C - 0x550
   float m_flIndirectStrength; // 0x550 - 0x554
   int32_t m_nIndirectTextureDimX; // 0x554 - 0x558
   int32_t m_nIndirectTextureDimY; // 0x558 - 0x55C
   int32_t m_nIndirectTextureDimZ; // 0x55C - 0x560
   Vector m_vBoxMins; // 0x560 - 0x56C
   Vector m_vBoxMaxs; // 0x56C - 0x578
   bool m_bActive; // 0x578 - 0x579
   unsigned char pad_579[0x3] // 0x579 - 0x57C
   GameTime_t m_flStartAnisoTime; // 0x57C - 0x580
   GameTime_t m_flStartScatterTime; // 0x580 - 0x584
   GameTime_t m_flStartDrawDistanceTime; // 0x584 - 0x588
   float m_flStartAnisotropy; // 0x588 - 0x58C
   float m_flStartScattering; // 0x58C - 0x590
   float m_flStartDrawDistance; // 0x590 - 0x594
   float m_flDefaultAnisotropy; // 0x594 - 0x598
   float m_flDefaultScattering; // 0x598 - 0x59C
   float m_flDefaultDrawDistance; // 0x59C - 0x5A0
   bool m_bStartDisabled; // 0x5A0 - 0x5A1
   bool m_bEnableIndirect; // 0x5A1 - 0x5A2
   bool m_bIsMaster; // 0x5A2 - 0x5A3
   unsigned char pad_5A3[0x5] // 0x5A3 - 0x5A8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x5A8 - 0x5B0
   int32_t m_nForceRefreshCount; // 0x5B0 - 0x5B4
   bool m_bFirstTime; // 0x5B4 - 0x5B5

}; // size - 0x5B8


class C_EnvVolumetricFogVolume : public C_BaseEntity
{
public:

   bool m_bActive; // 0x538 - 0x539
   unsigned char pad_539[0x3] // 0x539 - 0x53C
   Vector m_vBoxMins; // 0x53C - 0x548
   Vector m_vBoxMaxs; // 0x548 - 0x554
   bool m_bStartDisabled; // 0x554 - 0x555
   unsigned char pad_555[0x3] // 0x555 - 0x558
   float m_flStrength; // 0x558 - 0x55C
   int32_t m_nFalloffShape; // 0x55C - 0x560
   float m_flFalloffExponent; // 0x560 - 0x564

}; // size - 0x568


class C_EnvWind : public C_BaseEntity
{
public:

   C_EnvWindShared m_EnvWindShared; // 0x538 - 0x740

}; // size - 0x740


class C_EnvWindClientside : public C_BaseEntity
{
public:

   C_EnvWindShared m_EnvWindShared; // 0x538 - 0x740

}; // size - 0x740


class C_EnvWindShared
{
public:

   class WindAveEvent_t
   {
   public:

      float m_flStartWindSpeed; // 0x0 - 0x4
      float m_flAveWindSpeed; // 0x4 - 0x8

   }; // size - 0x8

   class WindVariationEvent_t
   {
   public:

      float m_flWindAngleVariation; // 0x0 - 0x4
      float m_flWindSpeedVariation; // 0x4 - 0x8

   }; // size - 0x8

   GameTime_t m_flStartTime; // 0x8 - 0xC
   uint32_t m_iWindSeed; // 0xC - 0x10
   uint16_t m_iMinWind; // 0x10 - 0x12
   uint16_t m_iMaxWind; // 0x12 - 0x14
   int32_t m_windRadius; // 0x14 - 0x18
   uint16_t m_iMinGust; // 0x18 - 0x1A
   uint16_t m_iMaxGust; // 0x1A - 0x1C
   float m_flMinGustDelay; // 0x1C - 0x20
   float m_flMaxGustDelay; // 0x20 - 0x24
   float m_flGustDuration; // 0x24 - 0x28
   uint16_t m_iGustDirChange; // 0x28 - 0x2A
   unsigned char pad_2A[0x2] // 0x2A - 0x2C
   Vector m_location; // 0x2C - 0x38
   int32_t m_iszGustSound; // 0x38 - 0x3C
   int32_t m_iWindDir; // 0x3C - 0x40
   float m_flWindSpeed; // 0x40 - 0x44
   Vector m_currentWindVector; // 0x44 - 0x50
   Vector m_CurrentSwayVector; // 0x50 - 0x5C
   Vector m_PrevSwayVector; // 0x5C - 0x68
   uint16_t m_iInitialWindDir; // 0x68 - 0x6A
   unsigned char pad_6A[0x2] // 0x6A - 0x6C
   float m_flInitialWindSpeed; // 0x6C - 0x70
   GameTime_t m_flVariationTime; // 0x70 - 0x74
   GameTime_t m_flSwayTime; // 0x74 - 0x78
   GameTime_t m_flSimTime; // 0x78 - 0x7C
   GameTime_t m_flSwitchTime; // 0x7C - 0x80
   float m_flAveWindSpeed; // 0x80 - 0x84
   bool m_bGusting; // 0x84 - 0x85
   unsigned char pad_85[0x3] // 0x85 - 0x88
   float m_flWindAngleVariation; // 0x88 - 0x8C
   float m_flWindSpeedVariation; // 0x8C - 0x90
   CEntityIndex m_iEntIndex; // 0x90 - 0x94

}; // size - 0x208




class C_FireCrackerBlast : public C_Inferno
{
public:


}; // size - 0x7E20


class C_FireFromAboveSprite : public C_Sprite
{
public:


}; // size - 0x968


class C_FireSmoke : public C_BaseFire
{
public:

   int32_t m_nFlameModelIndex; // 0x548 - 0x54C
   int32_t m_nFlameFromAboveModelIndex; // 0x54C - 0x550
   float m_flScaleRegister; // 0x550 - 0x554
   float m_flScaleStart; // 0x554 - 0x558
   float m_flScaleEnd; // 0x558 - 0x55C
   GameTime_t m_flScaleTimeStart; // 0x55C - 0x560
   GameTime_t m_flScaleTimeEnd; // 0x560 - 0x564
   float m_flChildFlameSpread; // 0x564 - 0x568
   unsigned char pad_568[0x10] // 0x568 - 0x578
   float m_flClipPerc; // 0x578 - 0x57C
   bool m_bClipTested; // 0x57C - 0x57D
   bool m_bFadingOut; // 0x57D - 0x57E
   unsigned char pad_57E[0x2] // 0x57E - 0x580
   TimedEvent m_tParticleSpawn; // 0x580 - 0x588
   CFireOverlay* m_pFireOverlay; // 0x588 - 0x590

}; // size - 0x5B0


class C_FireSprite : public C_Sprite
{
public:

   Vector m_vecMoveDir; // 0x968 - 0x974
   bool m_bFadeFromAbove; // 0x974 - 0x975

}; // size - 0x978


class C_Fish : public CBaseAnimGraph
{
public:

   Vector m_pos; // 0x998 - 0x9A4
   Vector m_vel; // 0x9A4 - 0x9B0
   QAngle m_angles; // 0x9B0 - 0x9BC
   int32_t m_localLifeState; // 0x9BC - 0x9C0
   float m_deathDepth; // 0x9C0 - 0x9C4
   float m_deathAngle; // 0x9C4 - 0x9C8
   float m_buoyancy; // 0x9C8 - 0x9CC
   unsigned char pad_9CC[0x4] // 0x9CC - 0x9D0
   CountdownTimer m_wiggleTimer; // 0x9D0 - 0x9E8
   float m_wigglePhase; // 0x9E8 - 0x9EC
   float m_wiggleRate; // 0x9EC - 0x9F0
   Vector m_actualPos; // 0x9F0 - 0x9FC
   QAngle m_actualAngles; // 0x9FC - 0xA08
   Vector m_poolOrigin; // 0xA08 - 0xA14
   float m_waterLevel; // 0xA14 - 0xA18
   bool m_gotUpdate; // 0xA18 - 0xA19
   unsigned char pad_A19[0x3] // 0xA19 - 0xA1C
   float m_x; // 0xA1C - 0xA20
   float m_y; // 0xA20 - 0xA24
   float m_z; // 0xA24 - 0xA28
   float m_angle; // 0xA28 - 0xA2C
   float32 m_errorHistory[20]; // 0xA2C - 0xA7C
   int32_t m_errorHistoryIndex; // 0xA7C - 0xA80
   int32_t m_errorHistoryCount; // 0xA80 - 0xA84
   float m_averageError; // 0xA84 - 0xA88

}; // size - 0xA88


class C_Fists : public C_WeaponCSBase
{
public:

   bool m_bPlayingUninterruptableAct; // 0x13D0 - 0x13D1
   unsigned char pad_13D1[0x3] // 0x13D1 - 0x13D4
   PlayerAnimEvent_t m_nUninterruptableActivity; // 0x13D4 - 0x13D8

}; // size - 0x13E0


class C_Flashbang : public C_BaseCSGrenade
{
public:


}; // size - 0x1410


class C_FogController : public C_BaseEntity
{
public:

   fogparams_t m_fog; // 0x538 - 0x5A0
   bool m_bUseAngles; // 0x5A0 - 0x5A1
   unsigned char pad_5A1[0x3] // 0x5A1 - 0x5A4
   int32_t m_iChangedVariables; // 0x5A4 - 0x5A8

}; // size - 0x5A8


class C_FootstepControl : public C_BaseTrigger
{
public:

   CUtlSymbolLarge m_source; // 0x840 - 0x848
   CUtlSymbolLarge m_destination; // 0x848 - 0x850

}; // size - 0x850


class C_FuncConveyor : public C_BaseModelEntity
{
public:

   Vector m_vecMoveDirEntitySpace; // 0x840 - 0x84C
   float m_flTargetSpeed; // 0x84C - 0x850
   GameTick_t m_nTransitionStartTick; // 0x850 - 0x854
   int32_t m_nTransitionDurationTicks; // 0x854 - 0x858
   float m_flTransitionStartSpeed; // 0x858 - 0x85C
   unsigned char pad_85C[0x4] // 0x85C - 0x860
   C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels; // 0x860 - 0x878
   float m_flCurrentConveyorOffset; // 0x878 - 0x87C
   float m_flCurrentConveyorSpeed; // 0x87C - 0x880

}; // size - 0x880


class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:

   ParticleIndex_t m_nAmbientEffect; // 0x838 - 0x83C
   unsigned char pad_83C[0x4] // 0x83C - 0x840
   CUtlSymbolLarge m_EffectName; // 0x840 - 0x848
   bool m_bState; // 0x848 - 0x849

}; // size - 0x850


class C_FuncLadder : public C_BaseModelEntity
{
public:

   Vector m_vecLadderDir; // 0x838 - 0x844
   unsigned char pad_844[0x4] // 0x844 - 0x848
   CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0x848 - 0x860
   Vector m_vecLocalTop; // 0x860 - 0x86C
   Vector m_vecPlayerMountPositionTop; // 0x86C - 0x878
   Vector m_vecPlayerMountPositionBottom; // 0x878 - 0x884
   float m_flAutoRideSpeed; // 0x884 - 0x888
   bool m_bDisabled; // 0x888 - 0x889
   bool m_bFakeLadder; // 0x889 - 0x88A
   bool m_bHasSlack; // 0x88A - 0x88B

}; // size - 0x890


class C_FuncMonitor : public C_FuncBrush
{
public:

   CUtlString m_targetCamera; // 0x838 - 0x840
   int32_t m_nResolutionEnum; // 0x840 - 0x844
   bool m_bRenderShadows; // 0x844 - 0x845
   bool m_bUseUniqueColorTarget; // 0x845 - 0x846
   unsigned char pad_846[0x2] // 0x846 - 0x848
   CUtlString m_brushModelName; // 0x848 - 0x850
   CHandle< C_BaseEntity > m_hTargetCamera; // 0x850 - 0x854
   bool m_bEnabled; // 0x854 - 0x855
   bool m_bDraw3DSkybox; // 0x855 - 0x856

}; // size - 0xD00


class C_FuncMoveLinear : public C_BaseToggle
{
public:


}; // size - 0x838


class C_FuncRotating : public C_BaseModelEntity
{
public:


}; // size - 0x838


class C_FuncTrackTrain : public C_BaseModelEntity
{
public:

   int32_t m_nLongAxis; // 0x838 - 0x83C
   float m_flRadius; // 0x83C - 0x840
   float m_flLineLength; // 0x840 - 0x844

}; // size - 0x848


class C_GlobalLight : public C_BaseEntity
{
public:

   uint16_t m_WindClothForceHandle; // 0xA00 - 0xA02

}; // size - 0xA30


class C_GradientFog : public C_BaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x538 - 0x540
   float m_flFogStartDistance; // 0x540 - 0x544
   float m_flFogEndDistance; // 0x544 - 0x548
   bool m_bHeightFogEnabled; // 0x548 - 0x549
   unsigned char pad_549[0x3] // 0x549 - 0x54C
   float m_flFogStartHeight; // 0x54C - 0x550
   float m_flFogEndHeight; // 0x550 - 0x554
   float m_flFarZ; // 0x554 - 0x558
   float m_flFogMaxOpacity; // 0x558 - 0x55C
   float m_flFogFalloffExponent; // 0x55C - 0x560
   float m_flFogVerticalExponent; // 0x560 - 0x564
   Color m_fogColor; // 0x564 - 0x568
   float m_flFogStrength; // 0x568 - 0x56C
   float m_flFadeTime; // 0x56C - 0x570
   bool m_bStartDisabled; // 0x570 - 0x571
   bool m_bIsEnabled; // 0x571 - 0x572
   bool m_bGradientFogNeedsTextures; // 0x572 - 0x573

}; // size - 0x5D0


class C_GrassBurn : public C_BaseEntity
{
public:

   float m_flGrassBurnClearTime; // 0x538 - 0x53C
   float m_bClientPendingClear; // 0x53C - 0x540
   float m_flGrassBurnClearTimeLocal; // 0x540 - 0x544
   unsigned char pad_544[0x4] // 0x544 - 0x548
   CUtlVector< Vector > m_vecGrassBurnPositions; // 0x548 - 0x560

}; // size - 0x560


class C_HEGrenade : public C_BaseCSGrenade
{
public:


}; // size - 0x1410


class C_HandleTest : public C_BaseEntity
{
public:

   CHandle< C_BaseEntity > m_Handle; // 0x538 - 0x53C
   bool m_bSendHandle; // 0x53C - 0x53D

}; // size - 0x540


class C_Hostage : public C_BaseCombatCharacter
{
public:

   EntitySpottedState_t m_entitySpottedState; // 0xBB8 - 0xBD0
   CHandle< C_BaseEntity > m_leader; // 0xBD0 - 0xBD4
   Vector m_vel; // 0xBD4 - 0xBE0
   bool m_isRescued; // 0xBE0 - 0xBE1
   bool m_jumpedThisFrame; // 0xBE1 - 0xBE2
   unsigned char pad_BE2[0x2] // 0xBE2 - 0xBE4
   int32_t m_nHostageState; // 0xBE4 - 0xBE8
   GameTime_t m_flRescueStartTime; // 0xBE8 - 0xBEC
   GameTime_t m_flGrabSuccessTime; // 0xBEC - 0xBF0
   GameTime_t m_flDropStartTime; // 0xBF0 - 0xBF4
   GameTime_t m_flDeadOrRescuedTime; // 0xBF4 - 0xBF8
   CountdownTimer m_blinkTimer; // 0xBF8 - 0xC10
   Vector m_lookAt; // 0xC10 - 0xC1C
   unsigned char pad_C1C[0x4] // 0xC1C - 0xC20
   CountdownTimer m_lookAroundTimer; // 0xC20 - 0xC38
   bool m_isInit; // 0xC38 - 0xC39
   AttachmentHandle_t m_eyeAttachment; // 0xC39 - 0xC3A
   AttachmentHandle_t m_chestAttachment; // 0xC3A - 0xC3B

}; // size - 0xC40


class C_HostageCarriableProp : public CBaseAnimGraph
{
public:


}; // size - 0x9A0


class C_INIT_AddVectorToVector : public CParticleFunctionInitializer
{
public:

   Vector m_vecScale; // 0x1F0 - 0x1FC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1FC - 0x200
   ParticleAttributeIndex_t m_nFieldInput; // 0x200 - 0x204
   Vector m_vOffsetMin; // 0x204 - 0x210
   Vector m_vOffsetMax; // 0x210 - 0x21C
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0x21C - 0x224

}; // size - 0x230


class C_INIT_AgeNoise : public CParticleFunctionInitializer
{
public:

   bool m_bAbsVal; // 0x1F0 - 0x1F1
   bool m_bAbsValInv; // 0x1F1 - 0x1F2
   unsigned char pad_1F2[0x2] // 0x1F2 - 0x1F4
   float m_flOffset; // 0x1F4 - 0x1F8
   float m_flAgeMin; // 0x1F8 - 0x1FC
   float m_flAgeMax; // 0x1FC - 0x200
   float m_flNoiseScale; // 0x200 - 0x204
   float m_flNoiseScaleLoc; // 0x204 - 0x208
   Vector m_vecOffsetLoc; // 0x208 - 0x214

}; // size - 0x220


class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer
{
public:

   float m_flAParm; // 0x1F0 - 0x1F4
   float m_flBParm; // 0x1F4 - 0x1F8
   float m_flCParm; // 0x1F8 - 0x1FC
   float m_flDParm; // 0x1FC - 0x200
   float m_flScale; // 0x200 - 0x204
   float m_flSpeedMin; // 0x204 - 0x208
   float m_flSpeedMax; // 0x208 - 0x20C
   int32_t m_nBaseCP; // 0x20C - 0x210
   bool m_bUniformSpeed; // 0x210 - 0x211

}; // size - 0x220


class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer
{
public:

   Color m_ColorMin; // 0x208 - 0x20C
   Color m_ColorMax; // 0x20C - 0x210
   Color m_TintMin; // 0x210 - 0x214
   Color m_TintMax; // 0x214 - 0x218
   float m_flTintPerc; // 0x218 - 0x21C
   ParticleColorBlendMode_t m_nTintBlendMode; // 0x21C - 0x220
   float m_flLightAmplification; // 0x220 - 0x224

}; // size - 0x230


class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:

   float m_fMaxDistance; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0xC] // 0x1F4 - 0x200
   CPathParameters m_PathParams; // 0x200 - 0x240
   bool m_bUseRandomCPs; // 0x240 - 0x241
   unsigned char pad_241[0x3] // 0x241 - 0x244
   Vector m_vEndOffset; // 0x244 - 0x250
   bool m_bSaveOffset; // 0x250 - 0x251

}; // size - 0x260


class C_INIT_CreateFromCPs : public CParticleFunctionInitializer
{
public:

   int32_t m_nIncrement; // 0x1F0 - 0x1F4
   int32_t m_nMinCP; // 0x1F4 - 0x1F8
   int32_t m_nMaxCP; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x4] // 0x1FC - 0x200
   CParticleCollectionFloatInput m_nDynamicCPCount; // 0x200 - 0x338

}; // size - 0x340


class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer
{
public:

   float m_flVelocityScale; // 0x1F0 - 0x1F4
   float m_flIncrement; // 0x1F4 - 0x1F8
   bool m_bRandomDistribution; // 0x1F8 - 0x1F9
   unsigned char pad_1F9[0x3] // 0x1F9 - 0x1FC
   int32_t m_nRandomSeed; // 0x1FC - 0x200
   bool m_bSubFrame; // 0x200 - 0x201

}; // size - 0x210


class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer
{
public:

   Vector m_vecOffsetMin; // 0x1F0 - 0x1FC
   Vector m_vecOffsetMax; // 0x1FC - 0x208
   unsigned char pad_208[0x1] // 0x208 - 0x209
   bool m_bUseNormal; // 0x209 - 0x20A

}; // size - 0x210


class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer
{
public:

   int32_t m_nComponent1; // 0x1F0 - 0x1F4
   int32_t m_nComponent2; // 0x1F4 - 0x1F8
   int32_t m_nControlPointNumber; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x4] // 0x1FC - 0x200
   CPerParticleFloatInput m_flParticleDensity; // 0x200 - 0x338
   CPerParticleFloatInput m_flOffset; // 0x338 - 0x470
   CPerParticleFloatInput m_flRadius1; // 0x470 - 0x5A8
   CPerParticleFloatInput m_flRadius2; // 0x5A8 - 0x6E0
   bool m_bUseCount; // 0x6E0 - 0x6E1
   bool m_bUseLocalCoords; // 0x6E1 - 0x6E2
   bool m_bOffsetExistingPos; // 0x6E2 - 0x6E3

}; // size - 0x6F0


class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:

   CParticleCollectionFloatInput m_nXCount; // 0x1F0 - 0x328
   CParticleCollectionFloatInput m_nYCount; // 0x328 - 0x460
   CParticleCollectionFloatInput m_nZCount; // 0x460 - 0x598
   CParticleCollectionFloatInput m_nXSpacing; // 0x598 - 0x6D0
   CParticleCollectionFloatInput m_nYSpacing; // 0x6D0 - 0x808
   CParticleCollectionFloatInput m_nZSpacing; // 0x808 - 0x940
   int32_t m_nControlPointNumber; // 0x940 - 0x944
   bool m_bLocalSpace; // 0x944 - 0x945
   bool m_bCenter; // 0x945 - 0x946
   bool m_bHollow; // 0x946 - 0x947

}; // size - 0x950


class C_INIT_CreateOnModel : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nForceInModel; // 0x1F4 - 0x1F8
   int32_t m_nDesiredHitbox; // 0x1F8 - 0x1FC
   int32_t m_nHitboxValueFromControlPointIndex; // 0x1FC - 0x200
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x200 - 0x7C8
   float m_flBoneVelocity; // 0x7C8 - 0x7CC
   float m_flMaxBoneVelocity; // 0x7CC - 0x7D0
   CParticleCollectionVecInput m_vecDirectionBias; // 0x7D0 - 0xD98
   char m_HitboxSetName[128]; // 0xD98 - 0xE18
   bool m_bLocalCoords; // 0xE18 - 0xE19
   bool m_bUseBones; // 0xE19 - 0xE1A
   unsigned char pad_E1A[0x6] // 0xE1A - 0xE20
   CParticleCollectionFloatInput m_flShellSize; // 0xE20 - 0xF58

}; // size - 0xF60


class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer
{
public:

   bool m_bUseBones; // 0x1F0 - 0x1F1
   bool m_bForceZ; // 0x1F1 - 0x1F2
   unsigned char pad_1F2[0x2] // 0x1F2 - 0x1F4
   int32_t m_nControlPointNumber; // 0x1F4 - 0x1F8
   int32_t m_nHeightCP; // 0x1F8 - 0x1FC
   bool m_bUseWaterHeight; // 0x1FC - 0x1FD
   unsigned char pad_1FD[0x3] // 0x1FD - 0x200
   CParticleCollectionFloatInput m_flDesiredHeight; // 0x200 - 0x338
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x338 - 0x900
   CParticleCollectionVecInput m_vecDirectionBias; // 0x900 - 0xEC8
   ParticleHitboxBiasType_t m_nBiasType; // 0xEC8 - 0xECC
   bool m_bLocalCoords; // 0xECC - 0xECD
   bool m_bPreferMovingBoxes; // 0xECD - 0xECE
   char m_HitboxSetName[128]; // 0xECE - 0xF4E
   unsigned char pad_F4E[0x2] // 0xF4E - 0xF50
   CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0xF50 - 0x1088
   CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x1088 - 0x11C0

}; // size - 0x11C0


class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_InputRadius; // 0x1F0 - 0x328
   CPerParticleFloatInput m_InputMagnitude; // 0x328 - 0x460
   ParticleFalloffFunction_t m_nFalloffFunction; // 0x460 - 0x464
   unsigned char pad_464[0x4] // 0x464 - 0x468
   CPerParticleFloatInput m_InputFalloffExp; // 0x468 - 0x5A0
   ParticleImpulseType_t m_nImpulseType; // 0x5A0 - 0x5A4

}; // size - 0x5B0


class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nScaleCP; // 0x1F4 - 0x1F8
   int32_t m_nComponent; // 0x1F8 - 0x1FC
   float m_fRadCentCore; // 0x1FC - 0x200
   float m_fRadPerPoint; // 0x200 - 0x204
   float m_fRadPerPointTo; // 0x204 - 0x208
   float m_fpointAngle; // 0x208 - 0x20C
   float m_fsizeOverall; // 0x20C - 0x210
   float m_fRadBias; // 0x210 - 0x214
   float m_fMinRad; // 0x214 - 0x218
   float m_fDistBias; // 0x218 - 0x21C
   bool m_bUseLocalCoords; // 0x21C - 0x21D
   bool m_bUseWithContEmit; // 0x21D - 0x21E
   bool m_bUseOrigRadius; // 0x21E - 0x21F

}; // size - 0x220


class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer
{
public:

   float m_fMaxDistance; // 0x1F0 - 0x1F4
   float m_flNumToAssign; // 0x1F4 - 0x1F8
   bool m_bLoop; // 0x1F8 - 0x1F9
   bool m_bCPPairs; // 0x1F9 - 0x1FA
   bool m_bSaveOffset; // 0x1FA - 0x1FB
   unsigned char pad_1FB[0x5] // 0x1FB - 0x200
   CPathParameters m_PathParams; // 0x200 - 0x240

}; // size - 0x240


class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_fMaxDistance; // 0x1F0 - 0x328
   CParticleCollectionFloatInput m_flNumToAssign; // 0x328 - 0x460
   bool m_bLoop; // 0x460 - 0x461
   bool m_bCPPairs; // 0x461 - 0x462
   bool m_bSaveOffset; // 0x462 - 0x463
   unsigned char pad_463[0xD] // 0x463 - 0x470
   CPathParameters m_PathParams; // 0x470 - 0x4B0

}; // size - 0x4C0


class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nOverrideCP; // 0x1F4 - 0x1F8
   int32_t m_nDensity; // 0x1F8 - 0x1FC
   float m_flInitialRadius; // 0x1FC - 0x200
   float m_flInitialSpeedMin; // 0x200 - 0x204
   float m_flInitialSpeedMax; // 0x204 - 0x208
   bool m_bUseParticleCount; // 0x208 - 0x209

}; // size - 0x210


class C_INIT_CreateWithinBox : public CParticleFunctionInitializer
{
public:

   CPerParticleVecInput m_vecMin; // 0x1F0 - 0x7B8
   CPerParticleVecInput m_vecMax; // 0x7B8 - 0xD80
   int32_t m_nControlPointNumber; // 0xD80 - 0xD84
   bool m_bLocalSpace; // 0xD84 - 0xD85
   unsigned char pad_D85[0x3] // 0xD85 - 0xD88
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0xD88 - 0xD90

}; // size - 0xD90


class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_fRadiusMin; // 0x1F0 - 0x328
   CPerParticleFloatInput m_fRadiusMax; // 0x328 - 0x460
   CPerParticleVecInput m_vecDistanceBias; // 0x460 - 0xA28
   Vector m_vecDistanceBiasAbs; // 0xA28 - 0xA34
   unsigned char pad_A34[0x4] // 0xA34 - 0xA38
   CParticleTransformInput m_TransformInput; // 0xA38 - 0xA88
   CPerParticleFloatInput m_fSpeedMin; // 0xA88 - 0xBC0
   CPerParticleFloatInput m_fSpeedMax; // 0xBC0 - 0xCF8
   float m_fSpeedRandExp; // 0xCF8 - 0xCFC
   bool m_bLocalCoords; // 0xCFC - 0xCFD
   unsigned char pad_CFD[0x3] // 0xCFD - 0xD00
   float m_flEndCPGrowthTime; // 0xD00 - 0xD04
   unsigned char pad_D04[0x4] // 0xD04 - 0xD08
   CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xD08 - 0x12D0
   CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x12D0 - 0x1898
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1898 - 0x189C
   ParticleAttributeIndex_t m_nFieldVelocity; // 0x189C - 0x18A0

}; // size - 0x18A0


class C_INIT_CreationNoise : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   bool m_bAbsVal; // 0x1F4 - 0x1F5
   bool m_bAbsValInv; // 0x1F5 - 0x1F6
   unsigned char pad_1F6[0x2] // 0x1F6 - 0x1F8
   float m_flOffset; // 0x1F8 - 0x1FC
   float m_flOutputMin; // 0x1FC - 0x200
   float m_flOutputMax; // 0x200 - 0x204
   float m_flNoiseScale; // 0x204 - 0x208
   float m_flNoiseScaleLoc; // 0x208 - 0x20C
   Vector m_vecOffsetLoc; // 0x20C - 0x218
   float m_flWorldTimeScale; // 0x218 - 0x21C

}; // size - 0x220


class C_INIT_DistanceCull : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPoint; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CParticleCollectionFloatInput m_flDistance; // 0x1F8 - 0x330
   bool m_bCullInside; // 0x330 - 0x331

}; // size - 0x340


class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flInputMin; // 0x1F8 - 0x330
   CPerParticleFloatInput m_flInputMax; // 0x330 - 0x468
   CPerParticleFloatInput m_flOutputMin; // 0x468 - 0x5A0
   CPerParticleFloatInput m_flOutputMax; // 0x5A0 - 0x6D8
   int32_t m_nStartCP; // 0x6D8 - 0x6DC
   bool m_bLOS; // 0x6DC - 0x6DD
   char m_CollisionGroupName[128]; // 0x6DD - 0x75D
   unsigned char pad_75D[0x3] // 0x75D - 0x760
   ParticleTraceSet_t m_nTraceSet; // 0x760 - 0x764
   unsigned char pad_764[0x4] // 0x764 - 0x768
   CPerParticleFloatInput m_flMaxTraceLength; // 0x768 - 0x8A0
   float m_flLOSScale; // 0x8A0 - 0x8A4
   ParticleSetMethod_t m_nSetMethod; // 0x8A4 - 0x8A8
   bool m_bActiveRange; // 0x8A8 - 0x8A9
   unsigned char pad_8A9[0x3] // 0x8A9 - 0x8AC
   Vector m_vecDistanceScale; // 0x8AC - 0x8B8
   float m_flRemapBias; // 0x8B8 - 0x8BC

}; // size - 0x8C0


class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_flDistance; // 0x1F0 - 0x328

}; // size - 0x330


class C_INIT_GlobalScale : public CParticleFunctionInitializer
{
public:

   float m_flScale; // 0x1F0 - 0x1F4
   int32_t m_nScaleControlPointNumber; // 0x1F4 - 0x1F8
   int32_t m_nControlPointNumber; // 0x1F8 - 0x1FC
   bool m_bScaleRadius; // 0x1FC - 0x1FD
   bool m_bScalePosition; // 0x1FD - 0x1FE
   bool m_bScaleVelocity; // 0x1FE - 0x1FF

}; // size - 0x200


class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer
{
public:

   float m_flScale; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   int32_t m_nIncrement; // 0x1F8 - 0x1FC
   bool m_bRandomDistribution; // 0x1FC - 0x1FD
   unsigned char pad_1FD[0x3] // 0x1FD - 0x200
   int32_t m_nRandomSeed; // 0x200 - 0x204

}; // size - 0x210


class C_INIT_InheritVelocity : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   float m_flVelocityScale; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_INIT_InitFloat : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_InputValue; // 0x1F0 - 0x328
   ParticleAttributeIndex_t m_nOutputField; // 0x328 - 0x32C
   ParticleSetMethod_t m_nSetMethod; // 0x32C - 0x330
   CPerParticleFloatInput m_InputStrength; // 0x330 - 0x468

}; // size - 0x470


class C_INIT_InitFloatCollection : public CParticleFunctionInitializer
{
public:

   CParticleCollectionFloatInput m_InputValue; // 0x1F0 - 0x328
   ParticleAttributeIndex_t m_nOutputField; // 0x328 - 0x32C

}; // size - 0x330


class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nAttributeToRead; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1F8 - 0x1FC
   int32_t m_nLocalSpaceCP; // 0x1FC - 0x200
   bool m_bRandom; // 0x200 - 0x201
   bool m_bReverse; // 0x201 - 0x202
   unsigned char pad_202[0x6] // 0x202 - 0x208
   CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x208 - 0x340
   int32_t m_nRandomSeed; // 0x340 - 0x344
   bool m_bLocalSpaceAngles; // 0x344 - 0x345

}; // size - 0x350


class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1F0 - 0x1F4

}; // size - 0x280


class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nLocalSpaceCP; // 0x1F4 - 0x1F8
   int32_t m_nWeightUpdateCP; // 0x1F8 - 0x1FC
   bool m_bUseVerticalVelocity; // 0x1FC - 0x1FD
   unsigned char pad_1FD[0x3] // 0x1FD - 0x200
   CPerParticleVecInput m_vecScale; // 0x200 - 0x7C8

}; // size - 0x7D0


class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer
{
public:

   int32_t m_nSnapshotControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nControlPointNumber; // 0x1F4 - 0x1F8
   bool m_bRandom; // 0x1F8 - 0x1F9
   unsigned char pad_1F9[0x3] // 0x1F9 - 0x1FC
   int32_t m_nRandomSeed; // 0x1FC - 0x200
   bool m_bRigid; // 0x200 - 0x201
   bool m_bSetNormal; // 0x201 - 0x202
   bool m_bIgnoreDt; // 0x202 - 0x203
   unsigned char pad_203[0x1] // 0x203 - 0x204
   float m_flMinNormalVelocity; // 0x204 - 0x208
   float m_flMaxNormalVelocity; // 0x208 - 0x20C
   float m_flIncrement; // 0x20C - 0x210
   int32_t m_nFullLoopIncrement; // 0x210 - 0x214
   int32_t m_nSnapShotStartPoint; // 0x214 - 0x218
   float m_flBoneVelocity; // 0x218 - 0x21C
   float m_flBoneVelocityMax; // 0x21C - 0x220
   bool m_bCopyColor; // 0x220 - 0x221
   bool m_bCopyAlpha; // 0x221 - 0x222
   bool m_bSetRadius; // 0x222 - 0x223

}; // size - 0x230


class C_INIT_InitVec : public CParticleFunctionInitializer
{
public:

   CPerParticleVecInput m_InputValue; // 0x1F0 - 0x7B8
   ParticleAttributeIndex_t m_nOutputField; // 0x7B8 - 0x7BC
   ParticleSetMethod_t m_nSetMethod; // 0x7BC - 0x7C0
   bool m_bNormalizedOutput; // 0x7C0 - 0x7C1
   bool m_bWritePreviousPosition; // 0x7C1 - 0x7C2

}; // size - 0x7D0


class C_INIT_InitVecCollection : public CParticleFunctionInitializer
{
public:

   CParticleCollectionVecInput m_InputValue; // 0x1F0 - 0x7B8
   ParticleAttributeIndex_t m_nOutputField; // 0x7B8 - 0x7BC

}; // size - 0x7C0


class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer
{
public:

   char m_CollisionGroupName[128]; // 0x1F0 - 0x270
   ParticleTraceSet_t m_nTraceSet; // 0x270 - 0x274
   Vector m_vecOutputMin; // 0x274 - 0x280
   Vector m_vecOutputMax; // 0x280 - 0x28C
   int32_t m_nControlPointNumber; // 0x28C - 0x290
   bool m_bPerParticle; // 0x290 - 0x291
   bool m_bTranslate; // 0x291 - 0x292
   bool m_bProportional; // 0x292 - 0x293
   unsigned char pad_293[0x1] // 0x293 - 0x294
   float m_flTraceLength; // 0x294 - 0x298
   bool m_bPerParticleTR; // 0x298 - 0x299
   bool m_bInherit; // 0x299 - 0x29A
   unsigned char pad_29A[0x2] // 0x29A - 0x29C
   int32_t m_nChildCP; // 0x29C - 0x2A0
   int32_t m_nChildGroupID; // 0x2A0 - 0x2A4

}; // size - 0x2B0


class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1F8 - 0x1FC
   float m_flInputMin; // 0x1FC - 0x200
   float m_flInputMax; // 0x200 - 0x204
   float m_flOutputMin; // 0x204 - 0x208
   float m_flOutputMax; // 0x208 - 0x20C
   ParticleSetMethod_t m_nSetMethod; // 0x20C - 0x210

}; // size - 0x210


class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer
{
public:

   float m_flVelocityMin; // 0x1F0 - 0x1F4
   float m_flVelocityMax; // 0x1F4 - 0x1F8
   int32_t m_nControlPointNumber; // 0x1F8 - 0x1FC
   char m_HitboxSetName[128]; // 0x1FC - 0x27C
   bool m_bUseBones; // 0x27C - 0x27D

}; // size - 0x280


class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer
{
public:

   Vector m_vecAbsVal; // 0x1F0 - 0x1FC
   Vector m_vecAbsValInv; // 0x1FC - 0x208
   CPerParticleVecInput m_vecOffsetLoc; // 0x208 - 0x7D0
   CPerParticleFloatInput m_flOffset; // 0x7D0 - 0x908
   CPerParticleVecInput m_vecOutputMin; // 0x908 - 0xED0
   CPerParticleVecInput m_vecOutputMax; // 0xED0 - 0x1498
   CPerParticleFloatInput m_flNoiseScale; // 0x1498 - 0x15D0
   CPerParticleFloatInput m_flNoiseScaleLoc; // 0x15D0 - 0x1708
   CParticleTransformInput m_TransformInput; // 0x1708 - 0x1758
   bool m_bIgnoreDt; // 0x1758 - 0x1759

}; // size - 0x1760


class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer
{
public:

   Vector m_vecComponentScale; // 0x1F0 - 0x1FC
   float m_flTraceOffset; // 0x1FC - 0x200
   float m_flMaxTraceLength; // 0x200 - 0x204
   float m_flTraceTolerance; // 0x204 - 0x208
   int32_t m_nMaxPlanes; // 0x208 - 0x20C
   unsigned char pad_20C[0x4] // 0x20C - 0x210
   char m_CollisionGroupName[128]; // 0x210 - 0x290
   ParticleTraceSet_t m_nTraceSet; // 0x290 - 0x294
   unsigned char pad_294[0xC] // 0x294 - 0x2A0
   bool m_bIncludeWater; // 0x2A0 - 0x2A1

}; // size - 0x2B0


class C_INIT_ModelCull : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   bool m_bBoundBox; // 0x1F4 - 0x1F5
   bool m_bCullOutside; // 0x1F5 - 0x1F6
   bool m_bUseBones; // 0x1F6 - 0x1F7
   char m_HitboxSetName[128]; // 0x1F7 - 0x277

}; // size - 0x280


class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_flSpeedMin; // 0x1F0 - 0x328
   CPerParticleFloatInput m_flSpeedMax; // 0x328 - 0x460
   CPerParticleFloatInput m_flEndSpread; // 0x460 - 0x598
   CPerParticleFloatInput m_flStartOffset; // 0x598 - 0x6D0
   CPerParticleFloatInput m_flEndOffset; // 0x6D0 - 0x808
   int32_t m_nEndControlPointNumber; // 0x808 - 0x80C
   bool m_bTrailBias; // 0x80C - 0x80D

}; // size - 0x810


class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   ParticleControlPointAxis_t m_nControlPointAxis; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_INIT_NormalOffset : public CParticleFunctionInitializer
{
public:

   Vector m_OffsetMin; // 0x1F0 - 0x1FC
   Vector m_OffsetMax; // 0x1FC - 0x208
   int32_t m_nControlPointNumber; // 0x208 - 0x20C
   bool m_bLocalCoords; // 0x20C - 0x20D
   bool m_bNormalize; // 0x20D - 0x20E

}; // size - 0x210


class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   Vector m_vecOutputMin; // 0x1F8 - 0x204
   Vector m_vecOutputMax; // 0x204 - 0x210
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0x210 - 0x218

}; // size - 0x220


class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer
{
public:

   int32_t m_nCP; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flRotOffset; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_INIT_PlaneCull : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPoint; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CParticleCollectionFloatInput m_flDistance; // 0x1F8 - 0x330
   bool m_bCullInside; // 0x330 - 0x331

}; // size - 0x340


class C_INIT_PointList : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CUtlVector< PointDefinition_t > m_pointList; // 0x1F8 - 0x210
   bool m_bPlaceAlongPath; // 0x210 - 0x211
   bool m_bClosedLoop; // 0x211 - 0x212
   unsigned char pad_212[0x2] // 0x212 - 0x214
   int32_t m_nNumPointsAlongPath; // 0x214 - 0x218

}; // size - 0x220


class C_INIT_PositionOffset : public CParticleFunctionInitializer
{
public:

   CPerParticleVecInput m_OffsetMin; // 0x1F0 - 0x7B8
   CPerParticleVecInput m_OffsetMax; // 0x7B8 - 0xD80
   CParticleTransformInput m_TransformInput; // 0xD80 - 0xDD0
   bool m_bLocalCoords; // 0xDD0 - 0xDD1
   bool m_bProportional; // 0xDD1 - 0xDD2
   unsigned char pad_DD2[0x2] // 0xDD2 - 0xDD4
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0xDD4 - 0xDDC

}; // size - 0xDE0


class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumberStart; // 0x1F0 - 0x1F4
   int32_t m_nControlPointNumberEnd; // 0x1F4 - 0x1F8
   bool m_bLocalCoords; // 0x1F8 - 0x1F9

}; // size - 0x200


class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_flOffset; // 0x1F0 - 0x328
   CPerParticleFloatInput m_flMaxTraceLength; // 0x328 - 0x460
   char m_CollisionGroupName[128]; // 0x460 - 0x4E0
   ParticleTraceSet_t m_nTraceSet; // 0x4E0 - 0x4E4
   unsigned char pad_4E4[0xC] // 0x4E4 - 0x4F0
   ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x4F0 - 0x4F4
   bool m_bIncludeWater; // 0x4F4 - 0x4F5
   bool m_bSetNormal; // 0x4F5 - 0x4F6
   bool m_bSetPXYZOnly; // 0x4F6 - 0x4F7
   bool m_bTraceAlongNormal; // 0x4F7 - 0x4F8
   bool m_bOffsetonColOnly; // 0x4F8 - 0x4F9
   unsigned char pad_4F9[0x3] // 0x4F9 - 0x4FC
   float m_flOffsetByRadiusFactor; // 0x4FC - 0x500
   int32_t m_nPreserveOffsetCP; // 0x500 - 0x504
   int32_t m_nIgnoreCP; // 0x504 - 0x508

}; // size - 0x510


class C_INIT_PositionWarp : public CParticleFunctionInitializer
{
public:

   CParticleCollectionVecInput m_vecWarpMin; // 0x1F0 - 0x7B8
   CParticleCollectionVecInput m_vecWarpMax; // 0x7B8 - 0xD80
   int32_t m_nScaleControlPointNumber; // 0xD80 - 0xD84
   int32_t m_nControlPointNumber; // 0xD84 - 0xD88
   int32_t m_nRadiusComponent; // 0xD88 - 0xD8C
   float m_flWarpTime; // 0xD8C - 0xD90
   float m_flWarpStartTime; // 0xD90 - 0xD94
   float m_flPrevPosScale; // 0xD94 - 0xD98
   bool m_bInvertWarp; // 0xD98 - 0xD99
   bool m_bUseCount; // 0xD99 - 0xD9A

}; // size - 0xDA0


class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer
{
public:

   Vector m_vecWarpMin; // 0x1F0 - 0x1FC
   Vector m_vecWarpMax; // 0x1FC - 0x208
   CPerParticleFloatInput m_InputValue; // 0x208 - 0x340
   float m_flPrevPosScale; // 0x340 - 0x344
   int32_t m_nScaleControlPointNumber; // 0x344 - 0x348
   int32_t m_nControlPointNumber; // 0x348 - 0x34C

}; // size - 0x350


class C_INIT_QuantizeFloat : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_InputValue; // 0x1F0 - 0x328
   ParticleAttributeIndex_t m_nOutputField; // 0x328 - 0x32C

}; // size - 0x330


class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPoint; // 0x1F0 - 0x1F4

}; // size - 0x200


class C_INIT_RandomAlpha : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   int32_t m_nAlphaMin; // 0x1F4 - 0x1F8
   int32_t m_nAlphaMax; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x8] // 0x1FC - 0x204
   float m_flAlphaRandExponent; // 0x204 - 0x208

}; // size - 0x210


class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer
{
public:

   float m_flMin; // 0x1F0 - 0x1F4
   float m_flMax; // 0x1F4 - 0x1F8
   float m_flExponent; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_INIT_RandomColor : public CParticleFunctionInitializer
{
public:

   Color m_ColorMin; // 0x20C - 0x210
   Color m_ColorMax; // 0x210 - 0x214
   Color m_TintMin; // 0x214 - 0x218
   Color m_TintMax; // 0x218 - 0x21C
   float m_flTintPerc; // 0x21C - 0x220
   float m_flUpdateThreshold; // 0x220 - 0x224
   int32_t m_nTintCP; // 0x224 - 0x228
   ParticleAttributeIndex_t m_nFieldOutput; // 0x228 - 0x22C
   ParticleColorBlendMode_t m_nTintBlendMode; // 0x22C - 0x230
   float m_flLightAmplification; // 0x230 - 0x234

}; // size - 0x240


class C_INIT_RandomLifeTime : public CParticleFunctionInitializer
{
public:

   float m_fLifetimeMin; // 0x1F0 - 0x1F4
   float m_fLifetimeMax; // 0x1F4 - 0x1F8
   float m_fLifetimeRandExponent; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_INIT_RandomModelSequence : public CParticleFunctionInitializer
{
public:

   char m_ActivityName[256]; // 0x1F0 - 0x2F0
   char m_SequenceName[256]; // 0x2F0 - 0x3F0
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x3F0 - 0x3F8

}; // size - 0x400


class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement
{
public:


}; // size - 0x220


class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement
{
public:


}; // size - 0x220


class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement
{
public:


}; // size - 0x220


class C_INIT_RandomRadius : public CParticleFunctionInitializer
{
public:

   float m_flRadiusMin; // 0x1F0 - 0x1F4
   float m_flRadiusMax; // 0x1F4 - 0x1F8
   float m_flRadiusRandExponent; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_INIT_RandomRotation : public CGeneralRandomRotation
{
public:


}; // size - 0x210


class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:


}; // size - 0x210


class C_INIT_RandomScalar : public CParticleFunctionInitializer
{
public:

   float m_flMin; // 0x1F0 - 0x1F4
   float m_flMax; // 0x1F4 - 0x1F8
   float m_flExponent; // 0x1F8 - 0x1FC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1FC - 0x200

}; // size - 0x200


class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer
{
public:

   int32_t m_nSequenceMin; // 0x1F0 - 0x1F4
   int32_t m_nSequenceMax; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_INIT_RandomSequence : public CParticleFunctionInitializer
{
public:

   int32_t m_nSequenceMin; // 0x1F0 - 0x1F4
   int32_t m_nSequenceMax; // 0x1F4 - 0x1F8
   bool m_bShuffle; // 0x1F8 - 0x1F9
   bool m_bLinear; // 0x1F9 - 0x1FA
   unsigned char pad_1FA[0x6] // 0x1FA - 0x200
   CUtlVector< SequenceWeightedList_t > m_WeightedList; // 0x200 - 0x218

}; // size - 0x220


class C_INIT_RandomTrailLength : public CParticleFunctionInitializer
{
public:

   float m_flMinLength; // 0x1F0 - 0x1F4
   float m_flMaxLength; // 0x1F4 - 0x1F8
   float m_flLengthRandExponent; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_INIT_RandomVector : public CParticleFunctionInitializer
{
public:

   Vector m_vecMin; // 0x1F0 - 0x1FC
   Vector m_vecMax; // 0x1FC - 0x208
   ParticleAttributeIndex_t m_nFieldOutput; // 0x208 - 0x20C
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0x20C - 0x214

}; // size - 0x220


class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer
{
public:

   float m_flMin; // 0x1F0 - 0x1F4
   float m_flMax; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F8 - 0x1FC
   int32_t m_nComponent; // 0x1FC - 0x200

}; // size - 0x200


class C_INIT_RandomYaw : public CGeneralRandomRotation
{
public:


}; // size - 0x210


class C_INIT_RandomYawFlip : public CParticleFunctionInitializer
{
public:

   float m_flPercent; // 0x1F0 - 0x1F4

}; // size - 0x200


class C_INIT_RemapCPtoScalar : public CParticleFunctionInitializer
{
public:

   int32_t m_nCPInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   int32_t m_nField; // 0x1F8 - 0x1FC
   float m_flInputMin; // 0x1FC - 0x200
   float m_flInputMax; // 0x200 - 0x204
   float m_flOutputMin; // 0x204 - 0x208
   float m_flOutputMax; // 0x208 - 0x20C
   float m_flStartTime; // 0x20C - 0x210
   float m_flEndTime; // 0x210 - 0x214
   ParticleSetMethod_t m_nSetMethod; // 0x214 - 0x218
   float m_flRemapBias; // 0x218 - 0x21C

}; // size - 0x220


class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x240
   ParticleAttributeIndex_t m_nFieldOutput; // 0x240 - 0x244
   float m_flScale; // 0x244 - 0x248
   float m_flOffsetRot; // 0x248 - 0x24C
   Vector m_vecOffsetAxis; // 0x24C - 0x258
   bool m_bNormalize; // 0x258 - 0x259

}; // size - 0x260


class C_INIT_RemapInitialTransformDirectionToRotation : public CParticleFunctionInitializer
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x240
   ParticleAttributeIndex_t m_nFieldOutput; // 0x240 - 0x244
   float m_flOffsetRot; // 0x244 - 0x248
   int32_t m_nComponent; // 0x248 - 0x24C

}; // size - 0x250


class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flInputMin; // 0x1F8 - 0x1FC
   float m_flInputMax; // 0x1FC - 0x200
   float m_flOutputMin; // 0x200 - 0x204
   float m_flOutputMax; // 0x204 - 0x208

}; // size - 0x210


class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:


}; // size - 0x240


class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:


}; // size - 0x240


class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:


}; // size - 0x240


class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:


}; // size - 0x240


class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:


}; // size - 0x240


class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:


}; // size - 0x240


class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x240

}; // size - 0x240


class C_INIT_RemapScalar : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flInputMin; // 0x1F8 - 0x1FC
   float m_flInputMax; // 0x1FC - 0x200
   float m_flOutputMin; // 0x200 - 0x204
   float m_flOutputMax; // 0x204 - 0x208
   float m_flStartTime; // 0x208 - 0x20C
   float m_flEndTime; // 0x20C - 0x210
   ParticleSetMethod_t m_nSetMethod; // 0x210 - 0x214
   bool m_bActiveRange; // 0x214 - 0x215
   unsigned char pad_215[0x3] // 0x215 - 0x218
   float m_flRemapBias; // 0x218 - 0x21C

}; // size - 0x220


class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flInputMin; // 0x1F8 - 0x1FC
   float m_flInputMax; // 0x1FC - 0x200
   Vector m_vecOutputMin; // 0x200 - 0x20C
   Vector m_vecOutputMax; // 0x20C - 0x218
   float m_flStartTime; // 0x218 - 0x21C
   float m_flEndTime; // 0x21C - 0x220
   ParticleSetMethod_t m_nSetMethod; // 0x220 - 0x224
   int32_t m_nControlPointNumber; // 0x224 - 0x228
   bool m_bLocalCoords; // 0x228 - 0x229
   unsigned char pad_229[0x3] // 0x229 - 0x22C
   float m_flRemapBias; // 0x22C - 0x230

}; // size - 0x240


class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   int32_t m_nControlPointNumber; // 0x1F4 - 0x1F8
   float m_flStartTime; // 0x1F8 - 0x1FC
   float m_flEndTime; // 0x1FC - 0x200
   float m_flInputMin; // 0x200 - 0x204
   float m_flInputMax; // 0x204 - 0x208
   float m_flOutputMin; // 0x208 - 0x20C
   float m_flOutputMax; // 0x20C - 0x210
   ParticleSetMethod_t m_nSetMethod; // 0x210 - 0x214
   bool m_bPerParticle; // 0x214 - 0x215

}; // size - 0x220


class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x240
   Vector m_vecRotation; // 0x240 - 0x24C
   bool m_bUseQuat; // 0x24C - 0x24D
   bool m_bWriteNormal; // 0x24D - 0x24E

}; // size - 0x250


class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   Vector m_vInputMin; // 0x1F4 - 0x200
   Vector m_vInputMax; // 0x200 - 0x20C
   Vector m_vOutputMin; // 0x20C - 0x218
   Vector m_vOutputMax; // 0x218 - 0x224
   unsigned char pad_224[0x4] // 0x224 - 0x228
   CParticleTransformInput m_TransformInput; // 0x228 - 0x278
   CParticleTransformInput m_LocalSpaceTransform; // 0x278 - 0x2C8
   float m_flStartTime; // 0x2C8 - 0x2CC
   float m_flEndTime; // 0x2CC - 0x2D0
   ParticleSetMethod_t m_nSetMethod; // 0x2D0 - 0x2D4
   bool m_bOffset; // 0x2D4 - 0x2D5
   bool m_bAccelerate; // 0x2D5 - 0x2D6
   unsigned char pad_2D6[0x2] // 0x2D6 - 0x2D8
   float m_flRemapBias; // 0x2D8 - 0x2DC

}; // size - 0x2E0


class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x240
   CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x240 - 0x378
   CPerParticleFloatInput m_flInitialRadius; // 0x378 - 0x4B0
   CPerParticleFloatInput m_flThickness; // 0x4B0 - 0x5E8
   CPerParticleFloatInput m_flInitialSpeedMin; // 0x5E8 - 0x720
   CPerParticleFloatInput m_flInitialSpeedMax; // 0x720 - 0x858
   CPerParticleFloatInput m_flRoll; // 0x858 - 0x990
   CPerParticleFloatInput m_flPitch; // 0x990 - 0xAC8
   CPerParticleFloatInput m_flYaw; // 0xAC8 - 0xC00
   bool m_bEvenDistribution; // 0xC00 - 0xC01
   bool m_bXYVelocityOnly; // 0xC01 - 0xC02

}; // size - 0xC10


class C_INIT_RtEnvCull : public CParticleFunctionInitializer
{
public:

   Vector m_vecTestDir; // 0x1F0 - 0x1FC
   Vector m_vecTestNormal; // 0x1FC - 0x208
   bool m_bUseVelocity; // 0x208 - 0x209
   bool m_bCullOnMiss; // 0x209 - 0x20A
   bool m_bLifeAdjust; // 0x20A - 0x20B
   char m_RtEnvName[128]; // 0x20B - 0x28B
   unsigned char pad_28B[0x1] // 0x28B - 0x28C
   int32_t m_nRTEnvCP; // 0x28C - 0x290
   int32_t m_nComponent; // 0x290 - 0x294

}; // size - 0x2A0


class C_INIT_ScaleVelocity : public CParticleFunctionInitializer
{
public:

   CParticleCollectionVecInput m_vecScale; // 0x1F0 - 0x7B8

}; // size - 0x7C0


class C_INIT_SequenceFromCP : public CParticleFunctionInitializer
{
public:

   bool m_bKillUnused; // 0x1F0 - 0x1F1
   bool m_bRadiusScale; // 0x1F1 - 0x1F2
   unsigned char pad_1F2[0x2] // 0x1F2 - 0x1F4
   int32_t m_nCP; // 0x1F4 - 0x1F8
   Vector m_vecOffset; // 0x1F8 - 0x204

}; // size - 0x210


class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer
{
public:

   float m_flFramerate; // 0x1F0 - 0x1F4

}; // size - 0x200


class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nDesiredHitbox; // 0x1F4 - 0x1F8
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x1F8 - 0x7C0
   char m_HitboxSetName[128]; // 0x7C0 - 0x840
   bool m_bUseBones; // 0x840 - 0x841
   bool m_bUseClosestPointOnHitbox; // 0x841 - 0x842
   unsigned char pad_842[0x2] // 0x842 - 0x844
   ClosestPointTestType_t m_nTestType; // 0x844 - 0x848
   CParticleCollectionFloatInput m_flHybridRatio; // 0x848 - 0x980
   bool m_bUpdatePosition; // 0x980 - 0x981

}; // size - 0x990


class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nForceInModel; // 0x1F4 - 0x1F8
   int32_t m_nDesiredHitbox; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x4] // 0x1FC - 0x200
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x200 - 0x7C8
   Vector m_vecDirectionBias; // 0x7C8 - 0x7D4
   bool m_bMaintainHitbox; // 0x7D4 - 0x7D5
   bool m_bUseBones; // 0x7D5 - 0x7D6
   char m_HitboxSetName[128]; // 0x7D6 - 0x856
   unsigned char pad_856[0x2] // 0x856 - 0x858
   CParticleCollectionFloatInput m_flShellSize; // 0x858 - 0x990

}; // size - 0x990


class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldInput; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F8 - 0x1FC
   bool m_bLocalSpace; // 0x1FC - 0x1FD

}; // size - 0x200


class C_INIT_SetVectorAttributeToVectorExpression : public CParticleFunctionInitializer
{
public:

   VectorExpressionType_t m_nExpression; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleVecInput m_vInput1; // 0x1F8 - 0x7C0
   CPerParticleVecInput m_vInput2; // 0x7C0 - 0xD88
   ParticleAttributeIndex_t m_nOutputField; // 0xD88 - 0xD8C
   ParticleSetMethod_t m_nSetMethod; // 0xD8C - 0xD90
   bool m_bNormalizedOutput; // 0xD90 - 0xD91

}; // size - 0xE00


class C_INIT_StatusEffect : public CParticleFunctionInitializer
{
public:

   Detail2Combo_t m_nDetail2Combo; // 0x1F0 - 0x1F4
   float m_flDetail2Rotation; // 0x1F4 - 0x1F8
   float m_flDetail2Scale; // 0x1F8 - 0x1FC
   float m_flDetail2BlendFactor; // 0x1FC - 0x200
   float m_flColorWarpIntensity; // 0x200 - 0x204
   float m_flDiffuseWarpBlendToFull; // 0x204 - 0x208
   float m_flEnvMapIntensity; // 0x208 - 0x20C
   float m_flAmbientScale; // 0x20C - 0x210
   Color m_specularColor; // 0x210 - 0x214
   float m_flSpecularScale; // 0x214 - 0x218
   float m_flSpecularExponent; // 0x218 - 0x21C
   float m_flSpecularExponentBlendToFull; // 0x21C - 0x220
   float m_flSpecularBlendToFull; // 0x220 - 0x224
   Color m_rimLightColor; // 0x224 - 0x228
   float m_flRimLightScale; // 0x228 - 0x22C
   float m_flReflectionsTintByBaseBlendToNone; // 0x22C - 0x230
   float m_flMetalnessBlendToFull; // 0x230 - 0x234
   float m_flSelfIllumBlendToFull; // 0x234 - 0x238

}; // size - 0x250


class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer
{
public:

   float m_flSFXColorWarpAmount; // 0x1F0 - 0x1F4
   float m_flSFXNormalAmount; // 0x1F4 - 0x1F8
   float m_flSFXMetalnessAmount; // 0x1F8 - 0x1FC
   float m_flSFXRoughnessAmount; // 0x1FC - 0x200
   float m_flSFXSelfIllumAmount; // 0x200 - 0x204
   float m_flSFXSScale; // 0x204 - 0x208
   float m_flSFXSScrollX; // 0x208 - 0x20C
   float m_flSFXSScrollY; // 0x20C - 0x210
   float m_flSFXSScrollZ; // 0x210 - 0x214
   float m_flSFXSOffsetX; // 0x214 - 0x218
   float m_flSFXSOffsetY; // 0x218 - 0x21C
   float m_flSFXSOffsetZ; // 0x21C - 0x220
   DetailCombo_t m_nDetailCombo; // 0x220 - 0x224
   float m_flSFXSDetailAmount; // 0x224 - 0x228
   float m_flSFXSDetailScale; // 0x228 - 0x22C
   float m_flSFXSDetailScrollX; // 0x22C - 0x230
   float m_flSFXSDetailScrollY; // 0x230 - 0x234
   float m_flSFXSDetailScrollZ; // 0x234 - 0x238
   float m_flSFXSUseModelUVs; // 0x238 - 0x23C

}; // size - 0x240


class C_INIT_VelocityFromCP : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPoint; // 0x1F0 - 0x1F4
   int32_t m_nControlPointCompare; // 0x1F4 - 0x1F8
   int32_t m_nControlPointLocal; // 0x1F8 - 0x1FC
   float m_flVelocityScale; // 0x1FC - 0x200
   bool m_bDirectionOnly; // 0x200 - 0x201

}; // size - 0x210


class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer
{
public:

   float m_fSpeedMin; // 0x1F0 - 0x1F4
   float m_fSpeedMax; // 0x1F4 - 0x1F8
   bool m_bIgnoreDt; // 0x1F8 - 0x1F9

}; // size - 0x200


class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   float m_fSpeedMin; // 0x1F4 - 0x1F8
   float m_fSpeedMax; // 0x1F8 - 0x1FC
   Vector m_vecLocalCoordinateSystemSpeedScale; // 0x1FC - 0x208
   unsigned char pad_208[0x1] // 0x208 - 0x209
   bool m_bIgnoreDelta; // 0x209 - 0x20A

}; // size - 0x210


class C_INIT_VelocityRandom : public CParticleFunctionInitializer
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_fSpeedMin; // 0x1F8 - 0x330
   CPerParticleFloatInput m_fSpeedMax; // 0x330 - 0x468
   CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x468 - 0xA30
   CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xA30 - 0xFF8
   bool m_bIgnoreDT; // 0xFF8 - 0xFF9
   unsigned char pad_FF9[0x3] // 0xFF9 - 0xFFC
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0xFFC - 0x1004

}; // size - 0x1010


class C_IncendiaryGrenade : public C_MolotovGrenade
{
public:


}; // size - 0x1430


class C_InfoInstructorHintHostageRescueZone : public C_PointEntity
{
public:


}; // size - 0x538


class C_InfoLadderDismount : public C_BaseEntity
{
public:


}; // size - 0x538


class C_InfoMapRegion : public C_BaseEntity
{
public:

   float m_flRadius; // 0x538 - 0x53C
   char m_szLocToken[128]; // 0x53C - 0x5BC
   unsigned char pad_5BC[0x4] // 0x5BC - 0x5C0
   C_InfoMapRegion* m_pNext; // 0x5C0 - 0x5C8

}; // size - 0x5C8


class C_InfoVisibilityBox : public C_BaseEntity
{
public:

   int32_t m_nMode; // 0x53C - 0x540
   Vector m_vBoxSize; // 0x540 - 0x54C
   bool m_bEnabled; // 0x54C - 0x54D

}; // size - 0x550


class C_IronSightController
{
public:

   bool m_bIronSightAvailable; // 0x10 - 0x11
   unsigned char pad_11[0x3] // 0x11 - 0x14
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

}; // size - 0xB0


class C_ItemCash : public C_Item
{
public:


}; // size - 0x1178


class C_ItemDogtags : public C_Item
{
public:

   CHandle< C_CSPlayerPawnBase > m_OwningPlayer; // 0x1178 - 0x117C
   CHandle< C_CSPlayerPawnBase > m_KillingPlayer; // 0x117C - 0x1180

}; // size - 0x1180


class C_Item_Healthshot : public C_WeaponBaseItem
{
public:


}; // size - 0x13F0


class C_KnifeGG : public C_Knife
{
public:


}; // size - 0x13D0


class C_LightEnvironmentEntity : public C_LightDirectionalEntity
{
public:


}; // size - 0x840


class C_LightGlow : public C_BaseModelEntity
{
public:

   uint32_t m_nHorizontalSize; // 0x838 - 0x83C
   uint32_t m_nVerticalSize; // 0x83C - 0x840
   uint32_t m_nMinDist; // 0x840 - 0x844
   uint32_t m_nMaxDist; // 0x844 - 0x848
   uint32_t m_nOuterMaxDist; // 0x848 - 0x84C
   float m_flGlowProxySize; // 0x84C - 0x850
   float m_flHDRColorScale; // 0x850 - 0x854
   unsigned char pad_854[0x4] // 0x854 - 0x858
   C_LightGlowOverlay m_Glow; // 0x858 - 0x950

}; // size - 0x950


class C_LightGlowOverlay : public CGlowOverlay
{
public:

   Vector m_vecOrigin; // 0xD0 - 0xDC
   Vector m_vecDirection; // 0xDC - 0xE8
   int32_t m_nMinDist; // 0xE8 - 0xEC
   int32_t m_nMaxDist; // 0xEC - 0xF0
   int32_t m_nOuterMaxDist; // 0xF0 - 0xF4
   bool m_bOneSided; // 0xF4 - 0xF5
   bool m_bModulateByDot; // 0xF5 - 0xF6

}; // size - 0xF8


class C_LightOrthoEntity : public C_LightEntity
{
public:


}; // size - 0x840


class C_LightSpotEntity : public C_LightEntity
{
public:


}; // size - 0x840


class C_LocalTempEntity : public CBaseAnimGraph
{
public:

   int32_t flags; // 0x9B0 - 0x9B4
   GameTime_t die; // 0x9B4 - 0x9B8
   float m_flFrameMax; // 0x9B8 - 0x9BC
   float x; // 0x9BC - 0x9C0
   float y; // 0x9C0 - 0x9C4
   float fadeSpeed; // 0x9C4 - 0x9C8
   float bounceFactor; // 0x9C8 - 0x9CC
   int32_t hitSound; // 0x9CC - 0x9D0
   int32_t priority; // 0x9D0 - 0x9D4
   Vector tentOffset; // 0x9D4 - 0x9E0
   QAngle m_vecTempEntAngVelocity; // 0x9E0 - 0x9EC
   int32_t tempent_renderamt; // 0x9EC - 0x9F0
   Vector m_vecNormal; // 0x9F0 - 0x9FC
   float m_flSpriteScale; // 0x9FC - 0xA00
   int32_t m_nFlickerFrame; // 0xA00 - 0xA04
   float m_flFrameRate; // 0xA04 - 0xA08
   float m_flFrame; // 0xA08 - 0xA0C
   unsigned char pad_A0C[0x4] // 0xA0C - 0xA10
   char* m_pszImpactEffect; // 0xA10 - 0xA18
   char* m_pszParticleEffect; // 0xA18 - 0xA20
   bool m_bParticleCollision; // 0xA20 - 0xA21
   unsigned char pad_A21[0x3] // 0xA21 - 0xA24
   int32_t m_iLastCollisionFrame; // 0xA24 - 0xA28
   Vector m_vLastCollisionOrigin; // 0xA28 - 0xA34
   Vector m_vecTempEntVelocity; // 0xA34 - 0xA40
   Vector m_vecPrevAbsOrigin; // 0xA40 - 0xA4C
   Vector m_vecTempEntAcceleration; // 0xA4C - 0xA58

}; // size - 0xA58


class C_MapPreviewParticleSystem : public C_ParticleSystem
{
public:


}; // size - 0xDE8


class C_MapVetoPickController : public C_BaseEntity
{
public:

   int32_t m_nDraftType; // 0x548 - 0x54C
   int32_t m_nTeamWinningCoinToss; // 0x54C - 0x550
   int32 m_nTeamWithFirstChoice[64]; // 0x550 - 0x650
   int32 m_nVoteMapIdsList[7]; // 0x650 - 0x66C
   int32 m_nAccountIDs[64]; // 0x66C - 0x76C
   int32 m_nMapId0[64]; // 0x76C - 0x86C
   int32 m_nMapId1[64]; // 0x86C - 0x96C
   int32 m_nMapId2[64]; // 0x96C - 0xA6C
   int32 m_nMapId3[64]; // 0xA6C - 0xB6C
   int32 m_nMapId4[64]; // 0xB6C - 0xC6C
   int32 m_nMapId5[64]; // 0xC6C - 0xD6C
   int32 m_nStartingSide0[64]; // 0xD6C - 0xE6C
   int32_t m_nCurrentPhase; // 0xE6C - 0xE70
   int32_t m_nPhaseStartTick; // 0xE70 - 0xE74
   int32_t m_nPhaseDurationTicks; // 0xE74 - 0xE78
   int32_t m_nPostDataUpdateTick; // 0xE78 - 0xE7C
   bool m_bDisabledHud; // 0xE7C - 0xE7D

}; // size - 0xE80


class C_Melee : public C_WeaponCSBase
{
public:

   GameTime_t m_flThrowAt; // 0x13D0 - 0x13D4

}; // size - 0x13E0


class C_MolotovProjectile : public C_BaseCSGrenadeProjectile
{
public:

   bool m_bIsIncGrenade; // 0xC00 - 0xC01

}; // size - 0xC28


class C_Multimeter : public CBaseAnimGraph
{
public:

   CHandle< C_PlantedC4 > m_hTargetC4; // 0x9A0 - 0x9A4

}; // size - 0x9A8


class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter
{
public:


}; // size - 0xBB8


class C_OP_AlphaDecay : public CParticleFunctionOperator
{
public:

   float m_flMinAlpha; // 0x1F0 - 0x1F4

}; // size - 0x200


class C_OP_AttractToControlPoint : public CParticleFunctionForce
{
public:

   Vector m_vecComponentScale; // 0x1F0 - 0x1FC
   unsigned char pad_1FC[0x4] // 0x1FC - 0x200
   CPerParticleFloatInput m_fForceAmount; // 0x200 - 0x338
   float m_fFalloffPower; // 0x338 - 0x33C
   unsigned char pad_33C[0x4] // 0x33C - 0x340
   CParticleTransformInput m_TransformInput; // 0x340 - 0x390
   CPerParticleFloatInput m_fForceAmountMin; // 0x390 - 0x4C8
   bool m_bApplyMinForce; // 0x4C8 - 0x4C9

}; // size - 0x4D0


class C_OP_BasicMovement : public CParticleFunctionOperator
{
public:

   Vector m_Gravity; // 0x1F0 - 0x1FC
   float m_fDrag; // 0x1FC - 0x200
   int32_t m_nMaxConstraintPasses; // 0x200 - 0x204

}; // size - 0x210


class C_OP_BoxConstraint : public CParticleFunctionConstraint
{
public:

   Vector m_vecMin; // 0x1F0 - 0x1FC
   Vector m_vecMax; // 0x1FC - 0x208
   int32_t m_nCP; // 0x208 - 0x20C
   bool m_bLocalSpace; // 0x20C - 0x20D

}; // size - 0x210


class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator
{
public:

   float m_flInputMin; // 0x1F0 - 0x1F4
   float m_flInputMax; // 0x1F4 - 0x1F8
   float m_flInputBias; // 0x1F8 - 0x1FC
   int32_t m_nStartCP; // 0x1FC - 0x200
   int32_t m_nEndCP; // 0x200 - 0x204
   int32_t m_nOffsetCP; // 0x204 - 0x208
   int32_t m_nOuputCP; // 0x208 - 0x20C
   int32_t m_nInputCP; // 0x20C - 0x210
   bool m_bRadialCheck; // 0x210 - 0x211
   bool m_bScaleOffset; // 0x211 - 0x212
   unsigned char pad_212[0x2] // 0x212 - 0x214
   Vector m_vecOffset; // 0x214 - 0x220

}; // size - 0x220


class C_OP_CPVelocityForce : public CParticleFunctionForce
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flScale; // 0x1F8 - 0x330

}; // size - 0x330


class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator
{
public:

   Vector m_vStartValue; // 0x1F0 - 0x1FC
   ParticleAttributeIndex_t m_nFieldInput1; // 0x1FC - 0x200
   float m_flInputScale1; // 0x200 - 0x204
   ParticleAttributeIndex_t m_nFieldInput2; // 0x204 - 0x208
   float m_flInputScale2; // 0x208 - 0x20C
   ControlPointReference_t m_nControlPointInput1; // 0x20C - 0x220
   float m_flControlPointScale1; // 0x220 - 0x224
   ControlPointReference_t m_nControlPointInput2; // 0x224 - 0x238
   float m_flControlPointScale2; // 0x238 - 0x23C
   ParticleAttributeIndex_t m_nFieldOutput; // 0x23C - 0x240
   Vector m_vFinalOutputScale; // 0x240 - 0x24C

}; // size - 0x250


class C_OP_Callback : public CParticleFunctionRenderer
{
public:


}; // size - 0x230


class C_OP_ChladniWave : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flInputMin; // 0x1F8 - 0x330
   CPerParticleFloatInput m_flInputMax; // 0x330 - 0x468
   CPerParticleFloatInput m_flOutputMin; // 0x468 - 0x5A0
   CPerParticleFloatInput m_flOutputMax; // 0x5A0 - 0x6D8
   CPerParticleVecInput m_vecWaveLength; // 0x6D8 - 0xCA0
   CPerParticleVecInput m_vecHarmonics; // 0xCA0 - 0x1268
   ParticleSetMethod_t m_nSetMethod; // 0x1268 - 0x126C
   int32_t m_nLocalSpaceControlPoint; // 0x126C - 0x1270
   bool m_b3D; // 0x1270 - 0x1271

}; // size - 0x1280


class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission
{
public:

   int32_t m_nChildGroupID; // 0x200 - 0x204
   unsigned char pad_204[0x4] // 0x204 - 0x208
   CParticleCollectionFloatInput m_flNumberOfChildren; // 0x208 - 0x340

}; // size - 0x340


class C_OP_ClampScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flOutputMin; // 0x1F8 - 0x330
   CPerParticleFloatInput m_flOutputMax; // 0x330 - 0x468

}; // size - 0x470


class C_OP_ClampVector : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleVecInput m_vecOutputMin; // 0x1F8 - 0x7C0
   CPerParticleVecInput m_vecOutputMax; // 0x7C0 - 0xD88

}; // size - 0xD90


class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint
{
public:

   CPerParticleFloatInput m_flParentRadiusScale; // 0x1F0 - 0x328
   CPerParticleFloatInput m_flRadiusScale; // 0x328 - 0x460

}; // size - 0x460


class C_OP_CollideWithSelf : public CParticleFunctionConstraint
{
public:

   CPerParticleFloatInput m_flRadiusScale; // 0x1F0 - 0x328
   CPerParticleFloatInput m_flMinimumSpeed; // 0x328 - 0x460

}; // size - 0x460


class C_OP_ColorAdjustHSL : public CParticleFunctionOperator
{
public:

   CPerParticleFloatInput m_flHueAdjust; // 0x1F0 - 0x328
   CPerParticleFloatInput m_flSaturationAdjust; // 0x328 - 0x460
   CPerParticleFloatInput m_flLightnessAdjust; // 0x460 - 0x598

}; // size - 0x5A0


class C_OP_ColorInterpolate : public CParticleFunctionOperator
{
public:

   Color m_ColorFade; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0xC] // 0x1F4 - 0x200
   float m_flFadeStartTime; // 0x200 - 0x204
   float m_flFadeEndTime; // 0x204 - 0x208
   ParticleAttributeIndex_t m_nFieldOutput; // 0x208 - 0x20C
   bool m_bEaseInOut; // 0x20C - 0x20D

}; // size - 0x210


class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator
{
public:

   Color m_ColorFadeMin; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x18] // 0x1F4 - 0x20C
   Color m_ColorFadeMax; // 0x20C - 0x210
   unsigned char pad_210[0xC] // 0x210 - 0x21C
   float m_flFadeStartTime; // 0x21C - 0x220
   float m_flFadeEndTime; // 0x220 - 0x224
   ParticleAttributeIndex_t m_nFieldOutput; // 0x224 - 0x228
   bool m_bEaseInOut; // 0x228 - 0x229

}; // size - 0x230


class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:

   int32_t m_nFirstControlPoint; // 0x1F0 - 0x1F4
   int32_t m_nSecondControlPoint; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:

   CParticleCollectionFloatInput m_fMinDistance; // 0x1F0 - 0x328
   CParticleCollectionFloatInput m_fMaxDistance; // 0x328 - 0x460
   int32_t m_nControlPointNumber; // 0x460 - 0x464
   Vector m_CenterOffset; // 0x464 - 0x470
   bool m_bGlobalCenter; // 0x470 - 0x471

}; // size - 0x480


class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint
{
public:

   float m_fMinDistance; // 0x1F0 - 0x1F4
   float m_flMaxDistance0; // 0x1F4 - 0x1F8
   float m_flMaxDistanceMid; // 0x1F8 - 0x1FC
   float m_flMaxDistance1; // 0x1FC - 0x200
   CPathParameters m_PathParameters; // 0x200 - 0x240
   float m_flTravelTime; // 0x240 - 0x244
   ParticleAttributeIndex_t m_nFieldScale; // 0x244 - 0x248
   ParticleAttributeIndex_t m_nManualTField; // 0x248 - 0x24C

}; // size - 0x250


class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:

   float m_fMinDistance; // 0x1F0 - 0x1F4
   float m_flMaxDistance; // 0x1F4 - 0x1F8
   float m_flTimeScale; // 0x1F8 - 0x1FC
   bool m_bLoopedPath; // 0x1FC - 0x1FD
   unsigned char pad_1FD[0x3] // 0x1FD - 0x200
   CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x200 - 0x218

}; // size - 0x220


class C_OP_ConstrainLineLength : public CParticleFunctionConstraint
{
public:

   float m_flMinDistance; // 0x1F0 - 0x1F4
   float m_flMaxDistance; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_ContinuousEmitter : public CParticleFunctionEmitter
{
public:

   CParticleCollectionFloatInput m_flEmissionDuration; // 0x1F0 - 0x328
   CParticleCollectionFloatInput m_flStartTime; // 0x328 - 0x460
   CParticleCollectionFloatInput m_flEmitRate; // 0x460 - 0x598
   float m_flEmissionScale; // 0x598 - 0x59C
   float m_flScalePerParentParticle; // 0x59C - 0x5A0
   bool m_bInitFromKilledParentParticles; // 0x5A0 - 0x5A1
   unsigned char pad_5A1[0x3] // 0x5A1 - 0x5A4
   int32_t m_nLimitPerUpdate; // 0x5A4 - 0x5A8
   bool m_bForceEmitOnFirstUpdate; // 0x5A8 - 0x5A9
   bool m_bForceEmitOnLastUpdate; // 0x5A9 - 0x5AA

}; // size - 0x5B0


class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCPIn; // 0x200 - 0x204
   Vector m_vecCP1Pos; // 0x204 - 0x210
   int32_t m_nCPOut; // 0x210 - 0x214
   int32_t m_nCPOutField; // 0x214 - 0x218
   int32_t m_nCPSSPosOut; // 0x218 - 0x21C

}; // size - 0x220


class C_OP_ControlpointLight : public CParticleFunctionOperator
{
public:

   float m_flScale; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4CC] // 0x1F4 - 0x6C0
   int32_t m_nControlPoint1; // 0x6C0 - 0x6C4
   int32_t m_nControlPoint2; // 0x6C4 - 0x6C8
   int32_t m_nControlPoint3; // 0x6C8 - 0x6CC
   int32_t m_nControlPoint4; // 0x6CC - 0x6D0
   Vector m_vecCPOffset1; // 0x6D0 - 0x6DC
   Vector m_vecCPOffset2; // 0x6DC - 0x6E8
   Vector m_vecCPOffset3; // 0x6E8 - 0x6F4
   Vector m_vecCPOffset4; // 0x6F4 - 0x700
   float m_LightFiftyDist1; // 0x700 - 0x704
   float m_LightZeroDist1; // 0x704 - 0x708
   float m_LightFiftyDist2; // 0x708 - 0x70C
   float m_LightZeroDist2; // 0x70C - 0x710
   float m_LightFiftyDist3; // 0x710 - 0x714
   float m_LightZeroDist3; // 0x714 - 0x718
   float m_LightFiftyDist4; // 0x718 - 0x71C
   float m_LightZeroDist4; // 0x71C - 0x720
   Color m_LightColor1; // 0x720 - 0x724
   Color m_LightColor2; // 0x724 - 0x728
   Color m_LightColor3; // 0x728 - 0x72C
   Color m_LightColor4; // 0x72C - 0x730
   bool m_bLightType1; // 0x730 - 0x731
   bool m_bLightType2; // 0x731 - 0x732
   bool m_bLightType3; // 0x732 - 0x733
   bool m_bLightType4; // 0x733 - 0x734
   bool m_bLightDynamic1; // 0x734 - 0x735
   bool m_bLightDynamic2; // 0x735 - 0x736
   bool m_bLightDynamic3; // 0x736 - 0x737
   bool m_bLightDynamic4; // 0x737 - 0x738
   bool m_bUseNormal; // 0x738 - 0x739
   bool m_bUseHLambert; // 0x739 - 0x73A
   unsigned char pad_73A[0x4] // 0x73A - 0x73E
   bool m_bClampLowerRange; // 0x73E - 0x73F
   bool m_bClampUpperRange; // 0x73F - 0x740

}; // size - 0x740


class C_OP_Cull : public CParticleFunctionOperator
{
public:

   float m_flCullPerc; // 0x1F0 - 0x1F4
   float m_flCullStart; // 0x1F4 - 0x1F8
   float m_flCullEnd; // 0x1F8 - 0x1FC
   float m_flCullExp; // 0x1FC - 0x200

}; // size - 0x200


class C_OP_CurlNoiseForce : public CParticleFunctionForce
{
public:

   ParticleDirectionNoiseType_t m_nNoiseType; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleVecInput m_vecNoiseFreq; // 0x1F8 - 0x7C0
   CPerParticleVecInput m_vecNoiseScale; // 0x7C0 - 0xD88
   CPerParticleVecInput m_vecOffsetRate; // 0xD88 - 0x1350
   CPerParticleFloatInput m_flWorleySeed; // 0x1350 - 0x1488
   CPerParticleFloatInput m_flWorleyJitter; // 0x1488 - 0x15C0

}; // size - 0x15C0


class C_OP_CycleScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nDestField; // 0x1F0 - 0x1F4
   float m_flStartValue; // 0x1F4 - 0x1F8
   float m_flEndValue; // 0x1F8 - 0x1FC
   float m_flCycleTime; // 0x1FC - 0x200
   bool m_bDoNotRepeatCycle; // 0x200 - 0x201
   bool m_bSynchronizeParticles; // 0x201 - 0x202
   unsigned char pad_202[0x2] // 0x202 - 0x204
   int32_t m_nCPScale; // 0x204 - 0x208
   int32_t m_nCPFieldMin; // 0x208 - 0x20C
   int32_t m_nCPFieldMax; // 0x20C - 0x210
   ParticleSetMethod_t m_nSetMethod; // 0x210 - 0x214

}; // size - 0x220


class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flInputMin; // 0x1F8 - 0x330
   CPerParticleFloatInput m_flInputMax; // 0x330 - 0x468
   CPerParticleFloatInput m_flOutputMin; // 0x468 - 0x5A0
   CPerParticleFloatInput m_flOutputMax; // 0x5A0 - 0x6D8
   CParticleTransformInput m_TransformStart; // 0x6D8 - 0x728
   CParticleTransformInput m_TransformEnd; // 0x728 - 0x778
   ParticleSetMethod_t m_nSetMethod; // 0x778 - 0x77C
   bool m_bActiveRange; // 0x77C - 0x77D
   bool m_bAdditive; // 0x77D - 0x77E
   bool m_bCapsule; // 0x77E - 0x77F

}; // size - 0x780


class C_OP_DampenToCP : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   float m_flRange; // 0x1F4 - 0x1F8
   float m_flScale; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_OP_Decay : public CParticleFunctionOperator
{
public:

   bool m_bRopeDecay; // 0x1F0 - 0x1F1
   bool m_bForcePreserveParticleOrder; // 0x1F1 - 0x1F2

}; // size - 0x200


class C_OP_DecayClampCount : public CParticleFunctionOperator
{
public:

   CParticleCollectionFloatInput m_nCount; // 0x1F0 - 0x328

}; // size - 0x330


class C_OP_DecayMaintainCount : public CParticleFunctionOperator
{
public:

   int32_t m_nParticlesToMaintain; // 0x1F0 - 0x1F4
   float m_flDecayDelay; // 0x1F4 - 0x1F8
   int32_t m_nSnapshotControlPoint; // 0x1F8 - 0x1FC
   bool m_bLifespanDecay; // 0x1FC - 0x1FD
   unsigned char pad_1FD[0x3] // 0x1FD - 0x200
   CParticleCollectionFloatInput m_flScale; // 0x200 - 0x338
   bool m_bKillNewest; // 0x338 - 0x339

}; // size - 0x340


class C_OP_DecayOffscreen : public CParticleFunctionOperator
{
public:

   CParticleCollectionFloatInput m_flOffscreenTime; // 0x1F0 - 0x328

}; // size - 0x330


class C_OP_DensityForce : public CParticleFunctionForce
{
public:

   float m_flRadiusScale; // 0x1F0 - 0x1F4
   float m_flForceScale; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flInputMin; // 0x1F8 - 0x1FC
   float m_flInputMax; // 0x1FC - 0x200
   float m_flOutputMin; // 0x200 - 0x204
   float m_flOutputMax; // 0x204 - 0x208
   ParticleSetMethod_t m_nSetMethod; // 0x208 - 0x20C
   bool m_bActiveRange; // 0x20C - 0x20D
   bool m_bSetPreviousParticle; // 0x20D - 0x20E

}; // size - 0x210


class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleVecInput m_vecPoint1; // 0x1F8 - 0x7C0
   CPerParticleVecInput m_vecPoint2; // 0x7C0 - 0xD88

}; // size - 0xD90


class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nStartCP; // 0x200 - 0x204
   int32_t m_nEndCP; // 0x204 - 0x208
   int32_t m_nOutputCP; // 0x208 - 0x20C
   int32_t m_nOutputCPField; // 0x20C - 0x210
   bool m_bSetOnce; // 0x210 - 0x211
   unsigned char pad_211[0x3] // 0x211 - 0x214
   float m_flInputMin; // 0x214 - 0x218
   float m_flInputMax; // 0x218 - 0x21C
   float m_flOutputMin; // 0x21C - 0x220
   float m_flOutputMax; // 0x220 - 0x224
   float m_flMaxTraceLength; // 0x224 - 0x228
   float m_flLOSScale; // 0x228 - 0x22C
   bool m_bLOS; // 0x22C - 0x22D
   char m_CollisionGroupName[128]; // 0x22D - 0x2AD
   unsigned char pad_2AD[0x3] // 0x2AD - 0x2B0
   ParticleTraceSet_t m_nTraceSet; // 0x2B0 - 0x2B4
   ParticleParentSetMode_t m_nSetParent; // 0x2B4 - 0x2B8

}; // size - 0x2C0


class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CParticleTransformInput m_TransformStart; // 0x1F8 - 0x248
   CParticleTransformInput m_TransformEnd; // 0x248 - 0x298
   CPerParticleFloatInput m_flInputMin; // 0x298 - 0x3D0
   CPerParticleFloatInput m_flInputMax; // 0x3D0 - 0x508
   CPerParticleFloatInput m_flOutputMin; // 0x508 - 0x640
   CPerParticleFloatInput m_flOutputMax; // 0x640 - 0x778
   float m_flMaxTraceLength; // 0x778 - 0x77C
   float m_flLOSScale; // 0x77C - 0x780
   char m_CollisionGroupName[128]; // 0x780 - 0x800
   ParticleTraceSet_t m_nTraceSet; // 0x800 - 0x804
   bool m_bLOS; // 0x804 - 0x805
   unsigned char pad_805[0x3] // 0x805 - 0x808
   ParticleSetMethod_t m_nSetMethod; // 0x808 - 0x80C

}; // size - 0x810


class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleVecInput m_vecPoint1; // 0x1F8 - 0x7C0
   CPerParticleVecInput m_vecPoint2; // 0x7C0 - 0xD88
   CPerParticleFloatInput m_flInputMin; // 0xD88 - 0xEC0
   CPerParticleFloatInput m_flInputMax; // 0xEC0 - 0xFF8
   CPerParticleFloatInput m_flOutputMin; // 0xFF8 - 0x1130
   CPerParticleFloatInput m_flOutputMax; // 0x1130 - 0x1268
   ParticleSetMethod_t m_nSetMethod; // 0x1268 - 0x126C
   bool m_bDeltaTime; // 0x126C - 0x126D

}; // size - 0x1270


class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPoint; // 0x1F0 - 0x1F4
   Vector m_vecPointOffset; // 0x1F4 - 0x200
   float m_flDistance; // 0x200 - 0x204
   bool m_bCullInside; // 0x204 - 0x205

}; // size - 0x210


class C_OP_DistanceToTransform : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flInputMin; // 0x1F8 - 0x330
   CPerParticleFloatInput m_flInputMax; // 0x330 - 0x468
   CPerParticleFloatInput m_flOutputMin; // 0x468 - 0x5A0
   CPerParticleFloatInput m_flOutputMax; // 0x5A0 - 0x6D8
   CParticleTransformInput m_TransformStart; // 0x6D8 - 0x728
   bool m_bLOS; // 0x728 - 0x729
   char m_CollisionGroupName[128]; // 0x729 - 0x7A9
   unsigned char pad_7A9[0x3] // 0x7A9 - 0x7AC
   ParticleTraceSet_t m_nTraceSet; // 0x7AC - 0x7B0
   float m_flMaxTraceLength; // 0x7B0 - 0x7B4
   float m_flLOSScale; // 0x7B4 - 0x7B8
   ParticleSetMethod_t m_nSetMethod; // 0x7B8 - 0x7BC
   bool m_bActiveRange; // 0x7BC - 0x7BD
   bool m_bAdditive; // 0x7BD - 0x7BE
   unsigned char pad_7BE[0x2] // 0x7BE - 0x7C0
   CPerParticleVecInput m_vecComponentScale; // 0x7C0 - 0xD88

}; // size - 0xD90


class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission
{
public:

   int32_t m_nOutputControlPoint; // 0x200 - 0x204
   int32_t m_nOutputField; // 0x204 - 0x208
   float m_flInputMin; // 0x208 - 0x20C
   float m_flInputMax; // 0x20C - 0x210
   float m_flOutputMin; // 0x210 - 0x214
   float m_flOutputMax; // 0x214 - 0x218
   CUtlString m_StackName; // 0x218 - 0x220
   CUtlString m_OperatorName; // 0x220 - 0x228
   CUtlString m_FieldName; // 0x228 - 0x230

}; // size - 0x240


class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission
{
public:

   int32_t m_nChildGroupID; // 0x200 - 0x204
   int32_t m_nFirstChild; // 0x204 - 0x208
   CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x208 - 0x340

}; // size - 0x340


class C_OP_EndCapDecay : public CParticleFunctionOperator
{
public:


}; // size - 0x1F0


class C_OP_EndCapTimedDecay : public CParticleFunctionOperator
{
public:

   float m_flDecayTime; // 0x1F0 - 0x1F4

}; // size - 0x200


class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator
{
public:

   CParticleCollectionFloatInput m_flFreezeTime; // 0x1F0 - 0x328

}; // size - 0x330


class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce
{
public:

   CPerParticleFloatInput m_flForceScale; // 0x1F0 - 0x328
   bool m_bRopes; // 0x328 - 0x329
   bool m_bRopesZOnly; // 0x329 - 0x32A
   bool m_bExplosions; // 0x32A - 0x32B
   bool m_bParticles; // 0x32B - 0x32C

}; // size - 0x330


class C_OP_ExternalGenericForce : public CParticleFunctionForce
{
public:

   float m_flStrength; // 0x1F0 - 0x1F4
   float m_flCurlStrength; // 0x1F4 - 0x1F8
   float m_flLinearStrength; // 0x1F8 - 0x1FC
   float m_flRadialStrength; // 0x1FC - 0x200
   float m_flRotationStrength; // 0x200 - 0x204

}; // size - 0x210


class C_OP_ExternalWindForce : public CParticleFunctionForce
{
public:

   CPerParticleVecInput m_vecSamplePosition; // 0x1F0 - 0x7B8
   CPerParticleVecInput m_vecScale; // 0x7B8 - 0xD80
   bool m_bSampleWind; // 0xD80 - 0xD81
   bool m_bSampleWater; // 0xD81 - 0xD82

}; // size - 0xD90


class C_OP_FadeAndKill : public CParticleFunctionOperator
{
public:

   float m_flStartFadeInTime; // 0x1F0 - 0x1F4
   float m_flEndFadeInTime; // 0x1F4 - 0x1F8
   float m_flStartFadeOutTime; // 0x1F8 - 0x1FC
   float m_flEndFadeOutTime; // 0x1FC - 0x200
   float m_flStartAlpha; // 0x200 - 0x204
   float m_flEndAlpha; // 0x204 - 0x208
   bool m_bForcePreserveParticleOrder; // 0x208 - 0x209

}; // size - 0x210


class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator
{
public:

   float m_flStartFadeInTime; // 0x1F0 - 0x1F4
   float m_flEndFadeInTime; // 0x1F4 - 0x1F8
   float m_flStartFadeOutTime; // 0x1F8 - 0x1FC
   float m_flEndFadeOutTime; // 0x1FC - 0x200
   float m_flStartAlpha; // 0x200 - 0x204
   float m_flEndAlpha; // 0x204 - 0x208

}; // size - 0x210


class C_OP_FadeIn : public CParticleFunctionOperator
{
public:

   float m_flFadeInTimeMin; // 0x1F0 - 0x1F4
   float m_flFadeInTimeMax; // 0x1F4 - 0x1F8
   float m_flFadeInTimeExp; // 0x1F8 - 0x1FC
   bool m_bProportional; // 0x1FC - 0x1FD

}; // size - 0x200


class C_OP_FadeInSimple : public CParticleFunctionOperator
{
public:

   float m_flFadeInTime; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_FadeOut : public CParticleFunctionOperator
{
public:

   float m_flFadeOutTimeMin; // 0x1F0 - 0x1F4
   float m_flFadeOutTimeMax; // 0x1F4 - 0x1F8
   float m_flFadeOutTimeExp; // 0x1F8 - 0x1FC
   float m_flFadeBias; // 0x1FC - 0x200
   unsigned char pad_200[0x30] // 0x200 - 0x230
   bool m_bProportional; // 0x230 - 0x231
   bool m_bEaseInAndOut; // 0x231 - 0x232

}; // size - 0x240


class C_OP_FadeOutSimple : public CParticleFunctionOperator
{
public:

   float m_flFadeOutTime; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce
{
public:

   float m_flMinDist; // 0x1F0 - 0x1F4
   Vector m_vecForceAtMinDist; // 0x1F4 - 0x200
   float m_flMaxDist; // 0x200 - 0x204
   Vector m_vecForceAtMaxDist; // 0x204 - 0x210
   Vector m_vecPlaneNormal; // 0x210 - 0x21C
   int32_t m_nControlPointNumber; // 0x21C - 0x220
   float m_flExponent; // 0x220 - 0x224

}; // size - 0x230


class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission
{
public:

   int32_t m_ControlPoint; // 0x200 - 0x204

}; // size - 0x210


class C_OP_GlobalLight : public CParticleFunctionOperator
{
public:

   float m_flScale; // 0x1F0 - 0x1F4
   bool m_bClampLowerRange; // 0x1F4 - 0x1F5
   bool m_bClampUpperRange; // 0x1F5 - 0x1F6

}; // size - 0x200


class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nColorCP; // 0x200 - 0x204
   int32_t m_nColorGemEnableCP; // 0x204 - 0x208
   int32_t m_nOutputCP; // 0x208 - 0x20C
   Color m_DefaultHSVColor; // 0x20C - 0x210

}; // size - 0x220


class C_OP_InheritFromParentParticles : public CParticleFunctionOperator
{
public:

   float m_flScale; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   int32_t m_nIncrement; // 0x1F8 - 0x1FC
   bool m_bRandomDistribution; // 0x1FC - 0x1FD

}; // size - 0x200


class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator
{
public:

   float m_flScale; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   int32_t m_nIncrement; // 0x1F8 - 0x1FC
   bool m_bRandomDistribution; // 0x1FC - 0x1FD
   unsigned char pad_1FD[0x3] // 0x1FD - 0x200
   MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x200 - 0x204

}; // size - 0x210


class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldInput; // 0x1F4 - 0x1F8
   int32_t m_nIncrement; // 0x1F8 - 0x1FC
   int32_t m_nGroupID; // 0x1FC - 0x200

}; // size - 0x200


class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter
{
public:

   CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1F0 - 0x328
   CParticleCollectionFloatInput m_flStartTime; // 0x328 - 0x460
   float m_flInitFromKilledParentParticles; // 0x460 - 0x464
   int32_t m_nMaxEmittedPerFrame; // 0x464 - 0x468
   int32_t m_nSnapshotControlPoint; // 0x468 - 0x46C

}; // size - 0x470


class C_OP_InterpolateRadius : public CParticleFunctionOperator
{
public:

   float m_flStartTime; // 0x1F0 - 0x1F4
   float m_flEndTime; // 0x1F4 - 0x1F8
   float m_flStartScale; // 0x1F8 - 0x1FC
   float m_flEndScale; // 0x1FC - 0x200
   bool m_bEaseInAndOut; // 0x200 - 0x201
   unsigned char pad_201[0x3] // 0x201 - 0x204
   float m_flBias; // 0x204 - 0x208

}; // size - 0x240


class C_OP_LagCompensation : public CParticleFunctionOperator
{
public:

   int32_t m_nDesiredVelocityCP; // 0x1F0 - 0x1F4
   int32_t m_nLatencyCP; // 0x1F4 - 0x1F8
   int32_t m_nLatencyCPField; // 0x1F8 - 0x1FC
   int32_t m_nDesiredVelocityCPField; // 0x1FC - 0x200

}; // size - 0x200


class C_OP_LerpEndCapScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flOutput; // 0x1F4 - 0x1F8
   float m_flLerpTime; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_OP_LerpEndCapVector : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   Vector m_vecOutput; // 0x1F4 - 0x200
   float m_flLerpTime; // 0x200 - 0x204

}; // size - 0x210


class C_OP_LerpScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flOutput; // 0x1F8 - 0x330
   float m_flStartTime; // 0x330 - 0x334
   float m_flEndTime; // 0x334 - 0x338

}; // size - 0x340


class C_OP_LerpToInitialPosition : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flInterpolation; // 0x1F8 - 0x330
   ParticleAttributeIndex_t m_nCacheField; // 0x330 - 0x334
   unsigned char pad_334[0x4] // 0x334 - 0x338
   CParticleCollectionFloatInput m_flScale; // 0x338 - 0x470
   CParticleCollectionVecInput m_vecScale; // 0x470 - 0xA38

}; // size - 0xA40


class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator
{
public:

   CPerParticleFloatInput m_flInterpolation; // 0x1F0 - 0x328
   ParticleAttributeIndex_t m_nFieldInputFrom; // 0x328 - 0x32C
   ParticleAttributeIndex_t m_nFieldInput; // 0x32C - 0x330
   ParticleAttributeIndex_t m_nFieldOutput; // 0x330 - 0x334

}; // size - 0x360


class C_OP_LerpVector : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   Vector m_vecOutput; // 0x1F4 - 0x200
   float m_flStartTime; // 0x200 - 0x204
   float m_flEndTime; // 0x204 - 0x208
   ParticleSetMethod_t m_nSetMethod; // 0x208 - 0x20C

}; // size - 0x210


class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCPSnapshot; // 0x200 - 0x204
   int32_t m_nCPStartPnt; // 0x204 - 0x208
   int32_t m_nCPEndPnt; // 0x208 - 0x20C
   unsigned char pad_20C[0x4] // 0x20C - 0x210
   CParticleCollectionFloatInput m_flSegments; // 0x210 - 0x348
   CParticleCollectionFloatInput m_flOffset; // 0x348 - 0x480
   CParticleCollectionFloatInput m_flOffsetDecay; // 0x480 - 0x5B8
   CParticleCollectionFloatInput m_flRecalcRate; // 0x5B8 - 0x6F0
   CParticleCollectionFloatInput m_flUVScale; // 0x6F0 - 0x828
   CParticleCollectionFloatInput m_flUVOffset; // 0x828 - 0x960
   CParticleCollectionFloatInput m_flSplitRate; // 0x960 - 0xA98
   CParticleCollectionFloatInput m_flBranchTwist; // 0xA98 - 0xBD0
   ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xBD0 - 0xBD4
   unsigned char pad_BD4[0x4] // 0xBD4 - 0xBD8
   CParticleCollectionFloatInput m_flRadiusStart; // 0xBD8 - 0xD10
   CParticleCollectionFloatInput m_flRadiusEnd; // 0xD10 - 0xE48
   CParticleCollectionFloatInput m_flDedicatedPool; // 0xE48 - 0xF80

}; // size - 0xF80


class C_OP_LocalAccelerationForce : public CParticleFunctionForce
{
public:

   int32_t m_nCP; // 0x1F0 - 0x1F4
   int32_t m_nScaleCP; // 0x1F4 - 0x1F8
   CParticleCollectionVecInput m_vecAccel; // 0x1F8 - 0x7C0

}; // size - 0x7C0


class C_OP_LockPoints : public CParticleFunctionOperator
{
public:

   int32_t m_nMinCol; // 0x1F0 - 0x1F4
   int32_t m_nMaxCol; // 0x1F4 - 0x1F8
   int32_t m_nMinRow; // 0x1F8 - 0x1FC
   int32_t m_nMaxRow; // 0x1FC - 0x200
   int32_t m_nControlPoint; // 0x200 - 0x204
   float m_flBlendValue; // 0x204 - 0x208

}; // size - 0x210


class C_OP_LockToBone : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   float m_flLifeTimeFadeStart; // 0x1F4 - 0x1F8
   float m_flLifeTimeFadeEnd; // 0x1F8 - 0x1FC
   float m_flJumpThreshold; // 0x1FC - 0x200
   float m_flPrevPosScale; // 0x200 - 0x204
   char m_HitboxSetName[128]; // 0x204 - 0x284
   bool m_bRigid; // 0x284 - 0x285
   bool m_bUseBones; // 0x285 - 0x286
   unsigned char pad_286[0x2] // 0x286 - 0x288
   ParticleAttributeIndex_t m_nFieldOutput; // 0x288 - 0x28C
   ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x28C - 0x290
   ParticleRotationLockType_t m_nRotationSetType; // 0x290 - 0x294
   bool m_bRigidRotationLock; // 0x294 - 0x295
   unsigned char pad_295[0x3] // 0x295 - 0x298
   CPerParticleVecInput m_vecRotation; // 0x298 - 0x860
   CPerParticleFloatInput m_flRotLerp; // 0x860 - 0x998

}; // size - 0x9A0


class C_OP_LockToPointList : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CUtlVector< PointDefinition_t > m_pointList; // 0x1F8 - 0x210
   bool m_bPlaceAlongPath; // 0x210 - 0x211
   bool m_bClosedLoop; // 0x211 - 0x212
   unsigned char pad_212[0x2] // 0x212 - 0x214
   int32_t m_nNumPointsAlongPath; // 0x214 - 0x218

}; // size - 0x220


class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator
{
public:

   float m_flFadeStart; // 0x1F4 - 0x1F8
   float m_flFadeEnd; // 0x1F8 - 0x1FC
   bool m_bCPPairs; // 0x1FC - 0x1FD
   unsigned char pad_1FD[0x3] // 0x1FD - 0x200
   CPathParameters m_PathParams; // 0x200 - 0x240

}; // size - 0x240


class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator
{
public:

   float m_flFadeStart; // 0x1F0 - 0x1F4
   float m_flFadeEnd; // 0x1F4 - 0x1F8
   bool m_bCPPairs; // 0x1F8 - 0x1F9
   unsigned char pad_1F9[0x7] // 0x1F9 - 0x200
   CPathParameters m_PathParams; // 0x200 - 0x240

}; // size - 0x240


class C_OP_MaintainEmitter : public CParticleFunctionEmitter
{
public:

   int32_t m_nParticlesToMaintain; // 0x1F0 - 0x1F4
   float m_flStartTime; // 0x1F4 - 0x1F8
   CParticleCollectionFloatInput m_flEmissionDuration; // 0x1F8 - 0x330
   float m_flEmissionRate; // 0x330 - 0x334
   int32_t m_nSnapshotControlPoint; // 0x334 - 0x338
   bool m_bEmitInstantaneously; // 0x338 - 0x339
   bool m_bFinalEmitOnStop; // 0x339 - 0x33A
   unsigned char pad_33A[0x6] // 0x33A - 0x340
   CParticleCollectionFloatInput m_flScale; // 0x340 - 0x478

}; // size - 0x480


class C_OP_MaintainSequentialPath : public CParticleFunctionOperator
{
public:

   float m_fMaxDistance; // 0x1F0 - 0x1F4
   float m_flNumToAssign; // 0x1F4 - 0x1F8
   float m_flCohesionStrength; // 0x1F8 - 0x1FC
   float m_flTolerance; // 0x1FC - 0x200
   bool m_bLoop; // 0x200 - 0x201
   bool m_bUseParticleCount; // 0x201 - 0x202
   unsigned char pad_202[0xE] // 0x202 - 0x210
   CPathParameters m_PathParams; // 0x210 - 0x250

}; // size - 0x250


class C_OP_MaxVelocity : public CParticleFunctionOperator
{
public:

   float m_flMaxVelocity; // 0x1F0 - 0x1F4
   int32_t m_nOverrideCP; // 0x1F4 - 0x1F8
   int32_t m_nOverrideCPField; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_OP_ModelCull : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   bool m_bBoundBox; // 0x1F4 - 0x1F5
   bool m_bCullOutside; // 0x1F5 - 0x1F6
   bool m_bUseBones; // 0x1F6 - 0x1F7
   char m_HitboxSetName[128]; // 0x1F7 - 0x277

}; // size - 0x280


class C_OP_ModelDampenMovement : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   bool m_bBoundBox; // 0x1F4 - 0x1F5
   bool m_bOutside; // 0x1F5 - 0x1F6
   bool m_bUseBones; // 0x1F6 - 0x1F7
   char m_HitboxSetName[128]; // 0x1F7 - 0x277
   unsigned char pad_277[0x1] // 0x277 - 0x278
   CPerParticleVecInput m_vecPosOffset; // 0x278 - 0x840
   float m_fDrag; // 0x840 - 0x844

}; // size - 0x850


class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   float m_flLifeTimeLerpStart; // 0x1F8 - 0x1FC
   float m_flLifeTimeLerpEnd; // 0x1FC - 0x200
   float m_flPrevPosScale; // 0x200 - 0x204
   char m_HitboxSetName[128]; // 0x204 - 0x284
   bool m_bUseBones; // 0x284 - 0x285
   unsigned char pad_285[0x3] // 0x285 - 0x288
   HitboxLerpType_t m_nLerpType; // 0x288 - 0x28C
   unsigned char pad_28C[0x4] // 0x28C - 0x290
   CPerParticleFloatInput m_flInterpolation; // 0x290 - 0x3C8

}; // size - 0x3D0


class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator
{
public:

   int32_t m_nCP; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CParticleCollectionFloatInput m_flDistance; // 0x1F8 - 0x330
   CParticleCollectionVecInput m_vecScale; // 0x330 - 0x8F8
   ParticleAttributeIndex_t m_nDistSqrAttr; // 0x8F8 - 0x8FC

}; // size - 0x900


class C_OP_MovementMaintainOffset : public CParticleFunctionOperator
{
public:

   Vector m_vecOffset; // 0x1F0 - 0x1FC
   int32_t m_nCP; // 0x1FC - 0x200
   bool m_bRadiusScale; // 0x200 - 0x201

}; // size - 0x210


class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nSnapshotControlPointNumber; // 0x1F4 - 0x1F8
   bool m_bSetNormal; // 0x1F8 - 0x1F9
   bool m_bSetRadius; // 0x1F9 - 0x1FA
   unsigned char pad_1FA[0x6] // 0x1FA - 0x200
   CPerParticleFloatInput m_flInterpolation; // 0x200 - 0x338
   CPerParticleFloatInput m_flTValue; // 0x338 - 0x470

}; // size - 0x470


class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator
{
public:

   CPerParticleFloatInput m_flOffset; // 0x1F0 - 0x328
   float m_flMaxTraceLength; // 0x328 - 0x32C
   float m_flTolerance; // 0x32C - 0x330
   float m_flTraceOffset; // 0x330 - 0x334
   float m_flLerpRate; // 0x334 - 0x338
   char m_CollisionGroupName[128]; // 0x338 - 0x3B8
   ParticleTraceSet_t m_nTraceSet; // 0x3B8 - 0x3BC
   int32_t m_nRefCP1; // 0x3BC - 0x3C0
   int32_t m_nRefCP2; // 0x3C0 - 0x3C4
   int32_t m_nLerpCP; // 0x3C4 - 0x3C8
   unsigned char pad_3C8[0x8] // 0x3C8 - 0x3D0
   ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3D0 - 0x3D4
   bool m_bIncludeShotHull; // 0x3D4 - 0x3D5
   bool m_bIncludeWater; // 0x3D5 - 0x3D6
   unsigned char pad_3D6[0x2] // 0x3D6 - 0x3D8
   bool m_bSetNormal; // 0x3D8 - 0x3D9
   bool m_bScaleOffset; // 0x3D9 - 0x3DA
   unsigned char pad_3DA[0x2] // 0x3DA - 0x3DC
   int32_t m_nPreserveOffsetCP; // 0x3DC - 0x3E0
   int32_t m_nIgnoreCP; // 0x3E0 - 0x3E4

}; // size - 0x3F0


class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nScaleControlPoint; // 0x1F4 - 0x1F8
   int32_t m_nScaleCPField; // 0x1F8 - 0x1FC
   ParticleAttributeIndex_t m_nFieldInput; // 0x1FC - 0x200
   ParticleAttributeIndex_t m_nFieldOutput; // 0x200 - 0x204
   bool m_bOffsetLocal; // 0x204 - 0x205

}; // size - 0x210


class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:

   CParticleCollectionVecInput m_vecRotAxis; // 0x1F0 - 0x7B8
   CParticleCollectionFloatInput m_flRotRate; // 0x7B8 - 0x8F0
   CParticleTransformInput m_TransformInput; // 0x8F0 - 0x940
   bool m_bLocalSpace; // 0x940 - 0x941

}; // size - 0x950


class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator
{
public:

   int32_t m_nSnapshotControlPointNumber; // 0x1F0 - 0x1F4
   int32_t m_nControlPointNumber; // 0x1F4 - 0x1F8
   bool m_bRandom; // 0x1F8 - 0x1F9
   unsigned char pad_1F9[0x3] // 0x1F9 - 0x1FC
   int32_t m_nRandomSeed; // 0x1FC - 0x200
   bool m_bSetNormal; // 0x200 - 0x201
   bool m_bSetRadius; // 0x201 - 0x202
   unsigned char pad_202[0x6] // 0x202 - 0x208
   CParticleCollectionFloatInput m_flIncrement; // 0x208 - 0x340
   CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x340 - 0x478
   CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x478 - 0x5B0
   CPerParticleFloatInput m_flInterpolation; // 0x5B0 - 0x6E8

}; // size - 0x6F0


class C_OP_Noise : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flOutputMin; // 0x1F4 - 0x1F8
   float m_flOutputMax; // 0x1F8 - 0x1FC
   float m_fl4NoiseScale; // 0x1FC - 0x200
   bool m_bAdditive; // 0x200 - 0x201
   unsigned char pad_201[0x3] // 0x201 - 0x204
   float m_flNoiseAnimationTimeScale; // 0x204 - 0x208

}; // size - 0x210


class C_OP_NoiseEmitter : public CParticleFunctionEmitter
{
public:

   float m_flEmissionDuration; // 0x1F0 - 0x1F4
   float m_flStartTime; // 0x1F4 - 0x1F8
   float m_flEmissionScale; // 0x1F8 - 0x1FC
   int32_t m_nScaleControlPoint; // 0x1FC - 0x200
   int32_t m_nScaleControlPointField; // 0x200 - 0x204
   int32_t m_nWorldNoisePoint; // 0x204 - 0x208
   bool m_bAbsVal; // 0x208 - 0x209
   bool m_bAbsValInv; // 0x209 - 0x20A
   unsigned char pad_20A[0x2] // 0x20A - 0x20C
   float m_flOffset; // 0x20C - 0x210
   float m_flOutputMin; // 0x210 - 0x214
   float m_flOutputMax; // 0x214 - 0x218
   float m_flNoiseScale; // 0x218 - 0x21C
   float m_flWorldNoiseScale; // 0x21C - 0x220
   Vector m_vecOffsetLoc; // 0x220 - 0x22C
   float m_flWorldTimeScale; // 0x22C - 0x230

}; // size - 0x230


class C_OP_NormalLock : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4

}; // size - 0x200


class C_OP_NormalizeVector : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flScale; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_Orient2DRelToCP : public CParticleFunctionOperator
{
public:

   float m_flRotOffset; // 0x1F0 - 0x1F4
   float m_flSpinStrength; // 0x1F4 - 0x1F8
   int32_t m_nCP; // 0x1F8 - 0x1FC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1FC - 0x200

}; // size - 0x200


class C_OP_OrientTo2dDirection : public CParticleFunctionOperator
{
public:

   float m_flRotOffset; // 0x1F0 - 0x1F4
   float m_flSpinStrength; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_OP_OscillateScalar : public CParticleFunctionOperator
{
public:

   float m_RateMin; // 0x1F0 - 0x1F4
   float m_RateMax; // 0x1F4 - 0x1F8
   float m_FrequencyMin; // 0x1F8 - 0x1FC
   float m_FrequencyMax; // 0x1FC - 0x200
   ParticleAttributeIndex_t m_nField; // 0x200 - 0x204
   bool m_bProportional; // 0x204 - 0x205
   bool m_bProportionalOp; // 0x205 - 0x206
   unsigned char pad_206[0x2] // 0x206 - 0x208
   float m_flStartTime_min; // 0x208 - 0x20C
   float m_flStartTime_max; // 0x20C - 0x210
   float m_flEndTime_min; // 0x210 - 0x214
   float m_flEndTime_max; // 0x214 - 0x218
   float m_flOscMult; // 0x218 - 0x21C
   float m_flOscAdd; // 0x21C - 0x220

}; // size - 0x220


class C_OP_OscillateScalarSimple : public CParticleFunctionOperator
{
public:

   float m_Rate; // 0x1F0 - 0x1F4
   float m_Frequency; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nField; // 0x1F8 - 0x1FC
   float m_flOscMult; // 0x1FC - 0x200
   float m_flOscAdd; // 0x200 - 0x204

}; // size - 0x230


class C_OP_OscillateVector : public CParticleFunctionOperator
{
public:

   Vector m_RateMin; // 0x1F0 - 0x1FC
   Vector m_RateMax; // 0x1FC - 0x208
   Vector m_FrequencyMin; // 0x208 - 0x214
   Vector m_FrequencyMax; // 0x214 - 0x220
   ParticleAttributeIndex_t m_nField; // 0x220 - 0x224
   bool m_bProportional; // 0x224 - 0x225
   bool m_bProportionalOp; // 0x225 - 0x226
   bool m_bOffset; // 0x226 - 0x227
   unsigned char pad_227[0x1] // 0x227 - 0x228
   float m_flStartTime_min; // 0x228 - 0x22C
   float m_flStartTime_max; // 0x22C - 0x230
   float m_flEndTime_min; // 0x230 - 0x234
   float m_flEndTime_max; // 0x234 - 0x238
   CPerParticleFloatInput m_flOscMult; // 0x238 - 0x370
   CPerParticleFloatInput m_flOscAdd; // 0x370 - 0x4A8
   CPerParticleFloatInput m_flRateScale; // 0x4A8 - 0x5E0

}; // size - 0x5E0


class C_OP_OscillateVectorSimple : public CParticleFunctionOperator
{
public:

   Vector m_Rate; // 0x1F0 - 0x1FC
   Vector m_Frequency; // 0x1FC - 0x208
   ParticleAttributeIndex_t m_nField; // 0x208 - 0x20C
   float m_flOscMult; // 0x20C - 0x210
   float m_flOscAdd; // 0x210 - 0x214
   bool m_bOffset; // 0x214 - 0x215

}; // size - 0x220


class C_OP_ParentVortices : public CParticleFunctionForce
{
public:

   float m_flForceScale; // 0x1F0 - 0x1F4
   Vector m_vecTwistAxis; // 0x1F4 - 0x200
   bool m_bFlipBasedOnYaw; // 0x200 - 0x201

}; // size - 0x210


class C_OP_PerParticleForce : public CParticleFunctionForce
{
public:

   CPerParticleFloatInput m_flForceScale; // 0x1F0 - 0x328
   CPerParticleVecInput m_vForce; // 0x328 - 0x8F0
   int32_t m_nCP; // 0x8F0 - 0x8F4

}; // size - 0x900


class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flInputMin; // 0x1F4 - 0x1F8
   float m_flInputMax; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x4] // 0x1FC - 0x200
   CParticleTransformInput m_TransformStart; // 0x200 - 0x250
   CParticleTransformInput m_TransformEnd; // 0x250 - 0x2A0
   int32_t m_nOutputStartCP; // 0x2A0 - 0x2A4
   int32_t m_nOutputStartField; // 0x2A4 - 0x2A8
   int32_t m_nOutputEndCP; // 0x2A8 - 0x2AC
   int32_t m_nOutputEndField; // 0x2AC - 0x2B0
   ParticleSetMethod_t m_nSetMethod; // 0x2B0 - 0x2B4
   bool m_bActiveRange; // 0x2B4 - 0x2B5
   bool m_bRadialCheck; // 0x2B5 - 0x2B6

}; // size - 0x2C0


class C_OP_PercentageBetweenTransforms : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flInputMin; // 0x1F4 - 0x1F8
   float m_flInputMax; // 0x1F8 - 0x1FC
   float m_flOutputMin; // 0x1FC - 0x200
   float m_flOutputMax; // 0x200 - 0x204
   unsigned char pad_204[0x4] // 0x204 - 0x208
   CParticleTransformInput m_TransformStart; // 0x208 - 0x258
   CParticleTransformInput m_TransformEnd; // 0x258 - 0x2A8
   ParticleSetMethod_t m_nSetMethod; // 0x2A8 - 0x2AC
   bool m_bActiveRange; // 0x2AC - 0x2AD
   bool m_bRadialCheck; // 0x2AD - 0x2AE

}; // size - 0x2B0


class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flInputMin; // 0x1F4 - 0x1F8
   float m_flInputMax; // 0x1F8 - 0x1FC
   Vector m_vecOutputMin; // 0x1FC - 0x208
   Vector m_vecOutputMax; // 0x208 - 0x214
   unsigned char pad_214[0x4] // 0x214 - 0x218
   CParticleTransformInput m_TransformStart; // 0x218 - 0x268
   CParticleTransformInput m_TransformEnd; // 0x268 - 0x2B8
   ParticleSetMethod_t m_nSetMethod; // 0x2B8 - 0x2BC
   bool m_bActiveRange; // 0x2BC - 0x2BD
   bool m_bRadialCheck; // 0x2BD - 0x2BE

}; // size - 0x2C0


class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CParticleCollectionVecInput m_vecOffset; // 0x1F8 - 0x7C0
   bool m_bOffsetLocal; // 0x7C0 - 0x7C1
   unsigned char pad_7C1[0x3] // 0x7C1 - 0x7C4
   ParticleSelection_t m_nParticleSelection; // 0x7C4 - 0x7C8
   CParticleCollectionFloatInput m_nParticleNumber; // 0x7C8 - 0x900
   ParticlePinDistance_t m_nPinBreakType; // 0x900 - 0x904
   unsigned char pad_904[0x4] // 0x904 - 0x908
   CParticleCollectionFloatInput m_flBreakDistance; // 0x908 - 0xA40
   CParticleCollectionFloatInput m_flBreakSpeed; // 0xA40 - 0xB78
   CParticleCollectionFloatInput m_flAge; // 0xB78 - 0xCB0
   int32_t m_nBreakControlPointNumber; // 0xCB0 - 0xCB4
   int32_t m_nBreakControlPointNumber2; // 0xCB4 - 0xCB8
   CPerParticleFloatInput m_flInterpolation; // 0xCB8 - 0xDF0

}; // size - 0xDF0


class C_OP_PlanarConstraint : public CParticleFunctionConstraint
{
public:

   Vector m_PointOnPlane; // 0x1F0 - 0x1FC
   Vector m_PlaneNormal; // 0x1FC - 0x208
   int32_t m_nControlPointNumber; // 0x208 - 0x20C
   bool m_bGlobalOrigin; // 0x20C - 0x20D
   bool m_bGlobalNormal; // 0x20D - 0x20E
   unsigned char pad_20E[0x2] // 0x20E - 0x210
   CPerParticleFloatInput m_flRadiusScale; // 0x210 - 0x348
   CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x348 - 0x480

}; // size - 0x480


class C_OP_PlaneCull : public CParticleFunctionOperator
{
public:

   int32_t m_nPlaneControlPoint; // 0x1F0 - 0x1F4
   Vector m_vecPlaneDirection; // 0x1F4 - 0x200
   bool m_bLocalSpace; // 0x200 - 0x201
   unsigned char pad_201[0x3] // 0x201 - 0x204
   float m_flPlaneOffset; // 0x204 - 0x208

}; // size - 0x210


class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission
{
public:

   bool m_bFireOnEmissionEnd; // 0x200 - 0x201
   bool m_bIncludeChildren; // 0x201 - 0x202

}; // size - 0x210


class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flInterpolation; // 0x1F8 - 0x330

}; // size - 0x330


class C_OP_PositionLock : public CParticleFunctionOperator
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x240
   float m_flStartTime_min; // 0x240 - 0x244
   float m_flStartTime_max; // 0x244 - 0x248
   float m_flStartTime_exp; // 0x248 - 0x24C
   float m_flEndTime_min; // 0x24C - 0x250
   float m_flEndTime_max; // 0x250 - 0x254
   float m_flEndTime_exp; // 0x254 - 0x258
   float m_flRange; // 0x258 - 0x25C
   unsigned char pad_25C[0x4] // 0x25C - 0x260
   CParticleCollectionFloatInput m_flRangeBias; // 0x260 - 0x398
   float m_flJumpThreshold; // 0x398 - 0x39C
   float m_flPrevPosScale; // 0x39C - 0x3A0
   bool m_bLockRot; // 0x3A0 - 0x3A1
   unsigned char pad_3A1[0x7] // 0x3A1 - 0x3A8
   CParticleCollectionVecInput m_vecScale; // 0x3A8 - 0x970
   ParticleAttributeIndex_t m_nFieldOutput; // 0x970 - 0x974
   ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x974 - 0x978

}; // size - 0x980


class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission
{
public:

   CParticleCollectionFloatInput m_flInputValue; // 0x200 - 0x338
   int32_t m_nCPOutput; // 0x338 - 0x33C
   int32_t m_nOutVectorField; // 0x33C - 0x340
   CParticleCollectionFloatInput m_flQuantizeValue; // 0x340 - 0x478

}; // size - 0x480


class C_OP_QuantizeFloat : public CParticleFunctionOperator
{
public:

   CPerParticleFloatInput m_InputValue; // 0x1F0 - 0x328
   ParticleAttributeIndex_t m_nOutputField; // 0x328 - 0x32C

}; // size - 0x350


class C_OP_RadiusDecay : public CParticleFunctionOperator
{
public:

   float m_flMinRadius; // 0x1F0 - 0x1F4

}; // size - 0x200


class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission
{
public:

   int32_t m_nOutControlPointNumber; // 0x200 - 0x204
   Vector m_vecRateMin; // 0x204 - 0x210
   Vector m_vecRateMax; // 0x210 - 0x21C

}; // size - 0x220


class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:

   float m_RateMin; // 0x1F0 - 0x1F4
   float m_RateMax; // 0x1F4 - 0x1F8
   float m_flStartTime_min; // 0x1F8 - 0x1FC
   float m_flStartTime_max; // 0x1FC - 0x200
   float m_flEndTime_min; // 0x200 - 0x204
   float m_flEndTime_max; // 0x204 - 0x208
   unsigned char pad_208[0x28] // 0x208 - 0x230
   ParticleAttributeIndex_t m_nField; // 0x230 - 0x234
   bool m_bProportionalOp; // 0x234 - 0x235

}; // size - 0x240


class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator
{
public:

   float m_Rate; // 0x1F0 - 0x1F4
   float m_flStartTime; // 0x1F4 - 0x1F8
   float m_flEndTime; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x24] // 0x1FC - 0x220
   ParticleAttributeIndex_t m_nField; // 0x220 - 0x224

}; // size - 0x230


class C_OP_RampScalarSpline : public CParticleFunctionOperator
{
public:

   float m_RateMin; // 0x1F0 - 0x1F4
   float m_RateMax; // 0x1F4 - 0x1F8
   float m_flStartTime_min; // 0x1F8 - 0x1FC
   float m_flStartTime_max; // 0x1FC - 0x200
   float m_flEndTime_min; // 0x200 - 0x204
   float m_flEndTime_max; // 0x204 - 0x208
   float m_flBias; // 0x208 - 0x20C
   unsigned char pad_20C[0x24] // 0x20C - 0x230
   ParticleAttributeIndex_t m_nField; // 0x230 - 0x234
   bool m_bProportionalOp; // 0x234 - 0x235
   bool m_bEaseOut; // 0x235 - 0x236

}; // size - 0x240


class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator
{
public:

   float m_Rate; // 0x1F0 - 0x1F4
   float m_flStartTime; // 0x1F4 - 0x1F8
   float m_flEndTime; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x24] // 0x1FC - 0x220
   ParticleAttributeIndex_t m_nField; // 0x220 - 0x224
   bool m_bEaseOut; // 0x224 - 0x225

}; // size - 0x230


class C_OP_RandomForce : public CParticleFunctionForce
{
public:

   Vector m_MinForce; // 0x1F0 - 0x1FC
   Vector m_MaxForce; // 0x1FC - 0x208

}; // size - 0x210


class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   int32_t m_nIncrement; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x4] // 0x1FC - 0x200
   CPerParticleFloatInput m_DistanceCheck; // 0x200 - 0x338
   CPerParticleFloatInput m_flInterpolation; // 0x338 - 0x470

}; // size - 0x470


class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flOutputMin; // 0x1F4 - 0x1F8
   float m_flOutputMax; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nInControlPointNumber; // 0x200 - 0x204
   int32_t m_nOutControlPointNumber; // 0x204 - 0x208
   int32_t m_nField; // 0x208 - 0x20C
   unsigned char pad_20C[0x4] // 0x20C - 0x210
   CParticleCollectionFloatInput m_flInputMin; // 0x210 - 0x348
   CParticleCollectionFloatInput m_flInputMax; // 0x348 - 0x480
   CParticleCollectionFloatInput m_flOutputMin; // 0x480 - 0x5B8
   CParticleCollectionFloatInput m_flOutputMax; // 0x5B8 - 0x6F0
   int32_t m_nHeightControlPointNumber; // 0x6F0 - 0x6F4
   unsigned char pad_6F4[0x4] // 0x6F4 - 0x6F8
   CParticleCollectionVecInput m_vecComparisonVelocity; // 0x6F8 - 0xCC0
   char m_HitboxSetName[128]; // 0xCC0 - 0xD40

}; // size - 0xD40


class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nOutControlPointNumber; // 0x200 - 0x204
   int32_t m_nOutVectorField; // 0x204 - 0x208
   ParticleAttributeIndex_t m_nField; // 0x208 - 0x20C
   float m_flInputMin; // 0x20C - 0x210
   float m_flInputMax; // 0x210 - 0x214
   float m_flOutputMin; // 0x214 - 0x218
   float m_flOutputMax; // 0x218 - 0x21C

}; // size - 0x220


class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nOutControlPointNumber; // 0x200 - 0x204
   float m_flInputMin; // 0x204 - 0x208
   float m_flInputMax; // 0x208 - 0x20C
   float m_flOutputMin; // 0x20C - 0x210
   float m_flOutputMax; // 0x210 - 0x214

}; // size - 0x220


class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPoint; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flScale; // 0x1F8 - 0x1FC
   bool m_bNormalize; // 0x1FC - 0x1FD

}; // size - 0x200


class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nInputControlPoint; // 0x200 - 0x204
   int32_t m_nOutputControlPoint; // 0x204 - 0x208
   int32_t m_nInputField; // 0x208 - 0x20C
   int32_t m_nOutputField; // 0x20C - 0x210
   float m_flInputMin; // 0x210 - 0x214
   float m_flInputMax; // 0x214 - 0x218
   float m_flOutputMin; // 0x218 - 0x21C
   float m_flOutputMax; // 0x21C - 0x220
   bool m_bDerivative; // 0x220 - 0x221
   unsigned char pad_221[0x3] // 0x221 - 0x224
   float m_flInterpRate; // 0x224 - 0x228

}; // size - 0x230


class C_OP_RemapCPtoScalar : public CParticleFunctionOperator
{
public:

   int32_t m_nCPInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   int32_t m_nField; // 0x1F8 - 0x1FC
   float m_flInputMin; // 0x1FC - 0x200
   float m_flInputMax; // 0x200 - 0x204
   float m_flOutputMin; // 0x204 - 0x208
   float m_flOutputMax; // 0x208 - 0x20C
   float m_flStartTime; // 0x20C - 0x210
   float m_flEndTime; // 0x210 - 0x214
   float m_flInterpRate; // 0x214 - 0x218
   ParticleSetMethod_t m_nSetMethod; // 0x218 - 0x21C

}; // size - 0x220


class C_OP_RemapCPtoVector : public CParticleFunctionOperator
{
public:

   int32_t m_nCPInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   int32_t m_nLocalSpaceCP; // 0x1F8 - 0x1FC
   Vector m_vInputMin; // 0x1FC - 0x208
   Vector m_vInputMax; // 0x208 - 0x214
   Vector m_vOutputMin; // 0x214 - 0x220
   Vector m_vOutputMax; // 0x220 - 0x22C
   float m_flStartTime; // 0x22C - 0x230
   float m_flEndTime; // 0x230 - 0x234
   float m_flInterpRate; // 0x234 - 0x238
   ParticleSetMethod_t m_nSetMethod; // 0x238 - 0x23C
   bool m_bOffset; // 0x23C - 0x23D
   bool m_bAccelerate; // 0x23D - 0x23E

}; // size - 0x240


class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flScale; // 0x1F4 - 0x1F8
   int32_t m_nControlPointNumber; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator
{
public:

   int32_t m_nCP; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flOffsetRot; // 0x1F8 - 0x1FC
   int32_t m_nComponent; // 0x1FC - 0x200

}; // size - 0x200


class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator
{
public:

   CPerParticleVecInput m_InputVec1; // 0x1F0 - 0x7B8
   CPerParticleVecInput m_InputVec2; // 0x7B8 - 0xD80
   ParticleAttributeIndex_t m_nFieldOutput; // 0xD80 - 0xD84
   bool m_bNormalize; // 0xD84 - 0xD85

}; // size - 0xD90


class C_OP_RemapDensityGradientToVectorAttribute : public CParticleFunctionOperator
{
public:

   float m_flRadiusScale; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_RemapDensityToVector : public CParticleFunctionOperator
{
public:

   float m_flRadiusScale; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flDensityMin; // 0x1F8 - 0x1FC
   float m_flDensityMax; // 0x1FC - 0x200
   Vector m_vecOutputMin; // 0x200 - 0x20C
   Vector m_vecOutputMax; // 0x20C - 0x218

}; // size - 0x220


class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator
{
public:

   int32_t m_nCP; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flScale; // 0x1F8 - 0x1FC
   float m_flOffsetRot; // 0x1FC - 0x200
   Vector m_vecOffsetAxis; // 0x200 - 0x20C
   bool m_bNormalize; // 0x20C - 0x20D
   unsigned char pad_20D[0x3] // 0x20D - 0x210
   ParticleAttributeIndex_t m_nFieldStrength; // 0x210 - 0x214

}; // size - 0x220


class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x210 - 0x214
   float m_flMinOutputValue; // 0x214 - 0x218
   float m_flMaxOutputValue; // 0x218 - 0x21C

}; // size - 0x220


class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x210 - 0x214
   Vector m_vMinOutputValue; // 0x214 - 0x220
   Vector m_vMaxOutputValue; // 0x220 - 0x22C

}; // size - 0x230


class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nInputCP1; // 0x200 - 0x204
   int32_t m_nInputCP2; // 0x204 - 0x208
   int32_t m_nOutputCP; // 0x208 - 0x20C
   int32_t m_nOutVectorField; // 0x20C - 0x210
   CParticleCollectionFloatInput m_flInputMin; // 0x210 - 0x348
   CParticleCollectionFloatInput m_flInputMax; // 0x348 - 0x480
   CParticleCollectionFloatInput m_flOutputMin; // 0x480 - 0x5B8
   CParticleCollectionFloatInput m_flOutputMax; // 0x5B8 - 0x6F0

}; // size - 0x6F0


class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator
{
public:

   int32_t m_nInputCP1; // 0x1F0 - 0x1F4
   int32_t m_nInputCP2; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F8 - 0x1FC
   float m_flInputMin; // 0x1FC - 0x200
   float m_flInputMax; // 0x200 - 0x204
   float m_flOutputMin; // 0x204 - 0x208
   float m_flOutputMax; // 0x208 - 0x20C
   bool m_bUseParticleVelocity; // 0x20C - 0x20D
   unsigned char pad_20D[0x3] // 0x20D - 0x210
   ParticleSetMethod_t m_nSetMethod; // 0x210 - 0x214
   bool m_bActiveRange; // 0x214 - 0x215
   bool m_bUseParticleNormal; // 0x215 - 0x216

}; // size - 0x220


class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCP; // 0x200 - 0x204
   int32_t m_nCPOutput; // 0x204 - 0x208
   CParticleCollectionVecInput m_vecScale; // 0x208 - 0x7D0
   bool m_bSetMagnitude; // 0x7D0 - 0x7D1
   unsigned char pad_7D1[0x3] // 0x7D1 - 0x7D4
   int32_t m_nOutVectorField; // 0x7D4 - 0x7D8

}; // size - 0x7E0


class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nInControlPointNumber; // 0x200 - 0x204
   int32_t m_nOutControlPointNumber; // 0x204 - 0x208
   int32_t m_nField; // 0x208 - 0x20C
   float m_flInputMin; // 0x20C - 0x210
   float m_flInputMax; // 0x210 - 0x214
   float m_flOutputMin; // 0x214 - 0x218
   float m_flOutputMax; // 0x218 - 0x21C

}; // size - 0x220


class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:


}; // size - 0x250


class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:


}; // size - 0x250


class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:


}; // size - 0x250


class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:


}; // size - 0x250


class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:


}; // size - 0x250


class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:


}; // size - 0x250


class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   int32_t m_nInputMin; // 0x1F4 - 0x1F8
   int32_t m_nInputMax; // 0x1F8 - 0x1FC
   float m_flOutputMin; // 0x1FC - 0x200
   float m_flOutputMax; // 0x200 - 0x204
   bool m_bBackwards; // 0x204 - 0x205
   unsigned char pad_205[0x3] // 0x205 - 0x208
   ParticleSetMethod_t m_nSetMethod; // 0x208 - 0x20C

}; // size - 0x210


class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CParticleCollectionFloatInput m_nInputMin; // 0x1F8 - 0x330
   CParticleCollectionFloatInput m_nInputMax; // 0x330 - 0x468
   CParticleCollectionFloatInput m_flOutputMin; // 0x468 - 0x5A0
   CParticleCollectionFloatInput m_flOutputMax; // 0x5A0 - 0x6D8
   bool m_bActiveRange; // 0x6D8 - 0x6D9
   unsigned char pad_6D9[0x3] // 0x6D9 - 0x6DC
   ParticleSetMethod_t m_nSetMethod; // 0x6DC - 0x6E0

}; // size - 0x6E0


class C_OP_RemapScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flInputMin; // 0x1F8 - 0x1FC
   float m_flInputMax; // 0x1FC - 0x200
   float m_flOutputMin; // 0x200 - 0x204
   float m_flOutputMax; // 0x204 - 0x208

}; // size - 0x210


class C_OP_RemapScalarEndCap : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flInputMin; // 0x1F8 - 0x1FC
   float m_flInputMax; // 0x1FC - 0x200
   float m_flOutputMin; // 0x200 - 0x204
   float m_flOutputMax; // 0x204 - 0x208

}; // size - 0x210


class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator
{
public:

   bool m_bProportional; // 0x1F0 - 0x1F1
   unsigned char pad_1F1[0x3] // 0x1F1 - 0x1F4
   ParticleAttributeIndex_t m_nFieldInput; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F8 - 0x1FC
   float m_flInputMin; // 0x1FC - 0x200
   float m_flInputMax; // 0x200 - 0x204
   float m_flOutputMin; // 0x204 - 0x208
   float m_flOutputMax; // 0x208 - 0x20C
   float m_flRemapTime; // 0x20C - 0x210

}; // size - 0x210


class C_OP_RemapSpeed : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flInputMin; // 0x1F4 - 0x1F8
   float m_flInputMax; // 0x1F8 - 0x1FC
   float m_flOutputMin; // 0x1FC - 0x200
   float m_flOutputMax; // 0x200 - 0x204
   ParticleSetMethod_t m_nSetMethod; // 0x204 - 0x208
   bool m_bIgnoreDelta; // 0x208 - 0x209

}; // size - 0x210


class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nInControlPointNumber; // 0x200 - 0x204
   int32_t m_nOutControlPointNumber; // 0x204 - 0x208
   int32_t m_nField; // 0x208 - 0x20C
   float m_flInputMin; // 0x20C - 0x210
   float m_flInputMax; // 0x210 - 0x214
   float m_flOutputMin; // 0x214 - 0x218
   float m_flOutputMax; // 0x218 - 0x21C
   bool m_bUseDeltaV; // 0x21C - 0x21D

}; // size - 0x220


class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x240
   Vector m_vecRotation; // 0x240 - 0x24C
   bool m_bUseQuat; // 0x24C - 0x24D
   bool m_bWriteNormal; // 0x24D - 0x24E

}; // size - 0x250


class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x240
   ParticleAttributeIndex_t m_nFieldOutput; // 0x240 - 0x244
   float m_flRotOffset; // 0x244 - 0x248
   float m_flSpinStrength; // 0x248 - 0x24C

}; // size - 0x250


class C_OP_RemapTransformToVelocity : public CParticleFunctionOperator
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x240

}; // size - 0x240


class C_OP_RemapTransformVisibilityToScalar : public CParticleFunctionOperator
{
public:

   ParticleSetMethod_t m_nSetMethod; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CParticleTransformInput m_TransformInput; // 0x1F8 - 0x248
   ParticleAttributeIndex_t m_nFieldOutput; // 0x248 - 0x24C
   float m_flInputMin; // 0x24C - 0x250
   float m_flInputMax; // 0x250 - 0x254
   float m_flOutputMin; // 0x254 - 0x258
   float m_flOutputMax; // 0x258 - 0x25C
   float m_flRadius; // 0x25C - 0x260

}; // size - 0x260


class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator
{
public:

   ParticleSetMethod_t m_nSetMethod; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CParticleTransformInput m_TransformInput; // 0x1F8 - 0x248
   ParticleAttributeIndex_t m_nFieldOutput; // 0x248 - 0x24C
   float m_flInputMin; // 0x24C - 0x250
   float m_flInputMax; // 0x250 - 0x254
   Vector m_vecOutputMin; // 0x254 - 0x260
   Vector m_vecOutputMax; // 0x260 - 0x26C
   float m_flRadius; // 0x26C - 0x270

}; // size - 0x270


class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   int32_t m_nComponent; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_OP_RemapVectortoCP : public CParticleFunctionOperator
{
public:

   int32_t m_nOutControlPointNumber; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldInput; // 0x1F4 - 0x1F8
   int32_t m_nParticleNumber; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_OP_RemapVelocityToVector : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   float m_flScale; // 0x1F4 - 0x1F8
   bool m_bNormalize; // 0x1F8 - 0x1F9

}; // size - 0x200


class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   float m_flInputMin; // 0x1F8 - 0x1FC
   float m_flInputMax; // 0x1FC - 0x200
   float m_flOutputMin; // 0x200 - 0x204
   float m_flOutputMax; // 0x204 - 0x208
   float m_flRadiusScale; // 0x208 - 0x20C

}; // size - 0x210


class C_OP_RenderAsModels : public CParticleFunctionRenderer
{
public:

   CUtlVector< ModelReference_t > m_ModelList; // 0x230 - 0x248
   unsigned char pad_248[0x4] // 0x248 - 0x24C
   float m_flModelScale; // 0x24C - 0x250
   bool m_bFitToModelSize; // 0x250 - 0x251
   bool m_bNonUniformScaling; // 0x251 - 0x252
   unsigned char pad_252[0x2] // 0x252 - 0x254
   ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x254 - 0x258
   ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x258 - 0x25C
   ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x25C - 0x260
   int32_t m_nSizeCullBloat; // 0x260 - 0x264

}; // size - 0x270


class C_OP_RenderBlobs : public CParticleFunctionRenderer
{
public:

   CParticleCollectionFloatInput m_cubeWidth; // 0x230 - 0x368
   CParticleCollectionFloatInput m_cutoffRadius; // 0x368 - 0x4A0
   CParticleCollectionFloatInput m_renderRadius; // 0x4A0 - 0x5D8
   int32_t m_nScaleCP; // 0x5D8 - 0x5DC
   unsigned char pad_5DC[0x4] // 0x5DC - 0x5E0
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x5E0 - 0x5E8

}; // size - 0x5F0


class C_OP_RenderCables : public CParticleFunctionRenderer
{
public:

   CParticleCollectionFloatInput m_flRadiusScale; // 0x230 - 0x368
   CParticleCollectionFloatInput m_flAlphaScale; // 0x368 - 0x4A0
   CParticleCollectionVecInput m_vecColorScale; // 0x4A0 - 0xA68
   ParticleColorBlendType_t m_nColorBlendType; // 0xA68 - 0xA6C
   unsigned char pad_A6C[0x4] // 0xA6C - 0xA70
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xA70 - 0xA78
   TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xA78 - 0xA7C
   unsigned char pad_A7C[0x4] // 0xA7C - 0xA80
   CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xA80 - 0xBB8
   CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xBB8 - 0xCF0
   CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xCF0 - 0xE28
   CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xE28 - 0xF60
   CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0xF60 - 0x1098
   CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x1098 - 0x11D0
   bool m_bDrawCableCaps; // 0x11D0 - 0x11D1
   unsigned char pad_11D1[0x3] // 0x11D1 - 0x11D4
   float m_flCapRoundness; // 0x11D4 - 0x11D8
   float m_flCapOffsetAmount; // 0x11D8 - 0x11DC
   float m_flTessScale; // 0x11DC - 0x11E0
   int32_t m_nMinTesselation; // 0x11E0 - 0x11E4
   int32_t m_nMaxTesselation; // 0x11E4 - 0x11E8
   int32_t m_nRoundness; // 0x11E8 - 0x11EC
   unsigned char pad_11EC[0x4] // 0x11EC - 0x11F0
   CParticleTransformInput m_LightingTransform; // 0x11F0 - 0x1240
   CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x1240 - 0x1258
   unsigned char pad_1258[0x18] // 0x1258 - 0x1270
   CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x1270 - 0x1288

}; // size - 0x12A0


class C_OP_RenderClothForce : public CParticleFunctionRenderer
{
public:


}; // size - 0x230


class C_OP_RenderDeferredLight : public CParticleFunctionRenderer
{
public:

   bool m_bUseAlphaTestWindow; // 0x230 - 0x231
   bool m_bUseTexture; // 0x231 - 0x232
   unsigned char pad_232[0x2] // 0x232 - 0x234
   float m_flRadiusScale; // 0x234 - 0x238
   float m_flAlphaScale; // 0x238 - 0x23C
   ParticleAttributeIndex_t m_nAlpha2Field; // 0x23C - 0x240
   CParticleCollectionVecInput m_vecColorScale; // 0x240 - 0x808
   ParticleColorBlendType_t m_nColorBlendType; // 0x808 - 0x80C
   float m_flLightDistance; // 0x80C - 0x810
   float m_flStartFalloff; // 0x810 - 0x814
   float m_flDistanceFalloff; // 0x814 - 0x818
   float m_flSpotFoV; // 0x818 - 0x81C
   ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x81C - 0x820
   ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x820 - 0x824
   ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x824 - 0x828
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x828 - 0x830
   int32_t m_nHSVShiftControlPoint; // 0x830 - 0x834

}; // size - 0x840


class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer
{
public:

   float m_flFlattenStrength; // 0x230 - 0x234
   ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x234 - 0x238
   float m_flRadiusScale; // 0x238 - 0x23C

}; // size - 0x240


class C_OP_RenderLights : public C_OP_RenderPoints
{
public:

   float m_flAnimationRate; // 0x240 - 0x244
   AnimationType_t m_nAnimationType; // 0x244 - 0x248
   bool m_bAnimateInFPS; // 0x248 - 0x249
   unsigned char pad_249[0x3] // 0x249 - 0x24C
   float m_flMinSize; // 0x24C - 0x250
   float m_flMaxSize; // 0x250 - 0x254
   float m_flStartFadeSize; // 0x254 - 0x258
   float m_flEndFadeSize; // 0x258 - 0x25C

}; // size - 0x260


class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer
{
public:

   int32_t m_nMaterialControlPoint; // 0x230 - 0x234
   MaterialProxyType_t m_nProxyType; // 0x234 - 0x238
   CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x238 - 0x250
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x250 - 0x258
   CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x258 - 0x390
   CParticleCollectionVecInput m_vecColorScale; // 0x390 - 0x958
   CPerParticleFloatInput m_flAlpha; // 0x958 - 0xA90
   ParticleColorBlendType_t m_nColorBlendType; // 0xA90 - 0xA94

}; // size - 0xAB0


class C_OP_RenderModels : public CParticleFunctionRenderer
{
public:

   bool m_bOnlyRenderInEffectsBloomPass; // 0x230 - 0x231
   bool m_bOnlyRenderInEffectsWaterPass; // 0x231 - 0x232
   bool m_bUseMixedResolutionRendering; // 0x232 - 0x233
   bool m_bOnlyRenderInEffecsGameOverlay; // 0x233 - 0x234
   unsigned char pad_234[0x4] // 0x234 - 0x238
   CUtlVector< ModelReference_t > m_ModelList; // 0x238 - 0x250
   unsigned char pad_250[0x4] // 0x250 - 0x254
   ParticleAttributeIndex_t m_nBodyGroupField; // 0x254 - 0x258
   ParticleAttributeIndex_t m_nSubModelField; // 0x258 - 0x25C
   bool m_bIgnoreNormal; // 0x25C - 0x25D
   bool m_bOrientZ; // 0x25D - 0x25E
   bool m_bCenterOffset; // 0x25E - 0x25F
   unsigned char pad_25F[0x1] // 0x25F - 0x260
   CPerParticleVecInput m_vecLocalOffset; // 0x260 - 0x828
   CPerParticleVecInput m_vecLocalRotation; // 0x828 - 0xDF0
   bool m_bIgnoreRadius; // 0xDF0 - 0xDF1
   unsigned char pad_DF1[0x3] // 0xDF1 - 0xDF4
   int32_t m_nModelScaleCP; // 0xDF4 - 0xDF8
   CPerParticleVecInput m_vecComponentScale; // 0xDF8 - 0x13C0
   bool m_bLocalScale; // 0x13C0 - 0x13C1
   bool m_bAnimated; // 0x13C1 - 0x13C2
   unsigned char pad_13C2[0x2] // 0x13C2 - 0x13C4
   float m_flAnimationRate; // 0x13C4 - 0x13C8
   bool m_bScaleAnimationRate; // 0x13C8 - 0x13C9
   bool m_bForceLoopingAnimation; // 0x13C9 - 0x13CA
   bool m_bResetAnimOnStop; // 0x13CA - 0x13CB
   bool m_bManualAnimFrame; // 0x13CB - 0x13CC
   ParticleAttributeIndex_t m_nAnimationScaleField; // 0x13CC - 0x13D0
   ParticleAttributeIndex_t m_nAnimationField; // 0x13D0 - 0x13D4
   ParticleAttributeIndex_t m_nManualFrameField; // 0x13D4 - 0x13D8
   char m_ActivityName[256]; // 0x13D8 - 0x14D8
   char m_SequenceName[256]; // 0x14D8 - 0x15D8
   bool m_bEnableClothSimulation; // 0x15D8 - 0x15D9
   unsigned char pad_15D9[0x7] // 0x15D9 - 0x15E0
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x15E0 - 0x15E8
   bool m_bOverrideTranslucentMaterials; // 0x15E8 - 0x15E9
   unsigned char pad_15E9[0x3] // 0x15E9 - 0x15EC
   int32_t m_nSkin; // 0x15EC - 0x15F0
   int32_t m_nSkinCP; // 0x15F0 - 0x15F4
   unsigned char pad_15F4[0x4] // 0x15F4 - 0x15F8
   CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x15F8 - 0x1610
   int32_t m_nLOD; // 0x1610 - 0x1614
   int32_t m_nModelCP; // 0x1614 - 0x1618
   char m_EconSlotName[256]; // 0x1618 - 0x1718
   bool m_bOriginalModel; // 0x1718 - 0x1719
   bool m_bSuppressTint; // 0x1719 - 0x171A
   bool m_bUseRawMeshGroup; // 0x171A - 0x171B
   bool m_bDisableShadows; // 0x171B - 0x171C
   bool m_bForceDrawInterlevedWithSiblings; // 0x171C - 0x171D
   char m_szRenderAttribute[260]; // 0x171D - 0x1821
   unsigned char pad_1821[0x7] // 0x1821 - 0x1828
   CParticleCollectionFloatInput m_flRadiusScale; // 0x1828 - 0x1960
   CParticleCollectionFloatInput m_flAlphaScale; // 0x1960 - 0x1A98
   CParticleCollectionFloatInput m_flRollScale; // 0x1A98 - 0x1BD0
   ParticleAttributeIndex_t m_nAlpha2Field; // 0x1BD0 - 0x1BD4
   unsigned char pad_1BD4[0x4] // 0x1BD4 - 0x1BD8
   CParticleCollectionVecInput m_vecColorScale; // 0x1BD8 - 0x21A0
   ParticleColorBlendType_t m_nColorBlendType; // 0x21A0 - 0x21A4

}; // size - 0x21D0


class C_OP_RenderOmni2Light : public CParticleFunctionRenderer
{
public:

   ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x230 - 0x234
   unsigned char pad_234[0x4] // 0x234 - 0x238
   CParticleCollectionVecInput m_vColorBlend; // 0x238 - 0x800
   ParticleColorBlendType_t m_nColorBlendType; // 0x800 - 0x804
   ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x804 - 0x808
   CPerParticleFloatInput m_flBrightnessLumens; // 0x808 - 0x940
   CPerParticleFloatInput m_flBrightnessCandelas; // 0x940 - 0xA78
   bool m_bCastShadows; // 0xA78 - 0xA79
   unsigned char pad_A79[0x7] // 0xA79 - 0xA80
   CPerParticleFloatInput m_flLuminaireRadius; // 0xA80 - 0xBB8
   CPerParticleFloatInput m_flSkirt; // 0xBB8 - 0xCF0
   CPerParticleFloatInput m_flRange; // 0xCF0 - 0xE28
   CPerParticleFloatInput m_flInnerConeAngle; // 0xE28 - 0xF60
   CPerParticleFloatInput m_flOuterConeAngle; // 0xF60 - 0x1098
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x1098 - 0x10A0

}; // size - 0x10B0


class C_OP_RenderPostProcessing : public CParticleFunctionRenderer
{
public:

   CPerParticleFloatInput m_flPostProcessStrength; // 0x230 - 0x368
   CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x368 - 0x370
   ParticlePostProcessPriorityGroup_t m_nPriority; // 0x370 - 0x374

}; // size - 0x380


class C_OP_RenderProjected : public CParticleFunctionRenderer
{
public:

   bool m_bProjectCharacter; // 0x230 - 0x231
   bool m_bProjectWorld; // 0x231 - 0x232
   bool m_bProjectWater; // 0x232 - 0x233
   bool m_bFlipHorizontal; // 0x233 - 0x234
   bool m_bEnableProjectedDepthControls; // 0x234 - 0x235
   unsigned char pad_235[0x3] // 0x235 - 0x238
   float m_flMinProjectionDepth; // 0x238 - 0x23C
   float m_flMaxProjectionDepth; // 0x23C - 0x240
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hProjectedMaterial; // 0x240 - 0x248
   float m_flAnimationTimeScale; // 0x248 - 0x24C
   bool m_bOrientToNormal; // 0x24C - 0x24D
   unsigned char pad_24D[0x3] // 0x24D - 0x250
   CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x250 - 0x268

}; // size - 0x280


class C_OP_RenderRopes : public CBaseRendererSource2
{
public:

   bool m_bEnableFadingAndClamping; // 0x2050 - 0x2051
   unsigned char pad_2051[0x3] // 0x2051 - 0x2054
   float m_flMinSize; // 0x2054 - 0x2058
   float m_flMaxSize; // 0x2058 - 0x205C
   float m_flStartFadeSize; // 0x205C - 0x2060
   float m_flEndFadeSize; // 0x2060 - 0x2064
   float m_flStartFadeDot; // 0x2064 - 0x2068
   float m_flEndFadeDot; // 0x2068 - 0x206C
   float m_flRadiusTaper; // 0x206C - 0x2070
   int32_t m_nMinTesselation; // 0x2070 - 0x2074
   int32_t m_nMaxTesselation; // 0x2074 - 0x2078
   float m_flTessScale; // 0x2078 - 0x207C
   unsigned char pad_207C[0x4] // 0x207C - 0x2080
   CParticleCollectionFloatInput m_flTextureVWorldSize; // 0x2080 - 0x21B8
   CParticleCollectionFloatInput m_flTextureVScrollRate; // 0x21B8 - 0x22F0
   CParticleCollectionFloatInput m_flTextureVOffset; // 0x22F0 - 0x2428
   int32_t m_nTextureVParamsCP; // 0x2428 - 0x242C
   bool m_bClampV; // 0x242C - 0x242D
   unsigned char pad_242D[0x3] // 0x242D - 0x2430
   int32_t m_nScaleCP1; // 0x2430 - 0x2434
   int32_t m_nScaleCP2; // 0x2434 - 0x2438
   float m_flScaleVSizeByControlPointDistance; // 0x2438 - 0x243C
   float m_flScaleVScrollByControlPointDistance; // 0x243C - 0x2440
   float m_flScaleVOffsetByControlPointDistance; // 0x2440 - 0x2444
   unsigned char pad_2444[0x1] // 0x2444 - 0x2445
   bool m_bUseScalarForTextureCoordinate; // 0x2445 - 0x2446
   unsigned char pad_2446[0x2] // 0x2446 - 0x2448
   ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2448 - 0x244C
   float m_flScalarAttributeTextureCoordScale; // 0x244C - 0x2450
   bool m_bReverseOrder; // 0x2450 - 0x2451
   bool m_bClosedLoop; // 0x2451 - 0x2452
   unsigned char pad_2452[0x2] // 0x2452 - 0x2454
   ParticleOrientationChoiceList_t m_nOrientationType; // 0x2454 - 0x2458
   ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2458 - 0x245C
   bool m_bDrawAsOpaque; // 0x245C - 0x245D
   bool m_bGenerateNormals; // 0x245D - 0x245E

}; // size - 0x2460


class C_OP_RenderScreenShake : public CParticleFunctionRenderer
{
public:

   float m_flDurationScale; // 0x230 - 0x234
   float m_flRadiusScale; // 0x234 - 0x238
   float m_flFrequencyScale; // 0x238 - 0x23C
   float m_flAmplitudeScale; // 0x23C - 0x240
   ParticleAttributeIndex_t m_nRadiusField; // 0x240 - 0x244
   ParticleAttributeIndex_t m_nDurationField; // 0x244 - 0x248
   ParticleAttributeIndex_t m_nFrequencyField; // 0x248 - 0x24C
   ParticleAttributeIndex_t m_nAmplitudeField; // 0x24C - 0x250
   int32_t m_nFilterCP; // 0x250 - 0x254

}; // size - 0x260


class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer
{
public:

   float m_flRotateRateDegrees; // 0x230 - 0x234
   float m_flForwardDegrees; // 0x234 - 0x238

}; // size - 0x240


class C_OP_RenderSound : public CParticleFunctionRenderer
{
public:

   float m_flDurationScale; // 0x230 - 0x234
   float m_flSndLvlScale; // 0x234 - 0x238
   float m_flPitchScale; // 0x238 - 0x23C
   float m_flVolumeScale; // 0x23C - 0x240
   ParticleAttributeIndex_t m_nSndLvlField; // 0x240 - 0x244
   ParticleAttributeIndex_t m_nDurationField; // 0x244 - 0x248
   ParticleAttributeIndex_t m_nPitchField; // 0x248 - 0x24C
   ParticleAttributeIndex_t m_nVolumeField; // 0x24C - 0x250
   int32_t m_nChannel; // 0x250 - 0x254
   int32_t m_nCPReference; // 0x254 - 0x258
   char m_pszSoundName[256]; // 0x258 - 0x358
   bool m_bSuppressStopSoundEvent; // 0x358 - 0x359

}; // size - 0x360


class C_OP_RenderSprites : public CBaseRendererSource2
{
public:

   CParticleCollectionFloatInput m_nSequenceOverride; // 0x2050 - 0x2188
   ParticleOrientationChoiceList_t m_nOrientationType; // 0x2188 - 0x218C
   int32_t m_nOrientationControlPoint; // 0x218C - 0x2190
   bool m_bUseYawWithNormalAligned; // 0x2190 - 0x2191
   unsigned char pad_2191[0x3] // 0x2191 - 0x2194
   float m_flMinSize; // 0x2194 - 0x2198
   float m_flMaxSize; // 0x2198 - 0x219C
   float m_flAlphaAdjustWithSizeAdjust; // 0x219C - 0x21A0
   CParticleCollectionFloatInput m_flStartFadeSize; // 0x21A0 - 0x22D8
   CParticleCollectionFloatInput m_flEndFadeSize; // 0x22D8 - 0x2410
   float m_flStartFadeDot; // 0x2410 - 0x2414
   float m_flEndFadeDot; // 0x2414 - 0x2418
   bool m_bDistanceAlpha; // 0x2418 - 0x2419
   bool m_bSoftEdges; // 0x2419 - 0x241A
   unsigned char pad_241A[0x2] // 0x241A - 0x241C
   float m_flEdgeSoftnessStart; // 0x241C - 0x2420
   float m_flEdgeSoftnessEnd; // 0x2420 - 0x2424
   bool m_bOutline; // 0x2424 - 0x2425
   Color m_OutlineColor; // 0x2425 - 0x2429
   unsigned char pad_2429[0x3] // 0x2429 - 0x242C
   int32_t m_nOutlineAlpha; // 0x242C - 0x2430
   float m_flOutlineStart0; // 0x2430 - 0x2434
   float m_flOutlineStart1; // 0x2434 - 0x2438
   float m_flOutlineEnd0; // 0x2438 - 0x243C
   float m_flOutlineEnd1; // 0x243C - 0x2440
   ParticleLightingQuality_t m_nLightingMode; // 0x2440 - 0x2444
   unsigned char pad_2444[0x4] // 0x2444 - 0x2448
   CParticleCollectionFloatInput m_flLightingTessellation; // 0x2448 - 0x2580
   CParticleCollectionFloatInput m_flLightingDirectionality; // 0x2580 - 0x26B8
   bool m_bParticleShadows; // 0x26B8 - 0x26B9
   unsigned char pad_26B9[0x3] // 0x26B9 - 0x26BC
   float m_flShadowDensity; // 0x26BC - 0x26C0

}; // size - 0x26C0


class C_OP_RenderStandardLight : public CParticleFunctionRenderer
{
public:

   ParticleLightTypeChoiceList_t m_nLightType; // 0x230 - 0x234
   unsigned char pad_234[0x4] // 0x234 - 0x238
   CParticleCollectionVecInput m_vecColorScale; // 0x238 - 0x800
   ParticleColorBlendType_t m_nColorBlendType; // 0x800 - 0x804
   unsigned char pad_804[0x4] // 0x804 - 0x808
   CParticleCollectionFloatInput m_flIntensity; // 0x808 - 0x940
   bool m_bCastShadows; // 0x940 - 0x941
   unsigned char pad_941[0x7] // 0x941 - 0x948
   CParticleCollectionFloatInput m_flTheta; // 0x948 - 0xA80
   CParticleCollectionFloatInput m_flPhi; // 0xA80 - 0xBB8
   CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xBB8 - 0xCF0
   StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xCF0 - 0xCF4
   unsigned char pad_CF4[0x4] // 0xCF4 - 0xCF8
   CParticleCollectionFloatInput m_flFalloffLinearity; // 0xCF8 - 0xE30
   CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xE30 - 0xF68
   CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0xF68 - 0x10A0
   bool m_bRenderDiffuse; // 0x10A0 - 0x10A1
   bool m_bRenderSpecular; // 0x10A1 - 0x10A2
   unsigned char pad_10A2[0x6] // 0x10A2 - 0x10A8
   CUtlString m_lightCookie; // 0x10A8 - 0x10B0
   int32_t m_nPriority; // 0x10B0 - 0x10B4
   ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x10B4 - 0x10B8
   CParticleCollectionFloatInput m_flFogContribution; // 0x10B8 - 0x11F0
   ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x11F0 - 0x11F4
   float m_flCapsuleLength; // 0x11F4 - 0x11F8
   bool m_bReverseOrder; // 0x11F8 - 0x11F9
   bool m_bClosedLoop; // 0x11F9 - 0x11FA
   unsigned char pad_11FA[0x2] // 0x11FA - 0x11FC
   ParticleAttributeIndex_t m_nPrevPntSource; // 0x11FC - 0x1200
   float m_flMaxLength; // 0x1200 - 0x1204
   float m_flMinLength; // 0x1204 - 0x1208
   bool m_bIgnoreDT; // 0x1208 - 0x1209
   unsigned char pad_1209[0x3] // 0x1209 - 0x120C
   float m_flConstrainRadiusToLengthRatio; // 0x120C - 0x1210
   float m_flLengthScale; // 0x1210 - 0x1214
   float m_flLengthFadeInTime; // 0x1214 - 0x1218

}; // size - 0x1220


class C_OP_RenderStatusEffect : public CParticleFunctionRenderer
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x230 - 0x238
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // 0x238 - 0x240
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // 0x240 - 0x248
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // 0x248 - 0x250
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // 0x250 - 0x258
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // 0x258 - 0x260
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // 0x260 - 0x268

}; // size - 0x270


class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x230 - 0x238
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal; // 0x238 - 0x240
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness; // 0x240 - 0x248
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness; // 0x248 - 0x250
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum; // 0x250 - 0x258
   CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail; // 0x258 - 0x260

}; // size - 0x260


class C_OP_RenderText : public CParticleFunctionRenderer
{
public:

   Color m_OutlineColor; // 0x230 - 0x234
   unsigned char pad_234[0x4] // 0x234 - 0x238
   CUtlString m_DefaultText; // 0x238 - 0x240

}; // size - 0x240


class C_OP_RenderTonemapController : public CParticleFunctionRenderer
{
public:

   float m_flTonemapLevel; // 0x230 - 0x234
   float m_flTonemapWeight; // 0x234 - 0x238
   ParticleAttributeIndex_t m_nTonemapLevelField; // 0x238 - 0x23C
   ParticleAttributeIndex_t m_nTonemapWeightField; // 0x23C - 0x240

}; // size - 0x240


class C_OP_RenderTrails : public CBaseTrailRenderer
{
public:

   bool m_bEnableFadingAndClamping; // 0x22E0 - 0x22E1
   unsigned char pad_22E1[0x3] // 0x22E1 - 0x22E4
   float m_flStartFadeDot; // 0x22E4 - 0x22E8
   float m_flEndFadeDot; // 0x22E8 - 0x22EC
   ParticleAttributeIndex_t m_nPrevPntSource; // 0x22EC - 0x22F0
   float m_flMaxLength; // 0x22F0 - 0x22F4
   float m_flMinLength; // 0x22F4 - 0x22F8
   bool m_bIgnoreDT; // 0x22F8 - 0x22F9
   unsigned char pad_22F9[0x3] // 0x22F9 - 0x22FC
   float m_flConstrainRadiusToLengthRatio; // 0x22FC - 0x2300
   float m_flLengthScale; // 0x2300 - 0x2304
   float m_flLengthFadeInTime; // 0x2304 - 0x2308
   CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2308 - 0x2440
   CParticleCollectionVecInput m_vecHeadColorScale; // 0x2440 - 0x2A08
   CPerParticleFloatInput m_flHeadAlphaScale; // 0x2A08 - 0x2B40
   CPerParticleFloatInput m_flRadiusTaper; // 0x2B40 - 0x2C78
   CParticleCollectionVecInput m_vecTailColorScale; // 0x2C78 - 0x3240
   CPerParticleFloatInput m_flTailAlphaScale; // 0x3240 - 0x3378
   ParticleAttributeIndex_t m_nHorizCropField; // 0x3378 - 0x337C
   ParticleAttributeIndex_t m_nVertCropField; // 0x337C - 0x3380
   float m_flForwardShift; // 0x3380 - 0x3384
   bool m_bFlipUVBasedOnPitchYaw; // 0x3384 - 0x3385

}; // size - 0x3390


class C_OP_RenderTreeShake : public CParticleFunctionRenderer
{
public:

   float m_flPeakStrength; // 0x230 - 0x234
   ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x234 - 0x238
   float m_flRadius; // 0x238 - 0x23C
   ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x23C - 0x240
   float m_flShakeDuration; // 0x240 - 0x244
   float m_flTransitionTime; // 0x244 - 0x248
   float m_flTwistAmount; // 0x248 - 0x24C
   float m_flRadialAmount; // 0x24C - 0x250
   float m_flControlPointOrientationAmount; // 0x250 - 0x254
   int32_t m_nControlPointForLinearDirection; // 0x254 - 0x258

}; // size - 0x260


class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer
{
public:

   ParticleVRHandChoiceList_t m_nHand; // 0x230 - 0x234
   int32_t m_nOutputHandCP; // 0x234 - 0x238
   int32_t m_nOutputField; // 0x238 - 0x23C
   unsigned char pad_23C[0x4] // 0x23C - 0x240
   CPerParticleFloatInput m_flAmplitude; // 0x240 - 0x378

}; // size - 0x380


class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission
{
public:

   int32_t m_nChildGroupID; // 0x200 - 0x204
   unsigned char pad_204[0x4] // 0x204 - 0x208
   CParticleCollectionFloatInput m_flClusterRefireTime; // 0x208 - 0x340
   CParticleCollectionFloatInput m_flClusterSize; // 0x340 - 0x478
   CParticleCollectionFloatInput m_flClusterCooldown; // 0x478 - 0x5B0
   bool m_bLimitChildCount; // 0x5B0 - 0x5B1

}; // size - 0x5C0


class C_OP_RestartAfterDuration : public CParticleFunctionOperator
{
public:

   float m_flDurationMin; // 0x1F0 - 0x1F4
   float m_flDurationMax; // 0x1F4 - 0x1F8
   int32_t m_nCP; // 0x1F8 - 0x1FC
   int32_t m_nCPField; // 0x1FC - 0x200
   int32_t m_nChildGroupID; // 0x200 - 0x204
   bool m_bOnlyChildren; // 0x204 - 0x205

}; // size - 0x210


class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint
{
public:

   CParticleCollectionFloatInput m_flRestLength; // 0x1F0 - 0x328
   CParticleCollectionFloatInput m_flMinDistance; // 0x328 - 0x460
   CParticleCollectionFloatInput m_flMaxDistance; // 0x460 - 0x598
   float m_flAdjustmentScale; // 0x598 - 0x59C
   unsigned char pad_59C[0x4] // 0x59C - 0x5A0
   CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5A0 - 0x6D8

}; // size - 0x6E0


class C_OP_RotateVector : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   Vector m_vecRotAxisMin; // 0x1F4 - 0x200
   Vector m_vecRotAxisMax; // 0x200 - 0x20C
   float m_flRotRateMin; // 0x20C - 0x210
   float m_flRotRateMax; // 0x210 - 0x214
   bool m_bNormalize; // 0x214 - 0x215
   unsigned char pad_215[0x3] // 0x215 - 0x218
   CPerParticleFloatInput m_flScale; // 0x218 - 0x350

}; // size - 0x350


class C_OP_RtEnvCull : public CParticleFunctionOperator
{
public:

   Vector m_vecTestDir; // 0x1F0 - 0x1FC
   Vector m_vecTestNormal; // 0x1FC - 0x208
   bool m_bCullOnMiss; // 0x208 - 0x209
   bool m_bStickInsteadOfCull; // 0x209 - 0x20A
   char m_RtEnvName[128]; // 0x20A - 0x28A
   unsigned char pad_28A[0x2] // 0x28A - 0x28C
   int32_t m_nRTEnvCP; // 0x28C - 0x290
   int32_t m_nComponent; // 0x290 - 0x294

}; // size - 0x2A0


class C_OP_ScreenForceFromPlayerView : public CParticleFunctionForce
{
public:

   float m_flAccel; // 0x1F0 - 0x1F4

}; // size - 0x200


class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission
{
public:

   CParticleCollectionFloatInput m_nChildGroupID; // 0x200 - 0x338
   CParticleCollectionFloatInput m_nFirstChild; // 0x338 - 0x470
   CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x470 - 0x5A8
   bool m_bPlayEndcapOnStop; // 0x5A8 - 0x5A9
   bool m_bDestroyImmediately; // 0x5A9 - 0x5AA

}; // size - 0x5B0


class C_OP_SequenceFromModel : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1F8 - 0x1FC
   float m_flInputMin; // 0x1FC - 0x200
   float m_flInputMax; // 0x200 - 0x204
   float m_flOutputMin; // 0x204 - 0x208
   float m_flOutputMax; // 0x208 - 0x20C
   ParticleSetMethod_t m_nSetMethod; // 0x20C - 0x210

}; // size - 0x210


class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator
{
public:

   ScalarExpressionType_t m_nExpression; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleFloatInput m_flInput1; // 0x1F8 - 0x330
   CPerParticleFloatInput m_flInput2; // 0x330 - 0x468
   ParticleAttributeIndex_t m_nOutputField; // 0x468 - 0x46C
   ParticleSetMethod_t m_nSetMethod; // 0x46C - 0x470

}; // size - 0x490


class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator
{
public:

   int32_t m_nInputControlPoint; // 0x1F0 - 0x1F4
   int32_t m_nOutputControlPoint; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator
{
public:

   float m_flInterpRate; // 0x1F0 - 0x1F4
   float m_flMaxTraceLength; // 0x1F4 - 0x1F8
   float m_flTolerance; // 0x1F8 - 0x1FC
   float m_flTraceOffset; // 0x1FC - 0x200
   char m_CollisionGroupName[128]; // 0x200 - 0x280
   ParticleTraceSet_t m_nTraceSet; // 0x280 - 0x284
   int32_t m_nInputCP; // 0x284 - 0x288
   int32_t m_nOutputCP; // 0x288 - 0x28C
   unsigned char pad_28C[0xC] // 0x28C - 0x298
   bool m_bIncludeWater; // 0x298 - 0x299

}; // size - 0x2A0


class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nInputCP; // 0x200 - 0x204
   int32_t m_nOutputCP; // 0x204 - 0x208
   CParticleCollectionFloatInput m_flInterpolation; // 0x208 - 0x340
   bool m_b2DOrientation; // 0x340 - 0x341
   bool m_bAvoidSingularity; // 0x341 - 0x342
   bool m_bPointAway; // 0x342 - 0x343

}; // size - 0x350


class C_OP_SetCPtoVector : public CParticleFunctionOperator
{
public:

   int32_t m_nCPInput; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_SetChildControlPoints : public CParticleFunctionOperator
{
public:

   int32_t m_nChildGroupID; // 0x1F0 - 0x1F4
   int32_t m_nFirstControlPoint; // 0x1F4 - 0x1F8
   int32_t m_nNumControlPoints; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x4] // 0x1FC - 0x200
   CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x200 - 0x338
   bool m_bSetOrientation; // 0x338 - 0x339

}; // size - 0x340


class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission
{
public:

   VectorFloatExpressionType_t m_nExpression; // 0x200 - 0x204
   unsigned char pad_204[0x4] // 0x204 - 0x208
   CParticleCollectionVecInput m_vecInput1; // 0x208 - 0x7D0
   CParticleCollectionVecInput m_vecInput2; // 0x7D0 - 0xD98
   CParticleRemapFloatInput m_flOutputRemap; // 0xD98 - 0xED0
   int32_t m_nOutputCP; // 0xED0 - 0xED4
   int32_t m_nOutVectorField; // 0xED4 - 0xED8

}; // size - 0xEE0


class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission
{
public:

   ScalarExpressionType_t m_nExpression; // 0x200 - 0x204
   unsigned char pad_204[0x4] // 0x204 - 0x208
   CParticleCollectionFloatInput m_flInput1; // 0x208 - 0x340
   CParticleCollectionFloatInput m_flInput2; // 0x340 - 0x478
   CParticleRemapFloatInput m_flOutputRemap; // 0x478 - 0x5B0
   int32_t m_nOutputCP; // 0x5B0 - 0x5B4
   int32_t m_nOutVectorField; // 0x5B4 - 0x5B8

}; // size - 0x5C0


class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission
{
public:

   int32_t m_nSourceCP; // 0x200 - 0x204
   int32_t m_nDestCP; // 0x204 - 0x208
   int32_t m_nCPField; // 0x208 - 0x20C

}; // size - 0x210


class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCPInput; // 0x200 - 0x204
   int32_t m_nCPOutput; // 0x204 - 0x208

}; // size - 0x210


class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission
{
public:

   bool m_bUseWorldLocation; // 0x200 - 0x201
   unsigned char pad_201[0x1] // 0x201 - 0x202
   bool m_bRandomize; // 0x202 - 0x203
   bool m_bSetOnce; // 0x203 - 0x204
   int32_t m_nCP; // 0x204 - 0x208
   int32_t m_nHeadLocation; // 0x208 - 0x20C
   QAngle m_vecRotation; // 0x20C - 0x218
   QAngle m_vecRotationB; // 0x218 - 0x224
   unsigned char pad_224[0x4] // 0x224 - 0x228
   CParticleCollectionFloatInput m_flInterpolation; // 0x228 - 0x360

}; // size - 0x360


class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCPInput; // 0x200 - 0x204
   int32_t m_nCPOutput; // 0x204 - 0x208

}; // size - 0x210


class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCP1; // 0x200 - 0x204
   int32_t m_nHeadLocationMin; // 0x204 - 0x208
   int32_t m_nHeadLocationMax; // 0x208 - 0x20C
   unsigned char pad_20C[0x4] // 0x20C - 0x210
   CParticleCollectionFloatInput m_flResetRate; // 0x210 - 0x348

}; // size - 0x350


class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission
{
public:

   int32_t m_nControlPointNumber; // 0x200 - 0x204
   char m_pszTimeOfDayParameter[128]; // 0x204 - 0x284
   Vector m_vecDefaultValue; // 0x284 - 0x290

}; // size - 0x2A0


class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission
{
public:

   bool m_bUseWorldLocation; // 0x200 - 0x201
   bool m_bOrient; // 0x201 - 0x202
   bool m_bSetOnce; // 0x202 - 0x203
   unsigned char pad_203[0x1] // 0x203 - 0x204
   int32_t m_nCP1; // 0x204 - 0x208
   int32_t m_nCP2; // 0x208 - 0x20C
   int32_t m_nCP3; // 0x20C - 0x210
   int32_t m_nCP4; // 0x210 - 0x214
   Vector m_vecCP1Pos; // 0x214 - 0x220
   Vector m_vecCP2Pos; // 0x220 - 0x22C
   Vector m_vecCP3Pos; // 0x22C - 0x238
   Vector m_vecCP4Pos; // 0x238 - 0x244
   int32_t m_nHeadLocation; // 0x244 - 0x248

}; // size - 0x250


class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission
{
public:

   CParticleCollectionVecInput m_vecRotAxis; // 0x200 - 0x7C8
   CParticleCollectionFloatInput m_flRotRate; // 0x7C8 - 0x900
   int32_t m_nCP; // 0x900 - 0x904
   int32_t m_nLocalCP; // 0x904 - 0x908

}; // size - 0x910


class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCPInput; // 0x200 - 0x204
   int32_t m_nCPOutputVel; // 0x204 - 0x208
   bool m_bNormalize; // 0x208 - 0x209
   unsigned char pad_209[0x3] // 0x209 - 0x20C
   int32_t m_nCPOutputMag; // 0x20C - 0x210
   int32_t m_nCPField; // 0x210 - 0x214
   unsigned char pad_214[0x4] // 0x214 - 0x218
   CParticleCollectionVecInput m_vecComparisonVelocity; // 0x218 - 0x7E0

}; // size - 0x7E0


class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCP1; // 0x200 - 0x204
   Vector m_vecCP1Pos; // 0x204 - 0x210

}; // size - 0x210


class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCP1; // 0x200 - 0x204
   Vector m_vecCP1Pos; // 0x204 - 0x210
   bool m_bOrientToHMD; // 0x210 - 0x211

}; // size - 0x220


class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCP1; // 0x200 - 0x204
   int32_t m_nHand; // 0x204 - 0x208
   Vector m_vecCP1Pos; // 0x208 - 0x214
   bool m_bOrientToHand; // 0x214 - 0x215

}; // size - 0x220


class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCPOut; // 0x200 - 0x204
   int32_t m_nCPIn; // 0x204 - 0x208
   float m_flUpdateRate; // 0x208 - 0x20C
   unsigned char pad_20C[0x4] // 0x20C - 0x210
   CParticleCollectionFloatInput m_flTraceLength; // 0x210 - 0x348
   float m_flStartOffset; // 0x348 - 0x34C
   float m_flOffset; // 0x34C - 0x350
   Vector m_vecTraceDir; // 0x350 - 0x35C
   char m_CollisionGroupName[128]; // 0x35C - 0x3DC
   ParticleTraceSet_t m_nTraceSet; // 0x3DC - 0x3E0
   bool m_bSetToEndpoint; // 0x3E0 - 0x3E1
   bool m_bTraceToClosestSurface; // 0x3E1 - 0x3E2

}; // size - 0x3F0


class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission
{
public:

   int32_t m_nCP1; // 0x200 - 0x204
   Vector m_vecCP1Pos; // 0x204 - 0x210
   bool m_bOrientToEyes; // 0x210 - 0x211

}; // size - 0x220


class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission
{
public:

   VectorExpressionType_t m_nExpression; // 0x200 - 0x204
   int32_t m_nOutputCP; // 0x204 - 0x208
   CParticleCollectionVecInput m_vInput1; // 0x208 - 0x7D0
   CParticleCollectionVecInput m_vInput2; // 0x7D0 - 0xD98
   bool m_bNormalizedOutput; // 0xD98 - 0xD99

}; // size - 0xDA0


class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission
{
public:

   int32_t m_nSourceCP; // 0x200 - 0x204
   int32_t m_nDestCP; // 0x204 - 0x208
   int32_t m_nFlowCP; // 0x208 - 0x20C
   int32_t m_nActiveCP; // 0x20C - 0x210
   int32_t m_nActiveCPField; // 0x210 - 0x214
   unsigned char pad_214[0x4] // 0x214 - 0x218
   CParticleCollectionFloatInput m_flRetestRate; // 0x218 - 0x350
   bool m_bAdaptiveThreshold; // 0x350 - 0x351

}; // size - 0x360


class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator
{
public:

   char m_HitboxSetName[128]; // 0x1F0 - 0x270
   char m_AttachmentName[128]; // 0x270 - 0x2F0
   int32_t m_nFirstControlPoint; // 0x2F0 - 0x2F4
   int32_t m_nNumControlPoints; // 0x2F4 - 0x2F8
   int32_t m_nFirstSourcePoint; // 0x2F8 - 0x2FC
   bool m_bSkin; // 0x2FC - 0x2FD
   bool m_bAttachment; // 0x2FD - 0x2FE

}; // size - 0x300


class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator
{
public:

   int32_t m_nChildGroupID; // 0x1F0 - 0x1F4
   int32_t m_nFirstControlPoint; // 0x1F4 - 0x1F8
   int32_t m_nNumControlPoints; // 0x1F8 - 0x1FC
   int32_t m_nFirstSourcePoint; // 0x1FC - 0x200
   bool m_bSetOrientation; // 0x200 - 0x201
   unsigned char pad_201[0x3] // 0x201 - 0x204
   ParticleOrientationSetMode_t m_nOrientationMode; // 0x204 - 0x208
   ParticleParentSetMode_t m_nSetParent; // 0x208 - 0x20C

}; // size - 0x210


class C_OP_SetFloat : public CParticleFunctionOperator
{
public:

   CPerParticleFloatInput m_InputValue; // 0x1F0 - 0x328
   ParticleAttributeIndex_t m_nOutputField; // 0x328 - 0x32C
   ParticleSetMethod_t m_nSetMethod; // 0x32C - 0x330
   CPerParticleFloatInput m_Lerp; // 0x330 - 0x468

}; // size - 0x490


class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator
{
public:

   VectorFloatExpressionType_t m_nExpression; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleVecInput m_vInput1; // 0x1F8 - 0x7C0
   CPerParticleVecInput m_vInput2; // 0x7C0 - 0xD88
   CParticleRemapFloatInput m_flOutputRemap; // 0xD88 - 0xEC0
   ParticleAttributeIndex_t m_nOutputField; // 0xEC0 - 0xEC4
   ParticleSetMethod_t m_nSetMethod; // 0xEC4 - 0xEC8

}; // size - 0xED0


class C_OP_SetFloatCollection : public CParticleFunctionOperator
{
public:

   CParticleCollectionFloatInput m_InputValue; // 0x1F0 - 0x328
   ParticleAttributeIndex_t m_nOutputField; // 0x328 - 0x32C
   ParticleSetMethod_t m_nSetMethod; // 0x32C - 0x330
   CParticleCollectionFloatInput m_Lerp; // 0x330 - 0x468

}; // size - 0x490


class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nAttributeToRead; // 0x1F4 - 0x1F8
   ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1F8 - 0x1FC
   int32_t m_nLocalSpaceCP; // 0x1FC - 0x200
   bool m_bRandom; // 0x200 - 0x201
   bool m_bReverse; // 0x201 - 0x202
   unsigned char pad_202[0x2] // 0x202 - 0x204
   int32_t m_nRandomSeed; // 0x204 - 0x208
   CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x208 - 0x340
   CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x340 - 0x478
   CPerParticleFloatInput m_flInterpolation; // 0x478 - 0x5B0
   bool m_bSubSample; // 0x5B0 - 0x5B1

}; // size - 0x5C0


class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission
{
public:

   int32_t m_nChildGroupID; // 0x200 - 0x204
   int32_t m_nChildControlPoint; // 0x204 - 0x208
   int32_t m_nNumControlPoints; // 0x208 - 0x20C
   int32_t m_nFirstSourcePoint; // 0x20C - 0x210
   bool m_bSetOrientation; // 0x210 - 0x211

}; // size - 0x220


class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator
{
public:

   int32_t m_nChildGroupID; // 0x1F0 - 0x1F4
   int32_t m_nFirstControlPoint; // 0x1F4 - 0x1F8
   int32_t m_nNumControlPoints; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x4] // 0x1FC - 0x200
   CParticleCollectionFloatInput m_nParticleIncrement; // 0x200 - 0x338
   CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x338 - 0x470
   bool m_bSetOrientation; // 0x470 - 0x471
   unsigned char pad_471[0x3] // 0x471 - 0x474
   ParticleAttributeIndex_t m_nOrientationField; // 0x474 - 0x478
   bool m_bNumBasedOnParticleCount; // 0x478 - 0x479

}; // size - 0x480


class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator
{
public:

   int32_t m_nChildGroupID; // 0x1F0 - 0x1F4
   int32_t m_nFirstControlPoint; // 0x1F4 - 0x1F8
   int32_t m_nNumControlPoints; // 0x1F8 - 0x1FC
   int32_t m_nParticleIncrement; // 0x1FC - 0x200
   int32_t m_nFirstSourcePoint; // 0x200 - 0x204
   bool m_bNumBasedOnParticleCount; // 0x204 - 0x205
   unsigned char pad_205[0x3] // 0x205 - 0x208
   ParticleAttributeIndex_t m_nAttributeToRead; // 0x208 - 0x20C
   int32_t m_nCPField; // 0x20C - 0x210

}; // size - 0x210


class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission
{
public:

   bool m_bUseWorldLocation; // 0x200 - 0x201
   bool m_bOrient; // 0x201 - 0x202
   unsigned char pad_202[0x2] // 0x202 - 0x204
   int32_t m_nCP1; // 0x204 - 0x208
   int32_t m_nHeadLocation; // 0x208 - 0x20C
   unsigned char pad_20C[0x4] // 0x20C - 0x210
   CParticleCollectionFloatInput m_flReRandomRate; // 0x210 - 0x348
   Vector m_vecCPMinPos; // 0x348 - 0x354
   Vector m_vecCPMaxPos; // 0x354 - 0x360
   CParticleCollectionFloatInput m_flInterpolation; // 0x360 - 0x498

}; // size - 0x4A0


class C_OP_SetSimulationRate : public CParticleFunctionPreEmission
{
public:

   CParticleCollectionFloatInput m_flSimulationScale; // 0x200 - 0x338

}; // size - 0x340


class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission
{
public:

   bool m_bUseWorldLocation; // 0x200 - 0x201
   bool m_bSetOnce; // 0x201 - 0x202
   unsigned char pad_202[0x2] // 0x202 - 0x204
   int32_t m_nCP1; // 0x204 - 0x208
   CParticleCollectionVecInput m_vecCP1Pos; // 0x208 - 0x7D0
   int32_t m_nHeadLocation; // 0x7D0 - 0x7D4

}; // size - 0x7E0


class C_OP_SetToCP : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   Vector m_vecOffset; // 0x1F4 - 0x200
   bool m_bOffsetLocal; // 0x200 - 0x201

}; // size - 0x210


class C_OP_SetVec : public CParticleFunctionOperator
{
public:

   CPerParticleVecInput m_InputValue; // 0x1F0 - 0x7B8
   ParticleAttributeIndex_t m_nOutputField; // 0x7B8 - 0x7BC
   ParticleSetMethod_t m_nSetMethod; // 0x7BC - 0x7C0
   CPerParticleFloatInput m_Lerp; // 0x7C0 - 0x8F8
   bool m_bNormalizedOutput; // 0x8F8 - 0x8F9

}; // size - 0x900


class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator
{
public:

   VectorExpressionType_t m_nExpression; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0x4] // 0x1F4 - 0x1F8
   CPerParticleVecInput m_vInput1; // 0x1F8 - 0x7C0
   CPerParticleVecInput m_vInput2; // 0x7C0 - 0xD88
   ParticleAttributeIndex_t m_nOutputField; // 0xD88 - 0xD8C
   ParticleSetMethod_t m_nSetMethod; // 0xD8C - 0xD90
   bool m_bNormalizedOutput; // 0xD90 - 0xD91

}; // size - 0xE00


class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator
{
public:

   bool m_bTransformNormals; // 0x1F0 - 0x1F1
   bool m_bTransformRadii; // 0x1F1 - 0x1F2
   unsigned char pad_1F2[0x2] // 0x1F2 - 0x1F4
   int32_t m_nControlPointNumber; // 0x1F4 - 0x1F8

}; // size - 0x200


class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator
{
public:

   bool m_bTransformNormals; // 0x1F0 - 0x1F1
   bool m_bTransformRadii; // 0x1F1 - 0x1F2
   unsigned char pad_1F2[0x2] // 0x1F2 - 0x1F4
   int32_t m_nControlPointNumber; // 0x1F4 - 0x1F8
   float m_flLifeTimeFadeStart; // 0x1F8 - 0x1FC
   float m_flLifeTimeFadeEnd; // 0x1FC - 0x200
   float m_flJumpThreshold; // 0x200 - 0x204
   float m_flPrevPosScale; // 0x204 - 0x208

}; // size - 0x210


class C_OP_Spin : public CGeneralSpin
{
public:


}; // size - 0x210


class C_OP_SpinUpdate : public CSpinUpdateBase
{
public:


}; // size - 0x1F0


class C_OP_SpinYaw : public CGeneralSpin
{
public:


}; // size - 0x210


class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint
{
public:

   CPerParticleFloatInput m_flRestLength; // 0x1F0 - 0x328
   CPerParticleFloatInput m_flMinDistance; // 0x328 - 0x460
   CPerParticleFloatInput m_flMaxDistance; // 0x460 - 0x598
   CPerParticleFloatInput m_flRestingLength; // 0x598 - 0x6D0
   CPerParticleVecInput m_vecAnchorVector; // 0x6D0 - 0xC98

}; // size - 0xCA0


class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission
{
public:

   CParticleCollectionFloatInput m_flDuration; // 0x200 - 0x338
   bool m_bDestroyImmediately; // 0x338 - 0x339
   bool m_bPlayEndCap; // 0x339 - 0x33A

}; // size - 0x340


class C_OP_TeleportBeam : public CParticleFunctionOperator
{
public:

   int32_t m_nCPPosition; // 0x1F0 - 0x1F4
   int32_t m_nCPVelocity; // 0x1F4 - 0x1F8
   int32_t m_nCPMisc; // 0x1F8 - 0x1FC
   int32_t m_nCPColor; // 0x1FC - 0x200
   int32_t m_nCPInvalidColor; // 0x200 - 0x204
   int32_t m_nCPExtraArcData; // 0x204 - 0x208
   Vector m_vGravity; // 0x208 - 0x214
   float m_flArcMaxDuration; // 0x214 - 0x218
   float m_flSegmentBreak; // 0x218 - 0x21C
   float m_flArcSpeed; // 0x21C - 0x220
   float m_flAlpha; // 0x220 - 0x224

}; // size - 0x230


class C_OP_TimeVaryingForce : public CParticleFunctionForce
{
public:

   float m_flStartLerpTime; // 0x1F0 - 0x1F4
   Vector m_StartingForce; // 0x1F4 - 0x200
   float m_flEndLerpTime; // 0x200 - 0x204
   Vector m_EndingForce; // 0x204 - 0x210

}; // size - 0x210


class C_OP_TurbulenceForce : public CParticleFunctionForce
{
public:

   float m_flNoiseCoordScale0; // 0x1F0 - 0x1F4
   float m_flNoiseCoordScale1; // 0x1F4 - 0x1F8
   float m_flNoiseCoordScale2; // 0x1F8 - 0x1FC
   float m_flNoiseCoordScale3; // 0x1FC - 0x200
   Vector m_vecNoiseAmount0; // 0x200 - 0x20C
   Vector m_vecNoiseAmount1; // 0x20C - 0x218
   Vector m_vecNoiseAmount2; // 0x218 - 0x224
   Vector m_vecNoiseAmount3; // 0x224 - 0x230

}; // size - 0x230


class C_OP_TwistAroundAxis : public CParticleFunctionForce
{
public:

   float m_fForceAmount; // 0x1F0 - 0x1F4
   Vector m_TwistAxis; // 0x1F4 - 0x200
   bool m_bLocalSpace; // 0x200 - 0x201
   unsigned char pad_201[0x3] // 0x201 - 0x204
   int32_t m_nControlPointNumber; // 0x204 - 0x208

}; // size - 0x210


class C_OP_UpdateLightSource : public CParticleFunctionOperator
{
public:

   Color m_vColorTint; // 0x1F0 - 0x1F4
   float m_flBrightnessScale; // 0x1F4 - 0x1F8
   float m_flRadiusScale; // 0x1F8 - 0x1FC
   float m_flMinimumLightingRadius; // 0x1FC - 0x200
   float m_flMaximumLightingRadius; // 0x200 - 0x204
   float m_flPositionDampingConstant; // 0x204 - 0x208

}; // size - 0x210


class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator
{
public:

   int32_t m_nControlPointNumber; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1F4 - 0x1F8
   int32_t m_nLocalSpaceCP; // 0x1F8 - 0x1FC
   unsigned char pad_1FC[0x4] // 0x1FC - 0x200
   CPerParticleFloatInput m_flInterpolation; // 0x200 - 0x338
   CPerParticleVecInput m_vecScale; // 0x338 - 0x900
   float m_flBoundaryDampening; // 0x900 - 0x904
   bool m_bSetVelocity; // 0x904 - 0x905
   bool m_bLockToSurface; // 0x905 - 0x906
   unsigned char pad_906[0x2] // 0x906 - 0x908
   float m_flGridSpacing; // 0x908 - 0x90C

}; // size - 0x910


class C_OP_VectorNoise : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F4
   Vector m_vecOutputMin; // 0x1F4 - 0x200
   Vector m_vecOutputMax; // 0x200 - 0x20C
   float m_fl4NoiseScale; // 0x20C - 0x210
   bool m_bAdditive; // 0x210 - 0x211
   bool m_bOffset; // 0x211 - 0x212
   unsigned char pad_212[0x2] // 0x212 - 0x214
   float m_flNoiseAnimationTimeScale; // 0x214 - 0x218

}; // size - 0x220


class C_OP_VelocityDecay : public CParticleFunctionOperator
{
public:

   float m_flMinVelocity; // 0x1F0 - 0x1F4

}; // size - 0x200


class C_OP_VelocityMatchingForce : public CParticleFunctionOperator
{
public:

   float m_flDirScale; // 0x1F0 - 0x1F4
   float m_flSpdScale; // 0x1F4 - 0x1F8
   int32_t m_nCPBroadcast; // 0x1F8 - 0x1FC

}; // size - 0x200


class C_OP_WindForce : public CParticleFunctionForce
{
public:

   Vector m_vForce; // 0x1F0 - 0x1FC

}; // size - 0x200


class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint
{
public:


}; // size - 0x1F0


class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint
{
public:

   int32_t m_nCP; // 0x1F0 - 0x1F4
   Vector m_vecCpOffset; // 0x1F4 - 0x200
   ParticleCollisionMode_t m_nCollisionMode; // 0x200 - 0x204
   ParticleCollisionMode_t m_nCollisionModeMin; // 0x204 - 0x208
   ParticleTraceSet_t m_nTraceSet; // 0x208 - 0x20C
   char m_CollisionGroupName[128]; // 0x20C - 0x28C
   bool m_bWorldOnly; // 0x28C - 0x28D
   bool m_bBrushOnly; // 0x28D - 0x28E
   bool m_bIncludeWater; // 0x28E - 0x28F
   unsigned char pad_28F[0x1] // 0x28F - 0x290
   int32_t m_nIgnoreCP; // 0x290 - 0x294
   float m_flCpMovementTolerance; // 0x294 - 0x298
   float m_flRetestRate; // 0x298 - 0x29C
   float m_flTraceTolerance; // 0x29C - 0x2A0
   float m_flCollisionConfirmationSpeed; // 0x2A0 - 0x2A4
   float m_nMaxTracesPerFrame; // 0x2A4 - 0x2A8
   CPerParticleFloatInput m_flRadiusScale; // 0x2A8 - 0x3E0
   CPerParticleFloatInput m_flBounceAmount; // 0x3E0 - 0x518
   CPerParticleFloatInput m_flSlideAmount; // 0x518 - 0x650
   CPerParticleFloatInput m_flRandomDirScale; // 0x650 - 0x788
   bool m_bDecayBounce; // 0x788 - 0x789
   bool m_bKillonContact; // 0x789 - 0x78A
   unsigned char pad_78A[0x2] // 0x78A - 0x78C
   float m_flMinSpeed; // 0x78C - 0x790
   bool m_bSetNormal; // 0x790 - 0x791
   unsigned char pad_791[0x3] // 0x791 - 0x794
   ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x794 - 0x798
   CPerParticleFloatInput m_flStopSpeed; // 0x798 - 0x8D0
   ParticleAttributeIndex_t m_nEntityStickDataField; // 0x8D0 - 0x8D4

}; // size - 0x8E0


class C_OmniLight : public C_BarnLight
{
public:

   float m_flInnerAngle; // 0xA70 - 0xA74
   float m_flOuterAngle; // 0xA74 - 0xA78
   bool m_bShowLight; // 0xA78 - 0xA79

}; // size - 0xA80


class C_ParadropChopper : public CBaseAnimGraph
{
public:

   Vector m_vecLastRopeTargetPos; // 0x9A0 - 0x9AC
   GameTime_t m_flLastRopeTime; // 0x9AC - 0x9B0
   int32_t m_nRappelABone; // 0x9B0 - 0x9B4
   int32_t m_nRappelBBone; // 0x9B4 - 0x9B8
   CHandle< C_BaseEntity > m_hCallingPlayer; // 0x9B8 - 0x9BC
   bool m_bCalledByPlayer; // 0x9BC - 0x9BD

}; // size - 0x9C0


class C_PathParticleRopeAlias_path_particle_rope_clientside : public C_PathParticleRope
{
public:


}; // size - 0x640


class C_PhysBox : public C_Breakable
{
public:


}; // size - 0x838


class C_PhysMagnet : public CBaseAnimGraph
{
public:

   CUtlVector< int32 > m_aAttachedObjectsFromServer; // 0x998 - 0x9B0
   CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects; // 0x9B0 - 0x9C8

}; // size - 0x9C8


class C_PhysPropAmmoBox : public C_PhysicsPropMultiplayer
{
public:


}; // size - 0xAF0


class C_PhysPropClientside : public C_BreakableProp
{
public:

   GameTime_t m_flTouchDelta; // 0xAE8 - 0xAEC
   GameTime_t m_fDeathTime; // 0xAEC - 0xAF0
   float m_impactEnergyScale; // 0xAF0 - 0xAF4
   float m_inertiaScale; // 0xAF4 - 0xAF8
   float m_flDmgModBullet; // 0xAF8 - 0xAFC
   float m_flDmgModClub; // 0xAFC - 0xB00
   float m_flDmgModExplosive; // 0xB00 - 0xB04
   float m_flDmgModFire; // 0xB04 - 0xB08
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xB08 - 0xB10
   CUtlSymbolLarge m_iszBasePropData; // 0xB10 - 0xB18
   int32_t m_iInteractions; // 0xB18 - 0xB1C
   bool m_bHasBreakPiecesOrCommands; // 0xB1C - 0xB1D

}; // size - 0xB20


class C_PhysPropLootCrate : public C_PhysicsPropMultiplayer
{
public:

   bool m_bRenderInPSPM; // 0xAF8 - 0xAF9
   bool m_bRenderInTablet; // 0xAF9 - 0xAFA
   unsigned char pad_AFA[0x2] // 0xAFA - 0xAFC
   int32_t m_iMaxHealth; // 0xAFC - 0xB00
   int32_t m_iHealth; // 0xB00 - 0xB04

}; // size - 0xB08


class C_PhysPropRadarJammer : public C_PhysicsPropMultiplayer
{
public:


}; // size - 0xAF8


class C_PhysPropWeaponUpgrade : public C_PhysicsPropMultiplayer
{
public:


}; // size - 0xAF0


class C_PickUpModelSlerper : public CBaseAnimGraph
{
public:

   CHandle< C_BaseEntity > m_hPlayerParent; // 0x998 - 0x99C
   CHandle< C_BaseEntity > m_hItem; // 0x99C - 0x9A0
   float m_flTimePickedUp; // 0x9A0 - 0x9A4
   QAngle m_angOriginal; // 0x9A4 - 0x9B0
   Vector m_vecPosOriginal; // 0x9B0 - 0x9BC
   unsigned char pad_9BC[0x4] // 0x9BC - 0x9C0
   QAngle m_angRandom; // 0x9C0 - 0x9CC

}; // size - 0x9D0


class C_PlantedC4Survival : public C_PlantedC4
{
public:


}; // size - 0xA08


class C_PlayerPing : public C_BaseEntity
{
public:

   CHandle< C_BaseEntity > m_hPlayer; // 0x568 - 0x56C
   CHandle< C_BaseEntity > m_hPingedEntity; // 0x56C - 0x570
   int32_t m_iType; // 0x570 - 0x574
   bool m_bUrgent; // 0x574 - 0x575
   char m_szPlaceName[18]; // 0x575 - 0x587

}; // size - 0x588


class C_PlayerSprayDecal : public C_ModelPointEntity
{
public:

   int32_t m_nUniqueID; // 0x838 - 0x83C
   uint32_t m_unAccountID; // 0x83C - 0x840
   uint32_t m_unTraceID; // 0x840 - 0x844
   uint32_t m_rtGcTime; // 0x844 - 0x848
   Vector m_vecEndPos; // 0x848 - 0x854
   Vector m_vecStart; // 0x854 - 0x860
   Vector m_vecLeft; // 0x860 - 0x86C
   Vector m_vecNormal; // 0x86C - 0x878
   int32_t m_nPlayer; // 0x878 - 0x87C
   int32_t m_nEntity; // 0x87C - 0x880
   int32_t m_nHitbox; // 0x880 - 0x884
   float m_flCreationTime; // 0x884 - 0x888
   int32_t m_nTintID; // 0x888 - 0x88C
   uint8_t m_nVersion; // 0x88C - 0x88D
   uint8 m_ubSignature[128]; // 0x88D - 0x90D
   unsigned char pad_90D[0xB] // 0x90D - 0x918
   CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0x918 - 0x948

}; // size - 0x948


class C_PointCameraVFOV : public C_PointCamera
{
public:

   float m_flVerticalFOV; // 0x598 - 0x59C

}; // size - 0x5A0


class C_PointClientUIDialog : public C_BaseClientUIEntity
{
public:

   CHandle< C_BaseEntity > m_hActivator; // 0x868 - 0x86C
   bool m_bStartEnabled; // 0x86C - 0x86D

}; // size - 0x870


class C_PointClientUIHUD : public C_BaseClientUIEntity
{
public:

   bool m_bCheckCSSClasses; // 0x870 - 0x871
   unsigned char pad_871[0x187] // 0x871 - 0x9F8
   bool m_bIgnoreInput; // 0x9F8 - 0x9F9
   unsigned char pad_9F9[0x3] // 0x9F9 - 0x9FC
   float m_flWidth; // 0x9FC - 0xA00
   float m_flHeight; // 0xA00 - 0xA04
   float m_flDPI; // 0xA04 - 0xA08
   float m_flInteractDistance; // 0xA08 - 0xA0C
   float m_flDepthOffset; // 0xA0C - 0xA10
   uint32_t m_unOwnerContext; // 0xA10 - 0xA14
   uint32_t m_unHorizontalAlign; // 0xA14 - 0xA18
   uint32_t m_unVerticalAlign; // 0xA18 - 0xA1C
   uint32_t m_unOrientation; // 0xA1C - 0xA20
   bool m_bAllowInteractionFromAllSceneWorlds; // 0xA20 - 0xA21
   unsigned char pad_A21[0x7] // 0xA21 - 0xA28
   C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xA28 - 0xA40

}; // size - 0xA40


class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel
{
public:

   char m_messageText[512]; // 0xAA0 - 0xCA0

}; // size - 0xCA0


class C_PointCommentaryNode : public CBaseAnimGraph
{
public:

   bool m_bActive; // 0x9A0 - 0x9A1
   bool m_bWasActive; // 0x9A1 - 0x9A2
   unsigned char pad_9A2[0x2] // 0x9A2 - 0x9A4
   GameTime_t m_flEndTime; // 0x9A4 - 0x9A8
   GameTime_t m_flStartTime; // 0x9A8 - 0x9AC
   float m_flStartTimeInCommentary; // 0x9AC - 0x9B0
   CUtlSymbolLarge m_iszCommentaryFile; // 0x9B0 - 0x9B8
   CUtlSymbolLarge m_iszTitle; // 0x9B8 - 0x9C0
   CUtlSymbolLarge m_iszSpeakers; // 0x9C0 - 0x9C8
   int32_t m_iNodeNumber; // 0x9C8 - 0x9CC
   int32_t m_iNodeNumberMax; // 0x9CC - 0x9D0
   bool m_bListenedTo; // 0x9D0 - 0x9D1
   unsigned char pad_9D1[0xF] // 0x9D1 - 0x9E0
   CHandle< C_BaseEntity > m_hViewPosition; // 0x9E0 - 0x9E4
   bool m_bRestartAfterRestore; // 0x9E4 - 0x9E5

}; // size - 0x9E8


class C_PointHMDAnchorOverride : public C_PointHMDAnchor
{
public:


}; // size - 0x548


class C_PointHintUIArrowHighlightModel : public CBaseAnimGraph
{
public:

   matrix3x4_t m_mArrowLocalTransform; // 0x998 - 0x9C8

}; // size - 0x9C8


class C_PointHintUIButtonHighlightModel : public CBaseAnimGraph
{
public:

   matrix3x4_t m_mComponentTransform; // 0x998 - 0x9C8

}; // size - 0x9C8


class C_PointHintUIHighlightModel : public CBaseAnimGraph
{
public:

   CUtlVector< matrix3x4a_t > m_vecRenderModelComponentTransforms; // 0x9C8 - 0x9E0
   int32_t m_nTrackedDeviceIndex; // 0x9E0 - 0x9E4
   unsigned char pad_9E4[0x14] // 0x9E4 - 0x9F8
   matrix3x4_t m_matLocalHighlight; // 0x9F8 - 0xA28
   bool m_bVisible; // 0xA28 - 0xA29

}; // size - 0xA30


class C_PointHintUi : public C_PointClientUIWorldPanel
{
public:

   CUtlSymbolLarge m_pszLessonName; // 0xAD0 - 0xAD8
   CUtlSymbolLarge m_pszCaption; // 0xAD8 - 0xAE0
   Vector m_vOffset; // 0xAE0 - 0xAEC
   WorldTextAttachmentType_t m_attachType; // 0xAEC - 0xAF0
   CHandle< C_BaseEntity > m_hIconTarget; // 0xAF0 - 0xAF4
   unsigned char pad_AF4[0x4] // 0xAF4 - 0xAF8
   CUtlSymbolLarge m_szTargetAttachmentName; // 0xAF8 - 0xB00
   CUtlSymbolLarge m_pszCustomLayoutFile; // 0xB00 - 0xB08
   int32_t m_nTrackedDeviceIndex; // 0xB08 - 0xB0C
   CHandle< C_PropVRHand > m_hHighlightHand; // 0xB0C - 0xB10
   CUtlSymbolLarge m_pszHighlightControllerComponent; // 0xB10 - 0xB18
   CUtlSymbolLarge m_pszHighlightControllerAction; // 0xB18 - 0xB20
   Vector m_vecLocalHighlightPoint; // 0xB20 - 0xB2C
   unsigned char pad_B2C[0x4] // 0xB2C - 0xB30
   CUtlSymbolLarge m_pszHighlightOtherEntityName; // 0xB30 - 0xB38
   bool m_bUseOffScreenIndicator; // 0xB38 - 0xB39

}; // size - 0xB40


class C_PointValueRemapper : public C_BaseEntity
{
public:

   bool m_bDisabled; // 0x538 - 0x539
   bool m_bDisabledOld; // 0x539 - 0x53A
   bool m_bUpdateOnClient; // 0x53A - 0x53B
   unsigned char pad_53B[0x1] // 0x53B - 0x53C
   ValueRemapperInputType_t m_nInputType; // 0x53C - 0x540
   CHandle< C_BaseEntity > m_hRemapLineStart; // 0x540 - 0x544
   CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x544 - 0x548
   float m_flMaximumChangePerSecond; // 0x548 - 0x54C
   float m_flDisengageDistance; // 0x54C - 0x550
   float m_flEngageDistance; // 0x550 - 0x554
   bool m_bRequiresUseKey; // 0x554 - 0x555
   unsigned char pad_555[0x3] // 0x555 - 0x558
   ValueRemapperOutputType_t m_nOutputType; // 0x558 - 0x55C
   unsigned char pad_55C[0x4] // 0x55C - 0x560
   C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x560 - 0x578
   ValueRemapperHapticsType_t m_nHapticsType; // 0x578 - 0x57C
   ValueRemapperMomentumType_t m_nMomentumType; // 0x57C - 0x580
   float m_flMomentumModifier; // 0x580 - 0x584
   float m_flSnapValue; // 0x584 - 0x588
   float m_flCurrentMomentum; // 0x588 - 0x58C
   ValueRemapperRatchetType_t m_nRatchetType; // 0x58C - 0x590
   float m_flRatchetOffset; // 0x590 - 0x594
   float m_flInputOffset; // 0x594 - 0x598
   bool m_bEngaged; // 0x598 - 0x599
   bool m_bFirstUpdate; // 0x599 - 0x59A
   unsigned char pad_59A[0x2] // 0x59A - 0x59C
   float m_flPreviousValue; // 0x59C - 0x5A0
   GameTime_t m_flPreviousUpdateTickTime; // 0x5A0 - 0x5A4
   Vector m_vecPreviousTestPoint; // 0x5A4 - 0x5B0

}; // size - 0x5B0


class C_PointWorldText : public C_ModelPointEntity
{
public:

   bool m_bForceRecreateNextUpdate; // 0x840 - 0x841
   unsigned char pad_841[0xF] // 0x841 - 0x850
   char m_messageText[512]; // 0x850 - 0xA50
   char m_FontName[64]; // 0xA50 - 0xA90
   bool m_bEnabled; // 0xA90 - 0xA91
   bool m_bFullbright; // 0xA91 - 0xA92
   unsigned char pad_A92[0x2] // 0xA92 - 0xA94
   float m_flWorldUnitsPerPx; // 0xA94 - 0xA98
   float m_flFontSize; // 0xA98 - 0xA9C
   float m_flDepthOffset; // 0xA9C - 0xAA0
   Color m_Color; // 0xAA0 - 0xAA4
   PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xAA4 - 0xAA8
   PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xAA8 - 0xAAC
   PointWorldTextReorientMode_t m_nReorientMode; // 0xAAC - 0xAB0

}; // size - 0xAB0


class C_PostProcessingVolume : public C_BaseTrigger
{
public:

   CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x850 - 0x858
   float m_flFadeDuration; // 0x858 - 0x85C
   float m_flMinLogExposure; // 0x85C - 0x860
   float m_flMaxLogExposure; // 0x860 - 0x864
   float m_flMinExposure; // 0x864 - 0x868
   float m_flMaxExposure; // 0x868 - 0x86C
   float m_flExposureCompensation; // 0x86C - 0x870
   float m_flExposureFadeSpeedUp; // 0x870 - 0x874
   float m_flExposureFadeSpeedDown; // 0x874 - 0x878
   float m_flTonemapEVSmoothingRange; // 0x878 - 0x87C
   bool m_bMaster; // 0x87C - 0x87D
   bool m_bExposureControl; // 0x87D - 0x87E
   unsigned char pad_87E[0x2] // 0x87E - 0x880
   float m_flRate; // 0x880 - 0x884
   float m_flTonemapPercentTarget; // 0x884 - 0x888
   float m_flTonemapPercentBrightPixels; // 0x888 - 0x88C
   float m_flTonemapMinAvgLum; // 0x88C - 0x890

}; // size - 0x890


class C_Precipitation : public C_BaseTrigger
{
public:

   float m_flDensity; // 0x840 - 0x844
   unsigned char pad_844[0xC] // 0x844 - 0x850
   float m_flParticleInnerDist; // 0x850 - 0x854
   unsigned char pad_854[0x4] // 0x854 - 0x858
   char* m_pParticleDef; // 0x858 - 0x860
   unsigned char pad_860[0x20] // 0x860 - 0x880
   TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x880 - 0x888
   bool m_bActiveParticlePrecipEmitter[1]; // 0x888 - 0x889
   bool m_bParticlePrecipInitialized; // 0x889 - 0x88A
   bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x88A - 0x88B
   unsigned char pad_88B[0x1] // 0x88B - 0x88C
   int32_t m_nAvailableSheetSequencesMaxIndex; // 0x88C - 0x890

}; // size - 0x890


class C_PrecipitationBlocker : public C_BaseModelEntity
{
public:


}; // size - 0x838


class C_PropCounter : public CBaseAnimGraph
{
public:

   float m_flDisplayValue; // 0x998 - 0x99C
   float m_flDisplayValueLocal; // 0x99C - 0x9A0
   float m_flTimeOfLastValueChange; // 0x9A0 - 0x9A4
   float m_flPreviousValue; // 0x9A4 - 0x9A8

}; // size - 0x9C0


class C_RagdollManager : public C_BaseEntity
{
public:

   int8_t m_iCurrentMaxRagdollCount; // 0x538 - 0x539

}; // size - 0x540


class C_RagdollPropAttached : public C_RagdollProp
{
public:

   uint32_t m_boneIndexAttached; // 0xA10 - 0xA14
   uint32_t m_ragdollAttachedObjectIndex; // 0xA14 - 0xA18
   Vector m_attachmentPointBoneSpace; // 0xA18 - 0xA24
   Vector m_attachmentPointRagdollSpace; // 0xA24 - 0xA30
   Vector m_vecOffset; // 0xA30 - 0xA3C
   float m_parentTime; // 0xA3C - 0xA40
   bool m_bHasParent; // 0xA40 - 0xA41

}; // size - 0xA48


class C_RectLight : public C_BarnLight
{
public:

   bool m_bShowLight; // 0xA70 - 0xA71

}; // size - 0xA78


class C_RetakeGameRules
{
public:

   int32_t m_nMatchSeed; // 0xF8 - 0xFC
   bool m_bBlockersPresent; // 0xFC - 0xFD
   bool m_bRoundInProgress; // 0xFD - 0xFE
   unsigned char pad_FE[0x2] // 0xFE - 0x100
   int32_t m_iFirstSecondHalfRound; // 0x100 - 0x104
   int32_t m_iBombSite; // 0x104 - 0x108

}; // size - 0x118


class C_RopeKeyframe : public C_BaseModelEntity
{
public:

   class CPhysicsDelegate
   {
   public:

      C_RopeKeyframe* m_pKeyframe; // 0x8 - 0x10

   }; // size - 0x10

   CBitVec< 10 > m_LinksTouchingSomething; // 0x840 - 0x844
   int32_t m_nLinksTouchingSomething; // 0x844 - 0x848
   bool m_bApplyWind; // 0x848 - 0x849
   unsigned char pad_849[0x3] // 0x849 - 0x84C
   int32_t m_fPrevLockedPoints; // 0x84C - 0x850
   int32_t m_iForcePointMoveCounter; // 0x850 - 0x854
   bool m_bPrevEndPointPos[2]; // 0x854 - 0x856
   unsigned char pad_856[0x2] // 0x856 - 0x858
   Vector m_vPrevEndPointPos[2]; // 0x858 - 0x870
   float m_flCurScroll; // 0x870 - 0x874
   float m_flScrollSpeed; // 0x874 - 0x878
   uint16_t m_RopeFlags; // 0x878 - 0x87A
   unsigned char pad_87A[0x6] // 0x87A - 0x880
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x880 - 0x888
   unsigned char pad_888[0x270] // 0x888 - 0xAF8
   Vector m_LightValues[10]; // 0xAF8 - 0xB70
   uint8_t m_nSegments; // 0xB70 - 0xB71
   unsigned char pad_B71[0x3] // 0xB71 - 0xB74
   CHandle< C_BaseEntity > m_hStartPoint; // 0xB74 - 0xB78
   CHandle< C_BaseEntity > m_hEndPoint; // 0xB78 - 0xB7C
   AttachmentHandle_t m_iStartAttachment; // 0xB7C - 0xB7D
   AttachmentHandle_t m_iEndAttachment; // 0xB7D - 0xB7E
   uint8_t m_Subdiv; // 0xB7E - 0xB7F
   unsigned char pad_B7F[0x1] // 0xB7F - 0xB80
   int16_t m_RopeLength; // 0xB80 - 0xB82
   int16_t m_Slack; // 0xB82 - 0xB84
   float m_TextureScale; // 0xB84 - 0xB88
   uint8_t m_fLockedPoints; // 0xB88 - 0xB89
   uint8_t m_nChangeCount; // 0xB89 - 0xB8A
   unsigned char pad_B8A[0x2] // 0xB8A - 0xB8C
   float m_Width; // 0xB8C - 0xB90
   C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0xB90 - 0xBA0
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xBA0 - 0xBA8
   int32_t m_TextureHeight; // 0xBA8 - 0xBAC
   Vector m_vecImpulse; // 0xBAC - 0xBB8
   Vector m_vecPreviousImpulse; // 0xBB8 - 0xBC4
   float m_flCurrentGustTimer; // 0xBC4 - 0xBC8
   float m_flCurrentGustLifetime; // 0xBC8 - 0xBCC
   float m_flTimeToNextGust; // 0xBCC - 0xBD0
   Vector m_vWindDir; // 0xBD0 - 0xBDC
   Vector m_vColorMod; // 0xBDC - 0xBE8
   Vector m_vCachedEndPointAttachmentPos[2]; // 0xBE8 - 0xC00
   QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xC00 - 0xC18
   bool m_bConstrainBetweenEndpoints; // 0xC18 - 0xC19
   bitfield:1 m_bEndPointAttachmentPositionsDirty; // 0x0 - 0x0
   bitfield:1 m_bEndPointAttachmentAnglesDirty; // 0x0 - 0x0
   bitfield:1 m_bNewDataThisFrame; // 0x0 - 0x0
   bitfield:1 m_bPhysicsInitted; // 0x0 - 0x0

}; // size - 0xC20



class C_SceneEntity : public C_PointEntity
{
public:

   class QueuedEvents_t
   {
   public:

      float starttime; // 0x0 - 0x4

   }; // size - 0x18

   bool m_bIsPlayingBack; // 0x540 - 0x541
   bool m_bPaused; // 0x541 - 0x542
   bool m_bMultiplayer; // 0x542 - 0x543
   bool m_bAutogenerated; // 0x543 - 0x544
   float m_flForceClientTime; // 0x544 - 0x548
   uint16_t m_nSceneStringIndex; // 0x548 - 0x54A
   bool m_bClientOnly; // 0x54A - 0x54B
   unsigned char pad_54B[0x1] // 0x54B - 0x54C
   CHandle< C_BaseFlex > m_hOwner; // 0x54C - 0x550
   C_NetworkUtlVectorBase< CHandle< C_BaseFlex > > m_hActorList; // 0x550 - 0x568
   bool m_bWasPlaying; // 0x568 - 0x569
   unsigned char pad_569[0xF] // 0x569 - 0x578
   CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents; // 0x578 - 0x590
   float m_flCurrentTime; // 0x590 - 0x594

}; // size - 0x598



class C_SensorGrenade : public C_BaseCSGrenade
{
public:


}; // size - 0x1410


class C_SensorGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
public:


}; // size - 0xC20


class C_ShatterGlassShardPhysics : public C_PhysicsProp
{
public:

   shard_model_desc_t m_ShardDesc; // 0xAF8 - 0xB58

}; // size - 0xB58


class C_SingleplayRules : public C_GameRules
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class C_SkyCamera : public C_BaseEntity
{
public:

   sky3dparams_t m_skyboxData; // 0x538 - 0x5C8
   CUtlStringToken m_skyboxSlotToken; // 0x5C8 - 0x5CC
   bool m_bUseAngles; // 0x5CC - 0x5CD
   unsigned char pad_5CD[0x3] // 0x5CD - 0x5D0
   C_SkyCamera* m_pNext; // 0x5D0 - 0x5D8

}; // size - 0x5D8


class C_SmokeGrenade : public C_BaseCSGrenade
{
public:


}; // size - 0x1410


class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
public:

   int32_t m_nSmokeEffectTickBegin; // 0xC08 - 0xC0C
   bool m_bDidSmokeEffect; // 0xC0C - 0xC0D
   unsigned char pad_C0D[0x3] // 0xC0D - 0xC10
   int32_t m_nRandomSeed; // 0xC10 - 0xC14
   Vector m_vSmokeColor; // 0xC14 - 0xC20
   Vector m_vSmokeDetonationPos; // 0xC20 - 0xC2C
   unsigned char pad_C2C[0x4] // 0xC2C - 0xC30
   CUtlVector< uint8 > m_VoxelFrameData; // 0xC30 - 0xC48
   bool m_bSmokeVolumeDataReceived; // 0xC48 - 0xC49
   bool m_bSmokeEffectSpawned; // 0xC49 - 0xC4A

}; // size - 0xD90


class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase
{
public:

   Vector m_vMin; // 0x560 - 0x56C
   Vector m_vMax; // 0x56C - 0x578

}; // size - 0x578


class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase
{
public:

   float m_flRadius; // 0x560 - 0x564

}; // size - 0x568


class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity
{
public:


}; // size - 0x558


class C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase
{
public:


}; // size - 0x558


class C_SoundOpvarSetPathCornerEntity : public C_SoundOpvarSetPointEntity
{
public:


}; // size - 0x558


class C_SpotlightEnd : public C_BaseModelEntity
{
public:

   float m_flLightScale; // 0x838 - 0x83C
   float m_Radius; // 0x83C - 0x840

}; // size - 0x848


class C_SpriteOriented : public C_Sprite
{
public:


}; // size - 0x968


class C_Sun : public C_BaseModelEntity
{
public:

   ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0x838 - 0x83C
   ParticleIndex_t m_fxSunFlareEffectIndex; // 0x83C - 0x840
   float m_fdistNormalize; // 0x840 - 0x844
   Vector m_vSunPos; // 0x844 - 0x850
   Vector m_vDirection; // 0x850 - 0x85C
   unsigned char pad_85C[0x4] // 0x85C - 0x860
   CUtlSymbolLarge m_iszEffectName; // 0x860 - 0x868
   CUtlSymbolLarge m_iszSSEffectName; // 0x868 - 0x870
   Color m_clrOverlay; // 0x870 - 0x874
   bool m_bOn; // 0x874 - 0x875
   bool m_bmaxColor; // 0x875 - 0x876
   unsigned char pad_876[0x2] // 0x876 - 0x878
   float m_flSize; // 0x878 - 0x87C
   float m_flHazeScale; // 0x87C - 0x880
   float m_flRotation; // 0x880 - 0x884
   float m_flHDRColorScale; // 0x884 - 0x888
   float m_flAlphaHaze; // 0x888 - 0x88C
   float m_flAlphaScale; // 0x88C - 0x890
   float m_flAlphaHdr; // 0x890 - 0x894
   float m_flFarZScale; // 0x894 - 0x898

}; // size - 0x898


class C_SunGlowOverlay : public CGlowOverlay
{
public:

   bool m_bModulateByDot; // 0xD0 - 0xD1

}; // size - 0xD8


class C_SurvivalGameRules
{
public:

   Vector m_vecPlayAreaMins; // 0x8 - 0x14
   Vector m_vecPlayAreaMaxs; // 0x14 - 0x20
   int32 m_iPlayerSpawnHexIndices[64]; // 0x20 - 0x120
   ESurvivalSpawnTileState m_SpawnTileState[224]; // 0x120 - 0x200
   float m_flSpawnSelectionTimeStartCurrentStage; // 0x200 - 0x204
   float m_flSpawnSelectionTimeEndCurrentStage; // 0x204 - 0x208
   float m_flSpawnSelectionTimeEndLastStage; // 0x208 - 0x20C
   SpawnStage_t m_spawnStage; // 0x20C - 0x210
   float m_flTabletHexOriginX; // 0x210 - 0x214
   float m_flTabletHexOriginY; // 0x214 - 0x218
   float m_flTabletHexSize; // 0x218 - 0x21C
   unsigned char pad_21C[0x4] // 0x21C - 0x220
   uint64 m_roundData_playerXuids[64]; // 0x220 - 0x420
   int32 m_roundData_playerPositions[64]; // 0x420 - 0x520
   int32 m_roundData_playerTeams[64]; // 0x520 - 0x620
   ESurvivalGameRuleDecision_t m_SurvivalGameRuleDecisionTypes[16]; // 0x620 - 0x660
   int32 m_SurvivalGameRuleDecisionValues[16]; // 0x660 - 0x6A0
   float m_flSurvivalStartTime; // 0x6A0 - 0x6A4
   float m_flLastThinkTime; // 0x6A4 - 0x6A8

}; // size - 0x6C0


class C_SurvivalSpawnChopper : public CBaseAnimGraph
{
public:


}; // size - 0x998


class C_Tablet : public C_WeaponCSBase
{
public:

   GameTime_t m_flUpgradeExpirationTime[4]; // 0x13D8 - 0x13E8
   int32 m_vecLocalHexFlags[42]; // 0x13E8 - 0x1490
   int32_t m_nContractKillGridIndex; // 0x1490 - 0x1494
   int32_t m_nContractKillGridHighResIndex; // 0x1494 - 0x1498
   bool m_bTabletReceptionIsBlocked; // 0x1498 - 0x1499
   unsigned char pad_1499[0x3] // 0x1499 - 0x149C
   float m_flScanProgress; // 0x149C - 0x14A0
   GameTime_t m_flBootTime; // 0x14A0 - 0x14A4
   GameTime_t m_flShowMapTime; // 0x14A4 - 0x14A8
   Vector m_vecNearestMetalCratePos; // 0x14A8 - 0x14B4
   tablet_skin_state_t m_skinState; // 0x14B4 - 0x14B5
   unsigned char pad_14B5[0x3] // 0x14B5 - 0x14B8
   int32 m_vecNotificationIds[8]; // 0x14B8 - 0x14D8
   GameTime_t m_vecNotificationTimestamps[8]; // 0x14D8 - 0x14F8
   int32_t m_nLastPurchaseIndex; // 0x14F8 - 0x14FC
   Vector m_vecPlayerPositionHistory[24]; // 0x14FC - 0x161C
   int32 m_vecLocalHexFlagsClientCopy[42]; // 0x161C - 0x16C4
   GameTime_t m_vecLastHexPlayerOccupancyChange[6][42]; // 0x16C4 - 0x1AB4
   unsigned char pad_1AB4[0x34] // 0x1AB4 - 0x1AE8
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_radarMaterial; // 0x1AE8 - 0x1AF0
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_buildingMaterial; // 0x1AF0 - 0x1AF8
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hZoneOverlayMaterial; // 0x1AF8 - 0x1B00
   float m_flNoiseFadeAlpha; // 0x1B00 - 0x1B04
   Color m_WorkingColor; // 0x1B04 - 0x1B08
   Vector m_vecLastCameraPos; // 0x1B08 - 0x1B14
   QAngle m_angLastCameraAng; // 0x1B14 - 0x1B20
   int32_t m_nDrawElementCount; // 0x1B20 - 0x1B24
   float m_flPrevScanProgress; // 0x1B24 - 0x1B28
   int32_t m_nRenderTargetRes; // 0x1B28 - 0x1B2C
   float m_flLastClosePoseParamVal; // 0x1B2C - 0x1B30

}; // size - 0x1B30


class C_TeamRoundTimer : public C_BaseEntity
{
public:

   bool m_bTimerPaused; // 0x538 - 0x539
   unsigned char pad_539[0x3] // 0x539 - 0x53C
   float m_flTimeRemaining; // 0x53C - 0x540
   GameTime_t m_flTimerEndTime; // 0x540 - 0x544
   bool m_bIsDisabled; // 0x544 - 0x545
   bool m_bShowInHUD; // 0x545 - 0x546
   unsigned char pad_546[0x2] // 0x546 - 0x548
   int32_t m_nTimerLength; // 0x548 - 0x54C
   int32_t m_nTimerInitialLength; // 0x54C - 0x550
   int32_t m_nTimerMaxLength; // 0x550 - 0x554
   bool m_bAutoCountdown; // 0x554 - 0x555
   unsigned char pad_555[0x3] // 0x555 - 0x558
   int32_t m_nSetupTimeLength; // 0x558 - 0x55C
   int32_t m_nState; // 0x55C - 0x560
   bool m_bStartPaused; // 0x560 - 0x561
   bool m_bInCaptureWatchState; // 0x561 - 0x562
   unsigned char pad_562[0x2] // 0x562 - 0x564
   float m_flTotalTime; // 0x564 - 0x568
   bool m_bStopWatchTimer; // 0x568 - 0x569
   bool m_bFireFinished; // 0x569 - 0x56A
   bool m_bFire5MinRemain; // 0x56A - 0x56B
   bool m_bFire4MinRemain; // 0x56B - 0x56C
   bool m_bFire3MinRemain; // 0x56C - 0x56D
   bool m_bFire2MinRemain; // 0x56D - 0x56E
   bool m_bFire1MinRemain; // 0x56E - 0x56F
   bool m_bFire30SecRemain; // 0x56F - 0x570
   bool m_bFire10SecRemain; // 0x570 - 0x571
   bool m_bFire5SecRemain; // 0x571 - 0x572
   bool m_bFire4SecRemain; // 0x572 - 0x573
   bool m_bFire3SecRemain; // 0x573 - 0x574
   bool m_bFire2SecRemain; // 0x574 - 0x575
   bool m_bFire1SecRemain; // 0x575 - 0x576
   unsigned char pad_576[0x2] // 0x576 - 0x578
   int32_t m_nOldTimerLength; // 0x578 - 0x57C
   int32_t m_nOldTimerState; // 0x57C - 0x580

}; // size - 0x580


class C_TextureBasedAnimatable : public C_BaseModelEntity
{
public:

   bool m_bLoop; // 0x838 - 0x839
   unsigned char pad_839[0x3] // 0x839 - 0x83C
   float m_flFPS; // 0x83C - 0x840
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x840 - 0x848
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x848 - 0x850
   Vector m_vAnimationBoundsMin; // 0x850 - 0x85C
   Vector m_vAnimationBoundsMax; // 0x85C - 0x868
   float m_flStartTime; // 0x868 - 0x86C
   float m_flStartFrame; // 0x86C - 0x870

}; // size - 0x870


class C_TintController : public C_BaseEntity
{
public:


}; // size - 0x550


class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2
{
public:


}; // size - 0x560


class C_TriggerBuoyancy : public C_BaseTrigger
{
public:

   CBuoyancyHelper m_BuoyancyHelper; // 0x840 - 0x860
   float m_flFluidDensity; // 0x860 - 0x864

}; // size - 0x868


class C_TriggerCamera : public C_BaseEntity
{
public:


}; // size - 0x538


class C_TriggerLerpObject : public C_BaseTrigger
{
public:


}; // size - 0x840


class C_TriggerVolume : public C_BaseModelEntity
{
public:


}; // size - 0x838


class C_TripWireFire : public C_BaseCSGrenade
{
public:


}; // size - 0x1410


class C_TripWireFireProjectile : public C_BaseGrenade
{
public:

   GameTime_t m_flAttachTime; // 0xB78 - 0xB7C
   Vector m_vecTripWireEndPositions[10]; // 0xB7C - 0xBF4
   bool m_bTripWireEndPositionsUsed[10]; // 0xBF4 - 0xBFE
   unsigned char pad_BFE[0x2] // 0xBFE - 0xC00
   int32_t m_nTripWireStartIndex0; // 0xC00 - 0xC04
   int32_t m_nTripWireEndIndex0; // 0xC04 - 0xC08
   int32_t m_nTripWireCenterIndex0; // 0xC08 - 0xC0C

}; // size - 0xC10


class C_ViewmodelAttachmentModel : public CBaseAnimGraph
{
public:


}; // size - 0x998


class C_ViewmodelWeapon : public CBaseAnimGraph
{
public:

   char* m_worldModel; // 0x998 - 0x9A0

}; // size - 0x9A0


class C_VoteController : public C_BaseEntity
{
public:

   int32_t m_iActiveIssueIndex; // 0x548 - 0x54C
   int32_t m_iOnlyTeamToVote; // 0x54C - 0x550
   int32 m_nVoteOptionCount[5]; // 0x550 - 0x564
   int32_t m_nPotentialVotes; // 0x564 - 0x568
   bool m_bVotesDirty; // 0x568 - 0x569
   bool m_bTypeDirty; // 0x569 - 0x56A
   bool m_bIsYesNoVote; // 0x56A - 0x56B

}; // size - 0x570


class C_WaterBullet : public CBaseAnimGraph
{
public:


}; // size - 0x998


class C_WeaponAWP : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponAug : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponBizon : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponElite : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponFamas : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponFiveSeven : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponG3SG1 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponGalilAR : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponGlock : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponHKP2000 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponM249 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponM4A1 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponMAC10 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponMP7 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponMP9 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponMag7 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponNOVA : public C_WeaponCSBase
{
public:


}; // size - 0x13D0


class C_WeaponNegev : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponP250 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponP90 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponSCAR20 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponSG556 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponSSG08 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponSawedoff : public C_WeaponCSBase
{
public:


}; // size - 0x13D0


class C_WeaponShield : public C_WeaponCSBaseGun
{
public:

   float m_flDisplayHealth; // 0x13F0 - 0x13F4

}; // size - 0x1400


class C_WeaponTaser : public C_WeaponCSBaseGun
{
public:

   GameTime_t m_fFireTime; // 0x13F0 - 0x13F4

}; // size - 0x1400


class C_WeaponTec9 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponUMP45 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponXM1014 : public C_WeaponCSBase
{
public:


}; // size - 0x13D0


class C_WeaponZoneRepulsor : public C_WeaponCSBaseGun
{
public:

   float m_flPitchLocal; // 0x13F0 - 0x13F4
   GameTime_t m_flLastTimeNotIdle; // 0x13F4 - 0x13F8

}; // size - 0x1400


class C_World : public C_BaseModelEntity
{
public:


}; // size - 0x838


class C_WorldModelGloves : public CBaseAnimGraph
{
public:


}; // size - 0x998


class C_WorldModelNametag : public CBaseAnimGraph
{
public:


}; // size - 0x998


class C_WorldModelStattrak : public CBaseAnimGraph
{
public:


}; // size - 0x998


class C_fogplayerparams_t
{
public:

   CHandle< C_FogController > m_hCtrl; // 0x8 - 0xC
   float m_flTransitionTime; // 0xC - 0x10
   Color m_OldColor; // 0x10 - 0x14
   float m_flOldStart; // 0x14 - 0x18
   float m_flOldEnd; // 0x18 - 0x1C
   float m_flOldMaxDensity; // 0x1C - 0x20
   float m_flOldHDRColorScale; // 0x20 - 0x24
   float m_flOldFarZ; // 0x24 - 0x28
   Color m_NewColor; // 0x28 - 0x2C
   float m_flNewStart; // 0x2C - 0x30
   float m_flNewEnd; // 0x30 - 0x34
   float m_flNewMaxDensity; // 0x34 - 0x38
   float m_flNewHDRColorScale; // 0x38 - 0x3C
   float m_flNewFarZ; // 0x3C - 0x40

}; // size - 0x40


class CastSphereSATParams_t
{
public:

   Vector m_vRayStart; // 0x0 - 0xC
   Vector m_vRayDelta; // 0xC - 0x18
   float m_flRadius; // 0x18 - 0x1C
   float m_flMaxFraction; // 0x1C - 0x20
   float m_flScale; // 0x20 - 0x24
   unsigned char pad_24[0x4] // 0x24 - 0x28
   RnHull_t* m_pHull; // 0x28 - 0x30

}; // size - 0x30


class ChainToSolveData_t
{
public:

   int32_t m_nChainIndex; // 0x0 - 0x4
   IKSolverSettings_t m_SolverSettings; // 0x4 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   IKTargetSettings_t m_TargetSettings; // 0x10 - 0x30
   SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x30 - 0x34
   float m_flDebugNormalizedValue; // 0x34 - 0x38
   unsigned char pad_38[0x8] // 0x38 - 0x40
   VectorAligned m_vDebugOffset; // 0x40 - 0x50

}; // size - 0x50


class ChangeAccessorFieldPathIndex_t
{
public:

   int16_t m_Value; // 0x0 - 0x2

}; // size - 0x2


class CollisionGroupContext_t
{
public:

   int32_t m_nCollisionGroupNumber; // 0x0 - 0x4

}; // size - 0x4


class CommandToolCommand_t
{
public:

   bool m_bEnabled; // 0x0 - 0x1
   bool m_bOpened; // 0x1 - 0x2
   unsigned char pad_2[0x2] // 0x2 - 0x4
   uint32_t m_InternalId; // 0x4 - 0x8
   CUtlString m_ShortName; // 0x8 - 0x10
   CommandExecMode_t m_ExecMode; // 0x10 - 0x14
   unsigned char pad_14[0x4] // 0x14 - 0x18
   CUtlString m_SpawnGroup; // 0x18 - 0x20
   float m_PeriodicExecDelay; // 0x20 - 0x24
   CommandEntitySpecType_t m_SpecType; // 0x24 - 0x28
   CUtlString m_EntitySpec; // 0x28 - 0x30
   CUtlString m_Commands; // 0x30 - 0x38
   DebugOverlayBits_t m_SetDebugBits; // 0x38 - 0x40
   DebugOverlayBits_t m_ClearDebugBits; // 0x40 - 0x48

}; // size - 0x50


class CompMatMutatorCondition_t
{
public:

   CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CUtlString m_strMutatorConditionContainerName; // 0x8 - 0x10
   CUtlString m_strMutatorConditionContainerVarName; // 0x10 - 0x18
   CUtlString m_strMutatorConditionContainerVarValue; // 0x18 - 0x20
   bool m_bPassWhenTrue; // 0x20 - 0x21

}; // size - 0x28


class CompMatPropertyMutator_t
{
public:

   bool m_bEnabled; // 0x0 - 0x1
   unsigned char pad_1[0x3] // 0x1 - 0x4
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
   CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68 - 0x2C0
   CUtlString m_strGenerateTexture_TargetParam; // 0x2C0 - 0x2C8
   CUtlString m_strGenerateTexture_InitialContainer; // 0x2C8 - 0x2D0
   int32_t m_nResolution; // 0x2D0 - 0x2D4
   bool m_bSplatDebugInfo; // 0x2D4 - 0x2D5
   bool m_bCaptureInRenderDoc; // 0x2D5 - 0x2D6
   unsigned char pad_2D6[0x2] // 0x2D6 - 0x2D8
   CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions; // 0x2D8 - 0x2F0
   CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators; // 0x2F0 - 0x308
   CUtlString m_strPopInputQueue_Container; // 0x308 - 0x310
   CUtlString m_strDrawText_InputContainerSrc; // 0x310 - 0x318
   CUtlString m_strDrawText_InputContainerProperty; // 0x318 - 0x320
   Vector2D m_vecDrawText_Position; // 0x320 - 0x328
   CUtlVector< CompMatMutatorCondition_t > m_vecConditions; // 0x328 - 0x340

}; // size - 0x340


class CompositeMaterialAssemblyProcedure_t
{
public:

   CUtlVector< CResourceName > m_vecCompMatIncludes; // 0x0 - 0x18
   CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters; // 0x18 - 0x30
   CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers; // 0x30 - 0x48
   CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators; // 0x48 - 0x60

}; // size - 0x60


class CompositeMaterialEditorPoint_t
{
public:

   CResourceName m_ModelName; // 0x0 - 0xE0
   int32_t m_nSequenceIndex; // 0xE0 - 0xE4
   float m_flCycle; // 0xE4 - 0xE8
   KeyValues3 m_KVModelStateChoices; // 0xE8 - 0xF8
   bool m_bEnableChildModel; // 0xF8 - 0xF9
   unsigned char pad_F9[0x7] // 0xF9 - 0x100
   CResourceName m_ChildModelName; // 0x100 - 0x1E0
   CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures; // 0x1E0 - 0x1F8
   CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials; // 0x1F8 - 0x210

}; // size - 0x218


class CompositeMaterialInputContainer_t
{
public:

   bool m_bEnabled; // 0x0 - 0x1
   unsigned char pad_1[0x3] // 0x1 - 0x4
   CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; // 0x4 - 0x8
   CResourceName m_strSpecificContainerMaterial; // 0x8 - 0xE8
   CUtlString m_strAttrName; // 0xE8 - 0xF0
   CUtlString m_strAlias; // 0xF0 - 0xF8
   CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables; // 0xF8 - 0x110
   CUtlString m_strAttrNameForVar; // 0x110 - 0x118
   bool m_bExposeExternally; // 0x118 - 0x119

}; // size - 0x138


class CompositeMaterialInputLooseVariable_t
{
public:

   CUtlString m_strName; // 0x0 - 0x8
   bool m_bExposeExternally; // 0x8 - 0x9
   unsigned char pad_9[0x7] // 0x9 - 0x10
   CUtlString m_strExposedFriendlyName; // 0x10 - 0x18
   CUtlString m_strExposedFriendlyGroupName; // 0x18 - 0x20
   CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x20 - 0x24
   bool m_bValueBoolean; // 0x24 - 0x25
   unsigned char pad_25[0x3] // 0x25 - 0x28
   int32_t m_nValueIntX; // 0x28 - 0x2C
   int32_t m_nValueIntY; // 0x2C - 0x30
   int32_t m_nValueIntZ; // 0x30 - 0x34
   int32_t m_nValueIntW; // 0x34 - 0x38
   bool m_bHasFloatBounds; // 0x38 - 0x39
   unsigned char pad_39[0x3] // 0x39 - 0x3C
   float m_flValueFloatX; // 0x3C - 0x40
   float m_flValueFloatX_Min; // 0x40 - 0x44
   float m_flValueFloatX_Max; // 0x44 - 0x48
   float m_flValueFloatY; // 0x48 - 0x4C
   float m_flValueFloatY_Min; // 0x4C - 0x50
   float m_flValueFloatY_Max; // 0x50 - 0x54
   float m_flValueFloatZ; // 0x54 - 0x58
   float m_flValueFloatZ_Min; // 0x58 - 0x5C
   float m_flValueFloatZ_Max; // 0x5C - 0x60
   float m_flValueFloatW; // 0x60 - 0x64
   float m_flValueFloatW_Min; // 0x64 - 0x68
   float m_flValueFloatW_Max; // 0x68 - 0x6C
   Color m_cValueColor4; // 0x6C - 0x70
   CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x70 - 0x74
   unsigned char pad_74[0x4] // 0x74 - 0x78
   CResourceName m_strResourceMaterial; // 0x78 - 0x158
   CUtlString m_strTextureContentAssetPath; // 0x158 - 0x160
   CResourceName m_strTextureRuntimeResourcePath; // 0x160 - 0x240
   CUtlString m_strTextureCompilationVtexTemplate; // 0x240 - 0x248
   CompositeMaterialInputTextureType_t m_nTextureType; // 0x248 - 0x24C
   unsigned char pad_24C[0x4] // 0x24C - 0x250
   CUtlString m_strString; // 0x250 - 0x258

}; // size - 0x258


class CompositeMaterialMatchFilter_t
{
public:

   CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CUtlString m_strMatchFilter; // 0x8 - 0x10
   CUtlString m_strMatchValue; // 0x10 - 0x18
   bool m_bPassWhenTrue; // 0x18 - 0x19

}; // size - 0x20


class CompositeMaterial_t
{
public:

   KeyValues3 m_TargetKVs; // 0x8 - 0x18
   KeyValues3 m_PreGenerationKVs; // 0x18 - 0x28
   KeyValues3 m_FinalKVs; // 0x28 - 0x38
   unsigned char pad_38[0x8] // 0x38 - 0x40
   CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures; // 0x40 - 0x58

}; // size - 0x60


class ConceptHistory_t
{
public:

   float timeSpoken; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CRR_Response m_response; // 0x8 - 0x1F0

}; // size - 0x1F0


class ConfigIndex
{
public:

   uint16_t m_nGroup; // 0x0 - 0x2
   uint16_t m_nConfig; // 0x2 - 0x4

}; // size - 0x4


class ConstantInfo_t
{
public:

   CUtlString m_name; // 0x0 - 0x8
   CUtlStringToken m_nameToken; // 0x8 - 0xC
   float m_flValue; // 0xC - 0x10

}; // size - 0x10


class ConstraintSoundInfo
{
public:

   VelocitySampler m_vSampler; // 0x8 - 0x1C
   unsigned char pad_1C[0x4] // 0x1C - 0x20
   SimpleConstraintSoundProfile m_soundProfile; // 0x20 - 0x40
   Vector m_forwardAxis; // 0x40 - 0x4C
   unsigned char pad_4C[0x4] // 0x4C - 0x50
   CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50 - 0x58
   CUtlSymbolLarge m_iszTravelSoundBack; // 0x58 - 0x60
   unsigned char pad_60[0x8] // 0x60 - 0x68
   CUtlSymbolLarge m_iszReversalSounds[3]; // 0x68 - 0x80
   bool m_bPlayTravelSound; // 0x80 - 0x81
   bool m_bPlayReversalSound; // 0x81 - 0x82

}; // size - 0x88


class ControlPointReference_t
{
public:

   int32_t m_controlPointNameString; // 0x0 - 0x4
   Vector m_vOffsetFromControlPoint; // 0x4 - 0x10
   bool m_bOffsetInLocalSpace; // 0x10 - 0x11

}; // size - 0x14


class CountdownTimer
{
public:

   float m_duration; // 0x8 - 0xC
   GameTime_t m_timestamp; // 0xC - 0x10
   float m_timescale; // 0x10 - 0x14
   WorldGroupId_t m_nWorldGroupId; // 0x14 - 0x18

}; // size - 0x18


class CountdownTimer
{
public:

   float m_duration; // 0x8 - 0xC
   GameTime_t m_timestamp; // 0xC - 0x10
   float m_timescale; // 0x10 - 0x14
   WorldGroupId_t m_nWorldGroupId; // 0x14 - 0x18

}; // size - 0x18


class CovMatrix3
{
public:

   Vector m_vDiag; // 0x0 - 0xC
   float m_flXY; // 0xC - 0x10
   float m_flXZ; // 0x10 - 0x14
   float m_flYZ; // 0x14 - 0x18

}; // size - 0x18


class Dop26_t
{
public:

   float32 m_flSupport[26]; // 0x0 - 0x68

}; // size - 0x68


class EngineCountdownTimer
{
public:

   float m_duration; // 0x8 - 0xC
   float m_timestamp; // 0xC - 0x10
   float m_timescale; // 0x10 - 0x14

}; // size - 0x18


class EngineCountdownTimer
{
public:

   float m_duration; // 0x8 - 0xC
   float m_timestamp; // 0xC - 0x10
   float m_timescale; // 0x10 - 0x14

}; // size - 0x18


class EngineLoopState_t
{
public:

   int32_t m_nPlatWindowWidth; // 0x18 - 0x1C
   int32_t m_nPlatWindowHeight; // 0x1C - 0x20
   int32_t m_nRenderWidth; // 0x20 - 0x24
   int32_t m_nRenderHeight; // 0x24 - 0x28

}; // size - 0x28


class EntComponentInfo_t
{
public:

   V_uuid_t m_id; // 0x0 - 0x10
   char* m_pName; // 0x10 - 0x18
   char* m_pCPPClassname; // 0x18 - 0x20
   char* m_pNetworkDataReferencedDescription; // 0x20 - 0x28
   char* m_pNetworkDataReferencedPtrPropDescription; // 0x28 - 0x30
   int32_t m_nRuntimeIndex; // 0x30 - 0x34
   uint32_t m_nFlags; // 0x34 - 0x38
   unsigned char pad_38[0x38] // 0x38 - 0x70
   CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x70 - 0x78

}; // size - 0x78


class EntInput_t
{
public:


}; // size - 0x30


class EntOutput_t
{
public:


}; // size - 0x10


class EntityIOConnectionData_t
{
public:

   CUtlString m_outputName; // 0x0 - 0x8
   uint32_t m_targetType; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlString m_targetName; // 0x10 - 0x18
   CUtlString m_inputName; // 0x18 - 0x20
   CUtlString m_overrideParam; // 0x20 - 0x28
   float m_flDelay; // 0x28 - 0x2C
   int32_t m_nTimesToFire; // 0x2C - 0x30

}; // size - 0x30


class EntityKeyValueData_t
{
public:

   CUtlBinaryBlock m_keyValuesData; // 0x0 - 0x18
   CUtlVector< EntityIOConnectionData_t > m_connections; // 0x18 - 0x30

}; // size - 0x30


class EntityRenderAttribute_t
{
public:

   CUtlStringToken m_ID; // 0x30 - 0x34
   Vector4D m_Values; // 0x34 - 0x44

}; // size - 0x48


class EntityRenderAttribute_t
{
public:

   CUtlStringToken m_ID; // 0x30 - 0x34
   Vector4D m_Values; // 0x34 - 0x44

}; // size - 0x48


class EntitySpottedState_t
{
public:

   bool m_bSpotted; // 0x8 - 0x9
   unsigned char pad_9[0x3] // 0x9 - 0xC
   uint32 m_bSpottedByMask[2]; // 0xC - 0x14

}; // size - 0x18


class EntitySpottedState_t
{
public:

   bool m_bSpotted; // 0x8 - 0x9
   unsigned char pad_9[0x3] // 0x9 - 0xC
   uint32 m_bSpottedByMask[2]; // 0xC - 0x14

}; // size - 0x18


class EventAppShutdown_t
{
public:

   int32_t m_nDummy0; // 0x0 - 0x4

}; // size - 0x4


class EventClientAdvanceTick_t : public EventAdvanceTick_t
{
public:


}; // size - 0x40


class EventClientFrameSimulate_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C
   float m_flFrameTime; // 0x2C - 0x30

}; // size - 0x30


class EventClientOutput_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRenderTime; // 0x28 - 0x2C
   float m_flRealTime; // 0x2C - 0x30
   float m_flRenderFrameTimeUnbounded; // 0x30 - 0x34
   bool m_bRenderOnly; // 0x34 - 0x35

}; // size - 0x38


class EventClientPauseSimulate_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventClientPollInput_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C

}; // size - 0x30


class EventClientPollNetworking_t
{
public:

   int32_t m_nTickCount; // 0x0 - 0x4

}; // size - 0x4


class EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t
{
public:


}; // size - 0x40


class EventClientPostOutput_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float64 m_flRenderTime; // 0x28 - 0x30
   float m_flRenderFrameTime; // 0x30 - 0x34
   float m_flRenderFrameTimeUnbounded; // 0x34 - 0x38
   bool m_bRenderOnly; // 0x38 - 0x39

}; // size - 0x40


class EventClientPostSimulate_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventClientPreOutput_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float64 m_flRenderTime; // 0x28 - 0x30
   float64 m_flRenderFrameTime; // 0x30 - 0x38
   float64 m_flRenderFrameTimeUnbounded; // 0x38 - 0x40
   float m_flRealTime; // 0x40 - 0x44
   bool m_bRenderOnly; // 0x44 - 0x45

}; // size - 0x48


class EventClientPreSimulate_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventClientPredictionPostNetupdate_t
{
public:


}; // size - 0x1


class EventClientProcessGameInput_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C
   float m_flFrameTime; // 0x2C - 0x30

}; // size - 0x30


class EventClientProcessInput_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C

}; // size - 0x30


class EventClientProcessNetworking_t
{
public:


}; // size - 0x1


class EventClientSceneSystemThreadStateChange_t
{
public:

   bool m_bThreadsActive; // 0x0 - 0x1

}; // size - 0x1


class EventClientSendInput_t
{
public:

   bool m_bFinalClientCommandTick; // 0x0 - 0x1
   unsigned char pad_1[0x3] // 0x1 - 0x4
   int32_t m_nAdditionalClientCommandsToCreate; // 0x4 - 0x8

}; // size - 0x8


class EventClientSimulate_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventFrameBoundary_t
{
public:

   float m_flFrameTime; // 0x0 - 0x4

}; // size - 0x4


class EventModInitialized_t
{
public:


}; // size - 0x1


class EventPostDataUpdate_t
{
public:

   int32_t m_nCount; // 0x0 - 0x4

}; // size - 0x10


class EventPreDataUpdate_t
{
public:

   int32_t m_nCount; // 0x0 - 0x4

}; // size - 0x10


class EventProfileStorageAvailable_t
{
public:

   CSplitScreenSlot m_nSplitScreenSlot; // 0x0 - 0x4

}; // size - 0x4


class EventServerAdvanceTick_t : public EventAdvanceTick_t
{
public:


}; // size - 0x40


class EventServerPollNetworking_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t
{
public:


}; // size - 0x40


class EventServerPostSimulate_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventServerProcessNetworking_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventServerSimulate_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventSetTime_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   int32_t m_nClientOutputFrames; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   float64 m_flRealTime; // 0x30 - 0x38
   float64 m_flRenderTime; // 0x38 - 0x40
   float64 m_flRenderFrameTime; // 0x40 - 0x48
   float64 m_flRenderFrameTimeUnbounded; // 0x48 - 0x50
   float64 m_flRenderFrameTimeUnscaled; // 0x50 - 0x58
   float64 m_flTickRemainder; // 0x58 - 0x60

}; // size - 0x60


class EventSimpleLoopFrameUpdate_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x28
   float m_flRealTime; // 0x28 - 0x2C
   float m_flFrameTime; // 0x2C - 0x30

}; // size - 0x30


class EventSplitScreenStateChanged_t
{
public:


}; // size - 0x1


class Extent
{
public:

   Vector lo; // 0x0 - 0xC
   Vector hi; // 0xC - 0x18

}; // size - 0x18


class ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:

   uint32_t m_nSubSceneObject; // 0x4 - 0x8
   uint32_t m_nDrawCallIndex; // 0x8 - 0xC
   MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xC - 0x10
   CRenderBufferBinding m_extraBufferBinding; // 0x10 - 0x28

}; // size - 0x28


class FeAnimStrayRadius_t
{
public:

   uint16 nNode[2]; // 0x0 - 0x4
   float flMaxDist; // 0x4 - 0x8
   float flRelaxationFactor; // 0x8 - 0xC

}; // size - 0xC


class FeAxialEdgeBend_t
{
public:

   float te; // 0x0 - 0x4
   float tv; // 0x4 - 0x8
   float flDist; // 0x8 - 0xC
   float32 flWeight[4]; // 0xC - 0x1C
   uint16 nNode[6]; // 0x1C - 0x28

}; // size - 0x28


class FeBandBendLimit_t
{
public:

   float flDistMin; // 0x0 - 0x4
   float flDistMax; // 0x4 - 0x8
   uint16 nNode[6]; // 0x8 - 0x14

}; // size - 0x14


class FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:

   int32_t m_nPriority; // 0x40 - 0x44
   uint32_t m_nVertexMapHash; // 0x44 - 0x48

}; // size - 0x50


class FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:

   int32_t m_nPriority; // 0x20 - 0x24
   uint32_t m_nVertexMapHash; // 0x24 - 0x28

}; // size - 0x30


class FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t
{
public:

   int32_t m_nPriority; // 0x30 - 0x34
   uint32_t m_nVertexMapHash; // 0x34 - 0x38

}; // size - 0x40


class FeCollisionPlane_t
{
public:

   uint16_t nCtrlParent; // 0x0 - 0x2
   uint16_t nChildNode; // 0x2 - 0x4
   RnPlane_t m_Plane; // 0x4 - 0x14
   float flStickiness; // 0x14 - 0x18
   float flStrength; // 0x18 - 0x1C

}; // size - 0x1C


class FeCollisionSphere_t
{
public:

   uint16_t nCtrlParent; // 0x0 - 0x2
   uint16_t nChildNode; // 0x2 - 0x4
   float m_flRFactor; // 0x4 - 0x8
   Vector m_vOrigin; // 0x8 - 0x14
   float flStickiness; // 0x14 - 0x18

}; // size - 0x18


class FeCtrlOffset_t
{
public:

   Vector vOffset; // 0x0 - 0xC
   uint16_t nCtrlParent; // 0xC - 0xE
   uint16_t nCtrlChild; // 0xE - 0x10

}; // size - 0x10


class FeCtrlOsOffset_t
{
public:

   uint16_t nCtrlParent; // 0x0 - 0x2
   uint16_t nCtrlChild; // 0x2 - 0x4

}; // size - 0x4


class FeCtrlSoftOffset_t
{
public:

   uint16_t nCtrlParent; // 0x0 - 0x2
   uint16_t nCtrlChild; // 0x2 - 0x4
   Vector vOffset; // 0x4 - 0x10
   float flAlpha; // 0x10 - 0x14

}; // size - 0x14


class FeEdgeDesc_t
{
public:

   uint16 nEdge[2]; // 0x0 - 0x4
   uint16 nSide[2][2]; // 0x4 - 0xC
   uint16 nVirtElem[2]; // 0xC - 0x10

}; // size - 0x10


class FeEffectDesc_t
{
public:

   CUtlString sName; // 0x0 - 0x8
   uint32_t nNameHash; // 0x8 - 0xC
   int32_t nType; // 0xC - 0x10
   KeyValues3 m_Params; // 0x10 - 0x20

}; // size - 0x20


class FeFitInfluence_t
{
public:

   uint32_t nVertexNode; // 0x0 - 0x4
   float flWeight; // 0x4 - 0x8
   uint32_t nMatrixNode; // 0x8 - 0xC

}; // size - 0xC


class FeFitMatrix_t
{
public:

   CTransform bone; // 0x0 - 0x20
   Vector vCenter; // 0x20 - 0x2C
   uint16_t nEnd; // 0x2C - 0x2E
   uint16_t nNode; // 0x2E - 0x30
   uint16_t nBeginDynamic; // 0x30 - 0x32

}; // size - 0x40


class FeFitWeight_t
{
public:

   float flWeight; // 0x0 - 0x4
   uint16_t nNode; // 0x4 - 0x6
   uint16_t nDummy; // 0x6 - 0x8

}; // size - 0x8


class FeFollowNode_t
{
public:

   uint16_t nParentNode; // 0x0 - 0x2
   uint16_t nChildNode; // 0x2 - 0x4
   float flWeight; // 0x4 - 0x8

}; // size - 0x8


class FeKelagerBend2_t
{
public:

   float32 flWeight[3]; // 0x0 - 0xC
   float flHeight0; // 0xC - 0x10
   uint16 nNode[3]; // 0x10 - 0x16
   uint16_t nReserved; // 0x16 - 0x18

}; // size - 0x18


class FeMorphLayerDepr_t
{
public:

   CUtlString m_Name; // 0x0 - 0x8
   uint32_t m_nNameHash; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< uint16 > m_Nodes; // 0x10 - 0x28
   CUtlVector< Vector > m_InitPos; // 0x28 - 0x40
   CUtlVector< float32 > m_Gravity; // 0x40 - 0x58
   CUtlVector< float32 > m_GoalStrength; // 0x58 - 0x70
   CUtlVector< float32 > m_GoalDamping; // 0x70 - 0x88
   uint32_t m_nFlags; // 0x88 - 0x8C

}; // size - 0x90


class FeNodeBase_t
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


class FeNodeIntegrator_t
{
public:

   float flPointDamping; // 0x0 - 0x4
   float flAnimationForceAttraction; // 0x4 - 0x8
   float flAnimationVertexAttraction; // 0x8 - 0xC
   float flGravity; // 0xC - 0x10

}; // size - 0x10


class FeNodeReverseOffset_t
{
public:

   Vector vOffset; // 0x0 - 0xC
   uint16_t nBoneCtrl; // 0xC - 0xE
   uint16_t nTargetNode; // 0xE - 0x10

}; // size - 0x10


class FeNodeWindBase_t
{
public:

   uint16_t nNodeX0; // 0x0 - 0x2
   uint16_t nNodeX1; // 0x2 - 0x4
   uint16_t nNodeY0; // 0x4 - 0x6
   uint16_t nNodeY1; // 0x6 - 0x8

}; // size - 0x8


class FeProxyVertexMap_t
{
public:

   CUtlString m_Name; // 0x0 - 0x8
   float m_flWeight; // 0x8 - 0xC

}; // size - 0x10


class FeQuad_t
{
public:

   uint16 nNode[4]; // 0x0 - 0x8
   float flSlack; // 0x8 - 0xC
   Vector4D vShape[4]; // 0xC - 0x4C

}; // size - 0x4C


class FeRigidColliderIndices_t
{
public:

   uint16_t m_nTaperedCapsuleRigidIndex; // 0x0 - 0x2
   uint16_t m_nSphereRigidIndex; // 0x2 - 0x4
   uint16_t m_nBoxRigidIndex; // 0x4 - 0x6
   uint16 m_nCollisionSphereIndex[2]; // 0x6 - 0xA
   uint16_t m_nCollisionPlaneIndex; // 0xA - 0xC

}; // size - 0xC


class FeRodConstraint_t
{
public:

   uint16 nNode[2]; // 0x0 - 0x4
   float flMaxDist; // 0x4 - 0x8
   float flMinDist; // 0x8 - 0xC
   float flWeight0; // 0xC - 0x10
   float flRelaxationFactor; // 0x10 - 0x14

}; // size - 0x14


class FeSimdAnimStrayRadius_t
{
public:

   uint16 nNode[4][2]; // 0x0 - 0x10
   fltx4 flMaxDist; // 0x10 - 0x20
   fltx4 flRelaxationFactor; // 0x20 - 0x30

}; // size - 0x30


class FeSimdNodeBase_t
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


class FeSimdQuad_t
{
public:

   uint16 nNode[4][4]; // 0x0 - 0x20
   fltx4 f4Slack; // 0x20 - 0x30
   FourVectors vShape[4]; // 0x30 - 0xF0
   fltx4 f4Weights[4]; // 0xF0 - 0x130

}; // size - 0x130


class FeSimdRodConstraint_t
{
public:

   uint16 nNode[4][2]; // 0x0 - 0x10
   fltx4 f4MaxDist; // 0x10 - 0x20
   fltx4 f4MinDist; // 0x20 - 0x30
   fltx4 f4Weight0; // 0x30 - 0x40
   fltx4 f4RelaxationFactor; // 0x40 - 0x50

}; // size - 0x50


class FeSimdSpringIntegrator_t
{
public:

   uint16 nNode[4][2]; // 0x0 - 0x10
   fltx4 flSpringRestLength; // 0x10 - 0x20
   fltx4 flSpringConstant; // 0x20 - 0x30
   fltx4 flSpringDamping; // 0x30 - 0x40
   fltx4 flNodeWeight0; // 0x40 - 0x50

}; // size - 0x50


class FeSimdTri_t
{
public:

   uint32 nNode[4][3]; // 0x0 - 0x30
   fltx4 w1; // 0x30 - 0x40
   fltx4 w2; // 0x40 - 0x50
   fltx4 v1x; // 0x50 - 0x60
   FourVectors2D v2; // 0x60 - 0x80

}; // size - 0x80


class FeSoftParent_t
{
public:

   int32_t nParent; // 0x0 - 0x4
   float flAlpha; // 0x4 - 0x8

}; // size - 0x8


class FeSourceEdge_t
{
public:

   uint16 nNode[2]; // 0x0 - 0x4

}; // size - 0x4


class FeSpringIntegrator_t
{
public:

   uint16 nNode[2]; // 0x0 - 0x4
   float flSpringRestLength; // 0x4 - 0x8
   float flSpringConstant; // 0x8 - 0xC
   float flSpringDamping; // 0xC - 0x10
   float flNodeWeight0; // 0x10 - 0x14

}; // size - 0x14


class FeStiffHingeBuild_t
{
public:

   float flMaxAngle; // 0x0 - 0x4
   float flStrength; // 0x4 - 0x8
   float32 flMotionBias[3]; // 0x8 - 0x14
   uint16 nNode[3]; // 0x14 - 0x1A

}; // size - 0x1C


class FeTaperedCapsuleStretch_t
{
public:

   uint16 nNode[2]; // 0x0 - 0x4
   uint16_t nCollisionMask; // 0x4 - 0x6
   uint16_t nDummy; // 0x6 - 0x8
   float32 flRadius[2]; // 0x8 - 0x10
   float flStickiness; // 0x10 - 0x14

}; // size - 0x14


class FeTreeChildren_t
{
public:

   uint16 nChild[2]; // 0x0 - 0x4

}; // size - 0x4


class FeTri_t
{
public:

   uint16 nNode[3]; // 0x0 - 0x6
   unsigned char pad_6[0x2] // 0x6 - 0x8
   float w1; // 0x8 - 0xC
   float w2; // 0xC - 0x10
   float v1x; // 0x10 - 0x14
   Vector2D v2; // 0x14 - 0x1C

}; // size - 0x1C


class FeTwistConstraint_t
{
public:

   uint16_t nNodeOrient; // 0x0 - 0x2
   uint16_t nNodeEnd; // 0x2 - 0x4
   float flTwistRelax; // 0x4 - 0x8
   float flSwingRelax; // 0x8 - 0xC

}; // size - 0xC


class FeVertexMapBuild_t
{
public:

   CUtlString m_VertexMapName; // 0x0 - 0x8
   uint32_t m_nNameHash; // 0x8 - 0xC
   Color m_Color; // 0xC - 0x10
   float m_flVolumetricSolveStrength; // 0x10 - 0x14
   int32_t m_nScaleSourceNode; // 0x14 - 0x18
   CUtlVector< float32 > m_Weights; // 0x18 - 0x30

}; // size - 0x30


class FeVertexMapDesc_t
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

}; // size - 0x38


class FeWeightedNode_t
{
public:

   uint16_t nNode; // 0x0 - 0x2
   uint16_t nWeight; // 0x2 - 0x4

}; // size - 0x4


class FeWorldCollisionParams_t
{
public:

   float flWorldFriction; // 0x0 - 0x4
   float flGroundFriction; // 0x4 - 0x8
   uint16_t nListBegin; // 0x8 - 0xA
   uint16_t nListEnd; // 0xA - 0xC

}; // size - 0xC


class FilterDamageType : public CBaseFilter
{
public:

   int32_t m_iDamageType; // 0x4F8 - 0x4FC

}; // size - 0x500


class FilterHealth : public CBaseFilter
{
public:

   bool m_bAdrenalineActive; // 0x4F8 - 0x4F9
   unsigned char pad_4F9[0x3] // 0x4F9 - 0x4FC
   int32_t m_iHealthMin; // 0x4FC - 0x500
   int32_t m_iHealthMax; // 0x500 - 0x504

}; // size - 0x508


class FilterTeam : public CBaseFilter
{
public:

   int32_t m_iFilterTeam; // 0x4F8 - 0x4FC

}; // size - 0x500


class FingerBone_t
{
public:

   int32_t m_boneIndex; // 0x0 - 0x4
   Vector m_hingeAxis; // 0x4 - 0x10
   Vector m_vCapsulePos1; // 0x10 - 0x1C
   Vector m_vCapsulePos2; // 0x1C - 0x28
   float m_flMinAngle; // 0x28 - 0x2C
   float m_flMaxAngle; // 0x2C - 0x30
   float m_flRadius; // 0x30 - 0x34

}; // size - 0x34


class FingerChain_t
{
public:

   CUtlVector< FingerSource_t > m_targets; // 0x0 - 0x18
   CUtlVector< FingerBone_t > m_bones; // 0x18 - 0x30
   Vector m_vTipOffset; // 0x30 - 0x3C
   Vector m_vSplayHingeAxis; // 0x3C - 0x48
   int32_t m_tipParentBoneIndex; // 0x48 - 0x4C
   int32_t m_metacarpalBoneIndex; // 0x4C - 0x50
   float m_flSplayMinAngle; // 0x50 - 0x54
   float m_flSplayMaxAngle; // 0x54 - 0x58
   float m_flFingerScaleRatio; // 0x58 - 0x5C

}; // size - 0x60


class FingerSource_t
{
public:

   AnimVRFinger_t m_nFingerIndex; // 0x0 - 0x4
   float m_flFingerWeight; // 0x4 - 0x8

}; // size - 0x8


class FloatInputMaterialVariable_t
{
public:

   CUtlString m_strVariable; // 0x0 - 0x8
   CParticleCollectionFloatInput m_flInput; // 0x8 - 0x140

}; // size - 0x140


class FollowAttachmentSettings_t
{
public:

   CAnimAttachment m_attachment; // 0x0 - 0xFFFFFFFF
   int32_t m_boneIndex; // 0x80 - 0x84
   bool m_bMatchTranslation; // 0x84 - 0x85
   bool m_bMatchRotation; // 0x85 - 0x86

}; // size - 0x90


class FootFixedData_t
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

}; // size - 0x50


class FootFixedSettings
{
public:

   TraceSettings_t m_traceSettings; // 0x0 - 0x8
   unsigned char pad_8[0x8] // 0x8 - 0x10
   VectorAligned m_vFootBaseBindPosePositionMS; // 0x10 - 0x20
   float m_flFootBaseLength; // 0x20 - 0x24
   float m_flMaxRotationLeft; // 0x24 - 0x28
   float m_flMaxRotationRight; // 0x28 - 0x2C
   int32_t m_footstepLandedTagIndex; // 0x2C - 0x30
   bool m_bEnableTracing; // 0x30 - 0x31
   unsigned char pad_31[0x3] // 0x31 - 0x34
   float m_flTraceAngleBlend; // 0x34 - 0x38
   int32_t m_nDisableTagIndex; // 0x38 - 0x3C
   int32_t m_nFootIndex; // 0x3C - 0x40

}; // size - 0x40


class FootLockPoseOpFixedSettings
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
   unsigned char pad_35[0x3] // 0x35 - 0x38
   float m_flMaxFootHeight; // 0x38 - 0x3C
   float m_flExtensionScale; // 0x3C - 0x40
   float m_flMaxLegTwist; // 0x40 - 0x44
   bool m_bEnableLockBreaking; // 0x44 - 0x45
   unsigned char pad_45[0x3] // 0x45 - 0x48
   float m_flLockBreakTolerance; // 0x48 - 0x4C
   float m_flLockBlendTime; // 0x4C - 0x50
   bool m_bEnableStretching; // 0x50 - 0x51
   unsigned char pad_51[0x3] // 0x51 - 0x54
   float m_flMaxStretchAmount; // 0x54 - 0x58
   float m_flStretchExtensionScale; // 0x58 - 0x5C

}; // size - 0x60


class FootPinningPoseOpFixedData_t
{
public:

   CUtlVector< FootFixedData_t > m_footInfo; // 0x0 - 0x18
   float m_flBlendTime; // 0x18 - 0x1C
   float m_flLockBreakDistance; // 0x1C - 0x20
   float m_flMaxLegTwist; // 0x20 - 0x24
   int32_t m_nHipBoneIndex; // 0x24 - 0x28
   bool m_bApplyLegTwistLimits; // 0x28 - 0x29
   bool m_bApplyFootRotationLimits; // 0x29 - 0x2A

}; // size - 0x30


class FootStepTrigger
{
public:

   CUtlVector< int32 > m_tags; // 0x0 - 0x18
   int32_t m_nFootIndex; // 0x18 - 0x1C
   StepPhase m_triggerPhase; // 0x1C - 0x20

}; // size - 0x20


class FourCovMatrices3
{
public:

   FourVectors m_vDiag; // 0x0 - 0x30
   fltx4 m_flXY; // 0x30 - 0x40
   fltx4 m_flXZ; // 0x40 - 0x50
   fltx4 m_flYZ; // 0x50 - 0x60

}; // size - 0x60


class FourQuaternions
{
public:

   fltx4 x; // 0x0 - 0x10
   fltx4 y; // 0x10 - 0x20
   fltx4 z; // 0x20 - 0x30
   fltx4 w; // 0x30 - 0x40

}; // size - 0x40


class FourVectors2D
{
public:

   fltx4 x; // 0x0 - 0x10
   fltx4 y; // 0x10 - 0x20

}; // size - 0x20


class FunctionInfo_t
{
public:

   CUtlString m_name; // 0x8 - 0x10
   CUtlStringToken m_nameToken; // 0x10 - 0x14
   int32_t m_nParamCount; // 0x14 - 0x18
   FuseFunctionIndex_t m_nIndex; // 0x18 - 0x1A
   bool m_bIsPure; // 0x1A - 0x1B

}; // size - 0x20


class FuseFunctionIndex_t
{
public:

   uint16_t m_Value; // 0x0 - 0x2

}; // size - 0x2


class FuseVariableIndex_t
{
public:

   uint16_t m_Value; // 0x0 - 0x2

}; // size - 0x2


class GameAmmoTypeInfo_t : public AmmoTypeInfo_t
{
public:

   int32_t m_nBuySize; // 0x38 - 0x3C
   int32_t m_nCost; // 0x3C - 0x40

}; // size - 0x50


class GameTick_t
{
public:

   int32_t m_Value; // 0x0 - 0x4

}; // size - 0x4


class GameTime_t
{
public:

   float m_Value; // 0x0 - 0x4

}; // size - 0x4


class GeneratedTextureHandle_t
{
public:

   CUtlString m_strBitmapName; // 0x8 - 0x10

}; // size - 0x50


class HSequence
{
public:

   int32_t m_Value; // 0x0 - 0x4

}; // size - 0x4


class HitReactFixedSettings_t
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


class HullFlags_t
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

}; // size - 0x9


class IControlPointEditorData
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IHasAttributes
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IKBoneNameAndIndex_t
{
public:

   CUtlString m_Name; // 0x0 - 0x8

}; // size - 0x10


class IKSolverSettings_t
{
public:

   IKSolverType m_SolverType; // 0x0 - 0x4
   int32_t m_nNumIterations; // 0x4 - 0x8

}; // size - 0x8


class IKTargetSettings_t
{
public:

   IKTargetSource m_TargetSource; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   IKBoneNameAndIndex_t m_Bone; // 0x8 - 0x18
   AnimParamID m_AnimgraphParameterNamePosition; // 0x18 - 0x1C
   IKTargetCoordinateSystem m_TargetCoordSystem; // 0x1C - 0x20

}; // size - 0x20


class IParticleCollection
{
public:


}; // size - 0x10


class IPhysicsPlayerController
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IVehicle
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class InfoForResourceTypeCAnimData
{
public:


}; // size - 0x1


class InfoForResourceTypeCAnimationGroup
{
public:


}; // size - 0x1


class InfoForResourceTypeCCSGOEconItem
{
public:


}; // size - 0x1


class InfoForResourceTypeCChoreoSceneFileData
{
public:


}; // size - 0x1


class InfoForResourceTypeCCompositeMaterialKit
{
public:


}; // size - 0x1


class InfoForResourceTypeCDACGameDefsData
{
public:


}; // size - 0x1


class InfoForResourceTypeCDOTAPatchNotesList
{
public:


}; // size - 0x1


class InfoForResourceTypeCDotaItemDefinitionResource
{
public:


}; // size - 0x1


class InfoForResourceTypeCEntityLump
{
public:


}; // size - 0x1


class InfoForResourceTypeCModel
{
public:


}; // size - 0x1


class InfoForResourceTypeCMorphSetData
{
public:


}; // size - 0x1


class InfoForResourceTypeCPanoramaDynamicImages
{
public:


}; // size - 0x1


class InfoForResourceTypeCPanoramaLayout
{
public:


}; // size - 0x1


class InfoForResourceTypeCPanoramaScript
{
public:


}; // size - 0x1


class InfoForResourceTypeCPanoramaStyle
{
public:


}; // size - 0x1


class InfoForResourceTypeCPanoramaTypeScript
{
public:


}; // size - 0x1


class InfoForResourceTypeCPhysAggregateData
{
public:


}; // size - 0x1


class InfoForResourceTypeCPostProcessingResource
{
public:


}; // size - 0x1


class InfoForResourceTypeCRenderMesh
{
public:


}; // size - 0x1


class InfoForResourceTypeCResourceManifestInternal
{
public:


}; // size - 0x1


class InfoForResourceTypeCResponseRulesList
{
public:


}; // size - 0x1


class InfoForResourceTypeCSequenceGroupData
{
public:


}; // size - 0x1


class InfoForResourceTypeCSmartProp
{
public:


}; // size - 0x1


class InfoForResourceTypeCTextureBase
{
public:


}; // size - 0x1


class InfoForResourceTypeCVDataResource
{
public:


}; // size - 0x1


class InfoForResourceTypeCVMixListResource
{
public:


}; // size - 0x1


class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
public:


}; // size - 0x1


class InfoForResourceTypeCVSoundEventScriptList
{
public:


}; // size - 0x1


class InfoForResourceTypeCVSoundStackScriptList
{
public:


}; // size - 0x1


class InfoForResourceTypeCVoxelVisibility
{
public:


}; // size - 0x1


class InfoForResourceTypeCWorldNode
{
public:


}; // size - 0x1


class InfoForResourceTypeIAnimGraphModelBinding
{
public:


}; // size - 0x1


class InfoForResourceTypeIMaterial2
{
public:


}; // size - 0x1


class InfoForResourceTypeIParticleSnapshot
{
public:


}; // size - 0x1


class InfoForResourceTypeIParticleSystemDefinition
{
public:


}; // size - 0x1


class InfoForResourceTypeIVectorGraphic
{
public:


}; // size - 0x1


class InfoForResourceTypeManifestTestResource_t
{
public:


}; // size - 0x1


class InfoForResourceTypeProceduralTestResource_t
{
public:


}; // size - 0x1


class InfoForResourceTypeTestResource_t
{
public:


}; // size - 0x1


class InfoForResourceTypeVMapResourceData_t
{
public:


}; // size - 0x1


class InfoForResourceTypeVSound_t
{
public:


}; // size - 0x1


class InfoForResourceTypeWorld_t
{
public:


}; // size - 0x1


class InfoOverlayData_t
{
public:

   matrix3x4_t m_transform; // 0x0 - 0x30
   float m_flWidth; // 0x30 - 0x34
   float m_flHeight; // 0x34 - 0x38
   float m_flDepth; // 0x38 - 0x3C
   Vector2D m_vUVStart; // 0x3C - 0x44
   Vector2D m_vUVEnd; // 0x44 - 0x4C
   unsigned char pad_4C[0x4] // 0x4C - 0x50
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x50 - 0x58
   int32_t m_nRenderOrder; // 0x58 - 0x5C
   Vector4D m_vTintColor; // 0x5C - 0x6C
   int32_t m_nSequenceOverride; // 0x6C - 0x70

}; // size - 0x70


class JiggleBoneSettingsList_t
{
public:

   CUtlVector< JiggleBoneSettings_t > m_boneSettings; // 0x0 - 0x18

}; // size - 0x18


class JiggleBoneSettings_t
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


class LookAtBone_t
{
public:

   int32_t m_index; // 0x0 - 0x4
   float m_weight; // 0x4 - 0x8

}; // size - 0x8


class LookAtOpFixedSettings_t
{
public:

   CAnimAttachment m_attachment; // 0x0 - 0xFFFFFFFF
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

}; // size - 0xC0


class ManifestTestResource_t
{
public:

   CUtlString m_name; // 0x0 - 0x8
   CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; // 0x8 - 0x10

}; // size - 0x10


class MaterialGroup_t
{
public:

   CUtlString m_name; // 0x0 - 0x8
   CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // 0x8 - 0x20

}; // size - 0x20


class MaterialOverride_t : public BaseSceneObjectOverride_t
{
public:

   uint32_t m_nSubSceneObject; // 0x4 - 0x8
   uint32_t m_nDrawCallIndex; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x10 - 0x18

}; // size - 0x18


class MaterialParamBuffer_t : public MaterialParam_t
{
public:

   CUtlBinaryBlock m_value; // 0x8 - 0x20

}; // size - 0x20


class MaterialParamFloat_t : public MaterialParam_t
{
public:

   float m_flValue; // 0x8 - 0xC

}; // size - 0x10


class MaterialParamInt_t : public MaterialParam_t
{
public:

   int32_t m_nValue; // 0x8 - 0xC

}; // size - 0x10


class MaterialParamString_t : public MaterialParam_t
{
public:

   CUtlString m_value; // 0x8 - 0x10

}; // size - 0x10


class MaterialParamTexture_t : public MaterialParam_t
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue; // 0x8 - 0x10

}; // size - 0x10


class MaterialParamVector_t : public MaterialParam_t
{
public:

   Vector4D m_value; // 0x8 - 0x18

}; // size - 0x18


class MaterialResourceData_t
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


class MaterialVariable_t
{
public:

   CUtlString m_strVariable; // 0x0 - 0x8
   ParticleAttributeIndex_t m_nVariableField; // 0x8 - 0xC
   float m_flScale; // 0xC - 0x10

}; // size - 0x10


class ModelBoneFlexDriverControl_t
{
public:

   ModelBoneFlexComponent_t m_nBoneComponent; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CUtlString m_flexController; // 0x8 - 0x10
   uint32_t m_flexControllerToken; // 0x10 - 0x14
   float m_flMin; // 0x14 - 0x18
   float m_flMax; // 0x18 - 0x1C

}; // size - 0x20


class ModelBoneFlexDriver_t
{
public:

   CUtlString m_boneName; // 0x0 - 0x8
   uint32_t m_boneNameToken; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CUtlVector< ModelBoneFlexDriverControl_t > m_controls; // 0x10 - 0x28

}; // size - 0x28


class ModelConfigHandle_t
{
public:

   uint32_t m_Value; // 0x0 - 0x4

}; // size - 0x4


class ModelReference_t
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_model; // 0x0 - 0x8
   float m_flRelativeProbabilityOfSpawn; // 0x8 - 0xC

}; // size - 0x10


class ModelSkeletonData_t
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


class MoodAnimationLayer_t
{
public:

   CUtlString m_sName; // 0x0 - 0x8
   bool m_bActiveListening; // 0x8 - 0x9
   bool m_bActiveTalking; // 0x9 - 0xA
   unsigned char pad_A[0x6] // 0xA - 0x10
   CUtlVector< MoodAnimation_t > m_layerAnimations; // 0x10 - 0x28
   CRangeFloat m_flIntensity; // 0x28 - 0x30
   CRangeFloat m_flDurationScale; // 0x30 - 0x38
   bool m_bScaleWithInts; // 0x38 - 0x39
   unsigned char pad_39[0x3] // 0x39 - 0x3C
   CRangeFloat m_flNextStart; // 0x3C - 0x44
   CRangeFloat m_flStartOffset; // 0x44 - 0x4C
   CRangeFloat m_flEndOffset; // 0x4C - 0x54
   float m_flFadeIn; // 0x54 - 0x58
   float m_flFadeOut; // 0x58 - 0x5C

}; // size - 0x60


class MoodAnimation_t
{
public:

   CUtlString m_sName; // 0x0 - 0x8
   float m_flWeight; // 0x8 - 0xC

}; // size - 0x10


class MotionBlendItem
{
public:

   CSmartPtr< CMotionNode > m_pChild; // 0x0 - 0x8
   float m_flKeyValue; // 0x8 - 0xC

}; // size - 0x10


class MotionDBIndex
{
public:

   uint32_t m_nIndex; // 0x0 - 0x4

}; // size - 0x4


class MotionIndex
{
public:

   uint16_t m_nGroup; // 0x0 - 0x2
   uint16_t m_nMotion; // 0x2 - 0x4

}; // size - 0x4


class NodeData_t
{
public:

   int32_t m_nParent; // 0x0 - 0x4
   Vector m_vOrigin; // 0x4 - 0x10
   Vector m_vMinBounds; // 0x10 - 0x1C
   Vector m_vMaxBounds; // 0x1C - 0x28
   float m_flMinimumDistance; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   CUtlVector< int32 > m_ChildNodeIndices; // 0x30 - 0x48
   CUtlString m_worldNodePrefix; // 0x48 - 0x50

}; // size - 0x50


class OldFeEdge_t
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


class PARTICLE_EHANDLE__
{
public:

   int32_t unused; // 0x0 - 0x4

}; // size - 0x4


class PARTICLE_WORLD_HANDLE__
{
public:

   int32_t unused; // 0x0 - 0x4

}; // size - 0x4


class PackedAABB_t
{
public:

   uint32_t m_nPackedMin; // 0x0 - 0x4
   uint32_t m_nPackedMax; // 0x4 - 0x8

}; // size - 0x8


class ParamSpanSample_t
{
public:

   CAnimVariant m_value; // 0x0 - 0x11
   unsigned char pad_11[0x3] // 0x11 - 0x14
   float m_flCycle; // 0x14 - 0x18

}; // size - 0x18


class ParamSpan_t
{
public:

   CUtlVector< ParamSpanSample_t > m_samples; // 0x0 - 0x18
   CAnimParamHandle m_hParam; // 0x18 - 0x1A
   AnimParamType_t m_eParamType; // 0x1A - 0x1B
   unsigned char pad_1B[0x1] // 0x1B - 0x1C
   float m_flStartCycle; // 0x1C - 0x20
   float m_flEndCycle; // 0x20 - 0x24

}; // size - 0x28


class ParticleAttributeIndex_t
{
public:

   int32_t m_Value; // 0x0 - 0x4

}; // size - 0x4


class ParticleChildrenInfo_t
{
public:

   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // 0x0 - 0x8
   float m_flDelay; // 0x8 - 0xC
   bool m_bEndCap; // 0xC - 0xD
   bool m_bDisableChild; // 0xD - 0xE
   unsigned char pad_E[0x2] // 0xE - 0x10
   ParticleDetailLevel_t m_nDetailLevel; // 0x10 - 0x14

}; // size - 0x20


class ParticleControlPointConfiguration_t
{
public:

   CUtlString m_name; // 0x0 - 0x8
   CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8 - 0x20
   ParticlePreviewState_t m_previewState; // 0x20 - 0x78

}; // size - 0x78


class ParticleControlPointDriver_t
{
public:

   int32_t m_iControlPoint; // 0x0 - 0x4
   ParticleAttachment_t m_iAttachType; // 0x4 - 0x8
   CUtlString m_attachmentName; // 0x8 - 0x10
   Vector m_vecOffset; // 0x10 - 0x1C
   QAngle m_angOffset; // 0x1C - 0x28
   CUtlString m_entityName; // 0x28 - 0x30

}; // size - 0x30


class ParticleIndex_t
{
public:

   int32_t m_Value; // 0x0 - 0x4

}; // size - 0x4


class ParticlePreviewBodyGroup_t
{
public:

   CUtlString m_bodyGroupName; // 0x0 - 0x8
   int32_t m_nValue; // 0x8 - 0xC

}; // size - 0x10


class ParticlePreviewState_t
{
public:

   CUtlString m_previewModel; // 0x0 - 0x8
   uint32_t m_nModSpecificData; // 0x8 - 0xC
   PetGroundType_t m_groundType; // 0xC - 0x10
   CUtlString m_sequenceName; // 0x10 - 0x18
   int32_t m_nFireParticleOnSequenceFrame; // 0x18 - 0x1C
   unsigned char pad_1C[0x4] // 0x1C - 0x20
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

}; // size - 0x58


class PermEntityLumpData_t
{
public:

   CUtlString m_name; // 0x0 - 0x8
   CUtlString m_hammerUniqueId; // 0x8 - 0x10
   CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x10 - 0x28
   CUtlVector< EntityKeyValueData_t > m_entityKeyValues; // 0x28 - 0x40

}; // size - 0x40


class PermModelDataAnimatedMaterialAttribute_t
{
public:

   CUtlString m_AttributeName; // 0x0 - 0x8
   int32_t m_nNumChannels; // 0x8 - 0xC

}; // size - 0x10


class PermModelData_t
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


class PermModelExtPart_t
{
public:

   CTransform m_Transform; // 0x0 - 0x20
   CUtlString m_Name; // 0x20 - 0x28
   int32_t m_nParent; // 0x28 - 0x2C
   unsigned char pad_2C[0x4] // 0x2C - 0x30
   CStrongHandle< InfoForResourceTypeCModel > m_refModel; // 0x30 - 0x38

}; // size - 0x40


class PermModelInfo_t
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


class PhysFeModelDesc_t
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
   uint16_t m_nCollisionSphereInclusiveCount; // 0x54 - 0x56
   uint16_t m_nTreeDepth; // 0x56 - 0x58
   uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x58 - 0x5A
   uint16_t m_nRopeCount; // 0x5A - 0x5C
   unsigned char pad_5C[0x4] // 0x5C - 0x60
   CUtlVector< uint16 > m_Ropes; // 0x60 - 0x78
   CUtlVector< FeNodeBase_t > m_NodeBases; // 0x78 - 0x90
   CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // 0x90 - 0xA8
   CUtlVector< FeQuad_t > m_Quads; // 0xA8 - 0xC0
   CUtlVector< FeSimdQuad_t > m_SimdQuads; // 0xC0 - 0xD8
   CUtlVector< FeSimdTri_t > m_SimdTris; // 0xD8 - 0xF0
   CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // 0xF0 - 0x108
   CUtlVector< CTransform > m_InitPose; // 0x108 - 0x120
   CUtlVector< FeRodConstraint_t > m_Rods; // 0x120 - 0x138
   CUtlVector< FeTwistConstraint_t > m_Twists; // 0x138 - 0x150
   CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x150 - 0x168
   CUtlVector< float32 > m_NodeInvMasses; // 0x168 - 0x180
   CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x180 - 0x198
   CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x198 - 0x1B0
   CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x1B0 - 0x1C8
   CUtlVector< FeCollisionSphere_t > m_CollisionSpheres; // 0x1C8 - 0x1E0
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
   CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases; // 0x5A8 - 0x5C0
   float m_flInternalPressure; // 0x5C0 - 0x5C4
   float m_flDefaultTimeDilation; // 0x5C4 - 0x5C8
   float m_flWindage; // 0x5C8 - 0x5CC
   float m_flWindDrag; // 0x5CC - 0x5D0
   float m_flDefaultSurfaceStretch; // 0x5D0 - 0x5D4
   float m_flDefaultThreadStretch; // 0x5D4 - 0x5D8
   float m_flDefaultGravityScale; // 0x5D8 - 0x5DC
   float m_flDefaultVelAirDrag; // 0x5DC - 0x5E0
   float m_flDefaultExpAirDrag; // 0x5E0 - 0x5E4
   float m_flDefaultVelQuadAirDrag; // 0x5E4 - 0x5E8
   float m_flDefaultExpQuadAirDrag; // 0x5E8 - 0x5EC
   float m_flRodVelocitySmoothRate; // 0x5EC - 0x5F0
   float m_flQuadVelocitySmoothRate; // 0x5F0 - 0x5F4
   float m_flAddWorldCollisionRadius; // 0x5F4 - 0x5F8
   float m_flDefaultVolumetricSolveAmount; // 0x5F8 - 0x5FC
   uint16_t m_nRodVelocitySmoothIterations; // 0x5FC - 0x5FE
   uint16_t m_nQuadVelocitySmoothIterations; // 0x5FE - 0x600

}; // size - 0x600


class PhysSoftbodyDesc_t
{
public:

   CUtlVector< uint32 > m_ParticleBoneHash; // 0x0 - 0x18
   CUtlVector< RnSoftbodyParticle_t > m_Particles; // 0x18 - 0x30
   CUtlVector< RnSoftbodySpring_t > m_Springs; // 0x30 - 0x48
   CUtlVector< RnSoftbodyCapsule_t > m_Capsules; // 0x48 - 0x60
   CUtlVector< CTransform > m_InitPose; // 0x60 - 0x78
   CUtlVector< CUtlString > m_ParticleBoneName; // 0x78 - 0x90

}; // size - 0x90


class PhysicsRagdollPose_t
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   CNetworkUtlVectorBase< CTransform > m_Transforms; // 0x30 - 0x48

}; // size - 0x48


class PhysicsRagdollPose_t
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   C_NetworkUtlVectorBase< CTransform > m_Transforms; // 0x30 - 0x48
   bool m_bDirty; // 0x48 - 0x49

}; // size - 0x50


class PointDefinitionWithTimeValues_t : public PointDefinition_t
{
public:

   float m_flTimeDuration; // 0x14 - 0x18

}; // size - 0x18


class PostProcessingBloomParameters_t
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


class PostProcessingLocalContrastParameters_t
{
public:

   float m_flLocalContrastStrength; // 0x0 - 0x4
   float m_flLocalContrastEdgeStrength; // 0x4 - 0x8
   float m_flLocalContrastVignetteStart; // 0x8 - 0xC
   float m_flLocalContrastVignetteEnd; // 0xC - 0x10
   float m_flLocalContrastVignetteBlur; // 0x10 - 0x14

}; // size - 0x14


class PostProcessingResource_t
{
public:

   bool m_bHasTonemapParams; // 0x0 - 0x1
   unsigned char pad_1[0x3] // 0x1 - 0x4
   PostProcessingTonemapParameters_t m_toneMapParams; // 0x4 - 0x40
   bool m_bHasBloomParams; // 0x40 - 0x41
   unsigned char pad_41[0x3] // 0x41 - 0x44
   PostProcessingBloomParameters_t m_bloomParams; // 0x44 - 0xB4
   bool m_bHasVignetteParams; // 0xB4 - 0xB5
   unsigned char pad_B5[0x3] // 0xB5 - 0xB8
   PostProcessingVignetteParameters_t m_vignetteParams; // 0xB8 - 0xDC
   bool m_bHasLocalContrastParams; // 0xDC - 0xDD
   unsigned char pad_DD[0x3] // 0xDD - 0xE0
   PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xE0 - 0xF4
   int32_t m_nColorCorrectionVolumeDim; // 0xF4 - 0xF8
   CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xF8 - 0x110
   bool m_bHasColorCorrection; // 0x110 - 0x111

}; // size - 0x118


class PostProcessingTonemapParameters_t
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


class PostProcessingVignetteParameters_t
{
public:

   float m_flVignetteStrength; // 0x0 - 0x4
   Vector2D m_vCenter; // 0x4 - 0xC
   float m_flRadius; // 0xC - 0x10
   float m_flRoundness; // 0x10 - 0x14
   float m_flFeather; // 0x14 - 0x18
   Vector m_vColorTint; // 0x18 - 0x24

}; // size - 0x24


class QuestProgress
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


}; // size - 0x1


class RagdollCreationParams_t
{
public:

   Vector m_vForce; // 0x0 - 0xC
   int32_t m_nForceBone; // 0xC - 0x10

}; // size - 0x10


class RelationshipOverride_t : public Relationship_t
{
public:

   CHandle< CBaseEntity > entity; // 0x8 - 0xC
   Class_T classType; // 0xC - 0x10

}; // size - 0x10


class RenderInputLayoutField_t
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


class RenderSkeletonBone_t
{
public:

   CUtlString m_boneName; // 0x0 - 0x8
   CUtlString m_parentName; // 0x8 - 0x10
   matrix3x4_t m_invBindPose; // 0x10 - 0x40
   SkeletonBoneBounds_t m_bbox; // 0x40 - 0x58
   float m_flSphereRadius; // 0x58 - 0x5C

}; // size - 0x60


class ResourceId_t
{
public:

   uint64_t m_Value; // 0x0 - 0x8

}; // size - 0x8


class ResponseContext_t
{
public:

   CUtlSymbolLarge m_iszName; // 0x0 - 0x8
   CUtlSymbolLarge m_iszValue; // 0x8 - 0x10
   GameTime_t m_fExpirationTime; // 0x10 - 0x14

}; // size - 0x18


class ResponseFollowup
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


class ResponseParams
{
public:

   int16_t odds; // 0x10 - 0x12
   int16_t flags; // 0x12 - 0x14
   unsigned char pad_14[0x4] // 0x14 - 0x18
   ResponseFollowup* m_pFollowup; // 0x18 - 0x20

}; // size - 0x20


class RnBlendVertex_t
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


class RnCapsuleDesc_t : public RnShapeDesc_t
{
public:

   RnCapsule_t m_Capsule; // 0x10 - 0x2C

}; // size - 0x30


class RnCapsule_t
{
public:

   Vector m_vCenter[2]; // 0x0 - 0x18
   float m_flRadius; // 0x18 - 0x1C

}; // size - 0x1C


class RnFace_t
{
public:

   uint8_t m_nEdge; // 0x0 - 0x1

}; // size - 0x1


class RnHalfEdge_t
{
public:

   uint8_t m_nNext; // 0x0 - 0x1
   uint8_t m_nTwin; // 0x1 - 0x2
   uint8_t m_nOrigin; // 0x2 - 0x3
   uint8_t m_nFace; // 0x3 - 0x4

}; // size - 0x4


class RnHullDesc_t : public RnShapeDesc_t
{
public:

   RnHull_t m_Hull; // 0x10 - 0xE8

}; // size - 0xE8


class RnHull_t
{
public:

   Vector m_vCentroid; // 0x0 - 0xC
   float m_flMaxAngularRadius; // 0xC - 0x10
   AABB_t m_Bounds; // 0x10 - 0x28
   Vector m_vOrthographicAreas; // 0x28 - 0x34
   matrix3x4_t m_MassProperties; // 0x34 - 0x64
   float m_flVolume; // 0x64 - 0x68
   CUtlVector< Vector > m_Vertices; // 0x68 - 0x80
   CUtlVector< RnHalfEdge_t > m_Edges; // 0x80 - 0x98
   CUtlVector< RnFace_t > m_Faces; // 0x98 - 0xB0
   CUtlVector< RnPlane_t > m_Planes; // 0xB0 - 0xC8
   uint32_t m_nFlags; // 0xC8 - 0xCC
   unsigned char pad_CC[0x4] // 0xCC - 0xD0
   CRegionSVM* m_pRegionSVM; // 0xD0 - 0xD8

}; // size - 0xD8


class RnMeshDesc_t : public RnShapeDesc_t
{
public:

   RnMesh_t m_Mesh; // 0x10 - 0xB0

}; // size - 0xB0


class RnMesh_t
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

}; // size - 0xA0


class RnNode_t
{
public:

   Vector m_vMin; // 0x0 - 0xC
   uint32_t m_nChildren; // 0xC - 0x10
   Vector m_vMax; // 0x10 - 0x1C
   uint32_t m_nTriangleOffset; // 0x1C - 0x20

}; // size - 0x20


class RnPlane_t
{
public:

   Vector m_vNormal; // 0x0 - 0xC
   float m_flOffset; // 0xC - 0x10

}; // size - 0x10


class RnSoftbodyCapsule_t
{
public:

   Vector m_vCenter[2]; // 0x0 - 0x18
   float m_flRadius; // 0x18 - 0x1C
   uint16 m_nParticle[2]; // 0x1C - 0x20

}; // size - 0x20


class RnSoftbodyParticle_t
{
public:

   float m_flMassInv; // 0x0 - 0x4

}; // size - 0x4


class RnSoftbodySpring_t
{
public:

   uint16 m_nParticle[2]; // 0x0 - 0x4
   float m_flLength; // 0x4 - 0x8

}; // size - 0x8


class RnSphereDesc_t : public RnShapeDesc_t
{
public:

   RnSphere_t m_Sphere; // 0x10 - 0x20

}; // size - 0x20


class RnSphere_t
{
public:

   Vector m_vCenter; // 0x0 - 0xC
   float m_flRadius; // 0xC - 0x10

}; // size - 0x10


class RnTriangle_t
{
public:

   int32 m_nIndex[3]; // 0x0 - 0xC

}; // size - 0xC


class RnWing_t
{
public:

   int32 m_nIndex[3]; // 0x0 - 0xC

}; // size - 0xC


class SampleCode
{
public:

   uint8 m_subCode[8]; // 0x0 - 0x8

}; // size - 0x8


class SceneObject_t
{
public:

   uint32_t m_nObjectID; // 0x0 - 0x4
   Vector4D m_vTransform[3]; // 0x4 - 0x34
   float m_flFadeStartDistance; // 0x34 - 0x38
   float m_flFadeEndDistance; // 0x38 - 0x3C
   Vector4D m_vTintColor; // 0x3C - 0x4C
   unsigned char pad_4C[0x4] // 0x4C - 0x50
   CUtlString m_skin; // 0x50 - 0x58
   ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58 - 0x5C
   Vector m_vLightingOrigin; // 0x5C - 0x68
   uint32_t m_nLightGroup; // 0x68 - 0x6C
   int16_t m_nOverlayRenderOrder; // 0x6C - 0x6E
   int16_t m_nLODOverride; // 0x6E - 0x70
   int32_t m_nCubeMapPrecomputedHandshake; // 0x70 - 0x74
   int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x74 - 0x78
   unsigned char pad_78[0x8] // 0x78 - 0x80
   CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x80 - 0x88
   CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x88 - 0x90

}; // size - 0x90


class SceneViewId_t
{
public:

   uint64_t m_nViewId; // 0x0 - 0x8
   uint64_t m_nFrameCount; // 0x8 - 0x10

}; // size - 0x10


class ScriptInfo_t
{
public:

   CUtlString m_code; // 0x0 - 0x8
   CUtlVector< CAnimParamHandle > m_paramsModified; // 0x8 - 0x20
   CUtlVector< int32 > m_proxyReadParams; // 0x20 - 0x38
   CUtlVector< int32 > m_proxyWriteParams; // 0x38 - 0x50
   AnimScriptType m_eScriptType; // 0x50 - 0x52

}; // size - 0x58


class SelectedEditItemInfo_t
{
public:

   CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0 - 0x18

}; // size - 0x18


class SequenceWeightedList_t
{
public:

   int32_t m_nSequence; // 0x0 - 0x4
   float m_flRelativeWeight; // 0x4 - 0x8

}; // size - 0x8


class SimpleConstraintSoundProfile
{
public:

   enum class SimpleConstraintsSoundProfileKeypoints_t : std::uint32_t
   {
      kMIN_THRESHOLD = 0,
      kMIN_FULL = 1,
      kHIGHWATER = 2
   };

   SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8 - 0xC
   float32 m_keyPoints[2]; // 0xC - 0x14
   float32 m_reversalSoundThresholds[3]; // 0x14 - 0x20

}; // size - 0x20


class SkeletalInputOpFixedSettings_t
{
public:

   CUtlVector< WristBone_t > m_wristBones; // 0x0 - 0x18
   CUtlVector< FingerChain_t > m_fingers; // 0x18 - 0x30
   int32_t m_outerKnuckle1; // 0x30 - 0x34
   int32_t m_outerKnuckle2; // 0x34 - 0x38
   AnimVRHand_t m_eHand; // 0x38 - 0x3C
   AnimVRHandMotionRange_t m_eMotionRange; // 0x3C - 0x40
   AnimVrBoneTransformSource_t m_eTransformSource; // 0x40 - 0x44
   bool m_bEnableIK; // 0x44 - 0x45
   bool m_bEnableCollision; // 0x45 - 0x46

}; // size - 0x48


class SkeletonBoneBounds_t
{
public:

   Vector m_vecCenter; // 0x0 - 0xC
   Vector m_vecSize; // 0xC - 0x18

}; // size - 0x18


class SolveIKChainPoseOpFixedSettings_t
{
public:

   CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0 - 0x18

}; // size - 0x18


class SosEditItemInfo_t
{
public:

   SosEditItemType_t itemType; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CUtlString itemName; // 0x8 - 0x10
   CUtlString itemTypeName; // 0x10 - 0x18
   unsigned char pad_18[0x8] // 0x18 - 0x20
   CUtlString itemKVString; // 0x20 - 0x28
   Vector2D itemPos; // 0x28 - 0x30

}; // size - 0x30


class StanceInfo_t
{
public:

   Vector m_vPosition; // 0x0 - 0xC
   float m_flDirection; // 0xC - 0x10

}; // size - 0x10


class SummaryTakeDamageInfo_t
{
public:

   int32_t nSummarisedCount; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CTakeDamageInfo info; // 0x8 - 0xA8
   CTakeDamageResult result; // 0xA8 - 0xB0
   CHandle< CBaseEntity > hTarget; // 0xB0 - 0xB4

}; // size - 0xB8


class TagSpan_t
{
public:

   int32_t m_tagIndex; // 0x0 - 0x4
   float m_startCycle; // 0x4 - 0x8
   float m_endCycle; // 0x8 - 0xC

}; // size - 0xC


class TestResource_t
{
public:

   CUtlString m_name; // 0x0 - 0x8

}; // size - 0x8


class TextureControls_t
{
public:

   CParticleCollectionFloatInput m_flFinalTextureScaleU; // 0x0 - 0x138
   CParticleCollectionFloatInput m_flFinalTextureScaleV; // 0x138 - 0x270
   CParticleCollectionFloatInput m_flFinalTextureOffsetU; // 0x270 - 0x3A8
   CParticleCollectionFloatInput m_flFinalTextureOffsetV; // 0x3A8 - 0x4E0
   CParticleCollectionFloatInput m_flFinalTextureUVRotation; // 0x4E0 - 0x618
   CParticleCollectionFloatInput m_flZoomScale; // 0x618 - 0x750
   CParticleCollectionFloatInput m_flDistortion; // 0x750 - 0x888
   bool m_bRandomizeOffsets; // 0x888 - 0x889
   bool m_bClampUVs; // 0x889 - 0x88A
   unsigned char pad_88A[0x2] // 0x88A - 0x88C
   SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x88C - 0x890
   SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x890 - 0x894
   SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x894 - 0x898
   SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x898 - 0x89C
   SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x89C - 0x8A0
   SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x8A0 - 0x8A4
   SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x8A4 - 0x8A8

}; // size - 0x8A8


class TextureGroup_t
{
public:

   bool m_bEnabled; // 0x0 - 0x1
   bool m_bReplaceTextureWithGradient; // 0x1 - 0x2
   unsigned char pad_2[0x6] // 0x2 - 0x8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x8 - 0x10
   CColorGradient m_Gradient; // 0x10 - 0x28
   SpriteCardTextureType_t m_nTextureType; // 0x28 - 0x2C
   SpriteCardTextureChannel_t m_nTextureChannels; // 0x2C - 0x30
   ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30 - 0x34
   unsigned char pad_34[0x4] // 0x34 - 0x38
   CParticleCollectionFloatInput m_flTextureBlend; // 0x38 - 0x170
   TextureControls_t m_TextureControls; // 0x170 - 0xA18

}; // size - 0xA18


class TimedEvent
{
public:

   float m_TimeBetweenEvents; // 0x0 - 0x4
   float m_fNextEvent; // 0x4 - 0x8

}; // size - 0x8


class TraceSettings_t
{
public:

   float m_flTraceHeight; // 0x0 - 0x4
   float m_flTraceRadius; // 0x4 - 0x8

}; // size - 0x8


class TwoBoneIKSettings_t
{
public:

   IkEndEffectorType m_endEffectorType; // 0x0 - 0x4
   unsigned char pad_4[0xC] // 0x4 - 0x10
   CAnimAttachment m_endEffectorAttachment; // 0x10 - 0xF
   unsigned char pad_F[0x81] // 0xF - 0x90
   IkTargetType m_targetType; // 0x90 - 0x94
   unsigned char pad_94[0xC] // 0x94 - 0xA0
   CAnimAttachment m_targetAttachment; // 0xA0 - 0x9F
   unsigned char pad_9F[0x81] // 0x9F - 0x120
   int32_t m_targetBoneIndex; // 0x120 - 0x124
   CAnimParamHandle m_hPositionParam; // 0x124 - 0x126
   CAnimParamHandle m_hRotationParam; // 0x126 - 0x128
   bool m_bAlwaysUseFallbackHinge; // 0x128 - 0x129
   unsigned char pad_129[0x7] // 0x129 - 0x130
   VectorAligned m_vFallbackHingeAxis; // 0x130 - 0x140
   int32_t m_nFixedBoneIndex; // 0x140 - 0x144
   int32_t m_nMiddleBoneIndex; // 0x144 - 0x148
   int32_t m_nEndBoneIndex; // 0x148 - 0x14C
   bool m_bMatchTargetOrientation; // 0x14C - 0x14D
   bool m_bConstrainTwist; // 0x14D - 0x14E
   unsigned char pad_14E[0x2] // 0x14E - 0x150
   float m_flMaxTwist; // 0x150 - 0x154

}; // size - 0x160


class VMapResourceData_t
{
public:


}; // size - 0x1


class VMixAutoFilterDesc_t
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


class VMixBoxverbDesc_t
{
public:

   float m_flSizeMax; // 0x0 - 0x4
   float m_flSizeMin; // 0x4 - 0x8
   float m_flComplexity; // 0x8 - 0xC
   float m_flDiffusion; // 0xC - 0x10
   float m_flModDepth; // 0x10 - 0x14
   float m_flModRate; // 0x14 - 0x18
   bool m_bParallel; // 0x18 - 0x19
   unsigned char pad_19[0x3] // 0x19 - 0x1C
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


class VMixConvolutionDesc_t
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


class VMixDelayDesc_t
{
public:

   VMixFilterDesc_t m_feedbackFilter; // 0x0 - 0x10
   bool m_bEnableFilter; // 0x10 - 0x11
   unsigned char pad_11[0x3] // 0x11 - 0x14
   float m_flDelay; // 0x14 - 0x18
   float m_flDirectGain; // 0x18 - 0x1C
   float m_flDelayGain; // 0x1C - 0x20
   float m_flFeedbackGain; // 0x20 - 0x24
   float m_flWidth; // 0x24 - 0x28

}; // size - 0x28


class VMixDiffusorDesc_t
{
public:

   float m_flSize; // 0x0 - 0x4
   float m_flComplexity; // 0x4 - 0x8
   float m_flFeedback; // 0x8 - 0xC
   float m_flOutputGain; // 0xC - 0x10

}; // size - 0x10


class VMixDynamics3BandDesc_t
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
   unsigned char pad_21[0x3] // 0x21 - 0x24
   VMixDynamicsBand_t m_bandDesc[3]; // 0x24 - 0x90

}; // size - 0x90


class VMixDynamicsBand_t
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

}; // size - 0x24


class VMixDynamicsCompressorDesc_t
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

}; // size - 0x24


class VMixDynamicsDesc_t
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

}; // size - 0x30


class VMixEQ8Desc_t
{
public:

   VMixFilterDesc_t m_stages[8]; // 0x0 - 0x80

}; // size - 0x80


class VMixEffectChainDesc_t
{
public:

   float m_flCrossfadeTime; // 0x0 - 0x4

}; // size - 0x4


class VMixEnvelopeDesc_t
{
public:

   float m_flAttackTimeMS; // 0x0 - 0x4
   float m_flHoldTimeMS; // 0x4 - 0x8
   float m_flReleaseTimeMS; // 0x8 - 0xC

}; // size - 0xC


class VMixFilterDesc_t
{
public:

   VMixFilterType_t m_nFilterType; // 0x0 - 0x2
   VMixFilterSlope_t m_nFilterSlope; // 0x2 - 0x3
   bool m_bEnabled; // 0x3 - 0x4
   float m_fldbGain; // 0x4 - 0x8
   float m_flCutoffFreq; // 0x8 - 0xC
   float m_flQ; // 0xC - 0x10

}; // size - 0x10


class VMixFreeverbDesc_t
{
public:

   float m_flRoomSize; // 0x0 - 0x4
   float m_flDamp; // 0x4 - 0x8
   float m_flWidth; // 0x8 - 0xC
   float m_flLateReflections; // 0xC - 0x10

}; // size - 0x10


class VMixModDelayDesc_t
{
public:

   VMixFilterDesc_t m_feedbackFilter; // 0x0 - 0x10
   bool m_bPhaseInvert; // 0x10 - 0x11
   unsigned char pad_11[0x3] // 0x11 - 0x14
   float m_flGlideTime; // 0x14 - 0x18
   float m_flDelay; // 0x18 - 0x1C
   float m_flOutputGain; // 0x1C - 0x20
   float m_flFeedbackGain; // 0x20 - 0x24
   float m_flModRate; // 0x24 - 0x28
   float m_flModDepth; // 0x28 - 0x2C
   bool m_bApplyAntialiasing; // 0x2C - 0x2D

}; // size - 0x30


class VMixOscDesc_t
{
public:

   VMixLFOShape_t oscType; // 0x0 - 0x4
   float m_freq; // 0x4 - 0x8
   float m_flPhase; // 0x8 - 0xC

}; // size - 0xC


class VMixPannerDesc_t
{
public:

   VMixPannerType_t m_type; // 0x0 - 0x4
   float m_flStrength; // 0x4 - 0x8

}; // size - 0x8


class VMixPitchShiftDesc_t
{
public:

   int32_t m_nGrainSampleCount; // 0x0 - 0x4
   float m_flPitchShift; // 0x4 - 0x8
   int32_t m_nQuality; // 0x8 - 0xC
   int32_t m_nProcType; // 0xC - 0x10

}; // size - 0x10


class VMixPlateverbDesc_t
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


class VMixShaperDesc_t
{
public:

   int32_t m_nShape; // 0x0 - 0x4
   float m_fldbDrive; // 0x4 - 0x8
   float m_fldbOutputGain; // 0x8 - 0xC
   float m_flWetMix; // 0xC - 0x10
   int32_t m_nOversampleFactor; // 0x10 - 0x14

}; // size - 0x14


class VMixSubgraphSwitchDesc_t
{
public:

   VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0 - 0x4
   bool m_bOnlyTailsOnFadeOut; // 0x4 - 0x5
   unsigned char pad_5[0x3] // 0x5 - 0x8
   float m_flInterpolationTime; // 0x8 - 0xC

}; // size - 0xC


class VMixUtilityDesc_t
{
public:

   VMixChannelOperation_t m_nOp; // 0x0 - 0x4
   float m_flInputPan; // 0x4 - 0x8
   float m_flOutputBalance; // 0x8 - 0xC
   float m_fldbOutputGain; // 0xC - 0x10
   bool m_bBassMono; // 0x10 - 0x11
   unsigned char pad_11[0x3] // 0x11 - 0x14
   float m_flBassFreq; // 0x14 - 0x18

}; // size - 0x18


class VMixVocoderDesc_t
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

}; // size - 0x28


class VPhysXAggregateData_t
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
   unsigned char pad_4[0x4] // 0x4 - 0x8
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


class VPhysXBodyPart_t
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
   unsigned char pad_91[0x3] // 0x91 - 0x94
   Vector m_vMassCenterOverride; // 0x94 - 0xA0

}; // size - 0xA0


class VPhysXCollisionAttributes_t
{
public:

   uint32_t m_CollisionGroup; // 0x0 - 0x4
   unsigned char pad_4[0x4] // 0x4 - 0x8
   CUtlVector< uint32 > m_InteractAs; // 0x8 - 0x20
   CUtlVector< uint32 > m_InteractWith; // 0x20 - 0x38
   CUtlVector< uint32 > m_InteractExclude; // 0x38 - 0x50
   CUtlString m_CollisionGroupString; // 0x50 - 0x58
   CUtlVector< CUtlString > m_InteractAsStrings; // 0x58 - 0x70
   CUtlVector< CUtlString > m_InteractWithStrings; // 0x70 - 0x88
   CUtlVector< CUtlString > m_InteractExcludeStrings; // 0x88 - 0xA0

}; // size - 0xA0


class VPhysXConstraint2_t
{
public:

   uint32_t m_nFlags; // 0x0 - 0x4
   uint16_t m_nParent; // 0x4 - 0x6
   uint16_t m_nChild; // 0x6 - 0x8
   VPhysXConstraintParams_t m_params; // 0x8 - 0x100

}; // size - 0x100


class VPhysXConstraintParams_t
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


class VPhysXJoint_t
{
public:

   enum class Flags_t : std::uint32_t
   {
      JOINT_FLAGS_NONE = 0,
      JOINT_FLAGS_BODY1_FIXED = 1
   };

   uint16_t m_nType; // 0x0 - 0x2
   uint16_t m_nBody1; // 0x2 - 0x4
   uint16_t m_nBody2; // 0x4 - 0x6
   uint16_t m_nFlags; // 0x6 - 0x8
   unsigned char pad_8[0x8] // 0x8 - 0x10
   CTransform m_Frame1; // 0x10 - 0x30
   CTransform m_Frame2; // 0x30 - 0x50
   bool m_bEnableCollision; // 0x50 - 0x51
   bool m_bEnableLinearLimit; // 0x51 - 0x52
   unsigned char pad_52[0x2] // 0x52 - 0x54
   VPhysXRange_t m_LinearLimit; // 0x54 - 0x5C
   bool m_bEnableLinearMotor; // 0x5C - 0x5D
   unsigned char pad_5D[0x3] // 0x5D - 0x60
   Vector m_vLinearTargetVelocity; // 0x60 - 0x6C
   float m_flMaxForce; // 0x6C - 0x70
   bool m_bEnableSwingLimit; // 0x70 - 0x71
   unsigned char pad_71[0x3] // 0x71 - 0x74
   VPhysXRange_t m_SwingLimit; // 0x74 - 0x7C
   bool m_bEnableTwistLimit; // 0x7C - 0x7D
   unsigned char pad_7D[0x3] // 0x7D - 0x80
   VPhysXRange_t m_TwistLimit; // 0x80 - 0x88
   bool m_bEnableAngularMotor; // 0x88 - 0x89
   unsigned char pad_89[0x3] // 0x89 - 0x8C
   Vector m_vAngularTargetVelocity; // 0x8C - 0x98
   float m_flMaxTorque; // 0x98 - 0x9C
   float m_flLinearFrequency; // 0x9C - 0xA0
   float m_flLinearDampingRatio; // 0xA0 - 0xA4
   float m_flAngularFrequency; // 0xA4 - 0xA8
   float m_flAngularDampingRatio; // 0xA8 - 0xAC
   float m_flFriction; // 0xAC - 0xB0

}; // size - 0xB0


class VPhysXRange_t
{
public:

   float m_flMin; // 0x0 - 0x4
   float m_flMax; // 0x4 - 0x8

}; // size - 0x8


class VPhysics2ShapeDef_t
{
public:

   CUtlVector< RnSphereDesc_t > m_spheres; // 0x0 - 0x18
   CUtlVector< RnCapsuleDesc_t > m_capsules; // 0x18 - 0x30
   CUtlVector< RnHullDesc_t > m_hulls; // 0x30 - 0x48
   CUtlVector< RnMeshDesc_t > m_meshes; // 0x48 - 0x60
   CUtlVector< uint16 > m_CollisionAttributeIndices; // 0x60 - 0x78

}; // size - 0x78


class VPhysicsCollisionAttribute_t
{
public:

   uint64_t m_nInteractsAs; // 0x8 - 0x10
   uint64_t m_nInteractsWith; // 0x10 - 0x18
   uint64_t m_nInteractsExclude; // 0x18 - 0x20
   uint32_t m_nEntityId; // 0x20 - 0x24
   uint32_t m_nOwnerId; // 0x24 - 0x28
   uint16_t m_nHierarchyId; // 0x28 - 0x2A
   uint8_t m_nCollisionGroup; // 0x2A - 0x2B
   uint8_t m_nCollisionFunctionMask; // 0x2B - 0x2C

}; // size - 0x30


class VPhysicsCollisionAttribute_t
{
public:

   uint64_t m_nInteractsAs; // 0x8 - 0x10
   uint64_t m_nInteractsWith; // 0x10 - 0x18
   uint64_t m_nInteractsExclude; // 0x18 - 0x20
   uint32_t m_nEntityId; // 0x20 - 0x24
   uint32_t m_nOwnerId; // 0x24 - 0x28
   uint16_t m_nHierarchyId; // 0x28 - 0x2A
   uint8_t m_nCollisionGroup; // 0x2A - 0x2B
   uint8_t m_nCollisionFunctionMask; // 0x2B - 0x2C

}; // size - 0x30


class VariableInfo_t
{
public:

   CUtlString m_name; // 0x0 - 0x8
   CUtlStringToken m_nameToken; // 0x8 - 0xC
   FuseVariableIndex_t m_nIndex; // 0xC - 0xE
   uint8_t m_nNumComponents; // 0xE - 0xF
   FuseVariableType_t m_eVarType; // 0xF - 0x10
   FuseVariableAccess_t m_eAccess; // 0x10 - 0x11

}; // size - 0x18


class VecInputMaterialVariable_t
{
public:

   CUtlString m_strVariable; // 0x0 - 0x8
   CParticleCollectionVecInput m_vecInput; // 0x8 - 0x5D0

}; // size - 0x5D0


class VelocitySampler
{
public:

   Vector m_prevSample; // 0x0 - 0xC
   GameTime_t m_fPrevSampleTime; // 0xC - 0x10
   float m_fIdealSampleRate; // 0x10 - 0x14

}; // size - 0x14


class VertexPositionColor_t
{
public:

   Vector m_vPosition; // 0x0 - 0xC

}; // size - 0x10


class VertexPositionNormal_t
{
public:

   Vector m_vPosition; // 0x0 - 0xC
   Vector m_vNormal; // 0xC - 0x18

}; // size - 0x18


class VoxelVisBlockOffset_t
{
public:

   uint32_t m_nOffset; // 0x0 - 0x4
   uint32_t m_nElementCount; // 0x4 - 0x8

}; // size - 0x8


class VsInputSignatureElement_t
{
public:

   char m_pName[64]; // 0x0 - 0x40
   char m_pSemantic[64]; // 0x40 - 0x80
   char m_pD3DSemanticName[64]; // 0x80 - 0xC0
   int32_t m_nD3DSemanticIndex; // 0xC0 - 0xC4

}; // size - 0xC4


class VsInputSignature_t
{
public:

   CUtlVector< VsInputSignatureElement_t > m_elems; // 0x0 - 0x18

}; // size - 0x18


class WeightList
{
public:

   CUtlString m_name; // 0x0 - 0x8
   CUtlVector< float32 > m_weights; // 0x8 - 0x20

}; // size - 0x20


class WorldBuilderParams_t
{
public:

   float m_flMinDrawVolumeSize; // 0x0 - 0x4
   bool m_bBuildBakedLighting; // 0x4 - 0x5
   unsigned char pad_5[0x3] // 0x5 - 0x8
   Vector2D m_vLightmapUvScale; // 0x8 - 0x10
   uint64_t m_nCompileTimestamp; // 0x10 - 0x18
   uint64_t m_nCompileFingerprint; // 0x18 - 0x20

}; // size - 0x20


class WorldNodeOnDiskBufferData_t
{
public:

   int32_t m_nElementCount; // 0x0 - 0x4
   int32_t m_nElementSizeInBytes; // 0x4 - 0x8
   CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8 - 0x20
   CUtlVector< uint8 > m_pData; // 0x20 - 0x38

}; // size - 0x38


class WorldNode_t
{
public:

   CUtlVector< SceneObject_t > m_sceneObjects; // 0x0 - 0x18
   CUtlVector< InfoOverlayData_t > m_infoOverlays; // 0x18 - 0x30
   CUtlVector< uint16 > m_visClusterMembership; // 0x30 - 0x48
   CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects; // 0x48 - 0x60
   CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // 0x60 - 0x78
   CUtlVector< MaterialOverride_t > m_materialOverrides; // 0x78 - 0x90
   CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams; // 0x90 - 0xA8
   CUtlVector< CUtlString > m_layerNames; // 0xA8 - 0xC0
   CUtlVector< uint8 > m_sceneObjectLayerIndices; // 0xC0 - 0xD8
   CUtlVector< uint8 > m_overlayLayerIndices; // 0xD8 - 0xF0
   CUtlString m_grassFileName; // 0xF0 - 0xF8
   BakedLightingInfo_t m_nodeLightingInfo; // 0xF8 - 0x128

}; // size - 0x128


class World_t
{
public:

   WorldBuilderParams_t m_builderParams; // 0x0 - 0x20
   CUtlVector< NodeData_t > m_worldNodes; // 0x20 - 0x38
   BakedLightingInfo_t m_worldLightingInfo; // 0x38 - 0x68
   CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0x68 - 0x80

}; // size - 0x80


class WristBone_t
{
public:

   CTransform m_xOffsetTransformMS; // 0x0 - 0x20
   int32_t m_boneIndex; // 0x20 - 0x24

}; // size - 0x30


class audioparams_t
{
public:

   Vector localSound[8]; // 0x8 - 0x68
   int32_t soundscapeIndex; // 0x68 - 0x6C
   uint8_t localBits; // 0x6C - 0x6D
   unsigned char pad_6D[0x3] // 0x6D - 0x70
   int32_t soundscapeEntityListIndex; // 0x70 - 0x74
   uint32_t soundEventHash; // 0x74 - 0x78

}; // size - 0x78


class audioparams_t
{
public:

   Vector localSound[8]; // 0x8 - 0x68
   int32_t soundscapeIndex; // 0x68 - 0x6C
   uint8_t localBits; // 0x6C - 0x6D
   unsigned char pad_6D[0x3] // 0x6D - 0x70
   int32_t soundscapeEntityListIndex; // 0x70 - 0x74
   uint32_t soundEventHash; // 0x74 - 0x78

}; // size - 0x78


class constraint_axislimit_t
{
public:

   float flMinRotation; // 0x0 - 0x4
   float flMaxRotation; // 0x4 - 0x8
   float flMotorTargetAngSpeed; // 0x8 - 0xC
   float flMotorMaxTorque; // 0xC - 0x10

}; // size - 0x10


class constraint_breakableparams_t
{
public:

   float strength; // 0x0 - 0x4
   float forceLimit; // 0x4 - 0x8
   float torqueLimit; // 0x8 - 0xC
   float32 bodyMassScale[2]; // 0xC - 0x14
   bool isActive; // 0x14 - 0x15

}; // size - 0x18


class constraint_hingeparams_t
{
public:

   Vector worldPosition; // 0x0 - 0xC
   Vector worldAxisDirection; // 0xC - 0x18
   constraint_axislimit_t hingeAxis; // 0x18 - 0x28
   constraint_breakableparams_t constraint; // 0x28 - 0x40

}; // size - 0x40


class dynpitchvol_t : public dynpitchvol_base_t
{
public:


}; // size - 0x64


class fogparams_t
{
public:

   Vector dirPrimary; // 0x8 - 0x14
   Color colorPrimary; // 0x14 - 0x18
   Color colorSecondary; // 0x18 - 0x1C
   Color colorPrimaryLerpTo; // 0x1C - 0x20
   Color colorSecondaryLerpTo; // 0x20 - 0x24
   float start; // 0x24 - 0x28
   float end; // 0x28 - 0x2C
   float farz; // 0x2C - 0x30
   float maxdensity; // 0x30 - 0x34
   float exponent; // 0x34 - 0x38
   float HDRColorScale; // 0x38 - 0x3C
   float skyboxFogFactor; // 0x3C - 0x40
   float skyboxFogFactorLerpTo; // 0x40 - 0x44
   float startLerpTo; // 0x44 - 0x48
   float endLerpTo; // 0x48 - 0x4C
   float maxdensityLerpTo; // 0x4C - 0x50
   GameTime_t lerptime; // 0x50 - 0x54
   float duration; // 0x54 - 0x58
   float blendtobackground; // 0x58 - 0x5C
   float scattering; // 0x5C - 0x60
   float locallightscale; // 0x60 - 0x64
   bool enable; // 0x64 - 0x65
   bool blend; // 0x65 - 0x66
   bool m_bNoReflectionFog; // 0x66 - 0x67
   bool m_bPadding; // 0x67 - 0x68

}; // size - 0x68


class fogparams_t
{
public:

   Vector dirPrimary; // 0x8 - 0x14
   Color colorPrimary; // 0x14 - 0x18
   Color colorSecondary; // 0x18 - 0x1C
   Color colorPrimaryLerpTo; // 0x1C - 0x20
   Color colorSecondaryLerpTo; // 0x20 - 0x24
   float start; // 0x24 - 0x28
   float end; // 0x28 - 0x2C
   float farz; // 0x2C - 0x30
   float maxdensity; // 0x30 - 0x34
   float exponent; // 0x34 - 0x38
   float HDRColorScale; // 0x38 - 0x3C
   float skyboxFogFactor; // 0x3C - 0x40
   float skyboxFogFactorLerpTo; // 0x40 - 0x44
   float startLerpTo; // 0x44 - 0x48
   float endLerpTo; // 0x48 - 0x4C
   float maxdensityLerpTo; // 0x4C - 0x50
   GameTime_t lerptime; // 0x50 - 0x54
   float duration; // 0x54 - 0x58
   float blendtobackground; // 0x58 - 0x5C
   float scattering; // 0x5C - 0x60
   float locallightscale; // 0x60 - 0x64
   bool enable; // 0x64 - 0x65
   bool blend; // 0x65 - 0x66
   bool m_bNoReflectionFog; // 0x66 - 0x67
   bool m_bPadding; // 0x67 - 0x68

}; // size - 0x68


class fogplayerparams_t
{
public:

   CHandle< CFogController > m_hCtrl; // 0x8 - 0xC
   float m_flTransitionTime; // 0xC - 0x10
   Color m_OldColor; // 0x10 - 0x14
   float m_flOldStart; // 0x14 - 0x18
   float m_flOldEnd; // 0x18 - 0x1C
   float m_flOldMaxDensity; // 0x1C - 0x20
   float m_flOldHDRColorScale; // 0x20 - 0x24
   float m_flOldFarZ; // 0x24 - 0x28
   Color m_NewColor; // 0x28 - 0x2C
   float m_flNewStart; // 0x2C - 0x30
   float m_flNewEnd; // 0x30 - 0x34
   float m_flNewMaxDensity; // 0x34 - 0x38
   float m_flNewHDRColorScale; // 0x38 - 0x3C
   float m_flNewFarZ; // 0x3C - 0x40

}; // size - 0x40


class hudtextparms_t
{
public:

   Color color1; // 0x0 - 0x4
   Color color2; // 0x4 - 0x8
   uint8_t effect; // 0x8 - 0x9
   uint8_t channel; // 0x9 - 0xA
   unsigned char pad_A[0x2] // 0xA - 0xC
   float x; // 0xC - 0x10
   float y; // 0x10 - 0x14

}; // size - 0x14


class lerpdata_t
{
public:

   CHandle< CBaseEntity > m_hEnt; // 0x0 - 0x4
   MoveType_t m_MoveType; // 0x4 - 0x5
   unsigned char pad_5[0x3] // 0x5 - 0x8
   GameTime_t m_flStartTime; // 0x8 - 0xC
   Vector m_vecStartOrigin; // 0xC - 0x18
   unsigned char pad_18[0x8] // 0x18 - 0x20
   Quaternion m_qStartRot; // 0x20 - 0x30
   ParticleIndex_t m_nFXIndex; // 0x30 - 0x34

}; // size - 0x40


class locksound_t
{
public:

   CUtlSymbolLarge sLockedSound; // 0x8 - 0x10
   CUtlSymbolLarge sUnlockedSound; // 0x10 - 0x18
   GameTime_t flwaitSound; // 0x18 - 0x1C

}; // size - 0x20


class magnetted_objects_t
{
public:

   CHandle< CBaseEntity > hEntity; // 0x8 - 0xC

}; // size - 0x10


class ragdoll_t
{
public:

   CUtlVector< ragdollelement_t > list; // 0x0 - 0x18
   CUtlVector< int32 > boneIndex; // 0x18 - 0x30
   bool allowStretch; // 0x30 - 0x31
   bool unused; // 0x31 - 0x32

}; // size - 0x38


class ragdollelement_t
{
public:

   Vector originParentSpace; // 0x0 - 0xC
   unsigned char pad_C[0x14] // 0xC - 0x20
   int32_t parentIndex; // 0x20 - 0x24
   float m_flRadius; // 0x24 - 0x28

}; // size - 0x28


class shard_model_desc_t
{
public:

   int32_t m_nModelID; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x10 - 0x18
   ShardSolid_t m_solid; // 0x18 - 0x19
   ShatterPanelMode m_ShatterPanelMode; // 0x19 - 0x1A
   unsigned char pad_1A[0x2] // 0x1A - 0x1C
   Vector2D m_vecPanelSize; // 0x1C - 0x24
   Vector2D m_vecStressPositionA; // 0x24 - 0x2C
   Vector2D m_vecStressPositionB; // 0x2C - 0x34
   unsigned char pad_34[0x4] // 0x34 - 0x38
   C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x38 - 0x50
   float m_flGlassHalfThickness; // 0x50 - 0x54
   bool m_bHasParent; // 0x54 - 0x55
   bool m_bParentFrozen; // 0x55 - 0x56
   unsigned char pad_56[0x2] // 0x56 - 0x58
   CUtlStringToken m_SurfacePropStringToken; // 0x58 - 0x5C
   CUtlStringToken m_LightGroup; // 0x5C - 0x60

}; // size - 0x60


class shard_model_desc_t
{
public:

   int32_t m_nModelID; // 0x8 - 0xC
   unsigned char pad_C[0x4] // 0xC - 0x10
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x10 - 0x18
   ShardSolid_t m_solid; // 0x18 - 0x19
   ShatterPanelMode m_ShatterPanelMode; // 0x19 - 0x1A
   unsigned char pad_1A[0x2] // 0x1A - 0x1C
   Vector2D m_vecPanelSize; // 0x1C - 0x24
   Vector2D m_vecStressPositionA; // 0x24 - 0x2C
   Vector2D m_vecStressPositionB; // 0x2C - 0x34
   unsigned char pad_34[0x4] // 0x34 - 0x38
   CNetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x38 - 0x50
   float m_flGlassHalfThickness; // 0x50 - 0x54
   bool m_bHasParent; // 0x54 - 0x55
   bool m_bParentFrozen; // 0x55 - 0x56
   unsigned char pad_56[0x2] // 0x56 - 0x58
   CUtlStringToken m_SurfacePropStringToken; // 0x58 - 0x5C
   CUtlStringToken m_LightGroup; // 0x5C - 0x60

}; // size - 0x60


class sky3dparams_t
{
public:

   int16_t scale; // 0x8 - 0xA
   unsigned char pad_A[0x2] // 0xA - 0xC
   Vector origin; // 0xC - 0x18
   bool bClip3DSkyBoxNearToWorldFar; // 0x18 - 0x19
   unsigned char pad_19[0x3] // 0x19 - 0x1C
   float flClip3DSkyBoxNearToWorldFarOffset; // 0x1C - 0x20
   fogparams_t fog; // 0x20 - 0x88
   WorldGroupId_t m_nWorldGroupID; // 0x88 - 0x8C

}; // size - 0x90


class sky3dparams_t
{
public:

   int16_t scale; // 0x8 - 0xA
   unsigned char pad_A[0x2] // 0xA - 0xC
   Vector origin; // 0xC - 0x18
   bool bClip3DSkyBoxNearToWorldFar; // 0x18 - 0x19
   unsigned char pad_19[0x3] // 0x19 - 0x1C
   float flClip3DSkyBoxNearToWorldFarOffset; // 0x1C - 0x20
   fogparams_t fog; // 0x20 - 0x88
   WorldGroupId_t m_nWorldGroupID; // 0x88 - 0x8C

}; // size - 0x90


class thinkfunc_t
{
public:

   HSCRIPT m_hFn; // 0x8 - 0x10
   CUtlStringToken m_nContext; // 0x10 - 0x14
   GameTick_t m_nNextThinkTick; // 0x14 - 0x18
   GameTick_t m_nLastThinkTick; // 0x18 - 0x1C

}; // size - 0x20


