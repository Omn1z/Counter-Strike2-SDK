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

   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x8
   CEntityIdentity* m_pEntity; // 0x10 - 0x10
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x28

}; // size - 0x30


class CBaseEntity : public CEntityInstance
{
public:

   CBodyComponent* m_CBodyComponent; // 0x30 - 0x30
   CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x38 - 0x38
   CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x218 - 0x218
   std::int32_t m_iCurrentThinkContext; // 0x230 - 0x230
   GameTick_t m_nLastThinkTick; // 0x234 - 0x234
   CBitVec< 64 > m_isSteadyState; // 0x240 - 0x240
   std::float_t m_lastNetworkChange; // 0x248 - 0x248
   CUtlVector< ResponseContext_t > m_ResponseContexts; // 0x258 - 0x258
   CUtlSymbolLarge m_iszResponseContext; // 0x270 - 0x270
   std::int32_t m_iHealth; // 0x298 - 0x298
   std::int32_t m_iMaxHealth; // 0x29C - 0x29C
   std::uint8_t m_lifeState; // 0x2A0 - 0x2A0
   std::float_t m_flDamageAccumulator; // 0x2A4 - 0x2A4
   bool m_bTakesDamage; // 0x2A8 - 0x2A8
   TakeDamageFlags_t m_nTakeDamageFlags; // 0x2AC - 0x2AC
   MoveCollide_t m_MoveCollide; // 0x2B1 - 0x2B1
   MoveType_t m_MoveType; // 0x2B2 - 0x2B2
   std::uint8_t m_nWaterTouch; // 0x2B3 - 0x2B3
   std::uint8_t m_nSlimeTouch; // 0x2B4 - 0x2B4
   bool m_bRestoreInHierarchy; // 0x2B5 - 0x2B5
   CUtlSymbolLarge m_target; // 0x2B8 - 0x2B8
   std::float_t m_flMoveDoneTime; // 0x2C0 - 0x2C0
   CHandle< CBaseFilter > m_hDamageFilter; // 0x2C4 - 0x2C4
   CUtlSymbolLarge m_iszDamageFilterName; // 0x2C8 - 0x2C8
   CUtlStringToken m_nSubclassID; // 0x2D0 - 0x2D0
   std::float_t m_flAnimTime; // 0x2E0 - 0x2E0
   std::float_t m_flSimulationTime; // 0x2E4 - 0x2E4
   GameTime_t m_flCreateTime; // 0x2E8 - 0x2E8
   bool m_bClientSideRagdoll; // 0x2EC - 0x2EC
   std::uint8_t m_ubInterpolationFrame; // 0x2ED - 0x2ED
   Vector m_vPrevVPhysicsUpdatePos; // 0x2F0 - 0x2F0
   std::uint8_t m_iTeamNum; // 0x2FC - 0x2FC
   CUtlSymbolLarge m_iGlobalname; // 0x300 - 0x300
   std::int32_t m_iSentToClients; // 0x308 - 0x308
   std::float_t m_flSpeed; // 0x30C - 0x30C
   CUtlString m_sUniqueHammerID; // 0x310 - 0x310
   std::uint32_t m_spawnflags; // 0x318 - 0x318
   GameTick_t m_nNextThinkTick; // 0x31C - 0x31C
   std::int32_t m_nSimulationTick; // 0x320 - 0x320
   CEntityIOOutput m_OnKilled; // 0x328 - 0x328
   std::uint32_t m_fFlags; // 0x350 - 0x350
   Vector m_vecAbsVelocity; // 0x354 - 0x354
   CNetworkVelocityVector m_vecVelocity; // 0x360 - 0x360
   Vector m_vecBaseVelocity; // 0x390 - 0x390
   std::int32_t m_nPushEnumCount; // 0x39C - 0x39C
   CCollisionProperty* m_pCollision; // 0x3A0 - 0x3A0
   CHandle< CBaseEntity > m_hEffectEntity; // 0x3A8 - 0x3A8
   CHandle< CBaseEntity > m_hOwnerEntity; // 0x3AC - 0x3AC
   std::uint32_t m_fEffects; // 0x3B0 - 0x3B0
   CHandle< CBaseEntity > m_hGroundEntity; // 0x3B4 - 0x3B4
   std::float_t m_flFriction; // 0x3B8 - 0x3B8
   std::float_t m_flElasticity; // 0x3BC - 0x3BC
   std::float_t m_flGravityScale; // 0x3C0 - 0x3C0
   std::float_t m_flTimeScale; // 0x3C4 - 0x3C4
   std::float_t m_flWaterLevel; // 0x3C8 - 0x3C8
   bool m_bSimulatedEveryTick; // 0x3CC - 0x3CC
   bool m_bAnimatedEveryTick; // 0x3CD - 0x3CD
   std::uint8_t m_nMinCPULevel; // 0x3CE - 0x3CE
   std::uint8_t m_nMaxCPULevel; // 0x3CF - 0x3CF
   std::uint8_t m_nMinGPULevel; // 0x3D0 - 0x3D0
   std::uint8_t m_nMaxGPULevel; // 0x3D1 - 0x3D1
   bool m_bDisableLowViolence; // 0x3D2 - 0x3D2
   std::uint8_t m_nWaterType; // 0x3D3 - 0x3D3
   std::int32_t m_iEFlags; // 0x3D4 - 0x3D4
   CEntityIOOutput m_OnUser1; // 0x3D8 - 0x3D8
   CEntityIOOutput m_OnUser2; // 0x400 - 0x400
   CEntityIOOutput m_OnUser3; // 0x428 - 0x428
   CEntityIOOutput m_OnUser4; // 0x450 - 0x450
   std::int32_t m_iInitialTeamNum; // 0x478 - 0x478
   GameTime_t m_flNavIgnoreUntilTime; // 0x47C - 0x47C
   QAngle m_vecAngVelocity; // 0x480 - 0x480
   bool m_bNetworkQuantizeOriginAndAngles; // 0x48C - 0x48C
   bool m_bLagCompensate; // 0x48D - 0x48D
   std::float_t m_flOverriddenFriction; // 0x490 - 0x490
   CHandle< CBaseEntity > m_pBlocker; // 0x494 - 0x494
   std::float_t m_flLocalTime; // 0x498 - 0x498
   std::float_t m_flVPhysicsUpdateLocalTime; // 0x49C - 0x49C

}; // size - 0x4A0


class CEntityInstance : public IHandleEntity
{
public:

   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x8
   CEntityIdentity* m_pEntity; // 0x10 - 0x10
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x28

}; // size - 0x30


class CBaseModelEntity : public CBaseEntity
{
public:

   CRenderComponent* m_CRenderComponent; // 0x4A0 - 0x4A0
   CHitboxComponent m_CHitboxComponent; // 0x4A8 - 0x4A8
   GameTime_t m_flDissolveStartTime; // 0x4D0 - 0x4D0
   CEntityIOOutput m_OnIgnite; // 0x4D8 - 0x4D8
   RenderMode_t m_nRenderMode; // 0x500 - 0x500
   RenderFx_t m_nRenderFX; // 0x501 - 0x501
   bool m_bAllowFadeInView; // 0x502 - 0x502
   Color m_clrRender; // 0x503 - 0x503
   CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x508 - 0x508
   CUtlStringToken m_LightGroup; // 0x558 - 0x558
   bool m_bRenderToCubemaps; // 0x55C - 0x55C
   CCollisionProperty m_Collision; // 0x560 - 0x560
   CGlowProperty m_Glow; // 0x610 - 0x610
   std::float_t m_flGlowBackfaceMult; // 0x668 - 0x668
   std::float_t m_fadeMinDist; // 0x66C - 0x66C
   std::float_t m_fadeMaxDist; // 0x670 - 0x670
   std::float_t m_flFadeScale; // 0x674 - 0x674
   std::float_t m_flShadowStrength; // 0x678 - 0x678
   std::uint8_t m_nObjectCulling; // 0x67C - 0x67C
   std::int32_t m_nAddDecal; // 0x680 - 0x680
   Vector m_vDecalPosition; // 0x684 - 0x684
   Vector m_vDecalForwardAxis; // 0x690 - 0x690
   std::float_t m_flDecalHealBloodRate; // 0x69C - 0x69C
   std::float_t m_flDecalHealHeightRate; // 0x6A0 - 0x6A0
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x6A8 - 0x6A8
   CNetworkViewOffsetVector m_vecViewOffset; // 0x6C0 - 0x6C0

}; // size - 0x6F0


class C_BaseEntity : public CEntityInstance
{
public:

   CBodyComponent* m_CBodyComponent; // 0x30 - 0x30
   CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x38 - 0x38
   GameTick_t m_nLastThinkTick; // 0x2F8 - 0x2F8
   CGameSceneNode* m_pGameSceneNode; // 0x300 - 0x300
   CRenderComponent* m_pRenderComponent; // 0x308 - 0x308
   CCollisionProperty* m_pCollision; // 0x310 - 0x310
   std::int32_t m_iMaxHealth; // 0x318 - 0x318
   std::int32_t m_iHealth; // 0x31C - 0x31C
   std::uint8_t m_lifeState; // 0x320 - 0x320
   bool m_bTakesDamage; // 0x321 - 0x321
   TakeDamageFlags_t m_nTakeDamageFlags; // 0x324 - 0x324
   std::uint8_t m_ubInterpolationFrame; // 0x328 - 0x328
   CHandle< C_BaseEntity > m_hSceneObjectController; // 0x32C - 0x32C
   std::int32_t m_nNoInterpolationTick; // 0x330 - 0x330
   std::int32_t m_nVisibilityNoInterpolationTick; // 0x334 - 0x334
   std::float_t m_flProxyRandomValue; // 0x338 - 0x338
   std::int32_t m_iEFlags; // 0x33C - 0x33C
   std::uint8_t m_nWaterType; // 0x340 - 0x340
   bool m_bInterpolateEvenWithNoModel; // 0x341 - 0x341
   bool m_bPredictionEligible; // 0x342 - 0x342
   bool m_bApplyLayerMatchIDToModel; // 0x343 - 0x343
   CUtlStringToken m_tokLayerMatchID; // 0x344 - 0x344
   CUtlStringToken m_nSubclassID; // 0x348 - 0x348
   std::int32_t m_nSimulationTick; // 0x358 - 0x358
   std::int32_t m_iCurrentThinkContext; // 0x35C - 0x35C
   CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x360 - 0x360
   std::float_t m_flAnimTime; // 0x378 - 0x378
   std::float_t m_flSimulationTime; // 0x37C - 0x37C
   std::uint8_t m_nSceneObjectOverrideFlags; // 0x380 - 0x380
   bool m_bHasSuccessfullyInterpolated; // 0x381 - 0x381
   bool m_bHasAddedVarsToInterpolation; // 0x382 - 0x382
   bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x383 - 0x383
   int32 m_nInterpolationLatchDirtyFlags[2]; // 0x384 - 0x384
   uint16 m_ListEntry[11]; // 0x38C - 0x38C
   GameTime_t m_flCreateTime; // 0x3A4 - 0x3A4
   std::float_t m_flSpeed; // 0x3A8 - 0x3A8
   std::uint16_t m_EntClientFlags; // 0x3AC - 0x3AC
   bool m_bClientSideRagdoll; // 0x3AE - 0x3AE
   std::uint8_t m_iTeamNum; // 0x3AF - 0x3AF
   std::uint32_t m_spawnflags; // 0x3B0 - 0x3B0
   GameTick_t m_nNextThinkTick; // 0x3B4 - 0x3B4
   std::uint32_t m_fFlags; // 0x3B8 - 0x3B8
   Vector m_vecAbsVelocity; // 0x3BC - 0x3BC
   CNetworkVelocityVector m_vecVelocity; // 0x3C8 - 0x3C8
   Vector m_vecBaseVelocity; // 0x3F8 - 0x3F8
   CHandle< C_BaseEntity > m_hEffectEntity; // 0x404 - 0x404
   CHandle< C_BaseEntity > m_hOwnerEntity; // 0x408 - 0x408
   MoveCollide_t m_MoveCollide; // 0x40C - 0x40C
   MoveType_t m_MoveType; // 0x40D - 0x40D
   std::float_t m_flWaterLevel; // 0x410 - 0x410
   std::uint32_t m_fEffects; // 0x414 - 0x414
   CHandle< C_BaseEntity > m_hGroundEntity; // 0x418 - 0x418
   std::float_t m_flFriction; // 0x41C - 0x41C
   std::float_t m_flElasticity; // 0x420 - 0x420
   std::float_t m_flGravityScale; // 0x424 - 0x424
   std::float_t m_flTimeScale; // 0x428 - 0x428
   bool m_bSimulatedEveryTick; // 0x42C - 0x42C
   bool m_bAnimatedEveryTick; // 0x42D - 0x42D
   std::uint8_t m_nMinCPULevel; // 0x42E - 0x42E
   std::uint8_t m_nMaxCPULevel; // 0x42F - 0x42F
   std::uint8_t m_nMinGPULevel; // 0x430 - 0x430
   std::uint8_t m_nMaxGPULevel; // 0x431 - 0x431
   GameTime_t m_flNavIgnoreUntilTime; // 0x434 - 0x434
   std::uint16_t m_hThink; // 0x438 - 0x438
   std::uint8_t m_fBBoxVisFlags; // 0x448 - 0x448
   bool m_bPredictable; // 0x449 - 0x449
   bool m_bRenderWithViewModels; // 0x44A - 0x44A
   CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x44C - 0x44C
   std::int32_t m_nFirstPredictableCommand; // 0x450 - 0x450
   std::int32_t m_nLastPredictableCommand; // 0x454 - 0x454
   CHandle< C_BaseEntity > m_hOldMoveParent; // 0x458 - 0x458
   CParticleProperty m_Particles; // 0x460 - 0x460
   CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x488 - 0x488
   CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x4A0 - 0x4A0
   std::int32_t m_nNextScriptVarRecordID; // 0x4D0 - 0x4D0
   QAngle m_vecAngVelocity; // 0x4E0 - 0x4E0
   std::int32_t m_DataChangeEventRef; // 0x4EC - 0x4EC
   CUtlVector< CEntityHandle > m_dependencies; // 0x4F0 - 0x4F0
   std::int32_t m_nCreationTick; // 0x508 - 0x508
   bool m_bAnimTimeChanged; // 0x521 - 0x521
   bool m_bSimulationTimeChanged; // 0x522 - 0x522
   CUtlString m_sUniqueHammerID; // 0x530 - 0x530

}; // size - 0x538


class C_BaseModelEntity : public C_BaseEntity
{
public:

   CRenderComponent* m_CRenderComponent; // 0x588 - 0x588
   CHitboxComponent m_CHitboxComponent; // 0x590 - 0x590
   bool m_bInitModelEffects; // 0x5D8 - 0x5D8
   bool m_bIsStaticProp; // 0x5D9 - 0x5D9
   std::int32_t m_nLastAddDecal; // 0x5DC - 0x5DC
   std::int32_t m_nDecalsAdded; // 0x5E0 - 0x5E0
   std::int32_t m_iOldHealth; // 0x5E4 - 0x5E4
   RenderMode_t m_nRenderMode; // 0x5E8 - 0x5E8
   RenderFx_t m_nRenderFX; // 0x5E9 - 0x5E9
   bool m_bAllowFadeInView; // 0x5EA - 0x5EA
   Color m_clrRender; // 0x5EB - 0x5EB
   C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x5F0 - 0x5F0
   CUtlStringToken m_LightGroup; // 0x658 - 0x658
   bool m_bRenderToCubemaps; // 0x65C - 0x65C
   CCollisionProperty m_Collision; // 0x660 - 0x660
   CGlowProperty m_Glow; // 0x710 - 0x710
   std::float_t m_flGlowBackfaceMult; // 0x768 - 0x768
   std::float_t m_fadeMinDist; // 0x76C - 0x76C
   std::float_t m_fadeMaxDist; // 0x770 - 0x770
   std::float_t m_flFadeScale; // 0x774 - 0x774
   std::float_t m_flShadowStrength; // 0x778 - 0x778
   std::uint8_t m_nObjectCulling; // 0x77C - 0x77C
   std::int32_t m_nAddDecal; // 0x780 - 0x780
   Vector m_vDecalPosition; // 0x784 - 0x784
   Vector m_vDecalForwardAxis; // 0x790 - 0x790
   std::float_t m_flDecalHealBloodRate; // 0x79C - 0x79C
   std::float_t m_flDecalHealHeightRate; // 0x7A0 - 0x7A0
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x7A8 - 0x7A8
   CNetworkViewOffsetVector m_vecViewOffset; // 0x7C0 - 0x7C0
   CClientAlphaProperty* m_pClientAlphaProperty; // 0x7F0 - 0x7F0
   Color m_ClientOverrideTint; // 0x7F8 - 0x7F8
   bool m_bUseClientOverrideTint; // 0x7FC - 0x7FC

}; // size - 0x838


class CBaseAnimGraph : public CBaseModelEntity
{
public:

   PhysicsRagdollPose_t* m_pRagdollPose; // 0x700 - 0x700
   bool m_bClientRagdoll; // 0x708 - 0x708
   Vector m_vecForce; // 0x70C - 0x70C
   std::int32_t m_nForceBone; // 0x718 - 0x718
   bool m_bShouldAnimateDuringGameplayPause; // 0x71C - 0x71C
   bool m_bAnimGraphUpdateEnabled; // 0x71D - 0x71D
   bool m_bInitiallyPopulateInterpHistory; // 0x71E - 0x71E
   std::float_t m_flMaxSlopeDistance; // 0x720 - 0x720
   Vector m_vLastSlopeCheckPos; // 0x724 - 0x724
   IChoreoServices* m_pChoreoServices; // 0x730 - 0x730
   bool m_bAnimGraphDirty; // 0x738 - 0x738

}; // size - 0x820


class CParticleFunction
{
public:

   CParticleCollectionFloatInput m_flOpStrength; // 0x8 - 0x8
   ParticleEndcapMode_t m_nOpEndCapState; // 0x140 - 0x140
   std::float_t m_flOpStartFadeInTime; // 0x144 - 0x144
   std::float_t m_flOpEndFadeInTime; // 0x148 - 0x148
   std::float_t m_flOpStartFadeOutTime; // 0x14C - 0x14C
   std::float_t m_flOpEndFadeOutTime; // 0x150 - 0x150
   std::float_t m_flOpFadeOscillatePeriod; // 0x154 - 0x154
   bool m_bNormalizeToStopTime; // 0x158 - 0x158
   std::float_t m_flOpTimeOffsetMin; // 0x15C - 0x15C
   std::float_t m_flOpTimeOffsetMax; // 0x160 - 0x160
   std::int32_t m_nOpTimeOffsetSeed; // 0x164 - 0x164
   std::int32_t m_nOpTimeScaleSeed; // 0x168 - 0x168
   std::float_t m_flOpTimeScaleMin; // 0x16C - 0x16C
   std::float_t m_flOpTimeScaleMax; // 0x170 - 0x170
   bool m_bDisableOperator; // 0x175 - 0x175
   CUtlString m_Notes; // 0x178 - 0x178

}; // size - 0x1F0


class CBaseAnimGraph : public C_BaseModelEntity
{
public:

   PhysicsRagdollPose_t* m_pRagdollPose; // 0x848 - 0x848
   bool m_bClientRagdoll; // 0x850 - 0x850
   Vector m_vecForce; // 0x854 - 0x854
   std::int32_t m_nForceBone; // 0x860 - 0x860
   bool m_bShouldAnimateDuringGameplayPause; // 0x864 - 0x864
   bool m_bAnimGraphUpdateEnabled; // 0x865 - 0x865
   bool m_bInitiallyPopulateInterpHistory; // 0x866 - 0x866
   std::float_t m_flMaxSlopeDistance; // 0x868 - 0x868
   Vector m_vLastSlopeCheckPos; // 0x86C - 0x86C
   bool m_bHasAnimatedMaterialAttributes; // 0x878 - 0x878
   CBaseAnimGraph* m_pClientsideRagdoll; // 0x880 - 0x880
   bool m_builtRagdoll; // 0x888 - 0x888
   bool m_bSuppressAnimEventSounds; // 0x898 - 0x898

}; // size - 0x998


class C_BaseFlex : public CBaseAnimGraph
{
public:

   C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0x9A0 - 0x9A0
   bool m_blinktoggle; // 0x9B8 - 0x9B8
   Vector m_vLookTargetPosition; // 0x9C0 - 0x9C0
   std::int32_t m_nLastFlexUpdateFrameCount; // 0xA30 - 0xA30
   Vector m_CachedViewTarget; // 0xA34 - 0xA34
   std::uint32_t m_nNextSceneEventId; // 0xA40 - 0xA40
   std::int32_t m_iBlink; // 0xA44 - 0xA44
   std::float_t m_blinktime; // 0xA48 - 0xA48
   bool m_prevblinktoggle; // 0xA4C - 0xA4C
   std::int32_t m_iJawOpen; // 0xA50 - 0xA50
   std::float_t m_flJawOpenAmount; // 0xA54 - 0xA54
   std::float_t m_flBlinkAmount; // 0xA58 - 0xA58
   AttachmentHandle_t m_iMouthAttachment; // 0xA5C - 0xA5C
   AttachmentHandle_t m_iEyeAttachment; // 0xA5D - 0xA5D
   bool m_bResetFlexWeightsOnModelChange; // 0xA5E - 0xA5E
   std::int32_t m_nEyeOcclusionRendererBone; // 0xA78 - 0xA78
   matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xA7C - 0xA7C
   Vector m_vEyeOcclusionRendererHalfExtent; // 0xAAC - 0xAAC
   C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0xAC8 - 0xAC8

}; // size - 0xB28


class CBaseFlex : public CBaseAnimGraph
{
public:

   CNetworkUtlVectorBase< float32 > m_flexWeight; // 0x820 - 0x820
   Vector m_vLookTargetPosition; // 0x838 - 0x838
   bool m_blinktoggle; // 0x844 - 0x844
   GameTime_t m_flAllowResponsesEndTime; // 0x898 - 0x898
   GameTime_t m_flLastFlexAnimationTime; // 0x89C - 0x89C
   std::uint32_t m_nNextSceneEventId; // 0x8A0 - 0x8A0
   bool m_bUpdateLayerPriorities; // 0x8A4 - 0x8A4

}; // size - 0x8B0


class CServerOnlyEntity : public CBaseEntity
{
public:


}; // size - 0x4A0


class CParticleFunctionOperator : public CParticleFunction
{
public:


}; // size - 0x1F0


class CBaseProp : public CBaseAnimGraph
{
public:

   bool m_bModelOverrodeBlockLOS; // 0x820 - 0x820
   std::int32_t m_iShapeType; // 0x824 - 0x824
   bool m_bConformToCollisionBounds; // 0x828 - 0x828
   matrix3x4_t m_mPreferredCatchTransform; // 0x82C - 0x82C

}; // size - 0x860


class C_EconEntity : public C_BaseFlex
{
public:

   class AttachedModelData_t
   {
   public:

      std::int32_t m_iModelDisplayFlags; // 0x0 - 0x0

   }; // size - 0x4

   std::float_t m_flFlexDelayTime; // 0xB38 - 0xB38
   float32* m_flFlexDelayedWeight; // 0xB40 - 0xB40
   bool m_bAttributesInitialized; // 0xB48 - 0xB48
   C_AttributeContainer m_AttributeManager; // 0xB50 - 0xB50
   std::uint32_t m_OriginalOwnerXuidLow; // 0xFF8 - 0xFF8
   std::uint32_t m_OriginalOwnerXuidHigh; // 0xFFC - 0xFFC
   std::int32_t m_nFallbackPaintKit; // 0x1000 - 0x1000
   std::int32_t m_nFallbackSeed; // 0x1004 - 0x1004
   std::float_t m_flFallbackWear; // 0x1008 - 0x1008
   std::int32_t m_nFallbackStatTrak; // 0x100C - 0x100C
   bool m_bClientside; // 0x1010 - 0x1010
   bool m_bParticleSystemsCreated; // 0x1011 - 0x1011
   CUtlVector< int32 > m_vecAttachedParticles; // 0x1018 - 0x1018
   CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0x1030 - 0x1030
   std::int32_t m_iOldTeam; // 0x1034 - 0x1034
   bool m_bAttachmentDirty; // 0x1038 - 0x1038
   std::int32_t m_nUnloadedModelIndex; // 0x103C - 0x103C
   std::int32_t m_iNumOwnerValidationRetries; // 0x1040 - 0x1040
   CHandle< C_BaseEntity > m_hOldProvidee; // 0x1050 - 0x1050
   CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0x1058 - 0x1058

}; // size - 0x1070


class CBreakableProp : public CBaseProp
{
public:

   CEntityIOOutput m_OnBreak; // 0x870 - 0x870
   CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x898 - 0x898
   CEntityIOOutput m_OnTakeDamage; // 0x8C0 - 0x8C0
   std::float_t m_impactEnergyScale; // 0x8E8 - 0x8E8
   std::int32_t m_iMinHealthDmg; // 0x8EC - 0x8EC
   QAngle m_preferredCarryAngles; // 0x8F0 - 0x8F0
   std::float_t m_flPressureDelay; // 0x8FC - 0x8FC
   CHandle< CBaseEntity > m_hBreaker; // 0x900 - 0x900
   PerformanceMode_t m_PerformanceMode; // 0x904 - 0x904
   std::float_t m_flDmgModBullet; // 0x908 - 0x908
   std::float_t m_flDmgModClub; // 0x90C - 0x90C
   std::float_t m_flDmgModExplosive; // 0x910 - 0x910
   std::float_t m_flDmgModFire; // 0x914 - 0x914
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x918 - 0x918
   CUtlSymbolLarge m_iszBasePropData; // 0x920 - 0x920
   std::int32_t m_iInteractions; // 0x928 - 0x928
   GameTime_t m_flPreventDamageBeforeTime; // 0x92C - 0x92C
   bool m_bHasBreakPiecesOrCommands; // 0x930 - 0x930
   std::float_t m_explodeDamage; // 0x934 - 0x934
   std::float_t m_explodeRadius; // 0x938 - 0x938
   std::float_t m_explosionDelay; // 0x940 - 0x940
   CUtlSymbolLarge m_explosionBuildupSound; // 0x948 - 0x948
   CUtlSymbolLarge m_explosionCustomEffect; // 0x950 - 0x950
   CUtlSymbolLarge m_explosionCustomSound; // 0x958 - 0x958
   CUtlSymbolLarge m_explosionModifier; // 0x960 - 0x960
   CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x968 - 0x968
   GameTime_t m_flLastPhysicsInfluenceTime; // 0x96C - 0x96C
   bool m_bOriginalBlockLOS; // 0x970 - 0x970
   std::float_t m_flDefaultFadeScale; // 0x974 - 0x974
   CHandle< CBaseEntity > m_hLastAttacker; // 0x978 - 0x978
   CHandle< CBaseEntity > m_hFlareEnt; // 0x97C - 0x97C
   bool m_bUsePuntSound; // 0x980 - 0x980
   CUtlSymbolLarge m_iszPuntSound; // 0x988 - 0x988
   bool m_noGhostCollision; // 0x990 - 0x990

}; // size - 0x998


class CBaseToggle : public CBaseModelEntity
{
public:

   TOGGLE_STATE m_toggle_state; // 0x6F0 - 0x6F0
   std::float_t m_flMoveDistance; // 0x6F4 - 0x6F4
   std::float_t m_flWait; // 0x6F8 - 0x6F8
   std::float_t m_flLip; // 0x6FC - 0x6FC
   bool m_bAlwaysFireBlockedOutputs; // 0x700 - 0x700
   Vector m_vecPosition1; // 0x704 - 0x704
   Vector m_vecPosition2; // 0x710 - 0x710
   QAngle m_vecMoveAng; // 0x71C - 0x71C
   QAngle m_vecAngle1; // 0x728 - 0x728
   QAngle m_vecAngle2; // 0x734 - 0x734
   std::float_t m_flHeight; // 0x740 - 0x740
   CHandle< CBaseEntity > m_hActivator; // 0x744 - 0x744
   Vector m_vecFinalDest; // 0x748 - 0x748
   QAngle m_vecFinalAngle; // 0x754 - 0x754
   std::int32_t m_movementType; // 0x760 - 0x760
   CUtlSymbolLarge m_sMaster; // 0x768 - 0x768

}; // size - 0x770


class CEconEntity : public CBaseFlex
{
public:

   CAttributeContainer m_AttributeManager; // 0x8C0 - 0x8C0
   std::uint32_t m_OriginalOwnerXuidLow; // 0xB88 - 0xB88
   std::uint32_t m_OriginalOwnerXuidHigh; // 0xB8C - 0xB8C
   std::int32_t m_nFallbackPaintKit; // 0xB90 - 0xB90
   std::int32_t m_nFallbackSeed; // 0xB94 - 0xB94
   std::float_t m_flFallbackWear; // 0xB98 - 0xB98
   std::int32_t m_nFallbackStatTrak; // 0xB9C - 0xB9C
   CHandle< CBaseEntity > m_hOldProvidee; // 0xBA0 - 0xBA0
   std::int32_t m_iOldOwnerClass; // 0xBA4 - 0xBA4

}; // size - 0xBA8


class C_BasePlayerWeapon : public C_EconEntity
{
public:

   WeaponState_t m_iState; // 0x1070 - 0x1070
   WeaponState_t m_iOldState; // 0x1074 - 0x1074
   bool m_bRemoveable; // 0x1078 - 0x1078
   GameTick_t m_nNextPrimaryAttackTick; // 0x107C - 0x107C
   std::float_t m_flNextPrimaryAttackTickRatio; // 0x1080 - 0x1080
   GameTick_t m_nNextSecondaryAttackTick; // 0x1084 - 0x1084
   std::float_t m_flNextSecondaryAttackTickRatio; // 0x1088 - 0x1088
   std::int32_t m_iClip1; // 0x108C - 0x108C
   std::int32_t m_iClip2; // 0x1090 - 0x1090
   int32 m_pReserveAmmo[2]; // 0x1094 - 0x1094

}; // size - 0x10A0


class CParticleFunctionInitializer : public CParticleFunction
{
public:

   std::int32_t m_nAssociatedEmitterIndex; // 0x1E8 - 0x1E8

}; // size - 0x1F0


class CBasePlayerWeapon : public CEconEntity
{
public:

   WeaponState_t m_iState; // 0xBA8 - 0xBA8
   bool m_bRemoveable; // 0xBAC - 0xBAC
   GameTick_t m_nNextPrimaryAttackTick; // 0xBB0 - 0xBB0
   std::float_t m_flNextPrimaryAttackTickRatio; // 0xBB4 - 0xBB4
   GameTick_t m_nNextSecondaryAttackTick; // 0xBB8 - 0xBB8
   std::float_t m_flNextSecondaryAttackTickRatio; // 0xBBC - 0xBBC
   std::int32_t m_iClip1; // 0xBC0 - 0xBC0
   std::int32_t m_iClip2; // 0xBC4 - 0xBC4
   int32 m_pReserveAmmo[2]; // 0xBC8 - 0xBC8
   CEntityIOOutput m_OnPlayerUse; // 0xBD0 - 0xBD0

}; // size - 0xBF8


class CPhysicsProp : public CBreakableProp
{
public:

   CEntityIOOutput m_MotionEnabled; // 0x9A0 - 0x9A0
   CEntityIOOutput m_OnAwakened; // 0x9C8 - 0x9C8
   CEntityIOOutput m_OnAwake; // 0x9F0 - 0x9F0
   CEntityIOOutput m_OnAsleep; // 0xA18 - 0xA18
   CEntityIOOutput m_OnPlayerUse; // 0xA40 - 0xA40
   CEntityIOOutput m_OnPlayerPickup; // 0xA68 - 0xA68
   CEntityIOOutput m_OnOutOfWorld; // 0xA90 - 0xA90
   std::float_t m_massScale; // 0xAB8 - 0xAB8
   std::float_t m_inertiaScale; // 0xABC - 0xABC
   std::int32_t m_damageType; // 0xAC0 - 0xAC0
   std::int32_t m_damageToEnableMotion; // 0xAC4 - 0xAC4
   std::float_t m_flForceToEnableMotion; // 0xAC8 - 0xAC8
   bool m_bThrownByPlayer; // 0xACC - 0xACC
   bool m_bDroppedByPlayer; // 0xACD - 0xACD
   bool m_bTouchedByPlayer; // 0xACE - 0xACE
   bool m_bFirstCollisionAfterLaunch; // 0xACF - 0xACF
   std::int32_t m_iExploitableByPlayer; // 0xAD0 - 0xAD0
   bool m_bHasBeenAwakened; // 0xAD4 - 0xAD4
   bool m_bIsOverrideProp; // 0xAD5 - 0xAD5
   GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xAD8 - 0xAD8
   std::int32_t m_iInitialGlowState; // 0xADC - 0xADC
   std::int32_t m_nGlowRange; // 0xAE0 - 0xAE0
   std::int32_t m_nGlowRangeMin; // 0xAE4 - 0xAE4
   Color m_glowColor; // 0xAE8 - 0xAE8
   bool m_bForceNavIgnore; // 0xAEC - 0xAEC
   bool m_bNoNavmeshBlocker; // 0xAED - 0xAED
   bool m_bForceNpcExclude; // 0xAEE - 0xAEE
   bool m_bShouldAutoConvertBackFromDebris; // 0xAEF - 0xAEF
   bool m_bMuteImpactEffects; // 0xAF0 - 0xAF0
   bool m_bAcceptDamageFromHeldObjects; // 0xAF8 - 0xAF8
   bool m_bEnableUseOutput; // 0xAF9 - 0xAF9
   bool m_bAwake; // 0xAFA - 0xAFA
   std::int32_t m_nCollisionGroupOverride; // 0xAFC - 0xAFC

}; // size - 0xB00


class CPointEntity : public CBaseEntity
{
public:


}; // size - 0x4A0


class CLogicalEntity : public CServerOnlyEntity
{
public:


}; // size - 0x4A0


class C_WeaponCSBase : public C_BasePlayerWeapon
{
public:

   std::float_t m_flFireSequenceStartTime; // 0x10D8 - 0x10D8
   std::int32_t m_nFireSequenceStartTimeChange; // 0x10DC - 0x10DC
   std::int32_t m_nFireSequenceStartTimeAck; // 0x10E0 - 0x10E0
   bool m_bPlayerFireEventIsPrimary; // 0x10E4 - 0x10E4
   HSequence m_seqIdle; // 0x10E8 - 0x10E8
   HSequence m_seqFirePrimary; // 0x10EC - 0x10EC
   HSequence m_seqFireSecondary; // 0x10F0 - 0x10F0
   std::float_t m_flCrosshairDistance; // 0x1108 - 0x1108
   std::int32_t m_iAmmoLastCheck; // 0x110C - 0x110C
   std::int32_t m_iAlpha; // 0x1110 - 0x1110
   std::int32_t m_iScopeTextureID; // 0x1114 - 0x1114
   std::int32_t m_iCrosshairTextureID; // 0x1118 - 0x1118
   std::float_t m_flGunAccuracyPosition; // 0x111C - 0x111C
   std::uint32_t m_nViewModelIndex; // 0x1120 - 0x1120
   bool m_bReloadsWithClips; // 0x1124 - 0x1124
   GameTime_t m_flTimeWeaponIdle; // 0x1128 - 0x1128
   bool m_bFireOnEmpty; // 0x112C - 0x112C
   CEntityIOOutput m_OnPlayerPickup; // 0x1130 - 0x1130
   CSWeaponMode m_weaponMode; // 0x1158 - 0x1158
   std::float_t m_flTurningInaccuracyDelta; // 0x115C - 0x115C
   Vector m_vecTurningInaccuracyEyeDirLast; // 0x1160 - 0x1160
   std::float_t m_flTurningInaccuracy; // 0x116C - 0x116C
   std::float_t m_fAccuracyPenalty; // 0x1170 - 0x1170
   GameTime_t m_flLastAccuracyUpdateTime; // 0x1174 - 0x1174
   std::float_t m_fAccuracySmoothedForZoom; // 0x1178 - 0x1178
   GameTime_t m_fScopeZoomEndTime; // 0x117C - 0x117C
   std::int32_t m_iRecoilIndex; // 0x1180 - 0x1180
   std::float_t m_flRecoilIndex; // 0x1184 - 0x1184
   bool m_bBurstMode; // 0x1188 - 0x1188
   GameTime_t m_flPostponeFireReadyTime; // 0x118C - 0x118C
   bool m_bInReload; // 0x1190 - 0x1190
   bool m_bReloadVisuallyComplete; // 0x1191 - 0x1191
   GameTime_t m_flDroppedAtTime; // 0x1194 - 0x1194
   bool m_bIsHauledBack; // 0x1198 - 0x1198
   bool m_bSilencerOn; // 0x1199 - 0x1199
   GameTime_t m_flTimeSilencerSwitchComplete; // 0x119C - 0x119C
   std::int32_t m_iOriginalTeamNumber; // 0x11A0 - 0x11A0
   std::float_t m_flNextAttackRenderTimeOffset; // 0x11A4 - 0x11A4
   bool m_bVisualsDataSet; // 0x1230 - 0x1230
   bool m_bOldFirstPersonSpectatedState; // 0x1231 - 0x1231
   CHandle< C_BaseEntity > m_hOurPing; // 0x1234 - 0x1234
   CEntityIndex m_nOurPingIndex; // 0x1238 - 0x1238
   Vector m_vecOurPingPos; // 0x123C - 0x123C
   bool m_bGlowForPing; // 0x1248 - 0x1248
   bool m_bUIWeapon; // 0x1249 - 0x1249
   CHandle< C_CSPlayerPawnBase > m_hPrevOwner; // 0x1258 - 0x1258
   bool m_donated; // 0x127C - 0x127C
   GameTime_t m_fLastShotTime; // 0x1280 - 0x1280
   bool m_bWasOwnedByCT; // 0x1284 - 0x1284
   bool m_bWasOwnedByTerrorist; // 0x1285 - 0x1285
   std::float_t m_gunHeat; // 0x1288 - 0x1288
   std::uint32_t m_smokeAttachments; // 0x128C - 0x128C
   GameTime_t m_lastSmokeTime; // 0x1290 - 0x1290
   std::float_t m_flLastClientFireBulletTime; // 0x1294 - 0x1294
   C_IronSightController m_IronSightController; // 0x12F0 - 0x12F0
   std::int32_t m_iIronSightMode; // 0x13A0 - 0x13A0
   GameTime_t m_flLastLOSTraceFailureTime; // 0x13B0 - 0x13B0
   std::int32_t m_iNumEmptyAttacks; // 0x13B4 - 0x13B4

}; // size - 0x13D0


class CBaseTrigger : public CBaseToggle
{
public:

   bool m_bDisabled; // 0x770 - 0x770
   CUtlSymbolLarge m_iFilterName; // 0x778 - 0x778
   CHandle< CBaseFilter > m_hFilter; // 0x780 - 0x780
   CEntityIOOutput m_OnStartTouch; // 0x788 - 0x788
   CEntityIOOutput m_OnStartTouchAll; // 0x7B0 - 0x7B0
   CEntityIOOutput m_OnEndTouch; // 0x7D8 - 0x7D8
   CEntityIOOutput m_OnEndTouchAll; // 0x800 - 0x800
   CEntityIOOutput m_OnTouching; // 0x828 - 0x828
   CEntityIOOutput m_OnNotTouching; // 0x850 - 0x850
   CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x878 - 0x878
   bool m_bClientSidePredicted; // 0x890 - 0x890

}; // size - 0x898


class CWeaponCSBase : public CBasePlayerWeapon
{
public:

   std::float_t m_flFireSequenceStartTime; // 0xC20 - 0xC20
   std::int32_t m_nFireSequenceStartTimeChange; // 0xC24 - 0xC24
   std::int32_t m_nFireSequenceStartTimeAck; // 0xC28 - 0xC28
   bool m_bPlayerFireEventIsPrimary; // 0xC2C - 0xC2C
   HSequence m_seqIdle; // 0xC30 - 0xC30
   HSequence m_seqFirePrimary; // 0xC34 - 0xC34
   HSequence m_seqFireSecondary; // 0xC38 - 0xC38
   bool m_bPlayerAmmoStockOnPickup; // 0xC48 - 0xC48
   bool m_bRequireUseToTouch; // 0xC49 - 0xC49
   GameTime_t m_flLastTimeInAir; // 0xC4C - 0xC4C
   GameTime_t m_flLastDeployTime; // 0xC50 - 0xC50
   std::uint32_t m_nViewModelIndex; // 0xC54 - 0xC54
   bool m_bReloadsWithClips; // 0xC58 - 0xC58
   GameTime_t m_flTimeWeaponIdle; // 0xC5C - 0xC5C
   bool m_bFireOnEmpty; // 0xC60 - 0xC60
   CEntityIOOutput m_OnPlayerPickup; // 0xC68 - 0xC68
   CSWeaponMode m_weaponMode; // 0xC90 - 0xC90
   std::float_t m_flTurningInaccuracyDelta; // 0xC94 - 0xC94
   Vector m_vecTurningInaccuracyEyeDirLast; // 0xC98 - 0xC98
   std::float_t m_flTurningInaccuracy; // 0xCA4 - 0xCA4
   std::float_t m_fAccuracyPenalty; // 0xCA8 - 0xCA8
   GameTime_t m_flLastAccuracyUpdateTime; // 0xCAC - 0xCAC
   std::float_t m_fAccuracySmoothedForZoom; // 0xCB0 - 0xCB0
   GameTime_t m_fScopeZoomEndTime; // 0xCB4 - 0xCB4
   std::int32_t m_iRecoilIndex; // 0xCB8 - 0xCB8
   std::float_t m_flRecoilIndex; // 0xCBC - 0xCBC
   bool m_bBurstMode; // 0xCC0 - 0xCC0
   GameTime_t m_flPostponeFireReadyTime; // 0xCC4 - 0xCC4
   bool m_bInReload; // 0xCC8 - 0xCC8
   bool m_bReloadVisuallyComplete; // 0xCC9 - 0xCC9
   GameTime_t m_flDroppedAtTime; // 0xCCC - 0xCCC
   bool m_bIsHauledBack; // 0xCD0 - 0xCD0
   bool m_bSilencerOn; // 0xCD1 - 0xCD1
   GameTime_t m_flTimeSilencerSwitchComplete; // 0xCD4 - 0xCD4
   std::int32_t m_iOriginalTeamNumber; // 0xCD8 - 0xCD8
   std::float_t m_flNextAttackRenderTimeOffset; // 0xCDC - 0xCDC
   bool m_bCanBePickedUp; // 0xCE8 - 0xCE8
   bool m_bUseCanOverrideNextOwnerTouchTime; // 0xCE9 - 0xCE9
   GameTime_t m_nextOwnerTouchTime; // 0xCEC - 0xCEC
   GameTime_t m_nextPrevOwnerTouchTime; // 0xCF0 - 0xCF0
   CHandle< CCSPlayerPawnBase > m_hPrevOwner; // 0xCF4 - 0xCF4
   bool m_donated; // 0xD14 - 0xD14
   GameTime_t m_fLastShotTime; // 0xD18 - 0xD18
   bool m_bWasOwnedByCT; // 0xD1C - 0xD1C
   bool m_bWasOwnedByTerrorist; // 0xD1D - 0xD1D
   bool m_bFiredOutOfAmmoEvent; // 0xD1E - 0xD1E
   std::int32_t m_numRemoveUnownedWeaponThink; // 0xD20 - 0xD20
   CIronSightController m_IronSightController; // 0xD28 - 0xD28
   std::int32_t m_iIronSightMode; // 0xD40 - 0xD40
   GameTime_t m_flLastLOSTraceFailureTime; // 0xD44 - 0xD44
   std::int32_t m_iNumEmptyAttacks; // 0xD48 - 0xD48

}; // size - 0xD50


class CPlayerPawnComponent
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x8

}; // size - 0x40


class CPhysicsPropMultiplayer : public CPhysicsProp
{
public:


}; // size - 0xB00


class CAnimUpdateNodeBase
{
public:

   CAnimNodePath m_nodePath; // 0x18 - 0x18
   CUtlString m_name; // 0x48 - 0x48
   AnimNodeNetworkMode m_networkMode; // 0x50 - 0x50

}; // size - 0x58


class CBrBaseItem : public CPhysicsPropMultiplayer
{
public:


}; // size - 0xB28


class CParticleFunctionPreEmission : public CParticleFunctionOperator
{
public:

   bool m_bRunOnce; // 0x1F0 - 0x1F0

}; // size - 0x200


class CServerOnlyPointEntity : public CServerOnlyEntity
{
public:


}; // size - 0x4A0


class C_WeaponCSBaseGun : public C_WeaponCSBase
{
public:

   std::int32_t m_zoomLevel; // 0x13D0 - 0x13D0
   std::int32_t m_iBurstShotsRemaining; // 0x13D4 - 0x13D4
   std::int32_t m_iSilencerBodygroup; // 0x13D8 - 0x13D8
   std::int32_t m_silencedModelIndex; // 0x13E8 - 0x13E8
   bool m_inPrecache; // 0x13EC - 0x13EC
   bool m_bNeedsBoltAction; // 0x13ED - 0x13ED

}; // size - 0x13F0


class CEntityComponent
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class CAnimNodeBase
{
public:

   CUtlString m_sName; // 0x20 - 0x20
   Vector2D m_vecPosition; // 0x28 - 0x28
   AnimNodeID m_nNodeID; // 0x30 - 0x30
   AnimNodeNetworkMode m_networkMode; // 0x34 - 0x34

}; // size - 0x38


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
   }

   C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0xB28 - 0xB28
   std::int32_t m_bloodColor; // 0xB40 - 0xB40
   AttachmentHandle_t m_leftFootAttachment; // 0xB44 - 0xB44
   AttachmentHandle_t m_rightFootAttachment; // 0xB45 - 0xB45
   C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xB48 - 0xB48
   std::float_t m_flWaterWorldZ; // 0xB4C - 0xB4C
   std::float_t m_flWaterNextTraceTime; // 0xB50 - 0xB50
   std::float_t m_flFieldOfView; // 0xB54 - 0xB54

}; // size - 0xBB8


class CUnaryUpdateNode : public CAnimUpdateNodeBase
{
public:

   CAnimUpdateNodeRef m_pChildNode; // 0x58 - 0x58

}; // size - 0x68


class CBaseFilter : public CLogicalEntity
{
public:

   bool m_bNegated; // 0x4A0 - 0x4A0
   CEntityIOOutput m_OnPass; // 0x4A8 - 0x4A8
   CEntityIOOutput m_OnFail; // 0x4D0 - 0x4D0

}; // size - 0x4F8


class CParticleFunctionRenderer : public CParticleFunction
{
public:

   CParticleVisibilityInputs VisibilityInputs; // 0x1E8 - 0x1E8
   bool m_bCannotBeRefracted; // 0x22C - 0x22C
   bool m_bSkipRenderingOnMobile; // 0x22D - 0x22D

}; // size - 0x230


class C_BaseGrenade : public C_BaseFlex
{
public:

   bool m_bHasWarnedAI; // 0xB28 - 0xB28
   bool m_bIsSmokeGrenade; // 0xB29 - 0xB29
   bool m_bIsLive; // 0xB2A - 0xB2A
   std::float_t m_DmgRadius; // 0xB2C - 0xB2C
   GameTime_t m_flDetonateTime; // 0xB30 - 0xB30
   std::float_t m_flWarnAITime; // 0xB34 - 0xB34
   std::float_t m_flDamage; // 0xB38 - 0xB38
   CUtlSymbolLarge m_iszBounceSound; // 0xB40 - 0xB40
   CUtlString m_ExplosionSound; // 0xB48 - 0xB48
   CHandle< C_BaseEntity > m_hThrower; // 0xB54 - 0xB54
   GameTime_t m_flNextAttack; // 0xB70 - 0xB70
   CHandle< C_BaseEntity > m_hOriginalThrower; // 0xB74 - 0xB74

}; // size - 0xB78


class CBaseGrenade : public CBaseFlex
{
public:

   CEntityIOOutput m_OnPlayerPickup; // 0x8B8 - 0x8B8
   CEntityIOOutput m_OnExplode; // 0x8E0 - 0x8E0
   bool m_bHasWarnedAI; // 0x908 - 0x908
   bool m_bIsSmokeGrenade; // 0x909 - 0x909
   bool m_bIsLive; // 0x90A - 0x90A
   std::float_t m_DmgRadius; // 0x90C - 0x90C
   GameTime_t m_flDetonateTime; // 0x910 - 0x910
   std::float_t m_flWarnAITime; // 0x914 - 0x914
   std::float_t m_flDamage; // 0x918 - 0x918
   CUtlSymbolLarge m_iszBounceSound; // 0x920 - 0x920
   CUtlString m_ExplosionSound; // 0x928 - 0x928
   CHandle< CBaseEntity > m_hThrower; // 0x934 - 0x934
   GameTime_t m_flNextAttack; // 0x950 - 0x950
   CHandle< CBaseEntity > m_hOriginalThrower; // 0x954 - 0x954

}; // size - 0x958


class CPhysConstraint : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_nameAttach1; // 0x4A8 - 0x4A8
   CUtlSymbolLarge m_nameAttach2; // 0x4B0 - 0x4B0
   CUtlSymbolLarge m_breakSound; // 0x4B8 - 0x4B8
   std::float_t m_forceLimit; // 0x4C0 - 0x4C0
   std::float_t m_torqueLimit; // 0x4C4 - 0x4C4
   std::uint32_t m_teleportTick; // 0x4C8 - 0x4C8
   std::float_t m_minTeleportDistance; // 0x4CC - 0x4CC
   CEntityIOOutput m_OnBreak; // 0x4D0 - 0x4D0

}; // size - 0x4F8


class CWeaponCSBaseGun : public CWeaponCSBase
{
public:

   std::int32_t m_zoomLevel; // 0xD50 - 0xD50
   std::int32_t m_iBurstShotsRemaining; // 0xD54 - 0xD54
   std::int32_t m_silencedModelIndex; // 0xD60 - 0xD60
   bool m_inPrecache; // 0xD64 - 0xD64
   bool m_bNeedsBoltAction; // 0xD65 - 0xD65
   bool m_bSkillReloadAvailable; // 0xD66 - 0xD66
   bool m_bSkillReloadLiftedReloadKey; // 0xD67 - 0xD67
   bool m_bSkillBoltInterruptAvailable; // 0xD68 - 0xD68
   bool m_bSkillBoltLiftedFireKey; // 0xD69 - 0xD69

}; // size - 0xD70


class C_BaseClientUIEntity : public C_BaseModelEntity
{
public:

   bool m_bEnabled; // 0x840 - 0x840
   CUtlSymbolLarge m_DialogXMLName; // 0x848 - 0x848
   CUtlSymbolLarge m_PanelClassName; // 0x850 - 0x850
   CUtlSymbolLarge m_PanelID; // 0x858 - 0x858

}; // size - 0x868


class C_BasePlayerPawn : public C_BaseCombatCharacter
{
public:

   CPlayer_WeaponServices* m_pWeaponServices; // 0xBB8 - 0xBB8
   CPlayer_ItemServices* m_pItemServices; // 0xBC0 - 0xBC0
   CPlayer_AutoaimServices* m_pAutoaimServices; // 0xBC8 - 0xBC8
   CPlayer_ObserverServices* m_pObserverServices; // 0xBD0 - 0xBD0
   CPlayer_WaterServices* m_pWaterServices; // 0xBD8 - 0xBD8
   CPlayer_UseServices* m_pUseServices; // 0xBE0 - 0xBE0
   CPlayer_FlashlightServices* m_pFlashlightServices; // 0xBE8 - 0xBE8
   CPlayer_CameraServices* m_pCameraServices; // 0xBF0 - 0xBF0
   CPlayer_MovementServices* m_pMovementServices; // 0xBF8 - 0xBF8
   QAngle v_angle; // 0xC08 - 0xC08
   std::uint32_t m_iHideHUD; // 0xC14 - 0xC14
   sky3dparams_t m_skybox3d; // 0xC18 - 0xC18
   GameTime_t m_flDeathTime; // 0xCA8 - 0xCA8
   Vector m_vecPredictionError; // 0xCAC - 0xCAC
   GameTime_t m_flPredictionErrorTime; // 0xCB8 - 0xCB8
   std::float_t m_flFOVSensitivityAdjust; // 0xCBC - 0xCBC
   std::float_t m_flMouseSensitivity; // 0xCC0 - 0xCC0
   Vector m_vOldOrigin; // 0xCC4 - 0xCC4
   std::float_t m_flOldSimulationTime; // 0xCD0 - 0xCD0
   std::int32_t m_nLastExecutedCommandNumber; // 0xCD4 - 0xCD4
   std::int32_t m_nLastExecutedCommandTick; // 0xCD8 - 0xCD8
   CHandle< CBasePlayerController > m_hController; // 0xCDC - 0xCDC
   bool m_bIsSwappingToPredictableController; // 0xCE0 - 0xCE0

}; // size - 0xCE8


class C_BaseToggle : public C_BaseModelEntity
{
public:


}; // size - 0x838


class CDynamicProp : public CBreakableProp
{
public:

   bool m_bCreateNavObstacle; // 0x9A0 - 0x9A0
   bool m_bUseHitboxesForRenderBox; // 0x9A1 - 0x9A1
   bool m_bUseAnimGraph; // 0x9A2 - 0x9A2
   CEntityIOOutput m_pOutputAnimBegun; // 0x9A8 - 0x9A8
   CEntityIOOutput m_pOutputAnimOver; // 0x9D0 - 0x9D0
   CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x9F8 - 0x9F8
   CEntityIOOutput m_OnAnimReachedStart; // 0xA20 - 0xA20
   CEntityIOOutput m_OnAnimReachedEnd; // 0xA48 - 0xA48
   CUtlSymbolLarge m_iszDefaultAnim; // 0xA70 - 0xA70
   AnimLoopMode_t m_nDefaultAnimLoopMode; // 0xA78 - 0xA78
   bool m_bAnimateOnServer; // 0xA7C - 0xA7C
   bool m_bRandomizeCycle; // 0xA7D - 0xA7D
   bool m_bStartDisabled; // 0xA7E - 0xA7E
   bool m_bScriptedMovement; // 0xA7F - 0xA7F
   bool m_bFiredStartEndOutput; // 0xA80 - 0xA80
   bool m_bForceNpcExclude; // 0xA81 - 0xA81
   bool m_bCreateNonSolid; // 0xA82 - 0xA82
   bool m_bIsOverrideProp; // 0xA83 - 0xA83
   std::int32_t m_iInitialGlowState; // 0xA84 - 0xA84
   std::int32_t m_nGlowRange; // 0xA88 - 0xA88
   std::int32_t m_nGlowRangeMin; // 0xA8C - 0xA8C
   Color m_glowColor; // 0xA90 - 0xA90
   std::int32_t m_nGlowTeam; // 0xA94 - 0xA94

}; // size - 0xA98


class CPhysPropWeaponUpgrade : public CBrBaseItem
{
public:

   std::int32_t m_nEventPriority; // 0xB28 - 0xB28
   GameTime_t m_flTimeLastUsed; // 0xB2C - 0xB2C

}; // size - 0xB30


class C_SoundOpvarSetPointBase : public C_BaseEntity
{
public:

   CUtlSymbolLarge m_iszStackName; // 0x538 - 0x538
   CUtlSymbolLarge m_iszOperatorName; // 0x540 - 0x540
   CUtlSymbolLarge m_iszOpvarName; // 0x548 - 0x548
   std::int32_t m_iOpvarIndex; // 0x550 - 0x550
   bool m_bUseAutoCompare; // 0x554 - 0x554

}; // size - 0x558


class CBtNode
{
public:


}; // size - 0x58


class CMotionMetricEvaluator
{
public:

   CUtlVector< float32 > m_means; // 0x18 - 0x18
   CUtlVector< float32 > m_standardDeviations; // 0x30 - 0x30
   std::float_t m_flWeight; // 0x48 - 0x48
   std::int32_t m_nDimensionStartIndex; // 0x4C - 0x4C

}; // size - 0x50


class CSoundOpvarSetPointBase : public CBaseEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A0
   CEntityHandle m_hSource; // 0x4A4 - 0x4A4
   CUtlSymbolLarge m_iszSourceEntityName; // 0x4B0 - 0x4B0
   Vector m_vLastPosition; // 0x508 - 0x508
   CUtlSymbolLarge m_iszStackName; // 0x518 - 0x518
   CUtlSymbolLarge m_iszOperatorName; // 0x520 - 0x520
   CUtlSymbolLarge m_iszOpvarName; // 0x528 - 0x528
   std::int32_t m_iOpvarIndex; // 0x530 - 0x530
   bool m_bUseAutoCompare; // 0x534 - 0x534

}; // size - 0x538


class C_CSPlayerPawnBase : public C_BasePlayerPawn
{
public:

   CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xD00 - 0xD00
   CCSPlayer_PingServices* m_pPingServices; // 0xD08 - 0xD08
   CCSPlayer_ViewModelServices* m_pViewModelServices; // 0xD10 - 0xD10
   float32 m_fRenderingClipPlane[4]; // 0xD18 - 0xD18
   std::int32_t m_nLastClipPlaneSetupFrame; // 0xD28 - 0xD28
   Vector m_vecLastClipCameraPos; // 0xD2C - 0xD2C
   Vector m_vecLastClipCameraForward; // 0xD38 - 0xD38
   bool m_bClipHitStaticWorld; // 0xD44 - 0xD44
   bool m_bCachedPlaneIsValid; // 0xD45 - 0xD45
   C_WeaponCSBase* m_pClippingWeapon; // 0xD48 - 0xD48
   CSPlayerState m_previousPlayerState; // 0xD50 - 0xD50
   std::float_t m_flLastCollisionCeiling; // 0xD54 - 0xD54
   std::float_t m_flLastCollisionCeilingChangeTime; // 0xD58 - 0xD58
   bool m_bInLanding; // 0xDB8 - 0xDB8
   std::float_t m_flLandingTime; // 0xDBC - 0xDBC
   GameTime_t m_grenadeParameterStashTime; // 0xDC0 - 0xDC0
   bool m_bGrenadeParametersStashed; // 0xDC4 - 0xDC4
   QAngle m_angStashedShootAngles; // 0xDC8 - 0xDC8
   Vector m_vecStashedGrenadeThrowPosition; // 0xDD4 - 0xDD4
   Vector m_vecStashedVelocity; // 0xDE0 - 0xDE0
   QAngle m_angShootAngleHistory[2]; // 0xDEC - 0xDEC
   Vector m_vecThrowPositionHistory[2]; // 0xE04 - 0xE04
   Vector m_vecVelocityHistory[2]; // 0xE1C - 0xE1C
   QAngle m_thirdPersonHeading; // 0xE38 - 0xE38
   std::float_t m_flSlopeDropOffset; // 0xE50 - 0xE50
   std::float_t m_flSlopeDropHeight; // 0xE60 - 0xE60
   Vector m_vHeadConstraintOffset; // 0xE70 - 0xE70
   bool m_bClientTransparentImmunityAlphaEffectEnabled; // 0xE88 - 0xE88
   bool m_bClientDeferDrawToImmunityAlphaPass; // 0xE89 - 0xE89
   bool m_bIsScoped; // 0xE8A - 0xE8A
   bool m_bIsWalking; // 0xE8B - 0xE8B
   bool m_bResumeZoom; // 0xE8C - 0xE8C
   CSPlayerState m_iPlayerState; // 0xE90 - 0xE90
   bool m_bIsDefusing; // 0xE94 - 0xE94
   bool m_bIsGrabbingHostage; // 0xE95 - 0xE95
   CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0xE98 - 0xE98
   bool m_bIsRescuing; // 0xE9C - 0xE9C
   GameTime_t m_fImmuneToGunGameDamageTime; // 0xEA0 - 0xEA0
   GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0xEA4 - 0xEA4
   bool m_bGunGameImmunity; // 0xEA8 - 0xEA8
   bool m_bHasMovedSinceSpawn; // 0xEA9 - 0xEA9
   bool m_bMadeFinalGunGameProgressiveKill; // 0xEAA - 0xEAA
   std::int32_t m_iGunGameProgressiveWeaponIndex; // 0xEAC - 0xEAC
   std::int32_t m_iNumGunGameTRKillPoints; // 0xEB0 - 0xEB0
   std::int32_t m_iNumGunGameKillsWithCurrentWeapon; // 0xEB4 - 0xEB4
   std::uint32_t m_unTotalRoundDamageDealt; // 0xEB8 - 0xEB8
   std::float_t m_fMolotovUseTime; // 0xEBC - 0xEBC
   std::float_t m_fMolotovDamageTime; // 0xEC0 - 0xEC0
   bool m_bInBombZone; // 0xEC4 - 0xEC4
   std::int32_t m_nWhichBombZone; // 0xEC8 - 0xEC8
   bool m_bInBuyZone; // 0xECC - 0xECC
   bool m_bInNoDefuseArea; // 0xECD - 0xECD
   std::int32_t m_iThrowGrenadeCounter; // 0xED0 - 0xED0
   bool m_bWaitForNoAttack; // 0xED4 - 0xED4
   bool m_bIsRespawningForDMBonus; // 0xED5 - 0xED5
   std::float_t m_flGuardianTooFarDistFrac; // 0xED8 - 0xED8
   GameTime_t m_flDetectedByEnemySensorTime; // 0xEDC - 0xEDC
   std::float_t m_flNextGuardianTooFarWarning; // 0xEE0 - 0xEE0
   bool m_bSuppressGuardianTooFarWarningAudio; // 0xEE4 - 0xEE4
   bool m_bKilledByTaser; // 0xEE5 - 0xEE5
   std::int32_t m_iMoveState; // 0xEE8 - 0xEE8
   bool m_bCanMoveDuringFreezePeriod; // 0xEEC - 0xEEC
   bool m_isCurrentGunGameLeader; // 0xEED - 0xEED
   bool m_isCurrentGunGameTeamLeader; // 0xEEE - 0xEEE
   std::float_t m_flLowerBodyYawTarget; // 0xEF0 - 0xEF0
   bool m_bStrafing; // 0xEF4 - 0xEF4
   char m_szLastPlaceName[18]; // 0xEF5 - 0xEF5
   std::float_t m_flLastExoJumpTime; // 0xF08 - 0xF08
   GameTime_t m_flLastSpawnTimeIndex; // 0xF18 - 0xF18
   std::int32_t m_iAddonBits; // 0xF1C - 0xF1C
   std::int32_t m_iPrimaryAddon; // 0xF20 - 0xF20
   std::int32_t m_iSecondaryAddon; // 0xF24 - 0xF24
   std::int32_t m_iProgressBarDuration; // 0xF28 - 0xF28
   std::float_t m_flProgressBarStartTime; // 0xF2C - 0xF2C
   std::float_t m_flStamina; // 0xF30 - 0xF30
   std::int32_t m_iDirection; // 0xF34 - 0xF34
   std::int32_t m_iShotsFired; // 0xF38 - 0xF38
   bool m_bNightVisionOn; // 0xF3C - 0xF3C
   bool m_bHasNightVision; // 0xF3D - 0xF3D
   std::float_t m_flVelocityModifier; // 0xF40 - 0xF40
   std::float_t m_flGroundAccelLinearFracLastTime; // 0xF44 - 0xF44
   std::int32_t m_iStartAccount; // 0xF48 - 0xF48
   bool m_bIsSpawnRappelling; // 0xF4C - 0xF4C
   Vector m_vecSpawnRappellingRopeOrigin; // 0xF50 - 0xF50
   std::float_t m_flSpawnRappellingFadeOutForClientViewOffset; // 0xF5C - 0xF5C
   std::int32_t m_nSurvivalTeam; // 0xF60 - 0xF60
   CHandle< C_CSPlayerPawnBase > m_hSurvivalAssassinationTarget; // 0xF64 - 0xF64
   std::float_t m_flHealthShotBoostExpirationTime; // 0xF68 - 0xF68
   std::float_t m_flLastKnownParachuteScreenEffectAmount; // 0xF6C - 0xF6C
   Vector m_vecIntroStartEyePosition; // 0xF70 - 0xF70
   Vector m_vecIntroStartPlayerForward; // 0xF7C - 0xF7C
   std::float_t m_flClientDeathTime; // 0xF88 - 0xF88
   std::float_t m_flNightVisionAlpha; // 0xF94 - 0xF94
   bool m_bScreenTearFrameCaptured; // 0xF98 - 0xF98
   std::float_t m_flFlashBangTime; // 0xF9C - 0xF9C
   std::float_t m_flFlashScreenshotAlpha; // 0xFA0 - 0xFA0
   std::float_t m_flFlashOverlayAlpha; // 0xFA4 - 0xFA4
   bool m_bFlashBuildUp; // 0xFA8 - 0xFA8
   bool m_bFlashDspHasBeenCleared; // 0xFA9 - 0xFA9
   bool m_bFlashScreenshotHasBeenGrabbed; // 0xFAA - 0xFAA
   std::float_t m_flFlashMaxAlpha; // 0xFAC - 0xFAC
   std::float_t m_flFlashDuration; // 0xFB0 - 0xFB0
   std::float_t m_flLastFiredWeaponTime; // 0xFB4 - 0xFB4
   Vector m_lastStandingPos; // 0xFB8 - 0xFB8
   Vector m_vecLastMuzzleFlashPos; // 0xFC4 - 0xFC4
   QAngle m_angLastMuzzleFlashAngle; // 0xFD0 - 0xFD0
   CHandle< C_BaseEntity > m_hMuzzleFlashShape; // 0xFDC - 0xFDC
   std::int32_t m_iHealthBarRenderMaskIndex; // 0xFE0 - 0xFE0
   std::float_t m_flHealthFadeValue; // 0xFE4 - 0xFE4
   std::float_t m_flHealthFadeAlpha; // 0xFE8 - 0xFE8
   std::int32_t m_nMyCollisionGroup; // 0xFEC - 0xFEC
   std::float_t m_ignoreLadderJumpTime; // 0xFF0 - 0xFF0
   CountdownTimer m_ladderSurpressionTimer; // 0xFF8 - 0xFF8
   Vector m_lastLadderNormal; // 0x1010 - 0x1010
   Vector m_lastLadderPos; // 0x101C - 0x101C
   std::float_t m_flDeathCCWeight; // 0x1030 - 0x1030
   bool m_bOldIsScoped; // 0x1034 - 0x1034
   std::float_t m_flPrevRoundEndTime; // 0x1038 - 0x1038
   std::float_t m_flPrevMatchEndTime; // 0x103C - 0x103C
   std::uint16_t m_unCurrentEquipmentValue; // 0x1040 - 0x1040
   std::uint16_t m_unRoundStartEquipmentValue; // 0x1042 - 0x1042
   std::uint16_t m_unFreezetimeEndEquipmentValue; // 0x1044 - 0x1044
   bool m_passiveItems[4]; // 0x1046 - 0x1046
   Vector m_vecThirdPersonViewPositionOverride; // 0x104C - 0x104C
   std::int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0x1058 - 0x1058
   std::int32_t m_ArmorValue; // 0x105C - 0x105C
   QAngle m_angEyeAngles; // 0x1060 - 0x1060
   bool m_bInHostageRescueZone; // 0x1078 - 0x1078
   std::float_t m_fNextThinkPushAway; // 0x107C - 0x107C
   bool m_bShouldAutobuyDMWeapons; // 0x1080 - 0x1080
   bool m_bShouldAutobuyNow; // 0x1081 - 0x1081
   bool m_bHud_MiniScoreHidden; // 0x1082 - 0x1082
   bool m_bHud_RadarHidden; // 0x1083 - 0x1083
   CEntityIndex m_nLastKillerIndex; // 0x1084 - 0x1084
   std::int32_t m_nLastConcurrentKilled; // 0x1088 - 0x1088
   std::int32_t m_nDeathCamMusic; // 0x108C - 0x108C
   CEntityIndex m_iIDEntIndex; // 0x1090 - 0x1090
   CountdownTimer m_delayTargetIDTimer; // 0x1098 - 0x1098
   CEntityIndex m_iTargetedWeaponEntIndex; // 0x10B0 - 0x10B0
   CEntityIndex m_iOldIDEntIndex; // 0x10B4 - 0x10B4
   CountdownTimer m_holdTargetIDTimer; // 0x10B8 - 0x10B8
   std::float_t m_flCurrentMusicStartTime; // 0x111C - 0x111C
   std::float_t m_flMusicRoundStartTime; // 0x1120 - 0x1120
   std::int32_t m_cycleLatch; // 0x1124 - 0x1124
   std::float_t m_serverIntendedCycle; // 0x1128 - 0x1128
   uint32 m_vecPlayerPatchEconIndices[5]; // 0x112C - 0x112C
   bool m_bClientEconPatchesNeedUpdate; // 0x1140 - 0x1140
   bool m_bHideTargetID; // 0x1141 - 0x1141
   std::float_t m_nextTaserShakeTime; // 0x1144 - 0x1144
   std::float_t m_firstTaserShakeTime; // 0x1148 - 0x1148
   std::float_t m_flLastSmokeOverlayAlpha; // 0x114C - 0x114C
   Vector m_vLastSmokeOverlayColor; // 0x1150 - 0x1150
   ParticleIndex_t m_nPlayerSmokedFx; // 0x115C - 0x115C
   std::float_t m_flLastKnownAccumulatedWeaponEncumbrance; // 0x1160 - 0x1160
   std::float_t m_flLastTimeComputedAccumulatedWeaponEncumbrance; // 0x1164 - 0x1164
   std::float_t m_flNextMagDropTime; // 0x1168 - 0x1168
   std::int32_t m_nLastMagDropAttachmentIndex; // 0x116C - 0x116C
   CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // 0x1170 - 0x1170
   CUtlVector< C_PickUpModelSlerper* > m_vecPickupModelSlerpers; // 0x1188 - 0x1188
   Vector m_vecLastAliveLocalVelocity; // 0x11A0 - 0x11A0
   std::float_t m_flLastNearbyItemHighlightCheck; // 0x11AC - 0x11AC
   bool m_bInSurvivalDangerZone; // 0x11B0 - 0x11B0
   bool m_bNearDangerZone; // 0x11B1 - 0x11B1
   EntitySpottedState_t m_entitySpottedState; // 0x11E8 - 0x11E8
   std::float_t m_flTimeOfLastInjury; // 0x1200 - 0x1200
   RelativeDamagedDirection_t m_nRelativeDirectionOfLastInjury; // 0x1204 - 0x1204
   std::int32_t m_nSurvivalTeamNumber; // 0x1208 - 0x1208
   std::float_t m_flNextSprayDecalTime; // 0x120C - 0x120C
   bool m_bPreviouslyInBuyZone; // 0x1210 - 0x1210
   std::uint32_t m_unPreviousWeaponHash; // 0x1214 - 0x1214
   std::uint32_t m_unWeaponHash; // 0x1218 - 0x1218
   bool m_bPrevDefuser; // 0x121C - 0x121C
   bool m_bPrevHelmet; // 0x121D - 0x121D
   std::int32_t m_nPrevArmorVal; // 0x1220 - 0x1220
   bool m_bGuardianShouldSprayCustomXMark; // 0x1224 - 0x1224
   QAngle m_aimPunchAngle; // 0x1228 - 0x1228
   QAngle m_aimPunchAngleVel; // 0x1234 - 0x1234
   std::int32_t m_aimPunchTickBase; // 0x1240 - 0x1240
   std::float_t m_aimPunchTickFraction; // 0x1244 - 0x1244
   CUtlVector< QAngle > m_aimPunchCache; // 0x1248 - 0x1248
   std::float_t m_flOldFallVelocity; // 0x1268 - 0x1268
   bool m_bHasDeathInfo; // 0x126C - 0x126C
   std::float_t m_flDeathInfoTime; // 0x1270 - 0x1270
   Vector m_vecDeathInfoOrigin; // 0x1274 - 0x1274
   bool m_bKilledByHeadshot; // 0x1280 - 0x1280
   CHandle< CCSPlayerController > m_hOriginalController; // 0x1284 - 0x1284
   std::float_t m_flLandseconds; // 0x1298 - 0x1298

}; // size - 0x12A0


class EventSimulate_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x0
   bool m_bFirstTick; // 0x28 - 0x28
   bool m_bLastTick; // 0x29 - 0x29

}; // size - 0x30


class SpawnPoint : public CServerOnlyPointEntity
{
public:

   std::int32_t m_iPriority; // 0x4A0 - 0x4A0
   bool m_bEnabled; // 0x4A4 - 0x4A4
   std::int32_t m_nType; // 0x4A8 - 0x4A8

}; // size - 0x4B0


class CBaseCSGrenade : public CWeaponCSBase
{
public:

   bool m_bRedraw; // 0xD70 - 0xD70
   bool m_bIsHeldByPlayer; // 0xD71 - 0xD71
   bool m_bPinPulled; // 0xD72 - 0xD72
   EGrenadeThrowState m_eThrowStatus; // 0xD74 - 0xD74
   GameTime_t m_fThrowTime; // 0xD78 - 0xD78
   std::float_t m_flThrowStrength; // 0xD7C - 0xD7C
   std::float_t m_flThrowStrengthApproach; // 0xD80 - 0xD80
   GameTime_t m_fDropTime; // 0xD84 - 0xD84

}; // size - 0xD90


class CModelPointEntity : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CMotionMetricBase
{
public:

   std::float_t m_flWeight; // 0x20 - 0x20

}; // size - 0x28


class CParticleFunctionConstraint : public CParticleFunction
{
public:


}; // size - 0x1F0


class CParticleFunctionForce : public CParticleFunction
{
public:


}; // size - 0x1F0


class CPhysPropLootCrate : public CBrBaseItem
{
public:

   bool m_bRenderInPSPM; // 0xB28 - 0xB28
   bool m_bRenderInTablet; // 0xB29 - 0xB29
   GameTime_t m_flSpawnTime; // 0xB2C - 0xB2C
   bool m_bTakeDamageFromDangerZone; // 0xB30 - 0xB30
   char* m_pszCrateName; // 0xB38 - 0xB38
   CHandle< CBasePlayerPawn > m_hCrateOwner; // 0xB40 - 0xB40
   bool m_bOwnedByPlayer; // 0xB44 - 0xB44
   std::float_t m_flDampingOriginalSpeed; // 0xB48 - 0xB48
   std::float_t m_flDampingOriginalRot; // 0xB4C - 0xB4C

}; // size - 0xB50


class C_CSGO_MapPreviewCameraPath : public C_BaseEntity
{
public:

   std::float_t m_flZFar; // 0x538 - 0x538
   std::float_t m_flZNear; // 0x53C - 0x53C
   bool m_bLoop; // 0x540 - 0x540
   bool m_bVerticalFOV; // 0x541 - 0x541
   bool m_bConstantSpeed; // 0x542 - 0x542
   std::float_t m_flDuration; // 0x544 - 0x544
   std::float_t m_flPathLength; // 0x588 - 0x588
   std::float_t m_flPathDuration; // 0x58C - 0x58C

}; // size - 0x598


class CEnvSoundscape : public CServerOnlyEntity
{
public:

   CEntityIOOutput m_OnPlay; // 0x4A0 - 0x4A0
   std::float_t m_flRadius; // 0x4C8 - 0x4C8
   CUtlSymbolLarge m_soundscapeName; // 0x4D0 - 0x4D0
   CUtlSymbolLarge m_soundEventName; // 0x4D8 - 0x4D8
   bool m_bOverrideWithEvent; // 0x4E0 - 0x4E0
   std::int32_t m_soundscapeIndex; // 0x4E4 - 0x4E4
   std::int32_t m_soundscapeEntityListId; // 0x4E8 - 0x4E8
   std::uint32_t m_soundEventHash; // 0x4EC - 0x4EC
   CUtlSymbolLarge m_positionNames[8]; // 0x4F0 - 0x4F0
   CHandle< CEnvSoundscape > m_hProxySoundscape; // 0x530 - 0x530
   bool m_bDisabled; // 0x534 - 0x534

}; // size - 0x538


class CItem : public CBaseAnimGraph
{
public:

   CEntityIOOutput m_OnPlayerTouch; // 0x828 - 0x828
   bool m_bActivateWhenAtRest; // 0x850 - 0x850
   CEntityIOOutput m_OnCacheInteraction; // 0x858 - 0x858
   CEntityIOOutput m_OnPlayerPickup; // 0x880 - 0x880
   CEntityIOOutput m_OnGlovePulled; // 0x8A8 - 0x8A8
   Vector m_vOriginalSpawnOrigin; // 0x8D0 - 0x8D0
   QAngle m_vOriginalSpawnAngles; // 0x8DC - 0x8DC
   bool m_bPhysStartAsleep; // 0x8E8 - 0x8E8

}; // size - 0x8F8


class C_BaseCSGrenadeProjectile : public C_BaseGrenade
{
public:

   Vector m_vInitialVelocity; // 0xB78 - 0xB78
   std::int32_t m_nBounces; // 0xB84 - 0xB84
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0xB88 - 0xB88
   std::int32_t m_nExplodeEffectTickBegin; // 0xB90 - 0xB90
   Vector m_vecExplodeEffectOrigin; // 0xB94 - 0xB94
   GameTime_t m_flSpawnTime; // 0xBA0 - 0xBA0
   Vector vecLastTrailLinePos; // 0xBA4 - 0xBA4
   GameTime_t flNextTrailLineTime; // 0xBB0 - 0xBB0
   bool m_bExplodeEffectBegan; // 0xBB4 - 0xBB4
   bool m_bCanCreateGrenadeTrail; // 0xBB5 - 0xBB5
   ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0xBB8 - 0xBB8
   CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // 0xBC0 - 0xBC0
   CUtlVector< Vector > m_arrTrajectoryTrailPoints; // 0xBC8 - 0xBC8
   CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // 0xBE0 - 0xBE0
   std::float_t m_flTrajectoryTrailEffectCreationTime; // 0xBF8 - 0xBF8

}; // size - 0xC00


class C_CSPlayerPawn : public C_CSPlayerPawnBase
{
public:

   CCSPlayer_BulletServices* m_pBulletServices; // 0x12A0 - 0x12A0
   CCSPlayer_HostageServices* m_pHostageServices; // 0x12A8 - 0x12A8
   CCSPlayer_GlowServices* m_pGlowServices; // 0x12B0 - 0x12B0
   bool m_bIsBuyMenuOpen; // 0x12B8 - 0x12B8
   std::int32_t m_iRetakesOffering; // 0x1388 - 0x1388
   std::int32_t m_iRetakesOfferingCard; // 0x138C - 0x138C
   bool m_bRetakesHasDefuseKit; // 0x1390 - 0x1390
   bool m_bRetakesMVPLastRound; // 0x1391 - 0x1391
   std::int32_t m_iRetakesMVPBoostItem; // 0x1394 - 0x1394
   loadout_positions_t m_RetakesMVPBoostExtraUtility; // 0x1398 - 0x1398
   bool m_bNeedToReApplyGloves; // 0x13AC - 0x13AC
   C_EconItemView m_EconGloves; // 0x13B0 - 0x13B0
   bool m_bMustSyncRagdollState; // 0x17F8 - 0x17F8
   std::int32_t m_nRagdollDamageBone; // 0x17FC - 0x17FC
   Vector m_vRagdollDamageForce; // 0x1800 - 0x1800
   Vector m_vRagdollDamagePosition; // 0x180C - 0x180C
   char m_szRagdollDamageWeaponName[64]; // 0x1818 - 0x1818
   bool m_bRagdollDamageHeadshot; // 0x1858 - 0x1858
   bool m_bLastHeadBoneTransformIsValid; // 0x1980 - 0x1980
   QAngle m_qDeathEyeAngles; // 0x199C - 0x199C

}; // size - 0x19A8


class CAnimTagBase
{
public:

   CUtlString m_name; // 0x20 - 0x20
   CUtlString m_group; // 0x28 - 0x28
   AnimTagID m_tagID; // 0x30 - 0x30
   bool m_bIsReferenced; // 0x34 - 0x34

}; // size - 0x38


class CBaseCSGrenadeProjectile : public CBaseGrenade
{
public:

   Vector m_vInitialVelocity; // 0x958 - 0x958
   std::int32_t m_nBounces; // 0x964 - 0x964
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0x968 - 0x968
   std::int32_t m_nExplodeEffectTickBegin; // 0x970 - 0x970
   Vector m_vecExplodeEffectOrigin; // 0x974 - 0x974
   std::uint8_t m_unOGSExtraFlags; // 0x980 - 0x980
   bool m_bDetonationRecorded; // 0x981 - 0x981
   GameTime_t m_flDetonateTime; // 0x984 - 0x984
   std::uint16_t m_nItemIndex; // 0x988 - 0x988
   Vector m_vecOriginalSpawnLocation; // 0x98C - 0x98C
   GameTime_t m_flLastBounceSoundTime; // 0x998 - 0x998

}; // size - 0x9A0


class CBaseClientUIEntity : public CBaseModelEntity
{
public:

   bool m_bEnabled; // 0x6F0 - 0x6F0
   CUtlSymbolLarge m_DialogXMLName; // 0x6F8 - 0x6F8
   CUtlSymbolLarge m_PanelClassName; // 0x700 - 0x700
   CUtlSymbolLarge m_PanelID; // 0x708 - 0x708
   CEntityIOOutput m_CustomOutput0; // 0x710 - 0x710
   CEntityIOOutput m_CustomOutput1; // 0x738 - 0x738
   CEntityIOOutput m_CustomOutput2; // 0x760 - 0x760
   CEntityIOOutput m_CustomOutput3; // 0x788 - 0x788
   CEntityIOOutput m_CustomOutput4; // 0x7B0 - 0x7B0
   CEntityIOOutput m_CustomOutput5; // 0x7D8 - 0x7D8
   CEntityIOOutput m_CustomOutput6; // 0x800 - 0x800
   CEntityIOOutput m_CustomOutput7; // 0x828 - 0x828
   CEntityIOOutput m_CustomOutput8; // 0x850 - 0x850
   CEntityIOOutput m_CustomOutput9; // 0x878 - 0x878

}; // size - 0x8A0


class CBaseCombatCharacter : public CBaseFlex
{
public:

   bool m_bForceServerRagdoll; // 0x8B0 - 0x8B0
   CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0x8B8 - 0x8B8
   std::float_t m_flFieldOfView; // 0x8D0 - 0x8D0
   std::float_t m_impactEnergyScale; // 0x8D4 - 0x8D4
   HitGroup_t m_LastHitGroup; // 0x8D8 - 0x8D8
   bool m_bApplyStressDamage; // 0x8DC - 0x8DC
   std::int32_t m_bloodColor; // 0x8E0 - 0x8E0
   std::int32_t m_registeredNavTeam; // 0x940 - 0x940
   std::int32_t m_navMeshID; // 0x944 - 0x944
   std::int32_t m_iDamageCount; // 0x948 - 0x948
   CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0x950 - 0x950
   CUtlSymbolLarge m_strRelationships; // 0x958 - 0x958
   Hull_t m_eHull; // 0x960 - 0x960
   std::uint32_t m_nNavHullIdx; // 0x964 - 0x964

}; // size - 0x968


class C_BaseTrigger : public C_BaseToggle
{
public:

   bool m_bDisabled; // 0x838 - 0x838
   bool m_bClientSidePredicted; // 0x839 - 0x839

}; // size - 0x840


class C_PointClientUIWorldPanel : public C_BaseClientUIEntity
{
public:

   bool m_bForceRecreateNextUpdate; // 0x870 - 0x870
   bool m_bMoveViewToPlayerNextThink; // 0x871 - 0x871
   bool m_bCheckCSSClasses; // 0x872 - 0x872
   CTransform m_anchorDeltaTransform; // 0x880 - 0x880
   CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xA20 - 0xA20
   bool m_bIgnoreInput; // 0xA48 - 0xA48
   bool m_bLit; // 0xA49 - 0xA49
   bool m_bFollowPlayerAcrossTeleport; // 0xA4A - 0xA4A
   std::float_t m_flWidth; // 0xA4C - 0xA4C
   std::float_t m_flHeight; // 0xA50 - 0xA50
   std::float_t m_flDPI; // 0xA54 - 0xA54
   std::float_t m_flInteractDistance; // 0xA58 - 0xA58
   std::float_t m_flDepthOffset; // 0xA5C - 0xA5C
   std::uint32_t m_unOwnerContext; // 0xA60 - 0xA60
   std::uint32_t m_unHorizontalAlign; // 0xA64 - 0xA64
   std::uint32_t m_unVerticalAlign; // 0xA68 - 0xA68
   std::uint32_t m_unOrientation; // 0xA6C - 0xA6C
   bool m_bAllowInteractionFromAllSceneWorlds; // 0xA70 - 0xA70
   C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xA78 - 0xA78
   bool m_bOpaque; // 0xA90 - 0xA90
   bool m_bNoDepth; // 0xA91 - 0xA91
   bool m_bRenderBackface; // 0xA92 - 0xA92
   bool m_bUseOffScreenIndicator; // 0xA93 - 0xA93
   bool m_bExcludeFromSaveGames; // 0xA94 - 0xA94
   bool m_bGrabbable; // 0xA95 - 0xA95
   bool m_bOnlyRenderToTexture; // 0xA96 - 0xA96
   bool m_bDisableMipGen; // 0xA97 - 0xA97
   std::int32_t m_nExplicitImageLayout; // 0xA98 - 0xA98

}; // size - 0xAA0


class CBaseButton : public CBaseToggle
{
public:

   QAngle m_angMoveEntitySpace; // 0x770 - 0x770
   bool m_fStayPushed; // 0x77C - 0x77C
   bool m_fRotating; // 0x77D - 0x77D
   locksound_t m_ls; // 0x780 - 0x780
   CUtlSymbolLarge m_sUseSound; // 0x7A0 - 0x7A0
   CUtlSymbolLarge m_sLockedSound; // 0x7A8 - 0x7A8
   CUtlSymbolLarge m_sUnlockedSound; // 0x7B0 - 0x7B0
   bool m_bLocked; // 0x7B8 - 0x7B8
   bool m_bDisabled; // 0x7B9 - 0x7B9
   GameTime_t m_flUseLockedTime; // 0x7BC - 0x7BC
   bool m_bSolidBsp; // 0x7C0 - 0x7C0
   CEntityIOOutput m_OnDamaged; // 0x7C8 - 0x7C8
   CEntityIOOutput m_OnPressed; // 0x7F0 - 0x7F0
   CEntityIOOutput m_OnUseLocked; // 0x818 - 0x818
   CEntityIOOutput m_OnIn; // 0x840 - 0x840
   CEntityIOOutput m_OnOut; // 0x868 - 0x868
   std::int32_t m_nState; // 0x890 - 0x890
   CEntityHandle m_hConstraint; // 0x894 - 0x894
   CEntityHandle m_hConstraintParent; // 0x898 - 0x898
   bool m_bForceNpcExclude; // 0x89C - 0x89C
   CUtlSymbolLarge m_sGlowEntity; // 0x8A0 - 0x8A0
   CHandle< CBaseModelEntity > m_glowEntity; // 0x8A8 - 0x8A8
   bool m_usable; // 0x8AC - 0x8AC
   CUtlSymbolLarge m_szDisplayText; // 0x8B0 - 0x8B0

}; // size - 0x8B8


class CBodyComponent : public CEntityComponent
{
public:

   CGameSceneNode* m_pSceneNode; // 0x8 - 0x8
   CNetworkVarChainer __m_pChainEntity; // 0x20 - 0x20

}; // size - 0x50


class CBodyComponent : public CEntityComponent
{
public:

   CGameSceneNode* m_pSceneNode; // 0x8 - 0x8
   CNetworkVarChainer __m_pChainEntity; // 0x20 - 0x20

}; // size - 0x50


class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity
{
public:

   std::int32_t m_nOrdinal; // 0x4A0 - 0x4A0
   CUtlString m_sWeaponName; // 0x4A8 - 0x4A8
   std::uint64_t m_xuid; // 0x4B0 - 0x4B0
   CEconItemView m_weaponItem; // 0x4B8 - 0x4B8

}; // size - 0x730


class CLeafUpdateNode : public CAnimUpdateNodeBase
{
public:


}; // size - 0x58


class CNavVolume
{
public:


}; // size - 0x70


class CSprite : public CBaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x6F0 - 0x6F0
   CHandle< CBaseEntity > m_hAttachedToEntity; // 0x6F8 - 0x6F8
   AttachmentHandle_t m_nAttachment; // 0x6FC - 0x6FC
   std::float_t m_flSpriteFramerate; // 0x700 - 0x700
   std::float_t m_flFrame; // 0x704 - 0x704
   GameTime_t m_flDieTime; // 0x708 - 0x708
   std::uint32_t m_nBrightness; // 0x718 - 0x718
   std::float_t m_flBrightnessDuration; // 0x71C - 0x71C
   std::float_t m_flSpriteScale; // 0x720 - 0x720
   std::float_t m_flScaleDuration; // 0x724 - 0x724
   bool m_bWorldSpaceScale; // 0x728 - 0x728
   std::float_t m_flGlowProxySize; // 0x72C - 0x72C
   std::float_t m_flHDRColorScale; // 0x730 - 0x730
   GameTime_t m_flLastTime; // 0x734 - 0x734
   std::float_t m_flMaxFrame; // 0x738 - 0x738
   std::float_t m_flStartScale; // 0x73C - 0x73C
   std::float_t m_flDestScale; // 0x740 - 0x740
   GameTime_t m_flScaleTimeStart; // 0x744 - 0x744
   std::int32_t m_nStartBrightness; // 0x748 - 0x748
   std::int32_t m_nDestBrightness; // 0x74C - 0x74C
   GameTime_t m_flBrightnessTimeStart; // 0x750 - 0x750
   std::int32_t m_nSpriteWidth; // 0x754 - 0x754
   std::int32_t m_nSpriteHeight; // 0x758 - 0x758

}; // size - 0x760


class CTriggerMultiple : public CBaseTrigger
{
public:

   CEntityIOOutput m_OnTrigger; // 0x898 - 0x898

}; // size - 0x8C0


class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F0
   CUtlVector< CUtlString > m_names; // 0x1F8 - 0x1F8
   CUtlVector< float32 > m_values; // 0x210 - 0x210
   ParticleAttributeIndex_t m_nFieldInput; // 0x228 - 0x228
   ParticleAttributeIndex_t m_nFieldOutput; // 0x22C - 0x22C
   ParticleSetMethod_t m_nSetMethod; // 0x230 - 0x230
   bool m_bModelFromRenderer; // 0x234 - 0x234

}; // size - 0x240


class C_PointEntity : public C_BaseEntity
{
public:


}; // size - 0x538


class CAnimComponentBase
{
public:

   CUtlString m_group; // 0x18 - 0x18
   AnimComponentID m_id; // 0x28 - 0x28
   bool m_bStartEnabled; // 0x2C - 0x2C
   std::int32_t m_nPriority; // 0x30 - 0x30
   AnimNodeNetworkMode m_networkMode; // 0x34 - 0x34

}; // size - 0x38


class CAnimationGraphVisualizerPrimitiveBase
{
public:

   CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8 - 0x8

}; // size - 0x10


class CCSGO_TeamIntroCharacterPosition : public CCSGO_TeamPreviewCharacterPosition
{
public:


}; // size - 0x730


class CConditionBase
{
public:


}; // size - 0x28


class CFuncTrackTrain : public CBaseModelEntity
{
public:

   CHandle< CPathTrack > m_ppath; // 0x6F0 - 0x6F0
   std::float_t m_length; // 0x6F4 - 0x6F4
   Vector m_controlMins; // 0x6F8 - 0x6F8
   Vector m_controlMaxs; // 0x704 - 0x704
   Vector m_lastBlockPos; // 0x710 - 0x710
   std::int32_t m_lastBlockTick; // 0x71C - 0x71C
   std::float_t m_flVolume; // 0x720 - 0x720
   std::float_t m_flBank; // 0x724 - 0x724
   std::float_t m_oldSpeed; // 0x728 - 0x728
   std::float_t m_flBlockDamage; // 0x72C - 0x72C
   std::float_t m_height; // 0x730 - 0x730
   std::float_t m_maxSpeed; // 0x734 - 0x734
   std::float_t m_dir; // 0x738 - 0x738
   CUtlSymbolLarge m_iszSoundMove; // 0x740 - 0x740
   CUtlSymbolLarge m_iszSoundMovePing; // 0x748 - 0x748
   CUtlSymbolLarge m_iszSoundStart; // 0x750 - 0x750
   CUtlSymbolLarge m_iszSoundStop; // 0x758 - 0x758
   CUtlSymbolLarge m_strPathTarget; // 0x760 - 0x760
   std::float_t m_flMoveSoundMinDuration; // 0x768 - 0x768
   std::float_t m_flMoveSoundMaxDuration; // 0x76C - 0x76C
   GameTime_t m_flNextMoveSoundTime; // 0x770 - 0x770
   std::float_t m_flMoveSoundMinPitch; // 0x774 - 0x774
   std::float_t m_flMoveSoundMaxPitch; // 0x778 - 0x778
   TrainOrientationType_t m_eOrientationType; // 0x77C - 0x77C
   TrainVelocityType_t m_eVelocityType; // 0x780 - 0x780
   CEntityIOOutput m_OnStart; // 0x790 - 0x790
   CEntityIOOutput m_OnNext; // 0x7B8 - 0x7B8
   CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x7E0 - 0x7E0
   bool m_bManualSpeedChanges; // 0x808 - 0x808
   std::float_t m_flDesiredSpeed; // 0x80C - 0x80C
   GameTime_t m_flSpeedChangeTime; // 0x810 - 0x810
   std::float_t m_flAccelSpeed; // 0x814 - 0x814
   std::float_t m_flDecelSpeed; // 0x818 - 0x818
   bool m_bAccelToSpeed; // 0x81C - 0x81C
   std::float_t m_flTimeScale; // 0x820 - 0x820
   GameTime_t m_flNextMPSoundTime; // 0x824 - 0x824

}; // size - 0x828


class CKnife : public CWeaponCSBase
{
public:


}; // size - 0xD50


class CModelConfigElement
{
public:

   CUtlString m_ElementName; // 0x8 - 0x8
   CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10 - 0x10

}; // size - 0x48


class CMotionNode
{
public:

   CUtlString m_name; // 0x18 - 0x18
   AnimNodeID m_id; // 0x20 - 0x20

}; // size - 0x28


class CPathParticleRope : public CBaseEntity
{
public:

   bool m_bStartActive; // 0x4A0 - 0x4A0
   std::float_t m_flMaxSimulationTime; // 0x4A4 - 0x4A4
   CUtlSymbolLarge m_iszEffectName; // 0x4A8 - 0x4A8
   CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x4B0 - 0x4B0
   std::float_t m_flParticleSpacing; // 0x4C8 - 0x4C8
   std::float_t m_flSlack; // 0x4CC - 0x4CC
   std::float_t m_flRadius; // 0x4D0 - 0x4D0
   Color m_ColorTint; // 0x4D4 - 0x4D4
   std::int32_t m_nEffectState; // 0x4D8 - 0x4D8
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x4E0 - 0x4E0
   CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x4E8 - 0x4E8
   CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x500 - 0x500
   CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x518 - 0x518
   CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x530 - 0x530
   CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x548 - 0x548
   CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x560 - 0x560

}; // size - 0x580


class CPlayerControllerComponent
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x8

}; // size - 0x40


class CPointDZItemSpawnGroup : public CServerOnlyPointEntity
{
public:

   std::float_t m_flRadius; // 0x4A0 - 0x4A0

}; // size - 0x4C0


class CSAdditionalPerRoundStats_t
{
public:

   std::int32_t m_numChickensKilled; // 0x0 - 0x0
   std::int32_t m_killsWhileBlind; // 0x4 - 0x4
   std::int32_t m_bombCarrierkills; // 0x8 - 0x8
   std::int32_t m_iBurnDamageInflicted; // 0xC - 0xC
   std::int32_t m_iDinks; // 0x10 - 0x10

}; // size - 0x14


class CServerOnlyModelEntity : public CBaseModelEntity
{
public:


}; // size - 0x6F0


class CSimpleSimTimer
{
public:

   GameTime_t m_next; // 0x0 - 0x0
   WorldGroupId_t m_nWorldGroupId; // 0x4 - 0x4

}; // size - 0x8


class CSkeletonAnimationController
{
public:

   CSkeletonInstance* m_pSkeletonInstance; // 0x8 - 0x8

}; // size - 0x10


class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase
{
public:

   CEntityIOOutput m_OnEnter; // 0x538 - 0x538
   CEntityIOOutput m_OnExit; // 0x560 - 0x560
   bool m_bAutoDisable; // 0x588 - 0x588
   std::float_t m_flDistanceMin; // 0x5CC - 0x5CC
   std::float_t m_flDistanceMax; // 0x5D0 - 0x5D0
   std::float_t m_flDistanceMapMin; // 0x5D4 - 0x5D4
   std::float_t m_flDistanceMapMax; // 0x5D8 - 0x5D8
   std::float_t m_flOcclusionRadius; // 0x5DC - 0x5DC
   std::float_t m_flOcclusionMin; // 0x5E0 - 0x5E0
   std::float_t m_flOcclusionMax; // 0x5E4 - 0x5E4
   std::float_t m_flValSetOnDisable; // 0x5E8 - 0x5E8
   bool m_bSetValueOnDisable; // 0x5EC - 0x5EC
   std::int32_t m_nSimulationMode; // 0x5F0 - 0x5F0
   std::int32_t m_nVisibilitySamples; // 0x5F4 - 0x5F4
   Vector m_vDynamicProxyPoint; // 0x5F8 - 0x5F8
   std::float_t m_flDynamicMaximumOcclusion; // 0x604 - 0x604
   CEntityHandle m_hDynamicEntity; // 0x608 - 0x608
   CUtlSymbolLarge m_iszDynamicEntityName; // 0x610 - 0x610
   std::float_t m_flPathingDistanceNormFactor; // 0x618 - 0x618
   Vector m_vPathingSourcePos; // 0x61C - 0x61C
   Vector m_vPathingListenerPos; // 0x628 - 0x628

}; // size - 0x638


class CTabletBlockerShim : public CBaseTrigger
{
public:


}; // size - 0x898


class CTonemapController2 : public CBaseEntity
{
public:

   std::float_t m_flAutoExposureMin; // 0x4A0 - 0x4A0
   std::float_t m_flAutoExposureMax; // 0x4A4 - 0x4A4
   std::float_t m_flTonemapPercentTarget; // 0x4A8 - 0x4A8
   std::float_t m_flTonemapPercentBrightPixels; // 0x4AC - 0x4AC
   std::float_t m_flTonemapMinAvgLum; // 0x4B0 - 0x4B0
   std::float_t m_flExposureAdaptationSpeedUp; // 0x4B4 - 0x4B4
   std::float_t m_flExposureAdaptationSpeedDown; // 0x4B8 - 0x4B8
   std::float_t m_flTonemapEVSmoothingRange; // 0x4BC - 0x4BC

}; // size - 0x4C8


class CTriggerCustomBounds : public CBaseTrigger
{
public:


}; // size - 0x898


class C_BaseCSGrenade : public C_WeaponCSBase
{
public:

   bool m_bRedraw; // 0x13F0 - 0x13F0
   bool m_bIsHeldByPlayer; // 0x13F1 - 0x13F1
   bool m_bPinPulled; // 0x13F2 - 0x13F2
   EGrenadeThrowState m_eThrowStatus; // 0x13F4 - 0x13F4
   GameTime_t m_fThrowTime; // 0x13F8 - 0x13F8
   std::float_t m_flThrowStrength; // 0x13FC - 0x13FC
   std::float_t m_flThrowStrengthApproach; // 0x1400 - 0x1400
   GameTime_t m_fDropTime; // 0x1404 - 0x1404

}; // size - 0x1410


class C_BaseViewModel : public CBaseAnimGraph
{
public:

   Vector m_vecLastFacing; // 0x9A0 - 0x9A0
   std::uint32_t m_nViewModelIndex; // 0x9AC - 0x9AC
   std::uint32_t m_nAnimationParity; // 0x9B0 - 0x9B0
   std::float_t m_flAnimationStartTime; // 0x9B4 - 0x9B4
   CHandle< C_BasePlayerWeapon > m_hWeapon; // 0x9B8 - 0x9B8
   CUtlSymbolLarge m_sVMName; // 0x9C0 - 0x9C0
   CUtlSymbolLarge m_sAnimationPrefix; // 0x9C8 - 0x9C8
   CHandle< C_ViewmodelWeapon > m_hWeaponModel; // 0x9D0 - 0x9D0
   AttachmentHandle_t m_iCameraAttachment; // 0x9D4 - 0x9D4
   QAngle m_vecLastCameraAngles; // 0x9D8 - 0x9D8
   std::float_t m_previousElapsedDuration; // 0x9E4 - 0x9E4
   std::float_t m_previousCycle; // 0x9E8 - 0x9E8
   std::int32_t m_nOldAnimationParity; // 0x9EC - 0x9EC
   HSequence m_hOldLayerSequence; // 0x9F0 - 0x9F0
   std::int32_t m_oldLayer; // 0x9F4 - 0x9F4
   std::float_t m_oldLayerStartTime; // 0x9F8 - 0x9F8
   CEntityHandle m_hControlPanel; // 0x9FC - 0x9FC

}; // size - 0xA00


class C_CSGO_PreviewPlayer : public C_CSPlayerPawn
{
public:

   CUtlString m_animgraph; // 0x19A8 - 0x19A8
   CUtlString m_animgraphCharacterModeString; // 0x19B0 - 0x19B0
   std::float_t m_flInitialModelScale; // 0x19B8 - 0x19B8

}; // size - 0x1A30


class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath
{
public:

   bool m_bDofEnabled; // 0x598 - 0x598
   std::float_t m_flDofNearBlurry; // 0x59C - 0x59C
   std::float_t m_flDofNearCrisp; // 0x5A0 - 0x5A0
   std::float_t m_flDofFarCrisp; // 0x5A4 - 0x5A4
   std::float_t m_flDofFarBlurry; // 0x5A8 - 0x5A8
   std::float_t m_flDofTiltToGround; // 0x5AC - 0x5AC

}; // size - 0x5B0


class C_Item : public C_EconEntity
{
public:

   bool m_bShouldGlow; // 0x1070 - 0x1070
   char m_pReticleHintTextName[256]; // 0x1071 - 0x1071

}; // size - 0x1178


class C_ParticleSystem : public C_BaseModelEntity
{
public:

   char m_szSnapshotFileName[512]; // 0x838 - 0x838
   bool m_bActive; // 0xA38 - 0xA38
   bool m_bFrozen; // 0xA39 - 0xA39
   std::float_t m_flFreezeTransitionDuration; // 0xA3C - 0xA3C
   std::int32_t m_nStopType; // 0xA40 - 0xA40
   bool m_bAnimateDuringGameplayPause; // 0xA44 - 0xA44
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xA48 - 0xA48
   GameTime_t m_flStartTime; // 0xA50 - 0xA50
   std::float_t m_flPreSimTime; // 0xA54 - 0xA54
   Vector m_vServerControlPoints[4]; // 0xA58 - 0xA58
   uint8 m_iServerControlPointAssignments[4]; // 0xA88 - 0xA88
   CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xA8C - 0xA8C
   bool m_bNoSave; // 0xB8C - 0xB8C
   bool m_bNoFreeze; // 0xB8D - 0xB8D
   bool m_bStartActive; // 0xB8E - 0xB8E
   CUtlSymbolLarge m_iszEffectName; // 0xB90 - 0xB90
   CUtlSymbolLarge m_iszControlPointNames[64]; // 0xB98 - 0xB98
   std::int32_t m_nDataCP; // 0xD98 - 0xD98
   Vector m_vecDataCPValue; // 0xD9C - 0xD9C
   std::int32_t m_nTintCP; // 0xDA8 - 0xDA8
   Color m_clrTint; // 0xDAC - 0xDAC
   bool m_bOldActive; // 0xDD0 - 0xDD0
   bool m_bOldFrozen; // 0xDD1 - 0xDD1

}; // size - 0xDE8


class C_SoundAreaEntityBase : public C_BaseEntity
{
public:

   bool m_bDisabled; // 0x538 - 0x538
   bool m_bWasEnabled; // 0x540 - 0x540
   CUtlSymbolLarge m_iszSoundAreaType; // 0x548 - 0x548
   Vector m_vPos; // 0x550 - 0x550

}; // size - 0x560


class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase
{
public:


}; // size - 0x558


class MaterialParam_t
{
public:

   CUtlString m_name; // 0x0 - 0x0

}; // size - 0x8


class CAnimComponentUpdater
{
public:

   CUtlString m_name; // 0x18 - 0x18
   AnimComponentID m_id; // 0x20 - 0x20
   AnimNodeNetworkMode m_networkMode; // 0x24 - 0x24
   bool m_bStartEnabled; // 0x28 - 0x28

}; // size - 0x30


class CBasePropDoor : public CDynamicProp
{
public:

   std::float_t m_flAutoReturnDelay; // 0xAA8 - 0xAA8
   CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xAB0 - 0xAB0
   std::int32_t m_nHardwareType; // 0xAC8 - 0xAC8
   bool m_bNeedsHardware; // 0xACC - 0xACC
   DoorState_t m_eDoorState; // 0xAD0 - 0xAD0
   bool m_bLocked; // 0xAD4 - 0xAD4
   Vector m_closedPosition; // 0xAD8 - 0xAD8
   QAngle m_closedAngles; // 0xAE4 - 0xAE4
   CHandle< CBaseEntity > m_hBlocker; // 0xAF0 - 0xAF0
   bool m_bFirstBlocked; // 0xAF4 - 0xAF4
   locksound_t m_ls; // 0xAF8 - 0xAF8
   bool m_bForceClosed; // 0xB18 - 0xB18
   Vector m_vecLatchWorldPosition; // 0xB1C - 0xB1C
   CHandle< CBaseEntity > m_hActivator; // 0xB28 - 0xB28
   std::uint32_t m_sndParamAngularSpeed; // 0xB34 - 0xB34
   CUtlSymbolLarge m_SoundMoving; // 0xB38 - 0xB38
   CUtlSymbolLarge m_SoundOpen; // 0xB40 - 0xB40
   CUtlSymbolLarge m_SoundClose; // 0xB48 - 0xB48
   CUtlSymbolLarge m_SoundLock; // 0xB50 - 0xB50
   CUtlSymbolLarge m_SoundUnlock; // 0xB58 - 0xB58
   CUtlSymbolLarge m_SoundLatch; // 0xB60 - 0xB60
   CUtlSymbolLarge m_SoundPound; // 0xB68 - 0xB68
   CUtlSymbolLarge m_SoundJiggle; // 0xB70 - 0xB70
   CUtlSymbolLarge m_SoundLockedAnim; // 0xB78 - 0xB78
   std::int32_t m_numCloseAttempts; // 0xB80 - 0xB80
   CUtlStringToken m_nPhysicsMaterial; // 0xB84 - 0xB84
   CUtlSymbolLarge m_SlaveName; // 0xB88 - 0xB88
   CHandle< CBasePropDoor > m_hMaster; // 0xB90 - 0xB90
   CEntityIOOutput m_OnBlockedClosing; // 0xB98 - 0xB98
   CEntityIOOutput m_OnBlockedOpening; // 0xBC0 - 0xBC0
   CEntityIOOutput m_OnUnblockedClosing; // 0xBE8 - 0xBE8
   CEntityIOOutput m_OnUnblockedOpening; // 0xC10 - 0xC10
   CEntityIOOutput m_OnFullyClosed; // 0xC38 - 0xC38
   CEntityIOOutput m_OnFullyOpen; // 0xC60 - 0xC60
   CEntityIOOutput m_OnClose; // 0xC88 - 0xC88
   CEntityIOOutput m_OnOpen; // 0xCB0 - 0xCB0
   CEntityIOOutput m_OnLockedUse; // 0xCD8 - 0xCD8
   CEntityIOOutput m_OnAjarOpen; // 0xD00 - 0xD00

}; // size - 0xD28


class CBoneConstraintBase
{
public:


}; // size - 0x28


class CFuncBrush : public CBaseModelEntity
{
public:

   BrushSolidities_e m_iSolidity; // 0x6F0 - 0x6F0
   std::int32_t m_iDisabled; // 0x6F4 - 0x6F4
   bool m_bSolidBsp; // 0x6F8 - 0x6F8
   CUtlSymbolLarge m_iszExcludedClass; // 0x700 - 0x700
   bool m_bInvertExclusion; // 0x708 - 0x708
   bool m_bScriptedMovement; // 0x709 - 0x709

}; // size - 0x710


class CFuncLadder : public CBaseModelEntity
{
public:

   Vector m_vecLadderDir; // 0x6F0 - 0x6F0
   CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x700 - 0x700
   Vector m_vecLocalTop; // 0x718 - 0x718
   Vector m_vecPlayerMountPositionTop; // 0x724 - 0x724
   Vector m_vecPlayerMountPositionBottom; // 0x730 - 0x730
   std::float_t m_flAutoRideSpeed; // 0x73C - 0x73C
   bool m_bDisabled; // 0x740 - 0x740
   bool m_bFakeLadder; // 0x741 - 0x741
   bool m_bHasSlack; // 0x742 - 0x742
   CUtlSymbolLarge m_surfacePropName; // 0x748 - 0x748
   CEntityIOOutput m_OnPlayerGotOnLadder; // 0x750 - 0x750
   CEntityIOOutput m_OnPlayerGotOffLadder; // 0x778 - 0x778

}; // size - 0x7A0


class CGameRulesProxy : public CBaseEntity
{
public:


}; // size - 0x4A0


class CParticleFloatInput
{
public:

   ParticleFloatType_t m_nType; // 0x0 - 0x0
   ParticleFloatMapType_t m_nMapType; // 0x4 - 0x4
   std::float_t m_flLiteralValue; // 0x8 - 0x8
   CKV3MemberNameWithStorage m_NamedValue; // 0x10 - 0x10
   std::int32_t m_nControlPoint; // 0x48 - 0x48
   ParticleAttributeIndex_t m_nScalarAttribute; // 0x4C - 0x4C
   ParticleAttributeIndex_t m_nVectorAttribute; // 0x50 - 0x50
   std::int32_t m_nVectorComponent; // 0x54 - 0x54
   std::float_t m_flRandomMin; // 0x58 - 0x58
   std::float_t m_flRandomMax; // 0x5C - 0x5C
   bool m_bHasRandomSignFlip; // 0x60 - 0x60
   ParticleFloatRandomMode_t m_nRandomMode; // 0x64 - 0x64
   std::float_t m_flLOD0; // 0x6C - 0x6C
   std::float_t m_flLOD1; // 0x70 - 0x70
   std::float_t m_flLOD2; // 0x74 - 0x74
   std::float_t m_flLOD3; // 0x78 - 0x78
   ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0x7C - 0x7C
   std::float_t m_flNoiseOutputMin; // 0x80 - 0x80
   std::float_t m_flNoiseOutputMax; // 0x84 - 0x84
   std::float_t m_flNoiseScale; // 0x88 - 0x88
   Vector m_vecNoiseOffsetRate; // 0x8C - 0x8C
   std::float_t m_flNoiseOffset; // 0x98 - 0x98
   std::int32_t m_nNoiseOctaves; // 0x9C - 0x9C
   PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xA0 - 0xA0
   PFNoiseType_t m_nNoiseType; // 0xA4 - 0xA4
   PFNoiseModifier_t m_nNoiseModifier; // 0xA8 - 0xA8
   std::float_t m_flNoiseTurbulenceScale; // 0xAC - 0xAC
   std::float_t m_flNoiseTurbulenceMix; // 0xB0 - 0xB0
   std::float_t m_flNoiseImgPreviewScale; // 0xB4 - 0xB4
   bool m_bNoiseImgPreviewLive; // 0xB8 - 0xB8
   ParticleFloatInputMode_t m_nInputMode; // 0xC0 - 0xC0
   std::float_t m_flMultFactor; // 0xC4 - 0xC4
   std::float_t m_flInput0; // 0xC8 - 0xC8
   std::float_t m_flInput1; // 0xCC - 0xCC
   std::float_t m_flOutput0; // 0xD0 - 0xD0
   std::float_t m_flOutput1; // 0xD4 - 0xD4
   std::float_t m_flNotchedRangeMin; // 0xD8 - 0xD8
   std::float_t m_flNotchedRangeMax; // 0xDC - 0xDC
   std::float_t m_flNotchedOutputOutside; // 0xE0 - 0xE0
   std::float_t m_flNotchedOutputInside; // 0xE4 - 0xE4
   ParticleFloatBiasType_t m_nBiasType; // 0xE8 - 0xE8
   std::float_t m_flBiasParameter; // 0xEC - 0xEC
   CPiecewiseCurve m_Curve; // 0xF0 - 0xF0

}; // size - 0x138


class CParticleFunctionEmitter : public CParticleFunction
{
public:

   std::int32_t m_nEmitterIndex; // 0x1E8 - 0x1E8

}; // size - 0x1F0


class CPlayer_MovementServices : public CPlayerPawnComponent
{
public:

   std::int32_t m_nImpulse; // 0x40 - 0x40
   CInButtonState m_nButtons; // 0x48 - 0x48
   std::uint64_t m_nQueuedButtonDownMask; // 0x68 - 0x68
   std::uint64_t m_nQueuedButtonChangeMask; // 0x70 - 0x70
   std::uint64_t m_nButtonDoublePressed; // 0x78 - 0x78
   uint32 m_pButtonPressedCmdNumber[64]; // 0x80 - 0x80
   std::uint32_t m_nLastCommandNumberProcessed; // 0x180 - 0x180
   std::uint64_t m_nToggleButtonDownMask; // 0x188 - 0x188
   std::float_t m_flMaxspeed; // 0x190 - 0x190
   std::float_t m_flForceSubtickMoveWhen; // 0x194 - 0x194
   std::float_t m_flForwardMove; // 0x198 - 0x198
   std::float_t m_flLeftMove; // 0x19C - 0x19C
   std::float_t m_flUpMove; // 0x1A0 - 0x1A0
   QAngle m_vecOldViewAngles; // 0x1A4 - 0x1A4

}; // size - 0x1B8


class CPlayer_MovementServices : public CPlayerPawnComponent
{
public:

   std::int32_t m_nImpulse; // 0x40 - 0x40
   CInButtonState m_nButtons; // 0x48 - 0x48
   std::uint64_t m_nQueuedButtonDownMask; // 0x68 - 0x68
   std::uint64_t m_nQueuedButtonChangeMask; // 0x70 - 0x70
   std::uint64_t m_nButtonDoublePressed; // 0x78 - 0x78
   uint32 m_pButtonPressedCmdNumber[64]; // 0x80 - 0x80
   std::uint32_t m_nLastCommandNumberProcessed; // 0x180 - 0x180
   std::uint64_t m_nToggleButtonDownMask; // 0x188 - 0x188
   std::float_t m_flMaxspeed; // 0x190 - 0x190
   std::float_t m_flForceSubtickMoveWhen; // 0x194 - 0x194
   std::float_t m_flForwardMove; // 0x198 - 0x198
   std::float_t m_flLeftMove; // 0x19C - 0x19C
   std::float_t m_flUpMove; // 0x1A0 - 0x1A0
   QAngle m_vecOldViewAngles; // 0x1A4 - 0x1A4

}; // size - 0x1B8


class CRagdollProp : public CBaseAnimGraph
{
public:

   ragdoll_t m_ragdoll; // 0x828 - 0x828
   bool m_bStartDisabled; // 0x860 - 0x860
   CNetworkUtlVectorBase< Vector > m_ragPos; // 0x868 - 0x868
   CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0x880 - 0x880
   CHandle< CBaseEntity > m_hRagdollSource; // 0x898 - 0x898
   std::uint32_t m_lastUpdateTickCount; // 0x89C - 0x89C
   bool m_allAsleep; // 0x8A0 - 0x8A0
   bool m_bFirstCollisionAfterLaunch; // 0x8A1 - 0x8A1
   CHandle< CBaseEntity > m_hDamageEntity; // 0x8A4 - 0x8A4
   CHandle< CBaseEntity > m_hKiller; // 0x8A8 - 0x8A8
   CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x8AC - 0x8AC
   GameTime_t m_flLastPhysicsInfluenceTime; // 0x8B0 - 0x8B0
   GameTime_t m_flFadeOutStartTime; // 0x8B4 - 0x8B4
   std::float_t m_flFadeTime; // 0x8B8 - 0x8B8
   Vector m_vecLastOrigin; // 0x8BC - 0x8BC
   GameTime_t m_flAwakeTime; // 0x8C8 - 0x8C8
   GameTime_t m_flLastOriginChangeTime; // 0x8CC - 0x8CC
   std::int32_t m_nBloodColor; // 0x8D0 - 0x8D0
   CUtlSymbolLarge m_strOriginClassName; // 0x8D8 - 0x8D8
   CUtlSymbolLarge m_strSourceClassName; // 0x8E0 - 0x8E0
   bool m_bHasBeenPhysgunned; // 0x8E8 - 0x8E8
   bool m_bShouldTeleportPhysics; // 0x8E9 - 0x8E9
   std::float_t m_flBlendWeight; // 0x8EC - 0x8EC
   std::float_t m_flDefaultFadeScale; // 0x8F0 - 0x8F0
   CUtlVector< Vector > m_ragdollMins; // 0x8F8 - 0x8F8
   CUtlVector< Vector > m_ragdollMaxs; // 0x910 - 0x910
   bool m_bShouldDeleteActivationRecord; // 0x928 - 0x928
   bool m_bValidatePoweredRagdollPose; // 0x988 - 0x988

}; // size - 0x9C8


class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity
{
public:

   Vector m_vDistanceInnerMins; // 0x638 - 0x638
   Vector m_vDistanceInnerMaxs; // 0x644 - 0x644
   Vector m_vDistanceOuterMins; // 0x650 - 0x650
   Vector m_vDistanceOuterMaxs; // 0x65C - 0x65C
   std::int32_t m_nAABBDirection; // 0x668 - 0x668
   Vector m_vInnerMins; // 0x66C - 0x66C
   Vector m_vInnerMaxs; // 0x678 - 0x678
   Vector m_vOuterMins; // 0x684 - 0x684
   Vector m_vOuterMaxs; // 0x690 - 0x690

}; // size - 0x6A0


class CWeaponBaseItem : public CWeaponCSBase
{
public:

   CountdownTimer m_SequenceCompleteTimer; // 0xD50 - 0xD50
   bool m_bRedraw; // 0xD68 - 0xD68

}; // size - 0xD70


class C_Knife : public C_WeaponCSBase
{
public:


}; // size - 0x13D0


class C_LightEntity : public C_BaseModelEntity
{
public:

   CLightComponent* m_CLightComponent; // 0x838 - 0x838

}; // size - 0x840


class C_PredictedViewModel : public C_BaseViewModel
{
public:

   QAngle m_LagAnglesHistory; // 0xA00 - 0xA00
   Vector m_vPredictedOffset; // 0xA18 - 0xA18

}; // size - 0xA28


class ActiveModelConfig_t
{
public:

   ModelConfigHandle_t m_Handle; // 0x28 - 0x28
   CUtlSymbolLarge m_Name; // 0x30 - 0x30
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities; // 0x38 - 0x38
   C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x50 - 0x50

}; // size - 0x68


class ActiveModelConfig_t
{
public:

   ModelConfigHandle_t m_Handle; // 0x28 - 0x28
   CUtlSymbolLarge m_Name; // 0x30 - 0x30
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_AssociatedEntities; // 0x38 - 0x38
   CNetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x50 - 0x50

}; // size - 0x68


class AmmoIndex_t
{
public:

   std::int8_t m_Value; // 0x0 - 0x0

}; // size - 0x1


class AnimNodeOutputID
{
public:

   std::uint32_t m_id; // 0x0 - 0x0

}; // size - 0x4


class AnimStateID
{
public:

   std::uint32_t m_id; // 0x0 - 0x0

}; // size - 0x4


class AnimationDecodeDebugDump_t
{
public:

   AnimationProcessingType_t m_processingType; // 0x0 - 0x0
   CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8 - 0x8

}; // size - 0x20


class BaseSceneObjectOverride_t
{
public:

   std::uint32_t m_nSceneObjectIndex; // 0x0 - 0x0

}; // size - 0x4


class BlendItem_t
{
public:

   CUtlVector< TagSpan_t > m_tags; // 0x0 - 0x0
   CAnimUpdateNodeRef m_pChild; // 0x18 - 0x18
   HSequence m_hSequence; // 0x28 - 0x28
   Vector2D m_vPos; // 0x2C - 0x2C
   std::float_t m_flDuration; // 0x34 - 0x34
   bool m_bUseCustomDuration; // 0x38 - 0x38

}; // size - 0x40


class CAI_ChangeHintGroup : public CBaseEntity
{
public:

   std::int32_t m_iSearchType; // 0x4A0 - 0x4A0
   CUtlSymbolLarge m_strSearchName; // 0x4A8 - 0x4A8
   CUtlSymbolLarge m_strNewHintGroup; // 0x4B0 - 0x4B0
   std::float_t m_flRadius; // 0x4B8 - 0x4B8

}; // size - 0x4C0


class CAI_ChangeTarget : public CBaseEntity
{
public:

   CUtlSymbolLarge m_iszNewTarget; // 0x4A0 - 0x4A0

}; // size - 0x4A8


class CAmbientGeneric : public CPointEntity
{
public:

   std::float_t m_radius; // 0x4A0 - 0x4A0
   std::float_t m_flMaxRadius; // 0x4A4 - 0x4A4
   soundlevel_t m_iSoundLevel; // 0x4A8 - 0x4A8
   dynpitchvol_t m_dpv; // 0x4AC - 0x4AC
   bool m_fActive; // 0x510 - 0x510
   bool m_fLooping; // 0x511 - 0x511
   CUtlSymbolLarge m_iszSound; // 0x518 - 0x518
   CUtlSymbolLarge m_sSourceEntName; // 0x520 - 0x520
   CHandle< CBaseEntity > m_hSoundSource; // 0x528 - 0x528
   CEntityIndex m_nSoundSourceEntIndex; // 0x52C - 0x52C

}; // size - 0x538


class CAndCondition : public CConditionBase
{
public:


}; // size - 0x60


class CAnimActionBase
{
public:


}; // size - 0x28


class CAnimActivity
{
public:

   CBufferString m_name; // 0x0 - 0x0
   std::int32_t m_nActivity; // 0x10 - 0x10
   std::int32_t m_nFlags; // 0x14 - 0x14
   std::int32_t m_nWeight; // 0x18 - 0x18

}; // size - 0x20


class CAnimComponentManager
{
public:

   CUtlVector< CSmartPtr< CAnimComponentBase > > m_components; // 0x8 - 0x8

}; // size - 0x28


class CAnimComponentState : public CAnimState
{
public:


}; // size - 0x70


class CAnimDecoder
{
public:

   CBufferString m_szName; // 0x0 - 0x0
   std::int32_t m_nVersion; // 0x10 - 0x10
   std::int32_t m_nType; // 0x14 - 0x14

}; // size - 0x18


class CAnimGraphSettingsGroup
{
public:


}; // size - 0x20


class CAnimInputDamping
{
public:

   DampingSpeedFunction m_speedFunction; // 0x8 - 0x8
   std::float_t m_fSpeedScale; // 0xC - 0xC

}; // size - 0x10


class CAnimLocalHierarchy
{
public:

   CBufferString m_sBone; // 0x0 - 0x0
   CBufferString m_sNewParent; // 0x10 - 0x10
   std::int32_t m_nStartFrame; // 0x20 - 0x20
   std::int32_t m_nPeakFrame; // 0x24 - 0x24
   std::int32_t m_nTailFrame; // 0x28 - 0x28
   std::int32_t m_nEndFrame; // 0x2C - 0x2C

}; // size - 0x30


class CAnimMotorBase
{
public:

   CUtlString m_name; // 0x18 - 0x18
   bool m_bDefault; // 0x20 - 0x20

}; // size - 0x28


class CAnimMotorUpdaterBase
{
public:

   CUtlString m_name; // 0x10 - 0x10
   bool m_bDefault; // 0x18 - 0x18

}; // size - 0x20


class CAnimNodeManager
{
public:

   CUtlHashtable< AnimNodeID, CSmartPtr< CAnimNodeBase > > m_nodes; // 0x8 - 0x8

}; // size - 0x48


class CAnimParameterBase
{
public:

   CAnimGraphSymbolWithStorage m_name; // 0x18 - 0x18
   CUtlString m_group; // 0x38 - 0x38
   AnimParamID m_id; // 0x40 - 0x40
   CUtlString m_componentName; // 0x58 - 0x58
   AnimParamButton_t m_previewButton; // 0x64 - 0x64
   bool m_bUseMostRecentValue; // 0x68 - 0x68
   bool m_bAutoReset; // 0x69 - 0x69
   AnimParamNetworkSetting m_eNetworkSetting; // 0x6C - 0x6C
   bool m_bGameWritable; // 0x70 - 0x70
   bool m_bGraphWritable; // 0x71 - 0x71
   bool m_bIsReferenced; // 0x72 - 0x72
   bool m_bNetworkingRequested; // 0x73 - 0x73

}; // size - 0x78


class CAnimState
{
public:

   CUtlVector< CSmartPtr< CAnimStateTransition > > m_transitions; // 0x28 - 0x28
   CUtlVector< CStateAction > m_actions; // 0x40 - 0x40
   CUtlString m_name; // 0x58 - 0x58
   AnimStateID m_stateID; // 0x60 - 0x60
   Vector2D m_position; // 0x64 - 0x64
   bool m_bIsStartState; // 0x6C - 0x6C
   bool m_bIsEndtState; // 0x6D - 0x6D
   bool m_bIsPassthrough; // 0x6E - 0x6E

}; // size - 0x70


class CAnimUserDifference
{
public:

   CBufferString m_name; // 0x0 - 0x0
   std::int32_t m_nType; // 0x10 - 0x10

}; // size - 0x18


class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase
{
public:

   VectorAligned m_vWsCenter; // 0x10 - 0x10
   VectorAligned m_vWsStart; // 0x20 - 0x20
   VectorAligned m_vWsEnd; // 0x30 - 0x30
   Color m_Color; // 0x40 - 0x40

}; // size - 0x50


class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase
{
public:

   VectorAligned m_vWsPosition; // 0x10 - 0x10
   std::float_t m_flRadius; // 0x20 - 0x20
   Color m_Color; // 0x24 - 0x24

}; // size - 0x30


class CAttachment
{
public:

   CUtlString m_name; // 0x0 - 0x0
   CUtlString m_influenceNames[3]; // 0x8 - 0x8
   Quaternion m_vInfluenceRotations[3]; // 0x20 - 0x20
   Vector m_vInfluenceOffsets[3]; // 0x50 - 0x50
   float32 m_influenceWeights[3]; // 0x74 - 0x74
   bool m_bInfluenceRootTransform[3]; // 0x80 - 0x80
   std::uint8_t m_nInfluences; // 0x83 - 0x83
   bool m_bIgnoreRotation; // 0x84 - 0x84

}; // size - 0x90


class CAttributeManager
{
public:

   class cached_attribute_float_t
   {
   public:

      std::float_t flIn; // 0x0 - 0x0
      CUtlSymbolLarge iAttribHook; // 0x8 - 0x8
      std::float_t flOut; // 0x10 - 0x10

   }; // size - 0x18

   class cached_attribute_float_t
   {
   public:

      std::float_t flIn; // 0x0 - 0x0
      CUtlSymbolLarge iAttribHook; // 0x8 - 0x8
      std::float_t flOut; // 0x10 - 0x10

   }; // size - 0x18

   CUtlVector< CHandle< C_BaseEntity > > m_Providers; // 0x8 - 0x8
   std::int32_t m_iReapplyProvisionParity; // 0x20 - 0x20
   CHandle< C_BaseEntity > m_hOuter; // 0x24 - 0x24
   bool m_bPreventLoopback; // 0x28 - 0x28
   attributeprovidertypes_t m_ProviderType; // 0x2C - 0x2C
   CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x30 - 0x30

}; // size - 0x50




class CBRC4Target : public CBaseAnimGraph
{
public:

   CHandle< CBaseEntity > m_hPlayerThatActivatedMe; // 0x848 - 0x848
   bool m_bBrokenOpen; // 0x84C - 0x84C
   std::float_t m_flRadius; // 0x850 - 0x850

}; // size - 0x858


class CBarnLight : public CBaseModelEntity
{
public:

   bool m_bEnabled; // 0x6F0 - 0x6F0
   std::int32_t m_nColorMode; // 0x6F4 - 0x6F4
   Color m_Color; // 0x6F8 - 0x6F8
   std::float_t m_flColorTemperature; // 0x6FC - 0x6FC
   std::float_t m_flBrightness; // 0x700 - 0x700
   std::float_t m_flBrightnessScale; // 0x704 - 0x704
   std::int32_t m_nDirectLight; // 0x708 - 0x708
   std::int32_t m_nBakedShadowIndex; // 0x70C - 0x70C
   std::int32_t m_nLuminaireShape; // 0x710 - 0x710
   std::float_t m_flLuminaireSize; // 0x714 - 0x714
   std::float_t m_flLuminaireAnisotropy; // 0x718 - 0x718
   CUtlString m_LightStyleString; // 0x720 - 0x720
   GameTime_t m_flLightStyleStartTime; // 0x728 - 0x728
   CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x730 - 0x730
   CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x748 - 0x748
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // 0x760 - 0x760
   CEntityIOOutput m_StyleEvent[4]; // 0x778 - 0x778
   CUtlString m_StyleRadianceVar; // 0x818 - 0x818
   CUtlString m_StyleVar; // 0x820 - 0x820
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x848 - 0x848
   std::float_t m_flShape; // 0x850 - 0x850
   std::float_t m_flSoftX; // 0x854 - 0x854
   std::float_t m_flSoftY; // 0x858 - 0x858
   std::float_t m_flSkirt; // 0x85C - 0x85C
   std::float_t m_flSkirtNear; // 0x860 - 0x860
   Vector m_vSizeParams; // 0x864 - 0x864
   std::float_t m_flRange; // 0x870 - 0x870
   Vector m_vShear; // 0x874 - 0x874
   std::int32_t m_nBakeSpecularToCubemaps; // 0x880 - 0x880
   Vector m_vBakeSpecularToCubemapsSize; // 0x884 - 0x884
   std::int32_t m_nCastShadows; // 0x890 - 0x890
   std::int32_t m_nShadowMapSize; // 0x894 - 0x894
   std::int32_t m_nShadowPriority; // 0x898 - 0x898
   bool m_bContactShadow; // 0x89C - 0x89C
   std::int32_t m_nBounceLight; // 0x8A0 - 0x8A0
   std::float_t m_flBounceScale; // 0x8A4 - 0x8A4
   std::float_t m_flMinRoughness; // 0x8A8 - 0x8A8
   std::int32_t m_nFog; // 0x8AC - 0x8AC
   std::float_t m_flFogStrength; // 0x8B0 - 0x8B0
   std::int32_t m_nFogShadows; // 0x8B4 - 0x8B4
   std::float_t m_flFogScale; // 0x8B8 - 0x8B8
   std::float_t m_flFadeSizeStart; // 0x8BC - 0x8BC
   std::float_t m_flFadeSizeEnd; // 0x8C0 - 0x8C0
   std::float_t m_flShadowFadeSizeStart; // 0x8C4 - 0x8C4
   std::float_t m_flShadowFadeSizeEnd; // 0x8C8 - 0x8C8
   bool m_bPrecomputedFieldsValid; // 0x8CC - 0x8CC
   Vector m_vPrecomputedBoundsMins; // 0x8D0 - 0x8D0
   Vector m_vPrecomputedBoundsMaxs; // 0x8DC - 0x8DC
   Vector m_vPrecomputedOBBOrigin; // 0x8E8 - 0x8E8
   QAngle m_vPrecomputedOBBAngles; // 0x8F4 - 0x8F4
   Vector m_vPrecomputedOBBExtent; // 0x900 - 0x900
   bool m_bPvsModifyEntity; // 0x90C - 0x90C

}; // size - 0x918


class CBaseAnimGraphController : public CSkeletonAnimationController
{
public:

   CNetworkedSequenceOperation m_baseLayer; // 0x18 - 0x18
   CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x40 - 0x40
   bool m_bSequenceFinished; // 0x1F0 - 0x1F0
   std::float_t m_flLastEventCycle; // 0x1F4 - 0x1F4
   std::float_t m_flLastEventAnimTime; // 0x1F8 - 0x1F8
   CNetworkedQuantizedFloat m_flPlaybackRate; // 0x1FC - 0x1FC
   std::float_t m_flPrevAnimTime; // 0x204 - 0x204
   bool m_bClientSideAnimation; // 0x208 - 0x208
   bool m_bNetworkedAnimationInputsChanged; // 0x209 - 0x209
   std::int32_t m_nNewSequenceParity; // 0x20C - 0x20C
   std::int32_t m_nResetEventsParity; // 0x210 - 0x210
   AnimLoopMode_t m_nAnimLoopMode; // 0x214 - 0x214
   AnimationUpdateListHandle_t m_hAnimationUpdate; // 0x2AC - 0x2AC

}; // size - 0x2B0


class CBaseAnimGraphController : public CSkeletonAnimationController
{
public:

   CNetworkedSequenceOperation m_baseLayer; // 0x18 - 0x18
   CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x40 - 0x40
   bool m_bSequenceFinished; // 0x1180 - 0x1180
   std::float_t m_flLastEventCycle; // 0x1184 - 0x1184
   std::float_t m_flLastEventAnimTime; // 0x1188 - 0x1188
   CNetworkedQuantizedFloat m_flPlaybackRate; // 0x118C - 0x118C
   std::float_t m_flPrevAnimTime; // 0x1194 - 0x1194
   bool m_bClientSideAnimation; // 0x1198 - 0x1198
   bool m_bNetworkedAnimationInputsChanged; // 0x1199 - 0x1199
   std::uint8_t m_nPrevNewSequenceParity; // 0x119A - 0x119A
   std::uint8_t m_nPrevResetEventsParity; // 0x119B - 0x119B
   std::int32_t m_nNewSequenceParity; // 0x119C - 0x119C
   std::int32_t m_nResetEventsParity; // 0x11A0 - 0x11A0
   AnimLoopMode_t m_nAnimLoopMode; // 0x11A4 - 0x11A4
   AnimationUpdateListHandle_t m_hAnimationUpdate; // 0x123C - 0x123C
   HSequence m_hLastAnimEventSequence; // 0x1240 - 0x1240

}; // size - 0x1298


class CBaseConstraint : public CBoneConstraintBase
{
public:

   CUtlString m_name; // 0x28 - 0x28
   Vector m_vUpVector; // 0x30 - 0x30
   CUtlVector< CConstraintSlave > m_slaves; // 0x40 - 0x40
   CUtlVector< CConstraintTarget > m_targets; // 0x58 - 0x58

}; // size - 0x70


class CBaseDMStart : public CPointEntity
{
public:

   CUtlSymbolLarge m_Master; // 0x4A0 - 0x4A0

}; // size - 0x4A8


class CBaseDoor : public CBaseToggle
{
public:

   QAngle m_angMoveEntitySpace; // 0x780 - 0x780
   Vector m_vecMoveDirParentSpace; // 0x78C - 0x78C
   locksound_t m_ls; // 0x798 - 0x798
   bool m_bForceClosed; // 0x7B8 - 0x7B8
   bool m_bDoorGroup; // 0x7B9 - 0x7B9
   bool m_bLocked; // 0x7BA - 0x7BA
   bool m_bIgnoreDebris; // 0x7BB - 0x7BB
   FuncDoorSpawnPos_t m_eSpawnPosition; // 0x7BC - 0x7BC
   std::float_t m_flBlockDamage; // 0x7C0 - 0x7C0
   CUtlSymbolLarge m_NoiseMoving; // 0x7C8 - 0x7C8
   CUtlSymbolLarge m_NoiseArrived; // 0x7D0 - 0x7D0
   CUtlSymbolLarge m_NoiseMovingClosed; // 0x7D8 - 0x7D8
   CUtlSymbolLarge m_NoiseArrivedClosed; // 0x7E0 - 0x7E0
   CUtlSymbolLarge m_ChainTarget; // 0x7E8 - 0x7E8
   CEntityIOOutput m_OnBlockedClosing; // 0x7F0 - 0x7F0
   CEntityIOOutput m_OnBlockedOpening; // 0x818 - 0x818
   CEntityIOOutput m_OnUnblockedClosing; // 0x840 - 0x840
   CEntityIOOutput m_OnUnblockedOpening; // 0x868 - 0x868
   CEntityIOOutput m_OnFullyClosed; // 0x890 - 0x890
   CEntityIOOutput m_OnFullyOpen; // 0x8B8 - 0x8B8
   CEntityIOOutput m_OnClose; // 0x8E0 - 0x8E0
   CEntityIOOutput m_OnOpen; // 0x908 - 0x908
   CEntityIOOutput m_OnLockedUse; // 0x930 - 0x930
   bool m_bLoopMoveSound; // 0x958 - 0x958
   bool m_bCreateNavObstacle; // 0x970 - 0x970
   bool m_isChaining; // 0x971 - 0x971
   bool m_bIsUsable; // 0x972 - 0x972

}; // size - 0x978


class CBaseFire : public CBaseEntity
{
public:

   std::float_t m_flScale; // 0x4A0 - 0x4A0
   std::float_t m_flStartScale; // 0x4A4 - 0x4A4
   std::float_t m_flScaleTime; // 0x4A8 - 0x4A8
   std::uint32_t m_nFlags; // 0x4AC - 0x4AC

}; // size - 0x4B0


class CBasePlatTrain : public CBaseToggle
{
public:

   CUtlSymbolLarge m_NoiseMoving; // 0x770 - 0x770
   CUtlSymbolLarge m_NoiseArrived; // 0x778 - 0x778
   std::float_t m_volume; // 0x788 - 0x788
   std::float_t m_flTWidth; // 0x78C - 0x78C
   std::float_t m_flTLength; // 0x790 - 0x790

}; // size - 0x798


class CBasePlayerPawn : public CBaseCombatCharacter
{
public:

   CPlayer_WeaponServices* m_pWeaponServices; // 0x968 - 0x968
   CPlayer_ItemServices* m_pItemServices; // 0x970 - 0x970
   CPlayer_AutoaimServices* m_pAutoaimServices; // 0x978 - 0x978
   CPlayer_ObserverServices* m_pObserverServices; // 0x980 - 0x980
   CPlayer_WaterServices* m_pWaterServices; // 0x988 - 0x988
   CPlayer_UseServices* m_pUseServices; // 0x990 - 0x990
   CPlayer_FlashlightServices* m_pFlashlightServices; // 0x998 - 0x998
   CPlayer_CameraServices* m_pCameraServices; // 0x9A0 - 0x9A0
   CPlayer_MovementServices* m_pMovementServices; // 0x9A8 - 0x9A8
   QAngle v_angle; // 0x9B8 - 0x9B8
   std::uint32_t m_iHideHUD; // 0x9D4 - 0x9D4
   sky3dparams_t m_skybox3d; // 0x9D8 - 0x9D8
   GameTime_t m_fTimeLastHurt; // 0xA68 - 0xA68
   GameTime_t m_flDeathTime; // 0xA6C - 0xA6C
   GameTime_t m_fNextSuicideTime; // 0xA70 - 0xA70
   bool m_fInitHUD; // 0xA74 - 0xA74
   GameTime_t m_flNextDecalTime; // 0xA78 - 0xA78
   CAI_Expresser* m_pExpresser; // 0xA80 - 0xA80
   CHandle< CBasePlayerController > m_hController; // 0xA88 - 0xA88
   std::float_t m_fHltvReplayDelay; // 0xA90 - 0xA90
   std::float_t m_fHltvReplayEnd; // 0xA94 - 0xA94
   CEntityIndex m_iHltvReplayEntity; // 0xA98 - 0xA98

}; // size - 0xAA0


class CBaseProp : public CBaseAnimGraph
{
public:

   bool m_bModelOverrodeBlockLOS; // 0x998 - 0x998
   std::int32_t m_iShapeType; // 0x99C - 0x99C
   bool m_bConformToCollisionBounds; // 0x9A0 - 0x9A0
   matrix3x4_t m_mPreferredCatchTransform; // 0x9A4 - 0x9A4

}; // size - 0x9D8


class CBaseViewModel : public CBaseAnimGraph
{
public:

   Vector m_vecLastFacing; // 0x828 - 0x828
   std::uint32_t m_nViewModelIndex; // 0x834 - 0x834
   std::uint32_t m_nAnimationParity; // 0x838 - 0x838
   std::float_t m_flAnimationStartTime; // 0x83C - 0x83C
   CHandle< CBasePlayerWeapon > m_hWeapon; // 0x840 - 0x840
   CUtlSymbolLarge m_sVMName; // 0x848 - 0x848
   CUtlSymbolLarge m_sAnimationPrefix; // 0x850 - 0x850
   HSequence m_hOldLayerSequence; // 0x858 - 0x858
   std::int32_t m_oldLayer; // 0x85C - 0x85C
   std::float_t m_oldLayerStartTime; // 0x860 - 0x860
   CEntityHandle m_hControlPanel; // 0x864 - 0x864

}; // size - 0x868


class CBlendCurve
{
public:

   std::float_t m_flControlPoint1; // 0x0 - 0x0
   std::float_t m_flControlPoint2; // 0x4 - 0x4

}; // size - 0x8


class CBlendUpdateNode : public CAnimUpdateNodeBase
{
public:

   CUtlVector< CAnimUpdateNodeRef > m_children; // 0x60 - 0x60
   CUtlVector< uint8 > m_sortedOrder; // 0x78 - 0x78
   CUtlVector< float32 > m_targetValues; // 0x90 - 0x90
   AnimValueSource m_blendValueSource; // 0xAC - 0xAC
   CAnimParamHandle m_paramIndex; // 0xB0 - 0xB0
   CAnimInputDamping m_damping; // 0xB8 - 0xB8
   BlendKeyType m_blendKeyType; // 0xC8 - 0xC8
   bool m_bLockBlendOnReset; // 0xCC - 0xCC
   bool m_bSyncCycles; // 0xCD - 0xCD
   bool m_bLoop; // 0xCE - 0xCE
   bool m_bLockWhenWaning; // 0xCF - 0xCF

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

   QAngle m_vecSprayAngles; // 0x4A0 - 0x4A0
   Vector m_vecSprayDir; // 0x4AC - 0x4AC
   std::float_t m_flAmount; // 0x4B8 - 0x4B8
   std::int32_t m_Color; // 0x4BC - 0x4BC

}; // size - 0x4C0


class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x470 - 0x470

}; // size - 0x4A0


class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x470 - 0x470

}; // size - 0x4A0


class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:

   CSkeletonInstance m_skeletonInstance; // 0x50 - 0x50
   CNetworkVarChainer __m_pChainEntity; // 0x440 - 0x440

}; // size - 0x470


class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:

   CSkeletonInstance m_skeletonInstance; // 0x50 - 0x50
   CNetworkVarChainer __m_pChainEntity; // 0x440 - 0x440

}; // size - 0x470


class CBombTarget : public CBaseTrigger
{
public:

   CEntityIOOutput m_OnBombExplode; // 0x898 - 0x898
   CEntityIOOutput m_OnBombPlanted; // 0x8C0 - 0x8C0
   CEntityIOOutput m_OnBombDefused; // 0x8E8 - 0x8E8
   bool m_bIsBombSiteB; // 0x910 - 0x910
   bool m_bIsHeistBombTarget; // 0x911 - 0x911
   bool m_bBombPlantedHere; // 0x912 - 0x912
   CUtlSymbolLarge m_szMountTarget; // 0x918 - 0x918
   CHandle< CBaseEntity > m_hInstructorHint; // 0x920 - 0x920

}; // size - 0x928


class CBonePositionMetric : public CMotionMetricBase
{
public:

   CUtlString m_boneName; // 0x28 - 0x28

}; // size - 0x30


class CBreachChargeProjectile : public CBaseGrenade
{
public:

   bool m_bShouldExplode; // 0x958 - 0x958
   CHandle< CBaseEntity > m_weaponThatThrewMe; // 0x95C - 0x95C
   std::int32_t m_nParentBoneIndex; // 0x960 - 0x960
   Vector m_vecParentBonePos; // 0x964 - 0x964
   bool m_bDefused; // 0x970 - 0x970
   bool m_bUnstuckFromPlayer; // 0x971 - 0x971
   bool m_bResolvedParent; // 0x972 - 0x972
   Vector m_vecLastKnownValidPos; // 0x974 - 0x974
   CEntityHandle m_hDesiredParent; // 0x980 - 0x980

}; // size - 0x988


class CBreakable : public CBaseModelEntity
{
public:

   Materials m_Material; // 0x700 - 0x700
   CHandle< CBaseEntity > m_hBreaker; // 0x704 - 0x704
   Explosions m_Explosion; // 0x708 - 0x708
   CUtlSymbolLarge m_iszSpawnObject; // 0x710 - 0x710
   std::float_t m_flPressureDelay; // 0x718 - 0x718
   std::int32_t m_iMinHealthDmg; // 0x71C - 0x71C
   CUtlSymbolLarge m_iszPropData; // 0x720 - 0x720
   std::float_t m_impactEnergyScale; // 0x728 - 0x728
   EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x72C - 0x72C
   CEntityIOOutput m_OnBreak; // 0x730 - 0x730
   CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x758 - 0x758
   std::float_t m_flDmgModBullet; // 0x780 - 0x780
   std::float_t m_flDmgModClub; // 0x784 - 0x784
   std::float_t m_flDmgModExplosive; // 0x788 - 0x788
   std::float_t m_flDmgModFire; // 0x78C - 0x78C
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x790 - 0x790
   CUtlSymbolLarge m_iszBasePropData; // 0x798 - 0x798
   std::int32_t m_iInteractions; // 0x7A0 - 0x7A0
   PerformanceMode_t m_PerformanceMode; // 0x7A4 - 0x7A4
   CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x7A8 - 0x7A8
   GameTime_t m_flLastPhysicsInfluenceTime; // 0x7AC - 0x7AC

}; // size - 0x7B0


class CBtActionAim : public CBtNode
{
public:

   CUtlString m_szSensorInputKey; // 0x68 - 0x68
   CUtlString m_szAimReadyKey; // 0x80 - 0x80
   std::float_t m_flZoomCooldownTimestamp; // 0x88 - 0x88
   bool m_bDoneAiming; // 0x8C - 0x8C
   std::float_t m_flLerpStartTime; // 0x90 - 0x90
   std::float_t m_flNextLookTargetLerpTime; // 0x94 - 0x94
   std::float_t m_flPenaltyReductionRatio; // 0x98 - 0x98
   QAngle m_NextLookTarget; // 0x9C - 0x9C
   CountdownTimer m_AimTimer; // 0xA8 - 0xA8
   CountdownTimer m_SniperHoldTimer; // 0xC0 - 0xC0
   CountdownTimer m_FocusIntervalTimer; // 0xD8 - 0xD8
   bool m_bAcquired; // 0xF0 - 0xF0

}; // size - 0xF8


class CBtActionCombatPositioning : public CBtNode
{
public:

   CUtlString m_szSensorInputKey; // 0x68 - 0x68
   CUtlString m_szIsAttackingKey; // 0x80 - 0x80
   CountdownTimer m_ActionTimer; // 0x88 - 0x88
   bool m_bCrouching; // 0xA0 - 0xA0

}; // size - 0xB0


class CBtActionMoveTo : public CBtNode
{
public:

   CUtlString m_szDestinationInputKey; // 0x60 - 0x60
   CUtlString m_szHidingSpotInputKey; // 0x68 - 0x68
   CUtlString m_szThreatInputKey; // 0x70 - 0x70
   Vector m_vecDestination; // 0x78 - 0x78
   bool m_bAutoLookAdjust; // 0x84 - 0x84
   bool m_bComputePath; // 0x85 - 0x85
   std::float_t m_flDamagingAreasPenaltyCost; // 0x88 - 0x88
   CountdownTimer m_CheckApproximateCornersTimer; // 0x90 - 0x90
   CountdownTimer m_CheckHighPriorityItem; // 0xA8 - 0xA8
   CountdownTimer m_RepathTimer; // 0xC0 - 0xC0
   std::float_t m_flArrivalEpsilon; // 0xD8 - 0xD8
   std::float_t m_flAdditionalArrivalEpsilon2D; // 0xDC - 0xDC
   std::float_t m_flHidingSpotCheckDistanceThreshold; // 0xE0 - 0xE0
   std::float_t m_flNearestAreaDistanceThreshold; // 0xE4 - 0xE4

}; // size - 0xE8


class CBtNodeCondition : public CBtNodeDecorator
{
public:

   bool m_bNegated; // 0x58 - 0x58

}; // size - 0x60


class CBtNodeDecorator : public CBtNode
{
public:


}; // size - 0x58


class CBubbling : public CBaseModelEntity
{
public:

   std::int32_t m_density; // 0x6F0 - 0x6F0
   std::int32_t m_frequency; // 0x6F4 - 0x6F4
   std::int32_t m_state; // 0x6F8 - 0x6F8

}; // size - 0x700


class CBuoyancyHelper
{
public:

   std::float_t m_flFluidDensity; // 0x18 - 0x18

}; // size - 0x20


class CBuoyancyHelper
{
public:

   std::float_t m_flFluidDensity; // 0x18 - 0x18

}; // size - 0x20


class CCSEnvGunfire : public CPointEntity
{
public:

   std::int32_t m_iMinBurstSize; // 0x4A0 - 0x4A0
   std::int32_t m_iMaxBurstSize; // 0x4A4 - 0x4A4
   std::float_t m_flMinBurstDelay; // 0x4A8 - 0x4A8
   std::float_t m_flMaxBurstDelay; // 0x4AC - 0x4AC
   std::float_t m_flRateOfFire; // 0x4B0 - 0x4B0
   CUtlSymbolLarge m_iszShootSound; // 0x4B8 - 0x4B8
   CUtlSymbolLarge m_iszTracerType; // 0x4C0 - 0x4C0
   CUtlSymbolLarge m_iszWeaponName; // 0x4C8 - 0x4C8
   bool m_bDisabled; // 0x4D0 - 0x4D0
   std::int32_t m_iShotsRemaining; // 0x4D4 - 0x4D4
   std::int32_t m_iSpread; // 0x4D8 - 0x4D8
   Vector m_vecSpread; // 0x4DC - 0x4DC
   Vector m_vecTargetPosition; // 0x4E8 - 0x4E8
   std::float_t m_flTargetDist; // 0x4F4 - 0x4F4
   std::float_t m_flBias; // 0x4F8 - 0x4F8
   bool m_bCollide; // 0x4FC - 0x4FC
   CHandle< CBaseEntity > m_hTarget; // 0x500 - 0x500
   bool m_bAllowNullTarget; // 0x504 - 0x504
   bool m_bAlwaysWallbangTracer; // 0x505 - 0x505
   std::float_t m_flDamageScaleValue; // 0x508 - 0x508
   std::float_t m_flAdditionalSpread; // 0x50C - 0x50C

}; // size - 0x510


class CCSGO_TeamIntroCounterTerroristPosition : public CCSGO_TeamIntroCharacterPosition
{
public:


}; // size - 0x730


class CCSGameRules : public CTeamplayRules
{
public:

   CNetworkVarChainer __m_pChainEntity; // 0x98 - 0x98
   CHandle< CBaseEntity > m_coopMissionManager; // 0xC0 - 0xC0
   bool m_bFreezePeriod; // 0xC4 - 0xC4
   bool m_bWarmupPeriod; // 0xC5 - 0xC5
   GameTime_t m_fWarmupPeriodEnd; // 0xC8 - 0xC8
   GameTime_t m_fWarmupPeriodStart; // 0xCC - 0xCC
   bool m_bTerroristTimeOutActive; // 0xD0 - 0xD0
   bool m_bCTTimeOutActive; // 0xD1 - 0xD1
   std::float_t m_flTerroristTimeOutRemaining; // 0xD4 - 0xD4
   std::float_t m_flCTTimeOutRemaining; // 0xD8 - 0xD8
   std::int32_t m_nTerroristTimeOuts; // 0xDC - 0xDC
   std::int32_t m_nCTTimeOuts; // 0xE0 - 0xE0
   bool m_bTechnicalTimeOut; // 0xE4 - 0xE4
   bool m_bMatchWaitingForResume; // 0xE5 - 0xE5
   std::int32_t m_iRoundTime; // 0xE8 - 0xE8
   std::float_t m_fMatchStartTime; // 0xEC - 0xEC
   GameTime_t m_fRoundStartTime; // 0xF0 - 0xF0
   GameTime_t m_flRestartRoundTime; // 0xF4 - 0xF4
   bool m_bGameRestart; // 0xF8 - 0xF8
   std::float_t m_flGameStartTime; // 0xFC - 0xFC
   std::float_t m_timeUntilNextPhaseStarts; // 0x100 - 0x100
   std::int32_t m_gamePhase; // 0x104 - 0x104
   std::int32_t m_totalRoundsPlayed; // 0x108 - 0x108
   std::int32_t m_nRoundsPlayedThisPhase; // 0x10C - 0x10C
   std::int32_t m_nOvertimePlaying; // 0x110 - 0x110
   std::int32_t m_iHostagesRemaining; // 0x114 - 0x114
   bool m_bAnyHostageReached; // 0x118 - 0x118
   bool m_bMapHasBombTarget; // 0x119 - 0x119
   bool m_bMapHasRescueZone; // 0x11A - 0x11A
   bool m_bMapHasBuyZone; // 0x11B - 0x11B
   bool m_bIsQueuedMatchmaking; // 0x11C - 0x11C
   std::int32_t m_nQueuedMatchmakingMode; // 0x120 - 0x120
   bool m_bIsValveDS; // 0x124 - 0x124
   bool m_bLogoMap; // 0x125 - 0x125
   bool m_bPlayAllStepSoundsOnServer; // 0x126 - 0x126
   std::int32_t m_iNumGunGameProgressiveWeaponsCT; // 0x128 - 0x128
   std::int32_t m_iNumGunGameProgressiveWeaponsT; // 0x12C - 0x12C
   std::int32_t m_iSpectatorSlotCount; // 0x130 - 0x130
   int32 m_GGProgressiveWeaponOrderCT[60]; // 0x134 - 0x134
   int32 m_GGProgressiveWeaponOrderT[60]; // 0x224 - 0x224
   int32 m_GGProgressiveWeaponKillUpgradeOrderCT[60]; // 0x314 - 0x314
   int32 m_GGProgressiveWeaponKillUpgradeOrderT[60]; // 0x404 - 0x404
   std::int32_t m_MatchDevice; // 0x4F4 - 0x4F4
   bool m_bHasMatchStarted; // 0x4F8 - 0x4F8
   std::float_t m_flDMBonusStartTime; // 0x4FC - 0x4FC
   std::float_t m_flDMBonusTimeLength; // 0x500 - 0x500
   std::uint16_t m_unDMBonusWeaponLoadoutSlot; // 0x504 - 0x504
   bool m_bDMBonusActive; // 0x506 - 0x506
   std::int32_t m_nNextMapInMapgroup; // 0x508 - 0x508
   char m_szTournamentEventName[512]; // 0x50C - 0x50C
   char m_szTournamentEventStage[512]; // 0x70C - 0x70C
   char m_szMatchStatTxt[512]; // 0x90C - 0x90C
   char m_szTournamentPredictionsTxt[512]; // 0xB0C - 0xB0C
   std::int32_t m_nTournamentPredictionsPct; // 0xD0C - 0xD0C
   GameTime_t m_flCMMItemDropRevealStartTime; // 0xD10 - 0xD10
   GameTime_t m_flCMMItemDropRevealEndTime; // 0xD14 - 0xD14
   bool m_bIsDroppingItems; // 0xD18 - 0xD18
   bool m_bIsQuestEligible; // 0xD19 - 0xD19
   std::int32_t m_nGuardianModeWaveNumber; // 0xD1C - 0xD1C
   std::int32_t m_nGuardianModeSpecialKillsRemaining; // 0xD20 - 0xD20
   std::int32_t m_nGuardianModeSpecialWeaponNeeded; // 0xD24 - 0xD24
   std::int32_t m_nGuardianGrenadesToGiveBots; // 0xD28 - 0xD28
   std::int32_t m_nNumHeaviesToSpawn; // 0xD2C - 0xD2C
   std::uint32_t m_numGlobalGiftsGiven; // 0xD30 - 0xD30
   std::uint32_t m_numGlobalGifters; // 0xD34 - 0xD34
   std::uint32_t m_numGlobalGiftsPeriodSeconds; // 0xD38 - 0xD38
   uint32 m_arrFeaturedGiftersAccounts[4]; // 0xD3C - 0xD3C
   uint32 m_arrFeaturedGiftersGifts[4]; // 0xD4C - 0xD4C
   uint16 m_arrProhibitedItemIndices[100]; // 0xD5C - 0xD5C
   uint32 m_arrTournamentActiveCasterAccounts[4]; // 0xE24 - 0xE24
   std::int32_t m_numBestOfMaps; // 0xE34 - 0xE34
   std::int32_t m_nHalloweenMaskListSeed; // 0xE38 - 0xE38
   bool m_bBombDropped; // 0xE3C - 0xE3C
   bool m_bBombPlanted; // 0xE3D - 0xE3D
   std::int32_t m_iRoundWinStatus; // 0xE40 - 0xE40
   std::int32_t m_eRoundWinReason; // 0xE44 - 0xE44
   bool m_bTCantBuy; // 0xE48 - 0xE48
   bool m_bCTCantBuy; // 0xE49 - 0xE49
   GameTime_t m_flGuardianBuyUntilTime; // 0xE4C - 0xE4C
   int32 m_iMatchStats_RoundResults[30]; // 0xE50 - 0xE50
   int32 m_iMatchStats_PlayersAlive_CT[30]; // 0xEC8 - 0xEC8
   int32 m_iMatchStats_PlayersAlive_T[30]; // 0xF40 - 0xF40
   float32 m_TeamRespawnWaveTimes[32]; // 0xFB8 - 0xFB8
   GameTime_t m_flNextRespawnWave[32]; // 0x1038 - 0x1038
   std::int32_t m_nServerQuestID; // 0x10B8 - 0x10B8
   bool m_bDontIncrementCoopWave; // 0x10BC - 0x10BC
   bool m_bSpawnedTerrorHuntHeavy; // 0x10BD - 0x10BD
   int32 m_nEndMatchMapGroupVoteTypes[10]; // 0x10C0 - 0x10C0
   int32 m_nEndMatchMapGroupVoteOptions[10]; // 0x10E8 - 0x10E8
   std::int32_t m_nEndMatchMapVoteWinner; // 0x1110 - 0x1110
   std::int32_t m_iNumConsecutiveCTLoses; // 0x1114 - 0x1114
   std::int32_t m_iNumConsecutiveTerroristLoses; // 0x1118 - 0x1118
   bool m_bHasHostageBeenTouched; // 0x1138 - 0x1138
   GameTime_t m_flIntermissionStartTime; // 0x113C - 0x113C
   GameTime_t m_flIntermissionEndTime; // 0x1140 - 0x1140
   bool m_bLevelInitialized; // 0x1144 - 0x1144
   std::int32_t m_iTotalRoundsPlayed; // 0x1148 - 0x1148
   std::int32_t m_iUnBalancedRounds; // 0x114C - 0x114C
   bool m_endMatchOnRoundReset; // 0x1150 - 0x1150
   bool m_endMatchOnThink; // 0x1151 - 0x1151
   std::int32_t m_iFreezeTime; // 0x1154 - 0x1154
   std::int32_t m_iNumTerrorist; // 0x1158 - 0x1158
   std::int32_t m_iNumCT; // 0x115C - 0x115C
   std::int32_t m_iNumSpawnableTerrorist; // 0x1160 - 0x1160
   std::int32_t m_iNumSpawnableCT; // 0x1164 - 0x1164
   CUtlVector< int32 > m_arrSelectedHostageSpawnIndices; // 0x1168 - 0x1168
   bool m_bFirstConnected; // 0x1180 - 0x1180
   bool m_bCompleteReset; // 0x1181 - 0x1181
   bool m_bPickNewTeamsOnReset; // 0x1182 - 0x1182
   bool m_bScrambleTeamsOnRestart; // 0x1183 - 0x1183
   bool m_bSwapTeamsOnRestart; // 0x1184 - 0x1184
   CUtlVector< int32 > m_nEndMatchTiedVotes; // 0x1190 - 0x1190
   bool m_bNeedToAskPlayersForContinueVote; // 0x11AC - 0x11AC
   std::uint32_t m_numQueuedMatchmakingAccounts; // 0x11B0 - 0x11B0
   char* m_pQueuedMatchmakingReservationString; // 0x11B8 - 0x11B8
   std::uint32_t m_numTotalTournamentDrops; // 0x11C0 - 0x11C0
   std::uint32_t m_numSpectatorsCountMax; // 0x11C4 - 0x11C4
   std::uint32_t m_numSpectatorsCountMaxTV; // 0x11C8 - 0x11C8
   std::uint32_t m_numSpectatorsCountMaxLnk; // 0x11CC - 0x11CC
   bool m_bForceTeamChangeSilent; // 0x11D8 - 0x11D8
   bool m_bLoadingRoundBackupData; // 0x11D9 - 0x11D9
   std::int32_t m_nMatchInfoShowType; // 0x1210 - 0x1210
   std::float_t m_flMatchInfoDecidedTime; // 0x1214 - 0x1214
   std::float_t m_flCoopRespawnAndHealTime; // 0x1230 - 0x1230
   std::int32_t m_coopBonusCoinsFound; // 0x1234 - 0x1234
   bool m_coopBonusPistolsOnly; // 0x1238 - 0x1238
   bool m_coopPlayersInDeploymentZone; // 0x1239 - 0x1239
   bool m_coopMissionDeadPlayerRespawnEnabled; // 0x123A - 0x123A
   std::int32_t mTeamDMLastWinningTeamNumber; // 0x123C - 0x123C
   std::float_t mTeamDMLastThinkTime; // 0x1240 - 0x1240
   std::float_t m_flTeamDMLastAnnouncementTime; // 0x1244 - 0x1244
   std::int32_t m_iAccountTerrorist; // 0x1248 - 0x1248
   std::int32_t m_iAccountCT; // 0x124C - 0x124C
   std::int32_t m_iSpawnPointCount_Terrorist; // 0x1250 - 0x1250
   std::int32_t m_iSpawnPointCount_CT; // 0x1254 - 0x1254
   std::int32_t m_iMaxNumTerrorists; // 0x1258 - 0x1258
   std::int32_t m_iMaxNumCTs; // 0x125C - 0x125C
   std::int32_t m_iLoserBonus; // 0x1260 - 0x1260
   std::int32_t m_iLoserBonusMostRecentTeam; // 0x1264 - 0x1264
   std::float_t m_tmNextPeriodicThink; // 0x1268 - 0x1268
   bool m_bVoiceWonMatchBragFired; // 0x126C - 0x126C
   std::float_t m_fWarmupNextChatNoticeTime; // 0x1270 - 0x1270
   std::int32_t m_iHostagesRescued; // 0x1278 - 0x1278
   std::int32_t m_iHostagesTouched; // 0x127C - 0x127C
   std::float_t m_flNextHostageAnnouncement; // 0x1280 - 0x1280
   bool m_bNoTerroristsKilled; // 0x1284 - 0x1284
   bool m_bNoCTsKilled; // 0x1285 - 0x1285
   bool m_bNoEnemiesKilled; // 0x1286 - 0x1286
   bool m_bCanDonateWeapons; // 0x1287 - 0x1287
   std::float_t m_firstKillTime; // 0x128C - 0x128C
   std::float_t m_firstBloodTime; // 0x1294 - 0x1294
   bool m_hostageWasInjured; // 0x12B0 - 0x12B0
   bool m_hostageWasKilled; // 0x12B1 - 0x12B1
   bool m_bVoteCalled; // 0x12C0 - 0x12C0
   bool m_bServerVoteOnReset; // 0x12C1 - 0x12C1
   std::float_t m_flVoteCheckThrottle; // 0x12C4 - 0x12C4
   bool m_bBuyTimeEnded; // 0x12C8 - 0x12C8
   std::int32_t m_nLastFreezeEndBeep; // 0x12CC - 0x12CC
   std::int32_t m_iHaveEscaped; // 0x12D0 - 0x12D0
   bool m_bMapHasEscapeZone; // 0x12D4 - 0x12D4
   std::int32_t m_iNumEscapers; // 0x12D8 - 0x12D8
   std::int32_t m_iNumEscapeRounds; // 0x12DC - 0x12DC
   bool m_bTargetBombed; // 0x12E0 - 0x12E0
   bool m_bBombDefused; // 0x12E1 - 0x12E1
   bool m_bMapHasBombZone; // 0x12E2 - 0x12E2
   bool m_bGunGameRespawnWithBomb; // 0x12E3 - 0x12E3
   std::float_t m_fGunGameBombRespawnTimer; // 0x12E4 - 0x12E4
   Vector m_vecMainCTSpawnPos; // 0x1304 - 0x1304
   CUtlVector< SpawnPoint* > m_CTSpawnPointsMasterList; // 0x1310 - 0x1310
   CUtlVector< SpawnPoint* > m_TerroristSpawnPointsMasterList; // 0x1328 - 0x1328
   std::int32_t m_iNextCTSpawnPoint; // 0x1340 - 0x1340
   std::int32_t m_iNextTerroristSpawnPoint; // 0x1344 - 0x1344
   CUtlVector< SpawnPoint* > m_CTSpawnPoints; // 0x1348 - 0x1348
   CUtlVector< SpawnPoint* > m_TerroristSpawnPoints; // 0x1360 - 0x1360
   bool m_bIsUnreservedGameServer; // 0x1378 - 0x1378
   std::float_t m_fAutobalanceDisplayTime; // 0x137C - 0x137C
   bool m_bAllowWeaponSwitch; // 0x15E8 - 0x15E8
   bool m_bRoundTimeWarningTriggered; // 0x15E9 - 0x15E9
   GameTime_t m_phaseChangeAnnouncementTime; // 0x15EC - 0x15EC
   std::float_t m_fNextUpdateTeamClanNamesTime; // 0x15F0 - 0x15F0
   GameTime_t m_flLastThinkTime; // 0x15F4 - 0x15F4
   std::float_t m_fAccumulatedRoundOffDamage; // 0x15F8 - 0x15F8
   std::int32_t m_nShorthandedBonusLastEvalRound; // 0x15FC - 0x15FC
   bool m_bHasTriggeredRoundStartMusic; // 0x1860 - 0x1860
   bool m_bHasTriggeredCoopSpawnReset; // 0x1861 - 0x1861
   bool m_bSwitchingTeamsAtRoundReset; // 0x1862 - 0x1862
   std::int32_t m_iMaxGunGameProgressiveWeaponIndex; // 0x1864 - 0x1864
   CSurvivalGameRules m_SurvivalRules; // 0x1880 - 0x1880
   KeyValues3 m_BtGlobalBlackboard; // 0x3518 - 0x3518
   CHandle< CBaseEntity > m_hPlayerResource; // 0x3580 - 0x3580
   CRetakeGameRules m_RetakeRules; // 0x3588 - 0x3588
   std::int32_t m_GuardianBotSkillLevelMax; // 0x376C - 0x376C
   std::int32_t m_GuardianBotSkillLevelMin; // 0x3770 - 0x3770
   CUtlVector< int32 > m_arrTeamUniqueKillWeaponsMatch[4]; // 0x3778 - 0x3778
   bool m_bTeamLastKillUsedUniqueWeaponMatch[4]; // 0x37D8 - 0x37D8
   std::uint8_t m_nMatchEndCount; // 0x3800 - 0x3800
   bool m_bTeamIntroPeriod; // 0x3801 - 0x3801
   GameTime_t m_fTeamIntroPeriodEnd; // 0x3804 - 0x3804

}; // size - 0x3808


class CCSGameRulesProxy : public CGameRulesProxy
{
public:

   CCSGameRules* m_pGameRules; // 0x4A0 - 0x4A0

}; // size - 0x4A8


class CCSObserverPawn : public CCSPlayerPawnBase
{
public:


}; // size - 0x1598


class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:

   std::int32_t m_iAccount; // 0x40 - 0x40
   std::int32_t m_iStartAccount; // 0x44 - 0x44
   std::int32_t m_iTotalCashSpent; // 0x48 - 0x48
   std::int32_t m_iCashSpentThisRound; // 0x4C - 0x4C
   std::int32_t m_nPreviousAccount; // 0x50 - 0x50

}; // size - 0x58


class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:

   bool m_bReceivesMoneyNextRound; // 0x40 - 0x40
   std::int32_t m_iAccountMoneyEarnedForNextRound; // 0x44 - 0x44
   std::int32_t m_iAccount; // 0x48 - 0x48
   std::int32_t m_iStartAccount; // 0x4C - 0x4C
   std::int32_t m_iTotalCashSpent; // 0x50 - 0x50
   std::int32_t m_iCashSpentThisRound; // 0x54 - 0x54

}; // size - 0x58


class CCSPlayerPawnBase : public CBasePlayerPawn
{
public:

   CTouchExpansionComponent m_CTouchExpansionComponent; // 0xAB0 - 0xAB0
   CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xAD0 - 0xAD0
   CCSPlayer_ViewModelServices* m_pViewModelServices; // 0xAD8 - 0xAD8
   std::uint32_t m_iDisplayHistoryBits; // 0xAE0 - 0xAE0
   std::float_t m_flLastAttackedTeammate; // 0xAE4 - 0xAE4
   CHandle< CCSPlayerController > m_hOriginalController; // 0xAE8 - 0xAE8
   GameTime_t m_blindUntilTime; // 0xAEC - 0xAEC
   GameTime_t m_blindStartTime; // 0xAF0 - 0xAF0
   GameTime_t m_allowAutoFollowTime; // 0xAF4 - 0xAF4
   EntitySpottedState_t m_entitySpottedState; // 0xAF8 - 0xAF8
   std::int32_t m_nSpotRules; // 0xB10 - 0xB10
   std::float_t m_flTimeOfLastInjury; // 0xB14 - 0xB14
   RelativeDamagedDirection_t m_nRelativeDirectionOfLastInjury; // 0xB18 - 0xB18
   CSPlayerState m_iPlayerState; // 0xB1C - 0xB1C
   CountdownTimer m_chickenIdleSoundTimer; // 0xB28 - 0xB28
   CountdownTimer m_chickenJumpSoundTimer; // 0xB40 - 0xB40
   Vector m_vecLastBookmarkedPosition; // 0xBF8 - 0xBF8
   std::float_t m_flLastDistanceTraveledNotice; // 0xC04 - 0xC04
   std::float_t m_flAccumulatedDistanceTraveled; // 0xC08 - 0xC08
   std::float_t m_flLastFriendlyFireDamageReductionRatio; // 0xC0C - 0xC0C
   bool m_bRespawning; // 0xC10 - 0xC10
   std::int32_t m_iNumGunGameTRBombTotalPoints; // 0xC14 - 0xC14
   bool m_bShouldProgressGunGameTRBombModeWeapon; // 0xC18 - 0xC18
   std::int32_t m_nLastPickupPriority; // 0xC1C - 0xC1C
   std::float_t m_flLastPickupPriorityTime; // 0xC20 - 0xC20
   bool m_passiveItems[4]; // 0xC24 - 0xC24
   bool m_bIsScoped; // 0xC28 - 0xC28
   bool m_bIsWalking; // 0xC29 - 0xC29
   bool m_bResumeZoom; // 0xC2A - 0xC2A
   bool m_bIsDefusing; // 0xC2B - 0xC2B
   bool m_bIsGrabbingHostage; // 0xC2C - 0xC2C
   CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0xC30 - 0xC30
   GameTime_t m_fImmuneToGunGameDamageTime; // 0xC34 - 0xC34
   bool m_bGunGameImmunity; // 0xC38 - 0xC38
   bool m_bMadeFinalGunGameProgressiveKill; // 0xC39 - 0xC39
   std::int32_t m_iGunGameProgressiveWeaponIndex; // 0xC3C - 0xC3C
   std::int32_t m_iNumGunGameTRKillPoints; // 0xC40 - 0xC40
   std::int32_t m_iNumGunGameKillsWithCurrentWeapon; // 0xC44 - 0xC44
   std::uint32_t m_unTotalRoundDamageDealt; // 0xC48 - 0xC48
   std::float_t m_fMolotovDamageTime; // 0xC4C - 0xC4C
   bool m_bHasMovedSinceSpawn; // 0xC50 - 0xC50
   bool m_bCanMoveDuringFreezePeriod; // 0xC51 - 0xC51
   bool m_isCurrentGunGameLeader; // 0xC52 - 0xC52
   bool m_isCurrentGunGameTeamLeader; // 0xC53 - 0xC53
   std::float_t m_flGuardianTooFarDistFrac; // 0xC54 - 0xC54
   std::float_t m_flNextGuardianTooFarHurtTime; // 0xC58 - 0xC58
   GameTime_t m_flDetectedByEnemySensorTime; // 0xC5C - 0xC5C
   bool m_bIsSpawnRappelling; // 0xC60 - 0xC60
   Vector m_vecSpawnRappellingRopeOrigin; // 0xC64 - 0xC64
   std::int32_t m_nSurvivalTeam; // 0xC70 - 0xC70
   CHandle< CCSPlayerPawnBase > m_hSurvivalAssassinationTarget; // 0xC74 - 0xC74
   std::int32_t m_nCompletedSurvivalAssassinations; // 0xC78 - 0xC78
   std::float_t m_flDealtDamageToEnemyMostRecentTimestamp; // 0xC7C - 0xC7C
   std::float_t m_flHealthShotBoostExpirationTime; // 0xC80 - 0xC80
   GameTime_t m_flLastEquippedHelmetTime; // 0xC84 - 0xC84
   GameTime_t m_flLastEquippedArmorTime; // 0xC88 - 0xC88
   std::int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0xC8C - 0xC8C
   bool m_bResetArmorNextSpawn; // 0xC90 - 0xC90
   std::float_t m_flLastExoJumpTime; // 0xC94 - 0xC94
   GameTime_t m_flLastBumpMineBumpTime; // 0xC98 - 0xC98
   bool m_bEscaped; // 0xCA8 - 0xCA8
   bool m_bIsVIP; // 0xCA9 - 0xCA9
   std::int32_t m_iNumSpawns; // 0xCAC - 0xCAC
   std::int32_t m_iShouldHaveCash; // 0xCB0 - 0xCB0
   bool m_bJustKilledTeammate; // 0xCB4 - 0xCB4
   bool m_bPunishedForTK; // 0xCB5 - 0xCB5
   bool m_bInvalidSteamLogonDelayed; // 0xCB6 - 0xCB6
   std::int32_t m_iTeamKills; // 0xCB8 - 0xCB8
   GameTime_t m_flLastAction; // 0xCBC - 0xCBC
   float32 m_flNameChangeHistory[5]; // 0xCC0 - 0xCC0
   std::float_t m_fLastGivenDefuserTime; // 0xCD4 - 0xCD4
   std::float_t m_fLastGivenBombTime; // 0xCD8 - 0xCD8
   bool m_bHasNightVision; // 0xCDC - 0xCDC
   bool m_bNightVisionOn; // 0xCDD - 0xCDD
   std::float_t m_fNextRadarUpdateTime; // 0xCE0 - 0xCE0
   std::float_t m_flLastMoneyUpdateTime; // 0xCE4 - 0xCE4
   char m_MenuStringBuffer[1024]; // 0xCE8 - 0xCE8
   CHandle< CBaseEntity > m_pIntroCamera; // 0x10E8 - 0x10E8
   std::float_t m_fIntroCamTime; // 0x10EC - 0x10EC
   std::int32_t m_nMyCollisionGroup; // 0x10F0 - 0x10F0
   bool m_bInBombZone; // 0x10F4 - 0x10F4
   bool m_bInBuyZone; // 0x10F5 - 0x10F5
   bool m_bInNoDefuseArea; // 0x10F6 - 0x10F6
   bool m_bKilledByTaser; // 0x10F7 - 0x10F7
   std::int32_t m_iMoveState; // 0x10F8 - 0x10F8
   CStrongHandle< InfoForResourceTypeCModel > m_nPreviousModelIndex; // 0x1100 - 0x1100
   GameTime_t m_grenadeParameterStashTime; // 0x1108 - 0x1108
   bool m_bGrenadeParametersStashed; // 0x110C - 0x110C
   QAngle m_angStashedShootAngles; // 0x1110 - 0x1110
   Vector m_vecStashedGrenadeThrowPosition; // 0x111C - 0x111C
   Vector m_vecStashedVelocity; // 0x1128 - 0x1128
   QAngle m_angShootAngleHistory[2]; // 0x1134 - 0x1134
   Vector m_vecThrowPositionHistory[2]; // 0x114C - 0x114C
   Vector m_vecVelocityHistory[2]; // 0x1164 - 0x1164
   std::uint16_t m_nCharacterDefIndex; // 0x117C - 0x117C
   bool m_bDiedAirborne; // 0x117E - 0x117E
   CEntityIndex m_iBombSiteIndex; // 0x1180 - 0x1180
   std::int32_t m_nWhichBombZone; // 0x1184 - 0x1184
   bool m_bInBombZoneTrigger; // 0x1188 - 0x1188
   bool m_bWasInBombZoneTrigger; // 0x1189 - 0x1189
   bool m_bWasInHostageRescueZone; // 0x118A - 0x118A
   bool m_bWasInBuyZone; // 0x118B - 0x118B
   bool m_bInHostageRescueZone; // 0x118C - 0x118C
   std::float_t m_flStamina; // 0x1190 - 0x1190
   std::int32_t m_iDirection; // 0x1194 - 0x1194
   std::int32_t m_iShotsFired; // 0x1198 - 0x1198
   std::int32_t m_ArmorValue; // 0x119C - 0x119C
   std::float_t m_flFlinchStack; // 0x11A0 - 0x11A0
   std::float_t m_flVelocityModifier; // 0x11A4 - 0x11A4
   std::float_t m_flGroundAccelLinearFracLastTime; // 0x11A8 - 0x11A8
   std::int32_t m_iHostagesKilled; // 0x11AC - 0x11AC
   Vector m_vecTotalBulletForce; // 0x11B0 - 0x11B0
   std::float_t m_flFlashDuration; // 0x11BC - 0x11BC
   std::float_t m_flFlashMaxAlpha; // 0x11C0 - 0x11C0
   std::float_t m_flProgressBarStartTime; // 0x11C4 - 0x11C4
   std::int32_t m_iProgressBarDuration; // 0x11C8 - 0x11C8
   bool m_bWaitForNoAttack; // 0x11CC - 0x11CC
   bool m_bIsRespawningForDMBonus; // 0x11CD - 0x11CD
   std::float_t m_flLowerBodyYawTarget; // 0x11D0 - 0x11D0
   bool m_bStrafing; // 0x11D4 - 0x11D4
   Vector m_lastStandingPos; // 0x11D8 - 0x11D8
   std::float_t m_ignoreLadderJumpTime; // 0x11E4 - 0x11E4
   CountdownTimer m_ladderSurpressionTimer; // 0x11E8 - 0x11E8
   Vector m_lastLadderNormal; // 0x1200 - 0x1200
   Vector m_lastLadderPos; // 0x120C - 0x120C
   QAngle m_thirdPersonHeading; // 0x1218 - 0x1218
   std::float_t m_flSlopeDropOffset; // 0x1224 - 0x1224
   std::float_t m_flSlopeDropHeight; // 0x1228 - 0x1228
   Vector m_vHeadConstraintOffset; // 0x122C - 0x122C
   std::int32_t m_iLastWeaponFireUsercmd; // 0x1240 - 0x1240
   QAngle m_angEyeAngles; // 0x1244 - 0x1244
   bool m_bVCollisionInitted; // 0x1250 - 0x1250
   Vector m_storedSpawnPosition; // 0x1254 - 0x1254
   QAngle m_storedSpawnAngle; // 0x1260 - 0x1260
   bool m_bIsSpawning; // 0x126C - 0x126C
   bool m_bHideTargetID; // 0x126D - 0x126D
   std::int32_t m_nNumDangerZoneDamageHits; // 0x1270 - 0x1270
   bool m_bHud_MiniScoreHidden; // 0x1274 - 0x1274
   bool m_bHud_RadarHidden; // 0x1275 - 0x1275
   CEntityIndex m_nLastKillerIndex; // 0x1278 - 0x1278
   std::int32_t m_nLastConcurrentKilled; // 0x127C - 0x127C
   std::int32_t m_nDeathCamMusic; // 0x1280 - 0x1280
   std::int32_t m_iAddonBits; // 0x1284 - 0x1284
   std::int32_t m_iPrimaryAddon; // 0x1288 - 0x1288
   std::int32_t m_iSecondaryAddon; // 0x128C - 0x128C
   std::int32_t m_nTeamDamageGivenForMatch; // 0x1290 - 0x1290
   bool m_bTDGaveProtectionWarning; // 0x1294 - 0x1294
   bool m_bTDGaveProtectionWarningThisRound; // 0x1295 - 0x1295
   std::float_t m_applyDeafnessTime; // 0x1298 - 0x1298
   std::float_t m_flLastTHWarningTime; // 0x129C - 0x129C
   CUtlStringToken m_currentDeafnessFilter; // 0x12A0 - 0x12A0
   CUtlVector< CHandle< CCSPlayerPawnBase > > m_enemyPlayersKilledThisRound; // 0x12A8 - 0x12A8
   std::int32_t m_NumEnemiesKilledThisSpawn; // 0x12C0 - 0x12C0
   std::int32_t m_maxNumEnemiesKillStreak; // 0x12C4 - 0x12C4
   std::int32_t m_NumEnemiesKilledThisRound; // 0x12C8 - 0x12C8
   std::int32_t m_NumEnemiesAtRoundStart; // 0x12CC - 0x12CC
   std::int32_t m_iRoundsWon; // 0x12D0 - 0x12D0
   bool m_bHasUsedDMBonusRespawn; // 0x12D4 - 0x12D4
   std::int32_t m_lastRoundResult; // 0x12D8 - 0x12D8
   bool m_wasNotKilledNaturally; // 0x12DC - 0x12DC
   uint32 m_vecPlayerPatchEconIndices[5]; // 0x12E0 - 0x12E0
   std::int32_t m_iDeathFlags; // 0x12F4 - 0x12F4
   CHandle< CChicken > m_hPet; // 0x12F8 - 0x12F8
   std::float_t m_flLastKnownAccumulatedWeaponEncumbrance; // 0x12FC - 0x12FC
   std::float_t m_flLastTimeComputedAccumulatedWeaponEncumbrance; // 0x1300 - 0x1300
   std::uint16_t m_unCurrentEquipmentValue; // 0x14D0 - 0x14D0
   std::uint16_t m_unRoundStartEquipmentValue; // 0x14D2 - 0x14D2
   std::uint16_t m_unFreezetimeEndEquipmentValue; // 0x14D4 - 0x14D4
   char m_szLastPlaceName[18]; // 0x14D6 - 0x14D6
   std::int32_t m_nSuicides; // 0x14E8 - 0x14E8
   std::int32_t m_nSurvivalTeamNumber; // 0x14EC - 0x14EC
   QAngle m_aimPunchAngle; // 0x14F0 - 0x14F0
   QAngle m_aimPunchAngleVel; // 0x14FC - 0x14FC
   std::int32_t m_aimPunchTickBase; // 0x1508 - 0x1508
   std::float_t m_aimPunchTickFraction; // 0x150C - 0x150C
   CUtlVector< QAngle > m_aimPunchCache; // 0x1510 - 0x1510
   bool m_bHasDeathInfo; // 0x1528 - 0x1528
   std::float_t m_flDeathInfoTime; // 0x152C - 0x152C
   Vector m_vecDeathInfoOrigin; // 0x1530 - 0x1530
   bool m_bKilledByHeadshot; // 0x153C - 0x153C
   std::int32_t m_LastHitBox; // 0x1540 - 0x1540
   std::int32_t m_LastHealth; // 0x1544 - 0x1544
   std::float_t m_flLastCollisionCeiling; // 0x1548 - 0x1548
   std::float_t m_flLastCollisionCeilingChangeTime; // 0x154C - 0x154C
   CUtlString m_strVOPrefix; // 0x1550 - 0x1550
   std::float_t m_flLandseconds; // 0x1558 - 0x1558
   CCSBot* m_pBot; // 0x1560 - 0x1560
   bool m_bBotAllowActive; // 0x1568 - 0x1568
   bool m_bCommittingSuicideOnTeamChange; // 0x1569 - 0x1569

}; // size - 0x1570


class CCSPlayerResource : public CBaseEntity
{
public:

   bool m_bHostageAlive[12]; // 0x4A0 - 0x4A0
   bool m_isHostageFollowingSomeone[12]; // 0x4AC - 0x4AC
   CEntityIndex m_iHostageEntityIDs[12]; // 0x4B8 - 0x4B8
   Vector m_bombsiteCenterA; // 0x4E8 - 0x4E8
   Vector m_bombsiteCenterB; // 0x4F4 - 0x4F4
   int32 m_hostageRescueX[4]; // 0x500 - 0x500
   int32 m_hostageRescueY[4]; // 0x510 - 0x510
   int32 m_hostageRescueZ[4]; // 0x520 - 0x520
   bool m_bEndMatchNextMapAllVoted; // 0x530 - 0x530
   bool m_foundGoalPositions; // 0x531 - 0x531

}; // size - 0x538


class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
public:

   CBasePlayerWeapon* m_lastWeaponBeforeC4AutoSwitch; // 0x230 - 0x230
   bool m_bIsRescuing; // 0x268 - 0x268
   int32 m_iWeaponPurchasesThisMatch[256]; // 0x26C - 0x26C
   int32 m_iWeaponPurchasesThisRound[256]; // 0x66C - 0x66C

}; // size - 0xA70


class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
public:

   bool m_bIsRescuing; // 0x40 - 0x40
   int32 m_iWeaponPurchasesThisMatch[256]; // 0x44 - 0x44
   int32 m_iWeaponPurchasesThisRound[256]; // 0x444 - 0x444

}; // size - 0x848


class CCSPlayer_BulletServices : public CPlayerPawnComponent
{
public:

   std::int32_t m_totalHitsOnServer; // 0x40 - 0x40

}; // size - 0x48


class CCSPlayer_BulletServices : public CPlayerPawnComponent
{
public:

   std::int32_t m_totalHitsOnServer; // 0x40 - 0x40

}; // size - 0x80


class CCSPlayer_GlowServices : public CPlayerPawnComponent
{
public:


}; // size - 0x70


class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:

   GameTime_t m_flPlayerPingTokens[5]; // 0x40 - 0x40
   CHandle< CBaseEntity > m_hPlayerPing; // 0x54 - 0x54

}; // size - 0x58


class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:

   CHandle< C_BaseEntity > m_hPlayerPing; // 0x40 - 0x40

}; // size - 0x48


class CCSPropExplodingBarrel : public CPhysicsProp
{
public:

   CEntityHandle m_hBarrelTop; // 0xB08 - 0xB08
   bool m_bExploded; // 0xB0C - 0xB0C
   std::int32_t m_nAccumulatedDamage; // 0xB10 - 0xB10

}; // size - 0xB18


class CCSPropExplodingBarrelTop : public CPhysicsProp
{
public:

   std::float_t m_flOverrideAlpha; // 0xB00 - 0xB00

}; // size - 0xB08


class CCachedPose
{
public:

   CUtlVector< CTransform > m_transforms; // 0x8 - 0x8
   CUtlVector< float32 > m_morphWeights; // 0x20 - 0x20
   HSequence m_hSequence; // 0x38 - 0x38
   std::float_t m_flCycle; // 0x3C - 0x3C

}; // size - 0x40


class CChicken : public CDynamicProp
{
public:

   CAttributeContainer m_AttributeManager; // 0xAB8 - 0xAB8
   std::uint32_t m_OriginalOwnerXuidLow; // 0xD80 - 0xD80
   std::uint32_t m_OriginalOwnerXuidHigh; // 0xD84 - 0xD84
   CountdownTimer m_updateTimer; // 0xD88 - 0xD88
   Vector m_stuckAnchor; // 0xDA0 - 0xDA0
   CountdownTimer m_stuckTimer; // 0xDB0 - 0xDB0
   CountdownTimer m_collisionStuckTimer; // 0xDC8 - 0xDC8
   bool m_isOnGround; // 0xDE0 - 0xDE0
   ChickenActivity m_activity; // 0xDE4 - 0xDE4
   CountdownTimer m_activityTimer; // 0xDE8 - 0xDE8
   std::float_t m_turnRate; // 0xE00 - 0xE00
   CHandle< CBaseEntity > m_fleeFrom; // 0xE04 - 0xE04
   CountdownTimer m_moveRateThrottleTimer; // 0xE08 - 0xE08
   CountdownTimer m_startleTimer; // 0xE20 - 0xE20
   CountdownTimer m_vocalizeTimer; // 0xE38 - 0xE38
   GameTime_t m_flWhenZombified; // 0xE50 - 0xE50
   bool m_jumpedThisFrame; // 0xE54 - 0xE54
   CHandle< CCSPlayerPawnBase > m_leader; // 0xE58 - 0xE58
   CountdownTimer m_reuseTimer; // 0xE60 - 0xE60
   bool m_hasBeenUsed; // 0xE78 - 0xE78
   CountdownTimer m_jumpTimer; // 0xE80 - 0xE80
   std::float_t m_flLastJumpTime; // 0xE98 - 0xE98
   bool m_bInJump; // 0xE9C - 0xE9C
   bool m_isWaitingForLeader; // 0xE9D - 0xE9D
   CountdownTimer m_repathTimer; // 0x2EA8 - 0x2EA8
   CountdownTimer m_inhibitDoorTimer; // 0x2EC0 - 0x2EC0
   CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2F50 - 0x2F50
   Vector m_vecPathGoal; // 0x2F70 - 0x2F70
   std::float_t m_flActiveFollowStartTime; // 0x2F7C - 0x2F7C
   CountdownTimer m_followMinuteTimer; // 0x2F80 - 0x2F80
   Vector m_vecLastEggPoopPosition; // 0x2F98 - 0x2F98
   CUtlVector< CHandle< CBaseEntity > > m_vecEggsPooped; // 0x2FA8 - 0x2FA8
   CountdownTimer m_BlockDirectionTimer; // 0x2FC8 - 0x2FC8

}; // size - 0x2FE0


class CChoiceNodeChild
{
public:

   CAnimNodeConnection m_inputConnection; // 0x0 - 0x0
   CUtlString m_name; // 0x8 - 0x8
   std::float_t m_weight; // 0x10 - 0x10
   std::float_t m_blendTime; // 0x14 - 0x14

}; // size - 0x18


class CClientAlphaProperty : public IClientAlphaProperty
{
public:

   std::uint8_t m_nRenderFX; // 0x10 - 0x10
   std::uint8_t m_nRenderMode; // 0x11 - 0x11
   bitfield:1 m_bAlphaOverride; // 0x0 - 0x0
   bitfield:1 m_bShadowAlphaOverride; // 0x0 - 0x0
   bitfield:6 m_nReserved; // 0x0 - 0x0
   std::uint8_t m_nAlpha; // 0x13 - 0x13
   std::uint16_t m_nDesyncOffset; // 0x14 - 0x14
   std::uint16_t m_nReserved2; // 0x16 - 0x16
   std::uint16_t m_nDistFadeStart; // 0x18 - 0x18
   std::uint16_t m_nDistFadeEnd; // 0x1A - 0x1A
   std::float_t m_flFadeScale; // 0x1C - 0x1C
   GameTime_t m_flRenderFxStartTime; // 0x20 - 0x20
   std::float_t m_flRenderFxDuration; // 0x24 - 0x24

}; // size - 0x30


class CConditionContainer
{
public:

   CUtlVector< CSmartPtr< CConditionBase > > m_conditions; // 0x10 - 0x10

}; // size - 0x38


class CConstraintTarget
{
public:

   Quaternion m_qOffset; // 0x20 - 0x20
   Vector m_vOffset; // 0x30 - 0x30
   std::uint32_t m_nBoneHash; // 0x3C - 0x3C
   CUtlString m_sName; // 0x40 - 0x40
   std::float_t m_flWeight; // 0x48 - 0x48
   bool m_bIsAttachment; // 0x59 - 0x59

}; // size - 0x60


class CContainerAnimNodeBase : public CAnimNodeBase
{
public:

   AnimNodeID m_inputNodeID; // 0x48 - 0x48
   AnimNodeID m_outputNodeID; // 0x4C - 0x4C
   CUtlHashtable< AnimNodeOutputID, CAnimNodeConnection > m_inputConnectionMap; // 0x50 - 0x50

}; // size - 0x70


class CCredits : public CPointEntity
{
public:

   CEntityIOOutput m_OnCreditsDone; // 0x4A0 - 0x4A0
   bool m_bRolledOutroCredits; // 0x4C8 - 0x4C8
   std::float_t m_flLogoLength; // 0x4CC - 0x4CC

}; // size - 0x4D0


class CCurrentRotationVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:


}; // size - 0x50


class CCycleBase
{
public:

   std::float_t m_flCycle; // 0x0 - 0x0

}; // size - 0x4


class CDSPPresetMixgroupModifierTable
{
public:

   CUtlVector< CDspPresetModifierList > m_table; // 0x0 - 0x0

}; // size - 0x18


class CDamageRecord
{
public:

   CHandle< C_CSPlayerPawnBase > m_PlayerDamager; // 0x28 - 0x28
   CHandle< C_CSPlayerPawnBase > m_PlayerRecipient; // 0x2C - 0x2C
   CHandle< CCSPlayerController > m_hPlayerControllerDamager; // 0x30 - 0x30
   CHandle< CCSPlayerController > m_hPlayerControllerRecipient; // 0x34 - 0x34
   CUtlString m_szPlayerDamagerName; // 0x38 - 0x38
   CUtlString m_szPlayerRecipientName; // 0x40 - 0x40
   std::uint64_t m_DamagerXuid; // 0x48 - 0x48
   std::uint64_t m_RecipientXuid; // 0x50 - 0x50
   std::int32_t m_iDamage; // 0x58 - 0x58
   std::int32_t m_iActualHealthRemoved; // 0x5C - 0x5C
   std::int32_t m_iNumHits; // 0x60 - 0x60
   std::int32_t m_iLastBulletUpdate; // 0x64 - 0x64
   bool m_bIsOtherEnemy; // 0x68 - 0x68
   EKillTypes_t m_killType; // 0x69 - 0x69

}; // size - 0x70


class CDamageRecord
{
public:

   CHandle< CCSPlayerPawnBase > m_PlayerDamager; // 0x28 - 0x28
   CHandle< CCSPlayerPawnBase > m_PlayerRecipient; // 0x2C - 0x2C
   CHandle< CCSPlayerController > m_hPlayerControllerDamager; // 0x30 - 0x30
   CHandle< CCSPlayerController > m_hPlayerControllerRecipient; // 0x34 - 0x34
   CUtlString m_szPlayerDamagerName; // 0x38 - 0x38
   CUtlString m_szPlayerRecipientName; // 0x40 - 0x40
   std::uint64_t m_DamagerXuid; // 0x48 - 0x48
   std::uint64_t m_RecipientXuid; // 0x50 - 0x50
   std::int32_t m_iDamage; // 0x58 - 0x58
   std::int32_t m_iActualHealthRemoved; // 0x5C - 0x5C
   std::int32_t m_iNumHits; // 0x60 - 0x60
   std::int32_t m_iLastBulletUpdate; // 0x64 - 0x64
   bool m_bIsOtherEnemy; // 0x68 - 0x68
   EKillTypes_t m_killType; // 0x69 - 0x69

}; // size - 0x70


class CDebugHistory : public CBaseEntity
{
public:

   std::int32_t m_nNpcEvents; // 0x1F44E0 - 0x1F44E0

}; // size - 0x1F5488


class CDecoyProjectile : public CBaseCSGrenadeProjectile
{
public:

   std::int32_t m_shotsRemaining; // 0x9A8 - 0x9A8
   GameTime_t m_fExpireTime; // 0x9AC - 0x9AC
   std::uint16_t m_decoyWeaponDefIndex; // 0x9B8 - 0x9B8

}; // size - 0x9C0


class CDirectPlaybackAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x38
   bool m_bFinishEarly; // 0x40 - 0x40
   bool m_bResetOnFinish; // 0x41 - 0x41

}; // size - 0x48


class CDirectPlaybackUpdateNode : public CUnaryUpdateNode
{
public:

   bool m_bFinishEarly; // 0x6C - 0x6C
   bool m_bResetOnFinish; // 0x6D - 0x6D
   CUtlVector< CDirectPlaybackTagData > m_allTags; // 0x70 - 0x70

}; // size - 0x88


class CDirectionalBlendUpdateNode : public CLeafUpdateNode
{
public:

   HSequence m_hSequences[8]; // 0x5C - 0x5C
   CAnimInputDamping m_damping; // 0x80 - 0x80
   AnimValueSource m_blendValueSource; // 0x90 - 0x90
   CAnimParamHandle m_paramIndex; // 0x94 - 0x94
   std::float_t m_playbackSpeed; // 0x98 - 0x98
   std::float_t m_duration; // 0x9C - 0x9C
   bool m_bLoop; // 0xA0 - 0xA0
   bool m_bLockBlendOnReset; // 0xA1 - 0xA1

}; // size - 0xA8


class CDrawCullingData
{
public:

   Vector m_vConeApex; // 0x0 - 0x0
   int8 m_ConeAxis[3]; // 0xC - 0xC
   std::int8_t m_ConeCutoff; // 0xF - 0xF

}; // size - 0x10


class CDronegun : public CBaseAnimGraph
{
public:

   Vector m_vecAttentionTarget; // 0x830 - 0x830
   Vector m_vecTargetOffset; // 0x83C - 0x83C
   bool m_bHasTarget; // 0x848 - 0x848
   Vector m_vecAttentionCurrent; // 0x84C - 0x84C
   std::int32_t m_nPoseParamPitch; // 0x858 - 0x858
   std::int32_t m_nPoseParamYaw; // 0x85C - 0x85C
   bool m_bVarInit; // 0x860 - 0x860
   GameTime_t m_flDisorientEndTime; // 0x864 - 0x864
   CHandle< CBaseEntity > m_hEnvGunfire; // 0x880 - 0x880
   GameTime_t m_flLastShootTime; // 0x884 - 0x884
   GameTime_t m_flLastSound1; // 0x888 - 0x888
   GameTime_t m_flLastSound2; // 0x88C - 0x88C
   GameTime_t m_flLastSound3; // 0x890 - 0x890
   AttachmentHandle_t m_nAttachMuzzle; // 0x894 - 0x894

}; // size - 0x898


class CDynamicLight : public CBaseModelEntity
{
public:

   std::uint8_t m_ActualFlags; // 0x6F0 - 0x6F0
   std::uint8_t m_Flags; // 0x6F1 - 0x6F1
   std::uint8_t m_LightStyle; // 0x6F2 - 0x6F2
   bool m_On; // 0x6F3 - 0x6F3
   std::float_t m_Radius; // 0x6F4 - 0x6F4
   std::int32_t m_Exponent; // 0x6F8 - 0x6F8
   std::float_t m_InnerAngle; // 0x6FC - 0x6FC
   std::float_t m_OuterAngle; // 0x700 - 0x700
   std::float_t m_SpotRadius; // 0x704 - 0x704

}; // size - 0x708


class CDynamicPropAlias_dynamic_prop : public CDynamicProp
{
public:


}; // size - 0xA98


class CDynamicPropAlias_prop_dynamic_override : public CDynamicProp
{
public:


}; // size - 0xA98


class CEditableMotionGraph : public CMotionGraph
{
public:


}; // size - 0x58


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


class CEntityDissolve : public CBaseModelEntity
{
public:

   std::float_t m_flFadeInStart; // 0x6F0 - 0x6F0
   std::float_t m_flFadeInLength; // 0x6F4 - 0x6F4
   std::float_t m_flFadeOutModelStart; // 0x6F8 - 0x6F8
   std::float_t m_flFadeOutModelLength; // 0x6FC - 0x6FC
   std::float_t m_flFadeOutStart; // 0x700 - 0x700
   std::float_t m_flFadeOutLength; // 0x704 - 0x704
   GameTime_t m_flStartTime; // 0x708 - 0x708
   EntityDisolveType_t m_nDissolveType; // 0x70C - 0x70C
   Vector m_vDissolverOrigin; // 0x710 - 0x710
   std::uint32_t m_nMagnitude; // 0x71C - 0x71C

}; // size - 0x720


class CEnumAnimParameter : public CAnimParameterBase
{
public:

   std::uint8_t m_defaultValue; // 0x80 - 0x80
   CUtlVector< CUtlString > m_enumOptions; // 0x88 - 0x88

}; // size - 0xD0


class CEnvCombinedLightProbeVolume : public CBaseEntity
{
public:

   Color m_Color; // 0x1570 - 0x1570
   std::float_t m_flBrightness; // 0x1574 - 0x1574
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1578 - 0x1578
   bool m_bCustomCubemapTexture; // 0x1580 - 0x1580
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1588 - 0x1588
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1590 - 0x1590
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1598 - 0x1598
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x15A0 - 0x15A0
   Vector m_vBoxMins; // 0x15A8 - 0x15A8
   Vector m_vBoxMaxs; // 0x15B4 - 0x15B4
   CUtlSymbolLarge m_LightGroups; // 0x15C0 - 0x15C0
   bool m_bMoveable; // 0x15C8 - 0x15C8
   std::int32_t m_nHandshake; // 0x15CC - 0x15CC
   std::int32_t m_nEnvCubeMapArrayIndex; // 0x15D0 - 0x15D0
   std::int32_t m_nPriority; // 0x15D4 - 0x15D4
   bool m_bStartDisabled; // 0x15D8 - 0x15D8
   std::float_t m_flEdgeFadeDist; // 0x15DC - 0x15DC
   Vector m_vEdgeFadeDists; // 0x15E0 - 0x15E0
   std::int32_t m_nLightProbeSizeX; // 0x15EC - 0x15EC
   std::int32_t m_nLightProbeSizeY; // 0x15F0 - 0x15F0
   std::int32_t m_nLightProbeSizeZ; // 0x15F4 - 0x15F4
   std::int32_t m_nLightProbeAtlasX; // 0x15F8 - 0x15F8
   std::int32_t m_nLightProbeAtlasY; // 0x15FC - 0x15FC
   std::int32_t m_nLightProbeAtlasZ; // 0x1600 - 0x1600
   bool m_bEnabled; // 0x1619 - 0x1619

}; // size - 0x1620


class CEnvCubemap : public CBaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x590 - 0x590
   bool m_bCustomCubemapTexture; // 0x598 - 0x598
   std::float_t m_flInfluenceRadius; // 0x59C - 0x59C
   Vector m_vBoxProjectMins; // 0x5A0 - 0x5A0
   Vector m_vBoxProjectMaxs; // 0x5AC - 0x5AC
   CUtlSymbolLarge m_LightGroups; // 0x5B8 - 0x5B8
   bool m_bMoveable; // 0x5C0 - 0x5C0
   std::int32_t m_nHandshake; // 0x5C4 - 0x5C4
   std::int32_t m_nEnvCubeMapArrayIndex; // 0x5C8 - 0x5C8
   std::int32_t m_nPriority; // 0x5CC - 0x5CC
   std::float_t m_flEdgeFadeDist; // 0x5D0 - 0x5D0
   Vector m_vEdgeFadeDists; // 0x5D4 - 0x5D4
   std::float_t m_flDiffuseScale; // 0x5E0 - 0x5E0
   bool m_bStartDisabled; // 0x5E4 - 0x5E4
   bool m_bDefaultEnvMap; // 0x5E5 - 0x5E5
   bool m_bDefaultSpecEnvMap; // 0x5E6 - 0x5E6
   bool m_bIndoorCubeMap; // 0x5E7 - 0x5E7
   bool m_bCopyDiffuseFromDefaultCubemap; // 0x5E8 - 0x5E8
   bool m_bEnabled; // 0x5F8 - 0x5F8

}; // size - 0x600


class CEnvCubemapBox : public CEnvCubemap
{
public:


}; // size - 0x600


class CEnvCubemapFog : public CBaseEntity
{
public:

   std::float_t m_flEndDistance; // 0x4A0 - 0x4A0
   std::float_t m_flStartDistance; // 0x4A4 - 0x4A4
   std::float_t m_flFogFalloffExponent; // 0x4A8 - 0x4A8
   bool m_bHeightFogEnabled; // 0x4AC - 0x4AC
   std::float_t m_flFogHeightWidth; // 0x4B0 - 0x4B0
   std::float_t m_flFogHeightEnd; // 0x4B4 - 0x4B4
   std::float_t m_flFogHeightStart; // 0x4B8 - 0x4B8
   std::float_t m_flFogHeightExponent; // 0x4BC - 0x4BC
   std::float_t m_flLODBias; // 0x4C0 - 0x4C0
   bool m_bActive; // 0x4C4 - 0x4C4
   bool m_bStartDisabled; // 0x4C5 - 0x4C5
   std::float_t m_flFogMaxOpacity; // 0x4C8 - 0x4C8
   std::int32_t m_nCubemapSourceType; // 0x4CC - 0x4CC
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x4D0 - 0x4D0
   CUtlSymbolLarge m_iszSkyEntity; // 0x4D8 - 0x4D8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x4E0 - 0x4E0
   bool m_bHasHeightFogEnd; // 0x4E8 - 0x4E8
   bool m_bFirstTime; // 0x4E9 - 0x4E9

}; // size - 0x4F0


class CEnvDecal : public CBaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x6F0 - 0x6F0
   std::float_t m_flWidth; // 0x6F8 - 0x6F8
   std::float_t m_flHeight; // 0x6FC - 0x6FC
   std::float_t m_flDepth; // 0x700 - 0x700
   std::uint32_t m_nRenderOrder; // 0x704 - 0x704
   bool m_bProjectOnWorld; // 0x708 - 0x708
   bool m_bProjectOnCharacters; // 0x709 - 0x709
   bool m_bProjectOnWater; // 0x70A - 0x70A
   std::float_t m_flDepthSortBias; // 0x70C - 0x70C

}; // size - 0x710


class CEnvDetailController : public CBaseEntity
{
public:

   std::float_t m_flFadeStartDist; // 0x4A0 - 0x4A0
   std::float_t m_flFadeEndDist; // 0x4A4 - 0x4A4

}; // size - 0x4A8


class CEnvEntityIgniter : public CBaseEntity
{
public:

   std::float_t m_flLifetime; // 0x4A0 - 0x4A0

}; // size - 0x4A8


class CEnvExplosion : public CModelPointEntity
{
public:

   std::int32_t m_iMagnitude; // 0x6F0 - 0x6F0
   std::float_t m_flPlayerDamage; // 0x6F4 - 0x6F4
   std::int32_t m_iRadiusOverride; // 0x6F8 - 0x6F8
   std::float_t m_flInnerRadius; // 0x6FC - 0x6FC
   std::int32_t m_spriteScale; // 0x700 - 0x700
   std::float_t m_flDamageForce; // 0x704 - 0x704
   CHandle< CBaseEntity > m_hInflictor; // 0x708 - 0x708
   std::int32_t m_iCustomDamageType; // 0x70C - 0x70C
   CUtlSymbolLarge m_iszExplosionType; // 0x718 - 0x718
   CUtlSymbolLarge m_iszCustomEffectName; // 0x720 - 0x720
   CUtlSymbolLarge m_iszCustomSoundName; // 0x728 - 0x728
   Class_T m_iClassIgnore; // 0x730 - 0x730
   Class_T m_iClassIgnore2; // 0x734 - 0x734
   CUtlSymbolLarge m_iszEntityIgnoreName; // 0x738 - 0x738
   CHandle< CBaseEntity > m_hEntityIgnore; // 0x740 - 0x740

}; // size - 0x748


class CEnvFade : public CLogicalEntity
{
public:

   Color m_fadeColor; // 0x4A0 - 0x4A0
   std::float_t m_Duration; // 0x4A4 - 0x4A4
   std::float_t m_HoldDuration; // 0x4A8 - 0x4A8
   CEntityIOOutput m_OnBeginFade; // 0x4B0 - 0x4B0

}; // size - 0x4D8


class CEnvFireSensor : public CBaseEntity
{
public:

   bool m_bEnabled; // 0x4A0 - 0x4A0
   bool m_bHeatAtLevel; // 0x4A1 - 0x4A1
   std::float_t m_radius; // 0x4A4 - 0x4A4
   std::float_t m_targetLevel; // 0x4A8 - 0x4A8
   std::float_t m_targetTime; // 0x4AC - 0x4AC
   std::float_t m_levelTime; // 0x4B0 - 0x4B0
   CEntityIOOutput m_OnHeatLevelStart; // 0x4B8 - 0x4B8
   CEntityIOOutput m_OnHeatLevelEnd; // 0x4E0 - 0x4E0

}; // size - 0x508


class CEnvLightProbeVolume : public CBaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1480 - 0x1480
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1488 - 0x1488
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1490 - 0x1490
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1498 - 0x1498
   Vector m_vBoxMins; // 0x14A0 - 0x14A0
   Vector m_vBoxMaxs; // 0x14AC - 0x14AC
   CUtlSymbolLarge m_LightGroups; // 0x14B8 - 0x14B8
   bool m_bMoveable; // 0x14C0 - 0x14C0
   std::int32_t m_nHandshake; // 0x14C4 - 0x14C4
   std::int32_t m_nPriority; // 0x14C8 - 0x14C8
   bool m_bStartDisabled; // 0x14CC - 0x14CC
   std::int32_t m_nLightProbeSizeX; // 0x14D0 - 0x14D0
   std::int32_t m_nLightProbeSizeY; // 0x14D4 - 0x14D4
   std::int32_t m_nLightProbeSizeZ; // 0x14D8 - 0x14D8
   std::int32_t m_nLightProbeAtlasX; // 0x14DC - 0x14DC
   std::int32_t m_nLightProbeAtlasY; // 0x14E0 - 0x14E0
   std::int32_t m_nLightProbeAtlasZ; // 0x14E4 - 0x14E4
   bool m_bEnabled; // 0x14F1 - 0x14F1

}; // size - 0x14F8


class CEnvSky : public CBaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x6F0 - 0x6F0
   bool m_bStartDisabled; // 0x6F8 - 0x6F8
   Color m_vTintColor; // 0x6F9 - 0x6F9
   std::float_t m_flBrightnessScale; // 0x700 - 0x700
   std::int32_t m_nFogType; // 0x704 - 0x704
   std::float_t m_flFogMinStart; // 0x708 - 0x708
   std::float_t m_flFogMinEnd; // 0x70C - 0x70C
   std::float_t m_flFogMaxStart; // 0x710 - 0x710
   std::float_t m_flFogMaxEnd; // 0x714 - 0x714
   bool m_bEnabled; // 0x718 - 0x718

}; // size - 0x738


class CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape
{
public:


}; // size - 0x538


class CEnvSoundscapeProxy : public CEnvSoundscape
{
public:

   CUtlSymbolLarge m_MainSoundscapeName; // 0x538 - 0x538

}; // size - 0x540


class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy
{
public:


}; // size - 0x540


class CEnvSoundscapeTriggerable : public CEnvSoundscape
{
public:


}; // size - 0x538


class CEnvSplash : public CPointEntity
{
public:

   std::float_t m_flScale; // 0x4A0 - 0x4A0

}; // size - 0x4A8


class CEnvTilt : public CPointEntity
{
public:

   std::float_t m_Duration; // 0x4A0 - 0x4A0
   std::float_t m_Radius; // 0x4A4 - 0x4A4
   std::float_t m_TiltTime; // 0x4A8 - 0x4A8
   GameTime_t m_stopTime; // 0x4AC - 0x4AC

}; // size - 0x4B0


class CEnvViewPunch : public CPointEntity
{
public:

   std::float_t m_flRadius; // 0x4A0 - 0x4A0
   QAngle m_angViewPunch; // 0x4A4 - 0x4A4

}; // size - 0x4B0


class CEnvVolumetricFogController : public CBaseEntity
{
public:

   std::float_t m_flScattering; // 0x4A0 - 0x4A0
   std::float_t m_flAnisotropy; // 0x4A4 - 0x4A4
   std::float_t m_flFadeSpeed; // 0x4A8 - 0x4A8
   std::float_t m_flDrawDistance; // 0x4AC - 0x4AC
   std::float_t m_flFadeInStart; // 0x4B0 - 0x4B0
   std::float_t m_flFadeInEnd; // 0x4B4 - 0x4B4
   std::float_t m_flIndirectStrength; // 0x4B8 - 0x4B8
   std::int32_t m_nIndirectTextureDimX; // 0x4BC - 0x4BC
   std::int32_t m_nIndirectTextureDimY; // 0x4C0 - 0x4C0
   std::int32_t m_nIndirectTextureDimZ; // 0x4C4 - 0x4C4
   Vector m_vBoxMins; // 0x4C8 - 0x4C8
   Vector m_vBoxMaxs; // 0x4D4 - 0x4D4
   bool m_bActive; // 0x4E0 - 0x4E0
   GameTime_t m_flStartAnisoTime; // 0x4E4 - 0x4E4
   GameTime_t m_flStartScatterTime; // 0x4E8 - 0x4E8
   GameTime_t m_flStartDrawDistanceTime; // 0x4EC - 0x4EC
   std::float_t m_flStartAnisotropy; // 0x4F0 - 0x4F0
   std::float_t m_flStartScattering; // 0x4F4 - 0x4F4
   std::float_t m_flStartDrawDistance; // 0x4F8 - 0x4F8
   std::float_t m_flDefaultAnisotropy; // 0x4FC - 0x4FC
   std::float_t m_flDefaultScattering; // 0x500 - 0x500
   std::float_t m_flDefaultDrawDistance; // 0x504 - 0x504
   bool m_bStartDisabled; // 0x508 - 0x508
   bool m_bEnableIndirect; // 0x509 - 0x509
   bool m_bIsMaster; // 0x50A - 0x50A
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x510 - 0x510
   std::int32_t m_nForceRefreshCount; // 0x518 - 0x518
   bool m_bFirstTime; // 0x51C - 0x51C

}; // size - 0x520


class CEnvWind : public CBaseEntity
{
public:

   CEnvWindShared m_EnvWindShared; // 0x4A0 - 0x4A0

}; // size - 0x6F8


class CEnvWindShared
{
public:

   class WindAveEvent_t
   {
   public:

      std::float_t m_flStartWindSpeed; // 0x0 - 0x0
      std::float_t m_flAveWindSpeed; // 0x4 - 0x4

   }; // size - 0x8

   class WindVariationEvent_t
   {
   public:

      std::float_t m_flWindAngleVariation; // 0x0 - 0x0
      std::float_t m_flWindSpeedVariation; // 0x4 - 0x4

   }; // size - 0x8

   GameTime_t m_flStartTime; // 0x8 - 0x8
   std::uint32_t m_iWindSeed; // 0xC - 0xC
   std::uint16_t m_iMinWind; // 0x10 - 0x10
   std::uint16_t m_iMaxWind; // 0x12 - 0x12
   std::int32_t m_windRadius; // 0x14 - 0x14
   std::uint16_t m_iMinGust; // 0x18 - 0x18
   std::uint16_t m_iMaxGust; // 0x1A - 0x1A
   std::float_t m_flMinGustDelay; // 0x1C - 0x1C
   std::float_t m_flMaxGustDelay; // 0x20 - 0x20
   std::float_t m_flGustDuration; // 0x24 - 0x24
   std::uint16_t m_iGustDirChange; // 0x28 - 0x28
   Vector m_location; // 0x2C - 0x2C
   std::int32_t m_iszGustSound; // 0x38 - 0x38
   std::int32_t m_iWindDir; // 0x3C - 0x3C
   std::float_t m_flWindSpeed; // 0x40 - 0x40
   Vector m_currentWindVector; // 0x44 - 0x44
   Vector m_CurrentSwayVector; // 0x50 - 0x50
   Vector m_PrevSwayVector; // 0x5C - 0x5C
   std::uint16_t m_iInitialWindDir; // 0x68 - 0x68
   std::float_t m_flInitialWindSpeed; // 0x6C - 0x6C
   CEntityIOOutput m_OnGustStart; // 0x70 - 0x70
   CEntityIOOutput m_OnGustEnd; // 0x98 - 0x98
   GameTime_t m_flVariationTime; // 0xC0 - 0xC0
   GameTime_t m_flSwayTime; // 0xC4 - 0xC4
   GameTime_t m_flSimTime; // 0xC8 - 0xC8
   GameTime_t m_flSwitchTime; // 0xCC - 0xCC
   std::float_t m_flAveWindSpeed; // 0xD0 - 0xD0
   bool m_bGusting; // 0xD4 - 0xD4
   std::float_t m_flWindAngleVariation; // 0xD8 - 0xD8
   std::float_t m_flWindSpeedVariation; // 0xDC - 0xDC
   CEntityIndex m_iEntIndex; // 0xE0 - 0xE0

}; // size - 0x258




class CEnvZoom : public CPointEntity
{
public:

   std::float_t m_flSpeed; // 0x4A0 - 0x4A0
   std::int32_t m_nFOV; // 0x4A4 - 0x4A4

}; // size - 0x4A8


class CExampleSchemaVData_Monomorphic
{
public:

   std::int32_t m_nExample1; // 0x0 - 0x0
   std::int32_t m_nExample2; // 0x4 - 0x4

}; // size - 0x8


class CFeMorphLayer
{
public:

   CUtlString m_Name; // 0x0 - 0x0
   std::uint32_t m_nNameHash; // 0x8 - 0x8
   CUtlVector< uint16 > m_Nodes; // 0x10 - 0x10
   CUtlVector< Vector > m_InitPos; // 0x28 - 0x28
   CUtlVector< float32 > m_Gravity; // 0x40 - 0x40
   CUtlVector< float32 > m_GoalStrength; // 0x58 - 0x58
   CUtlVector< float32 > m_GoalDamping; // 0x70 - 0x70

}; // size - 0x88


class CFeVertexMapBuildArray
{
public:

   CUtlVector< FeVertexMapBuild_t* > m_Array; // 0x0 - 0x0

}; // size - 0x18


class CFilterAttributeInt : public CBaseFilter
{
public:

   CUtlStringToken m_sAttributeName; // 0x4F8 - 0x4F8

}; // size - 0x500


class CFilterClass : public CBaseFilter
{
public:

   CUtlSymbolLarge m_iFilterClass; // 0x4F8 - 0x4F8

}; // size - 0x500


class CFilterContext : public CBaseFilter
{
public:

   CUtlSymbolLarge m_iFilterContext; // 0x4F8 - 0x4F8

}; // size - 0x500


class CFilterMassGreater : public CBaseFilter
{
public:

   std::float_t m_fFilterMass; // 0x4F8 - 0x4F8

}; // size - 0x500


class CFilterName : public CBaseFilter
{
public:

   CUtlSymbolLarge m_iFilterName; // 0x4F8 - 0x4F8

}; // size - 0x500


class CFingerChain
{
public:

   CUtlVector< CFingerSource > m_targets; // 0x0 - 0x0
   CUtlVector< CFingerBone > m_bones; // 0x18 - 0x18
   CUtlString m_name; // 0x30 - 0x30
   CUtlString m_tipParentBoneName; // 0x38 - 0x38
   Vector m_vTipOffset; // 0x40 - 0x40
   CUtlString m_metacarpalBoneName; // 0x50 - 0x50
   Vector m_vSplayHingeAxis; // 0x58 - 0x58
   std::float_t m_flSplayMinAngle; // 0x64 - 0x64
   std::float_t m_flSplayMaxAngle; // 0x68 - 0x68
   std::float_t m_flFingerScaleRatio; // 0x6C - 0x6C

}; // size - 0x70


class CFire : public CBaseModelEntity
{
public:

   CHandle< CBaseFire > m_hEffect; // 0x6F0 - 0x6F0
   CHandle< CBaseEntity > m_hOwner; // 0x6F4 - 0x6F4
   std::int32_t m_nFireType; // 0x6F8 - 0x6F8
   std::float_t m_flFuel; // 0x6FC - 0x6FC
   GameTime_t m_flDamageTime; // 0x700 - 0x700
   GameTime_t m_lastDamage; // 0x704 - 0x704
   std::float_t m_flFireSize; // 0x708 - 0x708
   GameTime_t m_flLastNavUpdateTime; // 0x70C - 0x70C
   std::float_t m_flHeatLevel; // 0x710 - 0x710
   std::float_t m_flHeatAbsorb; // 0x714 - 0x714
   std::float_t m_flDamageScale; // 0x718 - 0x718
   std::float_t m_flMaxHeat; // 0x71C - 0x71C
   std::float_t m_flLastHeatLevel; // 0x720 - 0x720
   std::float_t m_flAttackTime; // 0x724 - 0x724
   bool m_bEnabled; // 0x728 - 0x728
   bool m_bStartDisabled; // 0x729 - 0x729
   bool m_bDidActivate; // 0x72A - 0x72A
   CEntityIOOutput m_OnIgnited; // 0x730 - 0x730
   CEntityIOOutput m_OnExtinguished; // 0x758 - 0x758

}; // size - 0x780


class CFiringModeInt
{
public:

   int32 m_nValues[2]; // 0x0 - 0x0

}; // size - 0x8


class CFishPool : public CBaseEntity
{
public:

   std::int32_t m_fishCount; // 0x4B0 - 0x4B0
   std::float_t m_maxRange; // 0x4B4 - 0x4B4
   std::float_t m_swimDepth; // 0x4B8 - 0x4B8
   std::float_t m_waterLevel; // 0x4BC - 0x4BC
   bool m_isDormant; // 0x4C0 - 0x4C0
   CUtlVector< CHandle< CFish > > m_fishes; // 0x4C8 - 0x4C8
   CountdownTimer m_visTimer; // 0x4E0 - 0x4E0

}; // size - 0x4F8


class CFists : public CWeaponCSBase
{
public:

   bool m_bPlayingUninterruptableAct; // 0xD50 - 0xD50
   PlayerAnimEvent_t m_nUninterruptableActivity; // 0xD54 - 0xD54
   bool m_bRestorePrevWep; // 0xD58 - 0xD58
   CHandle< CBasePlayerWeapon > m_hWeaponBeforePrevious; // 0xD5C - 0xD5C
   CHandle< CBasePlayerWeapon > m_hWeaponPrevious; // 0xD60 - 0xD60
   bool m_bDelayedHardPunchIncoming; // 0xD64 - 0xD64
   bool m_bDestroyAfterTaunt; // 0xD65 - 0xD65

}; // size - 0xD68


class CFlashbang : public CBaseCSGrenade
{
public:


}; // size - 0xD90


class CFlexOp
{
public:

   FlexOpCode_t m_OpCode; // 0x0 - 0x0
   std::int32_t m_Data; // 0x4 - 0x4

}; // size - 0x8


class CFlexRule
{
public:

   std::int32_t m_nFlex; // 0x0 - 0x0
   CUtlVector< CFlexOp > m_FlexOps; // 0x8 - 0x8

}; // size - 0x20


class CFogController : public CBaseEntity
{
public:

   fogparams_t m_fog; // 0x4A0 - 0x4A0
   bool m_bUseAngles; // 0x508 - 0x508
   std::int32_t m_iChangedVariables; // 0x50C - 0x50C

}; // size - 0x510


class CFogTrigger : public CBaseTrigger
{
public:

   fogparams_t m_fog; // 0x898 - 0x898

}; // size - 0x900


class CFogVolume : public CServerOnlyModelEntity
{
public:

   CUtlSymbolLarge m_fogName; // 0x6F0 - 0x6F0
   CUtlSymbolLarge m_postProcessName; // 0x6F8 - 0x6F8
   CUtlSymbolLarge m_colorCorrectionName; // 0x700 - 0x700
   bool m_bDisabled; // 0x710 - 0x710
   bool m_bInFogVolumesList; // 0x711 - 0x711

}; // size - 0x718


class CFollowAttachmentUpdateNode : public CUnaryUpdateNode
{
public:

   FollowAttachmentSettings_t m_opFixedData; // 0x70 - 0x70

}; // size - 0x110


class CFootAdjustmentAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x38
   AnimParamID m_facingTarget; // 0x40 - 0x40
   bool m_bResetChild; // 0x44 - 0x44
   bool m_bAnimationDriven; // 0x45 - 0x45
   CUtlString m_baseClipName; // 0x48 - 0x48
   CUtlVector< CUtlString > m_clips; // 0x50 - 0x50
   std::float_t m_flTurnTimeMin; // 0x68 - 0x68
   std::float_t m_flTurnTimeMax; // 0x6C - 0x6C
   std::float_t m_flStepHeightMax; // 0x70 - 0x70
   std::float_t m_flStepHeightMaxAngle; // 0x74 - 0x74

}; // size - 0x78


class CFootCycleMetric : public CMotionMetricBase
{
public:

   CUtlVector< CUtlString > m_feet; // 0x28 - 0x28

}; // size - 0x40


class CFootCycleMetricEvaluator : public CMotionMetricEvaluator
{
public:

   CUtlVector< int32 > m_footIndices; // 0x50 - 0x50

}; // size - 0x68


class CFootFallAnimTag : public CAnimTagBase
{
public:

   FootFallTagFoot_t m_foot; // 0x40 - 0x40

}; // size - 0x48


class CFootPositionMetricEvaluator : public CMotionMetricEvaluator
{
public:

   CUtlVector< int32 > m_footIndices; // 0x50 - 0x50
   bool m_bIgnoreSlope; // 0x68 - 0x68

}; // size - 0x70


class CFootstepControl : public CBaseTrigger
{
public:

   CUtlSymbolLarge m_source; // 0x898 - 0x898
   CUtlSymbolLarge m_destination; // 0x8A0 - 0x8A0

}; // size - 0x8A8


class CFootstepLandedAnimTag : public CAnimTagBase
{
public:

   FootstepLandedFootSoundType_t m_FootstepType; // 0x40 - 0x40
   CUtlString m_OverrideSoundName; // 0x48 - 0x48
   CUtlString m_DebugAnimSourceString; // 0x50 - 0x50
   CUtlString m_BoneName; // 0x58 - 0x58

}; // size - 0x60


class CFuncElectrifiedVolume : public CFuncBrush
{
public:

   CUtlSymbolLarge m_EffectName; // 0x710 - 0x710
   CUtlSymbolLarge m_EffectInterpenetrateName; // 0x718 - 0x718
   CUtlSymbolLarge m_EffectZapName; // 0x720 - 0x720
   CUtlSymbolLarge m_iszEffectSource; // 0x728 - 0x728

}; // size - 0x748


class CFuncLadderAlias_func_useableladder : public CFuncLadder
{
public:


}; // size - 0x7A0


class CFuncMoveLinear : public CBaseToggle
{
public:

   MoveLinearAuthoredPos_t m_authoredPosition; // 0x770 - 0x770
   QAngle m_angMoveEntitySpace; // 0x774 - 0x774
   Vector m_vecMoveDirParentSpace; // 0x780 - 0x780
   CUtlSymbolLarge m_soundStart; // 0x790 - 0x790
   CUtlSymbolLarge m_soundStop; // 0x798 - 0x798
   CUtlSymbolLarge m_currentSound; // 0x7A0 - 0x7A0
   std::float_t m_flBlockDamage; // 0x7A8 - 0x7A8
   std::float_t m_flStartPosition; // 0x7AC - 0x7AC
   std::float_t m_flMoveDistance; // 0x7B0 - 0x7B0
   CEntityIOOutput m_OnFullyOpen; // 0x7C0 - 0x7C0
   CEntityIOOutput m_OnFullyClosed; // 0x7E8 - 0x7E8
   bool m_bCreateNavObstacle; // 0x810 - 0x810

}; // size - 0x820


class CFuncMoveLinearAlias_momentary_door : public CFuncMoveLinear
{
public:


}; // size - 0x820


class CFuncNavBlocker : public CBaseModelEntity
{
public:

   bool m_bDisabled; // 0x6F0 - 0x6F0
   std::int32_t m_nBlockedTeamNumber; // 0x6F4 - 0x6F4

}; // size - 0x700


class CFuncNavObstruction : public CBaseModelEntity
{
public:

   bool m_bDisabled; // 0x6F8 - 0x6F8

}; // size - 0x700


class CFuncPlat : public CBasePlatTrain
{
public:

   CUtlSymbolLarge m_sNoise; // 0x798 - 0x798

}; // size - 0x7A0


class CFuncPlatRot : public CFuncPlat
{
public:

   QAngle m_end; // 0x7A0 - 0x7A0
   QAngle m_start; // 0x7AC - 0x7AC

}; // size - 0x7B8


class CFuncShatterglass : public CBaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialDamaged; // 0x6F0 - 0x6F0
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialUndamaged; // 0x6F8 - 0x6F8
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFace; // 0x700 - 0x700
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeCaps; // 0x708 - 0x708
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFins; // 0x710 - 0x710
   matrix3x4_t m_matPanelTransform; // 0x718 - 0x718
   matrix3x4_t m_matPanelTransformWsTemp; // 0x748 - 0x748
   CUtlVector< uint32 > m_vecShatterGlassShards; // 0x778 - 0x778
   Vector2D m_PanelSize; // 0x790 - 0x790
   Vector m_vecPanelNormalWs; // 0x798 - 0x798
   std::int32_t m_nNumShardsEverCreated; // 0x7A4 - 0x7A4
   GameTime_t m_flLastShatterSoundEmitTime; // 0x7A8 - 0x7A8
   GameTime_t m_flLastCleanupTime; // 0x7AC - 0x7AC
   GameTime_t m_flInitAtTime; // 0x7B0 - 0x7B0
   std::float_t m_flGlassThickness; // 0x7B4 - 0x7B4
   std::float_t m_flSpawnInvulnerability; // 0x7B8 - 0x7B8
   bool m_bBreakSilent; // 0x7BC - 0x7BC
   bool m_bBreakShardless; // 0x7BD - 0x7BD
   bool m_bBroken; // 0x7BE - 0x7BE
   bool m_bHasRateLimitedShards; // 0x7BF - 0x7BF
   bool m_bGlassNavIgnore; // 0x7C0 - 0x7C0
   bool m_bGlassInFrame; // 0x7C1 - 0x7C1
   bool m_bStartBroken; // 0x7C2 - 0x7C2
   std::uint8_t m_iInitialDamageType; // 0x7C3 - 0x7C3
   CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x7C8 - 0x7C8
   CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x7D0 - 0x7D0
   CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x7D8 - 0x7D8
   CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x7E0 - 0x7E0
   CUtlVector< Vector > m_vInitialDamagePositions; // 0x7E8 - 0x7E8
   CUtlVector< Vector > m_vExtraDamagePositions; // 0x800 - 0x800
   CEntityIOOutput m_OnBroken; // 0x818 - 0x818
   std::uint8_t m_iSurfaceType; // 0x841 - 0x841

}; // size - 0x848


class CFuncTankTrain : public CFuncTrackTrain
{
public:

   CEntityIOOutput m_OnDeath; // 0x828 - 0x828

}; // size - 0x850


class CFuncTimescale : public CBaseEntity
{
public:

   std::float_t m_flDesiredTimescale; // 0x4A0 - 0x4A0
   std::float_t m_flAcceleration; // 0x4A4 - 0x4A4
   std::float_t m_flMinBlendRate; // 0x4A8 - 0x4A8
   std::float_t m_flBlendDeltaMultiplier; // 0x4AC - 0x4AC
   bool m_isStarted; // 0x4B0 - 0x4B0

}; // size - 0x4B8


class CFuncTrackAuto : public CFuncTrackChange
{
public:


}; // size - 0x7F8


class CFuncTrackChange : public CFuncPlatRot
{
public:

   CPathTrack* m_trackTop; // 0x7B8 - 0x7B8
   CPathTrack* m_trackBottom; // 0x7C0 - 0x7C0
   CFuncTrackTrain* m_train; // 0x7C8 - 0x7C8
   CUtlSymbolLarge m_trackTopName; // 0x7D0 - 0x7D0
   CUtlSymbolLarge m_trackBottomName; // 0x7D8 - 0x7D8
   CUtlSymbolLarge m_trainName; // 0x7E0 - 0x7E0
   TRAIN_CODE m_code; // 0x7E8 - 0x7E8
   std::int32_t m_targetState; // 0x7EC - 0x7EC
   std::int32_t m_use; // 0x7F0 - 0x7F0

}; // size - 0x7F8


class CFuncWall : public CBaseModelEntity
{
public:

   std::int32_t m_nState; // 0x6F0 - 0x6F0

}; // size - 0x6F8


class CFuncWater : public CBaseDoor
{
public:


}; // size - 0x978


class CFuseSymbolTable
{
public:

   CUtlHashtable< CUtlStringToken, ConstantInfo_t > m_constants; // 0x8 - 0x8
   CUtlHashtable< CUtlStringToken, VariableInfo_t > m_variables; // 0x28 - 0x28
   CUtlHashtable< CUtlStringToken, FunctionInfo_t > m_functions; // 0x48 - 0x48

}; // size - 0x68


class CGameEnd : public CRulePointEntity
{
public:


}; // size - 0x700


class CGameRules
{
public:

   char m_szQuestName[128]; // 0x8 - 0x8
   std::int32_t m_nQuestPhase; // 0x88 - 0x88

}; // size - 0x90


class CGameSceneNode
{
public:

   CTransform m_nodeToWorld; // 0x10 - 0x10
   CEntityInstance* m_pOwner; // 0x30 - 0x30
   CGameSceneNode* m_pParent; // 0x38 - 0x38
   CGameSceneNode* m_pChild; // 0x40 - 0x40
   CGameSceneNode* m_pNextSibling; // 0x48 - 0x48
   CGameSceneNodeHandle m_hParent; // 0x70 - 0x70
   CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80 - 0x80
   QAngle m_angRotation; // 0xB8 - 0xB8
   std::float_t m_flScale; // 0xC4 - 0xC4
   Vector m_vecAbsOrigin; // 0xC8 - 0xC8
   QAngle m_angAbsRotation; // 0xD4 - 0xD4
   std::float_t m_flAbsScale; // 0xE0 - 0xE0
   std::int16_t m_nParentAttachmentOrBone; // 0xE4 - 0xE4
   bool m_bDebugAbsOriginChanges; // 0xE6 - 0xE6
   bool m_bDormant; // 0xE7 - 0xE7
   bool m_bForceParentToBeNetworked; // 0xE8 - 0xE8
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
   std::uint8_t m_nHierarchicalDepth; // 0xEB - 0xEB
   std::uint8_t m_nHierarchyType; // 0xEC - 0xEC
   std::uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xED - 0xED
   CUtlStringToken m_name; // 0xF0 - 0xF0
   CUtlStringToken m_hierarchyAttachName; // 0x130 - 0x130
   std::float_t m_flZOffset; // 0x134 - 0x134
   Vector m_vRenderOrigin; // 0x138 - 0x138

}; // size - 0x150


class CGameSceneNode
{
public:

   CTransform m_nodeToWorld; // 0x10 - 0x10
   CEntityInstance* m_pOwner; // 0x30 - 0x30
   CGameSceneNode* m_pParent; // 0x38 - 0x38
   CGameSceneNode* m_pChild; // 0x40 - 0x40
   CGameSceneNode* m_pNextSibling; // 0x48 - 0x48
   CGameSceneNodeHandle m_hParent; // 0x70 - 0x70
   CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80 - 0x80
   QAngle m_angRotation; // 0xB8 - 0xB8
   std::float_t m_flScale; // 0xC4 - 0xC4
   Vector m_vecAbsOrigin; // 0xC8 - 0xC8
   QAngle m_angAbsRotation; // 0xD4 - 0xD4
   std::float_t m_flAbsScale; // 0xE0 - 0xE0
   std::int16_t m_nParentAttachmentOrBone; // 0xE4 - 0xE4
   bool m_bDebugAbsOriginChanges; // 0xE6 - 0xE6
   bool m_bDormant; // 0xE7 - 0xE7
   bool m_bForceParentToBeNetworked; // 0xE8 - 0xE8
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
   std::uint8_t m_nHierarchicalDepth; // 0xEB - 0xEB
   std::uint8_t m_nHierarchyType; // 0xEC - 0xEC
   std::uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xED - 0xED
   CUtlStringToken m_name; // 0xF0 - 0xF0
   CUtlStringToken m_hierarchyAttachName; // 0x130 - 0x130
   std::float_t m_flZOffset; // 0x134 - 0x134
   Vector m_vRenderOrigin; // 0x138 - 0x138

}; // size - 0x150


class CGeneralRandomRotation : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F0
   std::float_t m_flDegrees; // 0x1F4 - 0x1F4
   std::float_t m_flDegreesMin; // 0x1F8 - 0x1F8
   std::float_t m_flDegreesMax; // 0x1FC - 0x1FC
   std::float_t m_flRotationRandExponent; // 0x200 - 0x200
   bool m_bRandomlyFlipDirection; // 0x204 - 0x204

}; // size - 0x210


class CGlowOverlay
{
public:

   Vector m_vPos; // 0x8 - 0x8
   bool m_bDirectional; // 0x14 - 0x14
   Vector m_vDirection; // 0x18 - 0x18
   bool m_bInSky; // 0x24 - 0x24
   std::float_t m_skyObstructionScale; // 0x28 - 0x28
   CGlowSprite m_Sprites[4]; // 0x30 - 0x30
   std::int32_t m_nSprites; // 0xB0 - 0xB0
   std::float_t m_flProxyRadius; // 0xB4 - 0xB4
   std::float_t m_flHDRColorScale; // 0xB8 - 0xB8
   std::float_t m_flGlowObstructionScale; // 0xBC - 0xBC
   bool m_bCacheGlowObstruction; // 0xC0 - 0xC0
   bool m_bCacheSkyObstruction; // 0xC1 - 0xC1
   std::int16_t m_bActivated; // 0xC2 - 0xC2
   std::uint16_t m_ListIndex; // 0xC4 - 0xC4
   std::int32_t m_queryHandle; // 0xC8 - 0xC8

}; // size - 0xD0


class CGlowProperty
{
public:

   Vector m_fGlowColor; // 0x8 - 0x8
   std::int32_t m_iGlowType; // 0x30 - 0x30
   std::int32_t m_iGlowTeam; // 0x34 - 0x34
   std::int32_t m_nGlowRange; // 0x38 - 0x38
   std::int32_t m_nGlowRangeMin; // 0x3C - 0x3C
   Color m_glowColorOverride; // 0x40 - 0x40
   bool m_bFlashing; // 0x44 - 0x44
   std::float_t m_flGlowTime; // 0x48 - 0x48
   std::float_t m_flGlowStartTime; // 0x4C - 0x4C
   bool m_bEligibleForScreenHighlight; // 0x50 - 0x50
   bool m_bGlowing; // 0x51 - 0x51

}; // size - 0x58


class CGlowProperty
{
public:

   Vector m_fGlowColor; // 0x8 - 0x8
   std::int32_t m_iGlowType; // 0x30 - 0x30
   std::int32_t m_iGlowTeam; // 0x34 - 0x34
   std::int32_t m_nGlowRange; // 0x38 - 0x38
   std::int32_t m_nGlowRangeMin; // 0x3C - 0x3C
   Color m_glowColorOverride; // 0x40 - 0x40
   bool m_bFlashing; // 0x44 - 0x44
   std::float_t m_flGlowTime; // 0x48 - 0x48
   std::float_t m_flGlowStartTime; // 0x4C - 0x4C
   bool m_bEligibleForScreenHighlight; // 0x50 - 0x50
   bool m_bGlowing; // 0x51 - 0x51

}; // size - 0x58


class CGrenadeTracer : public C_BaseModelEntity
{
public:

   std::float_t m_flTracerDuration; // 0x858 - 0x858
   GrenadeType_t m_nType; // 0x85C - 0x85C

}; // size - 0x898


class CHEGrenade : public CBaseCSGrenade
{
public:


}; // size - 0xD90


class CHEGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:


}; // size - 0x9A0


class CHitBox
{
public:

   Vector m_vMinBounds; // 0x20 - 0x20
   Vector m_vMaxBounds; // 0x2C - 0x2C
   CUtlString m_name; // 0x38 - 0x38
   CUtlString m_sSurfaceProperty; // 0x40 - 0x40
   CUtlString m_sBoneName; // 0x48 - 0x48
   std::float_t m_flShapeRadius; // 0x50 - 0x50
   std::uint32_t m_nBoneNameHash; // 0x54 - 0x54
   std::int32_t m_nGroupId; // 0x58 - 0x58
   Color m_cRenderColor; // 0x5C - 0x5C
   std::uint16_t m_nHitBoxIndex; // 0x60 - 0x60
   std::uint8_t m_nShapeType; // 0x62 - 0x62
   bool m_bTranslationOnly; // 0x64 - 0x64
   bool m_bVisible; // 0x65 - 0x65
   bool m_bSelected; // 0x66 - 0x66

}; // size - 0x70


class CHostageCarriableProp : public CBaseAnimGraph
{
public:


}; // size - 0x820


class CHostageExpresserShim : public CBaseCombatCharacter
{
public:

   CAI_Expresser* m_pExpresser; // 0x968 - 0x968

}; // size - 0x970


class CInfoArmsRaceCounterterrorist : public SpawnPoint
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


class CInfoDynamicShadowHint : public C_PointEntity
{
public:

   bool m_bDisabled; // 0x538 - 0x538
   std::float_t m_flRange; // 0x53C - 0x53C
   std::int32_t m_nImportance; // 0x540 - 0x540
   std::int32_t m_nLightChoice; // 0x544 - 0x544
   CHandle< C_BaseEntity > m_hLight; // 0x548 - 0x548

}; // size - 0x550


class CInfoDynamicShadowHint : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A0
   std::float_t m_flRange; // 0x4A4 - 0x4A4
   std::int32_t m_nImportance; // 0x4A8 - 0x4A8
   std::int32_t m_nLightChoice; // 0x4AC - 0x4AC
   CHandle< CBaseEntity > m_hLight; // 0x4B0 - 0x4B0

}; // size - 0x4B8


class CInfoEnemyTerroristSpawn : public SpawnPointCoopEnemy
{
public:


}; // size - 0x4E8


class CInfoInstructorHintHostageRescueZone : public CPointEntity
{
public:


}; // size - 0x4A0


class CInfoLandmark : public CPointEntity
{
public:


}; // size - 0x4A0


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


class CInfoSpawnGroupLandmark : public CPointEntity
{
public:


}; // size - 0x4A0


class CInputStreamAnimNode : public CAnimNodeBase
{
public:


}; // size - 0x38


class CItemDogtags : public CItem
{
public:

   CHandle< CCSPlayerPawnBase > m_OwningPlayer; // 0x8F8 - 0x8F8
   CHandle< CCSPlayerPawnBase > m_KillingPlayer; // 0x8FC - 0x8FC

}; // size - 0x900


class CItemGenericTriggerHelper : public CBaseModelEntity
{
public:

   CHandle< CItemGeneric > m_hParentItem; // 0x6F0 - 0x6F0

}; // size - 0x6F8


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


class CKnifeGG : public CKnife
{
public:


}; // size - 0xD50


class CLODComponent : public CAnimComponentBase
{
public:

   std::int32_t m_nServerLOD; // 0x38 - 0x38

}; // size - 0x40


class CLightEntity : public CBaseModelEntity
{
public:

   CLightComponent* m_CLightComponent; // 0x6F0 - 0x6F0

}; // size - 0x6F8


class CLogicAuto : public CBaseEntity
{
public:

   CEntityIOOutput m_OnMapSpawn; // 0x4A0 - 0x4A0
   CEntityIOOutput m_OnDemoMapSpawn; // 0x4C8 - 0x4C8
   CEntityIOOutput m_OnNewGame; // 0x4F0 - 0x4F0
   CEntityIOOutput m_OnLoadGame; // 0x518 - 0x518
   CEntityIOOutput m_OnMapTransition; // 0x540 - 0x540
   CEntityIOOutput m_OnBackgroundMap; // 0x568 - 0x568
   CEntityIOOutput m_OnMultiNewMap; // 0x590 - 0x590
   CEntityIOOutput m_OnMultiNewRound; // 0x5B8 - 0x5B8
   CEntityIOOutput m_OnVREnabled; // 0x5E0 - 0x5E0
   CEntityIOOutput m_OnVRNotEnabled; // 0x608 - 0x608
   CUtlSymbolLarge m_globalstate; // 0x630 - 0x630

}; // size - 0x638


class CLogicBranchList : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4A0 - 0x4A0
   CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x520 - 0x520
   CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x538 - 0x538
   CEntityIOOutput m_OnAllTrue; // 0x540 - 0x540
   CEntityIOOutput m_OnAllFalse; // 0x568 - 0x568
   CEntityIOOutput m_OnMixed; // 0x590 - 0x590

}; // size - 0x5B8


class CLogicCase : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_nCase[32]; // 0x4A0 - 0x4A0
   std::int32_t m_nShuffleCases; // 0x5A0 - 0x5A0
   std::int32_t m_nLastShuffleCase; // 0x5A4 - 0x5A4
   uint8 m_uchShuffleCaseMap[32]; // 0x5A8 - 0x5A8
   CEntityIOOutput m_OnCase[32]; // 0x5C8 - 0x5C8
   CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > > m_OnDefault; // 0xAC8 - 0xAC8

}; // size - 0xAF0


class CLogicCollisionPair : public CLogicalEntity
{
public:

   CUtlSymbolLarge m_nameAttach1; // 0x4A0 - 0x4A0
   CUtlSymbolLarge m_nameAttach2; // 0x4A8 - 0x4A8
   bool m_disabled; // 0x4B0 - 0x4B0
   bool m_succeeded; // 0x4B1 - 0x4B1

}; // size - 0x4B8


class CLogicCompare : public CLogicalEntity
{
public:

   std::float_t m_flInValue; // 0x4A0 - 0x4A0
   std::float_t m_flCompareValue; // 0x4A4 - 0x4A4
   CEntityOutputTemplate< float32 > m_OnLessThan; // 0x4A8 - 0x4A8
   CEntityOutputTemplate< float32 > m_OnEqualTo; // 0x4D0 - 0x4D0
   CEntityOutputTemplate< float32 > m_OnNotEqualTo; // 0x4F8 - 0x4F8
   CEntityOutputTemplate< float32 > m_OnGreaterThan; // 0x520 - 0x520

}; // size - 0x548


class CLogicNPCCounter : public CBaseEntity
{
public:

   CEntityIOOutput m_OnMinCountAll; // 0x4A0 - 0x4A0
   CEntityIOOutput m_OnMaxCountAll; // 0x4C8 - 0x4C8
   CEntityOutputTemplate< float32 > m_OnFactorAll; // 0x4F0 - 0x4F0
   CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // 0x518 - 0x518
   CEntityIOOutput m_OnMinCount_1; // 0x540 - 0x540
   CEntityIOOutput m_OnMaxCount_1; // 0x568 - 0x568
   CEntityOutputTemplate< float32 > m_OnFactor_1; // 0x590 - 0x590
   CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // 0x5B8 - 0x5B8
   CEntityIOOutput m_OnMinCount_2; // 0x5E0 - 0x5E0
   CEntityIOOutput m_OnMaxCount_2; // 0x608 - 0x608
   CEntityOutputTemplate< float32 > m_OnFactor_2; // 0x630 - 0x630
   CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // 0x658 - 0x658
   CEntityIOOutput m_OnMinCount_3; // 0x680 - 0x680
   CEntityIOOutput m_OnMaxCount_3; // 0x6A8 - 0x6A8
   CEntityOutputTemplate< float32 > m_OnFactor_3; // 0x6D0 - 0x6D0
   CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // 0x6F8 - 0x6F8
   CEntityHandle m_hSource; // 0x720 - 0x720
   CUtlSymbolLarge m_iszSourceEntityName; // 0x728 - 0x728
   std::float_t m_flDistanceMax; // 0x730 - 0x730
   bool m_bDisabled; // 0x734 - 0x734
   std::int32_t m_nMinCountAll; // 0x738 - 0x738
   std::int32_t m_nMaxCountAll; // 0x73C - 0x73C
   std::int32_t m_nMinFactorAll; // 0x740 - 0x740
   std::int32_t m_nMaxFactorAll; // 0x744 - 0x744
   CUtlSymbolLarge m_iszNPCClassname_1; // 0x750 - 0x750
   std::int32_t m_nNPCState_1; // 0x758 - 0x758
   bool m_bInvertState_1; // 0x75C - 0x75C
   std::int32_t m_nMinCount_1; // 0x760 - 0x760
   std::int32_t m_nMaxCount_1; // 0x764 - 0x764
   std::int32_t m_nMinFactor_1; // 0x768 - 0x768
   std::int32_t m_nMaxFactor_1; // 0x76C - 0x76C
   std::float_t m_flDefaultDist_1; // 0x774 - 0x774
   CUtlSymbolLarge m_iszNPCClassname_2; // 0x778 - 0x778
   std::int32_t m_nNPCState_2; // 0x780 - 0x780
   bool m_bInvertState_2; // 0x784 - 0x784
   std::int32_t m_nMinCount_2; // 0x788 - 0x788
   std::int32_t m_nMaxCount_2; // 0x78C - 0x78C
   std::int32_t m_nMinFactor_2; // 0x790 - 0x790
   std::int32_t m_nMaxFactor_2; // 0x794 - 0x794
   std::float_t m_flDefaultDist_2; // 0x79C - 0x79C
   CUtlSymbolLarge m_iszNPCClassname_3; // 0x7A0 - 0x7A0
   std::int32_t m_nNPCState_3; // 0x7A8 - 0x7A8
   bool m_bInvertState_3; // 0x7AC - 0x7AC
   std::int32_t m_nMinCount_3; // 0x7B0 - 0x7B0
   std::int32_t m_nMaxCount_3; // 0x7B4 - 0x7B4
   std::int32_t m_nMinFactor_3; // 0x7B8 - 0x7B8
   std::int32_t m_nMaxFactor_3; // 0x7BC - 0x7BC
   std::float_t m_flDefaultDist_3; // 0x7C4 - 0x7C4

}; // size - 0x7E0


class CLogicPlayerProxy : public CLogicalEntity
{
public:

   CHandle< CBaseEntity > m_hPlayer; // 0x4A0 - 0x4A0
   CEntityIOOutput m_PlayerHasAmmo; // 0x4A8 - 0x4A8
   CEntityIOOutput m_PlayerHasNoAmmo; // 0x4D0 - 0x4D0
   CEntityIOOutput m_PlayerDied; // 0x4F8 - 0x4F8
   CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // 0x520 - 0x520

}; // size - 0x548


class CLogicRelay : public CLogicalEntity
{
public:

   CEntityIOOutput m_OnTrigger; // 0x4A0 - 0x4A0
   CEntityIOOutput m_OnSpawn; // 0x4C8 - 0x4C8
   bool m_bDisabled; // 0x4F0 - 0x4F0
   bool m_bWaitForRefire; // 0x4F1 - 0x4F1
   bool m_bTriggerOnce; // 0x4F2 - 0x4F2
   bool m_bFastRetrigger; // 0x4F3 - 0x4F3
   bool m_bPassthoughCaller; // 0x4F4 - 0x4F4

}; // size - 0x4F8


class CLogicRelay : public CLogicalEntity
{
public:

   CEntityIOOutput m_OnTrigger; // 0x538 - 0x538
   CEntityIOOutput m_OnSpawn; // 0x560 - 0x560
   bool m_bDisabled; // 0x588 - 0x588
   bool m_bWaitForRefire; // 0x589 - 0x589
   bool m_bTriggerOnce; // 0x58A - 0x58A
   bool m_bFastRetrigger; // 0x58B - 0x58B
   bool m_bPassthoughCaller; // 0x58C - 0x58C

}; // size - 0x590


class CLogicalEntity : public C_BaseEntity
{
public:


}; // size - 0x538


class CMapVetoPickController : public CBaseEntity
{
public:

   bool m_bPlayedIntroVcd; // 0x4A0 - 0x4A0
   bool m_bNeedToPlayFiveSecondsRemaining; // 0x4A1 - 0x4A1
   std::int32_t m_nDraftType; // 0x4C0 - 0x4C0
   std::int32_t m_nTeamWinningCoinToss; // 0x4C4 - 0x4C4
   int32 m_nTeamWithFirstChoice[64]; // 0x4C8 - 0x4C8
   int32 m_nVoteMapIdsList[7]; // 0x5C8 - 0x5C8
   int32 m_nAccountIDs[64]; // 0x5E4 - 0x5E4
   int32 m_nMapId0[64]; // 0x6E4 - 0x6E4
   int32 m_nMapId1[64]; // 0x7E4 - 0x7E4
   int32 m_nMapId2[64]; // 0x8E4 - 0x8E4
   int32 m_nMapId3[64]; // 0x9E4 - 0x9E4
   int32 m_nMapId4[64]; // 0xAE4 - 0xAE4
   int32 m_nMapId5[64]; // 0xBE4 - 0xBE4
   int32 m_nStartingSide0[64]; // 0xCE4 - 0xCE4
   std::int32_t m_nCurrentPhase; // 0xDE4 - 0xDE4
   std::int32_t m_nPhaseStartTick; // 0xDE8 - 0xDE8
   std::int32_t m_nPhaseDurationTicks; // 0xDEC - 0xDEC
   CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapVetoed; // 0xDF0 - 0xDF0
   CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapPicked; // 0xE18 - 0xE18
   CEntityOutputTemplate< int32 > m_OnSidesPicked; // 0xE40 - 0xE40
   CEntityOutputTemplate< int32 > m_OnNewPhaseStarted; // 0xE68 - 0xE68
   CEntityOutputTemplate< int32 > m_OnLevelTransition; // 0xE90 - 0xE90

}; // size - 0xEB8


class CModelConfig
{
public:

   CUtlString m_ConfigName; // 0x0 - 0x0
   CUtlVector< CModelConfigElement* > m_Elements; // 0x8 - 0x8
   bool m_bTopLevel; // 0x20 - 0x20

}; // size - 0x28


class CModelConfigElement_SetBodygroupOnAttachedModels : public CModelConfigElement
{
public:

   CUtlString m_GroupName; // 0x48 - 0x48
   std::int32_t m_nChoice; // 0x50 - 0x50

}; // size - 0x58


class CModelConfigElement_UserPick : public CModelConfigElement
{
public:

   CUtlVector< CUtlString > m_Choices; // 0x48 - 0x48

}; // size - 0x60


class CMorphConstraint : public CBaseConstraint
{
public:

   CUtlString m_sTargetMorph; // 0x70 - 0x70
   std::int32_t m_nSlaveChannel; // 0x78 - 0x78
   std::float_t m_flMin; // 0x7C - 0x7C
   std::float_t m_flMax; // 0x80 - 0x80

}; // size - 0x90


class CMorphData
{
public:

   CUtlString m_name; // 0x0 - 0x0
   CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8 - 0x8

}; // size - 0x20


class CMotionGraph
{
public:

   CParamSpanUpdater m_paramSpans; // 0x10 - 0x10
   CUtlVector< TagSpan_t > m_tags; // 0x28 - 0x28
   CSmartPtr< CMotionNode > m_pRootNode; // 0x40 - 0x40
   std::int32_t m_nParameterCount; // 0x48 - 0x48
   std::int32_t m_nConfigStartIndex; // 0x4C - 0x4C
   std::int32_t m_nConfigCount; // 0x50 - 0x50
   bool m_bLoop; // 0x54 - 0x54

}; // size - 0x58


class CMotionNodeBlend1D : public CMotionNode
{
public:

   CUtlVector< MotionBlendItem > m_blendItems; // 0x28 - 0x28
   std::int32_t m_nParamIndex; // 0x40 - 0x40

}; // size - 0x48


class CMotionNodeSequence : public CMotionNode
{
public:

   CUtlVector< TagSpan_t > m_tags; // 0x28 - 0x28
   HSequence m_hSequence; // 0x40 - 0x40
   std::float_t m_flPlaybackSpeed; // 0x44 - 0x44

}; // size - 0x48


class CMotionParameter
{
public:

   CUtlString m_name; // 0x18 - 0x18
   AnimParamID m_id; // 0x20 - 0x20
   std::float_t m_flMinValue; // 0x24 - 0x24
   std::float_t m_flMaxValue; // 0x28 - 0x28
   std::int32_t m_nSamples; // 0x2C - 0x2C

}; // size - 0x30


class CMotionParameterManager
{
public:

   CUtlVector< CSmartPtr< CMotionParameter > > m_params; // 0x10 - 0x10

}; // size - 0x28


class CMoverAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x38
   bool m_bApplyMovement; // 0x40 - 0x40
   AnimParamID m_moveVectorParam; // 0x44 - 0x44
   bool m_bOrientMovement; // 0x48 - 0x48
   AnimParamID m_moveHeadingParam; // 0x4C - 0x4C
   bool m_bAdditive; // 0x50 - 0x50
   bool m_bTurnToFace; // 0x51 - 0x51
   AnimValueSource m_facingTarget; // 0x54 - 0x54
   AnimParamID m_param; // 0x58 - 0x58
   bool m_bLimitOnly; // 0x5C - 0x5C
   std::float_t m_flTurnToFaceOffset; // 0x60 - 0x60
   std::float_t m_flTurnToFaceLimit; // 0x64 - 0x64
   CAnimInputDamping m_damping; // 0x68 - 0x68

}; // size - 0x78


class CMultiplayRules : public CGameRules
{
public:


}; // size - 0x90


class CNavLinkMovementVData
{
public:

   bool m_bIsInterpolated; // 0x0 - 0x0
   std::uint32_t m_unRecommendedDistance; // 0x4 - 0x4
   CUtlVector< CNavLinkAnimgraphVar > m_vecAnimgraphVars; // 0x8 - 0x8

}; // size - 0x20


class CNavVolumeCalculatedVector : public CNavVolume
{
public:


}; // size - 0x98


class CNavVolumeVector : public CNavVolume
{
public:

   bool m_bHasBeenPreFiltered; // 0x78 - 0x78

}; // size - 0x98


class CNavWalkable : public CPointEntity
{
public:


}; // size - 0x4A0


class CNullEntity : public CBaseEntity
{
public:


}; // size - 0x4A0


class CParadropChopper : public CBaseAnimGraph
{
public:

   Vector m_vecDropPos; // 0x824 - 0x824
   std::float_t m_flLastDistFromDrop; // 0x830 - 0x830
   bool m_bDroppedParadrop; // 0x834 - 0x834
   CSoundPatch* m_pSoundLoop; // 0x838 - 0x838
   std::float_t m_flSpawnTime; // 0x840 - 0x840
   std::float_t m_flFlightTime; // 0x844 - 0x844
   bool m_bPlayerIsFinishedRappelling; // 0x848 - 0x848
   GameTime_t m_flPlayerFinishedRappellingTime; // 0x84C - 0x84C
   CUtlString m_strFlyoverDropEvent; // 0x850 - 0x850
   CHandle< CBaseEntity > m_hCallingPlayer; // 0x858 - 0x858
   bool m_bCalledByPlayer; // 0x85C - 0x85C

}; // size - 0x860


class CParamSpanUpdater
{
public:

   CUtlVector< ParamSpan_t > m_spans; // 0x0 - 0x0

}; // size - 0x18


class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:


}; // size - 0x138


class CPathAnimMotor : public CPathAnimMotorBase
{
public:


}; // size - 0x30


class CPathAnimMotorBase : public CAnimMotorBase
{
public:

   bool m_bLockToPath; // 0x28 - 0x28

}; // size - 0x30


class CPathParticleRopeAlias_path_particle_rope_clientside : public CPathParticleRope
{
public:


}; // size - 0x580


class CPhysBallSocket : public CPhysConstraint
{
public:

   std::float_t m_flFriction; // 0x4F8 - 0x4F8
   bool m_bEnableSwingLimit; // 0x4FC - 0x4FC
   std::float_t m_flSwingLimit; // 0x500 - 0x500
   bool m_bEnableTwistLimit; // 0x504 - 0x504
   std::float_t m_flMinTwistAngle; // 0x508 - 0x508
   std::float_t m_flMaxTwistAngle; // 0x50C - 0x50C

}; // size - 0x510


class CPhysExplosion : public CPointEntity
{
public:

   bool m_bExplodeOnSpawn; // 0x4A0 - 0x4A0
   std::float_t m_flMagnitude; // 0x4A4 - 0x4A4
   std::float_t m_flDamage; // 0x4A8 - 0x4A8
   std::float_t m_radius; // 0x4AC - 0x4AC
   CUtlSymbolLarge m_targetEntityName; // 0x4B0 - 0x4B0
   std::float_t m_flInnerRadius; // 0x4B8 - 0x4B8
   std::float_t m_flPushScale; // 0x4BC - 0x4BC
   bool m_bConvertToDebrisWhenPossible; // 0x4C0 - 0x4C0
   CEntityIOOutput m_OnPushedPlayer; // 0x4C8 - 0x4C8

}; // size - 0x4F0


class CPhysImpact : public CPointEntity
{
public:

   std::float_t m_damage; // 0x4A0 - 0x4A0
   std::float_t m_distance; // 0x4A4 - 0x4A4
   CUtlSymbolLarge m_directionEntityName; // 0x4A8 - 0x4A8

}; // size - 0x4B0


class CPhysLength : public CPhysConstraint
{
public:

   Vector m_offset[2]; // 0x4F8 - 0x4F8
   Vector m_vecAttach; // 0x510 - 0x510
   std::float_t m_addLength; // 0x51C - 0x51C
   std::float_t m_minLength; // 0x520 - 0x520
   std::float_t m_totalLength; // 0x524 - 0x524
   bool m_bEnableCollision; // 0x528 - 0x528

}; // size - 0x530


class CPhysMagnet : public CBaseAnimGraph
{
public:

   CEntityIOOutput m_OnMagnetAttach; // 0x820 - 0x820
   CEntityIOOutput m_OnMagnetDetach; // 0x848 - 0x848
   std::float_t m_massScale; // 0x870 - 0x870
   std::float_t m_forceLimit; // 0x874 - 0x874
   std::float_t m_torqueLimit; // 0x878 - 0x878
   CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x880 - 0x880
   bool m_bActive; // 0x898 - 0x898
   bool m_bHasHitSomething; // 0x899 - 0x899
   std::float_t m_flTotalMass; // 0x89C - 0x89C
   std::float_t m_flRadius; // 0x8A0 - 0x8A0
   GameTime_t m_flNextSuckTime; // 0x8A4 - 0x8A4
   std::int32_t m_iMaxObjectsAttached; // 0x8A8 - 0x8A8

}; // size - 0x8B0


class CPhysPropAmmoBox : public CBrBaseItem
{
public:

   std::int32_t m_nUsesRemaining; // 0xB28 - 0xB28
   GameTime_t m_flTimeLastUsed; // 0xB2C - 0xB2C

}; // size - 0xB38


class CPhysPropMetalCrate : public CPhysPropLootCrate
{
public:


}; // size - 0xB50


class CPhysPropMoneyCrate : public CPhysPropLootCrate
{
public:

   std::int32_t m_nCurrentCashCount; // 0xB50 - 0xB50
   std::int32_t m_nCashCount; // 0xB54 - 0xB54
   GameTime_t m_flTimeLastUsed; // 0xB58 - 0xB58

}; // size - 0xB60


class CPhysPropParadropCrate : public CPhysPropLootCrate
{
public:

   bool m_bFalling; // 0xB50 - 0xB50
   std::int32_t m_nNumThinksAtZeroVerticalVelocity; // 0xB54 - 0xB54

}; // size - 0xB58


class CPhysPropWeaponRefillHeavyArmor : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CPhysPropWeaponUpgradeContractKill : public CPhysPropWeaponUpgrade
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


class CPhysPropWeaponUpgradeTablet : public CPhysPropWeaponUpgrade
{
public:


}; // size - 0xB30


class CPhysPulley : public CPhysConstraint
{
public:

   Vector m_position2; // 0x4F8 - 0x4F8
   Vector m_offset[2]; // 0x504 - 0x504
   std::float_t m_addLength; // 0x51C - 0x51C
   std::float_t m_gearRatio; // 0x520 - 0x520

}; // size - 0x528


class CPhysSlideConstraint : public CPhysConstraint
{
public:

   Vector m_axisEnd; // 0x500 - 0x500
   std::float_t m_slideFriction; // 0x50C - 0x50C
   std::float_t m_systemLoadScale; // 0x510 - 0x510
   std::float_t m_initialOffset; // 0x514 - 0x514
   bool m_bEnableLinearConstraint; // 0x518 - 0x518
   bool m_bEnableAngularConstraint; // 0x519 - 0x519
   std::float_t m_flMotorFrequency; // 0x51C - 0x51C
   std::float_t m_flMotorDampingRatio; // 0x520 - 0x520
   bool m_bUseEntityPivot; // 0x524 - 0x524
   ConstraintSoundInfo m_soundInfo; // 0x528 - 0x528

}; // size - 0x5B0


class CPhysicalButton : public CBaseButton
{
public:


}; // size - 0x8B8


class CPhysicsPropOverride : public CPhysicsProp
{
public:


}; // size - 0xB00


class CPhysicsPropRespawnable : public CPhysicsProp
{
public:

   Vector m_vOriginalSpawnOrigin; // 0xB00 - 0xB00
   QAngle m_vOriginalSpawnAngles; // 0xB0C - 0xB0C
   Vector m_vOriginalMins; // 0xB18 - 0xB18
   Vector m_vOriginalMaxs; // 0xB24 - 0xB24
   std::float_t m_flRespawnDuration; // 0xB30 - 0xB30

}; // size - 0xB38


class CPhysicsSpring : public CBaseEntity
{
public:

   std::float_t m_flFrequency; // 0x4A8 - 0x4A8
   std::float_t m_flDampingRatio; // 0x4AC - 0x4AC
   std::float_t m_flRestLength; // 0x4B0 - 0x4B0
   CUtlSymbolLarge m_nameAttachStart; // 0x4B8 - 0x4B8
   CUtlSymbolLarge m_nameAttachEnd; // 0x4C0 - 0x4C0
   Vector m_start; // 0x4C8 - 0x4C8
   Vector m_end; // 0x4D4 - 0x4D4
   std::uint32_t m_teleportTick; // 0x4E0 - 0x4E0

}; // size - 0x4E8


class CPhysicsWire : public CBaseEntity
{
public:

   std::int32_t m_nDensity; // 0x4A0 - 0x4A0

}; // size - 0x4A8


class CPlantedC4 : public CBaseAnimGraph
{
public:

   bool m_bPlantedAtQuestTarget; // 0x820 - 0x820
   bool m_bBombTicking; // 0x821 - 0x821
   GameTime_t m_flC4Blow; // 0x824 - 0x824
   std::int32_t m_nBombSite; // 0x828 - 0x828
   std::int32_t m_nSourceSoundscapeHash; // 0x82C - 0x82C
   CEntityIOOutput m_OnBombDefused; // 0x830 - 0x830
   CEntityIOOutput m_OnBombBeginDefuse; // 0x858 - 0x858
   CEntityIOOutput m_OnBombDefuseAborted; // 0x880 - 0x880
   bool m_bCannotBeDefused; // 0x8A8 - 0x8A8
   EntitySpottedState_t m_entitySpottedState; // 0x8B0 - 0x8B0
   std::int32_t m_nSpotRules; // 0x8C8 - 0x8C8
   bool m_bTrainingPlacedByPlayer; // 0x8CC - 0x8CC
   bool m_bHasExploded; // 0x8CD - 0x8CD
   std::float_t m_flTimerLength; // 0x8D0 - 0x8D0
   bool m_bBeingDefused; // 0x8D4 - 0x8D4
   GameTime_t m_fLastDefuseTime; // 0x8DC - 0x8DC
   std::float_t m_flDefuseLength; // 0x8E4 - 0x8E4
   GameTime_t m_flDefuseCountDown; // 0x8E8 - 0x8E8
   bool m_bBombDefused; // 0x8EC - 0x8EC
   CHandle< CCSPlayerPawnBase > m_hBombDefuser; // 0x8F0 - 0x8F0
   CEntityHandle m_hControlPanel; // 0x8F4 - 0x8F4
   std::int32_t m_iProgressBarTime; // 0x8F8 - 0x8F8
   bool m_bVoiceAlertFired; // 0x8FC - 0x8FC
   bool m_bVoiceAlertPlayed[4]; // 0x8FD - 0x8FD
   GameTime_t m_flNextBotBeepTime; // 0x904 - 0x904
   bool m_bPlantedAfterPickup; // 0x90C - 0x90C
   QAngle m_angCatchUpToPlayerEye; // 0x910 - 0x910
   GameTime_t m_flLastSpinDetectionTime; // 0x91C - 0x91C

}; // size - 0x920


class CPlatTrigger : public CBaseModelEntity
{
public:

   CHandle< CFuncPlat > m_pPlatform; // 0x6F0 - 0x6F0

}; // size - 0x6F8


class CPlayerInputAnimMotorUpdater : public CAnimMotorUpdaterBase
{
public:

   CUtlVector< float32 > m_sampleTimes; // 0x20 - 0x20
   std::float_t m_flSpringConstant; // 0x3C - 0x3C
   std::float_t m_flAnticipationDistance; // 0x40 - 0x40
   CAnimParamHandle m_hAnticipationPosParam; // 0x44 - 0x44
   CAnimParamHandle m_hAnticipationHeadingParam; // 0x46 - 0x46
   bool m_bUseAcceleration; // 0x48 - 0x48

}; // size - 0x50


class CPlayerSprayDecal : public CModelPointEntity
{
public:

   std::int32_t m_nUniqueID; // 0x6F0 - 0x6F0
   std::uint32_t m_unAccountID; // 0x6F4 - 0x6F4
   std::uint32_t m_unTraceID; // 0x6F8 - 0x6F8
   std::uint32_t m_rtGcTime; // 0x6FC - 0x6FC
   Vector m_vecEndPos; // 0x700 - 0x700
   Vector m_vecStart; // 0x70C - 0x70C
   Vector m_vecLeft; // 0x718 - 0x718
   Vector m_vecNormal; // 0x724 - 0x724
   std::int32_t m_nPlayer; // 0x730 - 0x730
   std::int32_t m_nEntity; // 0x734 - 0x734
   std::int32_t m_nHitbox; // 0x738 - 0x738
   std::float_t m_flCreationTime; // 0x73C - 0x73C
   std::int32_t m_nTintID; // 0x740 - 0x740
   std::uint8_t m_nVersion; // 0x744 - 0x744
   uint8 m_ubSignature[128]; // 0x745 - 0x745

}; // size - 0x7C8


class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
public:


}; // size - 0x40


class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:

   std::float_t m_flStepSoundTime; // 0x1B8 - 0x1B8
   std::float_t m_flFallVelocity; // 0x1BC - 0x1BC
   bool m_bInCrouch; // 0x1C0 - 0x1C0
   std::uint32_t m_nCrouchState; // 0x1C4 - 0x1C4
   GameTime_t m_flCrouchTransitionStartTime; // 0x1C8 - 0x1C8
   bool m_bDucked; // 0x1CC - 0x1CC
   bool m_bDucking; // 0x1CD - 0x1CD
   bool m_bInDuckJump; // 0x1CE - 0x1CE
   Vector m_groundNormal; // 0x1D0 - 0x1D0
   std::float_t m_flSurfaceFriction; // 0x1DC - 0x1DC
   CUtlStringToken m_surfaceProps; // 0x1E0 - 0x1E0
   std::int32_t m_nStepside; // 0x1F0 - 0x1F0

}; // size - 0x1F8


class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:

   std::float_t m_flStepSoundTime; // 0x1B8 - 0x1B8
   std::float_t m_flFallVelocity; // 0x1BC - 0x1BC
   bool m_bInCrouch; // 0x1C0 - 0x1C0
   std::uint32_t m_nCrouchState; // 0x1C4 - 0x1C4
   GameTime_t m_flCrouchTransitionStartTime; // 0x1C8 - 0x1C8
   bool m_bDucked; // 0x1CC - 0x1CC
   bool m_bDucking; // 0x1CD - 0x1CD
   bool m_bInDuckJump; // 0x1CE - 0x1CE
   Vector m_groundNormal; // 0x1D0 - 0x1D0
   std::float_t m_flSurfaceFriction; // 0x1DC - 0x1DC
   CUtlStringToken m_surfaceProps; // 0x1E0 - 0x1E0
   std::int32_t m_nStepside; // 0x1F0 - 0x1F0
   std::int32_t m_iTargetVolume; // 0x1F4 - 0x1F4
   Vector m_vecSmoothedVelocity; // 0x1F8 - 0x1F8

}; // size - 0x208


class CPlayer_ObserverServices : public CPlayerPawnComponent
{
public:

   std::uint8_t m_iObserverMode; // 0x40 - 0x40
   CHandle< CBaseEntity > m_hObserverTarget; // 0x44 - 0x44
   ObserverMode_t m_iObserverLastMode; // 0x48 - 0x48
   bool m_bForcedObserverMode; // 0x4C - 0x4C

}; // size - 0x50


class CPlayer_ObserverServices : public CPlayerPawnComponent
{
public:

   std::uint8_t m_iObserverMode; // 0x40 - 0x40
   CHandle< C_BaseEntity > m_hObserverTarget; // 0x44 - 0x44
   ObserverMode_t m_iObserverLastMode; // 0x48 - 0x48
   bool m_bForcedObserverMode; // 0x4C - 0x4C
   std::float_t m_flObserverChaseDistance; // 0x50 - 0x50

}; // size - 0x58


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

   bool m_bAllowSwitchToNoWeapon; // 0x40 - 0x40
   C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons; // 0x48 - 0x48
   CHandle< C_BasePlayerWeapon > m_hActiveWeapon; // 0x60 - 0x60
   CHandle< C_BasePlayerWeapon > m_hLastWeapon; // 0x64 - 0x64
   uint16 m_iAmmo[32]; // 0x68 - 0x68

}; // size - 0xA8


class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:

   bool m_bAllowSwitchToNoWeapon; // 0x40 - 0x40
   CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > m_hMyWeapons; // 0x48 - 0x48
   CHandle< CBasePlayerWeapon > m_hActiveWeapon; // 0x60 - 0x60
   CHandle< CBasePlayerWeapon > m_hLastWeapon; // 0x64 - 0x64
   uint16 m_iAmmo[32]; // 0x68 - 0x68
   bool m_bPreventWeaponPickup; // 0xA8 - 0xA8

}; // size - 0xB0


class CPointAngleSensor : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A0
   CUtlSymbolLarge m_nLookAtName; // 0x4A8 - 0x4A8
   CHandle< CBaseEntity > m_hTargetEntity; // 0x4B0 - 0x4B0
   CHandle< CBaseEntity > m_hLookAtEntity; // 0x4B4 - 0x4B4
   std::float_t m_flDuration; // 0x4B8 - 0x4B8
   std::float_t m_flDotTolerance; // 0x4BC - 0x4BC
   GameTime_t m_flFacingTime; // 0x4C0 - 0x4C0
   bool m_bFired; // 0x4C4 - 0x4C4
   CEntityIOOutput m_OnFacingLookat; // 0x4C8 - 0x4C8
   CEntityIOOutput m_OnNotFacingLookat; // 0x4F0 - 0x4F0
   CEntityOutputTemplate< Vector > m_TargetDir; // 0x518 - 0x518
   CEntityOutputTemplate< float32 > m_FacingPercentage; // 0x540 - 0x540

}; // size - 0x568


class CPointClientUIDialog : public CBaseClientUIEntity
{
public:

   CHandle< CBaseEntity > m_hActivator; // 0x8A0 - 0x8A0
   bool m_bStartEnabled; // 0x8A4 - 0x8A4

}; // size - 0x8A8


class CPointClientUIWorldPanel : public CBaseClientUIEntity
{
public:

   bool m_bIgnoreInput; // 0x8A0 - 0x8A0
   bool m_bLit; // 0x8A1 - 0x8A1
   bool m_bFollowPlayerAcrossTeleport; // 0x8A2 - 0x8A2
   std::float_t m_flWidth; // 0x8A4 - 0x8A4
   std::float_t m_flHeight; // 0x8A8 - 0x8A8
   std::float_t m_flDPI; // 0x8AC - 0x8AC
   std::float_t m_flInteractDistance; // 0x8B0 - 0x8B0
   std::float_t m_flDepthOffset; // 0x8B4 - 0x8B4
   std::uint32_t m_unOwnerContext; // 0x8B8 - 0x8B8
   std::uint32_t m_unHorizontalAlign; // 0x8BC - 0x8BC
   std::uint32_t m_unVerticalAlign; // 0x8C0 - 0x8C0
   std::uint32_t m_unOrientation; // 0x8C4 - 0x8C4
   bool m_bAllowInteractionFromAllSceneWorlds; // 0x8C8 - 0x8C8
   CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x8D0 - 0x8D0
   bool m_bOpaque; // 0x8E8 - 0x8E8
   bool m_bNoDepth; // 0x8E9 - 0x8E9
   bool m_bRenderBackface; // 0x8EA - 0x8EA
   bool m_bUseOffScreenIndicator; // 0x8EB - 0x8EB
   bool m_bExcludeFromSaveGames; // 0x8EC - 0x8EC
   bool m_bGrabbable; // 0x8ED - 0x8ED
   bool m_bOnlyRenderToTexture; // 0x8EE - 0x8EE
   bool m_bDisableMipGen; // 0x8EF - 0x8EF
   std::int32_t m_nExplicitImageLayout; // 0x8F0 - 0x8F0

}; // size - 0x8F8


class CPointDZDroneGunSpawn : public CServerOnlyPointEntity
{
public:

   bool m_bSpawnAutomatically; // 0x4A8 - 0x4A8

}; // size - 0x4B0


class CPointDZItemSpawn : public CServerOnlyPointEntity
{
public:


}; // size - 0x4A8


class CPointDZWeaponSpawnGroup : public CPointDZItemSpawnGroup
{
public:


}; // size - 0x4C8


class CPointGiveAmmo : public CPointEntity
{
public:

   CHandle< CBaseEntity > m_pActivator; // 0x4A0 - 0x4A0

}; // size - 0x4A8


class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:

   bool m_bBeenEnabled; // 0xAA0 - 0xAA0
   bool m_bHide; // 0xAA1 - 0xAA1
   std::float_t m_flSeenTargetTime; // 0xAA4 - 0xAA4
   C_PointClientUIWorldPanel* m_pTargetPanel; // 0xAA8 - 0xAA8

}; // size - 0xAB0


class CPointProximitySensor : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A0
   CHandle< CBaseEntity > m_hTargetEntity; // 0x4A4 - 0x4A4
   CEntityOutputTemplate< float32 > m_Distance; // 0x4A8 - 0x4A8

}; // size - 0x4D0


class CPointPush : public CPointEntity
{
public:

   bool m_bEnabled; // 0x4A0 - 0x4A0
   std::float_t m_flMagnitude; // 0x4A4 - 0x4A4
   std::float_t m_flRadius; // 0x4A8 - 0x4A8
   std::float_t m_flInnerRadius; // 0x4AC - 0x4AC
   std::float_t m_flConeOfInfluence; // 0x4B0 - 0x4B0
   CUtlSymbolLarge m_iszFilterName; // 0x4B8 - 0x4B8
   CHandle< CBaseFilter > m_hFilter; // 0x4C0 - 0x4C0

}; // size - 0x4C8


class CPointTeleport : public CBaseEntity
{
public:

   Vector m_vSaveOrigin; // 0x4A0 - 0x4A0
   QAngle m_vSaveAngles; // 0x4AC - 0x4AC
   bool m_bTeleportParentedEntities; // 0x4B8 - 0x4B8

}; // size - 0x4C0


class CPointVelocitySensor : public CPointEntity
{
public:

   CHandle< CBaseEntity > m_hTargetEntity; // 0x4A0 - 0x4A0
   Vector m_vecAxis; // 0x4A4 - 0x4A4
   bool m_bEnabled; // 0x4B0 - 0x4B0
   std::float_t m_fPrevVelocity; // 0x4B4 - 0x4B4
   std::float_t m_flAvgInterval; // 0x4B8 - 0x4B8
   CEntityOutputTemplate< float32 > m_Velocity; // 0x4C0 - 0x4C0

}; // size - 0x4E8


class CPointWorldText : public CModelPointEntity
{
public:

   char m_messageText[512]; // 0x6F0 - 0x6F0
   char m_FontName[64]; // 0x8F0 - 0x8F0
   bool m_bEnabled; // 0x930 - 0x930
   bool m_bFullbright; // 0x931 - 0x931
   std::float_t m_flWorldUnitsPerPx; // 0x934 - 0x934
   std::float_t m_flFontSize; // 0x938 - 0x938
   std::float_t m_flDepthOffset; // 0x93C - 0x93C
   Color m_Color; // 0x940 - 0x940
   PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x944 - 0x944
   PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x948 - 0x948
   PointWorldTextReorientMode_t m_nReorientMode; // 0x94C - 0x94C

}; // size - 0x950


class CPoseHandle
{
public:

   std::uint16_t m_nIndex; // 0x0 - 0x0
   PoseType_t m_eType; // 0x2 - 0x2

}; // size - 0x4


class CProjectedDecal : public CPointEntity
{
public:

   std::int32_t m_nTexture; // 0x4A0 - 0x4A0
   std::float_t m_flDistance; // 0x4A4 - 0x4A4

}; // size - 0x4A8


class CProjectedTextureBase
{
public:

   CHandle< C_BaseEntity > m_hTargetEntity; // 0xC - 0xC
   bool m_bState; // 0x10 - 0x10
   bool m_bAlwaysUpdate; // 0x11 - 0x11
   std::float_t m_flLightFOV; // 0x14 - 0x14
   bool m_bEnableShadows; // 0x18 - 0x18
   bool m_bSimpleProjection; // 0x19 - 0x19
   bool m_bLightOnlyTarget; // 0x1A - 0x1A
   bool m_bLightWorld; // 0x1B - 0x1B
   bool m_bCameraSpace; // 0x1C - 0x1C
   std::float_t m_flBrightnessScale; // 0x20 - 0x20
   Color m_LightColor; // 0x24 - 0x24
   std::float_t m_flIntensity; // 0x28 - 0x28
   std::float_t m_flLinearAttenuation; // 0x2C - 0x2C
   std::float_t m_flQuadraticAttenuation; // 0x30 - 0x30
   bool m_bVolumetric; // 0x34 - 0x34
   std::float_t m_flVolumetricIntensity; // 0x38 - 0x38
   std::float_t m_flNoiseStrength; // 0x3C - 0x3C
   std::float_t m_flFlashlightTime; // 0x40 - 0x40
   std::uint32_t m_nNumPlanes; // 0x44 - 0x44
   std::float_t m_flPlaneOffset; // 0x48 - 0x48
   std::float_t m_flColorTransitionTime; // 0x4C - 0x4C
   std::float_t m_flAmbient; // 0x50 - 0x50
   char m_SpotlightTextureName[512]; // 0x54 - 0x54
   std::int32_t m_nSpotlightTextureFrame; // 0x254 - 0x254
   std::uint32_t m_nShadowQuality; // 0x258 - 0x258
   std::float_t m_flNearZ; // 0x25C - 0x25C
   std::float_t m_flFarZ; // 0x260 - 0x260
   std::float_t m_flProjectionSize; // 0x264 - 0x264
   std::float_t m_flRotation; // 0x268 - 0x268
   bool m_bFlipHorizontal; // 0x26C - 0x26C

}; // size - 0x2E0


class CPropCounter : public CBaseAnimGraph
{
public:

   std::float_t m_flDisplayValue; // 0x820 - 0x820
   std::int32_t m_nInitialValue; // 0x824 - 0x824

}; // size - 0x828


class CPropDoorRotating : public CBasePropDoor
{
public:

   Vector m_vecAxis; // 0xD28 - 0xD28
   std::float_t m_flDistance; // 0xD34 - 0xD34
   PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xD38 - 0xD38
   PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xD3C - 0xD3C
   PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xD40 - 0xD40
   std::float_t m_flAjarAngle; // 0xD44 - 0xD44
   QAngle m_angRotationAjarDeprecated; // 0xD48 - 0xD48
   QAngle m_angRotationClosed; // 0xD54 - 0xD54
   QAngle m_angRotationOpenForward; // 0xD60 - 0xD60
   QAngle m_angRotationOpenBack; // 0xD6C - 0xD6C
   QAngle m_angGoal; // 0xD78 - 0xD78
   Vector m_vecForwardBoundsMin; // 0xD84 - 0xD84
   Vector m_vecForwardBoundsMax; // 0xD90 - 0xD90
   Vector m_vecBackBoundsMin; // 0xD9C - 0xD9C
   Vector m_vecBackBoundsMax; // 0xDA8 - 0xDA8
   CHandle< CEntityBlocker > m_hEntityBlocker; // 0xDB4 - 0xDB4

}; // size - 0xDB8


class CPushable : public CBreakable
{
public:


}; // size - 0x7B0


class CRagdoll : public IRagdoll
{
public:

   ragdoll_t m_ragdoll; // 0x8 - 0x8
   Vector m_mins; // 0x40 - 0x40
   Vector m_maxs; // 0x4C - 0x4C
   Vector m_origin; // 0x58 - 0x58
   std::float_t m_lastUpdate; // 0x64 - 0x64
   bool m_allAsleep; // 0x68 - 0x68
   Vector m_vecLastOrigin; // 0x6C - 0x6C
   std::float_t m_flLastOriginChangeTime; // 0x78 - 0x78
   std::float_t m_flAwakeTime; // 0x7C - 0x7C

}; // size - 0x80


class CRagdollComponentUpdater : public CAnimComponentUpdater
{
public:

   CUtlVector< CAnimNodePath > m_ragdollNodePaths; // 0x30 - 0x30
   CUtlVector< int32 > m_boneIndices; // 0x48 - 0x48
   CUtlVector< CUtlString > m_boneNames; // 0x60 - 0x60
   CUtlVector< WeightList > m_weightLists; // 0x78 - 0x78
   std::float_t m_flSpringFrequencyMin; // 0x90 - 0x90
   std::float_t m_flSpringFrequencyMax; // 0x94 - 0x94

}; // size - 0xA0


class CRagdollMagnet : public CPointEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A0
   std::float_t m_radius; // 0x4A4 - 0x4A4
   std::float_t m_force; // 0x4A8 - 0x4A8
   Vector m_axis; // 0x4AC - 0x4AC

}; // size - 0x4B8


class CRagdollManager : public CBaseEntity
{
public:

   std::int8_t m_iCurrentMaxRagdollCount; // 0x4A0 - 0x4A0
   std::int32_t m_iMaxRagdollCount; // 0x4A4 - 0x4A4
   bool m_bSaveImportant; // 0x4A8 - 0x4A8

}; // size - 0x4B0


class CRagdollPropAttached : public CRagdollProp
{
public:

   std::uint32_t m_boneIndexAttached; // 0x9C8 - 0x9C8
   std::uint32_t m_ragdollAttachedObjectIndex; // 0x9CC - 0x9CC
   Vector m_attachmentPointBoneSpace; // 0x9D0 - 0x9D0
   Vector m_attachmentPointRagdollSpace; // 0x9DC - 0x9DC
   bool m_bShouldDetach; // 0x9E8 - 0x9E8
   bool m_bShouldDeleteAttachedActivationRecord; // 0x9F8 - 0x9F8

}; // size - 0xA08


class CRandSimTimer : public CSimpleSimTimer
{
public:

   std::float_t m_minInterval; // 0x8 - 0x8
   std::float_t m_maxInterval; // 0xC - 0xC

}; // size - 0x10


class CRangeInt
{
public:

   int32 m_pValue[2]; // 0x0 - 0x0

}; // size - 0x8


class CRopeKeyframe : public CBaseModelEntity
{
public:

   std::uint16_t m_RopeFlags; // 0x6F8 - 0x6F8
   CUtlSymbolLarge m_iNextLinkName; // 0x700 - 0x700
   std::int16_t m_Slack; // 0x708 - 0x708
   std::float_t m_Width; // 0x70C - 0x70C
   std::float_t m_TextureScale; // 0x710 - 0x710
   std::uint8_t m_nSegments; // 0x714 - 0x714
   bool m_bConstrainBetweenEndpoints; // 0x715 - 0x715
   CUtlSymbolLarge m_strRopeMaterialModel; // 0x718 - 0x718
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x720 - 0x720
   std::uint8_t m_Subdiv; // 0x728 - 0x728
   std::uint8_t m_nChangeCount; // 0x729 - 0x729
   std::int16_t m_RopeLength; // 0x72A - 0x72A
   std::uint8_t m_fLockedPoints; // 0x72C - 0x72C
   bool m_bCreatedFromMapFile; // 0x72D - 0x72D
   std::float_t m_flScrollSpeed; // 0x730 - 0x730
   bool m_bStartPointValid; // 0x734 - 0x734
   bool m_bEndPointValid; // 0x735 - 0x735
   CHandle< CBaseEntity > m_hStartPoint; // 0x738 - 0x738
   CHandle< CBaseEntity > m_hEndPoint; // 0x73C - 0x73C
   AttachmentHandle_t m_iStartAttachment; // 0x740 - 0x740
   AttachmentHandle_t m_iEndAttachment; // 0x741 - 0x741

}; // size - 0x748


class CRotButton : public CBaseButton
{
public:


}; // size - 0x8B8


class CRuleEntity : public CBaseModelEntity
{
public:

   CUtlSymbolLarge m_iszMaster; // 0x6F0 - 0x6F0

}; // size - 0x6F8


class CRulePointEntity : public CRuleEntity
{
public:

   std::int32_t m_Score; // 0x6F8 - 0x6F8

}; // size - 0x700


class CSAdditionalMatchStats_t : public CSAdditionalPerRoundStats_t
{
public:

   std::int32_t m_numRoundsSurvived; // 0x14 - 0x14
   std::int32_t m_maxNumRoundsSurvived; // 0x18 - 0x18
   std::int32_t m_numRoundsSurvivedTotal; // 0x1C - 0x1C
   std::int32_t m_iRoundsWonWithoutPurchase; // 0x20 - 0x20
   std::int32_t m_iRoundsWonWithoutPurchaseTotal; // 0x24 - 0x24
   std::int32_t m_numFirstKills; // 0x28 - 0x28
   std::int32_t m_numClutchKills; // 0x2C - 0x2C
   std::int32_t m_numPistolKills; // 0x30 - 0x30
   std::int32_t m_numSniperKills; // 0x34 - 0x34

}; // size - 0x38


class CSMatchStats_t : public CSPerRoundStats_t
{
public:

   std::int32_t m_iEnemy5Ks; // 0x68 - 0x68
   std::int32_t m_iEnemy4Ks; // 0x6C - 0x6C
   std::int32_t m_iEnemy3Ks; // 0x70 - 0x70
   std::int32_t m_iEnemy2Ks; // 0x74 - 0x74
   std::int32_t m_iUtility_Count; // 0x78 - 0x78
   std::int32_t m_iUtility_Successes; // 0x7C - 0x7C
   std::int32_t m_iUtility_Enemies; // 0x80 - 0x80
   std::int32_t m_iFlash_Count; // 0x84 - 0x84
   std::int32_t m_iFlash_Successes; // 0x88 - 0x88
   std::int32_t m_nHealthPointsRemovedTotal; // 0x8C - 0x8C
   std::int32_t m_nHealthPointsDealtTotal; // 0x90 - 0x90
   std::int32_t m_nShotsFiredTotal; // 0x94 - 0x94
   std::int32_t m_nShotsOnTargetTotal; // 0x98 - 0x98
   std::int32_t m_i1v1Count; // 0x9C - 0x9C
   std::int32_t m_i1v1Wins; // 0xA0 - 0xA0
   std::int32_t m_i1v2Count; // 0xA4 - 0xA4
   std::int32_t m_i1v2Wins; // 0xA8 - 0xA8
   std::int32_t m_iEntryCount; // 0xAC - 0xAC
   std::int32_t m_iEntryWins; // 0xB0 - 0xB0

}; // size - 0xB8


class CSMatchStats_t : public CSPerRoundStats_t
{
public:

   std::int32_t m_iEnemy5Ks; // 0x68 - 0x68
   std::int32_t m_iEnemy4Ks; // 0x6C - 0x6C
   std::int32_t m_iEnemy3Ks; // 0x70 - 0x70

}; // size - 0x78


class CSPerRoundStats_t
{
public:

   std::int32_t m_iKills; // 0x30 - 0x30
   std::int32_t m_iDeaths; // 0x34 - 0x34
   std::int32_t m_iAssists; // 0x38 - 0x38
   std::int32_t m_iDamage; // 0x3C - 0x3C
   std::int32_t m_iEquipmentValue; // 0x40 - 0x40
   std::int32_t m_iMoneySaved; // 0x44 - 0x44
   std::int32_t m_iKillReward; // 0x48 - 0x48
   std::int32_t m_iLiveTime; // 0x4C - 0x4C
   std::int32_t m_iHeadShotKills; // 0x50 - 0x50
   std::int32_t m_iObjective; // 0x54 - 0x54
   std::int32_t m_iCashEarned; // 0x58 - 0x58
   std::int32_t m_iUtilityDamage; // 0x5C - 0x5C
   std::int32_t m_iEnemiesFlashed; // 0x60 - 0x60

}; // size - 0x68


class CSPerRoundStats_t
{
public:

   std::int32_t m_iKills; // 0x30 - 0x30
   std::int32_t m_iDeaths; // 0x34 - 0x34
   std::int32_t m_iAssists; // 0x38 - 0x38
   std::int32_t m_iDamage; // 0x3C - 0x3C
   std::int32_t m_iEquipmentValue; // 0x40 - 0x40
   std::int32_t m_iMoneySaved; // 0x44 - 0x44
   std::int32_t m_iKillReward; // 0x48 - 0x48
   std::int32_t m_iLiveTime; // 0x4C - 0x4C
   std::int32_t m_iHeadShotKills; // 0x50 - 0x50
   std::int32_t m_iObjective; // 0x54 - 0x54
   std::int32_t m_iCashEarned; // 0x58 - 0x58
   std::int32_t m_iUtilityDamage; // 0x5C - 0x5C
   std::int32_t m_iEnemiesFlashed; // 0x60 - 0x60

}; // size - 0x68


class CSceneEntity : public CPointEntity
{
public:

   CUtlSymbolLarge m_iszSceneFile; // 0x4A8 - 0x4A8
   CUtlSymbolLarge m_iszResumeSceneFile; // 0x4B0 - 0x4B0
   CUtlSymbolLarge m_iszTarget1; // 0x4B8 - 0x4B8
   CUtlSymbolLarge m_iszTarget2; // 0x4C0 - 0x4C0
   CUtlSymbolLarge m_iszTarget3; // 0x4C8 - 0x4C8
   CUtlSymbolLarge m_iszTarget4; // 0x4D0 - 0x4D0
   CUtlSymbolLarge m_iszTarget5; // 0x4D8 - 0x4D8
   CUtlSymbolLarge m_iszTarget6; // 0x4E0 - 0x4E0
   CUtlSymbolLarge m_iszTarget7; // 0x4E8 - 0x4E8
   CUtlSymbolLarge m_iszTarget8; // 0x4F0 - 0x4F0
   CHandle< CBaseEntity > m_hTarget1; // 0x4F8 - 0x4F8
   CHandle< CBaseEntity > m_hTarget2; // 0x4FC - 0x4FC
   CHandle< CBaseEntity > m_hTarget3; // 0x500 - 0x500
   CHandle< CBaseEntity > m_hTarget4; // 0x504 - 0x504
   CHandle< CBaseEntity > m_hTarget5; // 0x508 - 0x508
   CHandle< CBaseEntity > m_hTarget6; // 0x50C - 0x50C
   CHandle< CBaseEntity > m_hTarget7; // 0x510 - 0x510
   CHandle< CBaseEntity > m_hTarget8; // 0x514 - 0x514
   bool m_bIsPlayingBack; // 0x518 - 0x518
   bool m_bPaused; // 0x519 - 0x519
   bool m_bMultiplayer; // 0x51A - 0x51A
   bool m_bAutogenerated; // 0x51B - 0x51B
   std::float_t m_flForceClientTime; // 0x51C - 0x51C
   std::float_t m_flCurrentTime; // 0x520 - 0x520
   std::float_t m_flFrameTime; // 0x524 - 0x524
   bool m_bCancelAtNextInterrupt; // 0x528 - 0x528
   std::float_t m_fPitch; // 0x52C - 0x52C
   bool m_bAutomated; // 0x530 - 0x530
   std::int32_t m_nAutomatedAction; // 0x534 - 0x534
   std::float_t m_flAutomationDelay; // 0x538 - 0x538
   std::float_t m_flAutomationTime; // 0x53C - 0x53C
   CHandle< CBaseEntity > m_hWaitingForThisResumeScene; // 0x540 - 0x540
   bool m_bWaitingForResumeScene; // 0x544 - 0x544
   bool m_bPausedViaInput; // 0x545 - 0x545
   bool m_bPauseAtNextInterrupt; // 0x546 - 0x546
   bool m_bWaitingForActor; // 0x547 - 0x547
   bool m_bWaitingForInterrupt; // 0x548 - 0x548
   bool m_bInterruptedActorsScenes; // 0x549 - 0x549
   bool m_bBreakOnNonIdle; // 0x54A - 0x54A
   CNetworkUtlVectorBase< CHandle< CBaseFlex > > m_hActorList; // 0x550 - 0x550
   CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList; // 0x568 - 0x568
   std::int32_t m_nSceneFlushCounter; // 0x590 - 0x590
   std::uint16_t m_nSceneStringIndex; // 0x594 - 0x594
   CEntityIOOutput m_OnStart; // 0x598 - 0x598
   CEntityIOOutput m_OnCompletion; // 0x5C0 - 0x5C0
   CEntityIOOutput m_OnCanceled; // 0x5E8 - 0x5E8
   CEntityIOOutput m_OnPaused; // 0x610 - 0x610
   CEntityIOOutput m_OnResumed; // 0x638 - 0x638
   CEntityIOOutput m_OnTrigger[16]; // 0x660 - 0x660
   CHandle< CSceneEntity > m_hInterruptScene; // 0x970 - 0x970
   std::int32_t m_nInterruptCount; // 0x974 - 0x974
   bool m_bSceneMissing; // 0x978 - 0x978
   bool m_bInterrupted; // 0x979 - 0x979
   bool m_bCompletedEarly; // 0x97A - 0x97A
   bool m_bInterruptSceneFinished; // 0x97B - 0x97B
   bool m_bRestoring; // 0x97C - 0x97C
   CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion; // 0x980 - 0x980
   CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x998 - 0x998
   CUtlSymbolLarge m_iszSoundName; // 0x9D8 - 0x9D8
   CHandle< CBaseFlex > m_hActor; // 0x9E0 - 0x9E0
   CHandle< CBaseEntity > m_hActivator; // 0x9E4 - 0x9E4
   CHandle< CBaseEntity > m_hCamera; // 0x9E8 - 0x9E8
   std::int32_t m_BusyActor; // 0x9EC - 0x9EC
   SceneOnPlayerDeath_t m_iPlayerDeathBehavior; // 0x9F0 - 0x9F0

}; // size - 0xA00


class CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity
{
public:


}; // size - 0xA00


class CSceneListManager : public CLogicalEntity
{
public:

   CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x4A0 - 0x4A0
   CUtlSymbolLarge m_iszScenes[16]; // 0x4B8 - 0x4B8
   CHandle< CBaseEntity > m_hScenes[16]; // 0x538 - 0x538

}; // size - 0x578


class CSceneObjectData
{
public:

   Vector m_vMinBounds; // 0x0 - 0x0
   Vector m_vMaxBounds; // 0xC - 0xC
   CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x18 - 0x18
   CUtlVector< AABB_t > m_drawBounds; // 0x30 - 0x30
   CUtlVector< CMeshletDescriptor > m_meshlets; // 0x48 - 0x48
   Vector4D m_vTintColor; // 0x60 - 0x60

}; // size - 0x78


class CScriptComponent : public CEntityComponent
{
public:

   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x30

}; // size - 0x38


class CScriptComponent : public CEntityComponent
{
public:

   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x30

}; // size - 0x38


class CScriptComponent : public CEntityComponent
{
public:

   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x30

}; // size - 0x38


class CScriptItem : public CItem
{
public:

   CEntityIOOutput m_OnPlayerPickup; // 0x8F8 - 0x8F8
   MoveType_t m_MoveTypeOverride; // 0x920 - 0x920

}; // size - 0x928


class CScriptTriggerMultiple : public CTriggerMultiple
{
public:

   Vector m_vExtent; // 0x8C0 - 0x8C0

}; // size - 0x8D0


class CScriptTriggerOnce : public CTriggerOnce
{
public:

   Vector m_vExtent; // 0x8C0 - 0x8C0

}; // size - 0x8D0


class CScriptTriggerPush : public CTriggerPush
{
public:

   Vector m_vExtent; // 0x8C0 - 0x8C0

}; // size - 0x8D0


class CSeqAutoLayer
{
public:

   std::int16_t m_nLocalReference; // 0x0 - 0x0
   std::int16_t m_nLocalPose; // 0x2 - 0x2
   CSeqAutoLayerFlag m_flags; // 0x4 - 0x4
   std::float_t m_start; // 0xC - 0xC
   std::float_t m_peak; // 0x10 - 0x10
   std::float_t m_tail; // 0x14 - 0x14
   std::float_t m_end; // 0x18 - 0x18

}; // size - 0x1C


class CSeqAutoLayerFlag
{
public:

   bool m_bPost; // 0x0 - 0x0
   bool m_bSpline; // 0x1 - 0x1
   bool m_bXFade; // 0x2 - 0x2
   bool m_bNoBlend; // 0x3 - 0x3
   bool m_bLocal; // 0x4 - 0x4
   bool m_bPose; // 0x5 - 0x5
   bool m_bFetchFrame; // 0x6 - 0x6
   bool m_bSubtract; // 0x7 - 0x7

}; // size - 0x8


class CSeqMultiFetch
{
public:

   CSeqMultiFetchFlag m_flags; // 0x0 - 0x0
   CUtlVector< int16 > m_localReferenceArray; // 0x8 - 0x8
   int32 m_nGroupSize[2]; // 0x20 - 0x20
   int32 m_nLocalPose[2]; // 0x28 - 0x28
   CUtlVector< float32 > m_poseKeyArray0; // 0x30 - 0x30
   CUtlVector< float32 > m_poseKeyArray1; // 0x48 - 0x48
   std::int32_t m_nLocalCyclePoseParameter; // 0x60 - 0x60
   bool m_bCalculatePoseParameters; // 0x64 - 0x64

}; // size - 0x68


class CSeqPoseSetting
{
public:

   CBufferString m_sPoseParameter; // 0x0 - 0x0
   CBufferString m_sAttachment; // 0x10 - 0x10
   CBufferString m_sReferenceSequence; // 0x20 - 0x20
   std::float_t m_flValue; // 0x30 - 0x30
   bool m_bX; // 0x34 - 0x34
   bool m_bY; // 0x35 - 0x35
   bool m_bZ; // 0x36 - 0x36
   std::int32_t m_eType; // 0x38 - 0x38

}; // size - 0x40


class CSequenceUpdateNode : public CLeafUpdateNode
{
public:

   CParamSpanUpdater m_paramSpans; // 0x60 - 0x60
   CUtlVector< TagSpan_t > m_tags; // 0x78 - 0x78
   HSequence m_hSequence; // 0x94 - 0x94
   std::float_t m_playbackSpeed; // 0x98 - 0x98
   std::float_t m_duration; // 0x9C - 0x9C
   bool m_bLoop; // 0xA0 - 0xA0

}; // size - 0xA8


class CServerOnlyModelEntity : public C_BaseModelEntity
{
public:


}; // size - 0x838


class CSetParameterAction : public CAnimActionBase
{
public:

   AnimParamID m_param; // 0x28 - 0x28
   CAnimVariant m_value; // 0x2C - 0x2C

}; // size - 0x40


class CShower : public CModelPointEntity
{
public:


}; // size - 0x6F0


class CSkeletonInstance : public CGameSceneNode
{
public:

   CModelState m_modelState; // 0x160 - 0x160
   bool m_bIsAnimationEnabled; // 0x390 - 0x390
   bool m_bUseParentRenderBounds; // 0x391 - 0x391
   bool m_bDisableSolidCollisionsForHierarchy; // 0x392 - 0x392
   bitfield:1 m_bDirtyMotionType; // 0x0 - 0x0
   bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0 - 0x0
   CUtlStringToken m_materialGroup; // 0x394 - 0x394
   std::uint8_t m_nHitboxSet; // 0x398 - 0x398

}; // size - 0x3F0


class CSkeletonInstance : public CGameSceneNode
{
public:

   CModelState m_modelState; // 0x160 - 0x160
   bool m_bIsAnimationEnabled; // 0x390 - 0x390
   bool m_bUseParentRenderBounds; // 0x391 - 0x391
   bool m_bDisableSolidCollisionsForHierarchy; // 0x392 - 0x392
   bitfield:1 m_bDirtyMotionType; // 0x0 - 0x0
   bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0 - 0x0
   CUtlStringToken m_materialGroup; // 0x394 - 0x394
   std::uint8_t m_nHitboxSet; // 0x398 - 0x398

}; // size - 0x3F0


class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode
{
public:

   std::float_t m_flSlowDownStrength; // 0x68 - 0x68

}; // size - 0x70


class CSmokeGrenade : public CBaseCSGrenade
{
public:


}; // size - 0xD98


class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile
{
public:

   std::int32_t m_nSmokeEffectTickBegin; // 0x9B8 - 0x9B8
   bool m_bDidSmokeEffect; // 0x9BC - 0x9BC
   std::int32_t m_nRandomSeed; // 0x9C0 - 0x9C0
   Vector m_vSmokeColor; // 0x9C4 - 0x9C4
   Vector m_vSmokeDetonationPos; // 0x9D0 - 0x9D0
   CUtlVector< uint8 > m_VoxelFrameData; // 0x9E0 - 0x9E0
   GameTime_t m_flLastBounce; // 0x9F8 - 0x9F8
   GameTime_t m_fllastSimulationTime; // 0x9FC - 0x9FC

}; // size - 0xB90


class CSolveIKChainAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x40 - 0x40
   CUtlVector< CSolveIKChainAnimNodeChainData > m_IkChains; // 0x48 - 0x48

}; // size - 0x60


class CSolveIKChainUpdateNode : public CUnaryUpdateNode
{
public:

   CUtlVector< CAnimParamHandle > m_targetHandles; // 0x68 - 0x68
   SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80 - 0x80

}; // size - 0xA0


class CSosGroupBranchPattern
{
public:

   bool m_bMatchEventName; // 0x8 - 0x8
   bool m_bMatchEventSubString; // 0x9 - 0x9
   bool m_bMatchEntIndex; // 0xA - 0xA
   bool m_bMatchOpvar; // 0xB - 0xB

}; // size - 0x10


class CSosGroupMatchPattern : public CSosGroupBranchPattern
{
public:

   CUtlString m_matchSoundEventName; // 0x10 - 0x10
   CUtlString m_matchSoundEventSubString; // 0x18 - 0x18
   std::float_t m_flEntIndex; // 0x20 - 0x20
   std::float_t m_flOpvar; // 0x24 - 0x24

}; // size - 0x28


class CSoundAreaEntityBase : public CBaseEntity
{
public:

   bool m_bDisabled; // 0x4A0 - 0x4A0
   CUtlSymbolLarge m_iszSoundAreaType; // 0x4A8 - 0x4A8
   Vector m_vPos; // 0x4B0 - 0x4B0

}; // size - 0x4C0


class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase
{
public:

   Vector m_vMin; // 0x4C0 - 0x4C0
   Vector m_vMax; // 0x4CC - 0x4CC

}; // size - 0x4D8


class CSoundEnt : public CPointEntity
{
public:

   std::int32_t m_iFreeSound; // 0x4A0 - 0x4A0
   std::int32_t m_iActiveSound; // 0x4A4 - 0x4A4
   std::int32_t m_cLastActiveSounds; // 0x4A8 - 0x4A8
   CSound m_SoundPool[128]; // 0x4AC - 0x4AC

}; // size - 0x1EB0


class CSoundEventAABBEntity : public CSoundEventEntity
{
public:

   Vector m_vMins; // 0x548 - 0x548
   Vector m_vMaxs; // 0x554 - 0x554

}; // size - 0x560


class CSoundEventEntity : public CBaseEntity
{
public:

   bool m_bStartOnSpawn; // 0x4A0 - 0x4A0
   bool m_bToLocalPlayer; // 0x4A1 - 0x4A1
   bool m_bStopOnNew; // 0x4A2 - 0x4A2
   bool m_bSaveRestore; // 0x4A3 - 0x4A3
   bool m_bSavedIsPlaying; // 0x4A4 - 0x4A4
   std::float_t m_flSavedElapsedTime; // 0x4A8 - 0x4A8
   CUtlSymbolLarge m_iszSourceEntityName; // 0x4B0 - 0x4B0
   CUtlSymbolLarge m_iszAttachmentName; // 0x4B8 - 0x4B8
   CEntityOutputTemplate< uint64 > m_onGUIDChanged; // 0x4C0 - 0x4C0
   CEntityIOOutput m_onSoundFinished; // 0x4E8 - 0x4E8
   CUtlSymbolLarge m_iszSoundName; // 0x530 - 0x530
   CEntityHandle m_hSource; // 0x540 - 0x540

}; // size - 0x548


class CSoundEventMetaData
{
public:

   CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix; // 0x0 - 0x0

}; // size - 0x8


class CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity
{
public:


}; // size - 0x6A0


class CSoundPatch
{
public:

   CSoundEnvelope m_pitch; // 0x8 - 0x8
   CSoundEnvelope m_volume; // 0x18 - 0x18
   std::float_t m_shutdownTime; // 0x30 - 0x30
   std::float_t m_flLastTime; // 0x34 - 0x34
   CUtlSymbolLarge m_iszSoundScriptName; // 0x38 - 0x38
   CHandle< CBaseEntity > m_hEnt; // 0x40 - 0x40
   CEntityIndex m_soundEntityIndex; // 0x44 - 0x44
   Vector m_soundOrigin; // 0x48 - 0x48
   std::int32_t m_isPlaying; // 0x54 - 0x54
   CCopyRecipientFilter m_Filter; // 0x58 - 0x58
   std::float_t m_flCloseCaptionDuration; // 0x80 - 0x80
   bool m_bUpdatedSoundOrigin; // 0x84 - 0x84
   CUtlSymbolLarge m_iszClassName; // 0x88 - 0x88

}; // size - 0x90


class CSpeedScaleUpdateNode : public CUnaryUpdateNode
{
public:

   CAnimParamHandle m_paramIndex; // 0x68 - 0x68

}; // size - 0x70


class CSpinUpdateBase : public CParticleFunctionOperator
{
public:


}; // size - 0x1F0


class CSplineConstraint : public CPhysConstraint
{
public:


}; // size - 0x540


class CSpriteAlias_env_glow : public CSprite
{
public:


}; // size - 0x760


class CSpriteOriented : public CSprite
{
public:


}; // size - 0x760


class CStanceOverrideUpdateNode : public CUnaryUpdateNode
{
public:

   CUtlVector< StanceInfo_t > m_footStanceInfo; // 0x68 - 0x68
   CAnimUpdateNodeRef m_pStanceSourceNode; // 0x80 - 0x80
   CAnimParamHandle m_hParameter; // 0x90 - 0x90
   StanceOverrideMode m_eMode; // 0x94 - 0x94

}; // size - 0x98


class CStanceScaleAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x38
   AnimParamID m_param; // 0x40 - 0x40

}; // size - 0x48


class CStanceScaleUpdateNode : public CUnaryUpdateNode
{
public:

   CAnimParamHandle m_hParam; // 0x68 - 0x68

}; // size - 0x70


class CStateAction
{
public:

   CSmartPtr< CAnimActionBase > m_pAction; // 0x8 - 0x8
   StateActionBehavior m_eBehavior; // 0x10 - 0x10

}; // size - 0x18


class CStateActionUpdater
{
public:

   CSmartPtr< CAnimActionUpdater > m_pAction; // 0x0 - 0x0
   StateActionBehavior m_eBehavior; // 0x8 - 0x8

}; // size - 0x10


class CStateMachineAnimNode : public CAnimNodeBase
{
public:

   bool m_bBlockWaningTags; // 0x60 - 0x60
   bool m_bLockStateWhenWaning; // 0x61 - 0x61

}; // size - 0x68


class CStopAtGoalAnimNode : public CAnimNodeBase
{
public:

   CAnimNodeConnection m_inputConnection; // 0x38 - 0x38
   std::float_t m_flOuterRadius; // 0x40 - 0x40
   std::float_t m_flInnerRadius; // 0x44 - 0x44
   std::float_t m_flMaxScale; // 0x48 - 0x48
   std::float_t m_flMinScale; // 0x4C - 0x4C
   CAnimInputDamping m_damping; // 0x50 - 0x50

}; // size - 0x60


class CStopwatch : public CStopwatchBase
{
public:

   std::float_t m_interval; // 0xC - 0xC

}; // size - 0x10


class CStopwatchBase : public CSimpleSimTimer
{
public:

   bool m_fIsRunning; // 0x8 - 0x8

}; // size - 0xC


class CSurvivalSpawnChopper : public CBaseAnimGraph
{
public:

   CSoundPatch* m_pSoundLoop; // 0x820 - 0x820
   GameTime_t m_flSpawnTimeStamp; // 0x828 - 0x828
   std::float_t m_flFlightPathRotationOffset; // 0x82C - 0x82C
   bool m_bFlipX; // 0x830 - 0x830
   bool m_bFlipY; // 0x831 - 0x831
   bool m_bCircling; // 0x832 - 0x832
   GameTime_t m_flLastPassengerCheckTime; // 0x834 - 0x834

}; // size - 0x838


class CTabletBlocker : public CTabletBlockerShim
{
public:


}; // size - 0x8A0


class CTankTargetChange : public CPointEntity
{
public:

   CVariantBase< CVariantDefaultAllocator > m_newTarget; // 0x4A0 - 0x4A0
   CUtlSymbolLarge m_newTargetName; // 0x4B0 - 0x4B0

}; // size - 0x4B8


class CTaskStatusAnimTag : public CAnimTagBase
{
public:

   CUtlString m_identifierString; // 0x40 - 0x40

}; // size - 0x50


class CTeam : public CBaseEntity
{
public:

   CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x4A0 - 0x4A0
   CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers; // 0x4B8 - 0x4B8
   std::int32_t m_iScore; // 0x4D0 - 0x4D0
   char m_szTeamname[129]; // 0x4D4 - 0x4D4

}; // size - 0x558


class CTeamplayRules : public CMultiplayRules
{
public:


}; // size - 0x90


class CTimeRemainingMetric : public CMotionMetricBase
{
public:

   bool m_bMatchByTimeRemaining; // 0x28 - 0x28
   std::float_t m_flMaxTimeRemaining; // 0x2C - 0x2C
   bool m_bFilterByTimeRemaining; // 0x30 - 0x30
   std::float_t m_flMinTimeRemaining; // 0x34 - 0x34

}; // size - 0x38


class CTimeline : public IntervalTimer
{
public:

   float32 m_flValues[64]; // 0x10 - 0x10
   int32 m_nValueCounts[64]; // 0x110 - 0x110
   std::int32_t m_nBucketCount; // 0x210 - 0x210
   std::float_t m_flInterval; // 0x214 - 0x214
   std::float_t m_flFinalValue; // 0x218 - 0x218
   TimelineCompression_t m_nCompressionType; // 0x21C - 0x21C
   bool m_bStopped; // 0x220 - 0x220

}; // size - 0x228


class CTimeline : public IntervalTimer
{
public:

   float32 m_flValues[64]; // 0x10 - 0x10
   int32 m_nValueCounts[64]; // 0x110 - 0x110
   std::int32_t m_nBucketCount; // 0x210 - 0x210
   std::float_t m_flInterval; // 0x214 - 0x214
   std::float_t m_flFinalValue; // 0x218 - 0x218
   TimelineCompression_t m_nCompressionType; // 0x21C - 0x21C
   bool m_bStopped; // 0x220 - 0x220

}; // size - 0x228


class CTimerEntity : public CLogicalEntity
{
public:

   CEntityIOOutput m_OnTimer; // 0x4A0 - 0x4A0
   CEntityIOOutput m_OnTimerHigh; // 0x4C8 - 0x4C8
   CEntityIOOutput m_OnTimerLow; // 0x4F0 - 0x4F0
   std::int32_t m_iDisabled; // 0x518 - 0x518
   std::float_t m_flInitialDelay; // 0x51C - 0x51C
   std::float_t m_flRefireTime; // 0x520 - 0x520
   bool m_bUpDownState; // 0x524 - 0x524
   std::int32_t m_iUseRandomTime; // 0x528 - 0x528
   bool m_bPauseAfterFiring; // 0x52C - 0x52C
   std::float_t m_flLowerRandomBound; // 0x530 - 0x530
   std::float_t m_flUpperRandomBound; // 0x534 - 0x534
   std::float_t m_flRemainingTime; // 0x538 - 0x538
   bool m_bPaused; // 0x53C - 0x53C

}; // size - 0x540


class CTonemapController2Alias_env_tonemap_controller2 : public CTonemapController2
{
public:


}; // size - 0x4C8


class CTriggerBuoyancy : public CBaseTrigger
{
public:

   CBuoyancyHelper m_BuoyancyHelper; // 0x898 - 0x898
   std::float_t m_flFluidDensity; // 0x8B8 - 0x8B8

}; // size - 0x8C0


class CTriggerCallback : public CBaseTrigger
{
public:


}; // size - 0x8A0


class CTriggerDetectBulletFire : public CBaseTrigger
{
public:

   bool m_bPlayerFireOnly; // 0x898 - 0x898
   CEntityIOOutput m_OnDetectedBulletFire; // 0x8A0 - 0x8A0

}; // size - 0x8C8


class CTriggerFan : public CBaseTrigger
{
public:

   Vector m_vFanOrigin; // 0x898 - 0x898
   Vector m_vFanEnd; // 0x8A4 - 0x8A4
   Vector m_vNoise; // 0x8B0 - 0x8B0
   std::float_t m_flForce; // 0x8BC - 0x8BC
   std::float_t m_flPlayerForce; // 0x8C0 - 0x8C0
   std::float_t m_flRampTime; // 0x8C4 - 0x8C4
   bool m_bFalloff; // 0x8C8 - 0x8C8
   bool m_bPushPlayer; // 0x8C9 - 0x8C9
   bool m_bRampDown; // 0x8CA - 0x8CA
   bool m_bAddNoise; // 0x8CB - 0x8CB
   CountdownTimer m_RampTimer; // 0x8D0 - 0x8D0

}; // size - 0x8E8


class CTriggerGameEvent : public CBaseTrigger
{
public:

   CUtlString m_strStartTouchEventName; // 0x898 - 0x898
   CUtlString m_strEndTouchEventName; // 0x8A0 - 0x8A0
   CUtlString m_strTriggerID; // 0x8A8 - 0x8A8

}; // size - 0x8B0


class CTriggerHurt : public CBaseTrigger
{
public:

   std::float_t m_flOriginalDamage; // 0x898 - 0x898
   std::float_t m_flDamage; // 0x89C - 0x89C
   std::float_t m_flDamageCap; // 0x8A0 - 0x8A0
   GameTime_t m_flLastDmgTime; // 0x8A4 - 0x8A4
   std::float_t m_flForgivenessDelay; // 0x8A8 - 0x8A8
   std::int32_t m_bitsDamageInflict; // 0x8AC - 0x8AC
   std::int32_t m_damageModel; // 0x8B0 - 0x8B0
   bool m_bNoDmgForce; // 0x8B4 - 0x8B4
   Vector m_vDamageForce; // 0x8B8 - 0x8B8
   bool m_thinkAlways; // 0x8C4 - 0x8C4
   std::float_t m_hurtThinkPeriod; // 0x8C8 - 0x8C8
   CEntityIOOutput m_OnHurt; // 0x8D0 - 0x8D0
   CEntityIOOutput m_OnHurtPlayer; // 0x8F8 - 0x8F8
   CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x920 - 0x920

}; // size - 0x938


class CTriggerOnce : public CTriggerMultiple
{
public:


}; // size - 0x8C0


class CTriggerProximity : public CBaseTrigger
{
public:

   CHandle< CBaseEntity > m_hMeasureTarget; // 0x898 - 0x898
   CUtlSymbolLarge m_iszMeasureTarget; // 0x8A0 - 0x8A0
   std::float_t m_fRadius; // 0x8A8 - 0x8A8
   std::int32_t m_nTouchers; // 0x8AC - 0x8AC
   CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x8B0 - 0x8B0

}; // size - 0x8D8


class CTriggerPush : public CBaseTrigger
{
public:

   QAngle m_angPushEntitySpace; // 0x898 - 0x898
   Vector m_vecPushDirEntitySpace; // 0x8A4 - 0x8A4
   bool m_bTriggerOnStartTouch; // 0x8B0 - 0x8B0
   std::float_t m_flAlternateTicksFix; // 0x8B4 - 0x8B4
   std::float_t m_flPushSpeed; // 0x8B8 - 0x8B8

}; // size - 0x8C0


class CTriggerRemove : public CBaseTrigger
{
public:

   CEntityIOOutput m_OnRemove; // 0x898 - 0x898

}; // size - 0x8C0


class CTriggerSafeMoneyGather : public CBaseTrigger
{
public:

   CUtlVector< CHandle< CBaseEntity > > m_vecCashBundles; // 0x898 - 0x898

}; // size - 0x8B0


class CTriggerSndSosOpvar : public CBaseTrigger
{
public:

   CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x898 - 0x898
   Vector m_flPosition; // 0x8B0 - 0x8B0
   std::float_t m_flCenterSize; // 0x8BC - 0x8BC
   std::float_t m_flMinVal; // 0x8C0 - 0x8C0
   std::float_t m_flMaxVal; // 0x8C4 - 0x8C4
   std::float_t m_flWait; // 0x8C8 - 0x8C8
   CUtlSymbolLarge m_opvarName; // 0x8D0 - 0x8D0
   CUtlSymbolLarge m_stackName; // 0x8D8 - 0x8D8
   CUtlSymbolLarge m_operatorName; // 0x8E0 - 0x8E0
   bool m_bVolIs2D; // 0x8E8 - 0x8E8
   char m_opvarNameChar[256]; // 0x8E9 - 0x8E9
   char m_stackNameChar[256]; // 0x9E9 - 0x9E9
   char m_operatorNameChar[256]; // 0xAE9 - 0xAE9
   Vector m_VecNormPos; // 0xBEC - 0xBEC
   std::float_t m_flNormCenterSize; // 0xBF8 - 0xBF8

}; // size - 0xC00


class CTriggerSurvivalPlayArea : public CTriggerCustomBounds
{
public:


}; // size - 0x898


class CTriggerVolume : public CBaseModelEntity
{
public:

   CUtlSymbolLarge m_iFilterName; // 0x6F0 - 0x6F0
   CHandle< CBaseFilter > m_hFilter; // 0x6F8 - 0x6F8

}; // size - 0x700


class CVRInputComponent : public CAnimComponentBase
{
public:

   AnimParamID m_FingerCurl_Thumb; // 0x38 - 0x38
   AnimParamID m_FingerCurl_Index; // 0x3C - 0x3C
   AnimParamID m_FingerCurl_Middle; // 0x40 - 0x40
   AnimParamID m_FingerCurl_Ring; // 0x44 - 0x44
   AnimParamID m_FingerCurl_Pinky; // 0x48 - 0x48
   AnimParamID m_FingerSplay_Thumb_Index; // 0x4C - 0x4C
   AnimParamID m_FingerSplay_Index_Middle; // 0x50 - 0x50
   AnimParamID m_FingerSplay_Middle_Ring; // 0x54 - 0x54
   AnimParamID m_FingerSplay_Ring_Pinky; // 0x58 - 0x58

}; // size - 0x60


class CWayPointHelperUpdateNode : public CUnaryUpdateNode
{
public:

   std::float_t m_flStartCycle; // 0x6C - 0x6C
   std::float_t m_flEndCycle; // 0x70 - 0x70
   bool m_bOnlyGoals; // 0x74 - 0x74
   bool m_bPreventOvershoot; // 0x75 - 0x75
   bool m_bPreventUndershoot; // 0x76 - 0x76

}; // size - 0x78


class CWeaponAug : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponHKP2000 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponSG556 : public CWeaponCSBaseGun
{
public:


}; // size - 0xD70


class CWeaponSawedoff : public CWeaponCSBase
{
public:


}; // size - 0xD50


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


class C_AttributeContainer : public CAttributeManager
{
public:

   C_EconItemView m_Item; // 0x50 - 0x50
   std::int32_t m_iExternalItemProviderRegisteredToken; // 0x498 - 0x498
   std::uint64_t m_ullRegisteredAsItemID; // 0x4A0 - 0x4A0

}; // size - 0x4A8


class C_BRC4Target : public CBaseAnimGraph
{
public:

   bool m_bBrokenOpen; // 0x9A0 - 0x9A0
   std::float_t m_flRadius; // 0x9A4 - 0x9A4

}; // size - 0x9A8


class C_BarnLight : public C_BaseModelEntity
{
public:

   bool m_bEnabled; // 0x838 - 0x838
   std::int32_t m_nColorMode; // 0x83C - 0x83C
   Color m_Color; // 0x840 - 0x840
   std::float_t m_flColorTemperature; // 0x844 - 0x844
   std::float_t m_flBrightness; // 0x848 - 0x848
   std::float_t m_flBrightnessScale; // 0x84C - 0x84C
   std::int32_t m_nDirectLight; // 0x850 - 0x850
   std::int32_t m_nBakedShadowIndex; // 0x854 - 0x854
   std::int32_t m_nLuminaireShape; // 0x858 - 0x858
   std::float_t m_flLuminaireSize; // 0x85C - 0x85C
   std::float_t m_flLuminaireAnisotropy; // 0x860 - 0x860
   CUtlString m_LightStyleString; // 0x868 - 0x868
   GameTime_t m_flLightStyleStartTime; // 0x870 - 0x870
   C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x878 - 0x878
   C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x890 - 0x890
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // 0x8A8 - 0x8A8
   CEntityIOOutput m_StyleEvent[4]; // 0x8C0 - 0x8C0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x960 - 0x960
   std::float_t m_flShape; // 0x968 - 0x968
   std::float_t m_flSoftX; // 0x96C - 0x96C
   std::float_t m_flSoftY; // 0x970 - 0x970
   std::float_t m_flSkirt; // 0x974 - 0x974
   std::float_t m_flSkirtNear; // 0x978 - 0x978
   Vector m_vSizeParams; // 0x97C - 0x97C
   std::float_t m_flRange; // 0x988 - 0x988
   Vector m_vShear; // 0x98C - 0x98C
   std::int32_t m_nBakeSpecularToCubemaps; // 0x998 - 0x998
   Vector m_vBakeSpecularToCubemapsSize; // 0x99C - 0x99C
   std::int32_t m_nCastShadows; // 0x9A8 - 0x9A8
   std::int32_t m_nShadowMapSize; // 0x9AC - 0x9AC
   std::int32_t m_nShadowPriority; // 0x9B0 - 0x9B0
   bool m_bContactShadow; // 0x9B4 - 0x9B4
   std::int32_t m_nBounceLight; // 0x9B8 - 0x9B8
   std::float_t m_flBounceScale; // 0x9BC - 0x9BC
   std::float_t m_flMinRoughness; // 0x9C0 - 0x9C0
   std::int32_t m_nFog; // 0x9C4 - 0x9C4
   std::float_t m_flFogStrength; // 0x9C8 - 0x9C8
   std::int32_t m_nFogShadows; // 0x9CC - 0x9CC
   std::float_t m_flFogScale; // 0x9D0 - 0x9D0
   std::float_t m_flFadeSizeStart; // 0x9D4 - 0x9D4
   std::float_t m_flFadeSizeEnd; // 0x9D8 - 0x9D8
   std::float_t m_flShadowFadeSizeStart; // 0x9DC - 0x9DC
   std::float_t m_flShadowFadeSizeEnd; // 0x9E0 - 0x9E0
   bool m_bPrecomputedFieldsValid; // 0x9E4 - 0x9E4
   Vector m_vPrecomputedBoundsMins; // 0x9E8 - 0x9E8
   Vector m_vPrecomputedBoundsMaxs; // 0x9F4 - 0x9F4
   Vector m_vPrecomputedOBBOrigin; // 0xA00 - 0xA00
   QAngle m_vPrecomputedOBBAngles; // 0xA0C - 0xA0C
   Vector m_vPrecomputedOBBExtent; // 0xA18 - 0xA18

}; // size - 0xA70


class C_BaseDoor : public C_BaseToggle
{
public:

   bool m_bIsUsable; // 0x838 - 0x838

}; // size - 0x840


class C_BaseFire : public C_BaseEntity
{
public:

   std::float_t m_flScale; // 0x538 - 0x538
   std::float_t m_flStartScale; // 0x53C - 0x53C
   std::float_t m_flScaleTime; // 0x540 - 0x540
   std::uint32_t m_nFlags; // 0x544 - 0x544

}; // size - 0x548


class C_BreachCharge : public C_WeaponCSBase
{
public:


}; // size - 0x13E0


class C_BreakableProp : public CBaseProp
{
public:

   CEntityIOOutput m_OnBreak; // 0x9E0 - 0x9E0
   CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xA08 - 0xA08
   CEntityIOOutput m_OnTakeDamage; // 0xA30 - 0xA30
   std::float_t m_impactEnergyScale; // 0xA58 - 0xA58
   std::int32_t m_iMinHealthDmg; // 0xA5C - 0xA5C
   std::float_t m_flPressureDelay; // 0xA60 - 0xA60
   CHandle< C_BaseEntity > m_hBreaker; // 0xA64 - 0xA64
   PerformanceMode_t m_PerformanceMode; // 0xA68 - 0xA68
   std::float_t m_flDmgModBullet; // 0xA6C - 0xA6C
   std::float_t m_flDmgModClub; // 0xA70 - 0xA70
   std::float_t m_flDmgModExplosive; // 0xA74 - 0xA74
   std::float_t m_flDmgModFire; // 0xA78 - 0xA78
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xA80 - 0xA80
   CUtlSymbolLarge m_iszBasePropData; // 0xA88 - 0xA88
   std::int32_t m_iInteractions; // 0xA90 - 0xA90
   GameTime_t m_flPreventDamageBeforeTime; // 0xA94 - 0xA94
   bool m_bHasBreakPiecesOrCommands; // 0xA98 - 0xA98
   std::float_t m_explodeDamage; // 0xA9C - 0xA9C
   std::float_t m_explodeRadius; // 0xAA0 - 0xAA0
   std::float_t m_explosionDelay; // 0xAA8 - 0xAA8
   CUtlSymbolLarge m_explosionBuildupSound; // 0xAB0 - 0xAB0
   CUtlSymbolLarge m_explosionCustomEffect; // 0xAB8 - 0xAB8
   CUtlSymbolLarge m_explosionCustomSound; // 0xAC0 - 0xAC0
   CUtlSymbolLarge m_explosionModifier; // 0xAC8 - 0xAC8
   CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0xAD0 - 0xAD0
   GameTime_t m_flLastPhysicsInfluenceTime; // 0xAD4 - 0xAD4
   std::float_t m_flDefaultFadeScale; // 0xAD8 - 0xAD8
   CHandle< C_BaseEntity > m_hLastAttacker; // 0xADC - 0xADC
   CHandle< C_BaseEntity > m_hFlareEnt; // 0xAE0 - 0xAE0
   bool m_noGhostCollision; // 0xAE4 - 0xAE4

}; // size - 0xAE8


class C_BulletHitModel : public CBaseAnimGraph
{
public:

   matrix3x4_t m_matLocal; // 0x998 - 0x998
   std::int32_t m_iBoneIndex; // 0x9C8 - 0x9C8
   CHandle< C_BaseEntity > m_hPlayerParent; // 0x9CC - 0x9CC
   bool m_bIsHit; // 0x9D0 - 0x9D0
   std::float_t m_flTimeCreated; // 0x9D4 - 0x9D4
   Vector m_vecStartPos; // 0x9D8 - 0x9D8

}; // size - 0x9E8


class C_BumpMine : public C_WeaponCSBase
{
public:


}; // size - 0x13D0


class C_BumpMineProjectile : public C_BaseGrenade
{
public:

   bool m_bShouldExplode; // 0xB78 - 0xB78
   std::int32_t m_nParentBoneIndex; // 0xB7C - 0xB7C
   Vector m_vecParentBonePos; // 0xB80 - 0xB80
   bool m_bArmed; // 0xB8C - 0xB8C

}; // size - 0xBB0


class C_CSGOViewModel : public C_PredictedViewModel
{
public:

   bool m_bShouldIgnoreOffsetAndAccuracy; // 0xA28 - 0xA28
   Vector m_vecCamDriverLastPos; // 0xA2C - 0xA2C
   QAngle m_angCamDriverLastAng; // 0xA38 - 0xA38
   std::float_t m_flCamDriverAppliedTime; // 0xA44 - 0xA44
   std::float_t m_flCamDriverWeight; // 0xA48 - 0xA48
   std::uint32_t m_nWeaponParity; // 0xA4C - 0xA4C
   std::uint32_t m_nOldWeaponParity; // 0xA50 - 0xA50
   CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0xA54 - 0xA54
   bool m_bNeedToQueueHighResComposite; // 0xA58 - 0xA58
   QAngle m_vLoweredWeaponOffset; // 0xA9C - 0xA9C

}; // size - 0xAA8


class C_CSGO_CounterTerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera
{
public:


}; // size - 0x5B0


class C_CSGO_EndOfMatchCamera : public C_CSGO_TeamPreviewCamera
{
public:


}; // size - 0x5B0


class C_CSGO_EndOfMatchLineupEndpoint : public C_BaseEntity
{
public:


}; // size - 0x538


class C_CSGO_EndOfMatchLineupStart : public C_CSGO_EndOfMatchLineupEndpoint
{
public:


}; // size - 0x538


class C_CSGO_PreviewModel : public C_BaseFlex
{
public:

   CUtlString m_animgraph; // 0xB28 - 0xB28
   CUtlString m_animgraphCharacterModeString; // 0xB30 - 0xB30
   CUtlString m_defaultAnim; // 0xB38 - 0xB38
   AnimLoopMode_t m_nDefaultAnimLoopMode; // 0xB40 - 0xB40
   std::float_t m_flInitialModelScale; // 0xB44 - 0xB44

}; // size - 0xBF0


class C_CSGO_PreviewModelAlias_csgo_item_previewmodel : public C_CSGO_PreviewModel
{
public:


}; // size - 0xBF0


class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public C_CSGO_PreviewPlayer
{
public:


}; // size - 0x1A30


class C_CSGO_TeamIntroCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition
{
public:


}; // size - 0x9D0


class C_CSGO_TeamIntroTerroristPosition : public C_CSGO_TeamIntroCharacterPosition
{
public:


}; // size - 0x9D0


class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity
{
public:

   std::int32_t m_nOrdinal; // 0x538 - 0x538
   CUtlString m_sWeaponName; // 0x540 - 0x540
   std::uint64_t m_xuid; // 0x548 - 0x548
   C_EconItemView m_weaponItem; // 0x550 - 0x550

}; // size - 0x9D0


class C_CSPlayerResource : public C_BaseEntity
{
public:

   bool m_bHostageAlive[12]; // 0x538 - 0x538
   bool m_isHostageFollowingSomeone[12]; // 0x544 - 0x544
   CEntityIndex m_iHostageEntityIDs[12]; // 0x550 - 0x550
   Vector m_bombsiteCenterA; // 0x580 - 0x580
   Vector m_bombsiteCenterB; // 0x58C - 0x58C
   int32 m_hostageRescueX[4]; // 0x598 - 0x598
   int32 m_hostageRescueY[4]; // 0x5A8 - 0x5A8
   int32 m_hostageRescueZ[4]; // 0x5B8 - 0x5B8
   bool m_bEndMatchNextMapAllVoted; // 0x5C8 - 0x5C8
   bool m_foundGoalPositions; // 0x5C9 - 0x5C9

}; // size - 0x5D0


class C_ClientRagdoll : public CBaseAnimGraph
{
public:

   bool m_bFadeOut; // 0x998 - 0x998
   bool m_bImportant; // 0x999 - 0x999
   GameTime_t m_flEffectTime; // 0x99C - 0x99C
   GameTime_t m_gibDespawnTime; // 0x9A0 - 0x9A0
   std::int32_t m_iCurrentFriction; // 0x9A4 - 0x9A4
   std::int32_t m_iMinFriction; // 0x9A8 - 0x9A8
   std::int32_t m_iMaxFriction; // 0x9AC - 0x9AC
   std::int32_t m_iFrictionAnimState; // 0x9B0 - 0x9B0
   bool m_bReleaseRagdoll; // 0x9B4 - 0x9B4
   AttachmentHandle_t m_iEyeAttachment; // 0x9B5 - 0x9B5
   bool m_bFadingOut; // 0x9B6 - 0x9B6
   float32 m_flScaleEnd[10]; // 0x9B8 - 0x9B8
   GameTime_t m_flScaleTimeStart[10]; // 0x9E0 - 0x9E0
   GameTime_t m_flScaleTimeEnd[10]; // 0xA08 - 0xA08

}; // size - 0xA30


class C_ColorCorrection : public C_BaseEntity
{
public:

   Vector m_vecOrigin; // 0x538 - 0x538
   std::float_t m_MinFalloff; // 0x544 - 0x544
   std::float_t m_MaxFalloff; // 0x548 - 0x548
   std::float_t m_flFadeInDuration; // 0x54C - 0x54C
   std::float_t m_flFadeOutDuration; // 0x550 - 0x550
   std::float_t m_flMaxWeight; // 0x554 - 0x554
   std::float_t m_flCurWeight; // 0x558 - 0x558
   char m_netlookupFilename[512]; // 0x55C - 0x55C
   bool m_bEnabled; // 0x75C - 0x75C
   bool m_bMaster; // 0x75D - 0x75D
   bool m_bClientSide; // 0x75E - 0x75E
   bool m_bExclusive; // 0x75F - 0x75F
   bool m_bEnabledOnClient[1]; // 0x760 - 0x760
   float32 m_flCurWeightOnClient[1]; // 0x764 - 0x764
   bool m_bFadingIn[1]; // 0x768 - 0x768
   float32 m_flFadeStartWeight[1]; // 0x76C - 0x76C
   float32 m_flFadeStartTime[1]; // 0x770 - 0x770
   float32 m_flFadeDuration[1]; // 0x774 - 0x774

}; // size - 0x780


class C_CommandContext
{
public:

   bool needsprocessing; // 0x0 - 0x0
   std::int32_t command_number; // 0x78 - 0x78

}; // size - 0x80


class C_DEagle : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_DangerZoneController : public C_BaseEntity
{
public:

   bool m_bDangerZoneControllerEnabled; // 0x538 - 0x538
   bool m_bMissionControlledExplosions; // 0x539 - 0x539
   Vector m_vecEndGameCircleStart; // 0x53C - 0x53C
   Vector m_vecEndGameCircleEnd; // 0x548 - 0x548
   GameTime_t m_flStartTime; // 0x554 - 0x554
   std::float_t m_flFinalExpansionTime; // 0x558 - 0x558
   CHandle< C_DangerZone > m_DangerZones[42]; // 0x55C - 0x55C
   GameTime_t m_flWaveEndTimes[5]; // 0x604 - 0x604
   CHandle< C_DangerZone > m_hTheFinalZone; // 0x618 - 0x618

}; // size - 0x620


class C_DecoyProjectile : public C_BaseCSGrenadeProjectile
{
public:

   GameTime_t m_flTimeParticleEffectSpawn; // 0xC20 - 0xC20

}; // size - 0xC28


class C_DynamicProp : public C_BreakableProp
{
public:

   bool m_bUseHitboxesForRenderBox; // 0xAE8 - 0xAE8
   bool m_bUseAnimGraph; // 0xAE9 - 0xAE9
   CEntityIOOutput m_pOutputAnimBegun; // 0xAF0 - 0xAF0
   CEntityIOOutput m_pOutputAnimOver; // 0xB18 - 0xB18
   CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xB40 - 0xB40
   CEntityIOOutput m_OnAnimReachedStart; // 0xB68 - 0xB68
   CEntityIOOutput m_OnAnimReachedEnd; // 0xB90 - 0xB90
   CUtlSymbolLarge m_iszDefaultAnim; // 0xBB8 - 0xBB8
   AnimLoopMode_t m_nDefaultAnimLoopMode; // 0xBC0 - 0xBC0
   bool m_bAnimateOnServer; // 0xBC4 - 0xBC4
   bool m_bRandomizeCycle; // 0xBC5 - 0xBC5
   bool m_bStartDisabled; // 0xBC6 - 0xBC6
   bool m_bScriptedMovement; // 0xBC7 - 0xBC7
   bool m_bFiredStartEndOutput; // 0xBC8 - 0xBC8
   bool m_bForceNpcExclude; // 0xBC9 - 0xBC9
   bool m_bCreateNonSolid; // 0xBCA - 0xBCA
   bool m_bIsOverrideProp; // 0xBCB - 0xBCB
   std::int32_t m_iInitialGlowState; // 0xBCC - 0xBCC
   std::int32_t m_nGlowRange; // 0xBD0 - 0xBD0
   std::int32_t m_nGlowRangeMin; // 0xBD4 - 0xBD4
   Color m_glowColor; // 0xBD8 - 0xBD8
   std::int32_t m_nGlowTeam; // 0xBDC - 0xBDC
   std::int32_t m_iCachedFrameCount; // 0xBE0 - 0xBE0
   Vector m_vecCachedRenderMins; // 0xBE4 - 0xBE4
   Vector m_vecCachedRenderMaxs; // 0xBF0 - 0xBF0

}; // size - 0xC00


class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp
{
public:


}; // size - 0xC00



class C_EconItemView : public IEconItemInterface
{
public:

   bool m_bInventoryImageRgbaRequested; // 0x60 - 0x60
   bool m_bInventoryImageTriedCache; // 0x61 - 0x61
   std::int32_t m_nInventoryImageRgbaWidth; // 0x80 - 0x80
   std::int32_t m_nInventoryImageRgbaHeight; // 0x84 - 0x84
   char m_szCurrentLoadCachedFileName[260]; // 0x88 - 0x88
   bool m_bRestoreCustomMaterialAfterPrecache; // 0x1B8 - 0x1B8
   std::uint16_t m_iItemDefinitionIndex; // 0x1BA - 0x1BA
   std::int32_t m_iEntityQuality; // 0x1BC - 0x1BC
   std::uint32_t m_iEntityLevel; // 0x1C0 - 0x1C0
   std::uint64_t m_iItemID; // 0x1C8 - 0x1C8
   std::uint32_t m_iItemIDHigh; // 0x1D0 - 0x1D0
   std::uint32_t m_iItemIDLow; // 0x1D4 - 0x1D4
   std::uint32_t m_iAccountID; // 0x1D8 - 0x1D8
   std::uint32_t m_iInventoryPosition; // 0x1DC - 0x1DC
   bool m_bInitialized; // 0x1E8 - 0x1E8
   bool m_bIsStoreItem; // 0x1E9 - 0x1E9
   bool m_bIsTradeItem; // 0x1EA - 0x1EA
   std::int32_t m_iEntityQuantity; // 0x1EC - 0x1EC
   std::int32_t m_iRarityOverride; // 0x1F0 - 0x1F0
   std::int32_t m_iQualityOverride; // 0x1F4 - 0x1F4
   std::uint8_t m_unClientFlags; // 0x1F8 - 0x1F8
   std::uint8_t m_unOverrideStyle; // 0x1F9 - 0x1F9
   CAttributeList m_AttributeList; // 0x210 - 0x210
   CAttributeList m_NetworkedDynamicAttributes; // 0x270 - 0x270
   char m_szCustomName[161]; // 0x2D0 - 0x2D0
   char m_szCustomNameOverride[161]; // 0x371 - 0x371
   bool m_bInitializedTags; // 0x440 - 0x440

}; // size - 0x448


class C_EconWearable : public C_EconEntity
{
public:

   std::int32_t m_nForceSkin; // 0x1070 - 0x1070
   bool m_bAlwaysAllow; // 0x1074 - 0x1074

}; // size - 0x1078


class C_EnvCombinedLightProbeVolume : public C_BaseEntity
{
public:

   Color m_Color; // 0x1608 - 0x1608
   std::float_t m_flBrightness; // 0x160C - 0x160C
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1610 - 0x1610
   bool m_bCustomCubemapTexture; // 0x1618 - 0x1618
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1620 - 0x1620
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1628 - 0x1628
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1630 - 0x1630
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1638 - 0x1638
   Vector m_vBoxMins; // 0x1640 - 0x1640
   Vector m_vBoxMaxs; // 0x164C - 0x164C
   CUtlSymbolLarge m_LightGroups; // 0x1658 - 0x1658
   bool m_bMoveable; // 0x1660 - 0x1660
   std::int32_t m_nHandshake; // 0x1664 - 0x1664
   std::int32_t m_nEnvCubeMapArrayIndex; // 0x1668 - 0x1668
   std::int32_t m_nPriority; // 0x166C - 0x166C
   bool m_bStartDisabled; // 0x1670 - 0x1670
   std::float_t m_flEdgeFadeDist; // 0x1674 - 0x1674
   Vector m_vEdgeFadeDists; // 0x1678 - 0x1678
   std::int32_t m_nLightProbeSizeX; // 0x1684 - 0x1684
   std::int32_t m_nLightProbeSizeY; // 0x1688 - 0x1688
   std::int32_t m_nLightProbeSizeZ; // 0x168C - 0x168C
   std::int32_t m_nLightProbeAtlasX; // 0x1690 - 0x1690
   std::int32_t m_nLightProbeAtlasY; // 0x1694 - 0x1694
   std::int32_t m_nLightProbeAtlasZ; // 0x1698 - 0x1698
   bool m_bEnabled; // 0x16B1 - 0x16B1

}; // size - 0x16B8


class C_EnvCubemap : public C_BaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x628 - 0x628
   bool m_bCustomCubemapTexture; // 0x630 - 0x630
   std::float_t m_flInfluenceRadius; // 0x634 - 0x634
   Vector m_vBoxProjectMins; // 0x638 - 0x638
   Vector m_vBoxProjectMaxs; // 0x644 - 0x644
   CUtlSymbolLarge m_LightGroups; // 0x650 - 0x650
   bool m_bMoveable; // 0x658 - 0x658
   std::int32_t m_nHandshake; // 0x65C - 0x65C
   std::int32_t m_nEnvCubeMapArrayIndex; // 0x660 - 0x660
   std::int32_t m_nPriority; // 0x664 - 0x664
   std::float_t m_flEdgeFadeDist; // 0x668 - 0x668
   Vector m_vEdgeFadeDists; // 0x66C - 0x66C
   std::float_t m_flDiffuseScale; // 0x678 - 0x678
   bool m_bStartDisabled; // 0x67C - 0x67C
   bool m_bDefaultEnvMap; // 0x67D - 0x67D
   bool m_bDefaultSpecEnvMap; // 0x67E - 0x67E
   bool m_bIndoorCubeMap; // 0x67F - 0x67F
   bool m_bCopyDiffuseFromDefaultCubemap; // 0x680 - 0x680
   bool m_bEnabled; // 0x690 - 0x690

}; // size - 0x698


class C_EnvCubemapBox : public C_EnvCubemap
{
public:


}; // size - 0x698


class C_EnvCubemapFog : public C_BaseEntity
{
public:

   std::float_t m_flEndDistance; // 0x538 - 0x538
   std::float_t m_flStartDistance; // 0x53C - 0x53C
   std::float_t m_flFogFalloffExponent; // 0x540 - 0x540
   bool m_bHeightFogEnabled; // 0x544 - 0x544
   std::float_t m_flFogHeightWidth; // 0x548 - 0x548
   std::float_t m_flFogHeightEnd; // 0x54C - 0x54C
   std::float_t m_flFogHeightStart; // 0x550 - 0x550
   std::float_t m_flFogHeightExponent; // 0x554 - 0x554
   std::float_t m_flLODBias; // 0x558 - 0x558
   bool m_bActive; // 0x55C - 0x55C
   bool m_bStartDisabled; // 0x55D - 0x55D
   std::float_t m_flFogMaxOpacity; // 0x560 - 0x560
   std::int32_t m_nCubemapSourceType; // 0x564 - 0x564
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x568 - 0x568
   CUtlSymbolLarge m_iszSkyEntity; // 0x570 - 0x570
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x578 - 0x578
   bool m_bHasHeightFogEnd; // 0x580 - 0x580
   bool m_bFirstTime; // 0x581 - 0x581

}; // size - 0x588


class C_EnvDecal : public C_BaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x838 - 0x838
   std::float_t m_flWidth; // 0x840 - 0x840
   std::float_t m_flHeight; // 0x844 - 0x844
   std::float_t m_flDepth; // 0x848 - 0x848
   std::uint32_t m_nRenderOrder; // 0x84C - 0x84C
   bool m_bProjectOnWorld; // 0x850 - 0x850
   bool m_bProjectOnCharacters; // 0x851 - 0x851
   bool m_bProjectOnWater; // 0x852 - 0x852
   std::float_t m_flDepthSortBias; // 0x854 - 0x854

}; // size - 0x870


class C_EnvGasCanister : public CBaseAnimGraph
{
public:

   bool m_bLanded; // 0x998 - 0x998
   bool m_bSpawnedSkyboxParticles; // 0xA00 - 0xA00
   GameTime_t m_flKillImpactParticlesTime; // 0xA04 - 0xA04
   Vector m_vecImpactPosition; // 0xA08 - 0xA08
   Vector m_vecStartPosition; // 0xA14 - 0xA14
   Vector m_vecEnterWorldPosition; // 0xA20 - 0xA20
   Vector m_vecDirection; // 0xA2C - 0xA2C
   QAngle m_vecStartAngles; // 0xA38 - 0xA38
   std::float_t m_flFlightTime; // 0xA44 - 0xA44
   std::float_t m_flFlightSpeed; // 0xA48 - 0xA48
   GameTime_t m_flLaunchTime; // 0xA4C - 0xA4C
   std::float_t m_flInitialZSpeed; // 0xA50 - 0xA50
   std::float_t m_flZAcceleration; // 0xA54 - 0xA54
   std::float_t m_flHorizSpeed; // 0xA58 - 0xA58
   bool m_bLaunchedFromWithinWorld; // 0xA5C - 0xA5C
   Vector m_vecParabolaDirection; // 0xA60 - 0xA60
   std::float_t m_flWorldEnterTime; // 0xA6C - 0xA6C
   Vector m_vecSkyboxOrigin; // 0xA70 - 0xA70
   std::float_t m_flSkyboxScale; // 0xA7C - 0xA7C
   bool m_bInSkybox; // 0xA80 - 0xA80
   bool m_bDoImpactEffects; // 0xA81 - 0xA81
   std::int32_t m_nMyZoneIndex; // 0xA84 - 0xA84
   CHandle< C_BaseEntity > m_hSkyboxCopy; // 0xA88 - 0xA88
   std::float_t m_flLaunchHeight; // 0xA8C - 0xA8C

}; // size - 0xAA8


class C_EnvLightProbeVolume : public C_BaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1518 - 0x1518
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1520 - 0x1520
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1528 - 0x1528
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1530 - 0x1530
   Vector m_vBoxMins; // 0x1538 - 0x1538
   Vector m_vBoxMaxs; // 0x1544 - 0x1544
   CUtlSymbolLarge m_LightGroups; // 0x1550 - 0x1550
   bool m_bMoveable; // 0x1558 - 0x1558
   std::int32_t m_nHandshake; // 0x155C - 0x155C
   std::int32_t m_nPriority; // 0x1560 - 0x1560
   bool m_bStartDisabled; // 0x1564 - 0x1564
   std::int32_t m_nLightProbeSizeX; // 0x1568 - 0x1568
   std::int32_t m_nLightProbeSizeY; // 0x156C - 0x156C
   std::int32_t m_nLightProbeSizeZ; // 0x1570 - 0x1570
   std::int32_t m_nLightProbeAtlasX; // 0x1574 - 0x1574
   std::int32_t m_nLightProbeAtlasY; // 0x1578 - 0x1578
   std::int32_t m_nLightProbeAtlasZ; // 0x157C - 0x157C
   bool m_bEnabled; // 0x1589 - 0x1589

}; // size - 0x1590


class C_EnvWindClientside : public C_BaseEntity
{
public:

   C_EnvWindShared m_EnvWindShared; // 0x538 - 0x538

}; // size - 0x740



class C_FireFromAboveSprite : public C_Sprite
{
public:


}; // size - 0x968


class C_FireSmoke : public C_BaseFire
{
public:

   std::int32_t m_nFlameModelIndex; // 0x548 - 0x548
   std::int32_t m_nFlameFromAboveModelIndex; // 0x54C - 0x54C
   std::float_t m_flScaleRegister; // 0x550 - 0x550
   std::float_t m_flScaleStart; // 0x554 - 0x554
   std::float_t m_flScaleEnd; // 0x558 - 0x558
   GameTime_t m_flScaleTimeStart; // 0x55C - 0x55C
   GameTime_t m_flScaleTimeEnd; // 0x560 - 0x560
   std::float_t m_flChildFlameSpread; // 0x564 - 0x564
   std::float_t m_flClipPerc; // 0x578 - 0x578
   bool m_bClipTested; // 0x57C - 0x57C
   bool m_bFadingOut; // 0x57D - 0x57D
   TimedEvent m_tParticleSpawn; // 0x580 - 0x580
   CFireOverlay* m_pFireOverlay; // 0x588 - 0x588

}; // size - 0x5B0


class C_Fish : public CBaseAnimGraph
{
public:

   Vector m_pos; // 0x998 - 0x998
   Vector m_vel; // 0x9A4 - 0x9A4
   QAngle m_angles; // 0x9B0 - 0x9B0
   std::int32_t m_localLifeState; // 0x9BC - 0x9BC
   std::float_t m_deathDepth; // 0x9C0 - 0x9C0
   std::float_t m_deathAngle; // 0x9C4 - 0x9C4
   std::float_t m_buoyancy; // 0x9C8 - 0x9C8
   CountdownTimer m_wiggleTimer; // 0x9D0 - 0x9D0
   std::float_t m_wigglePhase; // 0x9E8 - 0x9E8
   std::float_t m_wiggleRate; // 0x9EC - 0x9EC
   Vector m_actualPos; // 0x9F0 - 0x9F0
   QAngle m_actualAngles; // 0x9FC - 0x9FC
   Vector m_poolOrigin; // 0xA08 - 0xA08
   std::float_t m_waterLevel; // 0xA14 - 0xA14
   bool m_gotUpdate; // 0xA18 - 0xA18
   std::float_t m_x; // 0xA1C - 0xA1C
   std::float_t m_y; // 0xA20 - 0xA20
   std::float_t m_z; // 0xA24 - 0xA24
   std::float_t m_angle; // 0xA28 - 0xA28
   float32 m_errorHistory[20]; // 0xA2C - 0xA2C
   std::int32_t m_errorHistoryIndex; // 0xA7C - 0xA7C
   std::int32_t m_errorHistoryCount; // 0xA80 - 0xA80
   std::float_t m_averageError; // 0xA84 - 0xA84

}; // size - 0xA88


class C_FuncLadder : public C_BaseModelEntity
{
public:

   Vector m_vecLadderDir; // 0x838 - 0x838
   CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0x848 - 0x848
   Vector m_vecLocalTop; // 0x860 - 0x860
   Vector m_vecPlayerMountPositionTop; // 0x86C - 0x86C
   Vector m_vecPlayerMountPositionBottom; // 0x878 - 0x878
   std::float_t m_flAutoRideSpeed; // 0x884 - 0x884
   bool m_bDisabled; // 0x888 - 0x888
   bool m_bFakeLadder; // 0x889 - 0x889
   bool m_bHasSlack; // 0x88A - 0x88A

}; // size - 0x890


class C_FuncTrackTrain : public C_BaseModelEntity
{
public:

   std::int32_t m_nLongAxis; // 0x838 - 0x838
   std::float_t m_flRadius; // 0x83C - 0x83C
   std::float_t m_flLineLength; // 0x840 - 0x840

}; // size - 0x848


class C_GameRules
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class C_GlobalLight : public C_BaseEntity
{
public:

   std::uint16_t m_WindClothForceHandle; // 0xA00 - 0xA00

}; // size - 0xA30


class C_GradientFog : public C_BaseEntity
{
public:

   CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x538 - 0x538
   std::float_t m_flFogStartDistance; // 0x540 - 0x540
   std::float_t m_flFogEndDistance; // 0x544 - 0x544
   bool m_bHeightFogEnabled; // 0x548 - 0x548
   std::float_t m_flFogStartHeight; // 0x54C - 0x54C
   std::float_t m_flFogEndHeight; // 0x550 - 0x550
   std::float_t m_flFarZ; // 0x554 - 0x554
   std::float_t m_flFogMaxOpacity; // 0x558 - 0x558
   std::float_t m_flFogFalloffExponent; // 0x55C - 0x55C
   std::float_t m_flFogVerticalExponent; // 0x560 - 0x560
   Color m_fogColor; // 0x564 - 0x564
   std::float_t m_flFogStrength; // 0x568 - 0x568
   std::float_t m_flFadeTime; // 0x56C - 0x56C
   bool m_bStartDisabled; // 0x570 - 0x570
   bool m_bIsEnabled; // 0x571 - 0x571
   bool m_bGradientFogNeedsTextures; // 0x572 - 0x572

}; // size - 0x5D0


class C_GrassBurn : public C_BaseEntity
{
public:

   std::float_t m_flGrassBurnClearTime; // 0x538 - 0x538
   std::float_t m_bClientPendingClear; // 0x53C - 0x53C
   std::float_t m_flGrassBurnClearTimeLocal; // 0x540 - 0x540
   CUtlVector< Vector > m_vecGrassBurnPositions; // 0x548 - 0x548

}; // size - 0x560


class C_HandleTest : public C_BaseEntity
{
public:

   CHandle< C_BaseEntity > m_Handle; // 0x538 - 0x538
   bool m_bSendHandle; // 0x53C - 0x53C

}; // size - 0x540


class C_INIT_AddVectorToVector : public CParticleFunctionInitializer
{
public:

   Vector m_vecScale; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1FC - 0x1FC
   ParticleAttributeIndex_t m_nFieldInput; // 0x200 - 0x200
   Vector m_vOffsetMin; // 0x204 - 0x204
   Vector m_vOffsetMax; // 0x210 - 0x210
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0x21C - 0x21C

}; // size - 0x230


class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer
{
public:

   std::float_t m_flAParm; // 0x1F0 - 0x1F0
   std::float_t m_flBParm; // 0x1F4 - 0x1F4
   std::float_t m_flCParm; // 0x1F8 - 0x1F8
   std::float_t m_flDParm; // 0x1FC - 0x1FC
   std::float_t m_flScale; // 0x200 - 0x200
   std::float_t m_flSpeedMin; // 0x204 - 0x204
   std::float_t m_flSpeedMax; // 0x208 - 0x208
   std::int32_t m_nBaseCP; // 0x20C - 0x20C
   bool m_bUniformSpeed; // 0x210 - 0x210

}; // size - 0x220


class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:

   std::float_t m_fMaxDistance; // 0x1F0 - 0x1F0
   CPathParameters m_PathParams; // 0x200 - 0x200
   bool m_bUseRandomCPs; // 0x240 - 0x240
   Vector m_vEndOffset; // 0x244 - 0x244
   bool m_bSaveOffset; // 0x250 - 0x250

}; // size - 0x260


class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer
{
public:

   std::float_t m_flVelocityScale; // 0x1F0 - 0x1F0
   std::float_t m_flIncrement; // 0x1F4 - 0x1F4
   bool m_bRandomDistribution; // 0x1F8 - 0x1F8
   std::int32_t m_nRandomSeed; // 0x1FC - 0x1FC
   bool m_bSubFrame; // 0x200 - 0x200

}; // size - 0x210


class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:

   CParticleCollectionFloatInput m_nXCount; // 0x1F0 - 0x1F0
   CParticleCollectionFloatInput m_nYCount; // 0x328 - 0x328
   CParticleCollectionFloatInput m_nZCount; // 0x460 - 0x460
   CParticleCollectionFloatInput m_nXSpacing; // 0x598 - 0x598
   CParticleCollectionFloatInput m_nYSpacing; // 0x6D0 - 0x6D0
   CParticleCollectionFloatInput m_nZSpacing; // 0x808 - 0x808
   std::int32_t m_nControlPointNumber; // 0x940 - 0x940
   bool m_bLocalSpace; // 0x944 - 0x944
   bool m_bCenter; // 0x945 - 0x945
   bool m_bHollow; // 0x946 - 0x946

}; // size - 0x950


class C_INIT_CreateOnModel : public CParticleFunctionInitializer
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   std::int32_t m_nForceInModel; // 0x1F4 - 0x1F4
   std::int32_t m_nDesiredHitbox; // 0x1F8 - 0x1F8
   std::int32_t m_nHitboxValueFromControlPointIndex; // 0x1FC - 0x1FC
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x200 - 0x200
   std::float_t m_flBoneVelocity; // 0x7C8 - 0x7C8
   std::float_t m_flMaxBoneVelocity; // 0x7CC - 0x7CC
   CParticleCollectionVecInput m_vecDirectionBias; // 0x7D0 - 0x7D0
   char m_HitboxSetName[128]; // 0xD98 - 0xD98
   bool m_bLocalCoords; // 0xE18 - 0xE18
   bool m_bUseBones; // 0xE19 - 0xE19
   CParticleCollectionFloatInput m_flShellSize; // 0xE20 - 0xE20

}; // size - 0xF60


class C_INIT_DistanceCull : public CParticleFunctionInitializer
{
public:

   std::int32_t m_nControlPoint; // 0x1F0 - 0x1F0
   CParticleCollectionFloatInput m_flDistance; // 0x1F8 - 0x1F8
   bool m_bCullInside; // 0x330 - 0x330

}; // size - 0x340


class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   std::int32_t m_nLocalSpaceCP; // 0x1F4 - 0x1F4
   std::int32_t m_nWeightUpdateCP; // 0x1F8 - 0x1F8
   bool m_bUseVerticalVelocity; // 0x1FC - 0x1FC
   CPerParticleVecInput m_vecScale; // 0x200 - 0x200

}; // size - 0x7D0


class C_INIT_InitVecCollection : public CParticleFunctionInitializer
{
public:

   CParticleCollectionVecInput m_InputValue; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nOutputField; // 0x7B8 - 0x7B8

}; // size - 0x7C0


class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer
{
public:

   char m_CollisionGroupName[128]; // 0x1F0 - 0x1F0
   ParticleTraceSet_t m_nTraceSet; // 0x270 - 0x270
   Vector m_vecOutputMin; // 0x274 - 0x274
   Vector m_vecOutputMax; // 0x280 - 0x280
   std::int32_t m_nControlPointNumber; // 0x28C - 0x28C
   bool m_bPerParticle; // 0x290 - 0x290
   bool m_bTranslate; // 0x291 - 0x291
   bool m_bProportional; // 0x292 - 0x292
   std::float_t m_flTraceLength; // 0x294 - 0x294
   bool m_bPerParticleTR; // 0x298 - 0x298
   bool m_bInherit; // 0x299 - 0x299
   std::int32_t m_nChildCP; // 0x29C - 0x29C
   std::int32_t m_nChildGroupID; // 0x2A0 - 0x2A0

}; // size - 0x2B0


class C_INIT_ModelCull : public CParticleFunctionInitializer
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   bool m_bBoundBox; // 0x1F4 - 0x1F4
   bool m_bCullOutside; // 0x1F5 - 0x1F5
   bool m_bUseBones; // 0x1F6 - 0x1F6
   char m_HitboxSetName[128]; // 0x1F7 - 0x1F7

}; // size - 0x280


class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_flSpeedMin; // 0x1F0 - 0x1F0
   CPerParticleFloatInput m_flSpeedMax; // 0x328 - 0x328
   CPerParticleFloatInput m_flEndSpread; // 0x460 - 0x460
   CPerParticleFloatInput m_flStartOffset; // 0x598 - 0x598
   CPerParticleFloatInput m_flEndOffset; // 0x6D0 - 0x6D0
   std::int32_t m_nEndControlPointNumber; // 0x808 - 0x808
   bool m_bTrailBias; // 0x80C - 0x80C

}; // size - 0x810


class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   ParticleControlPointAxis_t m_nControlPointAxis; // 0x1F4 - 0x1F4

}; // size - 0x200


class C_INIT_PointList : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F0
   CUtlVector< PointDefinition_t > m_pointList; // 0x1F8 - 0x1F8
   bool m_bPlaceAlongPath; // 0x210 - 0x210
   bool m_bClosedLoop; // 0x211 - 0x211
   std::int32_t m_nNumPointsAlongPath; // 0x214 - 0x214

}; // size - 0x220


class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:

   CPerParticleFloatInput m_flOffset; // 0x1F0 - 0x1F0
   CPerParticleFloatInput m_flMaxTraceLength; // 0x328 - 0x328
   char m_CollisionGroupName[128]; // 0x460 - 0x460
   ParticleTraceSet_t m_nTraceSet; // 0x4E0 - 0x4E0
   ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x4F0 - 0x4F0
   bool m_bIncludeWater; // 0x4F4 - 0x4F4
   bool m_bSetNormal; // 0x4F5 - 0x4F5
   bool m_bSetPXYZOnly; // 0x4F6 - 0x4F6
   bool m_bTraceAlongNormal; // 0x4F7 - 0x4F7
   bool m_bOffsetonColOnly; // 0x4F8 - 0x4F8
   std::float_t m_flOffsetByRadiusFactor; // 0x4FC - 0x4FC
   std::int32_t m_nPreserveOffsetCP; // 0x500 - 0x500
   std::int32_t m_nIgnoreCP; // 0x504 - 0x504

}; // size - 0x510


class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F0
   CUtlVector< CUtlString > m_names; // 0x1F8 - 0x1F8
   bool m_bShuffle; // 0x210 - 0x210
   bool m_bLinear; // 0x211 - 0x211
   bool m_bModelFromRenderer; // 0x212 - 0x212
   ParticleAttributeIndex_t m_nFieldOutput; // 0x214 - 0x214

}; // size - 0x220


class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:


}; // size - 0x210


class C_INIT_RandomYawFlip : public CParticleFunctionInitializer
{
public:

   std::float_t m_flPercent; // 0x1F0 - 0x1F0

}; // size - 0x200


class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x240 - 0x240
   std::float_t m_flScale; // 0x244 - 0x244
   std::float_t m_flOffsetRot; // 0x248 - 0x248
   Vector m_vecOffsetAxis; // 0x24C - 0x24C
   bool m_bNormalize; // 0x258 - 0x258

}; // size - 0x260


class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:


}; // size - 0x240


class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:


}; // size - 0x240


class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x1F0

}; // size - 0x240


class C_INIT_RemapScalar : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F4
   std::float_t m_flInputMin; // 0x1F8 - 0x1F8
   std::float_t m_flInputMax; // 0x1FC - 0x1FC
   std::float_t m_flOutputMin; // 0x200 - 0x200
   std::float_t m_flOutputMax; // 0x204 - 0x204
   std::float_t m_flStartTime; // 0x208 - 0x208
   std::float_t m_flEndTime; // 0x20C - 0x20C
   ParticleSetMethod_t m_nSetMethod; // 0x210 - 0x210
   bool m_bActiveRange; // 0x214 - 0x214
   std::float_t m_flRemapBias; // 0x218 - 0x218

}; // size - 0x220


class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F4
   std::float_t m_flInputMin; // 0x1F8 - 0x1F8
   std::float_t m_flInputMax; // 0x1FC - 0x1FC
   Vector m_vecOutputMin; // 0x200 - 0x200
   Vector m_vecOutputMax; // 0x20C - 0x20C
   std::float_t m_flStartTime; // 0x218 - 0x218
   std::float_t m_flEndTime; // 0x21C - 0x21C
   ParticleSetMethod_t m_nSetMethod; // 0x220 - 0x220
   std::int32_t m_nControlPointNumber; // 0x224 - 0x224
   bool m_bLocalCoords; // 0x228 - 0x228
   std::float_t m_flRemapBias; // 0x22C - 0x22C

}; // size - 0x240


class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F0
   std::int32_t m_nControlPointNumber; // 0x1F4 - 0x1F4
   std::float_t m_flStartTime; // 0x1F8 - 0x1F8
   std::float_t m_flEndTime; // 0x1FC - 0x1FC
   std::float_t m_flInputMin; // 0x200 - 0x200
   std::float_t m_flInputMax; // 0x204 - 0x204
   std::float_t m_flOutputMin; // 0x208 - 0x208
   std::float_t m_flOutputMax; // 0x20C - 0x20C
   ParticleSetMethod_t m_nSetMethod; // 0x210 - 0x210
   bool m_bPerParticle; // 0x214 - 0x214

}; // size - 0x220


class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x1F0
   Vector m_vecRotation; // 0x240 - 0x240
   bool m_bUseQuat; // 0x24C - 0x24C
   bool m_bWriteNormal; // 0x24D - 0x24D

}; // size - 0x250


class C_INIT_RtEnvCull : public CParticleFunctionInitializer
{
public:

   Vector m_vecTestDir; // 0x1F0 - 0x1F0
   Vector m_vecTestNormal; // 0x1FC - 0x1FC
   bool m_bUseVelocity; // 0x208 - 0x208
   bool m_bCullOnMiss; // 0x209 - 0x209
   bool m_bLifeAdjust; // 0x20A - 0x20A
   char m_RtEnvName[128]; // 0x20B - 0x20B
   std::int32_t m_nRTEnvCP; // 0x28C - 0x28C
   std::int32_t m_nComponent; // 0x290 - 0x290

}; // size - 0x2A0


class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   std::float_t m_fSpeedMin; // 0x1F4 - 0x1F4
   std::float_t m_fSpeedMax; // 0x1F8 - 0x1F8
   Vector m_vecLocalCoordinateSystemSpeedScale; // 0x1FC - 0x1FC
   bool m_bIgnoreDelta; // 0x209 - 0x209

}; // size - 0x210


class C_Inferno : public C_BaseModelEntity
{
public:

   ParticleIndex_t m_nfxFireDamageEffect; // 0x878 - 0x878
   int32 m_fireXDelta[64]; // 0x87C - 0x87C
   int32 m_fireYDelta[64]; // 0x97C - 0x97C
   int32 m_fireZDelta[64]; // 0xA7C - 0xA7C
   int32 m_fireParentXDelta[64]; // 0xB7C - 0xB7C
   int32 m_fireParentYDelta[64]; // 0xC7C - 0xC7C
   int32 m_fireParentZDelta[64]; // 0xD7C - 0xD7C
   bool m_bFireIsBurning[64]; // 0xE7C - 0xE7C
   Vector m_BurnNormal[64]; // 0xEBC - 0xEBC
   std::int32_t m_fireCount; // 0x11BC - 0x11BC
   std::int32_t m_nInfernoType; // 0x11C0 - 0x11C0
   std::float_t m_nFireLifetime; // 0x11C4 - 0x11C4
   bool m_bInPostEffectTime; // 0x11C8 - 0x11C8
   std::int32_t m_lastFireCount; // 0x11CC - 0x11CC
   std::int32_t m_nFireEffectTickBegin; // 0x11D0 - 0x11D0
   std::int32_t m_drawableCount; // 0x7DE0 - 0x7DE0
   bool m_blosCheck; // 0x7DE4 - 0x7DE4
   std::int32_t m_nlosperiod; // 0x7DE8 - 0x7DE8
   std::float_t m_maxFireHalfWidth; // 0x7DEC - 0x7DEC
   std::float_t m_maxFireHeight; // 0x7DF0 - 0x7DF0
   Vector m_minBounds; // 0x7DF4 - 0x7DF4
   Vector m_maxBounds; // 0x7E00 - 0x7E00
   std::float_t m_flLastGrassBurnThink; // 0x7E0C - 0x7E0C

}; // size - 0x7E20


class C_InfoLadderDismount : public C_BaseEntity
{
public:


}; // size - 0x538


class C_InfoMapRegion : public C_BaseEntity
{
public:

   std::float_t m_flRadius; // 0x538 - 0x538
   char m_szLocToken[128]; // 0x53C - 0x53C
   C_InfoMapRegion* m_pNext; // 0x5C0 - 0x5C0

}; // size - 0x5C8


class C_ItemDogtags : public C_Item
{
public:

   CHandle< C_CSPlayerPawnBase > m_OwningPlayer; // 0x1178 - 0x1178
   CHandle< C_CSPlayerPawnBase > m_KillingPlayer; // 0x117C - 0x117C

}; // size - 0x1180


class C_KnifeGG : public C_Knife
{
public:


}; // size - 0x13D0


class C_LightSpotEntity : public C_LightEntity
{
public:


}; // size - 0x840


class C_MapPreviewParticleSystem : public C_ParticleSystem
{
public:


}; // size - 0xDE8


class C_MapVetoPickController : public C_BaseEntity
{
public:

   std::int32_t m_nDraftType; // 0x548 - 0x548
   std::int32_t m_nTeamWinningCoinToss; // 0x54C - 0x54C
   int32 m_nTeamWithFirstChoice[64]; // 0x550 - 0x550
   int32 m_nVoteMapIdsList[7]; // 0x650 - 0x650
   int32 m_nAccountIDs[64]; // 0x66C - 0x66C
   int32 m_nMapId0[64]; // 0x76C - 0x76C
   int32 m_nMapId1[64]; // 0x86C - 0x86C
   int32 m_nMapId2[64]; // 0x96C - 0x96C
   int32 m_nMapId3[64]; // 0xA6C - 0xA6C
   int32 m_nMapId4[64]; // 0xB6C - 0xB6C
   int32 m_nMapId5[64]; // 0xC6C - 0xC6C
   int32 m_nStartingSide0[64]; // 0xD6C - 0xD6C
   std::int32_t m_nCurrentPhase; // 0xE6C - 0xE6C
   std::int32_t m_nPhaseStartTick; // 0xE70 - 0xE70
   std::int32_t m_nPhaseDurationTicks; // 0xE74 - 0xE74
   std::int32_t m_nPostDataUpdateTick; // 0xE78 - 0xE78
   bool m_bDisabledHud; // 0xE7C - 0xE7C

}; // size - 0xE80


class C_Melee : public C_WeaponCSBase
{
public:

   GameTime_t m_flThrowAt; // 0x13D0 - 0x13D0

}; // size - 0x13E0


class C_ModelPointEntity : public C_BaseModelEntity
{
public:


}; // size - 0x838


class C_Multimeter : public CBaseAnimGraph
{
public:

   CHandle< C_PlantedC4 > m_hTargetC4; // 0x9A0 - 0x9A0

}; // size - 0x9A8


class C_MultiplayRules : public C_GameRules
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator
{
public:

   Vector m_vStartValue; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nFieldInput1; // 0x1FC - 0x1FC
   std::float_t m_flInputScale1; // 0x200 - 0x200
   ParticleAttributeIndex_t m_nFieldInput2; // 0x204 - 0x204
   std::float_t m_flInputScale2; // 0x208 - 0x208
   ControlPointReference_t m_nControlPointInput1; // 0x20C - 0x20C
   std::float_t m_flControlPointScale1; // 0x220 - 0x220
   ControlPointReference_t m_nControlPointInput2; // 0x224 - 0x224
   std::float_t m_flControlPointScale2; // 0x238 - 0x238
   ParticleAttributeIndex_t m_nFieldOutput; // 0x23C - 0x23C
   Vector m_vFinalOutputScale; // 0x240 - 0x240

}; // size - 0x250


class C_OP_CollideWithSelf : public CParticleFunctionConstraint
{
public:

   CPerParticleFloatInput m_flRadiusScale; // 0x1F0 - 0x1F0
   CPerParticleFloatInput m_flMinimumSpeed; // 0x328 - 0x328

}; // size - 0x460


class C_OP_ColorAdjustHSL : public CParticleFunctionOperator
{
public:

   CPerParticleFloatInput m_flHueAdjust; // 0x1F0 - 0x1F0
   CPerParticleFloatInput m_flSaturationAdjust; // 0x328 - 0x328
   CPerParticleFloatInput m_flLightnessAdjust; // 0x460 - 0x460

}; // size - 0x5A0


class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:

   std::int32_t m_nFirstControlPoint; // 0x1F0 - 0x1F0
   std::int32_t m_nSecondControlPoint; // 0x1F4 - 0x1F4

}; // size - 0x200


class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:

   CParticleCollectionFloatInput m_fMinDistance; // 0x1F0 - 0x1F0
   CParticleCollectionFloatInput m_fMaxDistance; // 0x328 - 0x328
   std::int32_t m_nControlPointNumber; // 0x460 - 0x460
   Vector m_CenterOffset; // 0x464 - 0x464
   bool m_bGlobalCenter; // 0x470 - 0x470

}; // size - 0x480


class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:

   std::float_t m_fMinDistance; // 0x1F0 - 0x1F0
   std::float_t m_flMaxDistance; // 0x1F4 - 0x1F4
   std::float_t m_flTimeScale; // 0x1F8 - 0x1F8
   bool m_bLoopedPath; // 0x1FC - 0x1FC
   CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x200 - 0x200

}; // size - 0x220


class C_OP_CycleScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nDestField; // 0x1F0 - 0x1F0
   std::float_t m_flStartValue; // 0x1F4 - 0x1F4
   std::float_t m_flEndValue; // 0x1F8 - 0x1F8
   std::float_t m_flCycleTime; // 0x1FC - 0x1FC
   bool m_bDoNotRepeatCycle; // 0x200 - 0x200
   bool m_bSynchronizeParticles; // 0x201 - 0x201
   std::int32_t m_nCPScale; // 0x204 - 0x204
   std::int32_t m_nCPFieldMin; // 0x208 - 0x208
   std::int32_t m_nCPFieldMax; // 0x20C - 0x20C
   ParticleSetMethod_t m_nSetMethod; // 0x210 - 0x210

}; // size - 0x220


class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F0
   CPerParticleVecInput m_vecPoint1; // 0x1F8 - 0x1F8
   CPerParticleVecInput m_vecPoint2; // 0x7C0 - 0x7C0
   CPerParticleFloatInput m_flInputMin; // 0xD88 - 0xD88
   CPerParticleFloatInput m_flInputMax; // 0xEC0 - 0xEC0
   CPerParticleFloatInput m_flOutputMin; // 0xFF8 - 0xFF8
   CPerParticleFloatInput m_flOutputMax; // 0x1130 - 0x1130
   ParticleSetMethod_t m_nSetMethod; // 0x1268 - 0x1268
   bool m_bDeltaTime; // 0x126C - 0x126C

}; // size - 0x1270


class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:

   std::int32_t m_nControlPoint; // 0x1F0 - 0x1F0
   Vector m_vecPointOffset; // 0x1F4 - 0x1F4
   std::float_t m_flDistance; // 0x200 - 0x200
   bool m_bCullInside; // 0x204 - 0x204

}; // size - 0x210


class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission
{
public:

   std::int32_t m_nChildGroupID; // 0x200 - 0x200
   std::int32_t m_nFirstChild; // 0x204 - 0x204
   CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x208 - 0x208

}; // size - 0x340


class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator
{
public:

   CParticleCollectionFloatInput m_flFreezeTime; // 0x1F0 - 0x1F0

}; // size - 0x330


class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce
{
public:

   CPerParticleFloatInput m_flForceScale; // 0x1F0 - 0x1F0
   bool m_bRopes; // 0x328 - 0x328
   bool m_bRopesZOnly; // 0x329 - 0x329
   bool m_bExplosions; // 0x32A - 0x32A
   bool m_bParticles; // 0x32B - 0x32B

}; // size - 0x330


class C_OP_FadeAndKill : public CParticleFunctionOperator
{
public:

   std::float_t m_flStartFadeInTime; // 0x1F0 - 0x1F0
   std::float_t m_flEndFadeInTime; // 0x1F4 - 0x1F4
   std::float_t m_flStartFadeOutTime; // 0x1F8 - 0x1F8
   std::float_t m_flEndFadeOutTime; // 0x1FC - 0x1FC
   std::float_t m_flStartAlpha; // 0x200 - 0x200
   std::float_t m_flEndAlpha; // 0x204 - 0x204
   bool m_bForcePreserveParticleOrder; // 0x208 - 0x208

}; // size - 0x210


class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator
{
public:

   std::float_t m_flStartFadeInTime; // 0x1F0 - 0x1F0
   std::float_t m_flEndFadeInTime; // 0x1F4 - 0x1F4
   std::float_t m_flStartFadeOutTime; // 0x1F8 - 0x1F8
   std::float_t m_flEndFadeOutTime; // 0x1FC - 0x1FC
   std::float_t m_flStartAlpha; // 0x200 - 0x200
   std::float_t m_flEndAlpha; // 0x204 - 0x204

}; // size - 0x210


class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce
{
public:

   std::float_t m_flMinDist; // 0x1F0 - 0x1F0
   Vector m_vecForceAtMinDist; // 0x1F4 - 0x1F4
   std::float_t m_flMaxDist; // 0x200 - 0x200
   Vector m_vecForceAtMaxDist; // 0x204 - 0x204
   Vector m_vecPlaneNormal; // 0x210 - 0x210
   std::int32_t m_nControlPointNumber; // 0x21C - 0x21C
   std::float_t m_flExponent; // 0x220 - 0x220

}; // size - 0x230


class C_OP_InterpolateRadius : public CParticleFunctionOperator
{
public:

   std::float_t m_flStartTime; // 0x1F0 - 0x1F0
   std::float_t m_flEndTime; // 0x1F4 - 0x1F4
   std::float_t m_flStartScale; // 0x1F8 - 0x1F8
   std::float_t m_flEndScale; // 0x1FC - 0x1FC
   bool m_bEaseInAndOut; // 0x200 - 0x200
   std::float_t m_flBias; // 0x204 - 0x204

}; // size - 0x240


class C_OP_LerpEndCapScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F0
   std::float_t m_flOutput; // 0x1F4 - 0x1F4
   std::float_t m_flLerpTime; // 0x1F8 - 0x1F8

}; // size - 0x200


class C_OP_LerpScalar : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F0
   CPerParticleFloatInput m_flOutput; // 0x1F8 - 0x1F8
   std::float_t m_flStartTime; // 0x330 - 0x330
   std::float_t m_flEndTime; // 0x334 - 0x334

}; // size - 0x340


class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator
{
public:

   std::float_t m_flFadeStart; // 0x1F0 - 0x1F0
   std::float_t m_flFadeEnd; // 0x1F4 - 0x1F4
   bool m_bCPPairs; // 0x1F8 - 0x1F8
   CPathParameters m_PathParams; // 0x200 - 0x200

}; // size - 0x240


class C_OP_ModelCull : public CParticleFunctionOperator
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   bool m_bBoundBox; // 0x1F4 - 0x1F4
   bool m_bCullOutside; // 0x1F5 - 0x1F5
   bool m_bUseBones; // 0x1F6 - 0x1F6
   char m_HitboxSetName[128]; // 0x1F7 - 0x1F7

}; // size - 0x280


class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   std::float_t m_flLifeTimeLerpStart; // 0x1F8 - 0x1F8
   std::float_t m_flLifeTimeLerpEnd; // 0x1FC - 0x1FC
   std::float_t m_flPrevPosScale; // 0x200 - 0x200
   char m_HitboxSetName[128]; // 0x204 - 0x204
   bool m_bUseBones; // 0x284 - 0x284
   HitboxLerpType_t m_nLerpType; // 0x288 - 0x288
   CPerParticleFloatInput m_flInterpolation; // 0x290 - 0x290

}; // size - 0x3D0


class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:

   CParticleCollectionVecInput m_vecRotAxis; // 0x1F0 - 0x1F0
   CParticleCollectionFloatInput m_flRotRate; // 0x7B8 - 0x7B8
   CParticleTransformInput m_TransformInput; // 0x8F0 - 0x8F0
   bool m_bLocalSpace; // 0x940 - 0x940

}; // size - 0x950


class C_OP_NoiseEmitter : public CParticleFunctionEmitter
{
public:

   std::float_t m_flEmissionDuration; // 0x1F0 - 0x1F0
   std::float_t m_flStartTime; // 0x1F4 - 0x1F4
   std::float_t m_flEmissionScale; // 0x1F8 - 0x1F8
   std::int32_t m_nScaleControlPoint; // 0x1FC - 0x1FC
   std::int32_t m_nScaleControlPointField; // 0x200 - 0x200
   std::int32_t m_nWorldNoisePoint; // 0x204 - 0x204
   bool m_bAbsVal; // 0x208 - 0x208
   bool m_bAbsValInv; // 0x209 - 0x209
   std::float_t m_flOffset; // 0x20C - 0x20C
   std::float_t m_flOutputMin; // 0x210 - 0x210
   std::float_t m_flOutputMax; // 0x214 - 0x214
   std::float_t m_flNoiseScale; // 0x218 - 0x218
   std::float_t m_flWorldNoiseScale; // 0x21C - 0x21C
   Vector m_vecOffsetLoc; // 0x220 - 0x220
   std::float_t m_flWorldTimeScale; // 0x22C - 0x22C

}; // size - 0x230


class C_OP_PerParticleForce : public CParticleFunctionForce
{
public:

   CPerParticleFloatInput m_flForceScale; // 0x1F0 - 0x1F0
   CPerParticleVecInput m_vForce; // 0x328 - 0x328
   std::int32_t m_nCP; // 0x8F0 - 0x8F0

}; // size - 0x900


class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F0
   std::float_t m_flInputMin; // 0x1F4 - 0x1F4
   std::float_t m_flInputMax; // 0x1F8 - 0x1F8
   CParticleTransformInput m_TransformStart; // 0x200 - 0x200
   CParticleTransformInput m_TransformEnd; // 0x250 - 0x250
   std::int32_t m_nOutputStartCP; // 0x2A0 - 0x2A0
   std::int32_t m_nOutputStartField; // 0x2A4 - 0x2A4
   std::int32_t m_nOutputEndCP; // 0x2A8 - 0x2A8
   std::int32_t m_nOutputEndField; // 0x2AC - 0x2AC
   ParticleSetMethod_t m_nSetMethod; // 0x2B0 - 0x2B0
   bool m_bActiveRange; // 0x2B4 - 0x2B4
   bool m_bRadialCheck; // 0x2B5 - 0x2B5

}; // size - 0x2C0


class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   CParticleCollectionVecInput m_vecOffset; // 0x1F8 - 0x1F8
   bool m_bOffsetLocal; // 0x7C0 - 0x7C0
   ParticleSelection_t m_nParticleSelection; // 0x7C4 - 0x7C4
   CParticleCollectionFloatInput m_nParticleNumber; // 0x7C8 - 0x7C8
   ParticlePinDistance_t m_nPinBreakType; // 0x900 - 0x900
   CParticleCollectionFloatInput m_flBreakDistance; // 0x908 - 0x908
   CParticleCollectionFloatInput m_flBreakSpeed; // 0xA40 - 0xA40
   CParticleCollectionFloatInput m_flAge; // 0xB78 - 0xB78
   std::int32_t m_nBreakControlPointNumber; // 0xCB0 - 0xCB0
   std::int32_t m_nBreakControlPointNumber2; // 0xCB4 - 0xCB4
   CPerParticleFloatInput m_flInterpolation; // 0xCB8 - 0xCB8

}; // size - 0xDF0


class C_OP_PlanarConstraint : public CParticleFunctionConstraint
{
public:

   Vector m_PointOnPlane; // 0x1F0 - 0x1F0
   Vector m_PlaneNormal; // 0x1FC - 0x1FC
   std::int32_t m_nControlPointNumber; // 0x208 - 0x208
   bool m_bGlobalOrigin; // 0x20C - 0x20C
   bool m_bGlobalNormal; // 0x20D - 0x20D
   CPerParticleFloatInput m_flRadiusScale; // 0x210 - 0x210
   CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x348 - 0x348

}; // size - 0x480


class C_OP_RadiusDecay : public CParticleFunctionOperator
{
public:

   std::float_t m_flMinRadius; // 0x1F0 - 0x1F0

}; // size - 0x200


class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:

   std::float_t m_RateMin; // 0x1F0 - 0x1F0
   std::float_t m_RateMax; // 0x1F4 - 0x1F4
   std::float_t m_flStartTime_min; // 0x1F8 - 0x1F8
   std::float_t m_flStartTime_max; // 0x1FC - 0x1FC
   std::float_t m_flEndTime_min; // 0x200 - 0x200
   std::float_t m_flEndTime_max; // 0x204 - 0x204
   ParticleAttributeIndex_t m_nField; // 0x230 - 0x230
   bool m_bProportionalOp; // 0x234 - 0x234

}; // size - 0x240


class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission
{
public:

   std::int32_t m_nOutControlPointNumber; // 0x200 - 0x200
   std::int32_t m_nOutVectorField; // 0x204 - 0x204
   ParticleAttributeIndex_t m_nField; // 0x208 - 0x208
   std::float_t m_flInputMin; // 0x20C - 0x20C
   std::float_t m_flInputMax; // 0x210 - 0x210
   std::float_t m_flOutputMin; // 0x214 - 0x214
   std::float_t m_flOutputMax; // 0x218 - 0x218

}; // size - 0x220


class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission
{
public:

   std::int32_t m_nInputControlPoint; // 0x200 - 0x200
   std::int32_t m_nOutputControlPoint; // 0x204 - 0x204
   std::int32_t m_nInputField; // 0x208 - 0x208
   std::int32_t m_nOutputField; // 0x20C - 0x20C
   std::float_t m_flInputMin; // 0x210 - 0x210
   std::float_t m_flInputMax; // 0x214 - 0x214
   std::float_t m_flOutputMin; // 0x218 - 0x218
   std::float_t m_flOutputMax; // 0x21C - 0x21C
   bool m_bDerivative; // 0x220 - 0x220
   std::float_t m_flInterpRate; // 0x224 - 0x224

}; // size - 0x230


class C_OP_RemapCPtoVector : public CParticleFunctionOperator
{
public:

   std::int32_t m_nCPInput; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F4
   std::int32_t m_nLocalSpaceCP; // 0x1F8 - 0x1F8
   Vector m_vInputMin; // 0x1FC - 0x1FC
   Vector m_vInputMax; // 0x208 - 0x208
   Vector m_vOutputMin; // 0x214 - 0x214
   Vector m_vOutputMax; // 0x220 - 0x220
   std::float_t m_flStartTime; // 0x22C - 0x22C
   std::float_t m_flEndTime; // 0x230 - 0x230
   std::float_t m_flInterpRate; // 0x234 - 0x234
   ParticleSetMethod_t m_nSetMethod; // 0x238 - 0x238
   bool m_bOffset; // 0x23C - 0x23C
   bool m_bAccelerate; // 0x23D - 0x23D

}; // size - 0x240


class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F0
   CUtlVector< CUtlString > m_inNames; // 0x1F8 - 0x1F8
   CUtlVector< CUtlString > m_outNames; // 0x210 - 0x210
   CUtlVector< CUtlString > m_fallbackNames; // 0x228 - 0x228
   bool m_bModelFromRenderer; // 0x240 - 0x240
   ParticleAttributeIndex_t m_nFieldInput; // 0x244 - 0x244
   ParticleAttributeIndex_t m_nFieldOutput; // 0x248 - 0x248

}; // size - 0x250


class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator
{
public:

   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F0
   CUtlVector< CUtlString > m_inNames; // 0x1F8 - 0x1F8
   CUtlVector< CUtlString > m_outNames; // 0x210 - 0x210
   CUtlVector< CUtlString > m_fallbackNames; // 0x228 - 0x228
   bool m_bModelFromRenderer; // 0x240 - 0x240
   bool m_bProportional; // 0x241 - 0x241
   ParticleAttributeIndex_t m_nFieldInput; // 0x244 - 0x244
   ParticleAttributeIndex_t m_nFieldOutput; // 0x248 - 0x248
   std::float_t m_flRemapTime; // 0x24C - 0x24C

}; // size - 0x250


class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:


}; // size - 0x250


class C_OP_RemapScalarEndCap : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldInput; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F4
   std::float_t m_flInputMin; // 0x1F8 - 0x1F8
   std::float_t m_flInputMax; // 0x1FC - 0x1FC
   std::float_t m_flOutputMin; // 0x200 - 0x200
   std::float_t m_flOutputMax; // 0x204 - 0x204

}; // size - 0x210


class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission
{
public:

   std::int32_t m_nInControlPointNumber; // 0x200 - 0x200
   std::int32_t m_nOutControlPointNumber; // 0x204 - 0x204
   std::int32_t m_nField; // 0x208 - 0x208
   std::float_t m_flInputMin; // 0x20C - 0x20C
   std::float_t m_flInputMax; // 0x210 - 0x210
   std::float_t m_flOutputMin; // 0x214 - 0x214
   std::float_t m_flOutputMax; // 0x218 - 0x218
   bool m_bUseDeltaV; // 0x21C - 0x21C

}; // size - 0x220


class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x1F0
   Vector m_vecRotation; // 0x240 - 0x240
   bool m_bUseQuat; // 0x24C - 0x24C
   bool m_bWriteNormal; // 0x24D - 0x24D

}; // size - 0x250


class C_OP_RemapTransformToVelocity : public CParticleFunctionOperator
{
public:

   CParticleTransformInput m_TransformInput; // 0x1F0 - 0x1F0

}; // size - 0x240


class C_OP_RemapVelocityToVector : public CParticleFunctionOperator
{
public:

   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F0 - 0x1F0
   std::float_t m_flScale; // 0x1F4 - 0x1F4
   bool m_bNormalize; // 0x1F8 - 0x1F8

}; // size - 0x200


class C_OP_RenderAsModels : public CParticleFunctionRenderer
{
public:

   CUtlVector< ModelReference_t > m_ModelList; // 0x230 - 0x230
   std::float_t m_flModelScale; // 0x24C - 0x24C
   bool m_bFitToModelSize; // 0x250 - 0x250
   bool m_bNonUniformScaling; // 0x251 - 0x251
   ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x254 - 0x254
   ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x258 - 0x258
   ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x25C - 0x25C
   std::int32_t m_nSizeCullBloat; // 0x260 - 0x260

}; // size - 0x270


class C_OP_RenderBlobs : public CParticleFunctionRenderer
{
public:

   CParticleCollectionFloatInput m_cubeWidth; // 0x230 - 0x230
   CParticleCollectionFloatInput m_cutoffRadius; // 0x368 - 0x368
   CParticleCollectionFloatInput m_renderRadius; // 0x4A0 - 0x4A0
   std::int32_t m_nScaleCP; // 0x5D8 - 0x5D8
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x5E0 - 0x5E0

}; // size - 0x5F0


class C_OP_RenderScreenShake : public CParticleFunctionRenderer
{
public:

   std::float_t m_flDurationScale; // 0x230 - 0x230
   std::float_t m_flRadiusScale; // 0x234 - 0x234
   std::float_t m_flFrequencyScale; // 0x238 - 0x238
   std::float_t m_flAmplitudeScale; // 0x23C - 0x23C
   ParticleAttributeIndex_t m_nRadiusField; // 0x240 - 0x240
   ParticleAttributeIndex_t m_nDurationField; // 0x244 - 0x244
   ParticleAttributeIndex_t m_nFrequencyField; // 0x248 - 0x248
   ParticleAttributeIndex_t m_nAmplitudeField; // 0x24C - 0x24C
   std::int32_t m_nFilterCP; // 0x250 - 0x250

}; // size - 0x260


class C_OP_RenderSound : public CParticleFunctionRenderer
{
public:

   std::float_t m_flDurationScale; // 0x230 - 0x230
   std::float_t m_flSndLvlScale; // 0x234 - 0x234
   std::float_t m_flPitchScale; // 0x238 - 0x238
   std::float_t m_flVolumeScale; // 0x23C - 0x23C
   ParticleAttributeIndex_t m_nSndLvlField; // 0x240 - 0x240
   ParticleAttributeIndex_t m_nDurationField; // 0x244 - 0x244
   ParticleAttributeIndex_t m_nPitchField; // 0x248 - 0x248
   ParticleAttributeIndex_t m_nVolumeField; // 0x24C - 0x24C
   std::int32_t m_nChannel; // 0x250 - 0x250
   std::int32_t m_nCPReference; // 0x254 - 0x254
   char m_pszSoundName[256]; // 0x258 - 0x258
   bool m_bSuppressStopSoundEvent; // 0x358 - 0x358

}; // size - 0x360


class C_OP_RenderText : public CParticleFunctionRenderer
{
public:

   Color m_OutlineColor; // 0x230 - 0x230
   CUtlString m_DefaultText; // 0x238 - 0x238

}; // size - 0x240


class C_OP_RenderTreeShake : public CParticleFunctionRenderer
{
public:

   std::float_t m_flPeakStrength; // 0x230 - 0x230
   ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x234 - 0x234
   std::float_t m_flRadius; // 0x238 - 0x238
   ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x23C - 0x23C
   std::float_t m_flShakeDuration; // 0x240 - 0x240
   std::float_t m_flTransitionTime; // 0x244 - 0x244
   std::float_t m_flTwistAmount; // 0x248 - 0x248
   std::float_t m_flRadialAmount; // 0x24C - 0x24C
   std::float_t m_flControlPointOrientationAmount; // 0x250 - 0x250
   std::int32_t m_nControlPointForLinearDirection; // 0x254 - 0x254

}; // size - 0x260


class C_OP_RestartAfterDuration : public CParticleFunctionOperator
{
public:

   std::float_t m_flDurationMin; // 0x1F0 - 0x1F0
   std::float_t m_flDurationMax; // 0x1F4 - 0x1F4
   std::int32_t m_nCP; // 0x1F8 - 0x1F8
   std::int32_t m_nCPField; // 0x1FC - 0x1FC
   std::int32_t m_nChildGroupID; // 0x200 - 0x200
   bool m_bOnlyChildren; // 0x204 - 0x204

}; // size - 0x210


class C_OP_RtEnvCull : public CParticleFunctionOperator
{
public:

   Vector m_vecTestDir; // 0x1F0 - 0x1F0
   Vector m_vecTestNormal; // 0x1FC - 0x1FC
   bool m_bCullOnMiss; // 0x208 - 0x208
   bool m_bStickInsteadOfCull; // 0x209 - 0x209
   char m_RtEnvName[128]; // 0x20A - 0x20A
   std::int32_t m_nRTEnvCP; // 0x28C - 0x28C
   std::int32_t m_nComponent; // 0x290 - 0x290

}; // size - 0x2A0


class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission
{
public:

   CParticleCollectionFloatInput m_nChildGroupID; // 0x200 - 0x200
   CParticleCollectionFloatInput m_nFirstChild; // 0x338 - 0x338
   CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x470 - 0x470
   bool m_bPlayEndcapOnStop; // 0x5A8 - 0x5A8
   bool m_bDestroyImmediately; // 0x5A9 - 0x5A9

}; // size - 0x5B0


class C_OP_SequenceFromModel : public CParticleFunctionOperator
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1F8 - 0x1F8
   std::float_t m_flInputMin; // 0x1FC - 0x1FC
   std::float_t m_flInputMax; // 0x200 - 0x200
   std::float_t m_flOutputMin; // 0x204 - 0x204
   std::float_t m_flOutputMax; // 0x208 - 0x208
   ParticleSetMethod_t m_nSetMethod; // 0x20C - 0x20C

}; // size - 0x210


class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator
{
public:

   std::float_t m_flInterpRate; // 0x1F0 - 0x1F0
   std::float_t m_flMaxTraceLength; // 0x1F4 - 0x1F4
   std::float_t m_flTolerance; // 0x1F8 - 0x1F8
   std::float_t m_flTraceOffset; // 0x1FC - 0x1FC
   char m_CollisionGroupName[128]; // 0x200 - 0x200
   ParticleTraceSet_t m_nTraceSet; // 0x280 - 0x280
   std::int32_t m_nInputCP; // 0x284 - 0x284
   std::int32_t m_nOutputCP; // 0x288 - 0x288
   bool m_bIncludeWater; // 0x298 - 0x298

}; // size - 0x2A0


class C_OP_SetCPtoVector : public CParticleFunctionOperator
{
public:

   std::int32_t m_nCPInput; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F4

}; // size - 0x200


class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission
{
public:

   VectorFloatExpressionType_t m_nExpression; // 0x200 - 0x200
   CParticleCollectionVecInput m_vecInput1; // 0x208 - 0x208
   CParticleCollectionVecInput m_vecInput2; // 0x7D0 - 0x7D0
   CParticleRemapFloatInput m_flOutputRemap; // 0xD98 - 0xD98
   std::int32_t m_nOutputCP; // 0xED0 - 0xED0
   std::int32_t m_nOutVectorField; // 0xED4 - 0xED4

}; // size - 0xEE0


class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission
{
public:

   std::int32_t m_nCPInput; // 0x200 - 0x200
   std::int32_t m_nCPOutput; // 0x204 - 0x204

}; // size - 0x210


class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission
{
public:

   std::int32_t m_nCP1; // 0x200 - 0x200
   Vector m_vecCP1Pos; // 0x204 - 0x204

}; // size - 0x210


class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission
{
public:

   std::int32_t m_nCP1; // 0x200 - 0x200
   Vector m_vecCP1Pos; // 0x204 - 0x204
   bool m_bOrientToHMD; // 0x210 - 0x210

}; // size - 0x220


class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission
{
public:

   VectorExpressionType_t m_nExpression; // 0x200 - 0x200
   std::int32_t m_nOutputCP; // 0x204 - 0x204
   CParticleCollectionVecInput m_vInput1; // 0x208 - 0x208
   CParticleCollectionVecInput m_vInput2; // 0x7D0 - 0x7D0
   bool m_bNormalizedOutput; // 0xD98 - 0xD98

}; // size - 0xDA0


class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator
{
public:

   std::int32_t m_nChildGroupID; // 0x1F0 - 0x1F0
   std::int32_t m_nFirstControlPoint; // 0x1F4 - 0x1F4
   std::int32_t m_nNumControlPoints; // 0x1F8 - 0x1F8
   std::int32_t m_nFirstSourcePoint; // 0x1FC - 0x1FC
   bool m_bSetOrientation; // 0x200 - 0x200
   ParticleOrientationSetMode_t m_nOrientationMode; // 0x204 - 0x204
   ParticleParentSetMode_t m_nSetParent; // 0x208 - 0x208

}; // size - 0x210


class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator
{
public:

   VectorFloatExpressionType_t m_nExpression; // 0x1F0 - 0x1F0
   CPerParticleVecInput m_vInput1; // 0x1F8 - 0x1F8
   CPerParticleVecInput m_vInput2; // 0x7C0 - 0x7C0
   CParticleRemapFloatInput m_flOutputRemap; // 0xD88 - 0xD88
   ParticleAttributeIndex_t m_nOutputField; // 0xEC0 - 0xEC0
   ParticleSetMethod_t m_nSetMethod; // 0xEC4 - 0xEC4

}; // size - 0xED0


class C_OP_SetFloatCollection : public CParticleFunctionOperator
{
public:

   CParticleCollectionFloatInput m_InputValue; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nOutputField; // 0x328 - 0x328
   ParticleSetMethod_t m_nSetMethod; // 0x32C - 0x32C
   CParticleCollectionFloatInput m_Lerp; // 0x330 - 0x330

}; // size - 0x490


class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission
{
public:

   std::int32_t m_nChildGroupID; // 0x200 - 0x200
   std::int32_t m_nChildControlPoint; // 0x204 - 0x204
   std::int32_t m_nNumControlPoints; // 0x208 - 0x208
   std::int32_t m_nFirstSourcePoint; // 0x20C - 0x20C
   bool m_bSetOrientation; // 0x210 - 0x210

}; // size - 0x220


class C_OP_SetVec : public CParticleFunctionOperator
{
public:

   CPerParticleVecInput m_InputValue; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nOutputField; // 0x7B8 - 0x7B8
   ParticleSetMethod_t m_nSetMethod; // 0x7BC - 0x7BC
   CPerParticleFloatInput m_Lerp; // 0x7C0 - 0x7C0
   bool m_bNormalizedOutput; // 0x8F8 - 0x8F8

}; // size - 0x900


class C_OP_SpinUpdate : public CSpinUpdateBase
{
public:


}; // size - 0x1F0


class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission
{
public:

   CParticleCollectionFloatInput m_flDuration; // 0x200 - 0x200
   bool m_bDestroyImmediately; // 0x338 - 0x338
   bool m_bPlayEndCap; // 0x339 - 0x339

}; // size - 0x340


class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator
{
public:

   std::int32_t m_nControlPointNumber; // 0x1F0 - 0x1F0
   ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1F4 - 0x1F4
   std::int32_t m_nLocalSpaceCP; // 0x1F8 - 0x1F8
   CPerParticleFloatInput m_flInterpolation; // 0x200 - 0x200
   CPerParticleVecInput m_vecScale; // 0x338 - 0x338
   std::float_t m_flBoundaryDampening; // 0x900 - 0x900
   bool m_bSetVelocity; // 0x904 - 0x904
   bool m_bLockToSurface; // 0x905 - 0x905
   std::float_t m_flGridSpacing; // 0x908 - 0x908

}; // size - 0x910


class C_OP_WindForce : public CParticleFunctionForce
{
public:

   Vector m_vForce; // 0x1F0 - 0x1F0

}; // size - 0x200


class C_ParadropChopper : public CBaseAnimGraph
{
public:

   Vector m_vecLastRopeTargetPos; // 0x9A0 - 0x9A0
   GameTime_t m_flLastRopeTime; // 0x9AC - 0x9AC
   std::int32_t m_nRappelABone; // 0x9B0 - 0x9B0
   std::int32_t m_nRappelBBone; // 0x9B4 - 0x9B4
   CHandle< C_BaseEntity > m_hCallingPlayer; // 0x9B8 - 0x9B8
   bool m_bCalledByPlayer; // 0x9BC - 0x9BC

}; // size - 0x9C0


class C_PathParticleRope : public C_BaseEntity
{
public:

   bool m_bStartActive; // 0x538 - 0x538
   std::float_t m_flMaxSimulationTime; // 0x53C - 0x53C
   CUtlSymbolLarge m_iszEffectName; // 0x540 - 0x540
   CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x548 - 0x548
   std::float_t m_flParticleSpacing; // 0x560 - 0x560
   std::float_t m_flSlack; // 0x564 - 0x564
   std::float_t m_flRadius; // 0x568 - 0x568
   Color m_ColorTint; // 0x56C - 0x56C
   std::int32_t m_nEffectState; // 0x570 - 0x570
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x578 - 0x578
   C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x580 - 0x580
   C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x598 - 0x598
   C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x5B0 - 0x5B0
   C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x5C8 - 0x5C8
   C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x5E0 - 0x5E0
   C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x5F8 - 0x5F8

}; // size - 0x640


class C_PickUpModelSlerper : public CBaseAnimGraph
{
public:

   CHandle< C_BaseEntity > m_hPlayerParent; // 0x998 - 0x998
   CHandle< C_BaseEntity > m_hItem; // 0x99C - 0x99C
   std::float_t m_flTimePickedUp; // 0x9A0 - 0x9A0
   QAngle m_angOriginal; // 0x9A4 - 0x9A4
   Vector m_vecPosOriginal; // 0x9B0 - 0x9B0
   QAngle m_angRandom; // 0x9C0 - 0x9C0

}; // size - 0x9D0


class C_PlayerSprayDecal : public C_ModelPointEntity
{
public:

   std::int32_t m_nUniqueID; // 0x838 - 0x838
   std::uint32_t m_unAccountID; // 0x83C - 0x83C
   std::uint32_t m_unTraceID; // 0x840 - 0x840
   std::uint32_t m_rtGcTime; // 0x844 - 0x844
   Vector m_vecEndPos; // 0x848 - 0x848
   Vector m_vecStart; // 0x854 - 0x854
   Vector m_vecLeft; // 0x860 - 0x860
   Vector m_vecNormal; // 0x86C - 0x86C
   std::int32_t m_nPlayer; // 0x878 - 0x878
   std::int32_t m_nEntity; // 0x87C - 0x87C
   std::int32_t m_nHitbox; // 0x880 - 0x880
   std::float_t m_flCreationTime; // 0x884 - 0x884
   std::int32_t m_nTintID; // 0x888 - 0x888
   std::uint8_t m_nVersion; // 0x88C - 0x88C
   uint8 m_ubSignature[128]; // 0x88D - 0x88D
   CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0x918 - 0x918

}; // size - 0x948


class C_PointCamera : public C_BaseEntity
{
public:

   std::float_t m_FOV; // 0x538 - 0x538
   std::float_t m_Resolution; // 0x53C - 0x53C
   bool m_bFogEnable; // 0x540 - 0x540
   Color m_FogColor; // 0x541 - 0x541
   std::float_t m_flFogStart; // 0x548 - 0x548
   std::float_t m_flFogEnd; // 0x54C - 0x54C
   std::float_t m_flFogMaxDensity; // 0x550 - 0x550
   bool m_bActive; // 0x554 - 0x554
   bool m_bUseScreenAspectRatio; // 0x555 - 0x555
   std::float_t m_flAspectRatio; // 0x558 - 0x558
   bool m_bNoSky; // 0x55C - 0x55C
   std::float_t m_fBrightness; // 0x560 - 0x560
   std::float_t m_flZFar; // 0x564 - 0x564
   std::float_t m_flZNear; // 0x568 - 0x568
   bool m_bDofEnabled; // 0x56C - 0x56C
   std::float_t m_flDofNearBlurry; // 0x570 - 0x570
   std::float_t m_flDofNearCrisp; // 0x574 - 0x574
   std::float_t m_flDofFarCrisp; // 0x578 - 0x578
   std::float_t m_flDofFarBlurry; // 0x57C - 0x57C
   std::float_t m_flDofTiltToGround; // 0x580 - 0x580
   std::float_t m_TargetFOV; // 0x584 - 0x584
   std::float_t m_DegreesPerSecond; // 0x588 - 0x588
   bool m_bIsOn; // 0x58C - 0x58C
   C_PointCamera* m_pNext; // 0x590 - 0x590

}; // size - 0x598


class C_PointClientUIDialog : public C_BaseClientUIEntity
{
public:

   CHandle< C_BaseEntity > m_hActivator; // 0x868 - 0x868
   bool m_bStartEnabled; // 0x86C - 0x86C

}; // size - 0x870


class C_PointHintUIHighlightModel : public CBaseAnimGraph
{
public:

   CUtlVector< matrix3x4a_t > m_vecRenderModelComponentTransforms; // 0x9C8 - 0x9C8
   std::int32_t m_nTrackedDeviceIndex; // 0x9E0 - 0x9E0
   matrix3x4_t m_matLocalHighlight; // 0x9F8 - 0x9F8
   bool m_bVisible; // 0xA28 - 0xA28

}; // size - 0xA30


class C_PointHintUi : public C_PointClientUIWorldPanel
{
public:

   CUtlSymbolLarge m_pszLessonName; // 0xAD0 - 0xAD0
   CUtlSymbolLarge m_pszCaption; // 0xAD8 - 0xAD8
   Vector m_vOffset; // 0xAE0 - 0xAE0
   WorldTextAttachmentType_t m_attachType; // 0xAEC - 0xAEC
   CHandle< C_BaseEntity > m_hIconTarget; // 0xAF0 - 0xAF0
   CUtlSymbolLarge m_szTargetAttachmentName; // 0xAF8 - 0xAF8
   CUtlSymbolLarge m_pszCustomLayoutFile; // 0xB00 - 0xB00
   std::int32_t m_nTrackedDeviceIndex; // 0xB08 - 0xB08
   CHandle< C_PropVRHand > m_hHighlightHand; // 0xB0C - 0xB0C
   CUtlSymbolLarge m_pszHighlightControllerComponent; // 0xB10 - 0xB10
   CUtlSymbolLarge m_pszHighlightControllerAction; // 0xB18 - 0xB18
   Vector m_vecLocalHighlightPoint; // 0xB20 - 0xB20
   CUtlSymbolLarge m_pszHighlightOtherEntityName; // 0xB30 - 0xB30
   bool m_bUseOffScreenIndicator; // 0xB38 - 0xB38

}; // size - 0xB40


class C_PostProcessingVolume : public C_BaseTrigger
{
public:

   CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x850 - 0x850
   std::float_t m_flFadeDuration; // 0x858 - 0x858
   std::float_t m_flMinLogExposure; // 0x85C - 0x85C
   std::float_t m_flMaxLogExposure; // 0x860 - 0x860
   std::float_t m_flMinExposure; // 0x864 - 0x864
   std::float_t m_flMaxExposure; // 0x868 - 0x868
   std::float_t m_flExposureCompensation; // 0x86C - 0x86C
   std::float_t m_flExposureFadeSpeedUp; // 0x870 - 0x870
   std::float_t m_flExposureFadeSpeedDown; // 0x874 - 0x874
   std::float_t m_flTonemapEVSmoothingRange; // 0x878 - 0x878
   bool m_bMaster; // 0x87C - 0x87C
   bool m_bExposureControl; // 0x87D - 0x87D
   std::float_t m_flRate; // 0x880 - 0x880
   std::float_t m_flTonemapPercentTarget; // 0x884 - 0x884
   std::float_t m_flTonemapPercentBrightPixels; // 0x888 - 0x888
   std::float_t m_flTonemapMinAvgLum; // 0x88C - 0x88C

}; // size - 0x890


class C_Precipitation : public C_BaseTrigger
{
public:

   std::float_t m_flDensity; // 0x840 - 0x840
   std::float_t m_flParticleInnerDist; // 0x850 - 0x850
   char* m_pParticleDef; // 0x858 - 0x858
   TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x880 - 0x880
   bool m_bActiveParticlePrecipEmitter[1]; // 0x888 - 0x888
   bool m_bParticlePrecipInitialized; // 0x889 - 0x889
   bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x88A - 0x88A
   std::int32_t m_nAvailableSheetSequencesMaxIndex; // 0x88C - 0x88C

}; // size - 0x890


class C_RagdollProp : public CBaseAnimGraph
{
public:

   C_NetworkUtlVectorBase< Vector > m_ragPos; // 0x9A0 - 0x9A0
   C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0x9B8 - 0x9B8
   std::float_t m_flBlendWeight; // 0x9D0 - 0x9D0
   CHandle< C_BaseEntity > m_hRagdollSource; // 0x9D4 - 0x9D4
   AttachmentHandle_t m_iEyeAttachment; // 0x9D8 - 0x9D8
   std::float_t m_flBlendWeightCurrent; // 0x9DC - 0x9DC
   CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0x9E0 - 0x9E0
   CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0x9F8 - 0x9F8

}; // size - 0xA10


class C_RagdollPropAttached : public C_RagdollProp
{
public:

   std::uint32_t m_boneIndexAttached; // 0xA10 - 0xA10
   std::uint32_t m_ragdollAttachedObjectIndex; // 0xA14 - 0xA14
   Vector m_attachmentPointBoneSpace; // 0xA18 - 0xA18
   Vector m_attachmentPointRagdollSpace; // 0xA24 - 0xA24
   Vector m_vecOffset; // 0xA30 - 0xA30
   std::float_t m_parentTime; // 0xA3C - 0xA3C
   bool m_bHasParent; // 0xA40 - 0xA40

}; // size - 0xA48


class C_RectLight : public C_BarnLight
{
public:

   bool m_bShowLight; // 0xA70 - 0xA70

}; // size - 0xA78


class C_RetakeGameRules
{
public:

   std::int32_t m_nMatchSeed; // 0xF8 - 0xF8
   bool m_bBlockersPresent; // 0xFC - 0xFC
   bool m_bRoundInProgress; // 0xFD - 0xFD
   std::int32_t m_iFirstSecondHalfRound; // 0x100 - 0x100
   std::int32_t m_iBombSite; // 0x104 - 0x104

}; // size - 0x118


class C_SensorGrenade : public C_BaseCSGrenade
{
public:


}; // size - 0x1410


class C_SensorGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
public:


}; // size - 0xC20


class C_SkyCamera : public C_BaseEntity
{
public:

   sky3dparams_t m_skyboxData; // 0x538 - 0x538
   CUtlStringToken m_skyboxSlotToken; // 0x5C8 - 0x5C8
   bool m_bUseAngles; // 0x5CC - 0x5CC
   C_SkyCamera* m_pNext; // 0x5D0 - 0x5D0

}; // size - 0x5D8


class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
public:

   std::int32_t m_nSmokeEffectTickBegin; // 0xC08 - 0xC08
   bool m_bDidSmokeEffect; // 0xC0C - 0xC0C
   std::int32_t m_nRandomSeed; // 0xC10 - 0xC10
   Vector m_vSmokeColor; // 0xC14 - 0xC14
   Vector m_vSmokeDetonationPos; // 0xC20 - 0xC20
   CUtlVector< uint8 > m_VoxelFrameData; // 0xC30 - 0xC30
   bool m_bSmokeVolumeDataReceived; // 0xC48 - 0xC48
   bool m_bSmokeEffectSpawned; // 0xC49 - 0xC49

}; // size - 0xD90


class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase
{
public:

   Vector m_vMin; // 0x560 - 0x560
   Vector m_vMax; // 0x56C - 0x56C

}; // size - 0x578


class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase
{
public:

   std::float_t m_flRadius; // 0x560 - 0x560

}; // size - 0x568


class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity
{
public:


}; // size - 0x558


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


class C_Sprite : public C_BaseModelEntity
{
public:

   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x850 - 0x850
   CHandle< C_BaseEntity > m_hAttachedToEntity; // 0x858 - 0x858
   AttachmentHandle_t m_nAttachment; // 0x85C - 0x85C
   std::float_t m_flSpriteFramerate; // 0x860 - 0x860
   std::float_t m_flFrame; // 0x864 - 0x864
   GameTime_t m_flDieTime; // 0x868 - 0x868
   std::uint32_t m_nBrightness; // 0x878 - 0x878
   std::float_t m_flBrightnessDuration; // 0x87C - 0x87C
   std::float_t m_flSpriteScale; // 0x880 - 0x880
   std::float_t m_flScaleDuration; // 0x884 - 0x884
   bool m_bWorldSpaceScale; // 0x888 - 0x888
   std::float_t m_flGlowProxySize; // 0x88C - 0x88C
   std::float_t m_flHDRColorScale; // 0x890 - 0x890
   GameTime_t m_flLastTime; // 0x894 - 0x894
   std::float_t m_flMaxFrame; // 0x898 - 0x898
   std::float_t m_flStartScale; // 0x89C - 0x89C
   std::float_t m_flDestScale; // 0x8A0 - 0x8A0
   GameTime_t m_flScaleTimeStart; // 0x8A4 - 0x8A4
   std::int32_t m_nStartBrightness; // 0x8A8 - 0x8A8
   std::int32_t m_nDestBrightness; // 0x8AC - 0x8AC
   GameTime_t m_flBrightnessTimeStart; // 0x8B0 - 0x8B0
   CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0x8B8 - 0x8B8
   std::int32_t m_nSpriteWidth; // 0x960 - 0x960
   std::int32_t m_nSpriteHeight; // 0x964 - 0x964

}; // size - 0x968


class C_Sun : public C_BaseModelEntity
{
public:

   ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0x838 - 0x838
   ParticleIndex_t m_fxSunFlareEffectIndex; // 0x83C - 0x83C
   std::float_t m_fdistNormalize; // 0x840 - 0x840
   Vector m_vSunPos; // 0x844 - 0x844
   Vector m_vDirection; // 0x850 - 0x850
   CUtlSymbolLarge m_iszEffectName; // 0x860 - 0x860
   CUtlSymbolLarge m_iszSSEffectName; // 0x868 - 0x868
   Color m_clrOverlay; // 0x870 - 0x870
   bool m_bOn; // 0x874 - 0x874
   bool m_bmaxColor; // 0x875 - 0x875
   std::float_t m_flSize; // 0x878 - 0x878
   std::float_t m_flHazeScale; // 0x87C - 0x87C
   std::float_t m_flRotation; // 0x880 - 0x880
   std::float_t m_flHDRColorScale; // 0x884 - 0x884
   std::float_t m_flAlphaHaze; // 0x888 - 0x888
   std::float_t m_flAlphaScale; // 0x88C - 0x88C
   std::float_t m_flAlphaHdr; // 0x890 - 0x890
   std::float_t m_flFarZScale; // 0x894 - 0x894

}; // size - 0x898


class C_SunGlowOverlay : public CGlowOverlay
{
public:

   bool m_bModulateByDot; // 0xD0 - 0xD0

}; // size - 0xD8


class C_SurvivalGameRules
{
public:

   Vector m_vecPlayAreaMins; // 0x8 - 0x8
   Vector m_vecPlayAreaMaxs; // 0x14 - 0x14
   int32 m_iPlayerSpawnHexIndices[64]; // 0x20 - 0x20
   ESurvivalSpawnTileState m_SpawnTileState[224]; // 0x120 - 0x120
   std::float_t m_flSpawnSelectionTimeStartCurrentStage; // 0x200 - 0x200
   std::float_t m_flSpawnSelectionTimeEndCurrentStage; // 0x204 - 0x204
   std::float_t m_flSpawnSelectionTimeEndLastStage; // 0x208 - 0x208
   SpawnStage_t m_spawnStage; // 0x20C - 0x20C
   std::float_t m_flTabletHexOriginX; // 0x210 - 0x210
   std::float_t m_flTabletHexOriginY; // 0x214 - 0x214
   std::float_t m_flTabletHexSize; // 0x218 - 0x218
   uint64 m_roundData_playerXuids[64]; // 0x220 - 0x220
   int32 m_roundData_playerPositions[64]; // 0x420 - 0x420
   int32 m_roundData_playerTeams[64]; // 0x520 - 0x520
   ESurvivalGameRuleDecision_t m_SurvivalGameRuleDecisionTypes[16]; // 0x620 - 0x620
   int32 m_SurvivalGameRuleDecisionValues[16]; // 0x660 - 0x660
   std::float_t m_flSurvivalStartTime; // 0x6A0 - 0x6A0
   std::float_t m_flLastThinkTime; // 0x6A4 - 0x6A4

}; // size - 0x6C0


class C_TeamRoundTimer : public C_BaseEntity
{
public:

   bool m_bTimerPaused; // 0x538 - 0x538
   std::float_t m_flTimeRemaining; // 0x53C - 0x53C
   GameTime_t m_flTimerEndTime; // 0x540 - 0x540
   bool m_bIsDisabled; // 0x544 - 0x544
   bool m_bShowInHUD; // 0x545 - 0x545
   std::int32_t m_nTimerLength; // 0x548 - 0x548
   std::int32_t m_nTimerInitialLength; // 0x54C - 0x54C
   std::int32_t m_nTimerMaxLength; // 0x550 - 0x550
   bool m_bAutoCountdown; // 0x554 - 0x554
   std::int32_t m_nSetupTimeLength; // 0x558 - 0x558
   std::int32_t m_nState; // 0x55C - 0x55C
   bool m_bStartPaused; // 0x560 - 0x560
   bool m_bInCaptureWatchState; // 0x561 - 0x561
   std::float_t m_flTotalTime; // 0x564 - 0x564
   bool m_bStopWatchTimer; // 0x568 - 0x568
   bool m_bFireFinished; // 0x569 - 0x569
   bool m_bFire5MinRemain; // 0x56A - 0x56A
   bool m_bFire4MinRemain; // 0x56B - 0x56B
   bool m_bFire3MinRemain; // 0x56C - 0x56C
   bool m_bFire2MinRemain; // 0x56D - 0x56D
   bool m_bFire1MinRemain; // 0x56E - 0x56E
   bool m_bFire30SecRemain; // 0x56F - 0x56F
   bool m_bFire10SecRemain; // 0x570 - 0x570
   bool m_bFire5SecRemain; // 0x571 - 0x571
   bool m_bFire4SecRemain; // 0x572 - 0x572
   bool m_bFire3SecRemain; // 0x573 - 0x573
   bool m_bFire2SecRemain; // 0x574 - 0x574
   bool m_bFire1SecRemain; // 0x575 - 0x575
   std::int32_t m_nOldTimerLength; // 0x578 - 0x578
   std::int32_t m_nOldTimerState; // 0x57C - 0x57C

}; // size - 0x580


class C_TextureBasedAnimatable : public C_BaseModelEntity
{
public:

   bool m_bLoop; // 0x838 - 0x838
   std::float_t m_flFPS; // 0x83C - 0x83C
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x840 - 0x840
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x848 - 0x848
   Vector m_vAnimationBoundsMin; // 0x850 - 0x850
   Vector m_vAnimationBoundsMax; // 0x85C - 0x85C
   std::float_t m_flStartTime; // 0x868 - 0x868
   std::float_t m_flStartFrame; // 0x86C - 0x86C

}; // size - 0x870


class C_TonemapController2 : public C_BaseEntity
{
public:

   std::float_t m_flAutoExposureMin; // 0x538 - 0x538
   std::float_t m_flAutoExposureMax; // 0x53C - 0x53C
   std::float_t m_flTonemapPercentTarget; // 0x540 - 0x540
   std::float_t m_flTonemapPercentBrightPixels; // 0x544 - 0x544
   std::float_t m_flTonemapMinAvgLum; // 0x548 - 0x548
   std::float_t m_flExposureAdaptationSpeedUp; // 0x54C - 0x54C
   std::float_t m_flExposureAdaptationSpeedDown; // 0x550 - 0x550
   std::float_t m_flTonemapEVSmoothingRange; // 0x554 - 0x554

}; // size - 0x560


class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2
{
public:


}; // size - 0x560


class C_TriggerCamera : public C_BaseEntity
{
public:


}; // size - 0x538


class C_TripWireFire : public C_BaseCSGrenade
{
public:


}; // size - 0x1410


class C_WaterBullet : public CBaseAnimGraph
{
public:


}; // size - 0x998


class C_WeaponAug : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponElite : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponG3SG1 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponM4A1 : public C_WeaponCSBaseGun
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


class C_WeaponP250 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponP90 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponTaser : public C_WeaponCSBaseGun
{
public:

   GameTime_t m_fFireTime; // 0x13F0 - 0x13F0

}; // size - 0x1400


class C_WeaponTec9 : public C_WeaponCSBaseGun
{
public:


}; // size - 0x13F0


class C_WeaponXM1014 : public C_WeaponCSBase
{
public:


}; // size - 0x13D0


class CompMatPropertyMutator_t
{
public:

   bool m_bEnabled; // 0x0 - 0x0
   CompMatPropertyMutatorType_t m_nMutatorCommandType; // 0x4 - 0x4
   CUtlString m_strInitWith_Container; // 0x8 - 0x8
   CUtlString m_strCopyProperty_InputContainerSrc; // 0x10 - 0x10
   CUtlString m_strCopyProperty_InputContainerProperty; // 0x18 - 0x18
   CUtlString m_strCopyProperty_TargetProperty; // 0x20 - 0x20
   CUtlString m_strRandomRollInputVars_SeedInputVar; // 0x28 - 0x28
   CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll; // 0x30 - 0x30
   CUtlString m_strCopyMatchingKeys_InputContainerSrc; // 0x48 - 0x48
   CUtlString m_strCopyKeysWithSuffix_InputContainerSrc; // 0x50 - 0x50
   CUtlString m_strCopyKeysWithSuffix_FindSuffix; // 0x58 - 0x58
   CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix; // 0x60 - 0x60
   CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68 - 0x68
   CUtlString m_strGenerateTexture_TargetParam; // 0x2C0 - 0x2C0
   CUtlString m_strGenerateTexture_InitialContainer; // 0x2C8 - 0x2C8
   std::int32_t m_nResolution; // 0x2D0 - 0x2D0
   bool m_bSplatDebugInfo; // 0x2D4 - 0x2D4
   bool m_bCaptureInRenderDoc; // 0x2D5 - 0x2D5
   CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions; // 0x2D8 - 0x2D8
   CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators; // 0x2F0 - 0x2F0
   CUtlString m_strPopInputQueue_Container; // 0x308 - 0x308
   CUtlString m_strDrawText_InputContainerSrc; // 0x310 - 0x310
   CUtlString m_strDrawText_InputContainerProperty; // 0x318 - 0x318
   Vector2D m_vecDrawText_Position; // 0x320 - 0x320
   CUtlVector< CompMatMutatorCondition_t > m_vecConditions; // 0x328 - 0x328

}; // size - 0x340


class CompositeMaterialMatchFilter_t
{
public:

   CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0 - 0x0
   CUtlString m_strMatchFilter; // 0x8 - 0x8
   CUtlString m_strMatchValue; // 0x10 - 0x10
   bool m_bPassWhenTrue; // 0x18 - 0x18

}; // size - 0x20


class ConstraintSoundInfo
{
public:

   VelocitySampler m_vSampler; // 0x8 - 0x8
   SimpleConstraintSoundProfile m_soundProfile; // 0x20 - 0x20
   Vector m_forwardAxis; // 0x40 - 0x40
   CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50 - 0x50
   CUtlSymbolLarge m_iszTravelSoundBack; // 0x58 - 0x58
   CUtlSymbolLarge m_iszReversalSounds[3]; // 0x68 - 0x68
   bool m_bPlayTravelSound; // 0x80 - 0x80
   bool m_bPlayReversalSound; // 0x81 - 0x81

}; // size - 0x88


class CovMatrix3
{
public:

   Vector m_vDiag; // 0x0 - 0x0
   std::float_t m_flXY; // 0xC - 0xC
   std::float_t m_flXZ; // 0x10 - 0x10
   std::float_t m_flYZ; // 0x14 - 0x14

}; // size - 0x18


class EngineLoopState_t
{
public:

   std::int32_t m_nPlatWindowWidth; // 0x18 - 0x18
   std::int32_t m_nPlatWindowHeight; // 0x1C - 0x1C
   std::int32_t m_nRenderWidth; // 0x20 - 0x20
   std::int32_t m_nRenderHeight; // 0x24 - 0x24

}; // size - 0x28


class EntOutput_t
{
public:


}; // size - 0x10


class EntityIOConnectionData_t
{
public:

   CUtlString m_outputName; // 0x0 - 0x0
   std::uint32_t m_targetType; // 0x8 - 0x8
   CUtlString m_targetName; // 0x10 - 0x10
   CUtlString m_inputName; // 0x18 - 0x18
   CUtlString m_overrideParam; // 0x20 - 0x20
   std::float_t m_flDelay; // 0x28 - 0x28
   std::int32_t m_nTimesToFire; // 0x2C - 0x2C

}; // size - 0x30


class EntitySpottedState_t
{
public:

   bool m_bSpotted; // 0x8 - 0x8
   uint32 m_bSpottedByMask[2]; // 0xC - 0xC

}; // size - 0x18


class EntitySpottedState_t
{
public:

   bool m_bSpotted; // 0x8 - 0x8
   uint32 m_bSpottedByMask[2]; // 0xC - 0xC

}; // size - 0x18


class EventClientOutput_t
{
public:

   EngineLoopState_t m_LoopState; // 0x0 - 0x0
   std::float_t m_flRenderTime; // 0x28 - 0x28
   std::float_t m_flRealTime; // 0x2C - 0x2C
   std::float_t m_flRenderFrameTimeUnbounded; // 0x30 - 0x30
   bool m_bRenderOnly; // 0x34 - 0x34

}; // size - 0x38


class EventClientPauseSimulate_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventClientPollNetworking_t
{
public:

   std::int32_t m_nTickCount; // 0x0 - 0x0

}; // size - 0x4


class EventClientPreSimulate_t : public EventSimulate_t
{
public:


}; // size - 0x30


class EventClientPredictionPostNetupdate_t
{
public:


}; // size - 0x1


class EventClientSceneSystemThreadStateChange_t
{
public:

   bool m_bThreadsActive; // 0x0 - 0x0

}; // size - 0x1


class EventModInitialized_t
{
public:


}; // size - 0x1


class EventPostAdvanceTick_t : public EventSimulate_t
{
public:

   std::int32_t m_nCurrentTick; // 0x30 - 0x30
   std::int32_t m_nCurrentTickThisFrame; // 0x34 - 0x34
   std::int32_t m_nTotalTicksThisFrame; // 0x38 - 0x38
   std::int32_t m_nTotalTicks; // 0x3C - 0x3C

}; // size - 0x40


class EventProfileStorageAvailable_t
{
public:

   CSplitScreenSlot m_nSplitScreenSlot; // 0x0 - 0x0

}; // size - 0x4


class EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t
{
public:


}; // size - 0x40


class EventServerSimulate_t : public EventSimulate_t
{
public:


}; // size - 0x30


class ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:

   std::uint32_t m_nSubSceneObject; // 0x4 - 0x4
   std::uint32_t m_nDrawCallIndex; // 0x8 - 0x8
   MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xC - 0xC
   CRenderBufferBinding m_extraBufferBinding; // 0x10 - 0x10

}; // size - 0x28


class FeAnimStrayRadius_t
{
public:

   uint16 nNode[2]; // 0x0 - 0x0
   std::float_t flMaxDist; // 0x4 - 0x4
   std::float_t flRelaxationFactor; // 0x8 - 0x8

}; // size - 0xC


class FeBoxRigid_t
{
public:

   CTransform tmFrame2; // 0x0 - 0x0
   std::uint16_t nNode; // 0x20 - 0x20
   std::uint16_t nCollisionMask; // 0x22 - 0x22
   Vector vSize; // 0x24 - 0x24
   std::float_t flStickiness; // 0x30 - 0x30
   std::uint16_t nVertexMapIndex; // 0x34 - 0x34
   std::uint16_t nFlags; // 0x36 - 0x36
   float32 flReserved[2]; // 0x38 - 0x38

}; // size - 0x40


class FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:

   std::int32_t m_nPriority; // 0x40 - 0x40
   std::uint32_t m_nVertexMapHash; // 0x44 - 0x44

}; // size - 0x50


class FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:

   std::int32_t m_nPriority; // 0x20 - 0x20
   std::uint32_t m_nVertexMapHash; // 0x24 - 0x24

}; // size - 0x30


class FeCtrlOsOffset_t
{
public:

   std::uint16_t nCtrlParent; // 0x0 - 0x0
   std::uint16_t nCtrlChild; // 0x2 - 0x2

}; // size - 0x4


class FeFitWeight_t
{
public:

   std::float_t flWeight; // 0x0 - 0x0
   std::uint16_t nNode; // 0x4 - 0x4
   std::uint16_t nDummy; // 0x6 - 0x6

}; // size - 0x8


class FeFollowNode_t
{
public:

   std::uint16_t nParentNode; // 0x0 - 0x0
   std::uint16_t nChildNode; // 0x2 - 0x2
   std::float_t flWeight; // 0x4 - 0x4

}; // size - 0x8


class FeMorphLayerDepr_t
{
public:

   CUtlString m_Name; // 0x0 - 0x0
   std::uint32_t m_nNameHash; // 0x8 - 0x8
   CUtlVector< uint16 > m_Nodes; // 0x10 - 0x10
   CUtlVector< Vector > m_InitPos; // 0x28 - 0x28
   CUtlVector< float32 > m_Gravity; // 0x40 - 0x40
   CUtlVector< float32 > m_GoalStrength; // 0x58 - 0x58
   CUtlVector< float32 > m_GoalDamping; // 0x70 - 0x70
   std::uint32_t m_nFlags; // 0x88 - 0x88

}; // size - 0x90


class FeProxyVertexMap_t
{
public:

   CUtlString m_Name; // 0x0 - 0x0
   std::float_t m_flWeight; // 0x8 - 0x8

}; // size - 0x10


class FeRigidColliderIndices_t
{
public:

   std::uint16_t m_nTaperedCapsuleRigidIndex; // 0x0 - 0x0
   std::uint16_t m_nSphereRigidIndex; // 0x2 - 0x2
   std::uint16_t m_nBoxRigidIndex; // 0x4 - 0x4
   uint16 m_nCollisionSphereIndex[2]; // 0x6 - 0x6
   std::uint16_t m_nCollisionPlaneIndex; // 0xA - 0xA

}; // size - 0xC


class FeSimdNodeBase_t
{
public:

   uint16 nNode[4]; // 0x0 - 0x0
   uint16 nNodeX0[4]; // 0x8 - 0x8
   uint16 nNodeX1[4]; // 0x10 - 0x10
   uint16 nNodeY0[4]; // 0x18 - 0x18
   uint16 nNodeY1[4]; // 0x20 - 0x20
   uint16 nDummy[4]; // 0x28 - 0x28
   FourQuaternions qAdjust; // 0x30 - 0x30

}; // size - 0x70


class FeSimdRodConstraint_t
{
public:

   uint16 nNode[4][2]; // 0x0 - 0x0
   fltx4 f4MaxDist; // 0x10 - 0x10
   fltx4 f4MinDist; // 0x20 - 0x20
   fltx4 f4Weight0; // 0x30 - 0x30
   fltx4 f4RelaxationFactor; // 0x40 - 0x40

}; // size - 0x50


class FeSoftParent_t
{
public:

   std::int32_t nParent; // 0x0 - 0x0
   std::float_t flAlpha; // 0x4 - 0x4

}; // size - 0x8


class FeSphereRigid_t
{
public:

   fltx4 vSphere; // 0x0 - 0x0
   std::float_t flStickiness; // 0x10 - 0x10
   std::uint16_t nNode; // 0x14 - 0x14
   std::uint16_t nCollisionMask; // 0x16 - 0x16
   std::uint16_t nVertexMapIndex; // 0x18 - 0x18
   std::uint16_t nFlags; // 0x1A - 0x1A

}; // size - 0x20


class FeSpringIntegrator_t
{
public:

   uint16 nNode[2]; // 0x0 - 0x0
   std::float_t flSpringRestLength; // 0x4 - 0x4
   std::float_t flSpringConstant; // 0x8 - 0x8
   std::float_t flSpringDamping; // 0xC - 0xC
   std::float_t flNodeWeight0; // 0x10 - 0x10

}; // size - 0x14


class FeTreeChildren_t
{
public:

   uint16 nChild[2]; // 0x0 - 0x0

}; // size - 0x4


class FeWorldCollisionParams_t
{
public:

   std::float_t flWorldFriction; // 0x0 - 0x0
   std::float_t flGroundFriction; // 0x4 - 0x4
   std::uint16_t nListBegin; // 0x8 - 0x8
   std::uint16_t nListEnd; // 0xA - 0xA

}; // size - 0xC


class FilterTeam : public CBaseFilter
{
public:

   std::int32_t m_iFilterTeam; // 0x4F8 - 0x4F8

}; // size - 0x500


class FootFixedSettings
{
public:

   TraceSettings_t m_traceSettings; // 0x0 - 0x0
   VectorAligned m_vFootBaseBindPosePositionMS; // 0x10 - 0x10
   std::float_t m_flFootBaseLength; // 0x20 - 0x20
   std::float_t m_flMaxRotationLeft; // 0x24 - 0x24
   std::float_t m_flMaxRotationRight; // 0x28 - 0x28
   std::int32_t m_footstepLandedTagIndex; // 0x2C - 0x2C
   bool m_bEnableTracing; // 0x30 - 0x30
   std::float_t m_flTraceAngleBlend; // 0x34 - 0x34
   std::int32_t m_nDisableTagIndex; // 0x38 - 0x38
   std::int32_t m_nFootIndex; // 0x3C - 0x3C

}; // size - 0x40


class HSequence
{
public:

   std::int32_t m_Value; // 0x0 - 0x0

}; // size - 0x4


class IClientAlphaProperty
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IEconItemInterface
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IPhysicsPlayerController
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class IRagdoll
{
public:

   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;

}; // size - 0x8


class InfoForResourceTypeCCSGOEconItem
{
public:


}; // size - 0x1


class InfoForResourceTypeCPanoramaLayout
{
public:


}; // size - 0x1


class InfoForResourceTypeCResourceManifestInternal
{
public:


}; // size - 0x1


class InfoForResourceTypeCSequenceGroupData
{
public:


}; // size - 0x1


class InfoForResourceTypeManifestTestResource_t
{
public:


}; // size - 0x1


class IntervalTimer
{
public:

   GameTime_t m_timestamp; // 0x8 - 0x8
   WorldGroupId_t m_nWorldGroupId; // 0xC - 0xC

}; // size - 0x10


class IntervalTimer
{
public:

   GameTime_t m_timestamp; // 0x8 - 0x8
   WorldGroupId_t m_nWorldGroupId; // 0xC - 0xC

}; // size - 0x10


class MaterialParamFloat_t : public MaterialParam_t
{
public:

   std::float_t m_flValue; // 0x8 - 0x8

}; // size - 0x10


class OldFeEdge_t
{
public:

   float32 m_flK[3]; // 0x0 - 0x0
   std::float_t invA; // 0xC - 0xC
   std::float_t t; // 0x10 - 0x10
   std::float_t flThetaRelaxed; // 0x14 - 0x14
   std::float_t flThetaFactor; // 0x18 - 0x18
   std::float_t c01; // 0x1C - 0x1C
   std::float_t c02; // 0x20 - 0x20
   std::float_t c03; // 0x24 - 0x24
   std::float_t c04; // 0x28 - 0x28
   std::float_t flAxialModelDist; // 0x2C - 0x2C
   float32 flAxialModelWeights[4]; // 0x30 - 0x30
   uint16 m_nNode[4]; // 0x40 - 0x40

}; // size - 0x48


class PackedAABB_t
{
public:

   std::uint32_t m_nPackedMin; // 0x0 - 0x0
   std::uint32_t m_nPackedMax; // 0x4 - 0x4

}; // size - 0x8


class ParamSpan_t
{
public:

   CUtlVector< ParamSpanSample_t > m_samples; // 0x0 - 0x0
   CAnimParamHandle m_hParam; // 0x18 - 0x18
   AnimParamType_t m_eParamType; // 0x1A - 0x1A
   std::float_t m_flStartCycle; // 0x1C - 0x1C
   std::float_t m_flEndCycle; // 0x20 - 0x20

}; // size - 0x28


class ParticleAttributeIndex_t
{
public:

   std::int32_t m_Value; // 0x0 - 0x0

}; // size - 0x4


class ParticleControlPointDriver_t
{
public:

   std::int32_t m_iControlPoint; // 0x0 - 0x0
   ParticleAttachment_t m_iAttachType; // 0x4 - 0x4
   CUtlString m_attachmentName; // 0x8 - 0x8
   Vector m_vecOffset; // 0x10 - 0x10
   QAngle m_angOffset; // 0x1C - 0x1C
   CUtlString m_entityName; // 0x28 - 0x28

}; // size - 0x30


class ParticlePreviewBodyGroup_t
{
public:

   CUtlString m_bodyGroupName; // 0x0 - 0x0
   std::int32_t m_nValue; // 0x8 - 0x8

}; // size - 0x10


class PermModelData_t
{
public:

   CUtlString m_name; // 0x0 - 0x0
   PermModelInfo_t m_modelInfo; // 0x8 - 0x8
   CUtlVector< PermModelExtPart_t > m_ExtParts; // 0x60 - 0x60
   CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes; // 0x78 - 0x78
   CUtlVector< uint64 > m_refMeshGroupMasks; // 0x90 - 0x90
   CUtlVector< uint64 > m_refPhysGroupMasks; // 0xA8 - 0xA8
   CUtlVector< uint8 > m_refLODGroupMasks; // 0xC0 - 0xC0
   CUtlVector< float32 > m_lodGroupSwitchDistances; // 0xD8 - 0xD8
   CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData; // 0xF0 - 0xF0
   CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData; // 0x108 - 0x108
   CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups; // 0x120 - 0x120
   CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups; // 0x138 - 0x138
   CUtlVector< CUtlString > m_meshGroups; // 0x150 - 0x150
   CUtlVector< MaterialGroup_t > m_materialGroups; // 0x168 - 0x168
   std::uint64_t m_nDefaultMeshGroupMask; // 0x180 - 0x180
   ModelSkeletonData_t m_modelSkeleton; // 0x188 - 0x188
   CUtlVector< int16 > m_remappingTable; // 0x230 - 0x230
   CUtlVector< uint16 > m_remappingTableStarts; // 0x248 - 0x248
   CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers; // 0x260 - 0x260
   CModelConfigList* m_pModelConfigList; // 0x278 - 0x278
   CUtlVector< CUtlString > m_BodyGroupsHiddenInTools; // 0x280 - 0x280
   CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels; // 0x298 - 0x298
   CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes; // 0x2B0 - 0x2B0

}; // size - 0x2C8


class PermModelExtPart_t
{
public:

   CTransform m_Transform; // 0x0 - 0x0
   CUtlString m_Name; // 0x20 - 0x20
   std::int32_t m_nParent; // 0x28 - 0x28
   CStrongHandle< InfoForResourceTypeCModel > m_refModel; // 0x30 - 0x30

}; // size - 0x40


class PermModelInfo_t
{
public:

   std::uint32_t m_nFlags; // 0x0 - 0x0
   Vector m_vHullMin; // 0x4 - 0x4
   Vector m_vHullMax; // 0x10 - 0x10
   Vector m_vViewMin; // 0x1C - 0x1C
   Vector m_vViewMax; // 0x28 - 0x28
   std::float_t m_flMass; // 0x34 - 0x34
   Vector m_vEyePosition; // 0x38 - 0x38
   std::float_t m_flMaxEyeDeflection; // 0x44 - 0x44
   CUtlString m_sSurfaceProperty; // 0x48 - 0x48
   CUtlString m_keyValueText; // 0x50 - 0x50

}; // size - 0x58


class PostProcessingLocalContrastParameters_t
{
public:

   std::float_t m_flLocalContrastStrength; // 0x0 - 0x0
   std::float_t m_flLocalContrastEdgeStrength; // 0x4 - 0x4
   std::float_t m_flLocalContrastVignetteStart; // 0x8 - 0x8
   std::float_t m_flLocalContrastVignetteEnd; // 0xC - 0xC
   std::float_t m_flLocalContrastVignetteBlur; // 0x10 - 0x10

}; // size - 0x14


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
   }


}; // size - 0x1


class RenderSkeletonBone_t
{
public:

   CUtlString m_boneName; // 0x0 - 0x0
   CUtlString m_parentName; // 0x8 - 0x8
   matrix3x4_t m_invBindPose; // 0x10 - 0x10
   SkeletonBoneBounds_t m_bbox; // 0x40 - 0x40
   std::float_t m_flSphereRadius; // 0x58 - 0x58

}; // size - 0x60


class RnSoftbodyParticle_t
{
public:

   std::float_t m_flMassInv; // 0x0 - 0x0

}; // size - 0x4


class RnWing_t
{
public:

   int32 m_nIndex[3]; // 0x0 - 0x0

}; // size - 0xC


class SimpleConstraintSoundProfile
{
public:

   SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8 - 0x8
   float32 m_keyPoints[2]; // 0xC - 0xC
   float32 m_reversalSoundThresholds[3]; // 0x14 - 0x14

}; // size - 0x20


class SolveIKChainPoseOpFixedSettings_t
{
public:

   CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0 - 0x0

}; // size - 0x18


class SpawnPointCoopEnemy : public SpawnPoint
{
public:

   CUtlSymbolLarge m_szWeaponsToGive; // 0x4B0 - 0x4B0
   CUtlSymbolLarge m_szPlayerModelToUse; // 0x4B8 - 0x4B8
   std::int32_t m_nArmorToSpawnWith; // 0x4C0 - 0x4C0
   SpawnPointCoopEnemy::BotDefaultBehavior_t m_nDefaultBehavior; // 0x4C4 - 0x4C4
   std::int32_t m_nBotDifficulty; // 0x4C8 - 0x4C8
   bool m_bIsAgressive; // 0x4CC - 0x4CC
   bool m_bStartAsleep; // 0x4CD - 0x4CD
   std::float_t m_flHideRadius; // 0x4D0 - 0x4D0
   CUtlSymbolLarge m_szBehaviorTreeFile; // 0x4E0 - 0x4E0

}; // size - 0x4E8


class TextureGroup_t
{
public:

   bool m_bEnabled; // 0x0 - 0x0
   bool m_bReplaceTextureWithGradient; // 0x1 - 0x1
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x8 - 0x8
   CColorGradient m_Gradient; // 0x10 - 0x10
   SpriteCardTextureType_t m_nTextureType; // 0x28 - 0x28
   SpriteCardTextureChannel_t m_nTextureChannels; // 0x2C - 0x2C
   ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30 - 0x30
   CParticleCollectionFloatInput m_flTextureBlend; // 0x38 - 0x38
   TextureControls_t m_TextureControls; // 0x170 - 0x170

}; // size - 0xA18


class VMixBoxverbDesc_t
{
public:

   std::float_t m_flSizeMax; // 0x0 - 0x0
   std::float_t m_flSizeMin; // 0x4 - 0x4
   std::float_t m_flComplexity; // 0x8 - 0x8
   std::float_t m_flDiffusion; // 0xC - 0xC
   std::float_t m_flModDepth; // 0x10 - 0x10
   std::float_t m_flModRate; // 0x14 - 0x14
   bool m_bParallel; // 0x18 - 0x18
   VMixFilterDesc_t m_filterType; // 0x1C - 0x1C
   std::float_t m_flWidth; // 0x2C - 0x2C
   std::float_t m_flHeight; // 0x30 - 0x30
   std::float_t m_flDepth; // 0x34 - 0x34
   std::float_t m_flFeedbackScale; // 0x38 - 0x38
   std::float_t m_flFeedbackWidth; // 0x3C - 0x3C
   std::float_t m_flFeedbackHeight; // 0x40 - 0x40
   std::float_t m_flFeedbackDepth; // 0x44 - 0x44
   std::float_t m_flOutputGain; // 0x48 - 0x48
   std::float_t m_flTaps; // 0x4C - 0x4C

}; // size - 0x50


class VMixConvolutionDesc_t
{
public:

   std::float_t m_fldbGain; // 0x0 - 0x0
   std::float_t m_flPreDelayMS; // 0x4 - 0x4
   std::float_t m_flWetMix; // 0x8 - 0x8
   std::float_t m_fldbLow; // 0xC - 0xC
   std::float_t m_fldbMid; // 0x10 - 0x10
   std::float_t m_fldbHigh; // 0x14 - 0x14
   std::float_t m_flLowCutoffFreq; // 0x18 - 0x18
   std::float_t m_flHighCutoffFreq; // 0x1C - 0x1C

}; // size - 0x20


class VMixDelayDesc_t
{
public:

   VMixFilterDesc_t m_feedbackFilter; // 0x0 - 0x0
   bool m_bEnableFilter; // 0x10 - 0x10
   std::float_t m_flDelay; // 0x14 - 0x14
   std::float_t m_flDirectGain; // 0x18 - 0x18
   std::float_t m_flDelayGain; // 0x1C - 0x1C
   std::float_t m_flFeedbackGain; // 0x20 - 0x20
   std::float_t m_flWidth; // 0x24 - 0x24

}; // size - 0x28


class VMixDiffusorDesc_t
{
public:

   std::float_t m_flSize; // 0x0 - 0x0
   std::float_t m_flComplexity; // 0x4 - 0x4
   std::float_t m_flFeedback; // 0x8 - 0x8
   std::float_t m_flOutputGain; // 0xC - 0xC

}; // size - 0x10


class VMixFilterDesc_t
{
public:

   VMixFilterType_t m_nFilterType; // 0x0 - 0x0
   VMixFilterSlope_t m_nFilterSlope; // 0x2 - 0x2
   bool m_bEnabled; // 0x3 - 0x3
   std::float_t m_fldbGain; // 0x4 - 0x4
   std::float_t m_flCutoffFreq; // 0x8 - 0x8
   std::float_t m_flQ; // 0xC - 0xC

}; // size - 0x10


class VMixModDelayDesc_t
{
public:

   VMixFilterDesc_t m_feedbackFilter; // 0x0 - 0x0
   bool m_bPhaseInvert; // 0x10 - 0x10
   std::float_t m_flGlideTime; // 0x14 - 0x14
   std::float_t m_flDelay; // 0x18 - 0x18
   std::float_t m_flOutputGain; // 0x1C - 0x1C
   std::float_t m_flFeedbackGain; // 0x20 - 0x20
   std::float_t m_flModRate; // 0x24 - 0x24
   std::float_t m_flModDepth; // 0x28 - 0x28
   bool m_bApplyAntialiasing; // 0x2C - 0x2C

}; // size - 0x30


class VecInputMaterialVariable_t
{
public:

   CUtlString m_strVariable; // 0x0 - 0x0
   CParticleCollectionVecInput m_vecInput; // 0x8 - 0x8

}; // size - 0x5D0


class VertexPositionColor_t
{
public:

   Vector m_vPosition; // 0x0 - 0x0

}; // size - 0x10


class fogparams_t
{
public:

   Vector dirPrimary; // 0x8 - 0x8
   Color colorPrimary; // 0x14 - 0x14
   Color colorSecondary; // 0x18 - 0x18
   Color colorPrimaryLerpTo; // 0x1C - 0x1C
   Color colorSecondaryLerpTo; // 0x20 - 0x20
   std::float_t start; // 0x24 - 0x24
   std::float_t end; // 0x28 - 0x28
   std::float_t farz; // 0x2C - 0x2C
   std::float_t maxdensity; // 0x30 - 0x30
   std::float_t exponent; // 0x34 - 0x34
   std::float_t HDRColorScale; // 0x38 - 0x38
   std::float_t skyboxFogFactor; // 0x3C - 0x3C
   std::float_t skyboxFogFactorLerpTo; // 0x40 - 0x40
   std::float_t startLerpTo; // 0x44 - 0x44
   std::float_t endLerpTo; // 0x48 - 0x48
   std::float_t maxdensityLerpTo; // 0x4C - 0x4C
   GameTime_t lerptime; // 0x50 - 0x50
   std::float_t duration; // 0x54 - 0x54
   std::float_t blendtobackground; // 0x58 - 0x58
   std::float_t scattering; // 0x5C - 0x5C
   std::float_t locallightscale; // 0x60 - 0x60
   bool enable; // 0x64 - 0x64
   bool blend; // 0x65 - 0x65
   bool m_bNoReflectionFog; // 0x66 - 0x66
   bool m_bPadding; // 0x67 - 0x67

}; // size - 0x68


class fogparams_t
{
public:

   Vector dirPrimary; // 0x8 - 0x8
   Color colorPrimary; // 0x14 - 0x14
   Color colorSecondary; // 0x18 - 0x18
   Color colorPrimaryLerpTo; // 0x1C - 0x1C
   Color colorSecondaryLerpTo; // 0x20 - 0x20
   std::float_t start; // 0x24 - 0x24
   std::float_t end; // 0x28 - 0x28
   std::float_t farz; // 0x2C - 0x2C
   std::float_t maxdensity; // 0x30 - 0x30
   std::float_t exponent; // 0x34 - 0x34
   std::float_t HDRColorScale; // 0x38 - 0x38
   std::float_t skyboxFogFactor; // 0x3C - 0x3C
   std::float_t skyboxFogFactorLerpTo; // 0x40 - 0x40
   std::float_t startLerpTo; // 0x44 - 0x44
   std::float_t endLerpTo; // 0x48 - 0x48
   std::float_t maxdensityLerpTo; // 0x4C - 0x4C
   GameTime_t lerptime; // 0x50 - 0x50
   std::float_t duration; // 0x54 - 0x54
   std::float_t blendtobackground; // 0x58 - 0x58
   std::float_t scattering; // 0x5C - 0x5C
   std::float_t locallightscale; // 0x60 - 0x60
   bool enable; // 0x64 - 0x64
   bool blend; // 0x65 - 0x65
   bool m_bNoReflectionFog; // 0x66 - 0x66
   bool m_bPadding; // 0x67 - 0x67

}; // size - 0x68


class fogplayerparams_t
{
public:

   CHandle< CFogController > m_hCtrl; // 0x8 - 0x8
   std::float_t m_flTransitionTime; // 0xC - 0xC
   Color m_OldColor; // 0x10 - 0x10
   std::float_t m_flOldStart; // 0x14 - 0x14
   std::float_t m_flOldEnd; // 0x18 - 0x18
   std::float_t m_flOldMaxDensity; // 0x1C - 0x1C
   std::float_t m_flOldHDRColorScale; // 0x20 - 0x20
   std::float_t m_flOldFarZ; // 0x24 - 0x24
   Color m_NewColor; // 0x28 - 0x28
   std::float_t m_flNewStart; // 0x2C - 0x2C
   std::float_t m_flNewEnd; // 0x30 - 0x30
   std::float_t m_flNewMaxDensity; // 0x34 - 0x34
   std::float_t m_flNewHDRColorScale; // 0x38 - 0x38
   std::float_t m_flNewFarZ; // 0x3C - 0x3C

}; // size - 0x40


