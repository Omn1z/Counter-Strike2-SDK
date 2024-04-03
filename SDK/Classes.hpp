#pragma once

#include "SDK.hpp"

class CEntityInstance /* "entity2" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x10
   CEntityIdentity* m_pEntity; // 0x10 - 0x18
   unsigned char pad_18[0x10]; // 0x18 - 0x28
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x30
   bool m_bVisibleinPVS; // 0x30 - 0x31
   unsigned char pad_31[0x7]; // 0x31 - 0x38
}; // size - 0x38


class CBaseEntity /* "server" */ : public CEntityInstance /* "server" */
{
public:
   CBodyComponent* m_CBodyComponent; // 0x38 - 0x40
   CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40 - 0x1F0
   unsigned char pad_1F0[0x40]; // 0x1F0 - 0x230
   CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x230 - 0x248
   int32_t m_iCurrentThinkContext; // 0x248 - 0x24C
   GameTick_t m_nLastThinkTick; // 0x24C - 0x250
   GameTick_t m_nDisableContextThinkStartTick; // 0x250 - 0x254
   unsigned char pad_254[0xC]; // 0x254 - 0x260
   CBitVec< 64 > m_isSteadyState; // 0x260 - 0x268
   float m_lastNetworkChange; // 0x268 - 0x26C
   unsigned char pad_26C[0xC]; // 0x26C - 0x278
   CUtlVector< ResponseContext_t > m_ResponseContexts; // 0x278 - 0x290
   CUtlSymbolLarge m_iszResponseContext; // 0x290 - 0x298
   unsigned char pad_298[0x20]; // 0x298 - 0x2B8
   int32_t m_iHealth; // 0x2B8 - 0x2BC
   int32_t m_iMaxHealth; // 0x2BC - 0x2C0
   uint8_t m_lifeState; // 0x2C0 - 0x2C1
   unsigned char pad_2C1[0x3]; // 0x2C1 - 0x2C4
   float m_flDamageAccumulator; // 0x2C4 - 0x2C8
   bool m_bTakesDamage; // 0x2C8 - 0x2C9
   unsigned char pad_2C9[0x3]; // 0x2C9 - 0x2CC
   TakeDamageFlags_t m_nTakeDamageFlags; // 0x2CC - 0x2D0
   bool m_bIsPlatform; // 0x2D0 - 0x2D1
   unsigned char pad_2D1[0x1]; // 0x2D1 - 0x2D2
   MoveCollide_t m_MoveCollide; // 0x2D2 - 0x2D3
   MoveType_t m_MoveType; // 0x2D3 - 0x2D4
   MoveType_t m_nActualMoveType; // 0x2D4 - 0x2D5
   uint8_t m_nWaterTouch; // 0x2D5 - 0x2D6
   uint8_t m_nSlimeTouch; // 0x2D6 - 0x2D7
   bool m_bRestoreInHierarchy; // 0x2D7 - 0x2D8
   CUtlSymbolLarge m_target; // 0x2D8 - 0x2E0
   CHandle< CBaseFilter > m_hDamageFilter; // 0x2E0 - 0x2E4
   unsigned char pad_2E4[0x4]; // 0x2E4 - 0x2E8
   CUtlSymbolLarge m_iszDamageFilterName; // 0x2E8 - 0x2F0
   float m_flMoveDoneTime; // 0x2F0 - 0x2F4
   CUtlStringToken m_nSubclassID; // 0x2F4 - 0x2F8
   unsigned char pad_2F8[0x8]; // 0x2F8 - 0x300
   float m_flAnimTime; // 0x300 - 0x304
   float m_flSimulationTime; // 0x304 - 0x308
   GameTime_t m_flCreateTime; // 0x308 - 0x30C
   bool m_bClientSideRagdoll; // 0x30C - 0x30D
   uint8_t m_ubInterpolationFrame; // 0x30D - 0x30E
   unsigned char pad_30E[0x2]; // 0x30E - 0x310
   Vector m_vPrevVPhysicsUpdatePos; // 0x310 - 0x31C
   uint8_t m_iTeamNum; // 0x31C - 0x31D
   unsigned char pad_31D[0x3]; // 0x31D - 0x320
   CUtlSymbolLarge m_iGlobalname; // 0x320 - 0x328
   int32_t m_iSentToClients; // 0x328 - 0x32C
   float m_flSpeed; // 0x32C - 0x330
   CUtlString m_sUniqueHammerID; // 0x330 - 0x338
   uint32_t m_spawnflags; // 0x338 - 0x33C
   GameTick_t m_nNextThinkTick; // 0x33C - 0x340
   int32_t m_nSimulationTick; // 0x340 - 0x344
   unsigned char pad_344[0x4]; // 0x344 - 0x348
   CEntityIOOutput m_OnKilled; // 0x348 - 0x370
   uint32_t m_fFlags; // 0x370 - 0x374
   Vector m_vecAbsVelocity; // 0x374 - 0x380
   CNetworkVelocityVector m_vecVelocity; // 0x380 - 0x3A8
   unsigned char pad_3A8[0x8]; // 0x3A8 - 0x3B0
   Vector m_vecBaseVelocity; // 0x3B0 - 0x3BC
   int32_t m_nPushEnumCount; // 0x3BC - 0x3C0
   CCollisionProperty* m_pCollision; // 0x3C0 - 0x3C8
   CHandle< CBaseEntity > m_hEffectEntity; // 0x3C8 - 0x3CC
   CHandle< CBaseEntity > m_hOwnerEntity; // 0x3CC - 0x3D0
   uint32_t m_fEffects; // 0x3D0 - 0x3D4
   CHandle< CBaseEntity > m_hGroundEntity; // 0x3D4 - 0x3D8
   float m_flFriction; // 0x3D8 - 0x3DC
   float m_flElasticity; // 0x3DC - 0x3E0
   float m_flGravityScale; // 0x3E0 - 0x3E4
   float m_flTimeScale; // 0x3E4 - 0x3E8
   float m_flWaterLevel; // 0x3E8 - 0x3EC
   bool m_bAnimatedEveryTick; // 0x3EC - 0x3ED
   bool m_bDisableLowViolence; // 0x3ED - 0x3EE
   uint8_t m_nWaterType; // 0x3EE - 0x3EF
   unsigned char pad_3EF[0x1]; // 0x3EF - 0x3F0
   int32_t m_iEFlags; // 0x3F0 - 0x3F4
   unsigned char pad_3F4[0x4]; // 0x3F4 - 0x3F8
   CEntityIOOutput m_OnUser1; // 0x3F8 - 0x420
   CEntityIOOutput m_OnUser2; // 0x420 - 0x448
   CEntityIOOutput m_OnUser3; // 0x448 - 0x470
   CEntityIOOutput m_OnUser4; // 0x470 - 0x498
   int32_t m_iInitialTeamNum; // 0x498 - 0x49C
   GameTime_t m_flNavIgnoreUntilTime; // 0x49C - 0x4A0
   QAngle m_vecAngVelocity; // 0x4A0 - 0x4AC
   bool m_bNetworkQuantizeOriginAndAngles; // 0x4AC - 0x4AD
   bool m_bLagCompensate; // 0x4AD - 0x4AE
   unsigned char pad_4AE[0x2]; // 0x4AE - 0x4B0
   float m_flOverriddenFriction; // 0x4B0 - 0x4B4
   CHandle< CBaseEntity > m_pBlocker; // 0x4B4 - 0x4B8
   float m_flLocalTime; // 0x4B8 - 0x4BC
   float m_flVPhysicsUpdateLocalTime; // 0x4BC - 0x4C0
}; // size - 0x4C0


class CEntityInstance /* "entity2" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x10
   CEntityIdentity* m_pEntity; // 0x10 - 0x18
   unsigned char pad_18[0x10]; // 0x18 - 0x28
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x30
   bool m_bVisibleinPVS; // 0x30 - 0x31
   unsigned char pad_31[0x7]; // 0x31 - 0x38
}; // size - 0x38


class C_BaseEntity /* "client" */ : public CEntityInstance /* "client" */
{
public:
   CBodyComponent* m_CBodyComponent; // 0x38 - 0x40
   CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40 - 0x1F0
   unsigned char pad_1F0[0x120]; // 0x1F0 - 0x310
   GameTick_t m_nLastThinkTick; // 0x310 - 0x314
   unsigned char pad_314[0x4]; // 0x314 - 0x318
   CGameSceneNode* m_pGameSceneNode; // 0x318 - 0x320
   CRenderComponent* m_pRenderComponent; // 0x320 - 0x328
   CCollisionProperty* m_pCollision; // 0x328 - 0x330
   int32_t m_iMaxHealth; // 0x330 - 0x334
   int32_t m_iHealth; // 0x334 - 0x338
   uint8_t m_lifeState; // 0x338 - 0x339
   bool m_bTakesDamage; // 0x339 - 0x33A
   unsigned char pad_33A[0x2]; // 0x33A - 0x33C
   TakeDamageFlags_t m_nTakeDamageFlags; // 0x33C - 0x340
   bool m_bIsPlatform; // 0x340 - 0x341
   uint8_t m_ubInterpolationFrame; // 0x341 - 0x342
   unsigned char pad_342[0x2]; // 0x342 - 0x344
   CHandle< C_BaseEntity > m_hSceneObjectController; // 0x344 - 0x348
   int32_t m_nNoInterpolationTick; // 0x348 - 0x34C
   int32_t m_nVisibilityNoInterpolationTick; // 0x34C - 0x350
   float m_flProxyRandomValue; // 0x350 - 0x354
   int32_t m_iEFlags; // 0x354 - 0x358
   uint8_t m_nWaterType; // 0x358 - 0x359
   bool m_bInterpolateEvenWithNoModel; // 0x359 - 0x35A
   bool m_bPredictionEligible; // 0x35A - 0x35B
   bool m_bApplyLayerMatchIDToModel; // 0x35B - 0x35C
   CUtlStringToken m_tokLayerMatchID; // 0x35C - 0x360
   CUtlStringToken m_nSubclassID; // 0x360 - 0x364
   unsigned char pad_364[0xC]; // 0x364 - 0x370
   int32_t m_nSimulationTick; // 0x370 - 0x374
   int32_t m_iCurrentThinkContext; // 0x374 - 0x378
   CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x378 - 0x390
   GameTick_t m_nDisableContextThinkStartTick; // 0x390 - 0x394
   float m_flAnimTime; // 0x394 - 0x398
   float m_flSimulationTime; // 0x398 - 0x39C
   uint8_t m_nSceneObjectOverrideFlags; // 0x39C - 0x39D
   bool m_bHasSuccessfullyInterpolated; // 0x39D - 0x39E
   bool m_bHasAddedVarsToInterpolation; // 0x39E - 0x39F
   bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x39F - 0x3A0
   int32 m_nInterpolationLatchDirtyFlags[2]; // 0x3A0 - 0x3A8
   uint16 m_ListEntry[11]; // 0x3A8 - 0x3BE
   unsigned char pad_3BE[0x2]; // 0x3BE - 0x3C0
   GameTime_t m_flCreateTime; // 0x3C0 - 0x3C4
   float m_flSpeed; // 0x3C4 - 0x3C8
   uint16_t m_EntClientFlags; // 0x3C8 - 0x3CA
   bool m_bClientSideRagdoll; // 0x3CA - 0x3CB
   uint8_t m_iTeamNum; // 0x3CB - 0x3CC
   uint32_t m_spawnflags; // 0x3CC - 0x3D0
   GameTick_t m_nNextThinkTick; // 0x3D0 - 0x3D4
   uint32_t m_fFlags; // 0x3D4 - 0x3D8
   Vector m_vecAbsVelocity; // 0x3D8 - 0x3E4
   unsigned char pad_3E4[0x4]; // 0x3E4 - 0x3E8
   CNetworkVelocityVector m_vecVelocity; // 0x3E8 - 0x410
   unsigned char pad_410[0x8]; // 0x410 - 0x418
   Vector m_vecBaseVelocity; // 0x418 - 0x424
   CHandle< C_BaseEntity > m_hEffectEntity; // 0x424 - 0x428
   CHandle< C_BaseEntity > m_hOwnerEntity; // 0x428 - 0x42C
   MoveCollide_t m_MoveCollide; // 0x42C - 0x42D
   MoveType_t m_MoveType; // 0x42D - 0x42E
   MoveType_t m_nActualMoveType; // 0x42E - 0x42F
   unsigned char pad_42F[0x1]; // 0x42F - 0x430
   float m_flWaterLevel; // 0x430 - 0x434
   uint32_t m_fEffects; // 0x434 - 0x438
   CHandle< C_BaseEntity > m_hGroundEntity; // 0x438 - 0x43C
   float m_flFriction; // 0x43C - 0x440
   float m_flElasticity; // 0x440 - 0x444
   float m_flGravityScale; // 0x444 - 0x448
   float m_flTimeScale; // 0x448 - 0x44C
   bool m_bAnimatedEveryTick; // 0x44C - 0x44D
   unsigned char pad_44D[0x3]; // 0x44D - 0x450
   GameTime_t m_flNavIgnoreUntilTime; // 0x450 - 0x454
   uint16_t m_hThink; // 0x454 - 0x456
   unsigned char pad_456[0xA]; // 0x456 - 0x460
   uint8_t m_fBBoxVisFlags; // 0x460 - 0x461
   bool m_bPredictable; // 0x461 - 0x462
   bool m_bRenderWithViewModels; // 0x462 - 0x463
   unsigned char pad_463[0x1]; // 0x463 - 0x464
   CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x464 - 0x468
   int32_t m_nFirstPredictableCommand; // 0x468 - 0x46C
   int32_t m_nLastPredictableCommand; // 0x46C - 0x470
   CHandle< C_BaseEntity > m_hOldMoveParent; // 0x470 - 0x474
   unsigned char pad_474[0x4]; // 0x474 - 0x478
   CParticleProperty m_Particles; // 0x478 - 0x4A0
   CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x4A0 - 0x4B8
   CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x4B8 - 0x4D0
   unsigned char pad_4D0[0x18]; // 0x4D0 - 0x4E8
   int32_t m_nNextScriptVarRecordID; // 0x4E8 - 0x4EC
   unsigned char pad_4EC[0xC]; // 0x4EC - 0x4F8
   QAngle m_vecAngVelocity; // 0x4F8 - 0x504
   int32_t m_DataChangeEventRef; // 0x504 - 0x508
   CUtlVector< CEntityHandle > m_dependencies; // 0x508 - 0x520
   int32_t m_nCreationTick; // 0x520 - 0x524
   unsigned char pad_524[0x15]; // 0x524 - 0x539
   bool m_bAnimTimeChanged; // 0x539 - 0x53A
   bool m_bSimulationTimeChanged; // 0x53A - 0x53B
   unsigned char pad_53B[0xD]; // 0x53B - 0x548
   CUtlString m_sUniqueHammerID; // 0x548 - 0x550
}; // size - 0x550


class CBaseModelEntity /* "server" */ : public CBaseEntity /* "server" */
{
public:
   CRenderComponent* m_CRenderComponent; // 0x4C0 - 0x4C8
   CHitboxComponent m_CHitboxComponent; // 0x4C8 - 0x4F0
   GameTime_t m_flDissolveStartTime; // 0x4F0 - 0x4F4
   unsigned char pad_4F4[0x4]; // 0x4F4 - 0x4F8
   CEntityIOOutput m_OnIgnite; // 0x4F8 - 0x520
   RenderMode_t m_nRenderMode; // 0x520 - 0x521
   RenderFx_t m_nRenderFX; // 0x521 - 0x522
   bool m_bAllowFadeInView; // 0x522 - 0x523
   Color m_clrRender; // 0x523 - 0x527
   unsigned char pad_527[0x1]; // 0x527 - 0x528
   CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x528 - 0x578
   bool m_bRenderToCubemaps; // 0x578 - 0x579
   unsigned char pad_579[0x7]; // 0x579 - 0x580
   CCollisionProperty m_Collision; // 0x580 - 0x630
   CGlowProperty m_Glow; // 0x630 - 0x688
   float m_flGlowBackfaceMult; // 0x688 - 0x68C
   float m_fadeMinDist; // 0x68C - 0x690
   float m_fadeMaxDist; // 0x690 - 0x694
   float m_flFadeScale; // 0x694 - 0x698
   float m_flShadowStrength; // 0x698 - 0x69C
   uint8_t m_nObjectCulling; // 0x69C - 0x69D
   unsigned char pad_69D[0x3]; // 0x69D - 0x6A0
   int32_t m_nAddDecal; // 0x6A0 - 0x6A4
   Vector m_vDecalPosition; // 0x6A4 - 0x6B0
   Vector m_vDecalForwardAxis; // 0x6B0 - 0x6BC
   float m_flDecalHealBloodRate; // 0x6BC - 0x6C0
   float m_flDecalHealHeightRate; // 0x6C0 - 0x6C4
   unsigned char pad_6C4[0x4]; // 0x6C4 - 0x6C8
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x6C8 - 0x6E0
   CNetworkViewOffsetVector m_vecViewOffset; // 0x6E0 - 0x708
   unsigned char pad_708[0x8]; // 0x708 - 0x710
}; // size - 0x710


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
   unsigned char pad_1A0[0x20]; // 0x1A0 - 0x1C0
}; // size - 0x1C0


class C_BaseModelEntity /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_550[0x4D0]; // 0x550 - 0xA20
   CRenderComponent* m_CRenderComponent; // 0xA20 - 0xA28
   CHitboxComponent m_CHitboxComponent; // 0xA28 - 0xA50
   unsigned char pad_A50[0x20]; // 0xA50 - 0xA70
   bool m_bInitModelEffects; // 0xA70 - 0xA71
   bool m_bIsStaticProp; // 0xA71 - 0xA72
   unsigned char pad_A72[0x2]; // 0xA72 - 0xA74
   int32_t m_nLastAddDecal; // 0xA74 - 0xA78
   int32_t m_nDecalsAdded; // 0xA78 - 0xA7C
   int32_t m_iOldHealth; // 0xA7C - 0xA80
   RenderMode_t m_nRenderMode; // 0xA80 - 0xA81
   RenderFx_t m_nRenderFX; // 0xA81 - 0xA82
   bool m_bAllowFadeInView; // 0xA82 - 0xA83
   Color m_clrRender; // 0xA83 - 0xA87
   unsigned char pad_A87[0x1]; // 0xA87 - 0xA88
   C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0xA88 - 0xAD8
   unsigned char pad_AD8[0x18]; // 0xAD8 - 0xAF0
   bool m_bRenderToCubemaps; // 0xAF0 - 0xAF1
   unsigned char pad_AF1[0x7]; // 0xAF1 - 0xAF8
   CCollisionProperty m_Collision; // 0xAF8 - 0xBA8
   CGlowProperty m_Glow; // 0xBA8 - 0xC00
   float m_flGlowBackfaceMult; // 0xC00 - 0xC04
   float m_fadeMinDist; // 0xC04 - 0xC08
   float m_fadeMaxDist; // 0xC08 - 0xC0C
   float m_flFadeScale; // 0xC0C - 0xC10
   float m_flShadowStrength; // 0xC10 - 0xC14
   uint8_t m_nObjectCulling; // 0xC14 - 0xC15
   unsigned char pad_C15[0x3]; // 0xC15 - 0xC18
   int32_t m_nAddDecal; // 0xC18 - 0xC1C
   Vector m_vDecalPosition; // 0xC1C - 0xC28
   Vector m_vDecalForwardAxis; // 0xC28 - 0xC34
   float m_flDecalHealBloodRate; // 0xC34 - 0xC38
   float m_flDecalHealHeightRate; // 0xC38 - 0xC3C
   unsigned char pad_C3C[0x4]; // 0xC3C - 0xC40
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0xC40 - 0xC58
   CNetworkViewOffsetVector m_vecViewOffset; // 0xC58 - 0xC80
   unsigned char pad_C80[0x8]; // 0xC80 - 0xC88
   CClientAlphaProperty* m_pClientAlphaProperty; // 0xC88 - 0xC90
   Color m_ClientOverrideTint; // 0xC90 - 0xC94
   bool m_bUseClientOverrideTint; // 0xC94 - 0xC95
   unsigned char pad_C95[0x3B]; // 0xC95 - 0xCD0
}; // size - 0xCD0


class CBaseAnimGraph /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   unsigned char pad_710[0x78]; // 0x710 - 0x788
   bool m_bInitiallyPopulateInterpHistory; // 0x788 - 0x789
   unsigned char pad_789[0x7]; // 0x789 - 0x790
   IChoreoServices* m_pChoreoServices; // 0x790 - 0x798
   bool m_bAnimGraphUpdateEnabled; // 0x798 - 0x799
   unsigned char pad_799[0x3]; // 0x799 - 0x79C
   float m_flMaxSlopeDistance; // 0x79C - 0x7A0
   Vector m_vLastSlopeCheckPos; // 0x7A0 - 0x7AC
   bool m_bAnimationUpdateScheduled; // 0x7AC - 0x7AD
   unsigned char pad_7AD[0x3]; // 0x7AD - 0x7B0
   Vector m_vecForce; // 0x7B0 - 0x7BC
   int32_t m_nForceBone; // 0x7BC - 0x7C0
   unsigned char pad_7C0[0x10]; // 0x7C0 - 0x7D0
   PhysicsRagdollPose_t* m_pRagdollPose; // 0x7D0 - 0x7D8
   bool m_bClientRagdoll; // 0x7D8 - 0x7D9
   unsigned char pad_7D9[0x10F]; // 0x7D9 - 0x8E8
}; // size - 0x8E8


class CBaseAnimGraph /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_CD0[0x78]; // 0xCD0 - 0xD48
   bool m_bInitiallyPopulateInterpHistory; // 0xD48 - 0xD49
   unsigned char pad_D49[0x1]; // 0xD49 - 0xD4A
   bool m_bSuppressAnimEventSounds; // 0xD4A - 0xD4B
   unsigned char pad_D4B[0xD]; // 0xD4B - 0xD58
   bool m_bAnimGraphUpdateEnabled; // 0xD58 - 0xD59
   unsigned char pad_D59[0x3]; // 0xD59 - 0xD5C
   float m_flMaxSlopeDistance; // 0xD5C - 0xD60
   Vector m_vLastSlopeCheckPos; // 0xD60 - 0xD6C
   bool m_bAnimationUpdateScheduled; // 0xD6C - 0xD6D
   unsigned char pad_D6D[0x3]; // 0xD6D - 0xD70
   Vector m_vecForce; // 0xD70 - 0xD7C
   int32_t m_nForceBone; // 0xD7C - 0xD80
   CBaseAnimGraph* m_pClientsideRagdoll; // 0xD80 - 0xD88
   bool m_bBuiltRagdoll; // 0xD88 - 0xD89
   unsigned char pad_D89[0x17]; // 0xD89 - 0xDA0
   PhysicsRagdollPose_t* m_pRagdollPose; // 0xDA0 - 0xDA8
   bool m_bClientRagdoll; // 0xDA8 - 0xDA9
   unsigned char pad_DA9[0xF]; // 0xDA9 - 0xDB8
   bool m_bHasAnimatedMaterialAttributes; // 0xDB8 - 0xDB9
   unsigned char pad_DB9[0x11F]; // 0xDB9 - 0xED8
}; // size - 0xED8


class C_BaseFlex /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   class Emphasized_Phoneme /* "client" */
   {
   public:
      CUtlString m_sClassName; // 0x0 - 0x8
      unsigned char pad_8[0x10]; // 0x8 - 0x18
      float m_flAmount; // 0x18 - 0x1C
      bool m_bRequired; // 0x1C - 0x1D
      bool m_bBasechecked; // 0x1D - 0x1E
      bool m_bValid; // 0x1E - 0x1F
      unsigned char pad_1F[0x1]; // 0x1F - 0x20
   }; // size - 0x20

   unsigned char pad_ED8[0x10]; // 0xED8 - 0xEE8
   C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xEE8 - 0xF00
   Vector m_vLookTargetPosition; // 0xF00 - 0xF0C
   unsigned char pad_F0C[0xC]; // 0xF0C - 0xF18
   bool m_blinktoggle; // 0xF18 - 0xF19
   unsigned char pad_F19[0x5F]; // 0xF19 - 0xF78
   int32_t m_nLastFlexUpdateFrameCount; // 0xF78 - 0xF7C
   Vector m_CachedViewTarget; // 0xF7C - 0xF88
   uint32_t m_nNextSceneEventId; // 0xF88 - 0xF8C
   int32_t m_iBlink; // 0xF8C - 0xF90
   float m_blinktime; // 0xF90 - 0xF94
   bool m_prevblinktoggle; // 0xF94 - 0xF95
   unsigned char pad_F95[0x3]; // 0xF95 - 0xF98
   int32_t m_iJawOpen; // 0xF98 - 0xF9C
   float m_flJawOpenAmount; // 0xF9C - 0xFA0
   float m_flBlinkAmount; // 0xFA0 - 0xFA4
   AttachmentHandle_t m_iMouthAttachment; // 0xFA4 - 0xFA5
   AttachmentHandle_t m_iEyeAttachment; // 0xFA5 - 0xFA6
   bool m_bResetFlexWeightsOnModelChange; // 0xFA6 - 0xFA7
   unsigned char pad_FA7[0x19]; // 0xFA7 - 0xFC0
   int32_t m_nEyeOcclusionRendererBone; // 0xFC0 - 0xFC4
   matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xFC4 - 0xFF4
   Vector m_vEyeOcclusionRendererHalfExtent; // 0xFF4 - 0x1000
   unsigned char pad_1000[0x10]; // 0x1000 - 0x1010
   C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0x1010 - 0x1070
}; // size - 0x1070


class CParticleFunctionOperator /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   unsigned char pad_0[0x1C0]; // 0x0 - 0x1C0
}; // size - 0x1C0


class CBaseFlex /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   CNetworkUtlVectorBase< float32 > m_flexWeight; // 0x8E8 - 0x900
   Vector m_vLookTargetPosition; // 0x900 - 0x90C
   bool m_blinktoggle; // 0x90C - 0x90D
   unsigned char pad_90D[0x53]; // 0x90D - 0x960
   GameTime_t m_flAllowResponsesEndTime; // 0x960 - 0x964
   GameTime_t m_flLastFlexAnimationTime; // 0x964 - 0x968
   uint32_t m_nNextSceneEventId; // 0x968 - 0x96C
   bool m_bUpdateLayerPriorities; // 0x96C - 0x96D
   unsigned char pad_96D[0xB]; // 0x96D - 0x978
}; // size - 0x978


class CEconEntity /* "server" */ : public CBaseFlex /* "server" */
{
public:
   unsigned char pad_978[0x10]; // 0x978 - 0x988
   CAttributeContainer m_AttributeManager; // 0x988 - 0xC50
   uint32_t m_OriginalOwnerXuidLow; // 0xC50 - 0xC54
   uint32_t m_OriginalOwnerXuidHigh; // 0xC54 - 0xC58
   int32_t m_nFallbackPaintKit; // 0xC58 - 0xC5C
   int32_t m_nFallbackSeed; // 0xC5C - 0xC60
   float m_flFallbackWear; // 0xC60 - 0xC64
   int32_t m_nFallbackStatTrak; // 0xC64 - 0xC68
   CHandle< CBaseEntity > m_hOldProvidee; // 0xC68 - 0xC6C
   int32_t m_iOldOwnerClass; // 0xC6C - 0xC70
}; // size - 0xC70


class C_EconEntity /* "client" */ : public C_BaseFlex /* "client" */
{
public:
   class AttachedModelData_t /* "client" */
   {
   public:
      int32_t m_iModelDisplayFlags; // 0x0 - 0x4
   }; // size - 0x4

   unsigned char pad_1070[0x10]; // 0x1070 - 0x1080
   float m_flFlexDelayTime; // 0x1080 - 0x1084
   unsigned char pad_1084[0x4]; // 0x1084 - 0x1088
   float32* m_flFlexDelayedWeight; // 0x1088 - 0x1090
   bool m_bAttributesInitialized; // 0x1090 - 0x1091
   unsigned char pad_1091[0x7]; // 0x1091 - 0x1098
   C_AttributeContainer m_AttributeManager; // 0x1098 - 0x1540
   uint32_t m_OriginalOwnerXuidLow; // 0x1540 - 0x1544
   uint32_t m_OriginalOwnerXuidHigh; // 0x1544 - 0x1548
   int32_t m_nFallbackPaintKit; // 0x1548 - 0x154C
   int32_t m_nFallbackSeed; // 0x154C - 0x1550
   float m_flFallbackWear; // 0x1550 - 0x1554
   int32_t m_nFallbackStatTrak; // 0x1554 - 0x1558
   bool m_bClientside; // 0x1558 - 0x1559
   bool m_bParticleSystemsCreated; // 0x1559 - 0x155A
   unsigned char pad_155A[0x6]; // 0x155A - 0x1560
   CUtlVector< int32 > m_vecAttachedParticles; // 0x1560 - 0x1578
   CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0x1578 - 0x157C
   int32_t m_iOldTeam; // 0x157C - 0x1580
   bool m_bAttachmentDirty; // 0x1580 - 0x1581
   unsigned char pad_1581[0x3]; // 0x1581 - 0x1584
   int32_t m_nUnloadedModelIndex; // 0x1584 - 0x1588
   int32_t m_iNumOwnerValidationRetries; // 0x1588 - 0x158C
   unsigned char pad_158C[0xC]; // 0x158C - 0x1598
   CHandle< C_BaseEntity > m_hOldProvidee; // 0x1598 - 0x159C
   unsigned char pad_159C[0x4]; // 0x159C - 0x15A0
   CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0x15A0 - 0x15B8
}; // size - 0x15B8


class CBasePlayerWeapon /* "server" */ : public CEconEntity /* "server" */
{
public:
   GameTick_t m_nNextPrimaryAttackTick; // 0xC70 - 0xC74
   float m_flNextPrimaryAttackTickRatio; // 0xC74 - 0xC78
   GameTick_t m_nNextSecondaryAttackTick; // 0xC78 - 0xC7C
   float m_flNextSecondaryAttackTickRatio; // 0xC7C - 0xC80
   int32_t m_iClip1; // 0xC80 - 0xC84
   int32_t m_iClip2; // 0xC84 - 0xC88
   int32 m_pReserveAmmo[2]; // 0xC88 - 0xC90
   CEntityIOOutput m_OnPlayerUse; // 0xC90 - 0xCB8
}; // size - 0xCB8


class CParticleFunctionInitializer /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   int32_t m_nAssociatedEmitterIndex; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class C_BasePlayerWeapon /* "client" */ : public C_EconEntity /* "client" */
{
public:
   GameTick_t m_nNextPrimaryAttackTick; // 0x15B8 - 0x15BC
   float m_flNextPrimaryAttackTickRatio; // 0x15BC - 0x15C0
   GameTick_t m_nNextSecondaryAttackTick; // 0x15C0 - 0x15C4
   float m_flNextSecondaryAttackTickRatio; // 0x15C4 - 0x15C8
   int32_t m_iClip1; // 0x15C8 - 0x15CC
   int32_t m_iClip2; // 0x15CC - 0x15D0
   int32 m_pReserveAmmo[2]; // 0x15D0 - 0x15D8
   unsigned char pad_15D8[0x18]; // 0x15D8 - 0x15F0
}; // size - 0x15F0


class CBaseToggle /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   TOGGLE_STATE m_toggle_state; // 0x710 - 0x714
   float m_flMoveDistance; // 0x714 - 0x718
   float m_flWait; // 0x718 - 0x71C
   float m_flLip; // 0x71C - 0x720
   bool m_bAlwaysFireBlockedOutputs; // 0x720 - 0x721
   unsigned char pad_721[0x3]; // 0x721 - 0x724
   Vector m_vecPosition1; // 0x724 - 0x730
   Vector m_vecPosition2; // 0x730 - 0x73C
   QAngle m_vecMoveAng; // 0x73C - 0x748
   QAngle m_vecAngle1; // 0x748 - 0x754
   QAngle m_vecAngle2; // 0x754 - 0x760
   float m_flHeight; // 0x760 - 0x764
   CHandle< CBaseEntity > m_hActivator; // 0x764 - 0x768
   Vector m_vecFinalDest; // 0x768 - 0x774
   QAngle m_vecFinalAngle; // 0x774 - 0x780
   int32_t m_movementType; // 0x780 - 0x784
   unsigned char pad_784[0x4]; // 0x784 - 0x788
   CUtlSymbolLarge m_sMaster; // 0x788 - 0x790
}; // size - 0x790


class CCSWeaponBase /* "server" */ : public CBasePlayerWeapon /* "server" */
{
public:
   unsigned char pad_CB8[0x28]; // 0xCB8 - 0xCE0
   bool m_bRemoveable; // 0xCE0 - 0xCE1
   unsigned char pad_CE1[0x7]; // 0xCE1 - 0xCE8
   float m_flFireSequenceStartTime; // 0xCE8 - 0xCEC
   int32_t m_nFireSequenceStartTimeChange; // 0xCEC - 0xCF0
   int32_t m_nFireSequenceStartTimeAck; // 0xCF0 - 0xCF4
   PlayerAnimEvent_t m_ePlayerFireEvent; // 0xCF4 - 0xCF8
   WeaponAttackType_t m_ePlayerFireEventAttackType; // 0xCF8 - 0xCFC
   HSequence m_seqIdle; // 0xCFC - 0xD00
   HSequence m_seqFirePrimary; // 0xD00 - 0xD04
   HSequence m_seqFireSecondary; // 0xD04 - 0xD08
   CUtlVector< HSequence > m_thirdPersonFireSequences; // 0xD08 - 0xD20
   HSequence m_hCurrentThirdPersonSequence; // 0xD20 - 0xD24
   int32_t m_nSilencerBoneIndex; // 0xD24 - 0xD28
   HSequence m_thirdPersonSequences[7]; // 0xD28 - 0xD44
   unsigned char pad_D44[0xC]; // 0xD44 - 0xD50
   bool m_bPlayerAmmoStockOnPickup; // 0xD50 - 0xD51
   bool m_bRequireUseToTouch; // 0xD51 - 0xD52
   unsigned char pad_D52[0x2]; // 0xD52 - 0xD54
   CSWeaponState_t m_iState; // 0xD54 - 0xD58
   GameTime_t m_flLastTimeInAir; // 0xD58 - 0xD5C
   GameTime_t m_flLastDeployTime; // 0xD5C - 0xD60
   int32_t m_nLastEmptySoundCmdNum; // 0xD60 - 0xD64
   uint32_t m_nViewModelIndex; // 0xD64 - 0xD68
   bool m_bReloadsWithClips; // 0xD68 - 0xD69
   unsigned char pad_D69[0x1F]; // 0xD69 - 0xD88
   GameTime_t m_flTimeWeaponIdle; // 0xD88 - 0xD8C
   bool m_bFireOnEmpty; // 0xD8C - 0xD8D
   unsigned char pad_D8D[0x3]; // 0xD8D - 0xD90
   CEntityIOOutput m_OnPlayerPickup; // 0xD90 - 0xDB8
   CSWeaponMode m_weaponMode; // 0xDB8 - 0xDBC
   float m_flTurningInaccuracyDelta; // 0xDBC - 0xDC0
   Vector m_vecTurningInaccuracyEyeDirLast; // 0xDC0 - 0xDCC
   float m_flTurningInaccuracy; // 0xDCC - 0xDD0
   float m_fAccuracyPenalty; // 0xDD0 - 0xDD4
   GameTime_t m_flLastAccuracyUpdateTime; // 0xDD4 - 0xDD8
   float m_fAccuracySmoothedForZoom; // 0xDD8 - 0xDDC
   GameTime_t m_fScopeZoomEndTime; // 0xDDC - 0xDE0
   int32_t m_iRecoilIndex; // 0xDE0 - 0xDE4
   float m_flRecoilIndex; // 0xDE4 - 0xDE8
   bool m_bBurstMode; // 0xDE8 - 0xDE9
   unsigned char pad_DE9[0x3]; // 0xDE9 - 0xDEC
   GameTick_t m_nPostponeFireReadyTicks; // 0xDEC - 0xDF0
   float m_flPostponeFireReadyFrac; // 0xDF0 - 0xDF4
   bool m_bInReload; // 0xDF4 - 0xDF5
   bool m_bReloadVisuallyComplete; // 0xDF5 - 0xDF6
   unsigned char pad_DF6[0x2]; // 0xDF6 - 0xDF8
   GameTime_t m_flDroppedAtTime; // 0xDF8 - 0xDFC
   bool m_bIsHauledBack; // 0xDFC - 0xDFD
   bool m_bSilencerOn; // 0xDFD - 0xDFE
   unsigned char pad_DFE[0x2]; // 0xDFE - 0xE00
   GameTime_t m_flTimeSilencerSwitchComplete; // 0xE00 - 0xE04
   int32_t m_iOriginalTeamNumber; // 0xE04 - 0xE08
   float m_flNextAttackRenderTimeOffset; // 0xE08 - 0xE0C
   unsigned char pad_E0C[0x14]; // 0xE0C - 0xE20
   bool m_bCanBePickedUp; // 0xE20 - 0xE21
   bool m_bUseCanOverrideNextOwnerTouchTime; // 0xE21 - 0xE22
   unsigned char pad_E22[0x2]; // 0xE22 - 0xE24
   GameTime_t m_nextOwnerTouchTime; // 0xE24 - 0xE28
   GameTime_t m_nextPrevOwnerTouchTime; // 0xE28 - 0xE2C
   CHandle< CCSPlayerPawn > m_hPrevOwner; // 0xE2C - 0xE30
   GameTick_t m_nDropTick; // 0xE30 - 0xE34
   unsigned char pad_E34[0x20]; // 0xE34 - 0xE54
   bool m_donated; // 0xE54 - 0xE55
   unsigned char pad_E55[0x3]; // 0xE55 - 0xE58
   GameTime_t m_fLastShotTime; // 0xE58 - 0xE5C
   bool m_bWasOwnedByCT; // 0xE5C - 0xE5D
   bool m_bWasOwnedByTerrorist; // 0xE5D - 0xE5E
   bool m_bFiredOutOfAmmoEvent; // 0xE5E - 0xE5F
   unsigned char pad_E5F[0x1]; // 0xE5F - 0xE60
   int32_t m_numRemoveUnownedWeaponThink; // 0xE60 - 0xE64
   unsigned char pad_E64[0x4]; // 0xE64 - 0xE68
   CIronSightController m_IronSightController; // 0xE68 - 0xE80
   int32_t m_iIronSightMode; // 0xE80 - 0xE84
   GameTime_t m_flLastLOSTraceFailureTime; // 0xE84 - 0xE88
   int32_t m_iNumEmptyAttacks; // 0xE88 - 0xE8C
   float m_flWatTickOffset; // 0xE8C - 0xE90
}; // size - 0xE90


class C_CSWeaponBase /* "client" */ : public C_BasePlayerWeapon /* "client" */
{
public:
   unsigned char pad_15F0[0x3C]; // 0x15F0 - 0x162C
   float m_flFireSequenceStartTime; // 0x162C - 0x1630
   int32_t m_nFireSequenceStartTimeChange; // 0x1630 - 0x1634
   int32_t m_nFireSequenceStartTimeAck; // 0x1634 - 0x1638
   PlayerAnimEvent_t m_ePlayerFireEvent; // 0x1638 - 0x163C
   WeaponAttackType_t m_ePlayerFireEventAttackType; // 0x163C - 0x1640
   HSequence m_seqIdle; // 0x1640 - 0x1644
   HSequence m_seqFirePrimary; // 0x1644 - 0x1648
   HSequence m_seqFireSecondary; // 0x1648 - 0x164C
   unsigned char pad_164C[0x4]; // 0x164C - 0x1650
   CUtlVector< HSequence > m_thirdPersonFireSequences; // 0x1650 - 0x1668
   HSequence m_hCurrentThirdPersonSequence; // 0x1668 - 0x166C
   int32_t m_nSilencerBoneIndex; // 0x166C - 0x1670
   HSequence m_thirdPersonSequences[7]; // 0x1670 - 0x168C
   unsigned char pad_168C[0x1C]; // 0x168C - 0x16A8
   CSWeaponState_t m_ClientPreviousWeaponState; // 0x16A8 - 0x16AC
   CSWeaponState_t m_iState; // 0x16AC - 0x16B0
   float m_flCrosshairDistance; // 0x16B0 - 0x16B4
   int32_t m_iAmmoLastCheck; // 0x16B4 - 0x16B8
   int32_t m_iAlpha; // 0x16B8 - 0x16BC
   int32_t m_iScopeTextureID; // 0x16BC - 0x16C0
   int32_t m_iCrosshairTextureID; // 0x16C0 - 0x16C4
   float m_flGunAccuracyPositionDeprecated; // 0x16C4 - 0x16C8
   int32_t m_nLastEmptySoundCmdNum; // 0x16C8 - 0x16CC
   uint32_t m_nViewModelIndex; // 0x16CC - 0x16D0
   bool m_bReloadsWithClips; // 0x16D0 - 0x16D1
   unsigned char pad_16D1[0x3]; // 0x16D1 - 0x16D4
   GameTime_t m_flTimeWeaponIdle; // 0x16D4 - 0x16D8
   bool m_bFireOnEmpty; // 0x16D8 - 0x16D9
   unsigned char pad_16D9[0x7]; // 0x16D9 - 0x16E0
   CEntityIOOutput m_OnPlayerPickup; // 0x16E0 - 0x1708
   CSWeaponMode m_weaponMode; // 0x1708 - 0x170C
   float m_flTurningInaccuracyDelta; // 0x170C - 0x1710
   Vector m_vecTurningInaccuracyEyeDirLast; // 0x1710 - 0x171C
   float m_flTurningInaccuracy; // 0x171C - 0x1720
   float m_fAccuracyPenalty; // 0x1720 - 0x1724
   GameTime_t m_flLastAccuracyUpdateTime; // 0x1724 - 0x1728
   float m_fAccuracySmoothedForZoom; // 0x1728 - 0x172C
   GameTime_t m_fScopeZoomEndTime; // 0x172C - 0x1730
   int32_t m_iRecoilIndex; // 0x1730 - 0x1734
   float m_flRecoilIndex; // 0x1734 - 0x1738
   bool m_bBurstMode; // 0x1738 - 0x1739
   unsigned char pad_1739[0x3]; // 0x1739 - 0x173C
   GameTick_t m_nPostponeFireReadyTicks; // 0x173C - 0x1740
   float m_flPostponeFireReadyFrac; // 0x1740 - 0x1744
   bool m_bInReload; // 0x1744 - 0x1745
   bool m_bReloadVisuallyComplete; // 0x1745 - 0x1746
   unsigned char pad_1746[0x2]; // 0x1746 - 0x1748
   GameTime_t m_flDroppedAtTime; // 0x1748 - 0x174C
   bool m_bIsHauledBack; // 0x174C - 0x174D
   bool m_bSilencerOn; // 0x174D - 0x174E
   unsigned char pad_174E[0x2]; // 0x174E - 0x1750
   GameTime_t m_flTimeSilencerSwitchComplete; // 0x1750 - 0x1754
   int32_t m_iOriginalTeamNumber; // 0x1754 - 0x1758
   float m_flNextAttackRenderTimeOffset; // 0x1758 - 0x175C
   unsigned char pad_175C[0x84]; // 0x175C - 0x17E0
   bool m_bVisualsDataSet; // 0x17E0 - 0x17E1
   bool m_bOldFirstPersonSpectatedState; // 0x17E1 - 0x17E2
   unsigned char pad_17E2[0x2]; // 0x17E2 - 0x17E4
   CHandle< C_BaseEntity > m_hOurPing; // 0x17E4 - 0x17E8
   CEntityIndex m_nOurPingIndex; // 0x17E8 - 0x17EC
   Vector m_vecOurPingPos; // 0x17EC - 0x17F8
   bool m_bGlowForPing; // 0x17F8 - 0x17F9
   bool m_bUIWeapon; // 0x17F9 - 0x17FA
   unsigned char pad_17FA[0xE]; // 0x17FA - 0x1808
   CHandle< C_CSPlayerPawn > m_hPrevOwner; // 0x1808 - 0x180C
   GameTick_t m_nDropTick; // 0x180C - 0x1810
   unsigned char pad_1810[0x1C]; // 0x1810 - 0x182C
   bool m_donated; // 0x182C - 0x182D
   unsigned char pad_182D[0x3]; // 0x182D - 0x1830
   GameTime_t m_fLastShotTime; // 0x1830 - 0x1834
   bool m_bWasOwnedByCT; // 0x1834 - 0x1835
   bool m_bWasOwnedByTerrorist; // 0x1835 - 0x1836
   unsigned char pad_1836[0x2]; // 0x1836 - 0x1838
   float m_gunHeat; // 0x1838 - 0x183C
   uint32_t m_smokeAttachments; // 0x183C - 0x1840
   GameTime_t m_lastSmokeTime; // 0x1840 - 0x1844
   float m_flNextClientFireBulletTime; // 0x1844 - 0x1848
   float m_flNextClientFireBulletTime_Repredict; // 0x1848 - 0x184C
   unsigned char pad_184C[0xD4]; // 0x184C - 0x1920
   C_IronSightController m_IronSightController; // 0x1920 - 0x19D0
   int32_t m_iIronSightMode; // 0x19D0 - 0x19D4
   unsigned char pad_19D4[0xC]; // 0x19D4 - 0x19E0
   GameTime_t m_flLastLOSTraceFailureTime; // 0x19E0 - 0x19E4
   int32_t m_iNumEmptyAttacks; // 0x19E4 - 0x19E8
   unsigned char pad_19E8[0x78]; // 0x19E8 - 0x1A60
   GameTime_t m_flLastMagDropRequestTime; // 0x1A60 - 0x1A64
   float m_flWatTickOffset; // 0x1A64 - 0x1A68
   unsigned char pad_1A68[0x8]; // 0x1A68 - 0x1A70
}; // size - 0x1A70


class CServerOnlyEntity /* "server" */ : public CBaseEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CBaseTrigger /* "server" */ : public CBaseToggle /* "server" */
{
public:
   bool m_bDisabled; // 0x790 - 0x791
   unsigned char pad_791[0x7]; // 0x791 - 0x798
   CUtlSymbolLarge m_iFilterName; // 0x798 - 0x7A0
   CHandle< CBaseFilter > m_hFilter; // 0x7A0 - 0x7A4
   unsigned char pad_7A4[0x4]; // 0x7A4 - 0x7A8
   CEntityIOOutput m_OnStartTouch; // 0x7A8 - 0x7D0
   CEntityIOOutput m_OnStartTouchAll; // 0x7D0 - 0x7F8
   CEntityIOOutput m_OnEndTouch; // 0x7F8 - 0x820
   CEntityIOOutput m_OnEndTouchAll; // 0x820 - 0x848
   CEntityIOOutput m_OnTouching; // 0x848 - 0x870
   CEntityIOOutput m_OnNotTouching; // 0x870 - 0x898
   CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities; // 0x898 - 0x8B0
   bool m_bClientSidePredicted; // 0x8B0 - 0x8B1
   unsigned char pad_8B1[0x7]; // 0x8B1 - 0x8B8
}; // size - 0x8B8


class CParticleFunctionPreEmission /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bRunOnce; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0xF]; // 0x1C1 - 0x1D0
}; // size - 0x1D0


class CCSWeaponBaseGun /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   int32_t m_zoomLevel; // 0xE90 - 0xE94
   int32_t m_iBurstShotsRemaining; // 0xE94 - 0xE98
   unsigned char pad_E98[0x8]; // 0xE98 - 0xEA0
   int32_t m_silencedModelIndex; // 0xEA0 - 0xEA4
   bool m_inPrecache; // 0xEA4 - 0xEA5
   bool m_bNeedsBoltAction; // 0xEA5 - 0xEA6
   bool m_bSkillReloadAvailable; // 0xEA6 - 0xEA7
   bool m_bSkillReloadLiftedReloadKey; // 0xEA7 - 0xEA8
   bool m_bSkillBoltInterruptAvailable; // 0xEA8 - 0xEA9
   bool m_bSkillBoltLiftedFireKey; // 0xEA9 - 0xEAA
   unsigned char pad_EAA[0x6]; // 0xEAA - 0xEB0
}; // size - 0xEB0


class C_CSWeaponBaseGun /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   int32_t m_zoomLevel; // 0x1A70 - 0x1A74
   int32_t m_iBurstShotsRemaining; // 0x1A74 - 0x1A78
   int32_t m_iSilencerBodygroup; // 0x1A78 - 0x1A7C
   unsigned char pad_1A7C[0xC]; // 0x1A7C - 0x1A88
   int32_t m_silencedModelIndex; // 0x1A88 - 0x1A8C
   bool m_inPrecache; // 0x1A8C - 0x1A8D
   bool m_bNeedsBoltAction; // 0x1A8D - 0x1A8E
   unsigned char pad_1A8E[0x2]; // 0x1A8E - 0x1A90
}; // size - 0x1A90


class CLogicalEntity /* "server" */ : public CServerOnlyEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CPointEntity /* "server" */ : public CBaseEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CBaseProp /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   bool m_bModelOverrodeBlockLOS; // 0x8E8 - 0x8E9
   unsigned char pad_8E9[0x3]; // 0x8E9 - 0x8EC
   int32_t m_iShapeType; // 0x8EC - 0x8F0
   bool m_bConformToCollisionBounds; // 0x8F0 - 0x8F1
   unsigned char pad_8F1[0x3]; // 0x8F1 - 0x8F4
   matrix3x4_t m_mPreferredCatchTransform; // 0x8F4 - 0x924
   unsigned char pad_924[0x4]; // 0x924 - 0x928
}; // size - 0x928


class CParticleFunctionRenderer /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   CParticleVisibilityInputs VisibilityInputs; // 0x1B8 - 0x1FC
   bool m_bCannotBeRefracted; // 0x1FC - 0x1FD
   bool m_bSkipRenderingOnMobile; // 0x1FD - 0x1FE
   unsigned char pad_1FE[0x2]; // 0x1FE - 0x200
}; // size - 0x200


class CPulseCell_Base /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   PulseDocNodeID_t m_nEditorNodeID; // 0x8 - 0xC
   unsigned char pad_C[0x3C]; // 0xC - 0x48
}; // size - 0x48


class CPlayerPawnComponent /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   unsigned char pad_30[0x10]; // 0x30 - 0x40
}; // size - 0x40


class CBreakableProp /* "server" */ : public CBaseProp /* "server" */
{
public:
   unsigned char pad_928[0x10]; // 0x928 - 0x938
   CEntityIOOutput m_OnBreak; // 0x938 - 0x960
   CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x960 - 0x988
   CEntityIOOutput m_OnTakeDamage; // 0x988 - 0x9B0
   float m_impactEnergyScale; // 0x9B0 - 0x9B4
   int32_t m_iMinHealthDmg; // 0x9B4 - 0x9B8
   QAngle m_preferredCarryAngles; // 0x9B8 - 0x9C4
   float m_flPressureDelay; // 0x9C4 - 0x9C8
   CHandle< CBaseEntity > m_hBreaker; // 0x9C8 - 0x9CC
   PerformanceMode_t m_PerformanceMode; // 0x9CC - 0x9D0
   float m_flDmgModBullet; // 0x9D0 - 0x9D4
   float m_flDmgModClub; // 0x9D4 - 0x9D8
   float m_flDmgModExplosive; // 0x9D8 - 0x9DC
   float m_flDmgModFire; // 0x9DC - 0x9E0
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x9E0 - 0x9E8
   CUtlSymbolLarge m_iszBasePropData; // 0x9E8 - 0x9F0
   int32_t m_iInteractions; // 0x9F0 - 0x9F4
   GameTime_t m_flPreventDamageBeforeTime; // 0x9F4 - 0x9F8
   bool m_bHasBreakPiecesOrCommands; // 0x9F8 - 0x9F9
   unsigned char pad_9F9[0x3]; // 0x9F9 - 0x9FC
   float m_explodeDamage; // 0x9FC - 0xA00
   float m_explodeRadius; // 0xA00 - 0xA04
   unsigned char pad_A04[0x4]; // 0xA04 - 0xA08
   float m_explosionDelay; // 0xA08 - 0xA0C
   unsigned char pad_A0C[0x4]; // 0xA0C - 0xA10
   CUtlSymbolLarge m_explosionBuildupSound; // 0xA10 - 0xA18
   CUtlSymbolLarge m_explosionCustomEffect; // 0xA18 - 0xA20
   CUtlSymbolLarge m_explosionCustomSound; // 0xA20 - 0xA28
   CUtlSymbolLarge m_explosionModifier; // 0xA28 - 0xA30
   CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xA30 - 0xA34
   GameTime_t m_flLastPhysicsInfluenceTime; // 0xA34 - 0xA38
   bool m_bOriginalBlockLOS; // 0xA38 - 0xA39
   unsigned char pad_A39[0x3]; // 0xA39 - 0xA3C
   float m_flDefaultFadeScale; // 0xA3C - 0xA40
   CHandle< CBaseEntity > m_hLastAttacker; // 0xA40 - 0xA44
   CHandle< CBaseEntity > m_hFlareEnt; // 0xA44 - 0xA48
   bool m_bUsePuntSound; // 0xA48 - 0xA49
   unsigned char pad_A49[0x7]; // 0xA49 - 0xA50
   CUtlSymbolLarge m_iszPuntSound; // 0xA50 - 0xA58
   bool m_noGhostCollision; // 0xA58 - 0xA59
   unsigned char pad_A59[0x7]; // 0xA59 - 0xA60
}; // size - 0xA60


class CBaseProp /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   bool m_bModelOverrodeBlockLOS; // 0xED8 - 0xED9
   unsigned char pad_ED9[0x3]; // 0xED9 - 0xEDC
   int32_t m_iShapeType; // 0xEDC - 0xEE0
   bool m_bConformToCollisionBounds; // 0xEE0 - 0xEE1
   unsigned char pad_EE1[0x3]; // 0xEE1 - 0xEE4
   matrix3x4_t m_mPreferredCatchTransform; // 0xEE4 - 0xF14
   unsigned char pad_F14[0x4]; // 0xF14 - 0xF18
}; // size - 0xF18


class C_BaseToggle /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class C_BaseCombatCharacter /* "client" */ : public C_BaseFlex /* "client" */
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
   C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0x1070 - 0x1088
   int32_t m_bloodColor; // 0x1088 - 0x108C
   AttachmentHandle_t m_leftFootAttachment; // 0x108C - 0x108D
   AttachmentHandle_t m_rightFootAttachment; // 0x108D - 0x108E
   unsigned char pad_108E[0x2]; // 0x108E - 0x1090
   C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0x1090 - 0x1094
   float m_flWaterWorldZ; // 0x1094 - 0x1098
   float m_flWaterNextTraceTime; // 0x1098 - 0x109C
   float m_flFieldOfView; // 0x109C - 0x10A0
   unsigned char pad_10A0[0x60]; // 0x10A0 - 0x1100
}; // size - 0x1100


class CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CAnimNodePath m_nodePath; // 0x18 - 0x48
   AnimNodeNetworkMode m_networkMode; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
   CUtlString m_name; // 0x50 - 0x58
}; // size - 0x58


class C_BreakableProp /* "client" */ : public CBaseProp /* "client" */
{
public:
   unsigned char pad_F18[0x8]; // 0xF18 - 0xF20
   CEntityIOOutput m_OnBreak; // 0xF20 - 0xF48
   CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xF48 - 0xF70
   CEntityIOOutput m_OnTakeDamage; // 0xF70 - 0xF98
   float m_impactEnergyScale; // 0xF98 - 0xF9C
   int32_t m_iMinHealthDmg; // 0xF9C - 0xFA0
   float m_flPressureDelay; // 0xFA0 - 0xFA4
   CHandle< C_BaseEntity > m_hBreaker; // 0xFA4 - 0xFA8
   PerformanceMode_t m_PerformanceMode; // 0xFA8 - 0xFAC
   float m_flDmgModBullet; // 0xFAC - 0xFB0
   float m_flDmgModClub; // 0xFB0 - 0xFB4
   float m_flDmgModExplosive; // 0xFB4 - 0xFB8
   float m_flDmgModFire; // 0xFB8 - 0xFBC
   unsigned char pad_FBC[0x4]; // 0xFBC - 0xFC0
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0xFC0 - 0xFC8
   CUtlSymbolLarge m_iszBasePropData; // 0xFC8 - 0xFD0
   int32_t m_iInteractions; // 0xFD0 - 0xFD4
   GameTime_t m_flPreventDamageBeforeTime; // 0xFD4 - 0xFD8
   bool m_bHasBreakPiecesOrCommands; // 0xFD8 - 0xFD9
   unsigned char pad_FD9[0x3]; // 0xFD9 - 0xFDC
   float m_explodeDamage; // 0xFDC - 0xFE0
   float m_explodeRadius; // 0xFE0 - 0xFE4
   unsigned char pad_FE4[0x4]; // 0xFE4 - 0xFE8
   float m_explosionDelay; // 0xFE8 - 0xFEC
   unsigned char pad_FEC[0x4]; // 0xFEC - 0xFF0
   CUtlSymbolLarge m_explosionBuildupSound; // 0xFF0 - 0xFF8
   CUtlSymbolLarge m_explosionCustomEffect; // 0xFF8 - 0x1000
   CUtlSymbolLarge m_explosionCustomSound; // 0x1000 - 0x1008
   CUtlSymbolLarge m_explosionModifier; // 0x1008 - 0x1010
   CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0x1010 - 0x1014
   GameTime_t m_flLastPhysicsInfluenceTime; // 0x1014 - 0x1018
   float m_flDefaultFadeScale; // 0x1018 - 0x101C
   CHandle< C_BaseEntity > m_hLastAttacker; // 0x101C - 0x1020
   CHandle< C_BaseEntity > m_hFlareEnt; // 0x1020 - 0x1024
   bool m_noGhostCollision; // 0x1024 - 0x1025
   unsigned char pad_1025[0x3]; // 0x1025 - 0x1028
}; // size - 0x1028


class CPulseCell_BaseFlow /* "pulse_runtime_lib" */ : public CPulseCell_Base /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class C_CSGO_TeamPreviewCharacterPosition /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   int32_t m_nVariant; // 0x550 - 0x554
   int32_t m_nRandom; // 0x554 - 0x558
   int32_t m_nOrdinal; // 0x558 - 0x55C
   unsigned char pad_55C[0x4]; // 0x55C - 0x560
   CUtlString m_sWeaponName; // 0x560 - 0x568
   uint64_t m_xuid; // 0x568 - 0x570
   C_EconItemView m_agentItem; // 0x570 - 0x9B8
   C_EconItemView m_glovesItem; // 0x9B8 - 0xE00
   C_EconItemView m_weaponItem; // 0xE00 - 0x1248
   unsigned char pad_1248[0x38]; // 0x1248 - 0x1280
}; // size - 0x1280


class CBaseGrenade /* "server" */ : public CBaseFlex /* "server" */
{
public:
   unsigned char pad_978[0x8]; // 0x978 - 0x980
   CEntityIOOutput m_OnPlayerPickup; // 0x980 - 0x9A8
   CEntityIOOutput m_OnExplode; // 0x9A8 - 0x9D0
   bool m_bHasWarnedAI; // 0x9D0 - 0x9D1
   bool m_bIsSmokeGrenade; // 0x9D1 - 0x9D2
   bool m_bIsLive; // 0x9D2 - 0x9D3
   unsigned char pad_9D3[0x1]; // 0x9D3 - 0x9D4
   float m_DmgRadius; // 0x9D4 - 0x9D8
   GameTime_t m_flDetonateTime; // 0x9D8 - 0x9DC
   float m_flWarnAITime; // 0x9DC - 0x9E0
   float m_flDamage; // 0x9E0 - 0x9E4
   unsigned char pad_9E4[0x4]; // 0x9E4 - 0x9E8
   CUtlSymbolLarge m_iszBounceSound; // 0x9E8 - 0x9F0
   CUtlString m_ExplosionSound; // 0x9F0 - 0x9F8
   unsigned char pad_9F8[0x4]; // 0x9F8 - 0x9FC
   CHandle< CCSPlayerPawn > m_hThrower; // 0x9FC - 0xA00
   unsigned char pad_A00[0x14]; // 0xA00 - 0xA14
   GameTime_t m_flNextAttack; // 0xA14 - 0xA18
   CHandle< CCSPlayerPawn > m_hOriginalThrower; // 0xA18 - 0xA1C
   unsigned char pad_A1C[0x4]; // 0xA1C - 0xA20
}; // size - 0xA20


class CEntityComponent /* "entity2" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class CParticleFunctionConstraint /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   unsigned char pad_0[0x1C0]; // 0x0 - 0x1C0
}; // size - 0x1C0


class CParticleFunctionForce /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   unsigned char pad_0[0x1D0]; // 0x0 - 0x1D0
}; // size - 0x1D0


class CBaseCombatCharacter /* "server" */ : public CBaseFlex /* "server" */
{
public:
   bool m_bForceServerRagdoll; // 0x978 - 0x979
   unsigned char pad_979[0x7]; // 0x979 - 0x980
   CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // 0x980 - 0x998
   float m_flFieldOfView; // 0x998 - 0x99C
   float m_impactEnergyScale; // 0x99C - 0x9A0
   HitGroup_t m_LastHitGroup; // 0x9A0 - 0x9A4
   bool m_bApplyStressDamage; // 0x9A4 - 0x9A5
   unsigned char pad_9A5[0x3]; // 0x9A5 - 0x9A8
   int32_t m_bloodColor; // 0x9A8 - 0x9AC
   unsigned char pad_9AC[0x44]; // 0x9AC - 0x9F0
   int32_t m_iDamageCount; // 0x9F0 - 0x9F4
   unsigned char pad_9F4[0x4]; // 0x9F4 - 0x9F8
   CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // 0x9F8 - 0xA00
   CUtlSymbolLarge m_strRelationships; // 0xA00 - 0xA08
   Hull_t m_eHull; // 0xA08 - 0xA0C
   uint32_t m_nNavHullIdx; // 0xA0C - 0xA10
}; // size - 0xA10


class C_BaseTrigger /* "client" */ : public C_BaseToggle /* "client" */
{
public:
   bool m_bDisabled; // 0xCD0 - 0xCD1
   bool m_bClientSidePredicted; // 0xCD1 - 0xCD2
   unsigned char pad_CD2[0x6]; // 0xCD2 - 0xCD8
}; // size - 0xCD8


class CDynamicProp /* "server" */ : public CBreakableProp /* "server" */
{
public:
   unsigned char pad_A60[0x8]; // 0xA60 - 0xA68
   bool m_bCreateNavObstacle; // 0xA68 - 0xA69
   bool m_bUseHitboxesForRenderBox; // 0xA69 - 0xA6A
   bool m_bUseAnimGraph; // 0xA6A - 0xA6B
   unsigned char pad_A6B[0x5]; // 0xA6B - 0xA70
   CEntityIOOutput m_pOutputAnimBegun; // 0xA70 - 0xA98
   CEntityIOOutput m_pOutputAnimOver; // 0xA98 - 0xAC0
   CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xAC0 - 0xAE8
   CEntityIOOutput m_OnAnimReachedStart; // 0xAE8 - 0xB10
   CEntityIOOutput m_OnAnimReachedEnd; // 0xB10 - 0xB38
   CUtlSymbolLarge m_iszIdleAnim; // 0xB38 - 0xB40
   AnimLoopMode_t m_nIdleAnimLoopMode; // 0xB40 - 0xB44
   bool m_bRandomizeCycle; // 0xB44 - 0xB45
   bool m_bStartDisabled; // 0xB45 - 0xB46
   bool m_bFiredStartEndOutput; // 0xB46 - 0xB47
   bool m_bForceNpcExclude; // 0xB47 - 0xB48
   bool m_bCreateNonSolid; // 0xB48 - 0xB49
   bool m_bIsOverrideProp; // 0xB49 - 0xB4A
   unsigned char pad_B4A[0x2]; // 0xB4A - 0xB4C
   int32_t m_iInitialGlowState; // 0xB4C - 0xB50
   int32_t m_nGlowRange; // 0xB50 - 0xB54
   int32_t m_nGlowRangeMin; // 0xB54 - 0xB58
   Color m_glowColor; // 0xB58 - 0xB5C
   int32_t m_nGlowTeam; // 0xB5C - 0xB60
}; // size - 0xB60


class C_BasePlayerPawn /* "client" */ : public C_BaseCombatCharacter /* "client" */
{
public:
   CPlayer_WeaponServices* m_pWeaponServices; // 0x1100 - 0x1108
   CPlayer_ItemServices* m_pItemServices; // 0x1108 - 0x1110
   CPlayer_AutoaimServices* m_pAutoaimServices; // 0x1110 - 0x1118
   CPlayer_ObserverServices* m_pObserverServices; // 0x1118 - 0x1120
   CPlayer_WaterServices* m_pWaterServices; // 0x1120 - 0x1128
   CPlayer_UseServices* m_pUseServices; // 0x1128 - 0x1130
   CPlayer_FlashlightServices* m_pFlashlightServices; // 0x1130 - 0x1138
   CPlayer_CameraServices* m_pCameraServices; // 0x1138 - 0x1140
   CPlayer_MovementServices* m_pMovementServices; // 0x1140 - 0x1148
   unsigned char pad_1148[0x8]; // 0x1148 - 0x1150
   C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0x1150 - 0x11A0
   uint32_t m_nHighestConsumedServerViewAngleChangeIndex; // 0x11A0 - 0x11A4
   QAngle v_angle; // 0x11A4 - 0x11B0
   QAngle v_anglePrevious; // 0x11B0 - 0x11BC
   uint32_t m_iHideHUD; // 0x11BC - 0x11C0
   sky3dparams_t m_skybox3d; // 0x11C0 - 0x1250
   GameTime_t m_flDeathTime; // 0x1250 - 0x1254
   Vector m_vecPredictionError; // 0x1254 - 0x1260
   GameTime_t m_flPredictionErrorTime; // 0x1260 - 0x1264
   Vector m_vecLastCameraSetupLocalOrigin; // 0x1264 - 0x1270
   GameTime_t m_flLastCameraSetupTime; // 0x1270 - 0x1274
   float m_flFOVSensitivityAdjust; // 0x1274 - 0x1278
   float m_flMouseSensitivity; // 0x1278 - 0x127C
   Vector m_vOldOrigin; // 0x127C - 0x1288
   float m_flOldSimulationTime; // 0x1288 - 0x128C
   int32_t m_nLastExecutedCommandNumber; // 0x128C - 0x1290
   int32_t m_nLastExecutedCommandTick; // 0x1290 - 0x1294
   CHandle< CBasePlayerController > m_hController; // 0x1294 - 0x1298
   bool m_bIsSwappingToPredictableController; // 0x1298 - 0x1299
   unsigned char pad_1299[0x7]; // 0x1299 - 0x12A0
}; // size - 0x12A0


class C_BaseGrenade /* "client" */ : public C_BaseFlex /* "client" */
{
public:
   bool m_bHasWarnedAI; // 0x1070 - 0x1071
   bool m_bIsSmokeGrenade; // 0x1071 - 0x1072
   bool m_bIsLive; // 0x1072 - 0x1073
   unsigned char pad_1073[0x1]; // 0x1073 - 0x1074
   float m_DmgRadius; // 0x1074 - 0x1078
   GameTime_t m_flDetonateTime; // 0x1078 - 0x107C
   float m_flWarnAITime; // 0x107C - 0x1080
   float m_flDamage; // 0x1080 - 0x1084
   unsigned char pad_1084[0x4]; // 0x1084 - 0x1088
   CUtlSymbolLarge m_iszBounceSound; // 0x1088 - 0x1090
   CUtlString m_ExplosionSound; // 0x1090 - 0x1098
   unsigned char pad_1098[0x4]; // 0x1098 - 0x109C
   CHandle< C_CSPlayerPawn > m_hThrower; // 0x109C - 0x10A0
   unsigned char pad_10A0[0x14]; // 0x10A0 - 0x10B4
   GameTime_t m_flNextAttack; // 0x10B4 - 0x10B8
   CHandle< C_CSPlayerPawn > m_hOriginalThrower; // 0x10B8 - 0x10BC
   unsigned char pad_10BC[0x4]; // 0x10BC - 0x10C0
}; // size - 0x10C0


class CItem /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   unsigned char pad_8E8[0x8]; // 0x8E8 - 0x8F0
   CEntityIOOutput m_OnPlayerTouch; // 0x8F0 - 0x918
   bool m_bActivateWhenAtRest; // 0x918 - 0x919
   unsigned char pad_919[0x7]; // 0x919 - 0x920
   CEntityIOOutput m_OnCacheInteraction; // 0x920 - 0x948
   CEntityIOOutput m_OnPlayerPickup; // 0x948 - 0x970
   CEntityIOOutput m_OnGlovePulled; // 0x970 - 0x998
   Vector m_vOriginalSpawnOrigin; // 0x998 - 0x9A4
   QAngle m_vOriginalSpawnAngles; // 0x9A4 - 0x9B0
   bool m_bPhysStartAsleep; // 0x9B0 - 0x9B1
   unsigned char pad_9B1[0xF]; // 0x9B1 - 0x9C0
}; // size - 0x9C0


class CParticleInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
}; // size - 0x10


class C_CSGO_MapPreviewCameraPath /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   float m_flZFar; // 0x550 - 0x554
   float m_flZNear; // 0x554 - 0x558
   bool m_bLoop; // 0x558 - 0x559
   bool m_bVerticalFOV; // 0x559 - 0x55A
   bool m_bConstantSpeed; // 0x55A - 0x55B
   unsigned char pad_55B[0x1]; // 0x55B - 0x55C
   float m_flDuration; // 0x55C - 0x560
   unsigned char pad_560[0x40]; // 0x560 - 0x5A0
   float m_flPathLength; // 0x5A0 - 0x5A4
   float m_flPathDuration; // 0x5A4 - 0x5A8
   unsigned char pad_5A8[0x8]; // 0x5A8 - 0x5B0
}; // size - 0x5B0


class CBaseCSGrenade /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   bool m_bRedraw; // 0xE90 - 0xE91
   bool m_bIsHeldByPlayer; // 0xE91 - 0xE92
   bool m_bPinPulled; // 0xE92 - 0xE93
   bool m_bJumpThrow; // 0xE93 - 0xE94
   bool m_bThrowAnimating; // 0xE94 - 0xE95
   unsigned char pad_E95[0x3]; // 0xE95 - 0xE98
   GameTime_t m_fThrowTime; // 0xE98 - 0xE9C
   float m_flThrowStrength; // 0xE9C - 0xEA0
   float m_flThrowStrengthApproach; // 0xEA0 - 0xEA4
   GameTime_t m_fDropTime; // 0xEA4 - 0xEA8
   bool m_bJustPulledPin; // 0xEA8 - 0xEA9
   unsigned char pad_EA9[0x3]; // 0xEA9 - 0xEAC
   GameTick_t m_nNextHoldTick; // 0xEAC - 0xEB0
   float m_flNextHoldFrac; // 0xEB0 - 0xEB4
   CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // 0xEB4 - 0xEB8
   unsigned char pad_EB8[0x8]; // 0xEB8 - 0xEC0
}; // size - 0xEC0


class CBtNode /* "server" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CNavVolume /* "navlib" */
{
public:
   unsigned char pad_0[0x70]; // 0x0 - 0x70
}; // size - 0x70


class C_BaseCSGrenade /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   bool m_bClientPredictDelete; // 0x1A70 - 0x1A71
   bool m_bRedraw; // 0x1A71 - 0x1A72
   bool m_bIsHeldByPlayer; // 0x1A72 - 0x1A73
   bool m_bPinPulled; // 0x1A73 - 0x1A74
   bool m_bJumpThrow; // 0x1A74 - 0x1A75
   bool m_bThrowAnimating; // 0x1A75 - 0x1A76
   unsigned char pad_1A76[0x2]; // 0x1A76 - 0x1A78
   GameTime_t m_fThrowTime; // 0x1A78 - 0x1A7C
   float m_flThrowStrength; // 0x1A7C - 0x1A80
   float m_flThrowStrengthApproach; // 0x1A80 - 0x1A84
   GameTime_t m_fDropTime; // 0x1A84 - 0x1A88
   bool m_bJustPulledPin; // 0x1A88 - 0x1A89
   unsigned char pad_1A89[0x3]; // 0x1A89 - 0x1A8C
   GameTick_t m_nNextHoldTick; // 0x1A8C - 0x1A90
   float m_flNextHoldFrac; // 0x1A90 - 0x1A94
   CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // 0x1A94 - 0x1A98
   unsigned char pad_1A98[0x8]; // 0x1A98 - 0x1AA0
}; // size - 0x1AA0


class CEntitySubclassVDataBase /* "server" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
}; // size - 0x28


class CRuleEntity /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CUtlSymbolLarge m_iszMaster; // 0x710 - 0x718
}; // size - 0x718


class C_CSPlayerPawnBase /* "client" */ : public C_BasePlayerPawn /* "client" */
{
public:
   unsigned char pad_12A0[0x20]; // 0x12A0 - 0x12C0
   CCSPlayer_PingServices* m_pPingServices; // 0x12C0 - 0x12C8
   CPlayer_ViewModelServices* m_pViewModelServices; // 0x12C8 - 0x12D0
   unsigned char pad_12D0[0x8]; // 0x12D0 - 0x12D8
   float32 m_fRenderingClipPlane[4]; // 0x12D8 - 0x12E8
   int32_t m_nLastClipPlaneSetupFrame; // 0x12E8 - 0x12EC
   Vector m_vecLastClipCameraPos; // 0x12EC - 0x12F8
   Vector m_vecLastClipCameraForward; // 0x12F8 - 0x1304
   bool m_bClipHitStaticWorld; // 0x1304 - 0x1305
   bool m_bCachedPlaneIsValid; // 0x1305 - 0x1306
   unsigned char pad_1306[0x2]; // 0x1306 - 0x1308
   C_CSWeaponBase* m_pClippingWeapon; // 0x1308 - 0x1310
   CSPlayerState m_previousPlayerState; // 0x1310 - 0x1314
   float m_flLastCollisionCeiling; // 0x1314 - 0x1318
   float m_flLastCollisionCeilingChangeTime; // 0x1318 - 0x131C
   unsigned char pad_131C[0x1C]; // 0x131C - 0x1338
   GameTime_t m_grenadeParameterStashTime; // 0x1338 - 0x133C
   bool m_bGrenadeParametersStashed; // 0x133C - 0x133D
   unsigned char pad_133D[0x3]; // 0x133D - 0x1340
   QAngle m_angStashedShootAngles; // 0x1340 - 0x134C
   Vector m_vecStashedGrenadeThrowPosition; // 0x134C - 0x1358
   Vector m_vecStashedVelocity; // 0x1358 - 0x1364
   QAngle m_angShootAngleHistory[2]; // 0x1364 - 0x137C
   Vector m_vecThrowPositionHistory[2]; // 0x137C - 0x1394
   Vector m_vecVelocityHistory[2]; // 0x1394 - 0x13AC
   unsigned char pad_13AC[0x4]; // 0x13AC - 0x13B0
   QAngle m_thirdPersonHeading; // 0x13B0 - 0x13BC
   unsigned char pad_13BC[0xC]; // 0x13BC - 0x13C8
   float m_flSlopeDropOffset; // 0x13C8 - 0x13CC
   unsigned char pad_13CC[0xC]; // 0x13CC - 0x13D8
   float m_flSlopeDropHeight; // 0x13D8 - 0x13DC
   unsigned char pad_13DC[0xC]; // 0x13DC - 0x13E8
   Vector m_vHeadConstraintOffset; // 0x13E8 - 0x13F4
   unsigned char pad_13F4[0xC]; // 0x13F4 - 0x1400
   bool m_bIsScoped; // 0x1400 - 0x1401
   bool m_bIsWalking; // 0x1401 - 0x1402
   bool m_bResumeZoom; // 0x1402 - 0x1403
   unsigned char pad_1403[0x1]; // 0x1403 - 0x1404
   CSPlayerState m_iPlayerState; // 0x1404 - 0x1408
   bool m_bIsDefusing; // 0x1408 - 0x1409
   bool m_bIsGrabbingHostage; // 0x1409 - 0x140A
   unsigned char pad_140A[0x2]; // 0x140A - 0x140C
   CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x140C - 0x1410
   bool m_bIsRescuing; // 0x1410 - 0x1411
   unsigned char pad_1411[0x3]; // 0x1411 - 0x1414
   GameTime_t m_fImmuneToGunGameDamageTime; // 0x1414 - 0x1418
   GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x1418 - 0x141C
   bool m_bGunGameImmunity; // 0x141C - 0x141D
   Color m_GunGameImmunityColor; // 0x141D - 0x1421
   bool m_bHasMovedSinceSpawn; // 0x1421 - 0x1422
   unsigned char pad_1422[0x2]; // 0x1422 - 0x1424
   float m_fMolotovUseTime; // 0x1424 - 0x1428
   float m_fMolotovDamageTime; // 0x1428 - 0x142C
   int32_t m_nWhichBombZone; // 0x142C - 0x1430
   bool m_bInNoDefuseArea; // 0x1430 - 0x1431
   unsigned char pad_1431[0x3]; // 0x1431 - 0x1434
   int32_t m_iThrowGrenadeCounter; // 0x1434 - 0x1438
   bool m_bWaitForNoAttack; // 0x1438 - 0x1439
   unsigned char pad_1439[0x3]; // 0x1439 - 0x143C
   float m_flGuardianTooFarDistFrac; // 0x143C - 0x1440
   GameTime_t m_flDetectedByEnemySensorTime; // 0x1440 - 0x1444
   float m_flNextGuardianTooFarWarning; // 0x1444 - 0x1448
   bool m_bSuppressGuardianTooFarWarningAudio; // 0x1448 - 0x1449
   bool m_bKilledByTaser; // 0x1449 - 0x144A
   unsigned char pad_144A[0x2]; // 0x144A - 0x144C
   int32_t m_iMoveState; // 0x144C - 0x1450
   bool m_bCanMoveDuringFreezePeriod; // 0x1450 - 0x1451
   unsigned char pad_1451[0x3]; // 0x1451 - 0x1454
   float m_flLowerBodyYawTarget; // 0x1454 - 0x1458
   bool m_bStrafing; // 0x1458 - 0x1459
   unsigned char pad_1459[0x3]; // 0x1459 - 0x145C
   GameTime_t m_flLastSpawnTimeIndex; // 0x145C - 0x1460
   GameTime_t m_flEmitSoundTime; // 0x1460 - 0x1464
   int32_t m_iAddonBits; // 0x1464 - 0x1468
   int32_t m_iPrimaryAddon; // 0x1468 - 0x146C
   int32_t m_iSecondaryAddon; // 0x146C - 0x1470
   int32_t m_iProgressBarDuration; // 0x1470 - 0x1474
   float m_flProgressBarStartTime; // 0x1474 - 0x1478
   int32_t m_iDirection; // 0x1478 - 0x147C
   int32_t m_iShotsFired; // 0x147C - 0x1480
   bool m_bNightVisionOn; // 0x1480 - 0x1481
   bool m_bHasNightVision; // 0x1481 - 0x1482
   unsigned char pad_1482[0x2]; // 0x1482 - 0x1484
   float m_flVelocityModifier; // 0x1484 - 0x1488
   float m_flHitHeading; // 0x1488 - 0x148C
   int32_t m_nHitBodyPart; // 0x148C - 0x1490
   int32_t m_iStartAccount; // 0x1490 - 0x1494
   Vector m_vecIntroStartEyePosition; // 0x1494 - 0x14A0
   Vector m_vecIntroStartPlayerForward; // 0x14A0 - 0x14AC
   GameTime_t m_flClientDeathTime; // 0x14AC - 0x14B0
   float m_flNightVisionAlpha; // 0x14B0 - 0x14B4
   bool m_bScreenTearFrameCaptured; // 0x14B4 - 0x14B5
   unsigned char pad_14B5[0x3]; // 0x14B5 - 0x14B8
   float m_flFlashBangTime; // 0x14B8 - 0x14BC
   float m_flFlashScreenshotAlpha; // 0x14BC - 0x14C0
   float m_flFlashOverlayAlpha; // 0x14C0 - 0x14C4
   bool m_bFlashBuildUp; // 0x14C4 - 0x14C5
   bool m_bFlashDspHasBeenCleared; // 0x14C5 - 0x14C6
   bool m_bFlashScreenshotHasBeenGrabbed; // 0x14C6 - 0x14C7
   unsigned char pad_14C7[0x1]; // 0x14C7 - 0x14C8
   float m_flFlashMaxAlpha; // 0x14C8 - 0x14CC
   float m_flFlashDuration; // 0x14CC - 0x14D0
   Vector m_lastStandingPos; // 0x14D0 - 0x14DC
   Vector m_vecLastMuzzleFlashPos; // 0x14DC - 0x14E8
   QAngle m_angLastMuzzleFlashAngle; // 0x14E8 - 0x14F4
   CHandle< C_BaseEntity > m_hMuzzleFlashShape; // 0x14F4 - 0x14F8
   int32_t m_iHealthBarRenderMaskIndex; // 0x14F8 - 0x14FC
   float m_flHealthFadeValue; // 0x14FC - 0x1500
   float m_flHealthFadeAlpha; // 0x1500 - 0x1504
   int32_t m_nMyCollisionGroup; // 0x1504 - 0x1508
   float m_ignoreLadderJumpTime; // 0x1508 - 0x150C
   unsigned char pad_150C[0x4]; // 0x150C - 0x1510
   CountdownTimer m_ladderSurpressionTimer; // 0x1510 - 0x1528
   Vector m_lastLadderNormal; // 0x1528 - 0x1534
   Vector m_lastLadderPos; // 0x1534 - 0x1540
   unsigned char pad_1540[0x8]; // 0x1540 - 0x1548
   float m_flDeathCCWeight; // 0x1548 - 0x154C
   bool m_bOldIsScoped; // 0x154C - 0x154D
   unsigned char pad_154D[0x3]; // 0x154D - 0x1550
   float m_flPrevRoundEndTime; // 0x1550 - 0x1554
   float m_flPrevMatchEndTime; // 0x1554 - 0x1558
   uint16_t m_unCurrentEquipmentValue; // 0x1558 - 0x155A
   uint16_t m_unRoundStartEquipmentValue; // 0x155A - 0x155C
   uint16_t m_unFreezetimeEndEquipmentValue; // 0x155C - 0x155E
   unsigned char pad_155E[0x2]; // 0x155E - 0x1560
   Vector m_vecThirdPersonViewPositionOverride; // 0x1560 - 0x156C
   int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0x156C - 0x1570
   int32_t m_ArmorValue; // 0x1570 - 0x1574
   unsigned char pad_1574[0x4]; // 0x1574 - 0x1578
   QAngle m_angEyeAngles; // 0x1578 - 0x1584
   unsigned char pad_1584[0xC]; // 0x1584 - 0x1590
   float m_fNextThinkPushAway; // 0x1590 - 0x1594
   bool m_bShouldAutobuyDMWeapons; // 0x1594 - 0x1595
   bool m_bShouldAutobuyNow; // 0x1595 - 0x1596
   bool m_bHud_MiniScoreHidden; // 0x1596 - 0x1597
   bool m_bHud_RadarHidden; // 0x1597 - 0x1598
   CEntityIndex m_nLastKillerIndex; // 0x1598 - 0x159C
   int32_t m_nLastConcurrentKilled; // 0x159C - 0x15A0
   int32_t m_nDeathCamMusic; // 0x15A0 - 0x15A4
   CEntityIndex m_iIDEntIndex; // 0x15A4 - 0x15A8
   CountdownTimer m_delayTargetIDTimer; // 0x15A8 - 0x15C0
   CEntityIndex m_iTargetedWeaponEntIndex; // 0x15C0 - 0x15C4
   CEntityIndex m_iOldIDEntIndex; // 0x15C4 - 0x15C8
   CountdownTimer m_holdTargetIDTimer; // 0x15C8 - 0x15E0
   unsigned char pad_15E0[0x4]; // 0x15E0 - 0x15E4
   float m_flCurrentMusicStartTime; // 0x15E4 - 0x15E8
   float m_flMusicRoundStartTime; // 0x15E8 - 0x15EC
   bool m_bDeferStartMusicOnWarmup; // 0x15EC - 0x15ED
   unsigned char pad_15ED[0x3]; // 0x15ED - 0x15F0
   int32_t m_cycleLatch; // 0x15F0 - 0x15F4
   float m_serverIntendedCycle; // 0x15F4 - 0x15F8
   uint32 m_vecPlayerPatchEconIndices[5]; // 0x15F8 - 0x160C
   unsigned char pad_160C[0x8]; // 0x160C - 0x1614
   bool m_bHideTargetID; // 0x1614 - 0x1615
   unsigned char pad_1615[0x3]; // 0x1615 - 0x1618
   float m_flLastSmokeOverlayAlpha; // 0x1618 - 0x161C
   float m_flLastSmokeAge; // 0x161C - 0x1620
   Vector m_vLastSmokeOverlayColor; // 0x1620 - 0x162C
   ParticleIndex_t m_nPlayerSmokedFx; // 0x162C - 0x1630
   ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x1630 - 0x1634
   ParticleIndex_t m_nPlayerInfernoFootFx; // 0x1634 - 0x1638
   float m_flNextMagDropTime; // 0x1638 - 0x163C
   int32_t m_nLastMagDropAttachmentIndex; // 0x163C - 0x1640
   CUtlVector< C_BulletHitModel* > m_vecBulletHitModels; // 0x1640 - 0x1658
   CUtlVector< C_PickUpModelSlerper* > m_vecPickupModelSlerpers; // 0x1658 - 0x1670
   Vector m_vecLastAliveLocalVelocity; // 0x1670 - 0x167C
   unsigned char pad_167C[0x1C]; // 0x167C - 0x1698
   EntitySpottedState_t m_entitySpottedState; // 0x1698 - 0x16B0
   int32_t m_nSurvivalTeamNumber; // 0x16B0 - 0x16B4
   bool m_bGuardianShouldSprayCustomXMark; // 0x16B4 - 0x16B5
   bool m_bHasDeathInfo; // 0x16B5 - 0x16B6
   unsigned char pad_16B6[0x2]; // 0x16B6 - 0x16B8
   float m_flDeathInfoTime; // 0x16B8 - 0x16BC
   Vector m_vecDeathInfoOrigin; // 0x16BC - 0x16C8
   bool m_bKilledByHeadshot; // 0x16C8 - 0x16C9
   unsigned char pad_16C9[0x3]; // 0x16C9 - 0x16CC
   CHandle< CCSPlayerController > m_hOriginalController; // 0x16CC - 0x16D0
   unsigned char pad_16D0[0x48]; // 0x16D0 - 0x1718
}; // size - 0x1718


class C_PointEntity /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class CSimpleSimTimer /* "server" */
{
public:
   GameTime_t m_next; // 0x0 - 0x4
   WorldGroupId_t m_nWorldGroupId; // 0x4 - 0x8
}; // size - 0x8


class CBasePlatTrain /* "server" */ : public CBaseToggle /* "server" */
{
public:
   CUtlSymbolLarge m_NoiseMoving; // 0x790 - 0x798
   CUtlSymbolLarge m_NoiseArrived; // 0x798 - 0x7A0
   unsigned char pad_7A0[0x8]; // 0x7A0 - 0x7A8
   float m_volume; // 0x7A8 - 0x7AC
   float m_flTWidth; // 0x7AC - 0x7B0
   float m_flTLength; // 0x7B0 - 0x7B4
   unsigned char pad_7B4[0x4]; // 0x7B4 - 0x7B8
}; // size - 0x7B8


class CServerOnlyPointEntity /* "server" */ : public CServerOnlyEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CUnaryUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   CAnimUpdateNodeRef m_pChildNode; // 0x58 - 0x68
}; // size - 0x68


class CBaseCSGrenadeProjectile /* "server" */ : public CBaseGrenade /* "server" */
{
public:
   Vector m_vInitialPosition; // 0xA20 - 0xA2C
   Vector m_vInitialVelocity; // 0xA2C - 0xA38
   int32_t m_nBounces; // 0xA38 - 0xA3C
   unsigned char pad_A3C[0x4]; // 0xA3C - 0xA40
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0xA40 - 0xA48
   int32_t m_nExplodeEffectTickBegin; // 0xA48 - 0xA4C
   Vector m_vecExplodeEffectOrigin; // 0xA4C - 0xA58
   GameTime_t m_flSpawnTime; // 0xA58 - 0xA5C
   uint8_t m_unOGSExtraFlags; // 0xA5C - 0xA5D
   bool m_bDetonationRecorded; // 0xA5D - 0xA5E
   unsigned char pad_A5E[0x2]; // 0xA5E - 0xA60
   GameTime_t m_flDetonateTime; // 0xA60 - 0xA64
   uint16_t m_nItemIndex; // 0xA64 - 0xA66
   unsigned char pad_A66[0x2]; // 0xA66 - 0xA68
   Vector m_vecOriginalSpawnLocation; // 0xA68 - 0xA74
   GameTime_t m_flLastBounceSoundTime; // 0xA74 - 0xA78
   RotationVector m_vecGrenadeSpin; // 0xA78 - 0xA84
   Vector m_vecLastHitSurfaceNormal; // 0xA84 - 0xA90
   int32_t m_nTicksAtZeroVelocity; // 0xA90 - 0xA94
   bool m_bHasEverHitPlayer; // 0xA94 - 0xA95
   bool m_bClearFromPlayers; // 0xA95 - 0xA96
   unsigned char pad_A96[0x2]; // 0xA96 - 0xA98
}; // size - 0xA98


class C_CSGO_TeamPreviewCamera /* "client" */ : public C_CSGO_MapPreviewCameraPath /* "client" */
{
public:
   int32_t m_nVariant; // 0x5B0 - 0x5B4
   bool m_bDofEnabled; // 0x5B4 - 0x5B5
   unsigned char pad_5B5[0x3]; // 0x5B5 - 0x5B8
   float m_flDofNearBlurry; // 0x5B8 - 0x5BC
   float m_flDofNearCrisp; // 0x5BC - 0x5C0
   float m_flDofFarCrisp; // 0x5C0 - 0x5C4
   float m_flDofFarBlurry; // 0x5C4 - 0x5C8
   float m_flDofTiltToGround; // 0x5C8 - 0x5CC
   unsigned char pad_5CC[0x4]; // 0x5CC - 0x5D0
}; // size - 0x5D0


class C_DynamicProp /* "client" */ : public C_BreakableProp /* "client" */
{
public:
   bool m_bUseHitboxesForRenderBox; // 0x1028 - 0x1029
   bool m_bUseAnimGraph; // 0x1029 - 0x102A
   unsigned char pad_102A[0x6]; // 0x102A - 0x1030
   CEntityIOOutput m_pOutputAnimBegun; // 0x1030 - 0x1058
   CEntityIOOutput m_pOutputAnimOver; // 0x1058 - 0x1080
   CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1080 - 0x10A8
   CEntityIOOutput m_OnAnimReachedStart; // 0x10A8 - 0x10D0
   CEntityIOOutput m_OnAnimReachedEnd; // 0x10D0 - 0x10F8
   CUtlSymbolLarge m_iszIdleAnim; // 0x10F8 - 0x1100
   AnimLoopMode_t m_nIdleAnimLoopMode; // 0x1100 - 0x1104
   bool m_bRandomizeCycle; // 0x1104 - 0x1105
   bool m_bStartDisabled; // 0x1105 - 0x1106
   bool m_bFiredStartEndOutput; // 0x1106 - 0x1107
   bool m_bForceNpcExclude; // 0x1107 - 0x1108
   bool m_bCreateNonSolid; // 0x1108 - 0x1109
   bool m_bIsOverrideProp; // 0x1109 - 0x110A
   unsigned char pad_110A[0x2]; // 0x110A - 0x110C
   int32_t m_iInitialGlowState; // 0x110C - 0x1110
   int32_t m_nGlowRange; // 0x1110 - 0x1114
   int32_t m_nGlowRangeMin; // 0x1114 - 0x1118
   Color m_glowColor; // 0x1118 - 0x111C
   int32_t m_nGlowTeam; // 0x111C - 0x1120
   int32_t m_iCachedFrameCount; // 0x1120 - 0x1124
   Vector m_vecCachedRenderMins; // 0x1124 - 0x1130
   Vector m_vecCachedRenderMaxs; // 0x1130 - 0x113C
   unsigned char pad_113C[0x4]; // 0x113C - 0x1140
}; // size - 0x1140


class CBasePulseGraphInstance /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0xD8]; // 0x0 - 0xD8
}; // size - 0xD8


class C_BaseClientUIEntity /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_CD0[0x8]; // 0xCD0 - 0xCD8
   bool m_bEnabled; // 0xCD8 - 0xCD9
   unsigned char pad_CD9[0x7]; // 0xCD9 - 0xCE0
   CUtlSymbolLarge m_DialogXMLName; // 0xCE0 - 0xCE8
   CUtlSymbolLarge m_PanelClassName; // 0xCE8 - 0xCF0
   CUtlSymbolLarge m_PanelID; // 0xCF0 - 0xCF8
   unsigned char pad_CF8[0x8]; // 0xCF8 - 0xD00
}; // size - 0xD00


class C_CSGO_TeamIntroCharacterPosition /* "client" */ : public C_CSGO_TeamPreviewCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class CBodyComponent /* "server" */ : public CEntityComponent /* "server" */
{
public:
   CGameSceneNode* m_pSceneNode; // 0x8 - 0x10
   unsigned char pad_10[0x10]; // 0x10 - 0x20
   CNetworkVarChainer __m_pChainEntity; // 0x20 - 0x48
   unsigned char pad_48[0x8]; // 0x48 - 0x50
}; // size - 0x50


class CTriggerMultiple /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CEntityIOOutput m_OnTrigger; // 0x8B8 - 0x8E0
}; // size - 0x8E0


class CMarkupVolume /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   bool m_bEnabled; // 0x710 - 0x711
   unsigned char pad_711[0x7]; // 0x711 - 0x718
}; // size - 0x718


class CPlayerControllerComponent /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   unsigned char pad_30[0x10]; // 0x30 - 0x40
}; // size - 0x40


class CPulseCell_BaseYieldingInflow /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class C_CSPlayerPawn /* "client" */ : public C_CSPlayerPawnBase /* "client" */
{
public:
   CCSPlayer_BulletServices* m_pBulletServices; // 0x1718 - 0x1720
   CCSPlayer_HostageServices* m_pHostageServices; // 0x1720 - 0x1728
   CCSPlayer_BuyServices* m_pBuyServices; // 0x1728 - 0x1730
   CCSPlayer_GlowServices* m_pGlowServices; // 0x1730 - 0x1738
   CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1738 - 0x1740
   GameTime_t m_flHealthShotBoostExpirationTime; // 0x1740 - 0x1744
   GameTime_t m_flLastFiredWeaponTime; // 0x1744 - 0x1748
   bool m_bHasFemaleVoice; // 0x1748 - 0x1749
   unsigned char pad_1749[0x3]; // 0x1749 - 0x174C
   float m_flLandseconds; // 0x174C - 0x1750
   float m_flOldFallVelocity; // 0x1750 - 0x1754
   char m_szLastPlaceName[18]; // 0x1754 - 0x1766
   bool m_bPrevDefuser; // 0x1766 - 0x1767
   bool m_bPrevHelmet; // 0x1767 - 0x1768
   int32_t m_nPrevArmorVal; // 0x1768 - 0x176C
   int32_t m_nPrevGrenadeAmmoCount; // 0x176C - 0x1770
   uint32_t m_unPreviousWeaponHash; // 0x1770 - 0x1774
   uint32_t m_unWeaponHash; // 0x1774 - 0x1778
   bool m_bInBuyZone; // 0x1778 - 0x1779
   bool m_bPreviouslyInBuyZone; // 0x1779 - 0x177A
   unsigned char pad_177A[0x2]; // 0x177A - 0x177C
   QAngle m_aimPunchAngle; // 0x177C - 0x1788
   QAngle m_aimPunchAngleVel; // 0x1788 - 0x1794
   int32_t m_aimPunchTickBase; // 0x1794 - 0x1798
   float m_aimPunchTickFraction; // 0x1798 - 0x179C
   unsigned char pad_179C[0x4]; // 0x179C - 0x17A0
   CUtlVector< QAngle > m_aimPunchCache; // 0x17A0 - 0x17B8
   unsigned char pad_17B8[0x8]; // 0x17B8 - 0x17C0
   bool m_bInLanding; // 0x17C0 - 0x17C1
   unsigned char pad_17C1[0x3]; // 0x17C1 - 0x17C4
   float m_flLandingTime; // 0x17C4 - 0x17C8
   bool m_bInHostageRescueZone; // 0x17C8 - 0x17C9
   bool m_bInBombZone; // 0x17C9 - 0x17CA
   bool m_bIsBuyMenuOpen; // 0x17CA - 0x17CB
   unsigned char pad_17CB[0x1]; // 0x17CB - 0x17CC
   GameTime_t m_flTimeOfLastInjury; // 0x17CC - 0x17D0
   GameTime_t m_flNextSprayDecalTime; // 0x17D0 - 0x17D4
   unsigned char pad_17D4[0x114]; // 0x17D4 - 0x18E8
   int32_t m_iRetakesOffering; // 0x18E8 - 0x18EC
   int32_t m_iRetakesOfferingCard; // 0x18EC - 0x18F0
   bool m_bRetakesHasDefuseKit; // 0x18F0 - 0x18F1
   bool m_bRetakesMVPLastRound; // 0x18F1 - 0x18F2
   unsigned char pad_18F2[0x2]; // 0x18F2 - 0x18F4
   int32_t m_iRetakesMVPBoostItem; // 0x18F4 - 0x18F8
   loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x18F8 - 0x18FC
   unsigned char pad_18FC[0x1C]; // 0x18FC - 0x1918
   bool m_bNeedToReApplyGloves; // 0x1918 - 0x1919
   unsigned char pad_1919[0x7]; // 0x1919 - 0x1920
   C_EconItemView m_EconGloves; // 0x1920 - 0x1D68
   uint8_t m_nEconGlovesChanged; // 0x1D68 - 0x1D69
   bool m_bMustSyncRagdollState; // 0x1D69 - 0x1D6A
   unsigned char pad_1D6A[0x2]; // 0x1D6A - 0x1D6C
   int32_t m_nRagdollDamageBone; // 0x1D6C - 0x1D70
   Vector m_vRagdollDamageForce; // 0x1D70 - 0x1D7C
   Vector m_vRagdollDamagePosition; // 0x1D7C - 0x1D88
   char m_szRagdollDamageWeaponName[64]; // 0x1D88 - 0x1DC8
   bool m_bRagdollDamageHeadshot; // 0x1DC8 - 0x1DC9
   unsigned char pad_1DC9[0x3]; // 0x1DC9 - 0x1DCC
   Vector m_vRagdollServerOrigin; // 0x1DCC - 0x1DD8
   unsigned char pad_1DD8[0x608]; // 0x1DD8 - 0x23E0
   bool m_bLastHeadBoneTransformIsValid; // 0x23E0 - 0x23E1
   unsigned char pad_23E1[0x3]; // 0x23E1 - 0x23E4
   GameTime_t m_lastLandTime; // 0x23E4 - 0x23E8
   bool m_bOnGroundLastTick; // 0x23E8 - 0x23E9
   unsigned char pad_23E9[0x1B]; // 0x23E9 - 0x2404
   QAngle m_qDeathEyeAngles; // 0x2404 - 0x2410
   bool m_bSkipOneHeadConstraintUpdate; // 0x2410 - 0x2411
   unsigned char pad_2411[0x7]; // 0x2411 - 0x2418
}; // size - 0x2418


class C_GameRules /* "client" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class SpawnPoint /* "server" */ : public CServerOnlyPointEntity /* "server" */
{
public:
   int32_t m_iPriority; // 0x4C0 - 0x4C4
   bool m_bEnabled; // 0x4C4 - 0x4C5
   unsigned char pad_4C5[0x3]; // 0x4C5 - 0x4C8
   int32_t m_nType; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4]; // 0x4CC - 0x4D0
}; // size - 0x4D0


class CLightEntity /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CLightComponent* m_CLightComponent; // 0x710 - 0x718
}; // size - 0x718


class CParticleFunctionEmitter /* "particles" */ : public CParticleFunction /* "particles" */
{
public:
   int32_t m_nEmitterIndex; // 0x1B8 - 0x1BC
   unsigned char pad_1BC[0x4]; // 0x1BC - 0x1C0
}; // size - 0x1C0


class CSprite /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x710 - 0x718
   CHandle< CBaseEntity > m_hAttachedToEntity; // 0x718 - 0x71C
   AttachmentHandle_t m_nAttachment; // 0x71C - 0x71D
   unsigned char pad_71D[0x3]; // 0x71D - 0x720
   float m_flSpriteFramerate; // 0x720 - 0x724
   float m_flFrame; // 0x724 - 0x728
   GameTime_t m_flDieTime; // 0x728 - 0x72C
   unsigned char pad_72C[0xC]; // 0x72C - 0x738
   uint32_t m_nBrightness; // 0x738 - 0x73C
   float m_flBrightnessDuration; // 0x73C - 0x740
   float m_flSpriteScale; // 0x740 - 0x744
   float m_flScaleDuration; // 0x744 - 0x748
   bool m_bWorldSpaceScale; // 0x748 - 0x749
   unsigned char pad_749[0x3]; // 0x749 - 0x74C
   float m_flGlowProxySize; // 0x74C - 0x750
   float m_flHDRColorScale; // 0x750 - 0x754
   GameTime_t m_flLastTime; // 0x754 - 0x758
   float m_flMaxFrame; // 0x758 - 0x75C
   float m_flStartScale; // 0x75C - 0x760
   float m_flDestScale; // 0x760 - 0x764
   GameTime_t m_flScaleTimeStart; // 0x764 - 0x768
   int32_t m_nStartBrightness; // 0x768 - 0x76C
   int32_t m_nDestBrightness; // 0x76C - 0x770
   GameTime_t m_flBrightnessTimeStart; // 0x770 - 0x774
   int32_t m_nSpriteWidth; // 0x774 - 0x778
   int32_t m_nSpriteHeight; // 0x778 - 0x77C
   unsigned char pad_77C[0x4]; // 0x77C - 0x780
}; // size - 0x780


class C_BaseCSGrenadeProjectile /* "client" */ : public C_BaseGrenade /* "client" */
{
public:
   Vector m_vInitialPosition; // 0x10C0 - 0x10CC
   Vector m_vInitialVelocity; // 0x10CC - 0x10D8
   int32_t m_nBounces; // 0x10D8 - 0x10DC
   unsigned char pad_10DC[0x4]; // 0x10DC - 0x10E0
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0x10E0 - 0x10E8
   int32_t m_nExplodeEffectTickBegin; // 0x10E8 - 0x10EC
   Vector m_vecExplodeEffectOrigin; // 0x10EC - 0x10F8
   GameTime_t m_flSpawnTime; // 0x10F8 - 0x10FC
   Vector vecLastTrailLinePos; // 0x10FC - 0x1108
   GameTime_t flNextTrailLineTime; // 0x1108 - 0x110C
   bool m_bExplodeEffectBegan; // 0x110C - 0x110D
   bool m_bCanCreateGrenadeTrail; // 0x110D - 0x110E
   unsigned char pad_110E[0x2]; // 0x110E - 0x1110
   ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x1110 - 0x1114
   unsigned char pad_1114[0x4]; // 0x1114 - 0x1118
   CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // 0x1118 - 0x1120
   CUtlVector< Vector > m_arrTrajectoryTrailPoints; // 0x1120 - 0x1138
   CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // 0x1138 - 0x1150
   float m_flTrajectoryTrailEffectCreationTime; // 0x1150 - 0x1154
   unsigned char pad_1154[0x4]; // 0x1154 - 0x1158
}; // size - 0x1158


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


class CBasePlayerPawn /* "server" */ : public CBaseCombatCharacter /* "server" */
{
public:
   CPlayer_WeaponServices* m_pWeaponServices; // 0xA10 - 0xA18
   CPlayer_ItemServices* m_pItemServices; // 0xA18 - 0xA20
   CPlayer_AutoaimServices* m_pAutoaimServices; // 0xA20 - 0xA28
   CPlayer_ObserverServices* m_pObserverServices; // 0xA28 - 0xA30
   CPlayer_WaterServices* m_pWaterServices; // 0xA30 - 0xA38
   CPlayer_UseServices* m_pUseServices; // 0xA38 - 0xA40
   CPlayer_FlashlightServices* m_pFlashlightServices; // 0xA40 - 0xA48
   CPlayer_CameraServices* m_pCameraServices; // 0xA48 - 0xA50
   CPlayer_MovementServices* m_pMovementServices; // 0xA50 - 0xA58
   unsigned char pad_A58[0x8]; // 0xA58 - 0xA60
   CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xA60 - 0xAB0
   uint32_t m_nHighestGeneratedServerViewAngleChangeIndex; // 0xAB0 - 0xAB4
   QAngle v_angle; // 0xAB4 - 0xAC0
   QAngle v_anglePrevious; // 0xAC0 - 0xACC
   uint32_t m_iHideHUD; // 0xACC - 0xAD0
   sky3dparams_t m_skybox3d; // 0xAD0 - 0xB60
   GameTime_t m_fTimeLastHurt; // 0xB60 - 0xB64
   GameTime_t m_flDeathTime; // 0xB64 - 0xB68
   GameTime_t m_fNextSuicideTime; // 0xB68 - 0xB6C
   bool m_fInitHUD; // 0xB6C - 0xB6D
   unsigned char pad_B6D[0x3]; // 0xB6D - 0xB70
   CAI_Expresser* m_pExpresser; // 0xB70 - 0xB78
   CHandle< CBasePlayerController > m_hController; // 0xB78 - 0xB7C
   unsigned char pad_B7C[0x4]; // 0xB7C - 0xB80
   float m_fHltvReplayDelay; // 0xB80 - 0xB84
   float m_fHltvReplayEnd; // 0xB84 - 0xB88
   CEntityIndex m_iHltvReplayEntity; // 0xB88 - 0xB8C
   unsigned char pad_B8C[0x4]; // 0xB8C - 0xB90
   CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData; // 0xB90 - 0xBA8
}; // size - 0xBA8


class CBaseRendererSource2 /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x200 - 0x358
   CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x358 - 0x4B0
   CParticleCollectionRendererFloatInput m_flRollScale; // 0x4B0 - 0x608
   ParticleAttributeIndex_t m_nAlpha2Field; // 0x608 - 0x60C
   unsigned char pad_60C[0x4]; // 0x60C - 0x610
   CParticleCollectionRendererVecInput m_vecColorScale; // 0x610 - 0xC68
   ParticleColorBlendType_t m_nColorBlendType; // 0xC68 - 0xC6C
   SpriteCardShaderType_t m_nShaderType; // 0xC6C - 0xC70
   CUtlString m_strShaderOverride; // 0xC70 - 0xC78
   CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0xC78 - 0xDD0
   CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0xDD0 - 0xF28
   float m_flBumpStrength; // 0xF28 - 0xF2C
   ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xF2C - 0xF30
   CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0xF30 - 0xF48
   float m_flAnimationRate; // 0xF48 - 0xF4C
   AnimationType_t m_nAnimationType; // 0xF4C - 0xF50
   bool m_bAnimateInFPS; // 0xF50 - 0xF51
   unsigned char pad_F51[0x7]; // 0xF51 - 0xF58
   CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0xF58 - 0x10B0
   CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x10B0 - 0x1208
   CParticleCollectionRendererFloatInput m_flDiffuseClamp; // 0x1208 - 0x1360
   int32_t m_nLightingControlPoint; // 0x1360 - 0x1364
   ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x1364 - 0x1368
   ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x1368 - 0x136C
   bool m_bGammaCorrectVertexColors; // 0x136C - 0x136D
   bool m_bSaturateColorPreAlphaBlend; // 0x136D - 0x136E
   unsigned char pad_136E[0x2]; // 0x136E - 0x1370
   CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x1370 - 0x14C8
   CParticleCollectionRendererFloatInput m_flDesaturation; // 0x14C8 - 0x1620
   CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x1620 - 0x1778
   int32_t m_nHSVShiftControlPoint; // 0x1778 - 0x177C
   ParticleFogType_t m_nFogType; // 0x177C - 0x1780
   CParticleCollectionRendererFloatInput m_flFogAmount; // 0x1780 - 0x18D8
   bool m_bTintByFOW; // 0x18D8 - 0x18D9
   bool m_bTintByGlobalLight; // 0x18D9 - 0x18DA
   unsigned char pad_18DA[0x2]; // 0x18DA - 0x18DC
   SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x18DC - 0x18E0
   SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x18E0 - 0x18E4
   ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x18E4 - 0x18E8
   CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x18E8 - 0x1A40
   CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x1A40 - 0x1B98
   CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x1B98 - 0x1CF0
   bool m_bRefract; // 0x1CF0 - 0x1CF1
   bool m_bRefractSolid; // 0x1CF1 - 0x1CF2
   unsigned char pad_1CF2[0x6]; // 0x1CF2 - 0x1CF8
   CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x1CF8 - 0x1E50
   int32_t m_nRefractBlurRadius; // 0x1E50 - 0x1E54
   BlurFilterType_t m_nRefractBlurType; // 0x1E54 - 0x1E58
   bool m_bOnlyRenderInEffectsBloomPass; // 0x1E58 - 0x1E59
   bool m_bOnlyRenderInEffectsWaterPass; // 0x1E59 - 0x1E5A
   bool m_bUseMixedResolutionRendering; // 0x1E5A - 0x1E5B
   bool m_bOnlyRenderInEffecsGameOverlay; // 0x1E5B - 0x1E5C
   char m_stencilTestID[128]; // 0x1E5C - 0x1EDC
   bool m_bStencilTestExclude; // 0x1EDC - 0x1EDD
   char m_stencilWriteID[128]; // 0x1EDD - 0x1F5D
   bool m_bWriteStencilOnDepthPass; // 0x1F5D - 0x1F5E
   bool m_bWriteStencilOnDepthFail; // 0x1F5E - 0x1F5F
   bool m_bReverseZBuffering; // 0x1F5F - 0x1F60
   bool m_bDisableZBuffering; // 0x1F60 - 0x1F61
   unsigned char pad_1F61[0x3]; // 0x1F61 - 0x1F64
   ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1F64 - 0x1F68
   CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x1F68 - 0x20C0
   CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x20C0 - 0x2218
   CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x2218 - 0x2370
   CParticleCollectionRendererFloatInput m_flDepthBias; // 0x2370 - 0x24C8
   ParticleSortingChoiceList_t m_nSortMethod; // 0x24C8 - 0x24CC
   bool m_bBlendFramesSeq0; // 0x24CC - 0x24CD
   bool m_bMaxLuminanceBlendingSequence0; // 0x24CD - 0x24CE
   unsigned char pad_24CE[0x242]; // 0x24CE - 0x2710
}; // size - 0x2710


class CEntityComponent /* "entity2" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class CFuncPlat /* "server" */ : public CBasePlatTrain /* "server" */
{
public:
   CUtlSymbolLarge m_sNoise; // 0x7B8 - 0x7C0
}; // size - 0x7C0


class CGameRules /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   char m_szQuestName[128]; // 0x8 - 0x88
   int32_t m_nQuestPhase; // 0x88 - 0x8C
   unsigned char pad_8C[0x4]; // 0x8C - 0x90
}; // size - 0x90


class CRulePointEntity /* "server" */ : public CRuleEntity /* "server" */
{
public:
   int32_t m_Score; // 0x718 - 0x71C
   unsigned char pad_71C[0x4]; // 0x71C - 0x720
}; // size - 0x720


class RnShapeDesc_t /* "physicslib" */
{
public:
   uint32_t m_nCollisionAttributeIndex; // 0x0 - 0x4
   uint32_t m_nSurfacePropertyIndex; // 0x4 - 0x8
   CUtlString m_UserFriendlyName; // 0x8 - 0x10
}; // size - 0x10


class CAnimGraphControllerBase /* "server" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
}; // size - 0x18


class CBaseClientUIEntity /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   bool m_bEnabled; // 0x710 - 0x711
   unsigned char pad_711[0x7]; // 0x711 - 0x718
   CUtlSymbolLarge m_DialogXMLName; // 0x718 - 0x720
   CUtlSymbolLarge m_PanelClassName; // 0x720 - 0x728
   CUtlSymbolLarge m_PanelID; // 0x728 - 0x730
   CEntityIOOutput m_CustomOutput0; // 0x730 - 0x758
   CEntityIOOutput m_CustomOutput1; // 0x758 - 0x780
   CEntityIOOutput m_CustomOutput2; // 0x780 - 0x7A8
   CEntityIOOutput m_CustomOutput3; // 0x7A8 - 0x7D0
   CEntityIOOutput m_CustomOutput4; // 0x7D0 - 0x7F8
   CEntityIOOutput m_CustomOutput5; // 0x7F8 - 0x820
   CEntityIOOutput m_CustomOutput6; // 0x820 - 0x848
   CEntityIOOutput m_CustomOutput7; // 0x848 - 0x870
   CEntityIOOutput m_CustomOutput8; // 0x870 - 0x898
   CEntityIOOutput m_CustomOutput9; // 0x898 - 0x8C0
}; // size - 0x8C0


class CCSGameModeRules /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   unsigned char pad_30[0x8]; // 0x30 - 0x38
}; // size - 0x38


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


class CHostageExpresserShim /* "server" */ : public CBaseCombatCharacter /* "server" */
{
public:
   CAI_Expresser* m_pExpresser; // 0xA10 - 0xA18
}; // size - 0xA18


class CMarkupVolumeTagged /* "server" */ : public CMarkupVolume /* "server" */
{
public:
   unsigned char pad_718[0x30]; // 0x718 - 0x748
   bool m_bIsGroup; // 0x748 - 0x749
   bool m_bGroupByPrefab; // 0x749 - 0x74A
   bool m_bGroupByVolume; // 0x74A - 0x74B
   bool m_bGroupOtherGroups; // 0x74B - 0x74C
   bool m_bIsInGroup; // 0x74C - 0x74D
   unsigned char pad_74D[0x3]; // 0x74D - 0x750
}; // size - 0x750


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


class CPhysicsProp /* "server" */ : public CBreakableProp /* "server" */
{
public:
   unsigned char pad_A60[0x8]; // 0xA60 - 0xA68
   CEntityIOOutput m_MotionEnabled; // 0xA68 - 0xA90
   CEntityIOOutput m_OnAwakened; // 0xA90 - 0xAB8
   CEntityIOOutput m_OnAwake; // 0xAB8 - 0xAE0
   CEntityIOOutput m_OnAsleep; // 0xAE0 - 0xB08
   CEntityIOOutput m_OnPlayerUse; // 0xB08 - 0xB30
   CEntityIOOutput m_OnPlayerPickup; // 0xB30 - 0xB58
   CEntityIOOutput m_OnOutOfWorld; // 0xB58 - 0xB80
   float m_massScale; // 0xB80 - 0xB84
   float m_inertiaScale; // 0xB84 - 0xB88
   float m_buoyancyScale; // 0xB88 - 0xB8C
   int32_t m_damageType; // 0xB8C - 0xB90
   int32_t m_damageToEnableMotion; // 0xB90 - 0xB94
   float m_flForceToEnableMotion; // 0xB94 - 0xB98
   bool m_bThrownByPlayer; // 0xB98 - 0xB99
   bool m_bDroppedByPlayer; // 0xB99 - 0xB9A
   bool m_bTouchedByPlayer; // 0xB9A - 0xB9B
   bool m_bFirstCollisionAfterLaunch; // 0xB9B - 0xB9C
   int32_t m_iExploitableByPlayer; // 0xB9C - 0xBA0
   bool m_bHasBeenAwakened; // 0xBA0 - 0xBA1
   bool m_bIsOverrideProp; // 0xBA1 - 0xBA2
   unsigned char pad_BA2[0x2]; // 0xBA2 - 0xBA4
   GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xBA4 - 0xBA8
   int32_t m_iInitialGlowState; // 0xBA8 - 0xBAC
   int32_t m_nGlowRange; // 0xBAC - 0xBB0
   int32_t m_nGlowRangeMin; // 0xBB0 - 0xBB4
   Color m_glowColor; // 0xBB4 - 0xBB8
   bool m_bForceNavIgnore; // 0xBB8 - 0xBB9
   bool m_bNoNavmeshBlocker; // 0xBB9 - 0xBBA
   bool m_bForceNpcExclude; // 0xBBA - 0xBBB
   bool m_bShouldAutoConvertBackFromDebris; // 0xBBB - 0xBBC
   bool m_bMuteImpactEffects; // 0xBBC - 0xBBD
   unsigned char pad_BBD[0x7]; // 0xBBD - 0xBC4
   bool m_bAcceptDamageFromHeldObjects; // 0xBC4 - 0xBC5
   bool m_bEnableUseOutput; // 0xBC5 - 0xBC6
   bool m_bAwake; // 0xBC6 - 0xBC7
   unsigned char pad_BC7[0x1]; // 0xBC7 - 0xBC8
   int32_t m_nCollisionGroupOverride; // 0xBC8 - 0xBCC
   unsigned char pad_BCC[0x4]; // 0xBCC - 0xBD0
}; // size - 0xBD0


class CStopwatchBase /* "server" */ : public CSimpleSimTimer /* "server" */
{
public:
   bool m_fIsRunning; // 0x8 - 0x9
   unsigned char pad_9[0x3]; // 0x9 - 0xC
}; // size - 0xC


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
   unsigned char pad_1E8[0x8]; // 0x1E8 - 0x1F0
}; // size - 0x1F0


class CBodyComponentSkeletonInstance /* "server" */ : public CBodyComponent /* "server" */
{
public:
   CSkeletonInstance m_skeletonInstance; // 0x50 - 0x430
   CNetworkVarChainer __m_pChainEntity; // 0x430 - 0x458
   unsigned char pad_458[0x8]; // 0x458 - 0x460
}; // size - 0x460


class CModelConfigElement /* "modellib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlString m_ElementName; // 0x8 - 0x10
   CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10 - 0x28
   unsigned char pad_28[0x20]; // 0x28 - 0x48
}; // size - 0x48


class CModelPointEntity /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   unsigned char pad_0[0x710]; // 0x0 - 0x710
}; // size - 0x710


class CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CUtlVector< float32 > m_means; // 0x18 - 0x30
   CUtlVector< float32 > m_standardDeviations; // 0x30 - 0x48
   float m_flWeight; // 0x48 - 0x4C
   int32_t m_nDimensionStartIndex; // 0x4C - 0x50
}; // size - 0x50


class CPulseCell_BaseValue /* "pulse_runtime_lib" */ : public CPulseCell_Base /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x48]; // 0x0 - 0x48
}; // size - 0x48


class C_BaseViewModel /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_ED8[0x8]; // 0xED8 - 0xEE0
   Vector m_vecLastFacing; // 0xEE0 - 0xEEC
   uint32_t m_nViewModelIndex; // 0xEEC - 0xEF0
   uint32_t m_nAnimationParity; // 0xEF0 - 0xEF4
   float m_flAnimationStartTime; // 0xEF4 - 0xEF8
   CHandle< C_BasePlayerWeapon > m_hWeapon; // 0xEF8 - 0xEFC
   unsigned char pad_EFC[0x4]; // 0xEFC - 0xF00
   CUtlSymbolLarge m_sVMName; // 0xF00 - 0xF08
   CUtlSymbolLarge m_sAnimationPrefix; // 0xF08 - 0xF10
   CHandle< C_ViewmodelWeapon > m_hWeaponModel; // 0xF10 - 0xF14
   AttachmentHandle_t m_iCameraAttachment; // 0xF14 - 0xF15
   unsigned char pad_F15[0x3]; // 0xF15 - 0xF18
   QAngle m_vecLastCameraAngles; // 0xF18 - 0xF24
   float m_previousElapsedDuration; // 0xF24 - 0xF28
   float m_previousCycle; // 0xF28 - 0xF2C
   int32_t m_nOldAnimationParity; // 0xF2C - 0xF30
   HSequence m_hOldLayerSequence; // 0xF30 - 0xF34
   int32_t m_oldLayer; // 0xF34 - 0xF38
   float m_oldLayerStartTime; // 0xF38 - 0xF3C
   CHandle< C_BaseEntity > m_hControlPanel; // 0xF3C - 0xF40
}; // size - 0xF40


class C_CSGO_PreviewPlayer /* "client" */ : public C_CSPlayerPawn /* "client" */
{
public:
   CUtlString m_animgraph; // 0x2418 - 0x2420
   CGlobalSymbol m_animgraphCharacterModeString; // 0x2420 - 0x2428
   float m_flInitialModelScale; // 0x2428 - 0x242C
   unsigned char pad_242C[0x84]; // 0x242C - 0x24B0
}; // size - 0x24B0


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
   unsigned char pad_205[0xB]; // 0x205 - 0x210
}; // size - 0x210


class C_INIT_RemapParticleCountToNamedModelElementScalar /* "particles" */ : public C_INIT_RemapParticleCountToScalar /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1F0 - 0x1F8
   CUtlString m_outputMinName; // 0x1F8 - 0x200
   CUtlString m_outputMaxName; // 0x200 - 0x208
   bool m_bModelFromRenderer; // 0x208 - 0x209
   unsigned char pad_209[0x7]; // 0x209 - 0x210
}; // size - 0x210


class C_ModelPointEntity /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class ISkeletonAnimationController /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


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
   unsigned char pad_4E[0x2]; // 0x4E - 0x50
   int32_t m_nLastSpokenPriority; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
   CBaseFlex* m_pOuter; // 0x58 - 0x60
}; // size - 0x60


class CAnimEventListenerBase /* "server" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
}; // size - 0x20


class CBarnLight /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   bool m_bEnabled; // 0x710 - 0x711
   unsigned char pad_711[0x3]; // 0x711 - 0x714
   int32_t m_nColorMode; // 0x714 - 0x718
   Color m_Color; // 0x718 - 0x71C
   float m_flColorTemperature; // 0x71C - 0x720
   float m_flBrightness; // 0x720 - 0x724
   float m_flBrightnessScale; // 0x724 - 0x728
   int32_t m_nDirectLight; // 0x728 - 0x72C
   int32_t m_nBakedShadowIndex; // 0x72C - 0x730
   int32_t m_nLuminaireShape; // 0x730 - 0x734
   float m_flLuminaireSize; // 0x734 - 0x738
   float m_flLuminaireAnisotropy; // 0x738 - 0x73C
   unsigned char pad_73C[0x4]; // 0x73C - 0x740
   CUtlString m_LightStyleString; // 0x740 - 0x748
   GameTime_t m_flLightStyleStartTime; // 0x748 - 0x74C
   unsigned char pad_74C[0x4]; // 0x74C - 0x750
   CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x750 - 0x768
   CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x768 - 0x780
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // 0x780 - 0x798
   CEntityIOOutput m_StyleEvent[4]; // 0x798 - 0x838
   unsigned char pad_838[0x20]; // 0x838 - 0x858
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x858 - 0x860
   float m_flShape; // 0x860 - 0x864
   float m_flSoftX; // 0x864 - 0x868
   float m_flSoftY; // 0x868 - 0x86C
   float m_flSkirt; // 0x86C - 0x870
   float m_flSkirtNear; // 0x870 - 0x874
   Vector m_vSizeParams; // 0x874 - 0x880
   float m_flRange; // 0x880 - 0x884
   Vector m_vShear; // 0x884 - 0x890
   int32_t m_nBakeSpecularToCubemaps; // 0x890 - 0x894
   Vector m_vBakeSpecularToCubemapsSize; // 0x894 - 0x8A0
   int32_t m_nCastShadows; // 0x8A0 - 0x8A4
   int32_t m_nShadowMapSize; // 0x8A4 - 0x8A8
   int32_t m_nShadowPriority; // 0x8A8 - 0x8AC
   bool m_bContactShadow; // 0x8AC - 0x8AD
   unsigned char pad_8AD[0x3]; // 0x8AD - 0x8B0
   int32_t m_nBounceLight; // 0x8B0 - 0x8B4
   float m_flBounceScale; // 0x8B4 - 0x8B8
   float m_flMinRoughness; // 0x8B8 - 0x8BC
   Vector m_vAlternateColor; // 0x8BC - 0x8C8
   float m_fAlternateColorBrightness; // 0x8C8 - 0x8CC
   int32_t m_nFog; // 0x8CC - 0x8D0
   float m_flFogStrength; // 0x8D0 - 0x8D4
   int32_t m_nFogShadows; // 0x8D4 - 0x8D8
   float m_flFogScale; // 0x8D8 - 0x8DC
   float m_flFadeSizeStart; // 0x8DC - 0x8E0
   float m_flFadeSizeEnd; // 0x8E0 - 0x8E4
   float m_flShadowFadeSizeStart; // 0x8E4 - 0x8E8
   float m_flShadowFadeSizeEnd; // 0x8E8 - 0x8EC
   bool m_bPrecomputedFieldsValid; // 0x8EC - 0x8ED
   unsigned char pad_8ED[0x3]; // 0x8ED - 0x8F0
   Vector m_vPrecomputedBoundsMins; // 0x8F0 - 0x8FC
   Vector m_vPrecomputedBoundsMaxs; // 0x8FC - 0x908
   Vector m_vPrecomputedOBBOrigin; // 0x908 - 0x914
   QAngle m_vPrecomputedOBBAngles; // 0x914 - 0x920
   Vector m_vPrecomputedOBBExtent; // 0x920 - 0x92C
   bool m_bPvsModifyEntity; // 0x92C - 0x92D
   unsigned char pad_92D[0xB]; // 0x92D - 0x938
}; // size - 0x938


class CBaseButton /* "server" */ : public CBaseToggle /* "server" */
{
public:
   QAngle m_angMoveEntitySpace; // 0x790 - 0x79C
   bool m_fStayPushed; // 0x79C - 0x79D
   bool m_fRotating; // 0x79D - 0x79E
   unsigned char pad_79E[0x2]; // 0x79E - 0x7A0
   locksound_t m_ls; // 0x7A0 - 0x7C0
   CUtlSymbolLarge m_sUseSound; // 0x7C0 - 0x7C8
   CUtlSymbolLarge m_sLockedSound; // 0x7C8 - 0x7D0
   CUtlSymbolLarge m_sUnlockedSound; // 0x7D0 - 0x7D8
   bool m_bLocked; // 0x7D8 - 0x7D9
   bool m_bDisabled; // 0x7D9 - 0x7DA
   unsigned char pad_7DA[0x2]; // 0x7DA - 0x7DC
   GameTime_t m_flUseLockedTime; // 0x7DC - 0x7E0
   bool m_bSolidBsp; // 0x7E0 - 0x7E1
   unsigned char pad_7E1[0x7]; // 0x7E1 - 0x7E8
   CEntityIOOutput m_OnDamaged; // 0x7E8 - 0x810
   CEntityIOOutput m_OnPressed; // 0x810 - 0x838
   CEntityIOOutput m_OnUseLocked; // 0x838 - 0x860
   CEntityIOOutput m_OnIn; // 0x860 - 0x888
   CEntityIOOutput m_OnOut; // 0x888 - 0x8B0
   int32_t m_nState; // 0x8B0 - 0x8B4
   CEntityHandle m_hConstraint; // 0x8B4 - 0x8B8
   CEntityHandle m_hConstraintParent; // 0x8B8 - 0x8BC
   bool m_bForceNpcExclude; // 0x8BC - 0x8BD
   unsigned char pad_8BD[0x3]; // 0x8BD - 0x8C0
   CUtlSymbolLarge m_sGlowEntity; // 0x8C0 - 0x8C8
   CHandle< CBaseModelEntity > m_glowEntity; // 0x8C8 - 0x8CC
   bool m_usable; // 0x8CC - 0x8CD
   unsigned char pad_8CD[0x3]; // 0x8CD - 0x8D0
   CUtlSymbolLarge m_szDisplayText; // 0x8D0 - 0x8D8
}; // size - 0x8D8


class CBasePropDoor /* "server" */ : public CDynamicProp /* "server" */
{
public:
   unsigned char pad_B60[0x10]; // 0xB60 - 0xB70
   float m_flAutoReturnDelay; // 0xB70 - 0xB74
   unsigned char pad_B74[0x4]; // 0xB74 - 0xB78
   CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xB78 - 0xB90
   int32_t m_nHardwareType; // 0xB90 - 0xB94
   bool m_bNeedsHardware; // 0xB94 - 0xB95
   unsigned char pad_B95[0x3]; // 0xB95 - 0xB98
   DoorState_t m_eDoorState; // 0xB98 - 0xB9C
   bool m_bLocked; // 0xB9C - 0xB9D
   unsigned char pad_B9D[0x3]; // 0xB9D - 0xBA0
   Vector m_closedPosition; // 0xBA0 - 0xBAC
   QAngle m_closedAngles; // 0xBAC - 0xBB8
   CHandle< CBaseEntity > m_hBlocker; // 0xBB8 - 0xBBC
   bool m_bFirstBlocked; // 0xBBC - 0xBBD
   unsigned char pad_BBD[0x3]; // 0xBBD - 0xBC0
   locksound_t m_ls; // 0xBC0 - 0xBE0
   bool m_bForceClosed; // 0xBE0 - 0xBE1
   unsigned char pad_BE1[0x3]; // 0xBE1 - 0xBE4
   Vector m_vecLatchWorldPosition; // 0xBE4 - 0xBF0
   CHandle< CBaseEntity > m_hActivator; // 0xBF0 - 0xBF4
   unsigned char pad_BF4[0xC]; // 0xBF4 - 0xC00
   CUtlSymbolLarge m_SoundMoving; // 0xC00 - 0xC08
   CUtlSymbolLarge m_SoundOpen; // 0xC08 - 0xC10
   CUtlSymbolLarge m_SoundClose; // 0xC10 - 0xC18
   CUtlSymbolLarge m_SoundLock; // 0xC18 - 0xC20
   CUtlSymbolLarge m_SoundUnlock; // 0xC20 - 0xC28
   CUtlSymbolLarge m_SoundLatch; // 0xC28 - 0xC30
   CUtlSymbolLarge m_SoundPound; // 0xC30 - 0xC38
   CUtlSymbolLarge m_SoundJiggle; // 0xC38 - 0xC40
   CUtlSymbolLarge m_SoundLockedAnim; // 0xC40 - 0xC48
   int32_t m_numCloseAttempts; // 0xC48 - 0xC4C
   CUtlStringToken m_nPhysicsMaterial; // 0xC4C - 0xC50
   CUtlSymbolLarge m_SlaveName; // 0xC50 - 0xC58
   CHandle< CBasePropDoor > m_hMaster; // 0xC58 - 0xC5C
   unsigned char pad_C5C[0x4]; // 0xC5C - 0xC60
   CEntityIOOutput m_OnBlockedClosing; // 0xC60 - 0xC88
   CEntityIOOutput m_OnBlockedOpening; // 0xC88 - 0xCB0
   CEntityIOOutput m_OnUnblockedClosing; // 0xCB0 - 0xCD8
   CEntityIOOutput m_OnUnblockedOpening; // 0xCD8 - 0xD00
   CEntityIOOutput m_OnFullyClosed; // 0xD00 - 0xD28
   CEntityIOOutput m_OnFullyOpen; // 0xD28 - 0xD50
   CEntityIOOutput m_OnClose; // 0xD50 - 0xD78
   CEntityIOOutput m_OnOpen; // 0xD78 - 0xDA0
   CEntityIOOutput m_OnLockedUse; // 0xDA0 - 0xDC8
   CEntityIOOutput m_OnAjarOpen; // 0xDC8 - 0xDF0
}; // size - 0xDF0


class CBodyComponent /* "client" */ : public CEntityComponent /* "client" */
{
public:
   CGameSceneNode* m_pSceneNode; // 0x8 - 0x10
   unsigned char pad_10[0x10]; // 0x10 - 0x20
   CNetworkVarChainer __m_pChainEntity; // 0x20 - 0x48
   unsigned char pad_48[0x8]; // 0x48 - 0x50
}; // size - 0x50


class CBreakable /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   unsigned char pad_710[0x10]; // 0x710 - 0x720
   Materials m_Material; // 0x720 - 0x724
   CHandle< CBaseEntity > m_hBreaker; // 0x724 - 0x728
   Explosions m_Explosion; // 0x728 - 0x72C
   unsigned char pad_72C[0x4]; // 0x72C - 0x730
   CUtlSymbolLarge m_iszSpawnObject; // 0x730 - 0x738
   float m_flPressureDelay; // 0x738 - 0x73C
   int32_t m_iMinHealthDmg; // 0x73C - 0x740
   CUtlSymbolLarge m_iszPropData; // 0x740 - 0x748
   float m_impactEnergyScale; // 0x748 - 0x74C
   EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x74C - 0x750
   CEntityIOOutput m_OnBreak; // 0x750 - 0x778
   CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x778 - 0x7A0
   float m_flDmgModBullet; // 0x7A0 - 0x7A4
   float m_flDmgModClub; // 0x7A4 - 0x7A8
   float m_flDmgModExplosive; // 0x7A8 - 0x7AC
   float m_flDmgModFire; // 0x7AC - 0x7B0
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x7B0 - 0x7B8
   CUtlSymbolLarge m_iszBasePropData; // 0x7B8 - 0x7C0
   int32_t m_iInteractions; // 0x7C0 - 0x7C4
   PerformanceMode_t m_PerformanceMode; // 0x7C4 - 0x7C8
   CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x7C8 - 0x7CC
   GameTime_t m_flLastPhysicsInfluenceTime; // 0x7CC - 0x7D0
}; // size - 0x7D0


class CBtNodeDecorator /* "server" */ : public CBtNode /* "server" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CCSGO_WingmanIntroCharacterPosition /* "client" */ : public C_CSGO_TeamIntroCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class CCSGameModeScript /* "client" */ : public CBasePulseGraphInstance /* "client" */
{
public:
   unsigned char pad_0[0xD8]; // 0x0 - 0xD8
}; // size - 0xD8


class CCSPlayerPawnBase /* "server" */ : public CBasePlayerPawn /* "server" */
{
public:
   unsigned char pad_BA8[0x18]; // 0xBA8 - 0xBC0
   CTouchExpansionComponent m_CTouchExpansionComponent; // 0xBC0 - 0xC10
   CCSPlayer_PingServices* m_pPingServices; // 0xC10 - 0xC18
   CPlayer_ViewModelServices* m_pViewModelServices; // 0xC18 - 0xC20
   uint32_t m_iDisplayHistoryBits; // 0xC20 - 0xC24
   float m_flLastAttackedTeammate; // 0xC24 - 0xC28
   CHandle< CCSPlayerController > m_hOriginalController; // 0xC28 - 0xC2C
   GameTime_t m_blindUntilTime; // 0xC2C - 0xC30
   GameTime_t m_blindStartTime; // 0xC30 - 0xC34
   GameTime_t m_allowAutoFollowTime; // 0xC34 - 0xC38
   EntitySpottedState_t m_entitySpottedState; // 0xC38 - 0xC50
   int32_t m_nSpotRules; // 0xC50 - 0xC54
   CSPlayerState m_iPlayerState; // 0xC54 - 0xC58
   unsigned char pad_C58[0x8]; // 0xC58 - 0xC60
   CountdownTimer m_chickenIdleSoundTimer; // 0xC60 - 0xC78
   CountdownTimer m_chickenJumpSoundTimer; // 0xC78 - 0xC90
   unsigned char pad_C90[0xA0]; // 0xC90 - 0xD30
   Vector m_vecLastBookmarkedPosition; // 0xD30 - 0xD3C
   float m_flLastDistanceTraveledNotice; // 0xD3C - 0xD40
   float m_flAccumulatedDistanceTraveled; // 0xD40 - 0xD44
   float m_flLastFriendlyFireDamageReductionRatio; // 0xD44 - 0xD48
   bool m_bRespawning; // 0xD48 - 0xD49
   unsigned char pad_D49[0x3]; // 0xD49 - 0xD4C
   int32_t m_nLastPickupPriority; // 0xD4C - 0xD50
   float m_flLastPickupPriorityTime; // 0xD50 - 0xD54
   bool m_bIsScoped; // 0xD54 - 0xD55
   bool m_bIsWalking; // 0xD55 - 0xD56
   bool m_bResumeZoom; // 0xD56 - 0xD57
   bool m_bIsDefusing; // 0xD57 - 0xD58
   bool m_bIsGrabbingHostage; // 0xD58 - 0xD59
   unsigned char pad_D59[0x3]; // 0xD59 - 0xD5C
   CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0xD5C - 0xD60
   GameTime_t m_fImmuneToGunGameDamageTime; // 0xD60 - 0xD64
   bool m_bGunGameImmunity; // 0xD64 - 0xD65
   Color m_GunGameImmunityColor; // 0xD65 - 0xD69
   unsigned char pad_D69[0x3]; // 0xD69 - 0xD6C
   float m_fMolotovDamageTime; // 0xD6C - 0xD70
   bool m_bHasMovedSinceSpawn; // 0xD70 - 0xD71
   bool m_bCanMoveDuringFreezePeriod; // 0xD71 - 0xD72
   unsigned char pad_D72[0x2]; // 0xD72 - 0xD74
   float m_flGuardianTooFarDistFrac; // 0xD74 - 0xD78
   float m_flNextGuardianTooFarHurtTime; // 0xD78 - 0xD7C
   GameTime_t m_flDetectedByEnemySensorTime; // 0xD7C - 0xD80
   float m_flDealtDamageToEnemyMostRecentTimestamp; // 0xD80 - 0xD84
   GameTime_t m_flLastEquippedHelmetTime; // 0xD84 - 0xD88
   GameTime_t m_flLastEquippedArmorTime; // 0xD88 - 0xD8C
   int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0xD8C - 0xD90
   bool m_bResetArmorNextSpawn; // 0xD90 - 0xD91
   unsigned char pad_D91[0x3]; // 0xD91 - 0xD94
   GameTime_t m_flLastBumpMineBumpTime; // 0xD94 - 0xD98
   GameTime_t m_flEmitSoundTime; // 0xD98 - 0xD9C
   int32_t m_iNumSpawns; // 0xD9C - 0xDA0
   int32_t m_iShouldHaveCash; // 0xDA0 - 0xDA4
   unsigned char pad_DA4[0x4]; // 0xDA4 - 0xDA8
   float m_flIdleTimeSinceLastAction; // 0xDA8 - 0xDAC
   float32 m_flNameChangeHistory[5]; // 0xDAC - 0xDC0
   float m_fLastGivenDefuserTime; // 0xDC0 - 0xDC4
   float m_fLastGivenBombTime; // 0xDC4 - 0xDC8
   bool m_bHasNightVision; // 0xDC8 - 0xDC9
   bool m_bNightVisionOn; // 0xDC9 - 0xDCA
   unsigned char pad_DCA[0x2]; // 0xDCA - 0xDCC
   float m_fNextRadarUpdateTime; // 0xDCC - 0xDD0
   float m_flLastMoneyUpdateTime; // 0xDD0 - 0xDD4
   char m_MenuStringBuffer[1024]; // 0xDD4 - 0x11D4
   float m_fIntroCamTime; // 0x11D4 - 0x11D8
   int32_t m_nMyCollisionGroup; // 0x11D8 - 0x11DC
   bool m_bInNoDefuseArea; // 0x11DC - 0x11DD
   bool m_bKilledByTaser; // 0x11DD - 0x11DE
   unsigned char pad_11DE[0x2]; // 0x11DE - 0x11E0
   int32_t m_iMoveState; // 0x11E0 - 0x11E4
   GameTime_t m_grenadeParameterStashTime; // 0x11E4 - 0x11E8
   bool m_bGrenadeParametersStashed; // 0x11E8 - 0x11E9
   unsigned char pad_11E9[0x3]; // 0x11E9 - 0x11EC
   QAngle m_angStashedShootAngles; // 0x11EC - 0x11F8
   Vector m_vecStashedGrenadeThrowPosition; // 0x11F8 - 0x1204
   Vector m_vecStashedVelocity; // 0x1204 - 0x1210
   QAngle m_angShootAngleHistory[2]; // 0x1210 - 0x1228
   Vector m_vecThrowPositionHistory[2]; // 0x1228 - 0x1240
   Vector m_vecVelocityHistory[2]; // 0x1240 - 0x1258
   bool m_bDiedAirborne; // 0x1258 - 0x1259
   unsigned char pad_1259[0x3]; // 0x1259 - 0x125C
   CEntityIndex m_iBombSiteIndex; // 0x125C - 0x1260
   int32_t m_nWhichBombZone; // 0x1260 - 0x1264
   bool m_bInBombZoneTrigger; // 0x1264 - 0x1265
   bool m_bWasInBombZoneTrigger; // 0x1265 - 0x1266
   unsigned char pad_1266[0x2]; // 0x1266 - 0x1268
   int32_t m_iDirection; // 0x1268 - 0x126C
   int32_t m_iShotsFired; // 0x126C - 0x1270
   int32_t m_ArmorValue; // 0x1270 - 0x1274
   float m_flFlinchStack; // 0x1274 - 0x1278
   float m_flVelocityModifier; // 0x1278 - 0x127C
   float m_flHitHeading; // 0x127C - 0x1280
   int32_t m_nHitBodyPart; // 0x1280 - 0x1284
   int32_t m_iHostagesKilled; // 0x1284 - 0x1288
   Vector m_vecTotalBulletForce; // 0x1288 - 0x1294
   float m_flFlashDuration; // 0x1294 - 0x1298
   float m_flFlashMaxAlpha; // 0x1298 - 0x129C
   float m_flProgressBarStartTime; // 0x129C - 0x12A0
   int32_t m_iProgressBarDuration; // 0x12A0 - 0x12A4
   bool m_bWaitForNoAttack; // 0x12A4 - 0x12A5
   unsigned char pad_12A5[0x3]; // 0x12A5 - 0x12A8
   float m_flLowerBodyYawTarget; // 0x12A8 - 0x12AC
   bool m_bStrafing; // 0x12AC - 0x12AD
   unsigned char pad_12AD[0x3]; // 0x12AD - 0x12B0
   Vector m_lastStandingPos; // 0x12B0 - 0x12BC
   float m_ignoreLadderJumpTime; // 0x12BC - 0x12C0
   CountdownTimer m_ladderSurpressionTimer; // 0x12C0 - 0x12D8
   Vector m_lastLadderNormal; // 0x12D8 - 0x12E4
   Vector m_lastLadderPos; // 0x12E4 - 0x12F0
   QAngle m_thirdPersonHeading; // 0x12F0 - 0x12FC
   float m_flSlopeDropOffset; // 0x12FC - 0x1300
   float m_flSlopeDropHeight; // 0x1300 - 0x1304
   Vector m_vHeadConstraintOffset; // 0x1304 - 0x1310
   unsigned char pad_1310[0x8]; // 0x1310 - 0x1318
   int32_t m_iLastWeaponFireUsercmd; // 0x1318 - 0x131C
   QAngle m_angEyeAngles; // 0x131C - 0x1328
   bool m_bVCollisionInitted; // 0x1328 - 0x1329
   unsigned char pad_1329[0x3]; // 0x1329 - 0x132C
   Vector m_storedSpawnPosition; // 0x132C - 0x1338
   QAngle m_storedSpawnAngle; // 0x1338 - 0x1344
   bool m_bIsSpawning; // 0x1344 - 0x1345
   bool m_bHideTargetID; // 0x1345 - 0x1346
   unsigned char pad_1346[0x2]; // 0x1346 - 0x1348
   int32_t m_nNumDangerZoneDamageHits; // 0x1348 - 0x134C
   bool m_bHud_MiniScoreHidden; // 0x134C - 0x134D
   bool m_bHud_RadarHidden; // 0x134D - 0x134E
   unsigned char pad_134E[0x2]; // 0x134E - 0x1350
   CEntityIndex m_nLastKillerIndex; // 0x1350 - 0x1354
   int32_t m_nLastConcurrentKilled; // 0x1354 - 0x1358
   int32_t m_nDeathCamMusic; // 0x1358 - 0x135C
   int32_t m_iAddonBits; // 0x135C - 0x1360
   int32_t m_iPrimaryAddon; // 0x1360 - 0x1364
   int32_t m_iSecondaryAddon; // 0x1364 - 0x1368
   CUtlStringToken m_currentDeafnessFilter; // 0x1368 - 0x136C
   int32_t m_NumEnemiesKilledThisSpawn; // 0x136C - 0x1370
   int32_t m_NumEnemiesKilledThisRound; // 0x1370 - 0x1374
   int32_t m_NumEnemiesAtRoundStart; // 0x1374 - 0x1378
   bool m_wasNotKilledNaturally; // 0x1378 - 0x1379
   unsigned char pad_1379[0x3]; // 0x1379 - 0x137C
   uint32 m_vecPlayerPatchEconIndices[5]; // 0x137C - 0x1390
   int32_t m_iDeathFlags; // 0x1390 - 0x1394
   CHandle< CChicken > m_hPet; // 0x1394 - 0x1398
   unsigned char pad_1398[0x1C8]; // 0x1398 - 0x1560
   uint16_t m_unCurrentEquipmentValue; // 0x1560 - 0x1562
   uint16_t m_unRoundStartEquipmentValue; // 0x1562 - 0x1564
   uint16_t m_unFreezetimeEndEquipmentValue; // 0x1564 - 0x1566
   unsigned char pad_1566[0x2]; // 0x1566 - 0x1568
   int32_t m_nSurvivalTeamNumber; // 0x1568 - 0x156C
   bool m_bHasDeathInfo; // 0x156C - 0x156D
   unsigned char pad_156D[0x3]; // 0x156D - 0x1570
   float m_flDeathInfoTime; // 0x1570 - 0x1574
   Vector m_vecDeathInfoOrigin; // 0x1574 - 0x1580
   bool m_bKilledByHeadshot; // 0x1580 - 0x1581
   unsigned char pad_1581[0x3]; // 0x1581 - 0x1584
   int32_t m_LastHitBox; // 0x1584 - 0x1588
   int32_t m_LastHealth; // 0x1588 - 0x158C
   float m_flLastCollisionCeiling; // 0x158C - 0x1590
   float m_flLastCollisionCeilingChangeTime; // 0x1590 - 0x1594
   unsigned char pad_1594[0x4]; // 0x1594 - 0x1598
   CCSBot* m_pBot; // 0x1598 - 0x15A0
   bool m_bBotAllowActive; // 0x15A0 - 0x15A1
   bool m_bCommittingSuicideOnTeamChange; // 0x15A1 - 0x15A2
   unsigned char pad_15A2[0x6]; // 0x15A2 - 0x15A8
}; // size - 0x15A8


class CFuncBrush /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   BrushSolidities_e m_iSolidity; // 0x710 - 0x714
   int32_t m_iDisabled; // 0x714 - 0x718
   bool m_bSolidBsp; // 0x718 - 0x719
   unsigned char pad_719[0x7]; // 0x719 - 0x720
   CUtlSymbolLarge m_iszExcludedClass; // 0x720 - 0x728
   bool m_bInvertExclusion; // 0x728 - 0x729
   bool m_bScriptedMovement; // 0x729 - 0x72A
   unsigned char pad_72A[0x6]; // 0x72A - 0x730
}; // size - 0x730


class CFuncPlatRot /* "server" */ : public CFuncPlat /* "server" */
{
public:
   QAngle m_end; // 0x7C0 - 0x7CC
   QAngle m_start; // 0x7CC - 0x7D8
}; // size - 0x7D8


class CLogicNPCCounter /* "server" */ : public CBaseEntity /* "server" */
{
public:
   CEntityIOOutput m_OnMinCountAll; // 0x4C0 - 0x4E8
   CEntityIOOutput m_OnMaxCountAll; // 0x4E8 - 0x510
   CEntityOutputTemplate< float32 > m_OnFactorAll; // 0x510 - 0x538
   CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // 0x538 - 0x560
   CEntityIOOutput m_OnMinCount_1; // 0x560 - 0x588
   CEntityIOOutput m_OnMaxCount_1; // 0x588 - 0x5B0
   CEntityOutputTemplate< float32 > m_OnFactor_1; // 0x5B0 - 0x5D8
   CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // 0x5D8 - 0x600
   CEntityIOOutput m_OnMinCount_2; // 0x600 - 0x628
   CEntityIOOutput m_OnMaxCount_2; // 0x628 - 0x650
   CEntityOutputTemplate< float32 > m_OnFactor_2; // 0x650 - 0x678
   CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // 0x678 - 0x6A0
   CEntityIOOutput m_OnMinCount_3; // 0x6A0 - 0x6C8
   CEntityIOOutput m_OnMaxCount_3; // 0x6C8 - 0x6F0
   CEntityOutputTemplate< float32 > m_OnFactor_3; // 0x6F0 - 0x718
   CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // 0x718 - 0x740
   CEntityHandle m_hSource; // 0x740 - 0x744
   unsigned char pad_744[0x4]; // 0x744 - 0x748
   CUtlSymbolLarge m_iszSourceEntityName; // 0x748 - 0x750
   float m_flDistanceMax; // 0x750 - 0x754
   bool m_bDisabled; // 0x754 - 0x755
   unsigned char pad_755[0x3]; // 0x755 - 0x758
   int32_t m_nMinCountAll; // 0x758 - 0x75C
   int32_t m_nMaxCountAll; // 0x75C - 0x760
   int32_t m_nMinFactorAll; // 0x760 - 0x764
   int32_t m_nMaxFactorAll; // 0x764 - 0x768
   unsigned char pad_768[0x8]; // 0x768 - 0x770
   CUtlSymbolLarge m_iszNPCClassname_1; // 0x770 - 0x778
   int32_t m_nNPCState_1; // 0x778 - 0x77C
   bool m_bInvertState_1; // 0x77C - 0x77D
   unsigned char pad_77D[0x3]; // 0x77D - 0x780
   int32_t m_nMinCount_1; // 0x780 - 0x784
   int32_t m_nMaxCount_1; // 0x784 - 0x788
   int32_t m_nMinFactor_1; // 0x788 - 0x78C
   int32_t m_nMaxFactor_1; // 0x78C - 0x790
   unsigned char pad_790[0x4]; // 0x790 - 0x794
   float m_flDefaultDist_1; // 0x794 - 0x798
   CUtlSymbolLarge m_iszNPCClassname_2; // 0x798 - 0x7A0
   int32_t m_nNPCState_2; // 0x7A0 - 0x7A4
   bool m_bInvertState_2; // 0x7A4 - 0x7A5
   unsigned char pad_7A5[0x3]; // 0x7A5 - 0x7A8
   int32_t m_nMinCount_2; // 0x7A8 - 0x7AC
   int32_t m_nMaxCount_2; // 0x7AC - 0x7B0
   int32_t m_nMinFactor_2; // 0x7B0 - 0x7B4
   int32_t m_nMaxFactor_2; // 0x7B4 - 0x7B8
   unsigned char pad_7B8[0x4]; // 0x7B8 - 0x7BC
   float m_flDefaultDist_2; // 0x7BC - 0x7C0
   CUtlSymbolLarge m_iszNPCClassname_3; // 0x7C0 - 0x7C8
   int32_t m_nNPCState_3; // 0x7C8 - 0x7CC
   bool m_bInvertState_3; // 0x7CC - 0x7CD
   unsigned char pad_7CD[0x3]; // 0x7CD - 0x7D0
   int32_t m_nMinCount_3; // 0x7D0 - 0x7D4
   int32_t m_nMaxCount_3; // 0x7D4 - 0x7D8
   int32_t m_nMinFactor_3; // 0x7D8 - 0x7DC
   int32_t m_nMaxFactor_3; // 0x7DC - 0x7E0
   unsigned char pad_7E0[0x4]; // 0x7E0 - 0x7E4
   float m_flDefaultDist_3; // 0x7E4 - 0x7E8
   unsigned char pad_7E8[0x18]; // 0x7E8 - 0x800
}; // size - 0x800


class CPlayer_CameraServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   QAngle m_vecCsViewPunchAngle; // 0x40 - 0x4C
   GameTick_t m_nCsViewPunchAngleTick; // 0x4C - 0x50
   float m_flCsViewPunchAngleTickRatio; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
   fogplayerparams_t m_PlayerFog; // 0x58 - 0x98
   CHandle< CColorCorrection > m_hColorCorrectionCtrl; // 0x98 - 0x9C
   CHandle< CBaseEntity > m_hViewEntity; // 0x9C - 0xA0
   CHandle< CTonemapController2 > m_hTonemapController; // 0xA0 - 0xA4
   unsigned char pad_A4[0x4]; // 0xA4 - 0xA8
   audioparams_t m_audio; // 0xA8 - 0x120
   CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes; // 0x120 - 0x138
   float m_flOldPlayerZ; // 0x138 - 0x13C
   float m_flOldPlayerViewOffsetZ; // 0x13C - 0x140
   unsigned char pad_140[0x18]; // 0x140 - 0x158
   CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList; // 0x158 - 0x170
}; // size - 0x170


class CPulseCell_Outflow_PlaySceneBase /* "server" */ : public CPulseCell_BaseYieldingInflow /* "server" */
{
public:
   class CursorState_t /* "server" */
   {
   public:
      CHandle< CBaseEntity > m_sceneInstance; // 0x0 - 0x4
   }; // size - 0x4

   CPulse_ResumePoint m_OnFinished; // 0x48 - 0x58
   CPulse_ResumePoint m_OnCanceled; // 0x58 - 0x68
   CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0x68 - 0x80
}; // size - 0x80


class CServerOnlyModelEntity /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   unsigned char pad_0[0x710]; // 0x0 - 0x710
}; // size - 0x710


class CTriggerHurt /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   float m_flOriginalDamage; // 0x8B8 - 0x8BC
   float m_flDamage; // 0x8BC - 0x8C0
   float m_flDamageCap; // 0x8C0 - 0x8C4
   GameTime_t m_flLastDmgTime; // 0x8C4 - 0x8C8
   float m_flForgivenessDelay; // 0x8C8 - 0x8CC
   int32_t m_bitsDamageInflict; // 0x8CC - 0x8D0
   int32_t m_damageModel; // 0x8D0 - 0x8D4
   bool m_bNoDmgForce; // 0x8D4 - 0x8D5
   unsigned char pad_8D5[0x3]; // 0x8D5 - 0x8D8
   Vector m_vDamageForce; // 0x8D8 - 0x8E4
   bool m_thinkAlways; // 0x8E4 - 0x8E5
   unsigned char pad_8E5[0x3]; // 0x8E5 - 0x8E8
   float m_hurtThinkPeriod; // 0x8E8 - 0x8EC
   unsigned char pad_8EC[0x4]; // 0x8EC - 0x8F0
   CEntityIOOutput m_OnHurt; // 0x8F0 - 0x918
   CEntityIOOutput m_OnHurtPlayer; // 0x918 - 0x940
   CUtlVector< CHandle< CBaseEntity > > m_hurtEntities; // 0x940 - 0x958
}; // size - 0x958


class CTriggerOnce /* "server" */ : public CTriggerMultiple /* "server" */
{
public:
   unsigned char pad_0[0x8E0]; // 0x0 - 0x8E0
}; // size - 0x8E0


class C_BarnLight /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   bool m_bEnabled; // 0xCD0 - 0xCD1
   unsigned char pad_CD1[0x3]; // 0xCD1 - 0xCD4
   int32_t m_nColorMode; // 0xCD4 - 0xCD8
   Color m_Color; // 0xCD8 - 0xCDC
   float m_flColorTemperature; // 0xCDC - 0xCE0
   float m_flBrightness; // 0xCE0 - 0xCE4
   float m_flBrightnessScale; // 0xCE4 - 0xCE8
   int32_t m_nDirectLight; // 0xCE8 - 0xCEC
   int32_t m_nBakedShadowIndex; // 0xCEC - 0xCF0
   int32_t m_nLuminaireShape; // 0xCF0 - 0xCF4
   float m_flLuminaireSize; // 0xCF4 - 0xCF8
   float m_flLuminaireAnisotropy; // 0xCF8 - 0xCFC
   unsigned char pad_CFC[0x4]; // 0xCFC - 0xD00
   CUtlString m_LightStyleString; // 0xD00 - 0xD08
   GameTime_t m_flLightStyleStartTime; // 0xD08 - 0xD0C
   unsigned char pad_D0C[0x4]; // 0xD0C - 0xD10
   C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0xD10 - 0xD28
   C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0xD28 - 0xD40
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // 0xD40 - 0xD58
   CEntityIOOutput m_StyleEvent[4]; // 0xD58 - 0xDF8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0xDF8 - 0xE00
   float m_flShape; // 0xE00 - 0xE04
   float m_flSoftX; // 0xE04 - 0xE08
   float m_flSoftY; // 0xE08 - 0xE0C
   float m_flSkirt; // 0xE0C - 0xE10
   float m_flSkirtNear; // 0xE10 - 0xE14
   Vector m_vSizeParams; // 0xE14 - 0xE20
   float m_flRange; // 0xE20 - 0xE24
   Vector m_vShear; // 0xE24 - 0xE30
   int32_t m_nBakeSpecularToCubemaps; // 0xE30 - 0xE34
   Vector m_vBakeSpecularToCubemapsSize; // 0xE34 - 0xE40
   int32_t m_nCastShadows; // 0xE40 - 0xE44
   int32_t m_nShadowMapSize; // 0xE44 - 0xE48
   int32_t m_nShadowPriority; // 0xE48 - 0xE4C
   bool m_bContactShadow; // 0xE4C - 0xE4D
   unsigned char pad_E4D[0x3]; // 0xE4D - 0xE50
   int32_t m_nBounceLight; // 0xE50 - 0xE54
   float m_flBounceScale; // 0xE54 - 0xE58
   float m_flMinRoughness; // 0xE58 - 0xE5C
   Vector m_vAlternateColor; // 0xE5C - 0xE68
   float m_fAlternateColorBrightness; // 0xE68 - 0xE6C
   int32_t m_nFog; // 0xE6C - 0xE70
   float m_flFogStrength; // 0xE70 - 0xE74
   int32_t m_nFogShadows; // 0xE74 - 0xE78
   float m_flFogScale; // 0xE78 - 0xE7C
   float m_flFadeSizeStart; // 0xE7C - 0xE80
   float m_flFadeSizeEnd; // 0xE80 - 0xE84
   float m_flShadowFadeSizeStart; // 0xE84 - 0xE88
   float m_flShadowFadeSizeEnd; // 0xE88 - 0xE8C
   bool m_bPrecomputedFieldsValid; // 0xE8C - 0xE8D
   unsigned char pad_E8D[0x3]; // 0xE8D - 0xE90
   Vector m_vPrecomputedBoundsMins; // 0xE90 - 0xE9C
   Vector m_vPrecomputedBoundsMaxs; // 0xE9C - 0xEA8
   Vector m_vPrecomputedOBBOrigin; // 0xEA8 - 0xEB4
   QAngle m_vPrecomputedOBBAngles; // 0xEB4 - 0xEC0
   Vector m_vPrecomputedOBBExtent; // 0xEC0 - 0xECC
   unsigned char pad_ECC[0x4C]; // 0xECC - 0xF18
}; // size - 0xF18


class C_CSGO_EndOfMatchLineupEndpoint /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class C_CSGO_TeamSelectCharacterPosition /* "client" */ : public C_CSGO_TeamPreviewCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class C_MultiplayRules /* "client" */ : public C_GameRules /* "client" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class C_OP_RemapNamedModelElementEndCap /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1C0 - 0x1C8
   CUtlVector< CUtlString > m_inNames; // 0x1C8 - 0x1E0
   CUtlVector< CUtlString > m_outNames; // 0x1E0 - 0x1F8
   CUtlVector< CUtlString > m_fallbackNames; // 0x1F8 - 0x210
   bool m_bModelFromRenderer; // 0x210 - 0x211
   unsigned char pad_211[0x3]; // 0x211 - 0x214
   ParticleAttributeIndex_t m_nFieldInput; // 0x214 - 0x218
   ParticleAttributeIndex_t m_nFieldOutput; // 0x218 - 0x21C
   unsigned char pad_21C[0x4]; // 0x21C - 0x220
}; // size - 0x220


class C_OP_RemapNamedModelElementOnceTimed /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1C0 - 0x1C8
   CUtlVector< CUtlString > m_inNames; // 0x1C8 - 0x1E0
   CUtlVector< CUtlString > m_outNames; // 0x1E0 - 0x1F8
   CUtlVector< CUtlString > m_fallbackNames; // 0x1F8 - 0x210
   bool m_bModelFromRenderer; // 0x210 - 0x211
   bool m_bProportional; // 0x211 - 0x212
   unsigned char pad_212[0x2]; // 0x212 - 0x214
   ParticleAttributeIndex_t m_nFieldInput; // 0x214 - 0x218
   ParticleAttributeIndex_t m_nFieldOutput; // 0x218 - 0x21C
   float m_flRemapTime; // 0x21C - 0x220
}; // size - 0x220


class C_PhysicsProp /* "client" */ : public C_BreakableProp /* "client" */
{
public:
   bool m_bAwake; // 0x1028 - 0x1029
   unsigned char pad_1029[0x7]; // 0x1029 - 0x1030
}; // size - 0x1030


class C_PointClientUIWorldPanel /* "client" */ : public C_BaseClientUIEntity /* "client" */
{
public:
   unsigned char pad_D00[0x8]; // 0xD00 - 0xD08
   bool m_bForceRecreateNextUpdate; // 0xD08 - 0xD09
   bool m_bMoveViewToPlayerNextThink; // 0xD09 - 0xD0A
   bool m_bCheckCSSClasses; // 0xD0A - 0xD0B
   unsigned char pad_D0B[0x5]; // 0xD0B - 0xD10
   CTransform m_anchorDeltaTransform; // 0xD10 - 0xD30
   unsigned char pad_D30[0x180]; // 0xD30 - 0xEB0
   CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xEB0 - 0xEB8
   unsigned char pad_EB8[0x20]; // 0xEB8 - 0xED8
   bool m_bIgnoreInput; // 0xED8 - 0xED9
   bool m_bLit; // 0xED9 - 0xEDA
   bool m_bFollowPlayerAcrossTeleport; // 0xEDA - 0xEDB
   unsigned char pad_EDB[0x1]; // 0xEDB - 0xEDC
   float m_flWidth; // 0xEDC - 0xEE0
   float m_flHeight; // 0xEE0 - 0xEE4
   float m_flDPI; // 0xEE4 - 0xEE8
   float m_flInteractDistance; // 0xEE8 - 0xEEC
   float m_flDepthOffset; // 0xEEC - 0xEF0
   uint32_t m_unOwnerContext; // 0xEF0 - 0xEF4
   uint32_t m_unHorizontalAlign; // 0xEF4 - 0xEF8
   uint32_t m_unVerticalAlign; // 0xEF8 - 0xEFC
   uint32_t m_unOrientation; // 0xEFC - 0xF00
   bool m_bAllowInteractionFromAllSceneWorlds; // 0xF00 - 0xF01
   unsigned char pad_F01[0x7]; // 0xF01 - 0xF08
   C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xF08 - 0xF20
   bool m_bOpaque; // 0xF20 - 0xF21
   bool m_bNoDepth; // 0xF21 - 0xF22
   bool m_bRenderBackface; // 0xF22 - 0xF23
   bool m_bUseOffScreenIndicator; // 0xF23 - 0xF24
   bool m_bExcludeFromSaveGames; // 0xF24 - 0xF25
   bool m_bGrabbable; // 0xF25 - 0xF26
   bool m_bOnlyRenderToTexture; // 0xF26 - 0xF27
   bool m_bDisableMipGen; // 0xF27 - 0xF28
   int32_t m_nExplicitImageLayout; // 0xF28 - 0xF2C
   unsigned char pad_F2C[0x4]; // 0xF2C - 0xF30
}; // size - 0xF30


class C_SoundAreaEntityBase /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   bool m_bDisabled; // 0x550 - 0x551
   unsigned char pad_551[0x7]; // 0x551 - 0x558
   bool m_bWasEnabled; // 0x558 - 0x559
   unsigned char pad_559[0x7]; // 0x559 - 0x560
   CUtlSymbolLarge m_iszSoundAreaType; // 0x560 - 0x568
   Vector m_vPos; // 0x568 - 0x574
   unsigned char pad_574[0x4]; // 0x574 - 0x578
}; // size - 0x578


class C_SoundOpvarSetPointBase /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   CUtlSymbolLarge m_iszStackName; // 0x550 - 0x558
   CUtlSymbolLarge m_iszOperatorName; // 0x558 - 0x560
   CUtlSymbolLarge m_iszOpvarName; // 0x560 - 0x568
   int32_t m_iOpvarIndex; // 0x568 - 0x56C
   bool m_bUseAutoCompare; // 0x56C - 0x56D
   unsigned char pad_56D[0x3]; // 0x56D - 0x570
}; // size - 0x570


class C_Sprite /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_CD0[0x18]; // 0xCD0 - 0xCE8
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0xCE8 - 0xCF0
   CHandle< C_BaseEntity > m_hAttachedToEntity; // 0xCF0 - 0xCF4
   AttachmentHandle_t m_nAttachment; // 0xCF4 - 0xCF5
   unsigned char pad_CF5[0x3]; // 0xCF5 - 0xCF8
   float m_flSpriteFramerate; // 0xCF8 - 0xCFC
   float m_flFrame; // 0xCFC - 0xD00
   GameTime_t m_flDieTime; // 0xD00 - 0xD04
   unsigned char pad_D04[0xC]; // 0xD04 - 0xD10
   uint32_t m_nBrightness; // 0xD10 - 0xD14
   float m_flBrightnessDuration; // 0xD14 - 0xD18
   float m_flSpriteScale; // 0xD18 - 0xD1C
   float m_flScaleDuration; // 0xD1C - 0xD20
   bool m_bWorldSpaceScale; // 0xD20 - 0xD21
   unsigned char pad_D21[0x3]; // 0xD21 - 0xD24
   float m_flGlowProxySize; // 0xD24 - 0xD28
   float m_flHDRColorScale; // 0xD28 - 0xD2C
   GameTime_t m_flLastTime; // 0xD2C - 0xD30
   float m_flMaxFrame; // 0xD30 - 0xD34
   float m_flStartScale; // 0xD34 - 0xD38
   float m_flDestScale; // 0xD38 - 0xD3C
   GameTime_t m_flScaleTimeStart; // 0xD3C - 0xD40
   int32_t m_nStartBrightness; // 0xD40 - 0xD44
   int32_t m_nDestBrightness; // 0xD44 - 0xD48
   GameTime_t m_flBrightnessTimeStart; // 0xD48 - 0xD4C
   unsigned char pad_D4C[0x4]; // 0xD4C - 0xD50
   CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0xD50 - 0xD58
   unsigned char pad_D58[0xA0]; // 0xD58 - 0xDF8
   int32_t m_nSpriteWidth; // 0xDF8 - 0xDFC
   int32_t m_nSpriteHeight; // 0xDFC - 0xE00
}; // size - 0xE00


class IEconItemInterface /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


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


class CAnimActionUpdater /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
}; // size - 0x18


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


class CBaseFilter /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   bool m_bNegated; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x7]; // 0x4C1 - 0x4C8
   CEntityIOOutput m_OnPass; // 0x4C8 - 0x4F0
   CEntityIOOutput m_OnFail; // 0x4F0 - 0x518
}; // size - 0x518


class CBasePlayerController /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_550[0x8]; // 0x550 - 0x558
   int32_t m_nFinalPredictedTick; // 0x558 - 0x55C
   unsigned char pad_55C[0x4]; // 0x55C - 0x560
   C_CommandContext m_CommandContext; // 0x560 - 0x5F8
   uint64_t m_nInButtonsWhichAreToggles; // 0x5F8 - 0x600
   uint32_t m_nTickBase; // 0x600 - 0x604
   CHandle< C_BasePlayerPawn > m_hPawn; // 0x604 - 0x608
   CHandle< C_BasePlayerPawn > m_hPredictedPawn; // 0x608 - 0x60C
   CSplitScreenSlot m_nSplitScreenSlot; // 0x60C - 0x610
   CHandle< CBasePlayerController > m_hSplitOwner; // 0x610 - 0x614
   unsigned char pad_614[0x4]; // 0x614 - 0x618
   CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x618 - 0x630
   bool m_bIsHLTV; // 0x630 - 0x631
   unsigned char pad_631[0x3]; // 0x631 - 0x634
   PlayerConnectedState m_iConnected; // 0x634 - 0x638
   char m_iszPlayerName[128]; // 0x638 - 0x6B8
   unsigned char pad_6B8[0x8]; // 0x6B8 - 0x6C0
   uint64_t m_steamID; // 0x6C0 - 0x6C8
   bool m_bIsLocalPlayerController; // 0x6C8 - 0x6C9
   unsigned char pad_6C9[0x3]; // 0x6C9 - 0x6CC
   uint32_t m_iDesiredFOV; // 0x6CC - 0x6D0
   unsigned char pad_6D0[0x18]; // 0x6D0 - 0x6E8
}; // size - 0x6E8


class CBasePlayerWeaponVData /* "client" */ : public CEntitySubclassVDataBase /* "client" */
{
public:
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x28 - 0x108
   bool m_bBuiltRightHanded; // 0x108 - 0x109
   bool m_bAllowFlipping; // 0x109 - 0x10A
   unsigned char pad_10A[0x6]; // 0x10A - 0x110
   CUtlString m_sMuzzleAttachment; // 0x110 - 0x118
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x118 - 0x1F8
   ItemFlagTypes_t m_iFlags; // 0x1F8 - 0x1F9
   AmmoIndex_t m_nPrimaryAmmoType; // 0x1F9 - 0x1FA
   AmmoIndex_t m_nSecondaryAmmoType; // 0x1FA - 0x1FB
   unsigned char pad_1FB[0x1]; // 0x1FB - 0x1FC
   int32_t m_iMaxClip1; // 0x1FC - 0x200
   int32_t m_iMaxClip2; // 0x200 - 0x204
   int32_t m_iDefaultClip1; // 0x204 - 0x208
   int32_t m_iDefaultClip2; // 0x208 - 0x20C
   int32_t m_iWeight; // 0x20C - 0x210
   bool m_bAutoSwitchTo; // 0x210 - 0x211
   bool m_bAutoSwitchFrom; // 0x211 - 0x212
   unsigned char pad_212[0x2]; // 0x212 - 0x214
   RumbleEffect_t m_iRumbleEffect; // 0x214 - 0x218
   bool m_bLinkedCooldowns; // 0x218 - 0x219
   unsigned char pad_219[0x7]; // 0x219 - 0x220
   CUtlMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x220 - 0x240
   int32_t m_iSlot; // 0x240 - 0x244
   int32_t m_iPosition; // 0x244 - 0x248
}; // size - 0x248


class CBaseTrailRenderer /* "particles" */ : public CBaseRendererSource2 /* "particles" */
{
public:
   ParticleOrientationChoiceList_t m_nOrientationType; // 0x2710 - 0x2714
   int32_t m_nOrientationControlPoint; // 0x2714 - 0x2718
   float m_flMinSize; // 0x2718 - 0x271C
   float m_flMaxSize; // 0x271C - 0x2720
   CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2720 - 0x2878
   CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2878 - 0x29D0
   bool m_bClampV; // 0x29D0 - 0x29D1
   unsigned char pad_29D1[0xF]; // 0x29D1 - 0x29E0
}; // size - 0x29E0


class CBoneConstraintBase /* "modellib" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
}; // size - 0x28


class CItemDefuser /* "server" */ : public CItem /* "server" */
{
public:
   EntitySpottedState_t m_entitySpottedState; // 0x9C0 - 0x9D8
   int32_t m_nSpotRules; // 0x9D8 - 0x9DC
   unsigned char pad_9DC[0x4]; // 0x9DC - 0x9E0
}; // size - 0x9E0


class CLogicalEntity /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class CMultiplayRules /* "server" */ : public CGameRules /* "server" */
{
public:
   unsigned char pad_0[0x90]; // 0x0 - 0x90
}; // size - 0x90


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


class CPhysConstraint /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x8]; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_nameAttach1; // 0x4C8 - 0x4D0
   CUtlSymbolLarge m_nameAttach2; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_breakSound; // 0x4D8 - 0x4E0
   float m_forceLimit; // 0x4E0 - 0x4E4
   float m_torqueLimit; // 0x4E4 - 0x4E8
   uint32_t m_teleportTick; // 0x4E8 - 0x4EC
   float m_minTeleportDistance; // 0x4EC - 0x4F0
   CEntityIOOutput m_OnBreak; // 0x4F0 - 0x518
}; // size - 0x518


class CPlayer_WeaponServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > m_hMyWeapons; // 0x40 - 0x58
   CHandle< CBasePlayerWeapon > m_hActiveWeapon; // 0x58 - 0x5C
   CHandle< CBasePlayerWeapon > m_hLastWeapon; // 0x5C - 0x60
   uint16 m_iAmmo[32]; // 0x60 - 0xA0
   bool m_bPreventWeaponPickup; // 0xA0 - 0xA1
   unsigned char pad_A1[0x7]; // 0xA1 - 0xA8
}; // size - 0xA8


class CPulseExecCursor /* "pulse_runtime_lib" */
{
public:
   unsigned char pad_0[0x168]; // 0x0 - 0x168
}; // size - 0x168


class CPulseGraphComponentBase /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CHandle< CBaseEntity > m_hOwner; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CUtlSymbolLarge m_sNameFixupStaticPrefix; // 0x10 - 0x18
   CUtlSymbolLarge m_sNameFixupParent; // 0x18 - 0x20
   CUtlSymbolLarge m_sNameFixupLocal; // 0x20 - 0x28
}; // size - 0x28


class CRagdollProp /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   unsigned char pad_8E8[0x8]; // 0x8E8 - 0x8F0
   ragdoll_t m_ragdoll; // 0x8F0 - 0x928
   bool m_bStartDisabled; // 0x928 - 0x929
   unsigned char pad_929[0x7]; // 0x929 - 0x930
   CNetworkUtlVectorBase< Vector > m_ragPos; // 0x930 - 0x948
   CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0x948 - 0x960
   CHandle< CBaseEntity > m_hRagdollSource; // 0x960 - 0x964
   uint32_t m_lastUpdateTickCount; // 0x964 - 0x968
   bool m_allAsleep; // 0x968 - 0x969
   bool m_bFirstCollisionAfterLaunch; // 0x969 - 0x96A
   unsigned char pad_96A[0x2]; // 0x96A - 0x96C
   CHandle< CBaseEntity > m_hDamageEntity; // 0x96C - 0x970
   CHandle< CBaseEntity > m_hKiller; // 0x970 - 0x974
   CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x974 - 0x978
   GameTime_t m_flLastPhysicsInfluenceTime; // 0x978 - 0x97C
   GameTime_t m_flFadeOutStartTime; // 0x97C - 0x980
   float m_flFadeTime; // 0x980 - 0x984
   Vector m_vecLastOrigin; // 0x984 - 0x990
   GameTime_t m_flAwakeTime; // 0x990 - 0x994
   GameTime_t m_flLastOriginChangeTime; // 0x994 - 0x998
   int32_t m_nBloodColor; // 0x998 - 0x99C
   unsigned char pad_99C[0x4]; // 0x99C - 0x9A0
   CUtlSymbolLarge m_strOriginClassName; // 0x9A0 - 0x9A8
   CUtlSymbolLarge m_strSourceClassName; // 0x9A8 - 0x9B0
   bool m_bHasBeenPhysgunned; // 0x9B0 - 0x9B1
   bool m_bShouldTeleportPhysics; // 0x9B1 - 0x9B2
   unsigned char pad_9B2[0x2]; // 0x9B2 - 0x9B4
   float m_flBlendWeight; // 0x9B4 - 0x9B8
   float m_flDefaultFadeScale; // 0x9B8 - 0x9BC
   unsigned char pad_9BC[0x4]; // 0x9BC - 0x9C0
   CUtlVector< Vector > m_ragdollMins; // 0x9C0 - 0x9D8
   CUtlVector< Vector > m_ragdollMaxs; // 0x9D8 - 0x9F0
   bool m_bShouldDeleteActivationRecord; // 0x9F0 - 0x9F1
   unsigned char pad_9F1[0x5F]; // 0x9F1 - 0xA50
   bool m_bValidatePoweredRagdollPose; // 0xA50 - 0xA51
   unsigned char pad_A51[0x3F]; // 0xA51 - 0xA90
}; // size - 0xA90


class CSAdditionalPerRoundStats_t /* "server" */
{
public:
   int32_t m_numChickensKilled; // 0x0 - 0x4
   int32_t m_killsWhileBlind; // 0x4 - 0x8
   int32_t m_bombCarrierkills; // 0x8 - 0xC
   int32_t m_iBurnDamageInflicted; // 0xC - 0x10
   int32_t m_iDinks; // 0x10 - 0x14
}; // size - 0x14


class CSceneEntity /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x8]; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_iszSceneFile; // 0x4C8 - 0x4D0
   CUtlSymbolLarge m_iszResumeSceneFile; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_iszTarget1; // 0x4D8 - 0x4E0
   CUtlSymbolLarge m_iszTarget2; // 0x4E0 - 0x4E8
   CUtlSymbolLarge m_iszTarget3; // 0x4E8 - 0x4F0
   CUtlSymbolLarge m_iszTarget4; // 0x4F0 - 0x4F8
   CUtlSymbolLarge m_iszTarget5; // 0x4F8 - 0x500
   CUtlSymbolLarge m_iszTarget6; // 0x500 - 0x508
   CUtlSymbolLarge m_iszTarget7; // 0x508 - 0x510
   CUtlSymbolLarge m_iszTarget8; // 0x510 - 0x518
   CHandle< CBaseEntity > m_hTarget1; // 0x518 - 0x51C
   CHandle< CBaseEntity > m_hTarget2; // 0x51C - 0x520
   CHandle< CBaseEntity > m_hTarget3; // 0x520 - 0x524
   CHandle< CBaseEntity > m_hTarget4; // 0x524 - 0x528
   CHandle< CBaseEntity > m_hTarget5; // 0x528 - 0x52C
   CHandle< CBaseEntity > m_hTarget6; // 0x52C - 0x530
   CHandle< CBaseEntity > m_hTarget7; // 0x530 - 0x534
   CHandle< CBaseEntity > m_hTarget8; // 0x534 - 0x538
   bool m_bIsPlayingBack; // 0x538 - 0x539
   bool m_bPaused; // 0x539 - 0x53A
   bool m_bMultiplayer; // 0x53A - 0x53B
   bool m_bAutogenerated; // 0x53B - 0x53C
   float m_flForceClientTime; // 0x53C - 0x540
   float m_flCurrentTime; // 0x540 - 0x544
   float m_flFrameTime; // 0x544 - 0x548
   bool m_bCancelAtNextInterrupt; // 0x548 - 0x549
   unsigned char pad_549[0x3]; // 0x549 - 0x54C
   float m_fPitch; // 0x54C - 0x550
   bool m_bAutomated; // 0x550 - 0x551
   unsigned char pad_551[0x3]; // 0x551 - 0x554
   int32_t m_nAutomatedAction; // 0x554 - 0x558
   float m_flAutomationDelay; // 0x558 - 0x55C
   float m_flAutomationTime; // 0x55C - 0x560
   CHandle< CBaseEntity > m_hWaitingForThisResumeScene; // 0x560 - 0x564
   bool m_bWaitingForResumeScene; // 0x564 - 0x565
   bool m_bPausedViaInput; // 0x565 - 0x566
   bool m_bPauseAtNextInterrupt; // 0x566 - 0x567
   bool m_bWaitingForActor; // 0x567 - 0x568
   bool m_bWaitingForInterrupt; // 0x568 - 0x569
   bool m_bInterruptedActorsScenes; // 0x569 - 0x56A
   bool m_bBreakOnNonIdle; // 0x56A - 0x56B
   unsigned char pad_56B[0x5]; // 0x56B - 0x570
   CNetworkUtlVectorBase< CHandle< CBaseFlex > > m_hActorList; // 0x570 - 0x588
   CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList; // 0x588 - 0x5A0
   unsigned char pad_5A0[0x30]; // 0x5A0 - 0x5D0
   int32_t m_nSceneFlushCounter; // 0x5D0 - 0x5D4
   uint16_t m_nSceneStringIndex; // 0x5D4 - 0x5D6
   unsigned char pad_5D6[0x2]; // 0x5D6 - 0x5D8
   CEntityIOOutput m_OnStart; // 0x5D8 - 0x600
   CEntityIOOutput m_OnCompletion; // 0x600 - 0x628
   CEntityIOOutput m_OnCanceled; // 0x628 - 0x650
   CEntityIOOutput m_OnPaused; // 0x650 - 0x678
   CEntityIOOutput m_OnResumed; // 0x678 - 0x6A0
   CEntityIOOutput m_OnTrigger[16]; // 0x6A0 - 0x920
   unsigned char pad_920[0x90]; // 0x920 - 0x9B0
   CHandle< CSceneEntity > m_hInterruptScene; // 0x9B0 - 0x9B4
   int32_t m_nInterruptCount; // 0x9B4 - 0x9B8
   bool m_bSceneMissing; // 0x9B8 - 0x9B9
   bool m_bInterrupted; // 0x9B9 - 0x9BA
   bool m_bCompletedEarly; // 0x9BA - 0x9BB
   bool m_bInterruptSceneFinished; // 0x9BB - 0x9BC
   bool m_bRestoring; // 0x9BC - 0x9BD
   unsigned char pad_9BD[0x3]; // 0x9BD - 0x9C0
   CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion; // 0x9C0 - 0x9D8
   CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // 0x9D8 - 0x9F0
   CUtlSymbolLarge m_iszSoundName; // 0x9F0 - 0x9F8
   CUtlSymbolLarge m_iszSequenceName; // 0x9F8 - 0xA00
   CHandle< CBaseFlex > m_hActor; // 0xA00 - 0xA04
   CHandle< CBaseEntity > m_hActivator; // 0xA04 - 0xA08
   int32_t m_BusyActor; // 0xA08 - 0xA0C
   SceneOnPlayerDeath_t m_iPlayerDeathBehavior; // 0xA0C - 0xA10
   unsigned char pad_A10[0x8]; // 0xA10 - 0xA18
}; // size - 0xA18


class CSkeletonAnimationController /* "server" */ : public ISkeletonAnimationController /* "server" */
{
public:
   CSkeletonInstance* m_pSkeletonInstance; // 0x8 - 0x10
}; // size - 0x10


class CSosGroupActionSchema /* "soundsystem" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlString m_name; // 0x8 - 0x10
   ActionType_t m_actionType; // 0x10 - 0x14
   ActionType_t m_actionInstanceType; // 0x14 - 0x18
}; // size - 0x18


class CTriggerPush /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   QAngle m_angPushEntitySpace; // 0x8B8 - 0x8C4
   Vector m_vecPushDirEntitySpace; // 0x8C4 - 0x8D0
   bool m_bTriggerOnStartTouch; // 0x8D0 - 0x8D1
   unsigned char pad_8D1[0x7]; // 0x8D1 - 0x8D8
}; // size - 0x8D8


class C_ParticleSystem /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   char m_szSnapshotFileName[512]; // 0xCD0 - 0xED0
   bool m_bActive; // 0xED0 - 0xED1
   bool m_bFrozen; // 0xED1 - 0xED2
   unsigned char pad_ED2[0x2]; // 0xED2 - 0xED4
   float m_flFreezeTransitionDuration; // 0xED4 - 0xED8
   int32_t m_nStopType; // 0xED8 - 0xEDC
   bool m_bAnimateDuringGameplayPause; // 0xEDC - 0xEDD
   unsigned char pad_EDD[0x3]; // 0xEDD - 0xEE0
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xEE0 - 0xEE8
   GameTime_t m_flStartTime; // 0xEE8 - 0xEEC
   float m_flPreSimTime; // 0xEEC - 0xEF0
   Vector m_vServerControlPoints[4]; // 0xEF0 - 0xF20
   uint8 m_iServerControlPointAssignments[4]; // 0xF20 - 0xF24
   CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xF24 - 0x1024
   bool m_bNoSave; // 0x1024 - 0x1025
   bool m_bNoFreeze; // 0x1025 - 0x1026
   bool m_bNoRamp; // 0x1026 - 0x1027
   bool m_bStartActive; // 0x1027 - 0x1028
   CUtlSymbolLarge m_iszEffectName; // 0x1028 - 0x1030
   CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1030 - 0x1230
   int32_t m_nDataCP; // 0x1230 - 0x1234
   Vector m_vecDataCPValue; // 0x1234 - 0x1240
   int32_t m_nTintCP; // 0x1240 - 0x1244
   Color m_clrTint; // 0x1244 - 0x1248
   unsigned char pad_1248[0x20]; // 0x1248 - 0x1268
   bool m_bOldActive; // 0x1268 - 0x1269
   bool m_bOldFrozen; // 0x1269 - 0x126A
   unsigned char pad_126A[0x16]; // 0x126A - 0x1280
}; // size - 0x1280


class C_PredictedViewModel /* "client" */ : public C_BaseViewModel /* "client" */
{
public:
   Vector m_vPredictedLagOffset; // 0xF40 - 0xF4C
   QAngle m_targetSpeed; // 0xF4C - 0xF58
   QAngle m_currentSpeed; // 0xF58 - 0xF64
   unsigned char pad_F64[0x4]; // 0xF64 - 0xF68
}; // size - 0xF68


class C_SoundOpvarSetPointEntity /* "client" */ : public C_SoundOpvarSetPointBase /* "client" */
{
public:
   unsigned char pad_0[0x570]; // 0x0 - 0x570
}; // size - 0x570


class C_Team /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x550 - 0x568
   C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers; // 0x568 - 0x580
   int32_t m_iScore; // 0x580 - 0x584
   char m_szTeamname[129]; // 0x584 - 0x605
   unsigned char pad_605[0x3]; // 0x605 - 0x608
}; // size - 0x608


class C_TonemapController2 /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   float m_flAutoExposureMin; // 0x550 - 0x554
   float m_flAutoExposureMax; // 0x554 - 0x558
   float m_flTonemapPercentTarget; // 0x558 - 0x55C
   float m_flTonemapPercentBrightPixels; // 0x55C - 0x560
   float m_flTonemapMinAvgLum; // 0x560 - 0x564
   float m_flExposureAdaptationSpeedUp; // 0x564 - 0x568
   float m_flExposureAdaptationSpeedDown; // 0x568 - 0x56C
   float m_flTonemapEVSmoothingRange; // 0x56C - 0x570
   unsigned char pad_570[0x8]; // 0x570 - 0x578
}; // size - 0x578


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
      SCRIPT_WALK_TO_MARK = 4,
      SCRIPT_RUN_TO_MARK = 5,
      SCRIPT_CUSTOM_MOVE_TO_MARK = 6
   };
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IParticleEffect /* "particleslib" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
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


class BaseSceneObjectOverride_t /* "worldrenderer" */
{
public:
   uint32_t m_nSceneObjectIndex; // 0x0 - 0x4
}; // size - 0x4


class CAI_ExpresserWithFollowup /* "server" */ : public CAI_Expresser /* "server" */
{
public:
   ResponseFollowup* m_pPostponedFollowup; // 0x60 - 0x68
   unsigned char pad_68[0x8]; // 0x68 - 0x70
}; // size - 0x70


class CAnimScriptBase /* "host" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   bool m_bIsValid; // 0x8 - 0x9
   unsigned char pad_9[0x7]; // 0x9 - 0x10
}; // size - 0x10


class CBaseConstraint /* "modellib" */ : public CBoneConstraintBase /* "modellib" */
{
public:
   CUtlString m_name; // 0x28 - 0x30
   Vector m_vUpVector; // 0x30 - 0x3C
   unsigned char pad_3C[0x4]; // 0x3C - 0x40
   CUtlVector< CConstraintSlave > m_slaves; // 0x40 - 0x58
   CUtlVector< CConstraintTarget > m_targets; // 0x58 - 0x70
}; // size - 0x70


class CBaseDoor /* "server" */ : public CBaseToggle /* "server" */
{
public:
   unsigned char pad_790[0x10]; // 0x790 - 0x7A0
   QAngle m_angMoveEntitySpace; // 0x7A0 - 0x7AC
   Vector m_vecMoveDirParentSpace; // 0x7AC - 0x7B8
   locksound_t m_ls; // 0x7B8 - 0x7D8
   bool m_bForceClosed; // 0x7D8 - 0x7D9
   bool m_bDoorGroup; // 0x7D9 - 0x7DA
   bool m_bLocked; // 0x7DA - 0x7DB
   bool m_bIgnoreDebris; // 0x7DB - 0x7DC
   FuncDoorSpawnPos_t m_eSpawnPosition; // 0x7DC - 0x7E0
   float m_flBlockDamage; // 0x7E0 - 0x7E4
   unsigned char pad_7E4[0x4]; // 0x7E4 - 0x7E8
   CUtlSymbolLarge m_NoiseMoving; // 0x7E8 - 0x7F0
   CUtlSymbolLarge m_NoiseArrived; // 0x7F0 - 0x7F8
   CUtlSymbolLarge m_NoiseMovingClosed; // 0x7F8 - 0x800
   CUtlSymbolLarge m_NoiseArrivedClosed; // 0x800 - 0x808
   CUtlSymbolLarge m_ChainTarget; // 0x808 - 0x810
   CEntityIOOutput m_OnBlockedClosing; // 0x810 - 0x838
   CEntityIOOutput m_OnBlockedOpening; // 0x838 - 0x860
   CEntityIOOutput m_OnUnblockedClosing; // 0x860 - 0x888
   CEntityIOOutput m_OnUnblockedOpening; // 0x888 - 0x8B0
   CEntityIOOutput m_OnFullyClosed; // 0x8B0 - 0x8D8
   CEntityIOOutput m_OnFullyOpen; // 0x8D8 - 0x900
   CEntityIOOutput m_OnClose; // 0x900 - 0x928
   CEntityIOOutput m_OnOpen; // 0x928 - 0x950
   CEntityIOOutput m_OnLockedUse; // 0x950 - 0x978
   bool m_bLoopMoveSound; // 0x978 - 0x979
   unsigned char pad_979[0x17]; // 0x979 - 0x990
   bool m_bCreateNavObstacle; // 0x990 - 0x991
   bool m_isChaining; // 0x991 - 0x992
   bool m_bIsUsable; // 0x992 - 0x993
   unsigned char pad_993[0x5]; // 0x993 - 0x998
}; // size - 0x998


class CBeam /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   float m_flFrameRate; // 0x710 - 0x714
   float m_flHDRColorScale; // 0x714 - 0x718
   GameTime_t m_flFireTime; // 0x718 - 0x71C
   float m_flDamage; // 0x71C - 0x720
   uint8_t m_nNumBeamEnts; // 0x720 - 0x721
   unsigned char pad_721[0x7]; // 0x721 - 0x728
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x728 - 0x730
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x730 - 0x738
   BeamType_t m_nBeamType; // 0x738 - 0x73C
   uint32_t m_nBeamFlags; // 0x73C - 0x740
   CHandle< CBaseEntity > m_hAttachEntity[10]; // 0x740 - 0x768
   AttachmentHandle_t m_nAttachIndex[10]; // 0x768 - 0x772
   unsigned char pad_772[0x2]; // 0x772 - 0x774
   float m_fWidth; // 0x774 - 0x778
   float m_fEndWidth; // 0x778 - 0x77C
   float m_fFadeLength; // 0x77C - 0x780
   float m_fHaloScale; // 0x780 - 0x784
   float m_fAmplitude; // 0x784 - 0x788
   float m_fStartFrame; // 0x788 - 0x78C
   float m_fSpeed; // 0x78C - 0x790
   float m_flFrame; // 0x790 - 0x794
   BeamClipStyle_t m_nClipStyle; // 0x794 - 0x798
   bool m_bTurnedOff; // 0x798 - 0x799
   unsigned char pad_799[0x3]; // 0x799 - 0x79C
   Vector m_vecEndPos; // 0x79C - 0x7A8
   CHandle< CBaseEntity > m_hEndEntity; // 0x7A8 - 0x7AC
   int32_t m_nDissolveType; // 0x7AC - 0x7B0
}; // size - 0x7B0


class CBot /* "server" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CCSPlayerController* m_pController; // 0x10 - 0x18
   CCSPlayerPawn* m_pPlayer; // 0x18 - 0x20
   bool m_bHasSpawned; // 0x20 - 0x21
   unsigned char pad_21[0x3]; // 0x21 - 0x24
   uint32_t m_id; // 0x24 - 0x28
   unsigned char pad_28[0x88]; // 0x28 - 0xB0
   bool m_isRunning; // 0xB0 - 0xB1
   bool m_isCrouching; // 0xB1 - 0xB2
   unsigned char pad_B2[0x2]; // 0xB2 - 0xB4
   float m_forwardSpeed; // 0xB4 - 0xB8
   float m_leftSpeed; // 0xB8 - 0xBC
   float m_verticalSpeed; // 0xBC - 0xC0
   uint64_t m_buttonFlags; // 0xC0 - 0xC8
   float m_jumpTimestamp; // 0xC8 - 0xCC
   Vector m_viewForward; // 0xCC - 0xD8
   unsigned char pad_D8[0x10]; // 0xD8 - 0xE8
   int32_t m_postureStackIndex; // 0xE8 - 0xEC
   unsigned char pad_EC[0x4]; // 0xEC - 0xF0
}; // size - 0xF0


class CBtNodeCondition /* "server" */ : public CBtNodeDecorator /* "server" */
{
public:
   bool m_bNegated; // 0x58 - 0x59
   unsigned char pad_59[0x7]; // 0x59 - 0x60
}; // size - 0x60


class CEntityComponent /* "entity2" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class CEntityComponent /* "entity2" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class CEnvCubemap /* "server" */ : public CBaseEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x80]; // 0x4C0 - 0x540
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x540 - 0x548
   bool m_bCustomCubemapTexture; // 0x548 - 0x549
   unsigned char pad_549[0x3]; // 0x549 - 0x54C
   float m_flInfluenceRadius; // 0x54C - 0x550
   Vector m_vBoxProjectMins; // 0x550 - 0x55C
   Vector m_vBoxProjectMaxs; // 0x55C - 0x568
   bool m_bMoveable; // 0x568 - 0x569
   unsigned char pad_569[0x3]; // 0x569 - 0x56C
   int32_t m_nHandshake; // 0x56C - 0x570
   int32_t m_nEnvCubeMapArrayIndex; // 0x570 - 0x574
   int32_t m_nPriority; // 0x574 - 0x578
   float m_flEdgeFadeDist; // 0x578 - 0x57C
   Vector m_vEdgeFadeDists; // 0x57C - 0x588
   float m_flDiffuseScale; // 0x588 - 0x58C
   bool m_bStartDisabled; // 0x58C - 0x58D
   bool m_bDefaultEnvMap; // 0x58D - 0x58E
   bool m_bDefaultSpecEnvMap; // 0x58E - 0x58F
   bool m_bIndoorCubeMap; // 0x58F - 0x590
   bool m_bCopyDiffuseFromDefaultCubemap; // 0x590 - 0x591
   unsigned char pad_591[0xF]; // 0x591 - 0x5A0
   bool m_bEnabled; // 0x5A0 - 0x5A1
   unsigned char pad_5A1[0x7]; // 0x5A1 - 0x5A8
}; // size - 0x5A8


class CFuncLadder /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   Vector m_vecLadderDir; // 0x710 - 0x71C
   unsigned char pad_71C[0x4]; // 0x71C - 0x720
   CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x720 - 0x738
   Vector m_vecLocalTop; // 0x738 - 0x744
   Vector m_vecPlayerMountPositionTop; // 0x744 - 0x750
   Vector m_vecPlayerMountPositionBottom; // 0x750 - 0x75C
   float m_flAutoRideSpeed; // 0x75C - 0x760
   bool m_bDisabled; // 0x760 - 0x761
   bool m_bFakeLadder; // 0x761 - 0x762
   bool m_bHasSlack; // 0x762 - 0x763
   unsigned char pad_763[0x5]; // 0x763 - 0x768
   CUtlSymbolLarge m_surfacePropName; // 0x768 - 0x770
   CEntityIOOutput m_OnPlayerGotOnLadder; // 0x770 - 0x798
   CEntityIOOutput m_OnPlayerGotOffLadder; // 0x798 - 0x7C0
}; // size - 0x7C0


class CFuncTrackChange /* "server" */ : public CFuncPlatRot /* "server" */
{
public:
   CPathTrack* m_trackTop; // 0x7D8 - 0x7E0
   CPathTrack* m_trackBottom; // 0x7E0 - 0x7E8
   CFuncTrackTrain* m_train; // 0x7E8 - 0x7F0
   CUtlSymbolLarge m_trackTopName; // 0x7F0 - 0x7F8
   CUtlSymbolLarge m_trackBottomName; // 0x7F8 - 0x800
   CUtlSymbolLarge m_trainName; // 0x800 - 0x808
   TRAIN_CODE m_code; // 0x808 - 0x80C
   int32_t m_targetState; // 0x80C - 0x810
   int32_t m_use; // 0x810 - 0x814
   unsigned char pad_814[0x4]; // 0x814 - 0x818
}; // size - 0x818


class CGameSceneNode /* "server" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CTransform m_nodeToWorld; // 0x10 - 0x30
   CEntityInstance* m_pOwner; // 0x30 - 0x38
   CGameSceneNode* m_pParent; // 0x38 - 0x40
   CGameSceneNode* m_pChild; // 0x40 - 0x48
   CGameSceneNode* m_pNextSibling; // 0x48 - 0x50
   unsigned char pad_50[0x20]; // 0x50 - 0x70
   CGameSceneNodeHandle m_hParent; // 0x70 - 0x80
   CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80 - 0xB0
   unsigned char pad_B0[0x8]; // 0xB0 - 0xB8
   QAngle m_angRotation; // 0xB8 - 0xC4
   float m_flScale; // 0xC4 - 0xC8
   Vector m_vecAbsOrigin; // 0xC8 - 0xD4
   QAngle m_angAbsRotation; // 0xD4 - 0xE0
   float m_flAbsScale; // 0xE0 - 0xE4
   int16_t m_nParentAttachmentOrBone; // 0xE4 - 0xE6
   bool m_bDebugAbsOriginChanges; // 0xE6 - 0xE7
   bool m_bDormant; // 0xE7 - 0xE8
   bool m_bForceParentToBeNetworked; // 0xE8 - 0xE9
   unsigned char m_bDirtyHierarchy : 1; // 0xE9 - 0xEA
   unsigned char m_bDirtyBoneMergeInfo : 1; // 0xE9 - 0xEA
   unsigned char m_bNetworkedPositionChanged : 1; // 0xE9 - 0xEA
   unsigned char m_bNetworkedAnglesChanged : 1; // 0xE9 - 0xEA
   unsigned char m_bNetworkedScaleChanged : 1; // 0xE9 - 0xEA
   unsigned char m_bWillBeCallingPostDataUpdate : 1; // 0xE9 - 0xEA
   unsigned char m_bBoneMergeFlex : 1; // 0xE9 - 0xEA
   unsigned char m_nLatchAbsOrigin : 2; // 0xE9 - 0xEB
   unsigned char m_bDirtyBoneMergeBoneToRoot : 1; // 0xEA - 0xEB
   uint8_t m_nHierarchicalDepth; // 0xEB - 0xEC
   uint8_t m_nHierarchyType; // 0xEC - 0xED
   uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xED - 0xEE
   unsigned char pad_EE[0x2]; // 0xEE - 0xF0
   CUtlStringToken m_name; // 0xF0 - 0xF4
   unsigned char pad_F4[0x3C]; // 0xF4 - 0x130
   CUtlStringToken m_hierarchyAttachName; // 0x130 - 0x134
   float m_flZOffset; // 0x134 - 0x138
   Vector m_vRenderOrigin; // 0x138 - 0x144
   unsigned char pad_144[0xC]; // 0x144 - 0x150
}; // size - 0x150


class CHostage /* "server" */ : public CHostageExpresserShim /* "server" */
{
public:
   unsigned char pad_A18[0x10]; // 0xA18 - 0xA28
   CEntityIOOutput m_OnHostageBeginGrab; // 0xA28 - 0xA50
   CEntityIOOutput m_OnFirstPickedUp; // 0xA50 - 0xA78
   CEntityIOOutput m_OnDroppedNotRescued; // 0xA78 - 0xAA0
   CEntityIOOutput m_OnRescued; // 0xAA0 - 0xAC8
   EntitySpottedState_t m_entitySpottedState; // 0xAC8 - 0xAE0
   int32_t m_nSpotRules; // 0xAE0 - 0xAE4
   uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xAE4 - 0xAE8
   uint32_t m_nHostageSpawnRandomFactor; // 0xAE8 - 0xAEC
   bool m_bRemove; // 0xAEC - 0xAED
   unsigned char pad_AED[0x3]; // 0xAED - 0xAF0
   Vector m_vel; // 0xAF0 - 0xAFC
   bool m_isRescued; // 0xAFC - 0xAFD
   bool m_jumpedThisFrame; // 0xAFD - 0xAFE
   unsigned char pad_AFE[0x2]; // 0xAFE - 0xB00
   int32_t m_nHostageState; // 0xB00 - 0xB04
   CHandle< CBaseEntity > m_leader; // 0xB04 - 0xB08
   CHandle< CCSPlayerPawnBase > m_lastLeader; // 0xB08 - 0xB0C
   unsigned char pad_B0C[0x4]; // 0xB0C - 0xB10
   CountdownTimer m_reuseTimer; // 0xB10 - 0xB28
   bool m_hasBeenUsed; // 0xB28 - 0xB29
   unsigned char pad_B29[0x3]; // 0xB29 - 0xB2C
   Vector m_accel; // 0xB2C - 0xB38
   bool m_isRunning; // 0xB38 - 0xB39
   bool m_isCrouching; // 0xB39 - 0xB3A
   unsigned char pad_B3A[0x6]; // 0xB3A - 0xB40
   CountdownTimer m_jumpTimer; // 0xB40 - 0xB58
   bool m_isWaitingForLeader; // 0xB58 - 0xB59
   unsigned char pad_B59[0x200F]; // 0xB59 - 0x2B68
   CountdownTimer m_repathTimer; // 0x2B68 - 0x2B80
   CountdownTimer m_inhibitDoorTimer; // 0x2B80 - 0x2B98
   unsigned char pad_2B98[0x78]; // 0x2B98 - 0x2C10
   CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2C10 - 0x2C28
   unsigned char pad_2C28[0x8]; // 0x2C28 - 0x2C30
   CountdownTimer m_wiggleTimer; // 0x2C30 - 0x2C48
   unsigned char pad_2C48[0x4]; // 0x2C48 - 0x2C4C
   bool m_isAdjusted; // 0x2C4C - 0x2C4D
   bool m_bHandsHaveBeenCut; // 0x2C4D - 0x2C4E
   unsigned char pad_2C4E[0x2]; // 0x2C4E - 0x2C50
   CHandle< CCSPlayerPawn > m_hHostageGrabber; // 0x2C50 - 0x2C54
   GameTime_t m_fLastGrabTime; // 0x2C54 - 0x2C58
   Vector m_vecPositionWhenStartedDroppingToGround; // 0x2C58 - 0x2C64
   Vector m_vecGrabbedPos; // 0x2C64 - 0x2C70
   GameTime_t m_flRescueStartTime; // 0x2C70 - 0x2C74
   GameTime_t m_flGrabSuccessTime; // 0x2C74 - 0x2C78
   GameTime_t m_flDropStartTime; // 0x2C78 - 0x2C7C
   int32_t m_nApproachRewardPayouts; // 0x2C7C - 0x2C80
   int32_t m_nPickupEventCount; // 0x2C80 - 0x2C84
   Vector m_vecSpawnGroundPos; // 0x2C84 - 0x2C90
   unsigned char pad_2C90[0x14]; // 0x2C90 - 0x2CA4
   Vector m_vecHostageResetPosition; // 0x2CA4 - 0x2CB0
}; // size - 0x2CB0


class CHostageRescueZoneShim /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   unsigned char pad_0[0xCD8]; // 0x0 - 0xCD8
}; // size - 0xCD8


class CHostageRescueZoneShim /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_0[0x8B8]; // 0x0 - 0x8B8
}; // size - 0x8B8


class CInferno /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   unsigned char pad_710[0x10]; // 0x710 - 0x720
   Vector m_firePositions[64]; // 0x720 - 0xA20
   Vector m_fireParentPositions[64]; // 0xA20 - 0xD20
   bool m_bFireIsBurning[64]; // 0xD20 - 0xD60
   Vector m_BurnNormal[64]; // 0xD60 - 0x1060
   int32_t m_fireCount; // 0x1060 - 0x1064
   int32_t m_nInfernoType; // 0x1064 - 0x1068
   int32_t m_nFireEffectTickBegin; // 0x1068 - 0x106C
   float m_nFireLifetime; // 0x106C - 0x1070
   bool m_bInPostEffectTime; // 0x1070 - 0x1071
   unsigned char pad_1071[0x3]; // 0x1071 - 0x1074
   int32_t m_nFiresExtinguishCount; // 0x1074 - 0x1078
   bool m_bWasCreatedInSmoke; // 0x1078 - 0x1079
   unsigned char pad_1079[0x207]; // 0x1079 - 0x1280
   Extent m_extent; // 0x1280 - 0x1298
   CountdownTimer m_damageTimer; // 0x1298 - 0x12B0
   CountdownTimer m_damageRampTimer; // 0x12B0 - 0x12C8
   Vector m_splashVelocity; // 0x12C8 - 0x12D4
   Vector m_InitialSplashVelocity; // 0x12D4 - 0x12E0
   Vector m_startPos; // 0x12E0 - 0x12EC
   Vector m_vecOriginalSpawnLocation; // 0x12EC - 0x12F8
   IntervalTimer m_activeTimer; // 0x12F8 - 0x1308
   int32_t m_fireSpawnOffset; // 0x1308 - 0x130C
   int32_t m_nMaxFlames; // 0x130C - 0x1310
   int32_t m_nSpreadCount; // 0x1310 - 0x1314
   unsigned char pad_1314[0x4]; // 0x1314 - 0x1318
   CountdownTimer m_BookkeepingTimer; // 0x1318 - 0x1330
   CountdownTimer m_NextSpreadTimer; // 0x1330 - 0x1348
   uint16_t m_nSourceItemDefIndex; // 0x1348 - 0x134A
   unsigned char pad_134A[0x4E]; // 0x134A - 0x1398
}; // size - 0x1398


class CInfoDynamicShadowHint /* "client" */ : public C_PointEntity /* "client" */
{
public:
   bool m_bDisabled; // 0x550 - 0x551
   unsigned char pad_551[0x3]; // 0x551 - 0x554
   float m_flRange; // 0x554 - 0x558
   int32_t m_nImportance; // 0x558 - 0x55C
   int32_t m_nLightChoice; // 0x55C - 0x560
   CHandle< C_BaseEntity > m_hLight; // 0x560 - 0x564
   unsigned char pad_564[0x4]; // 0x564 - 0x568
}; // size - 0x568


class CInfoDynamicShadowHint /* "server" */ : public CPointEntity /* "server" */
{
public:
   bool m_bDisabled; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x3]; // 0x4C1 - 0x4C4
   float m_flRange; // 0x4C4 - 0x4C8
   int32_t m_nImportance; // 0x4C8 - 0x4CC
   int32_t m_nLightChoice; // 0x4CC - 0x4D0
   CHandle< CBaseEntity > m_hLight; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0x4]; // 0x4D4 - 0x4D8
}; // size - 0x4D8


class CItemAssaultSuit /* "server" */ : public CItem /* "server" */
{
public:
   unsigned char pad_0[0x9C0]; // 0x0 - 0x9C0
}; // size - 0x9C0


class CLightDirectionalEntity /* "server" */ : public CLightEntity /* "server" */
{
public:
   unsigned char pad_0[0x718]; // 0x0 - 0x718
}; // size - 0x718


class CLogicAutosave /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   bool m_bForceNewLevelUnit; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x3]; // 0x4C1 - 0x4C4
   int32_t m_minHitPoints; // 0x4C4 - 0x4C8
   int32_t m_minHitPointsToCommit; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4]; // 0x4CC - 0x4D0
}; // size - 0x4D0


class CLogicNPCCounterAABB /* "server" */ : public CLogicNPCCounter /* "server" */
{
public:
   Vector m_vDistanceOuterMins; // 0x800 - 0x80C
   Vector m_vDistanceOuterMaxs; // 0x80C - 0x818
   Vector m_vOuterMins; // 0x818 - 0x824
   Vector m_vOuterMaxs; // 0x824 - 0x830
}; // size - 0x830


class CMolotovGrenade /* "server" */ : public CBaseCSGrenade /* "server" */
{
public:
   unsigned char pad_0[0xEC0]; // 0x0 - 0xEC0
}; // size - 0xEC0


class CNavVolumeSphere /* "navlib" */ : public CNavVolume /* "navlib" */
{
public:
   Vector m_vCenter; // 0x70 - 0x7C
   float m_flRadius; // 0x7C - 0x80
}; // size - 0x80


class CPathKeyFrame /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   Vector m_Origin; // 0x4C0 - 0x4CC
   QAngle m_Angles; // 0x4CC - 0x4D8
   unsigned char pad_4D8[0x8]; // 0x4D8 - 0x4E0
   Quaternion m_qAngle; // 0x4E0 - 0x4F0
   CUtlSymbolLarge m_iNextKey; // 0x4F0 - 0x4F8
   float m_flNextTime; // 0x4F8 - 0x4FC
   unsigned char pad_4FC[0x4]; // 0x4FC - 0x500
   CPathKeyFrame* m_pNextKey; // 0x500 - 0x508
   CPathKeyFrame* m_pPrevKey; // 0x508 - 0x510
   float m_flSpeed; // 0x510 - 0x514
   unsigned char pad_514[0xC]; // 0x514 - 0x520
}; // size - 0x520


class CPlayer_MovementServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   int32_t m_nImpulse; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
   CInButtonState m_nButtons; // 0x48 - 0x68
   uint64_t m_nQueuedButtonDownMask; // 0x68 - 0x70
   uint64_t m_nQueuedButtonChangeMask; // 0x70 - 0x78
   uint64_t m_nButtonDoublePressed; // 0x78 - 0x80
   uint32 m_pButtonPressedCmdNumber[64]; // 0x80 - 0x180
   uint32_t m_nLastCommandNumberProcessed; // 0x180 - 0x184
   unsigned char pad_184[0x4]; // 0x184 - 0x188
   uint64_t m_nToggleButtonDownMask; // 0x188 - 0x190
   unsigned char pad_190[0x8]; // 0x190 - 0x198
   float m_flMaxspeed; // 0x198 - 0x19C
   float32 m_arrForceSubtickMoveWhen[4]; // 0x19C - 0x1AC
   float m_flForwardMove; // 0x1AC - 0x1B0
   float m_flLeftMove; // 0x1B0 - 0x1B4
   float m_flUpMove; // 0x1B4 - 0x1B8
   Vector m_vecLastMovementImpulses; // 0x1B8 - 0x1C4
   QAngle m_vecOldViewAngles; // 0x1C4 - 0x1D0
   unsigned char pad_1D0[0x8]; // 0x1D0 - 0x1D8
}; // size - 0x1D8


class CPointClientUIWorldPanel /* "server" */ : public CBaseClientUIEntity /* "server" */
{
public:
   bool m_bIgnoreInput; // 0x8C0 - 0x8C1
   bool m_bLit; // 0x8C1 - 0x8C2
   bool m_bFollowPlayerAcrossTeleport; // 0x8C2 - 0x8C3
   unsigned char pad_8C3[0x1]; // 0x8C3 - 0x8C4
   float m_flWidth; // 0x8C4 - 0x8C8
   float m_flHeight; // 0x8C8 - 0x8CC
   float m_flDPI; // 0x8CC - 0x8D0
   float m_flInteractDistance; // 0x8D0 - 0x8D4
   float m_flDepthOffset; // 0x8D4 - 0x8D8
   uint32_t m_unOwnerContext; // 0x8D8 - 0x8DC
   uint32_t m_unHorizontalAlign; // 0x8DC - 0x8E0
   uint32_t m_unVerticalAlign; // 0x8E0 - 0x8E4
   uint32_t m_unOrientation; // 0x8E4 - 0x8E8
   bool m_bAllowInteractionFromAllSceneWorlds; // 0x8E8 - 0x8E9
   unsigned char pad_8E9[0x7]; // 0x8E9 - 0x8F0
   CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x8F0 - 0x908
   bool m_bOpaque; // 0x908 - 0x909
   bool m_bNoDepth; // 0x909 - 0x90A
   bool m_bRenderBackface; // 0x90A - 0x90B
   bool m_bUseOffScreenIndicator; // 0x90B - 0x90C
   bool m_bExcludeFromSaveGames; // 0x90C - 0x90D
   bool m_bGrabbable; // 0x90D - 0x90E
   bool m_bOnlyRenderToTexture; // 0x90E - 0x90F
   bool m_bDisableMipGen; // 0x90F - 0x910
   int32_t m_nExplicitImageLayout; // 0x910 - 0x914
   unsigned char pad_914[0x4]; // 0x914 - 0x918
}; // size - 0x918


class CPropDoorRotating /* "server" */ : public CBasePropDoor /* "server" */
{
public:
   Vector m_vecAxis; // 0xDF0 - 0xDFC
   float m_flDistance; // 0xDFC - 0xE00
   PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xE00 - 0xE04
   PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xE04 - 0xE08
   PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xE08 - 0xE0C
   float m_flAjarAngle; // 0xE0C - 0xE10
   QAngle m_angRotationAjarDeprecated; // 0xE10 - 0xE1C
   QAngle m_angRotationClosed; // 0xE1C - 0xE28
   QAngle m_angRotationOpenForward; // 0xE28 - 0xE34
   QAngle m_angRotationOpenBack; // 0xE34 - 0xE40
   QAngle m_angGoal; // 0xE40 - 0xE4C
   Vector m_vecForwardBoundsMin; // 0xE4C - 0xE58
   Vector m_vecForwardBoundsMax; // 0xE58 - 0xE64
   Vector m_vecBackBoundsMin; // 0xE64 - 0xE70
   Vector m_vecBackBoundsMax; // 0xE70 - 0xE7C
   bool m_bAjarDoorShouldntAlwaysOpen; // 0xE7C - 0xE7D
   unsigned char pad_E7D[0x3]; // 0xE7D - 0xE80
   CHandle< CEntityBlocker > m_hEntityBlocker; // 0xE80 - 0xE84
   unsigned char pad_E84[0x4]; // 0xE84 - 0xE88
}; // size - 0xE88


class CRuleBrushEntity /* "server" */ : public CRuleEntity /* "server" */
{
public:
   unsigned char pad_0[0x718]; // 0x0 - 0x718
}; // size - 0x718


class CSPerRoundStats_t /* "client" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
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
   unsigned char pad_64[0x4]; // 0x64 - 0x68
}; // size - 0x68


class CSpinUpdateBase /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   unsigned char pad_0[0x1C0]; // 0x0 - 0x1C0
}; // size - 0x1C0


class CTeam /* "server" */ : public CBaseEntity /* "server" */
{
public:
   CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x4C0 - 0x4D8
   CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers; // 0x4D8 - 0x4F0
   int32_t m_iScore; // 0x4F0 - 0x4F4
   char m_szTeamname[129]; // 0x4F4 - 0x575
   unsigned char pad_575[0x3]; // 0x575 - 0x578
}; // size - 0x578


class CTonemapController2 /* "server" */ : public CBaseEntity /* "server" */
{
public:
   float m_flAutoExposureMin; // 0x4C0 - 0x4C4
   float m_flAutoExposureMax; // 0x4C4 - 0x4C8
   float m_flTonemapPercentTarget; // 0x4C8 - 0x4CC
   float m_flTonemapPercentBrightPixels; // 0x4CC - 0x4D0
   float m_flTonemapMinAvgLum; // 0x4D0 - 0x4D4
   float m_flExposureAdaptationSpeedUp; // 0x4D4 - 0x4D8
   float m_flExposureAdaptationSpeedDown; // 0x4D8 - 0x4DC
   float m_flTonemapEVSmoothingRange; // 0x4DC - 0x4E0
   unsigned char pad_4E0[0x8]; // 0x4E0 - 0x4E8
}; // size - 0x4E8


class CWeaponBaseItem /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   CountdownTimer m_SequenceCompleteTimer; // 0xE90 - 0xEA8
   bool m_bRedraw; // 0xEA8 - 0xEA9
   unsigned char pad_EA9[0x7]; // 0xEA9 - 0xEB0
}; // size - 0xEB0


class C_BasePropDoor /* "client" */ : public C_DynamicProp /* "client" */
{
public:
   unsigned char pad_1140[0x10]; // 0x1140 - 0x1150
   DoorState_t m_eDoorState; // 0x1150 - 0x1154
   bool m_modelChanged; // 0x1154 - 0x1155
   bool m_bLocked; // 0x1155 - 0x1156
   unsigned char pad_1156[0x2]; // 0x1156 - 0x1158
   Vector m_closedPosition; // 0x1158 - 0x1164
   QAngle m_closedAngles; // 0x1164 - 0x1170
   CHandle< C_BasePropDoor > m_hMaster; // 0x1170 - 0x1174
   Vector m_vWhereToSetLightingOrigin; // 0x1174 - 0x1180
}; // size - 0x1180


class C_CSGO_PreviewModel /* "client" */ : public C_BaseFlex /* "client" */
{
public:
   CUtlString m_animgraph; // 0x1070 - 0x1078
   CGlobalSymbol m_animgraphCharacterModeString; // 0x1078 - 0x1080
   CUtlString m_defaultAnim; // 0x1080 - 0x1088
   AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x1088 - 0x108C
   float m_flInitialModelScale; // 0x108C - 0x1090
   CUtlString m_sInitialWeaponState; // 0x1090 - 0x1098
   unsigned char pad_1098[0x4F8]; // 0x1098 - 0x1590
}; // size - 0x1590


class C_EnvCubemap /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_550[0x80]; // 0x550 - 0x5D0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x5D0 - 0x5D8
   bool m_bCustomCubemapTexture; // 0x5D8 - 0x5D9
   unsigned char pad_5D9[0x3]; // 0x5D9 - 0x5DC
   float m_flInfluenceRadius; // 0x5DC - 0x5E0
   Vector m_vBoxProjectMins; // 0x5E0 - 0x5EC
   Vector m_vBoxProjectMaxs; // 0x5EC - 0x5F8
   bool m_bMoveable; // 0x5F8 - 0x5F9
   unsigned char pad_5F9[0x3]; // 0x5F9 - 0x5FC
   int32_t m_nHandshake; // 0x5FC - 0x600
   int32_t m_nEnvCubeMapArrayIndex; // 0x600 - 0x604
   int32_t m_nPriority; // 0x604 - 0x608
   float m_flEdgeFadeDist; // 0x608 - 0x60C
   Vector m_vEdgeFadeDists; // 0x60C - 0x618
   float m_flDiffuseScale; // 0x618 - 0x61C
   bool m_bStartDisabled; // 0x61C - 0x61D
   bool m_bDefaultEnvMap; // 0x61D - 0x61E
   bool m_bDefaultSpecEnvMap; // 0x61E - 0x61F
   bool m_bIndoorCubeMap; // 0x61F - 0x620
   bool m_bCopyDiffuseFromDefaultCubemap; // 0x620 - 0x621
   unsigned char pad_621[0xF]; // 0x621 - 0x630
   bool m_bEnabled; // 0x630 - 0x631
   unsigned char pad_631[0x7]; // 0x631 - 0x638
}; // size - 0x638


class C_GameRulesProxy /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class C_Inferno /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_CD0[0x40]; // 0xCD0 - 0xD10
   ParticleIndex_t m_nfxFireDamageEffect; // 0xD10 - 0xD14
   Vector m_firePositions[64]; // 0xD14 - 0x1014
   Vector m_fireParentPositions[64]; // 0x1014 - 0x1314
   bool m_bFireIsBurning[64]; // 0x1314 - 0x1354
   Vector m_BurnNormal[64]; // 0x1354 - 0x1654
   int32_t m_fireCount; // 0x1654 - 0x1658
   int32_t m_nInfernoType; // 0x1658 - 0x165C
   float m_nFireLifetime; // 0x165C - 0x1660
   bool m_bInPostEffectTime; // 0x1660 - 0x1661
   unsigned char pad_1661[0x3]; // 0x1661 - 0x1664
   int32_t m_lastFireCount; // 0x1664 - 0x1668
   int32_t m_nFireEffectTickBegin; // 0x1668 - 0x166C
   unsigned char pad_166C[0x6C04]; // 0x166C - 0x8270
   int32_t m_drawableCount; // 0x8270 - 0x8274
   bool m_blosCheck; // 0x8274 - 0x8275
   unsigned char pad_8275[0x3]; // 0x8275 - 0x8278
   int32_t m_nlosperiod; // 0x8278 - 0x827C
   float m_maxFireHalfWidth; // 0x827C - 0x8280
   float m_maxFireHeight; // 0x8280 - 0x8284
   Vector m_minBounds; // 0x8284 - 0x8290
   Vector m_maxBounds; // 0x8290 - 0x829C
   float m_flLastGrassBurnThink; // 0x829C - 0x82A0
   unsigned char pad_82A0[0x10]; // 0x82A0 - 0x82B0
}; // size - 0x82B0


class C_Item /* "client" */ : public C_EconEntity /* "client" */
{
public:
   bool m_bShouldGlow; // 0x15B8 - 0x15B9
   char m_pReticleHintTextName[256]; // 0x15B9 - 0x16B9
   unsigned char pad_16B9[0x7]; // 0x16B9 - 0x16C0
}; // size - 0x16C0


class C_LightEntity /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   CLightComponent* m_CLightComponent; // 0xCD0 - 0xCD8
}; // size - 0xCD8


class C_MolotovGrenade /* "client" */ : public C_BaseCSGrenade /* "client" */
{
public:
   unsigned char pad_0[0x1AB0]; // 0x0 - 0x1AB0
}; // size - 0x1AB0


class C_OP_RemapDistanceToLineSegmentBase /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCP0; // 0x1C0 - 0x1C4
   int32_t m_nCP1; // 0x1C4 - 0x1C8
   float m_flMinInputValue; // 0x1C8 - 0x1CC
   float m_flMaxInputValue; // 0x1CC - 0x1D0
   bool m_bInfiniteLine; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0xF]; // 0x1D1 - 0x1E0
}; // size - 0x1E0


class C_OP_RenderPoints /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x200 - 0x208
   unsigned char pad_208[0x8]; // 0x208 - 0x210
}; // size - 0x210


class C_PathParticleRope /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   bool m_bStartActive; // 0x550 - 0x551
   unsigned char pad_551[0x3]; // 0x551 - 0x554
   float m_flMaxSimulationTime; // 0x554 - 0x558
   CUtlSymbolLarge m_iszEffectName; // 0x558 - 0x560
   CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x560 - 0x578
   float m_flParticleSpacing; // 0x578 - 0x57C
   float m_flSlack; // 0x57C - 0x580
   float m_flRadius; // 0x580 - 0x584
   Color m_ColorTint; // 0x584 - 0x588
   int32_t m_nEffectState; // 0x588 - 0x58C
   unsigned char pad_58C[0x4]; // 0x58C - 0x590
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x590 - 0x598
   C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x598 - 0x5B0
   C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x5B0 - 0x5C8
   C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x5C8 - 0x5E0
   C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x5E0 - 0x5F8
   C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x5F8 - 0x610
   C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x610 - 0x628
   unsigned char pad_628[0x30]; // 0x628 - 0x658
}; // size - 0x658


class C_PointCamera /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   float m_FOV; // 0x550 - 0x554
   float m_Resolution; // 0x554 - 0x558
   bool m_bFogEnable; // 0x558 - 0x559
   Color m_FogColor; // 0x559 - 0x55D
   unsigned char pad_55D[0x3]; // 0x55D - 0x560
   float m_flFogStart; // 0x560 - 0x564
   float m_flFogEnd; // 0x564 - 0x568
   float m_flFogMaxDensity; // 0x568 - 0x56C
   bool m_bActive; // 0x56C - 0x56D
   bool m_bUseScreenAspectRatio; // 0x56D - 0x56E
   unsigned char pad_56E[0x2]; // 0x56E - 0x570
   float m_flAspectRatio; // 0x570 - 0x574
   bool m_bNoSky; // 0x574 - 0x575
   unsigned char pad_575[0x3]; // 0x575 - 0x578
   float m_fBrightness; // 0x578 - 0x57C
   float m_flZFar; // 0x57C - 0x580
   float m_flZNear; // 0x580 - 0x584
   bool m_bCanHLTVUse; // 0x584 - 0x585
   bool m_bDofEnabled; // 0x585 - 0x586
   unsigned char pad_586[0x2]; // 0x586 - 0x588
   float m_flDofNearBlurry; // 0x588 - 0x58C
   float m_flDofNearCrisp; // 0x58C - 0x590
   float m_flDofFarCrisp; // 0x590 - 0x594
   float m_flDofFarBlurry; // 0x594 - 0x598
   float m_flDofTiltToGround; // 0x598 - 0x59C
   float m_TargetFOV; // 0x59C - 0x5A0
   float m_DegreesPerSecond; // 0x5A0 - 0x5A4
   bool m_bIsOn; // 0x5A4 - 0x5A5
   unsigned char pad_5A5[0x3]; // 0x5A5 - 0x5A8
   C_PointCamera* m_pNext; // 0x5A8 - 0x5B0
}; // size - 0x5B0


class C_TeamplayRules /* "client" */ : public C_MultiplayRules /* "client" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class C_WeaponBaseItem /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   CountdownTimer m_SequenceCompleteTimer; // 0x1A70 - 0x1A88
   bool m_bRedraw; // 0x1A88 - 0x1A89
   unsigned char pad_1A89[0x7]; // 0x1A89 - 0x1A90
}; // size - 0x1A90


class IClientAlphaProperty /* "client" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class Relationship_t /* "server" */
{
public:
   Disposition_t disposition; // 0x0 - 0x4
   int32_t priority; // 0x4 - 0x8
}; // size - 0x8


class SpawnPointCoopEnemy /* "server" */ : public SpawnPoint /* "server" */
{
public:

   enum class BotDefaultBehavior_t : std::uint32_t
   {
      DEFEND_AREA = 0,
      HUNT = 1,
      CHARGE_ENEMY = 2,
      DEFEND_INVESTIGATE = 3
   };
   CUtlSymbolLarge m_szWeaponsToGive; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_szPlayerModelToUse; // 0x4D8 - 0x4E0
   int32_t m_nArmorToSpawnWith; // 0x4E0 - 0x4E4
   SpawnPointCoopEnemy::BotDefaultBehavior_t m_nDefaultBehavior; // 0x4E4 - 0x4E8
   int32_t m_nBotDifficulty; // 0x4E8 - 0x4EC
   bool m_bIsAgressive; // 0x4EC - 0x4ED
   bool m_bStartAsleep; // 0x4ED - 0x4EE
   unsigned char pad_4EE[0x2]; // 0x4EE - 0x4F0
   float m_flHideRadius; // 0x4F0 - 0x4F4
   unsigned char pad_4F4[0xC]; // 0x4F4 - 0x500
   CUtlSymbolLarge m_szBehaviorTreeFile; // 0x500 - 0x508
}; // size - 0x508


class ActiveModelConfig_t /* "server" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
   ModelConfigHandle_t m_Handle; // 0x28 - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
   CUtlSymbolLarge m_Name; // 0x30 - 0x38
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_AssociatedEntities; // 0x38 - 0x50
   CNetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x50 - 0x68
}; // size - 0x68


class AggregateLODSetup_t /* "worldrenderer" */
{
public:
   Vector m_vLODOrigin; // 0x0 - 0xC
   float m_fMaxObjectScale; // 0xC - 0x10
   CUtlVectorFixedGrowable< float32 > m_fSwitchDistances; // 0x10 - 0x38
}; // size - 0x38


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


class AmmoIndex_t /* "server" */
{
public:
   int8_t m_Value; // 0x0 - 0x1
}; // size - 0x1


class AnimScriptHandle /* "modellib" */
{
public:
   uint32_t m_id; // 0x0 - 0x4
}; // size - 0x4


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


class CAISound /* "server" */ : public CPointEntity /* "server" */
{
public:
   int32_t m_iSoundType; // 0x4C0 - 0x4C4
   int32_t m_iSoundContext; // 0x4C4 - 0x4C8
   int32_t m_iVolume; // 0x4C8 - 0x4CC
   int32_t m_iSoundIndex; // 0x4CC - 0x4D0
   float m_flDuration; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0x4]; // 0x4D4 - 0x4D8
   CUtlSymbolLarge m_iszProxyEntityName; // 0x4D8 - 0x4E0
}; // size - 0x4E0


class CAK47 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CAimMatrixUpdateNode /* "animgraphlib" */ : public CUnaryUpdateNode /* "animgraphlib" */
{
public:
   unsigned char pad_68[0x8]; // 0x68 - 0x70
   AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70 - 0x140
   unsigned char pad_140[0x8]; // 0x140 - 0x148
   AnimVectorSource m_target; // 0x148 - 0x14C
   CAnimParamHandle m_paramIndex; // 0x14C - 0x14E
   unsigned char pad_14E[0x2]; // 0x14E - 0x150
   HSequence m_hSequence; // 0x150 - 0x154
   bool m_bResetChild; // 0x154 - 0x155
   bool m_bLockWhenWaning; // 0x155 - 0x156
   unsigned char pad_156[0xA]; // 0x156 - 0x160
}; // size - 0x160


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


class CAnimEventDefinition /* "animationsystem" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_nFrame; // 0x8 - 0xC
   float m_flCycle; // 0xC - 0x10
   KeyValues3 m_EventData; // 0x10 - 0x20
   CBufferString m_sLegacyOptions; // 0x20 - 0x30
   CGlobalSymbol m_sEventName; // 0x30 - 0x38
}; // size - 0x38


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


class CAnimParameterBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CGlobalSymbol m_name; // 0x18 - 0x20
   CUtlString m_group; // 0x20 - 0x28
   AnimParamID m_id; // 0x28 - 0x2C
   unsigned char pad_2C[0x14]; // 0x2C - 0x40
   CUtlString m_componentName; // 0x40 - 0x48
   unsigned char pad_48[0x18]; // 0x48 - 0x60
   bool m_bNetworkingRequested; // 0x60 - 0x61
   bool m_bIsReferenced; // 0x61 - 0x62
   unsigned char pad_62[0x6]; // 0x62 - 0x68
}; // size - 0x68


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


class CAnimTagBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CGlobalSymbol m_name; // 0x18 - 0x20
   CGlobalSymbol m_group; // 0x20 - 0x28
   AnimTagID m_tagID; // 0x28 - 0x2C
   unsigned char pad_2C[0x14]; // 0x2C - 0x40
   bool m_bIsReferenced; // 0x40 - 0x41
   unsigned char pad_41[0x7]; // 0x41 - 0x48
}; // size - 0x48


class CAnimUpdateNodeRef /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_nodeIndex; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class CAttributeManager /* "client" */
{
public:
   class cached_attribute_float_t /* "client" */
   {
   public:
      float flIn; // 0x0 - 0x4
      unsigned char pad_4[0x4]; // 0x4 - 0x8
      CUtlSymbolLarge iAttribHook; // 0x8 - 0x10
      float flOut; // 0x10 - 0x14
      unsigned char pad_14[0x4]; // 0x14 - 0x18
   }; // size - 0x18

   class cached_attribute_float_t /* "server" */
   {
   public:
      float flIn; // 0x0 - 0x4
      unsigned char pad_4[0x4]; // 0x4 - 0x8
      CUtlSymbolLarge iAttribHook; // 0x8 - 0x10
      float flOut; // 0x10 - 0x14
      unsigned char pad_14[0x4]; // 0x14 - 0x18
   }; // size - 0x18

   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlVector< CHandle< C_BaseEntity > > m_Providers; // 0x8 - 0x20
   int32_t m_iReapplyProvisionParity; // 0x20 - 0x24
   CHandle< C_BaseEntity > m_hOuter; // 0x24 - 0x28
   bool m_bPreventLoopback; // 0x28 - 0x29
   unsigned char pad_29[0x3]; // 0x29 - 0x2C
   attributeprovidertypes_t m_ProviderType; // 0x2C - 0x30
   CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x30 - 0x48
   unsigned char pad_48[0x8]; // 0x48 - 0x50
}; // size - 0x50




class CBaseAnimGraphController /* "client" */ : public CSkeletonAnimationController /* "client" */
{
public:
   unsigned char pad_10[0x8]; // 0x10 - 0x18
   CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18 - 0x14A8
   bool m_bSequenceFinished; // 0x14A8 - 0x14A9
   unsigned char pad_14A9[0x3]; // 0x14A9 - 0x14AC
   float m_flSoundSyncTime; // 0x14AC - 0x14B0
   HSequence m_hSequence; // 0x14B0 - 0x14B4
   GameTime_t m_flSeqStartTime; // 0x14B4 - 0x14B8
   float m_flSeqFixedCycle; // 0x14B8 - 0x14BC
   AnimLoopMode_t m_nAnimLoopMode; // 0x14BC - 0x14C0
   CNetworkedQuantizedFloat m_flPlaybackRate; // 0x14C0 - 0x14C8
   unsigned char pad_14C8[0x4]; // 0x14C8 - 0x14CC
   SequenceFinishNotifyState_t m_nNotifyState; // 0x14CC - 0x14CD
   unsigned char pad_14CD[0x1]; // 0x14CD - 0x14CE
   bool m_bNetworkedAnimationInputsChanged; // 0x14CE - 0x14CF
   bool m_bNetworkedSequenceChanged; // 0x14CF - 0x14D0
   bool m_bLastUpdateSkipped; // 0x14D0 - 0x14D1
   unsigned char pad_14D1[0x3]; // 0x14D1 - 0x14D4
   GameTime_t m_flPrevAnimUpdateTime; // 0x14D4 - 0x14D8
   unsigned char pad_14D8[0x2F0]; // 0x14D8 - 0x17C8
}; // size - 0x17C8


class CBaseFlexAlias_funCBaseFlex /* "server" */ : public CBaseFlex /* "server" */
{
public:
   unsigned char pad_0[0x978]; // 0x0 - 0x978
}; // size - 0x978


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


class CBaseMoveBehavior /* "server" */ : public CPathKeyFrame /* "server" */
{
public:
   int32_t m_iPositionInterpolator; // 0x520 - 0x524
   int32_t m_iRotationInterpolator; // 0x524 - 0x528
   float m_flAnimStartTime; // 0x528 - 0x52C
   float m_flAnimEndTime; // 0x52C - 0x530
   float m_flAverageSpeedAcrossFrame; // 0x530 - 0x534
   unsigned char pad_534[0x4]; // 0x534 - 0x538
   CPathKeyFrame* m_pCurrentKeyFrame; // 0x538 - 0x540
   CPathKeyFrame* m_pTargetKeyFrame; // 0x540 - 0x548
   CPathKeyFrame* m_pPreKeyFrame; // 0x548 - 0x550
   CPathKeyFrame* m_pPostKeyFrame; // 0x550 - 0x558
   float m_flTimeIntoFrame; // 0x558 - 0x55C
   int32_t m_iDirection; // 0x55C - 0x560
}; // size - 0x560


class CBasePlayerController /* "server" */ : public CBaseEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x8]; // 0x4C0 - 0x4C8
   uint64_t m_nInButtonsWhichAreToggles; // 0x4C8 - 0x4D0
   uint32_t m_nTickBase; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0x2C]; // 0x4D4 - 0x500
   CHandle< CBasePlayerPawn > m_hPawn; // 0x500 - 0x504
   CSplitScreenSlot m_nSplitScreenSlot; // 0x504 - 0x508
   CHandle< CBasePlayerController > m_hSplitOwner; // 0x508 - 0x50C
   unsigned char pad_50C[0x4]; // 0x50C - 0x510
   CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x510 - 0x528
   bool m_bIsHLTV; // 0x528 - 0x529
   unsigned char pad_529[0x3]; // 0x529 - 0x52C
   PlayerConnectedState m_iConnected; // 0x52C - 0x530
   char m_iszPlayerName[128]; // 0x530 - 0x5B0
   CUtlString m_szNetworkIDString; // 0x5B0 - 0x5B8
   float m_fLerpTime; // 0x5B8 - 0x5BC
   bool m_bLagCompensation; // 0x5BC - 0x5BD
   bool m_bPredict; // 0x5BD - 0x5BE
   bool m_bAutoKickDisabled; // 0x5BE - 0x5BF
   bool m_bIsLowViolence; // 0x5BF - 0x5C0
   bool m_bGamePaused; // 0x5C0 - 0x5C1
   unsigned char pad_5C1[0x93]; // 0x5C1 - 0x654
   int32_t m_nLastRealCommandNumberExecuted; // 0x654 - 0x658
   int32_t m_nLastLateCommandExecuted; // 0x658 - 0x65C
   unsigned char pad_65C[0x14]; // 0x65C - 0x670
   ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x670 - 0x674
   float m_flLastPlayerTalkTime; // 0x674 - 0x678
   float m_flLastEntitySteadyState; // 0x678 - 0x67C
   int32_t m_nAvailableEntitySteadyState; // 0x67C - 0x680
   bool m_bHasAnySteadyStateEnts; // 0x680 - 0x681
   unsigned char pad_681[0xF]; // 0x681 - 0x690
   uint64_t m_steamID; // 0x690 - 0x698
   uint32_t m_iDesiredFOV; // 0x698 - 0x69C
   unsigned char pad_69C[0x1C]; // 0x69C - 0x6B8
}; // size - 0x6B8


class CBasePlayerControllerAPI /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CBasePlayerVData /* "client" */ : public CEntitySubclassVDataBase /* "client" */
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


class CBasePlayerVData /* "server" */ : public CEntitySubclassVDataBase /* "server" */
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


class CBasePlayerWeaponVData /* "server" */ : public CEntitySubclassVDataBase /* "server" */
{
public:
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x28 - 0x108
   bool m_bBuiltRightHanded; // 0x108 - 0x109
   bool m_bAllowFlipping; // 0x109 - 0x10A
   unsigned char pad_10A[0x6]; // 0x10A - 0x110
   CUtlString m_sMuzzleAttachment; // 0x110 - 0x118
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x118 - 0x1F8
   ItemFlagTypes_t m_iFlags; // 0x1F8 - 0x1F9
   AmmoIndex_t m_nPrimaryAmmoType; // 0x1F9 - 0x1FA
   AmmoIndex_t m_nSecondaryAmmoType; // 0x1FA - 0x1FB
   unsigned char pad_1FB[0x1]; // 0x1FB - 0x1FC
   int32_t m_iMaxClip1; // 0x1FC - 0x200
   int32_t m_iMaxClip2; // 0x200 - 0x204
   int32_t m_iDefaultClip1; // 0x204 - 0x208
   int32_t m_iDefaultClip2; // 0x208 - 0x20C
   int32_t m_iWeight; // 0x20C - 0x210
   bool m_bAutoSwitchTo; // 0x210 - 0x211
   bool m_bAutoSwitchFrom; // 0x211 - 0x212
   unsigned char pad_212[0x2]; // 0x212 - 0x214
   RumbleEffect_t m_iRumbleEffect; // 0x214 - 0x218
   bool m_bLinkedCooldowns; // 0x218 - 0x219
   unsigned char pad_219[0x7]; // 0x219 - 0x220
   CUtlMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x220 - 0x240
   int32_t m_iSlot; // 0x240 - 0x244
   int32_t m_iPosition; // 0x244 - 0x248
}; // size - 0x248


class CBaseViewModel /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   unsigned char pad_8E8[0x8]; // 0x8E8 - 0x8F0
   Vector m_vecLastFacing; // 0x8F0 - 0x8FC
   uint32_t m_nViewModelIndex; // 0x8FC - 0x900
   uint32_t m_nAnimationParity; // 0x900 - 0x904
   float m_flAnimationStartTime; // 0x904 - 0x908
   CHandle< CBasePlayerWeapon > m_hWeapon; // 0x908 - 0x90C
   unsigned char pad_90C[0x4]; // 0x90C - 0x910
   CUtlSymbolLarge m_sVMName; // 0x910 - 0x918
   CUtlSymbolLarge m_sAnimationPrefix; // 0x918 - 0x920
   HSequence m_hOldLayerSequence; // 0x920 - 0x924
   int32_t m_oldLayer; // 0x924 - 0x928
   float m_oldLayerStartTime; // 0x928 - 0x92C
   CHandle< CBaseEntity > m_hControlPanel; // 0x92C - 0x930
}; // size - 0x930


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


class CBlood /* "server" */ : public CPointEntity /* "server" */
{
public:
   QAngle m_vecSprayAngles; // 0x4C0 - 0x4CC
   Vector m_vecSprayDir; // 0x4CC - 0x4D8
   float m_flAmount; // 0x4D8 - 0x4DC
   int32_t m_Color; // 0x4DC - 0x4E0
}; // size - 0x4E0


class CBodyComponentBaseAnimGraph /* "server" */ : public CBodyComponentSkeletonInstance /* "server" */
{
public:
   CBaseAnimGraphController m_animationController; // 0x460 - 0x950
   CNetworkVarChainer __m_pChainEntity; // 0x950 - 0x978
   unsigned char pad_978[0x8]; // 0x978 - 0x980
}; // size - 0x980


class CBodyComponentBaseAnimGraph /* "client" */ : public CBodyComponentSkeletonInstance /* "client" */
{
public:
   CBaseAnimGraphController m_animationController; // 0x460 - 0x1C28
   CNetworkVarChainer __m_pChainEntity; // 0x1C28 - 0x1C50
}; // size - 0x1C50


class CBodyComponentBaseModelEntity /* "server" */ : public CBodyComponentSkeletonInstance /* "server" */
{
public:
   CNetworkVarChainer __m_pChainEntity; // 0x460 - 0x488
   unsigned char pad_488[0x8]; // 0x488 - 0x490
}; // size - 0x490


class CBodyComponentPoint /* "server" */ : public CBodyComponent /* "server" */
{
public:
   CGameSceneNode m_sceneNode; // 0x50 - 0x1A0
   CNetworkVarChainer __m_pChainEntity; // 0x1A0 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class CBodyComponentSkeletonInstance /* "client" */ : public CBodyComponent /* "client" */
{
public:
   CSkeletonInstance m_skeletonInstance; // 0x50 - 0x430
   CNetworkVarChainer __m_pChainEntity; // 0x430 - 0x458
   unsigned char pad_458[0x8]; // 0x458 - 0x460
}; // size - 0x460


class CBombTarget /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CEntityIOOutput m_OnBombExplode; // 0x8B8 - 0x8E0
   CEntityIOOutput m_OnBombPlanted; // 0x8E0 - 0x908
   CEntityIOOutput m_OnBombDefused; // 0x908 - 0x930
   bool m_bIsBombSiteB; // 0x930 - 0x931
   bool m_bIsHeistBombTarget; // 0x931 - 0x932
   bool m_bBombPlantedHere; // 0x932 - 0x933
   unsigned char pad_933[0x5]; // 0x933 - 0x938
   CUtlSymbolLarge m_szMountTarget; // 0x938 - 0x940
   CHandle< CBaseEntity > m_hInstructorHint; // 0x940 - 0x944
   int32_t m_nBombSiteDesignation; // 0x944 - 0x948
}; // size - 0x948


class CBombTarget /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   bool m_bBombPlantedHere; // 0xCD8 - 0xCD9
   unsigned char pad_CD9[0x7]; // 0xCD9 - 0xCE0
}; // size - 0xCE0


class CBoneVelocityMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   int32_t m_nBoneIndex; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
}; // size - 0x58


class CBreachCharge /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   unsigned char pad_0[0x1A70]; // 0x0 - 0x1A70
}; // size - 0x1A70


class CBreachCharge /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   unsigned char pad_0[0xE90]; // 0x0 - 0xE90
}; // size - 0xE90


class CBreachChargeProjectile /* "client" */ : public C_BaseGrenade /* "client" */
{
public:
   unsigned char pad_0[0x10C0]; // 0x0 - 0x10C0
}; // size - 0x10C0


class CBreachChargeProjectile /* "server" */ : public CBaseGrenade /* "server" */
{
public:
   unsigned char pad_0[0xA20]; // 0x0 - 0xA20
}; // size - 0xA20


class CBreakableStageHelper /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_nCurrentStage; // 0x8 - 0xC
   int32_t m_nStageCount; // 0xC - 0x10
   unsigned char pad_10[0x8]; // 0x10 - 0x18
}; // size - 0x18


class CBtActionAim /* "server" */ : public CBtNode /* "server" */
{
public:
   unsigned char pad_58[0x10]; // 0x58 - 0x68
   CUtlString m_szSensorInputKey; // 0x68 - 0x70
   unsigned char pad_70[0x10]; // 0x70 - 0x80
   CUtlString m_szAimReadyKey; // 0x80 - 0x88
   float m_flZoomCooldownTimestamp; // 0x88 - 0x8C
   bool m_bDoneAiming; // 0x8C - 0x8D
   unsigned char pad_8D[0x3]; // 0x8D - 0x90
   float m_flLerpStartTime; // 0x90 - 0x94
   float m_flNextLookTargetLerpTime; // 0x94 - 0x98
   float m_flPenaltyReductionRatio; // 0x98 - 0x9C
   QAngle m_NextLookTarget; // 0x9C - 0xA8
   CountdownTimer m_AimTimer; // 0xA8 - 0xC0
   CountdownTimer m_SniperHoldTimer; // 0xC0 - 0xD8
   CountdownTimer m_FocusIntervalTimer; // 0xD8 - 0xF0
   bool m_bAcquired; // 0xF0 - 0xF1
   unsigned char pad_F1[0x7]; // 0xF1 - 0xF8
}; // size - 0xF8


class CBtActionCombatPositioning /* "server" */ : public CBtNode /* "server" */
{
public:
   unsigned char pad_58[0x10]; // 0x58 - 0x68
   CUtlString m_szSensorInputKey; // 0x68 - 0x70
   unsigned char pad_70[0x10]; // 0x70 - 0x80
   CUtlString m_szIsAttackingKey; // 0x80 - 0x88
   CountdownTimer m_ActionTimer; // 0x88 - 0xA0
   bool m_bCrouching; // 0xA0 - 0xA1
   unsigned char pad_A1[0xF]; // 0xA1 - 0xB0
}; // size - 0xB0


class CBtActionMoveTo /* "server" */ : public CBtNode /* "server" */
{
public:
   unsigned char pad_58[0x8]; // 0x58 - 0x60
   CUtlString m_szDestinationInputKey; // 0x60 - 0x68
   CUtlString m_szHidingSpotInputKey; // 0x68 - 0x70
   CUtlString m_szThreatInputKey; // 0x70 - 0x78
   Vector m_vecDestination; // 0x78 - 0x84
   bool m_bAutoLookAdjust; // 0x84 - 0x85
   bool m_bComputePath; // 0x85 - 0x86
   unsigned char pad_86[0x2]; // 0x86 - 0x88
   float m_flDamagingAreasPenaltyCost; // 0x88 - 0x8C
   unsigned char pad_8C[0x4]; // 0x8C - 0x90
   CountdownTimer m_CheckApproximateCornersTimer; // 0x90 - 0xA8
   CountdownTimer m_CheckHighPriorityItem; // 0xA8 - 0xC0
   CountdownTimer m_RepathTimer; // 0xC0 - 0xD8
   float m_flArrivalEpsilon; // 0xD8 - 0xDC
   float m_flAdditionalArrivalEpsilon2D; // 0xDC - 0xE0
   float m_flHidingSpotCheckDistanceThreshold; // 0xE0 - 0xE4
   float m_flNearestAreaDistanceThreshold; // 0xE4 - 0xE8
}; // size - 0xE8


class CBtActionParachutePositioning /* "server" */ : public CBtNode /* "server" */
{
public:
   CountdownTimer m_ActionTimer; // 0x58 - 0x70
   unsigned char pad_70[0x8]; // 0x70 - 0x78
}; // size - 0x78


class CBtNodeComposite /* "server" */ : public CBtNode /* "server" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CBtNodeConditionInactive /* "server" */ : public CBtNodeCondition /* "server" */
{
public:
   unsigned char pad_60[0x18]; // 0x60 - 0x78
   float m_flRoundStartThresholdSeconds; // 0x78 - 0x7C
   float m_flSensorInactivityThresholdSeconds; // 0x7C - 0x80
   CountdownTimer m_SensorInactivityTimer; // 0x80 - 0x98
}; // size - 0x98


class CBumpMine /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   unsigned char pad_0[0xE90]; // 0x0 - 0xE90
}; // size - 0xE90


class CBumpMine /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   unsigned char pad_0[0x1A70]; // 0x0 - 0x1A70
}; // size - 0x1A70


class CBumpMineProjectile /* "server" */ : public CBaseGrenade /* "server" */
{
public:
   unsigned char pad_0[0xA20]; // 0x0 - 0xA20
}; // size - 0xA20


class CBumpMineProjectile /* "client" */ : public C_BaseGrenade /* "client" */
{
public:
   unsigned char pad_0[0x10C0]; // 0x0 - 0x10C0
}; // size - 0x10C0


class CBuoyancyHelper /* "client" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   float m_flFluidDensity; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CBuoyancyHelper /* "server" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   float m_flFluidDensity; // 0x18 - 0x1C
   unsigned char pad_1C[0x4]; // 0x1C - 0x20
}; // size - 0x20


class CBuyZone /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   int32_t m_LegacyTeamNum; // 0x8B8 - 0x8BC
   unsigned char pad_8BC[0x4]; // 0x8BC - 0x8C0
}; // size - 0x8C0


class CC4 /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   Vector m_vecLastValidPlayerHeldPosition; // 0xE90 - 0xE9C
   Vector m_vecLastValidDroppedPosition; // 0xE9C - 0xEA8
   bool m_bDoValidDroppedPositionCheck; // 0xEA8 - 0xEA9
   bool m_bStartedArming; // 0xEA9 - 0xEAA
   unsigned char pad_EAA[0x2]; // 0xEAA - 0xEAC
   GameTime_t m_fArmedTime; // 0xEAC - 0xEB0
   bool m_bBombPlacedAnimation; // 0xEB0 - 0xEB1
   bool m_bIsPlantingViaUse; // 0xEB1 - 0xEB2
   unsigned char pad_EB2[0x6]; // 0xEB2 - 0xEB8
   EntitySpottedState_t m_entitySpottedState; // 0xEB8 - 0xED0
   int32_t m_nSpotRules; // 0xED0 - 0xED4
   bool m_bPlayedArmingBeeps[7]; // 0xED4 - 0xEDB
   bool m_bBombPlanted; // 0xEDB - 0xEDC
   unsigned char pad_EDC[0x4]; // 0xEDC - 0xEE0
}; // size - 0xEE0


class CCSArmsRaceScript /* "client" */ : public CCSGameModeScript /* "client" */
{
public:
   CCSGameModeRules_ArmsRace* m_pOuter; // 0xD8 - 0xE0
}; // size - 0xE0


class CCSBot /* "server" */ : public CBot /* "server" */
{
public:
   CHandle< SpawnPointCoopEnemy > m_lastCoopSpawnPoint; // 0xF0 - 0xF4
   unsigned char pad_F4[0xC]; // 0xF4 - 0x100
   Vector m_eyePosition; // 0x100 - 0x10C
   char m_name[64]; // 0x10C - 0x14C
   float m_combatRange; // 0x14C - 0x150
   bool m_isRogue; // 0x150 - 0x151
   unsigned char pad_151[0x7]; // 0x151 - 0x158
   CountdownTimer m_rogueTimer; // 0x158 - 0x170
   unsigned char pad_170[0x4]; // 0x170 - 0x174
   bool m_diedLastRound; // 0x174 - 0x175
   unsigned char pad_175[0x3]; // 0x175 - 0x178
   float m_safeTime; // 0x178 - 0x17C
   bool m_wasSafe; // 0x17C - 0x17D
   unsigned char pad_17D[0x7]; // 0x17D - 0x184
   bool m_blindFire; // 0x184 - 0x185
   unsigned char pad_185[0x3]; // 0x185 - 0x188
   CountdownTimer m_surpriseTimer; // 0x188 - 0x1A0
   bool m_bAllowActive; // 0x1A0 - 0x1A1
   bool m_isFollowing; // 0x1A1 - 0x1A2
   unsigned char pad_1A2[0x2]; // 0x1A2 - 0x1A4
   CHandle< CCSPlayerPawn > m_leader; // 0x1A4 - 0x1A8
   float m_followTimestamp; // 0x1A8 - 0x1AC
   float m_allowAutoFollowTime; // 0x1AC - 0x1B0
   CountdownTimer m_hurryTimer; // 0x1B0 - 0x1C8
   CountdownTimer m_alertTimer; // 0x1C8 - 0x1E0
   CountdownTimer m_sneakTimer; // 0x1E0 - 0x1F8
   CountdownTimer m_panicTimer; // 0x1F8 - 0x210
   unsigned char pad_210[0x2B8]; // 0x210 - 0x4C8
   float m_stateTimestamp; // 0x4C8 - 0x4CC
   bool m_isAttacking; // 0x4CC - 0x4CD
   bool m_isOpeningDoor; // 0x4CD - 0x4CE
   unsigned char pad_4CE[0x6]; // 0x4CE - 0x4D4
   CHandle< CBaseEntity > m_taskEntity; // 0x4D4 - 0x4D8
   unsigned char pad_4D8[0xC]; // 0x4D8 - 0x4E4
   Vector m_goalPosition; // 0x4E4 - 0x4F0
   CHandle< CBaseEntity > m_goalEntity; // 0x4F0 - 0x4F4
   CHandle< CBaseEntity > m_avoid; // 0x4F4 - 0x4F8
   float m_avoidTimestamp; // 0x4F8 - 0x4FC
   bool m_isStopping; // 0x4FC - 0x4FD
   bool m_hasVisitedEnemySpawn; // 0x4FD - 0x4FE
   unsigned char pad_4FE[0x2]; // 0x4FE - 0x500
   IntervalTimer m_stillTimer; // 0x500 - 0x510
   bool m_bEyeAnglesUnderPathFinderControl; // 0x510 - 0x511
   unsigned char pad_511[0x60F7]; // 0x511 - 0x6608
   int32_t m_pathIndex; // 0x6608 - 0x660C
   GameTime_t m_areaEnteredTimestamp; // 0x660C - 0x6610
   CountdownTimer m_repathTimer; // 0x6610 - 0x6628
   CountdownTimer m_avoidFriendTimer; // 0x6628 - 0x6640
   bool m_isFriendInTheWay; // 0x6640 - 0x6641
   unsigned char pad_6641[0x7]; // 0x6641 - 0x6648
   CountdownTimer m_politeTimer; // 0x6648 - 0x6660
   bool m_isWaitingBehindFriend; // 0x6660 - 0x6661
   unsigned char pad_6661[0x2B]; // 0x6661 - 0x668C
   float m_pathLadderEnd; // 0x668C - 0x6690
   unsigned char pad_6690[0x48]; // 0x6690 - 0x66D8
   CountdownTimer m_mustRunTimer; // 0x66D8 - 0x66F0
   CountdownTimer m_waitTimer; // 0x66F0 - 0x6708
   CountdownTimer m_updateTravelDistanceTimer; // 0x6708 - 0x6720
   float32 m_playerTravelDistance[64]; // 0x6720 - 0x6820
   uint8_t m_travelDistancePhase; // 0x6820 - 0x6821
   unsigned char pad_6821[0x197]; // 0x6821 - 0x69B8
   uint8_t m_hostageEscortCount; // 0x69B8 - 0x69B9
   unsigned char pad_69B9[0x3]; // 0x69B9 - 0x69BC
   float m_hostageEscortCountTimestamp; // 0x69BC - 0x69C0
   int32_t m_desiredTeam; // 0x69C0 - 0x69C4
   bool m_hasJoined; // 0x69C4 - 0x69C5
   bool m_isWaitingForHostage; // 0x69C5 - 0x69C6
   unsigned char pad_69C6[0x2]; // 0x69C6 - 0x69C8
   CountdownTimer m_inhibitWaitingForHostageTimer; // 0x69C8 - 0x69E0
   CountdownTimer m_waitForHostageTimer; // 0x69E0 - 0x69F8
   Vector m_noisePosition; // 0x69F8 - 0x6A04
   float m_noiseTravelDistance; // 0x6A04 - 0x6A08
   float m_noiseTimestamp; // 0x6A08 - 0x6A0C
   unsigned char pad_6A0C[0x4]; // 0x6A0C - 0x6A10
   CCSPlayerPawn* m_noiseSource; // 0x6A10 - 0x6A18
   unsigned char pad_6A18[0x10]; // 0x6A18 - 0x6A28
   CountdownTimer m_noiseBendTimer; // 0x6A28 - 0x6A40
   Vector m_bentNoisePosition; // 0x6A40 - 0x6A4C
   bool m_bendNoisePositionValid; // 0x6A4C - 0x6A4D
   unsigned char pad_6A4D[0x3]; // 0x6A4D - 0x6A50
   float m_lookAroundStateTimestamp; // 0x6A50 - 0x6A54
   float m_lookAheadAngle; // 0x6A54 - 0x6A58
   float m_forwardAngle; // 0x6A58 - 0x6A5C
   float m_inhibitLookAroundTimestamp; // 0x6A5C - 0x6A60
   unsigned char pad_6A60[0x4]; // 0x6A60 - 0x6A64
   Vector m_lookAtSpot; // 0x6A64 - 0x6A70
   unsigned char pad_6A70[0x4]; // 0x6A70 - 0x6A74
   float m_lookAtSpotDuration; // 0x6A74 - 0x6A78
   float m_lookAtSpotTimestamp; // 0x6A78 - 0x6A7C
   float m_lookAtSpotAngleTolerance; // 0x6A7C - 0x6A80
   bool m_lookAtSpotClearIfClose; // 0x6A80 - 0x6A81
   bool m_lookAtSpotAttack; // 0x6A81 - 0x6A82
   unsigned char pad_6A82[0x6]; // 0x6A82 - 0x6A88
   char* m_lookAtDesc; // 0x6A88 - 0x6A90
   float m_peripheralTimestamp; // 0x6A90 - 0x6A94
   unsigned char pad_6A94[0x184]; // 0x6A94 - 0x6C18
   uint8_t m_approachPointCount; // 0x6C18 - 0x6C19
   unsigned char pad_6C19[0x3]; // 0x6C19 - 0x6C1C
   Vector m_approachPointViewPosition; // 0x6C1C - 0x6C28
   IntervalTimer m_viewSteadyTimer; // 0x6C28 - 0x6C38
   unsigned char pad_6C38[0x8]; // 0x6C38 - 0x6C40
   CountdownTimer m_tossGrenadeTimer; // 0x6C40 - 0x6C58
   unsigned char pad_6C58[0x8]; // 0x6C58 - 0x6C60
   CountdownTimer m_isAvoidingGrenade; // 0x6C60 - 0x6C78
   unsigned char pad_6C78[0x8]; // 0x6C78 - 0x6C80
   float m_spotCheckTimestamp; // 0x6C80 - 0x6C84
   unsigned char pad_6C84[0x404]; // 0x6C84 - 0x7088
   int32_t m_checkedHidingSpotCount; // 0x7088 - 0x708C
   float m_lookPitch; // 0x708C - 0x7090
   float m_lookPitchVel; // 0x7090 - 0x7094
   float m_lookYaw; // 0x7094 - 0x7098
   float m_lookYawVel; // 0x7098 - 0x709C
   Vector m_targetSpot; // 0x709C - 0x70A8
   Vector m_targetSpotVelocity; // 0x70A8 - 0x70B4
   Vector m_targetSpotPredicted; // 0x70B4 - 0x70C0
   QAngle m_aimError; // 0x70C0 - 0x70CC
   QAngle m_aimGoal; // 0x70CC - 0x70D8
   GameTime_t m_targetSpotTime; // 0x70D8 - 0x70DC
   float m_aimFocus; // 0x70DC - 0x70E0
   float m_aimFocusInterval; // 0x70E0 - 0x70E4
   GameTime_t m_aimFocusNextUpdate; // 0x70E4 - 0x70E8
   unsigned char pad_70E8[0x8]; // 0x70E8 - 0x70F0
   CountdownTimer m_ignoreEnemiesTimer; // 0x70F0 - 0x7108
   CHandle< CCSPlayerPawn > m_enemy; // 0x7108 - 0x710C
   bool m_isEnemyVisible; // 0x710C - 0x710D
   uint8_t m_visibleEnemyParts; // 0x710D - 0x710E
   unsigned char pad_710E[0x2]; // 0x710E - 0x7110
   Vector m_lastEnemyPosition; // 0x7110 - 0x711C
   float m_lastSawEnemyTimestamp; // 0x711C - 0x7120
   float m_firstSawEnemyTimestamp; // 0x7120 - 0x7124
   float m_currentEnemyAcquireTimestamp; // 0x7124 - 0x7128
   float m_enemyDeathTimestamp; // 0x7128 - 0x712C
   float m_friendDeathTimestamp; // 0x712C - 0x7130
   bool m_isLastEnemyDead; // 0x7130 - 0x7131
   unsigned char pad_7131[0x3]; // 0x7131 - 0x7134
   int32_t m_nearbyEnemyCount; // 0x7134 - 0x7138
   unsigned char pad_7138[0x208]; // 0x7138 - 0x7340
   CHandle< CCSPlayerPawn > m_bomber; // 0x7340 - 0x7344
   int32_t m_nearbyFriendCount; // 0x7344 - 0x7348
   CHandle< CCSPlayerPawn > m_closestVisibleFriend; // 0x7348 - 0x734C
   CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend; // 0x734C - 0x7350
   IntervalTimer m_attentionInterval; // 0x7350 - 0x7360
   CHandle< CCSPlayerPawn > m_attacker; // 0x7360 - 0x7364
   float m_attackedTimestamp; // 0x7364 - 0x7368
   IntervalTimer m_burnedByFlamesTimer; // 0x7368 - 0x7378
   int32_t m_lastVictimID; // 0x7378 - 0x737C
   bool m_isAimingAtEnemy; // 0x737C - 0x737D
   bool m_isRapidFiring; // 0x737D - 0x737E
   unsigned char pad_737E[0x2]; // 0x737E - 0x7380
   IntervalTimer m_equipTimer; // 0x7380 - 0x7390
   CountdownTimer m_zoomTimer; // 0x7390 - 0x73A8
   GameTime_t m_fireWeaponTimestamp; // 0x73A8 - 0x73AC
   unsigned char pad_73AC[0x4]; // 0x73AC - 0x73B0
   CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x73B0 - 0x73C8
   bool m_bIsSleeping; // 0x73C8 - 0x73C9
   bool m_isEnemySniperVisible; // 0x73C9 - 0x73CA
   unsigned char pad_73CA[0x6]; // 0x73CA - 0x73D0
   CountdownTimer m_sawEnemySniperTimer; // 0x73D0 - 0x73E8
   unsigned char pad_73E8[0xA0]; // 0x73E8 - 0x7488
   uint8_t m_enemyQueueIndex; // 0x7488 - 0x7489
   uint8_t m_enemyQueueCount; // 0x7489 - 0x748A
   uint8_t m_enemyQueueAttendIndex; // 0x748A - 0x748B
   bool m_isStuck; // 0x748B - 0x748C
   GameTime_t m_stuckTimestamp; // 0x748C - 0x7490
   Vector m_stuckSpot; // 0x7490 - 0x749C
   unsigned char pad_749C[0x4]; // 0x749C - 0x74A0
   CountdownTimer m_wiggleTimer; // 0x74A0 - 0x74B8
   CountdownTimer m_stuckJumpTimer; // 0x74B8 - 0x74D0
   GameTime_t m_nextCleanupCheckTimestamp; // 0x74D0 - 0x74D4
   float32 m_avgVel[10]; // 0x74D4 - 0x74FC
   int32_t m_avgVelIndex; // 0x74FC - 0x7500
   int32_t m_avgVelCount; // 0x7500 - 0x7504
   Vector m_lastOrigin; // 0x7504 - 0x7510
   unsigned char pad_7510[0x4]; // 0x7510 - 0x7514
   float m_lastRadioRecievedTimestamp; // 0x7514 - 0x7518
   float m_lastRadioSentTimestamp; // 0x7518 - 0x751C
   CHandle< CCSPlayerPawn > m_radioSubject; // 0x751C - 0x7520
   Vector m_radioPosition; // 0x7520 - 0x752C
   float m_voiceEndTimestamp; // 0x752C - 0x7530
   unsigned char pad_7530[0x8]; // 0x7530 - 0x7538
   int32_t m_lastValidReactionQueueFrame; // 0x7538 - 0x753C
   unsigned char pad_753C[0x4]; // 0x753C - 0x7540
}; // size - 0x7540


class CCSDeathmatchScript /* "client" */ : public CCSGameModeScript /* "client" */
{
public:
   CCSGameModeRules_Deathmatch* m_pOuter; // 0xD8 - 0xE0
}; // size - 0xE0


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


class CCSGOViewModel /* "server" */ : public CPredictedViewModel /* "server" */
{
public:
   bool m_bShouldIgnoreOffsetAndAccuracy; // 0x930 - 0x931
   unsigned char pad_931[0x3]; // 0x931 - 0x934
   uint32_t m_nWeaponParity; // 0x934 - 0x938
   uint32_t m_nOldWeaponParity; // 0x938 - 0x93C
   unsigned char pad_93C[0x4]; // 0x93C - 0x940
}; // size - 0x940


class CCSGO_TeamIntroCharacterPosition /* "server" */ : public CCSGO_TeamPreviewCharacterPosition /* "server" */
{
public:
   unsigned char pad_0[0xC48]; // 0x0 - 0xC48
}; // size - 0xC48


class CCSGO_TeamPreviewCharacterPosition /* "server" */ : public CBaseEntity /* "server" */
{
public:
   int32_t m_nVariant; // 0x4C0 - 0x4C4
   int32_t m_nRandom; // 0x4C4 - 0x4C8
   int32_t m_nOrdinal; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4]; // 0x4CC - 0x4D0
   CUtlString m_sWeaponName; // 0x4D0 - 0x4D8
   uint64_t m_xuid; // 0x4D8 - 0x4E0
   CEconItemView m_agentItem; // 0x4E0 - 0x758
   CEconItemView m_glovesItem; // 0x758 - 0x9D0
   CEconItemView m_weaponItem; // 0x9D0 - 0xC48
}; // size - 0xC48


class CCSGO_WingmanIntroCharacterPosition /* "server" */ : public CCSGO_TeamIntroCharacterPosition /* "server" */
{
public:
   unsigned char pad_0[0xC48]; // 0x0 - 0xC48
}; // size - 0xC48


class CCSGO_WingmanIntroCounterTerroristPosition /* "client" */ : public CCSGO_WingmanIntroCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class CCSGO_WingmanIntroTerroristPosition /* "client" */ : public CCSGO_WingmanIntroCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class CCSGameModeRules /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   unsigned char pad_30[0x8]; // 0x30 - 0x38
}; // size - 0x38


class CCSGameModeRules_ArmsRace /* "client" */ : public CCSGameModeRules /* "client" */
{
public:
   C_NetworkUtlVectorBase< CUtlString > m_WeaponSequence; // 0x38 - 0x50
}; // size - 0x50


class CCSGameModeRules_Deathmatch /* "client" */ : public CCSGameModeRules /* "client" */
{
public:
   GameTime_t m_flDMBonusStartTime; // 0x38 - 0x3C
   float m_flDMBonusTimeLength; // 0x3C - 0x40
   int16_t m_nDMBonusWeaponLoadoutSlot; // 0x40 - 0x42
   unsigned char pad_42[0x6]; // 0x42 - 0x48
}; // size - 0x48


class CCSGameModeRules_Noop /* "client" */ : public CCSGameModeRules /* "client" */
{
public:
   unsigned char pad_0[0x38]; // 0x0 - 0x38
}; // size - 0x38


class CCSGameModeRules_Noop /* "server" */ : public CCSGameModeRules /* "server" */
{
public:
   unsigned char pad_0[0x38]; // 0x0 - 0x38
}; // size - 0x38


class CCSGameModeScript_ConVars /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCSObserverPawn /* "server" */ : public CCSPlayerPawnBase /* "server" */
{
public:
   unsigned char pad_0[0x15D0]; // 0x0 - 0x15D0
}; // size - 0x15D0


class CCSObserverPawnAPI /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCSObserver_ViewModelServices /* "client" */ : public CPlayer_ViewModelServices /* "client" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class CCSPlace /* "server" */ : public CServerOnlyModelEntity /* "server" */
{
public:
   unsigned char pad_710[0x8]; // 0x710 - 0x718
   CUtlSymbolLarge m_name; // 0x718 - 0x720
}; // size - 0x720


class CCSPlayerBase_CameraServices /* "server" */ : public CPlayer_CameraServices /* "server" */
{
public:
   uint32_t m_iFOV; // 0x170 - 0x174
   uint32_t m_iFOVStart; // 0x174 - 0x178
   GameTime_t m_flFOVTime; // 0x178 - 0x17C
   float m_flFOVRate; // 0x17C - 0x180
   CHandle< CBaseEntity > m_hZoomOwner; // 0x180 - 0x184
   unsigned char pad_184[0x4]; // 0x184 - 0x188
   CUtlVector< CHandle< CBaseEntity > > m_hTriggerFogList; // 0x188 - 0x1A0
   CHandle< CBaseEntity > m_hLastFogTrigger; // 0x1A0 - 0x1A4
   unsigned char pad_1A4[0x4]; // 0x1A4 - 0x1A8
}; // size - 0x1A8


class CCSPlayerController /* "client" */ : public CBasePlayerController /* "client" */
{
public:
   unsigned char pad_6E8[0x10]; // 0x6E8 - 0x6F8
   CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6F8 - 0x700
   CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x700 - 0x708
   CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x708 - 0x710
   CCSPlayerController_DamageServices* m_pDamageServices; // 0x710 - 0x718
   uint32_t m_iPing; // 0x718 - 0x71C
   bool m_bHasCommunicationAbuseMute; // 0x71C - 0x71D
   unsigned char pad_71D[0x3]; // 0x71D - 0x720
   CUtlSymbolLarge m_szCrosshairCodes; // 0x720 - 0x728
   uint8_t m_iPendingTeamNum; // 0x728 - 0x729
   unsigned char pad_729[0x3]; // 0x729 - 0x72C
   GameTime_t m_flForceTeamTime; // 0x72C - 0x730
   int32_t m_iCompTeammateColor; // 0x730 - 0x734
   bool m_bEverPlayedOnTeam; // 0x734 - 0x735
   unsigned char pad_735[0x3]; // 0x735 - 0x738
   GameTime_t m_flPreviousForceJoinTeamTime; // 0x738 - 0x73C
   unsigned char pad_73C[0x4]; // 0x73C - 0x740
   CUtlSymbolLarge m_szClan; // 0x740 - 0x748
   CUtlString m_sSanitizedPlayerName; // 0x748 - 0x750
   int32_t m_iCoachingTeam; // 0x750 - 0x754
   unsigned char pad_754[0x4]; // 0x754 - 0x758
   uint64_t m_nPlayerDominated; // 0x758 - 0x760
   uint64_t m_nPlayerDominatingMe; // 0x760 - 0x768
   int32_t m_iCompetitiveRanking; // 0x768 - 0x76C
   int32_t m_iCompetitiveWins; // 0x76C - 0x770
   int8_t m_iCompetitiveRankType; // 0x770 - 0x771
   unsigned char pad_771[0x3]; // 0x771 - 0x774
   int32_t m_iCompetitiveRankingPredicted_Win; // 0x774 - 0x778
   int32_t m_iCompetitiveRankingPredicted_Loss; // 0x778 - 0x77C
   int32_t m_iCompetitiveRankingPredicted_Tie; // 0x77C - 0x780
   int32_t m_nEndMatchNextMapVote; // 0x780 - 0x784
   uint16_t m_unActiveQuestId; // 0x784 - 0x786
   unsigned char pad_786[0x2]; // 0x786 - 0x788
   QuestProgress::Reason m_nQuestProgressReason; // 0x788 - 0x78C
   uint32_t m_unPlayerTvControlFlags; // 0x78C - 0x790
   unsigned char pad_790[0x28]; // 0x790 - 0x7B8
   int32_t m_iDraftIndex; // 0x7B8 - 0x7BC
   uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7BC - 0x7C0
   uint32_t m_uiAbandonRecordedReason; // 0x7C0 - 0x7C4
   bool m_bCannotBeKicked; // 0x7C4 - 0x7C5
   bool m_bEverFullyConnected; // 0x7C5 - 0x7C6
   bool m_bAbandonAllowsSurrender; // 0x7C6 - 0x7C7
   bool m_bAbandonOffersInstantSurrender; // 0x7C7 - 0x7C8
   bool m_bDisconnection1MinWarningPrinted; // 0x7C8 - 0x7C9
   bool m_bScoreReported; // 0x7C9 - 0x7CA
   unsigned char pad_7CA[0x2]; // 0x7CA - 0x7CC
   int32_t m_nDisconnectionTick; // 0x7CC - 0x7D0
   unsigned char pad_7D0[0x8]; // 0x7D0 - 0x7D8
   bool m_bControllingBot; // 0x7D8 - 0x7D9
   bool m_bHasControlledBotThisRound; // 0x7D9 - 0x7DA
   bool m_bHasBeenControlledByPlayerThisRound; // 0x7DA - 0x7DB
   unsigned char pad_7DB[0x1]; // 0x7DB - 0x7DC
   int32_t m_nBotsControlledThisRound; // 0x7DC - 0x7E0
   bool m_bCanControlObservedBot; // 0x7E0 - 0x7E1
   unsigned char pad_7E1[0x3]; // 0x7E1 - 0x7E4
   CHandle< C_CSPlayerPawn > m_hPlayerPawn; // 0x7E4 - 0x7E8
   CHandle< C_CSObserverPawn > m_hObserverPawn; // 0x7E8 - 0x7EC
   bool m_bPawnIsAlive; // 0x7EC - 0x7ED
   unsigned char pad_7ED[0x3]; // 0x7ED - 0x7F0
   uint32_t m_iPawnHealth; // 0x7F0 - 0x7F4
   int32_t m_iPawnArmor; // 0x7F4 - 0x7F8
   bool m_bPawnHasDefuser; // 0x7F8 - 0x7F9
   bool m_bPawnHasHelmet; // 0x7F9 - 0x7FA
   uint16_t m_nPawnCharacterDefIndex; // 0x7FA - 0x7FC
   int32_t m_iPawnLifetimeStart; // 0x7FC - 0x800
   int32_t m_iPawnLifetimeEnd; // 0x800 - 0x804
   int32_t m_iPawnBotDifficulty; // 0x804 - 0x808
   CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x808 - 0x80C
   int32_t m_iScore; // 0x80C - 0x810
   C_NetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x810 - 0x828
   bool m_bMvpNoMusic; // 0x828 - 0x829
   unsigned char pad_829[0x3]; // 0x829 - 0x82C
   int32_t m_eMvpReason; // 0x82C - 0x830
   int32_t m_iMusicKitID; // 0x830 - 0x834
   int32_t m_iMusicKitMVPs; // 0x834 - 0x838
   int32_t m_iMVPs; // 0x838 - 0x83C
   bool m_bIsPlayerNameDirty; // 0x83C - 0x83D
   unsigned char pad_83D[0x3]; // 0x83D - 0x840
}; // size - 0x840


class CCSPlayerController /* "server" */ : public CBasePlayerController /* "server" */
{
public:
   unsigned char pad_6B8[0x10]; // 0x6B8 - 0x6C8
   CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x6C8 - 0x6D0
   CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x6D0 - 0x6D8
   CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x6D8 - 0x6E0
   CCSPlayerController_DamageServices* m_pDamageServices; // 0x6E0 - 0x6E8
   uint32_t m_iPing; // 0x6E8 - 0x6EC
   bool m_bHasCommunicationAbuseMute; // 0x6EC - 0x6ED
   unsigned char pad_6ED[0x3]; // 0x6ED - 0x6F0
   CUtlSymbolLarge m_szCrosshairCodes; // 0x6F0 - 0x6F8
   uint8_t m_iPendingTeamNum; // 0x6F8 - 0x6F9
   unsigned char pad_6F9[0x3]; // 0x6F9 - 0x6FC
   GameTime_t m_flForceTeamTime; // 0x6FC - 0x700
   int32_t m_iCompTeammateColor; // 0x700 - 0x704
   bool m_bEverPlayedOnTeam; // 0x704 - 0x705
   bool m_bAttemptedToGetColor; // 0x705 - 0x706
   unsigned char pad_706[0x2]; // 0x706 - 0x708
   int32_t m_iTeammatePreferredColor; // 0x708 - 0x70C
   bool m_bTeamChanged; // 0x70C - 0x70D
   bool m_bInSwitchTeam; // 0x70D - 0x70E
   bool m_bHasSeenJoinGame; // 0x70E - 0x70F
   bool m_bJustBecameSpectator; // 0x70F - 0x710
   bool m_bSwitchTeamsOnNextRoundReset; // 0x710 - 0x711
   bool m_bRemoveAllItemsOnNextRoundReset; // 0x711 - 0x712
   unsigned char pad_712[0x6]; // 0x712 - 0x718
   CUtlSymbolLarge m_szClan; // 0x718 - 0x720
   char m_szClanName[32]; // 0x720 - 0x740
   int32_t m_iCoachingTeam; // 0x740 - 0x744
   unsigned char pad_744[0x4]; // 0x744 - 0x748
   uint64_t m_nPlayerDominated; // 0x748 - 0x750
   uint64_t m_nPlayerDominatingMe; // 0x750 - 0x758
   int32_t m_iCompetitiveRanking; // 0x758 - 0x75C
   int32_t m_iCompetitiveWins; // 0x75C - 0x760
   int8_t m_iCompetitiveRankType; // 0x760 - 0x761
   unsigned char pad_761[0x3]; // 0x761 - 0x764
   int32_t m_iCompetitiveRankingPredicted_Win; // 0x764 - 0x768
   int32_t m_iCompetitiveRankingPredicted_Loss; // 0x768 - 0x76C
   int32_t m_iCompetitiveRankingPredicted_Tie; // 0x76C - 0x770
   int32_t m_nEndMatchNextMapVote; // 0x770 - 0x774
   uint16_t m_unActiveQuestId; // 0x774 - 0x776
   unsigned char pad_776[0x2]; // 0x776 - 0x778
   QuestProgress::Reason m_nQuestProgressReason; // 0x778 - 0x77C
   uint32_t m_unPlayerTvControlFlags; // 0x77C - 0x780
   unsigned char pad_780[0x28]; // 0x780 - 0x7A8
   int32_t m_iDraftIndex; // 0x7A8 - 0x7AC
   uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7AC - 0x7B0
   uint32_t m_uiAbandonRecordedReason; // 0x7B0 - 0x7B4
   bool m_bCannotBeKicked; // 0x7B4 - 0x7B5
   bool m_bEverFullyConnected; // 0x7B5 - 0x7B6
   bool m_bAbandonAllowsSurrender; // 0x7B6 - 0x7B7
   bool m_bAbandonOffersInstantSurrender; // 0x7B7 - 0x7B8
   bool m_bDisconnection1MinWarningPrinted; // 0x7B8 - 0x7B9
   bool m_bScoreReported; // 0x7B9 - 0x7BA
   unsigned char pad_7BA[0x2]; // 0x7BA - 0x7BC
   int32_t m_nDisconnectionTick; // 0x7BC - 0x7C0
   unsigned char pad_7C0[0x8]; // 0x7C0 - 0x7C8
   bool m_bControllingBot; // 0x7C8 - 0x7C9
   bool m_bHasControlledBotThisRound; // 0x7C9 - 0x7CA
   bool m_bHasBeenControlledByPlayerThisRound; // 0x7CA - 0x7CB
   unsigned char pad_7CB[0x1]; // 0x7CB - 0x7CC
   int32_t m_nBotsControlledThisRound; // 0x7CC - 0x7D0
   bool m_bCanControlObservedBot; // 0x7D0 - 0x7D1
   unsigned char pad_7D1[0x3]; // 0x7D1 - 0x7D4
   CHandle< CCSPlayerPawn > m_hPlayerPawn; // 0x7D4 - 0x7D8
   CHandle< CCSObserverPawn > m_hObserverPawn; // 0x7D8 - 0x7DC
   int32_t m_DesiredObserverMode; // 0x7DC - 0x7E0
   CEntityHandle m_hDesiredObserverTarget; // 0x7E0 - 0x7E4
   bool m_bPawnIsAlive; // 0x7E4 - 0x7E5
   unsigned char pad_7E5[0x3]; // 0x7E5 - 0x7E8
   uint32_t m_iPawnHealth; // 0x7E8 - 0x7EC
   int32_t m_iPawnArmor; // 0x7EC - 0x7F0
   bool m_bPawnHasDefuser; // 0x7F0 - 0x7F1
   bool m_bPawnHasHelmet; // 0x7F1 - 0x7F2
   uint16_t m_nPawnCharacterDefIndex; // 0x7F2 - 0x7F4
   int32_t m_iPawnLifetimeStart; // 0x7F4 - 0x7F8
   int32_t m_iPawnLifetimeEnd; // 0x7F8 - 0x7FC
   int32_t m_iPawnBotDifficulty; // 0x7FC - 0x800
   CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn; // 0x800 - 0x804
   int32_t m_iScore; // 0x804 - 0x808
   int32_t m_iRoundScore; // 0x808 - 0x80C
   int32_t m_iRoundsWon; // 0x80C - 0x810
   CNetworkUtlVectorBase< EKillTypes_t > m_vecKills; // 0x810 - 0x828
   bool m_bMvpNoMusic; // 0x828 - 0x829
   unsigned char pad_829[0x3]; // 0x829 - 0x82C
   int32_t m_eMvpReason; // 0x82C - 0x830
   int32_t m_iMusicKitID; // 0x830 - 0x834
   int32_t m_iMusicKitMVPs; // 0x834 - 0x838
   int32_t m_iMVPs; // 0x838 - 0x83C
   int32_t m_nUpdateCounter; // 0x83C - 0x840
   float m_flSmoothedPing; // 0x840 - 0x844
   unsigned char pad_844[0xF0A4]; // 0x844 - 0xF8E8
   IntervalTimer m_lastHeldVoteTimer; // 0xF8E8 - 0xF8F8
   unsigned char pad_F8F8[0x8]; // 0xF8F8 - 0xF900
   bool m_bShowHints; // 0xF900 - 0xF901
   unsigned char pad_F901[0x3]; // 0xF901 - 0xF904
   int32_t m_iNextTimeCheck; // 0xF904 - 0xF908
   bool m_bJustDidTeamKill; // 0xF908 - 0xF909
   bool m_bPunishForTeamKill; // 0xF909 - 0xF90A
   bool m_bGaveTeamDamageWarning; // 0xF90A - 0xF90B
   bool m_bGaveTeamDamageWarningThisRound; // 0xF90B - 0xF90C
   unsigned char pad_F90C[0x4]; // 0xF90C - 0xF910
   float64 m_dblLastReceivedPacketPlatFloatTime; // 0xF910 - 0xF918
   GameTime_t m_LastTeamDamageWarningTime; // 0xF918 - 0xF91C
   GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0xF91C - 0xF920
   uint32_t m_nSuspiciousHitCount; // 0xF920 - 0xF924
   uint32_t m_nNonSuspiciousHitStreak; // 0xF924 - 0xF928
}; // size - 0xF928


class CCSPlayerControllerAPI /* "client" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCSPlayerController_DamageServices /* "client" */ : public CPlayerControllerComponent /* "client" */
{
public:
   int32_t m_nSendUpdate; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
   C_UtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList; // 0x48 - 0x98
}; // size - 0x98


class CCSPlayerController_InGameMoneyServices /* "server" */ : public CPlayerControllerComponent /* "server" */
{
public:
   bool m_bReceivesMoneyNextRound; // 0x40 - 0x41
   unsigned char pad_41[0x3]; // 0x41 - 0x44
   int32_t m_iAccountMoneyEarnedForNextRound; // 0x44 - 0x48
   int32_t m_iAccount; // 0x48 - 0x4C
   int32_t m_iStartAccount; // 0x4C - 0x50
   int32_t m_iTotalCashSpent; // 0x50 - 0x54
   int32_t m_iCashSpentThisRound; // 0x54 - 0x58
}; // size - 0x58


class CCSPlayerController_InGameMoneyServices /* "client" */ : public CPlayerControllerComponent /* "client" */
{
public:
   int32_t m_iAccount; // 0x40 - 0x44
   int32_t m_iStartAccount; // 0x44 - 0x48
   int32_t m_iTotalCashSpent; // 0x48 - 0x4C
   int32_t m_iCashSpentThisRound; // 0x4C - 0x50
   int32_t m_nPreviousAccount; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
}; // size - 0x58


class CCSPlayerController_InventoryServices /* "client" */ : public CPlayerControllerComponent /* "client" */
{
public:
   uint16_t m_unMusicID; // 0x40 - 0x42
   unsigned char pad_42[0x2]; // 0x42 - 0x44
   MedalRank_t m_rank[6]; // 0x44 - 0x5C
   int32_t m_nPersonaDataPublicLevel; // 0x5C - 0x60
   int32_t m_nPersonaDataPublicCommendsLeader; // 0x60 - 0x64
   int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64 - 0x68
   int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68 - 0x6C
   int32_t m_nPersonaDataXpTrailLevel; // 0x6C - 0x70
   C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots; // 0x70 - 0xC0
}; // size - 0xC0


class CCSPlayerPawn /* "server" */ : public CCSPlayerPawnBase /* "server" */
{
public:
   CCSPlayer_BulletServices* m_pBulletServices; // 0x15A8 - 0x15B0
   CCSPlayer_HostageServices* m_pHostageServices; // 0x15B0 - 0x15B8
   CCSPlayer_BuyServices* m_pBuyServices; // 0x15B8 - 0x15C0
   CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x15C0 - 0x15C8
   CCSPlayer_RadioServices* m_pRadioServices; // 0x15C8 - 0x15D0
   CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x15D0 - 0x15D8
   uint16_t m_nCharacterDefIndex; // 0x15D8 - 0x15DA
   unsigned char pad_15DA[0x6]; // 0x15DA - 0x15E0
   CStrongHandle< InfoForResourceTypeCModel > m_hPreviousModel; // 0x15E0 - 0x15E8
   bool m_bHasFemaleVoice; // 0x15E8 - 0x15E9
   unsigned char pad_15E9[0x7]; // 0x15E9 - 0x15F0
   CUtlString m_strVOPrefix; // 0x15F0 - 0x15F8
   char m_szLastPlaceName[18]; // 0x15F8 - 0x160A
   unsigned char pad_160A[0xAE]; // 0x160A - 0x16B8
   bool m_bInHostageResetZone; // 0x16B8 - 0x16B9
   bool m_bInBuyZone; // 0x16B9 - 0x16BA
   bool m_bWasInBuyZone; // 0x16BA - 0x16BB
   bool m_bInHostageRescueZone; // 0x16BB - 0x16BC
   bool m_bInBombZone; // 0x16BC - 0x16BD
   bool m_bWasInHostageRescueZone; // 0x16BD - 0x16BE
   unsigned char pad_16BE[0x2]; // 0x16BE - 0x16C0
   int32_t m_iRetakesOffering; // 0x16C0 - 0x16C4
   int32_t m_iRetakesOfferingCard; // 0x16C4 - 0x16C8
   bool m_bRetakesHasDefuseKit; // 0x16C8 - 0x16C9
   bool m_bRetakesMVPLastRound; // 0x16C9 - 0x16CA
   unsigned char pad_16CA[0x2]; // 0x16CA - 0x16CC
   int32_t m_iRetakesMVPBoostItem; // 0x16CC - 0x16D0
   loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x16D0 - 0x16D4
   GameTime_t m_flHealthShotBoostExpirationTime; // 0x16D4 - 0x16D8
   float m_flLandseconds; // 0x16D8 - 0x16DC
   QAngle m_aimPunchAngle; // 0x16DC - 0x16E8
   QAngle m_aimPunchAngleVel; // 0x16E8 - 0x16F4
   int32_t m_aimPunchTickBase; // 0x16F4 - 0x16F8
   float m_aimPunchTickFraction; // 0x16F8 - 0x16FC
   unsigned char pad_16FC[0x4]; // 0x16FC - 0x1700
   CUtlVector< QAngle > m_aimPunchCache; // 0x1700 - 0x1718
   bool m_bIsBuyMenuOpen; // 0x1718 - 0x1719
   unsigned char pad_1719[0x647]; // 0x1719 - 0x1D60
   CTransform m_xLastHeadBoneTransform; // 0x1D60 - 0x1D80
   bool m_bLastHeadBoneTransformIsValid; // 0x1D80 - 0x1D81
   unsigned char pad_1D81[0x3]; // 0x1D81 - 0x1D84
   GameTime_t m_lastLandTime; // 0x1D84 - 0x1D88
   bool m_bOnGroundLastTick; // 0x1D88 - 0x1D89
   unsigned char pad_1D89[0x3]; // 0x1D89 - 0x1D8C
   int32_t m_iPlayerLocked; // 0x1D8C - 0x1D90
   unsigned char pad_1D90[0x4]; // 0x1D90 - 0x1D94
   GameTime_t m_flTimeOfLastInjury; // 0x1D94 - 0x1D98
   GameTime_t m_flNextSprayDecalTime; // 0x1D98 - 0x1D9C
   bool m_bNextSprayDecalTimeExpedited; // 0x1D9C - 0x1D9D
   unsigned char pad_1D9D[0x3]; // 0x1D9D - 0x1DA0
   int32_t m_nRagdollDamageBone; // 0x1DA0 - 0x1DA4
   Vector m_vRagdollDamageForce; // 0x1DA4 - 0x1DB0
   Vector m_vRagdollDamagePosition; // 0x1DB0 - 0x1DBC
   char m_szRagdollDamageWeaponName[64]; // 0x1DBC - 0x1DFC
   bool m_bRagdollDamageHeadshot; // 0x1DFC - 0x1DFD
   unsigned char pad_1DFD[0x3]; // 0x1DFD - 0x1E00
   Vector m_vRagdollServerOrigin; // 0x1E00 - 0x1E0C
   unsigned char pad_1E0C[0x4]; // 0x1E0C - 0x1E10
   CEconItemView m_EconGloves; // 0x1E10 - 0x2088
   uint8_t m_nEconGlovesChanged; // 0x2088 - 0x2089
   unsigned char pad_2089[0x3]; // 0x2089 - 0x208C
   QAngle m_qDeathEyeAngles; // 0x208C - 0x2098
   bool m_bSkipOneHeadConstraintUpdate; // 0x2098 - 0x2099
   unsigned char pad_2099[0x7]; // 0x2099 - 0x20A0
}; // size - 0x20A0


class CCSPlayerPawnAPI /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCSPlayer_CameraServices /* "server" */ : public CCSPlayerBase_CameraServices /* "server" */
{
public:
   unsigned char pad_0[0x1A8]; // 0x0 - 0x1A8
}; // size - 0x1A8


class CCSPlayer_DamageReactServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class CCSPlayer_GlowServices /* "client" */ : public CPlayerPawnComponent /* "client" */
{
public:
   unsigned char pad_0[0x50]; // 0x0 - 0x50
}; // size - 0x50


class CCSPlayer_ItemServices /* "server" */ : public CPlayer_ItemServices /* "server" */
{
public:
   bool m_bHasDefuser; // 0x40 - 0x41
   bool m_bHasHelmet; // 0x41 - 0x42
   bool m_bHasHeavyArmor; // 0x42 - 0x43
   unsigned char pad_43[0x5]; // 0x43 - 0x48
}; // size - 0x48


class CCSPlayer_PingServices /* "client" */ : public CPlayerPawnComponent /* "client" */
{
public:
   CHandle< C_BaseEntity > m_hPlayerPing; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
}; // size - 0x48


class CCSPlayer_RadioServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   GameTime_t m_flGotHostageTalkTimer; // 0x40 - 0x44
   GameTime_t m_flDefusingTalkTimer; // 0x44 - 0x48
   GameTime_t m_flC4PlantTalkTimer; // 0x48 - 0x4C
   GameTime_t m_flRadioTokenSlots[3]; // 0x4C - 0x58
   bool m_bIgnoreRadio; // 0x58 - 0x59
   unsigned char pad_59[0x7]; // 0x59 - 0x60
}; // size - 0x60


class CCSPlayer_WeaponServices /* "client" */ : public CPlayer_WeaponServices /* "client" */
{
public:
   unsigned char pad_A0[0x18]; // 0xA0 - 0xB8
   GameTime_t m_flNextAttack; // 0xB8 - 0xBC
   bool m_bIsLookingAtWeapon; // 0xBC - 0xBD
   bool m_bIsHoldingLookAtWeapon; // 0xBD - 0xBE
   unsigned char pad_BE[0x2]; // 0xBE - 0xC0
   uint32_t m_nOldShootPositionHistoryCount; // 0xC0 - 0xC4
   unsigned char pad_C4[0x394]; // 0xC4 - 0x458
   uint32_t m_nOldInputHistoryCount; // 0x458 - 0x45C
   unsigned char pad_45C[0xF14]; // 0x45C - 0x1370
}; // size - 0x1370


class CCSPlayer_WeaponServices /* "server" */ : public CPlayer_WeaponServices /* "server" */
{
public:
   GameTime_t m_flNextAttack; // 0xA8 - 0xAC
   bool m_bIsLookingAtWeapon; // 0xAC - 0xAD
   bool m_bIsHoldingLookAtWeapon; // 0xAD - 0xAE
   unsigned char pad_AE[0x2]; // 0xAE - 0xB0
   CHandle< CBasePlayerWeapon > m_hSavedWeapon; // 0xB0 - 0xB4
   int32_t m_nTimeToMelee; // 0xB4 - 0xB8
   int32_t m_nTimeToSecondary; // 0xB8 - 0xBC
   int32_t m_nTimeToPrimary; // 0xBC - 0xC0
   int32_t m_nTimeToSniperRifle; // 0xC0 - 0xC4
   bool m_bIsBeingGivenItem; // 0xC4 - 0xC5
   bool m_bIsPickingUpItemWithUse; // 0xC5 - 0xC6
   bool m_bPickedUpWeapon; // 0xC6 - 0xC7
   bool m_bDisableAutoDeploy; // 0xC7 - 0xC8
   uint32_t m_nOldShootPositionHistoryCount; // 0xC8 - 0xCC
   unsigned char pad_CC[0x394]; // 0xCC - 0x460
   uint32_t m_nOldInputHistoryCount; // 0x460 - 0x464
   unsigned char pad_464[0xF14]; // 0x464 - 0x1378
}; // size - 0x1378


class CCSPulseServerFuncs_Globals /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCSSprite /* "server" */ : public CSprite /* "server" */
{
public:
   unsigned char pad_0[0x780]; // 0x0 - 0x780
}; // size - 0x780


class CCSTakeDamageInfoAPI /* "client" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCSTakeDamageInfoAPI /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCSTeam /* "server" */ : public CTeam /* "server" */
{
public:
   int32_t m_nLastRecievedShorthandedRoundBonus; // 0x578 - 0x57C
   int32_t m_nShorthandedRoundBonusStartRound; // 0x57C - 0x580
   bool m_bSurrendered; // 0x580 - 0x581
   char m_szTeamMatchStat[512]; // 0x581 - 0x781
   unsigned char pad_781[0x3]; // 0x781 - 0x784
   int32_t m_numMapVictories; // 0x784 - 0x788
   int32_t m_scoreFirstHalf; // 0x788 - 0x78C
   int32_t m_scoreSecondHalf; // 0x78C - 0x790
   int32_t m_scoreOvertime; // 0x790 - 0x794
   char m_szClanTeamname[129]; // 0x794 - 0x815
   unsigned char pad_815[0x3]; // 0x815 - 0x818
   uint32_t m_iClanID; // 0x818 - 0x81C
   char m_szTeamFlagImage[8]; // 0x81C - 0x824
   char m_szTeamLogoImage[8]; // 0x824 - 0x82C
   float m_flNextResourceTime; // 0x82C - 0x830
   int32_t m_iLastUpdateSentAt; // 0x830 - 0x834
   unsigned char pad_834[0x4]; // 0x834 - 0x838
}; // size - 0x838


class CCSWeaponBaseAPI /* "client" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CCSWeaponBaseVData /* "server" */ : public CBasePlayerWeaponVData /* "server" */
{
public:
   CSWeaponType m_WeaponType; // 0x248 - 0x24C
   CSWeaponCategory m_WeaponCategory; // 0x24C - 0x250
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; // 0x250 - 0x330
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szPlayerModel; // 0x330 - 0x410
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldDroppedModel; // 0x410 - 0x4F0
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szAimsightLensMaskModel; // 0x4F0 - 0x5D0
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szMagazineModel; // 0x5D0 - 0x6B0
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szHeatEffect; // 0x6B0 - 0x790
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szEjectBrassEffect; // 0x790 - 0x870
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticleAlt; // 0x870 - 0x950
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticle; // 0x950 - 0xA30
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticleAlt; // 0xA30 - 0xB10
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0xB10 - 0xBF0
   gear_slot_t m_GearSlot; // 0xBF0 - 0xBF4
   int32_t m_GearSlotPosition; // 0xBF4 - 0xBF8
   loadout_slot_t m_DefaultLoadoutSlot; // 0xBF8 - 0xBFC
   unsigned char pad_BFC[0x4]; // 0xBFC - 0xC00
   CUtlString m_sWrongTeamMsg; // 0xC00 - 0xC08
   int32_t m_nPrice; // 0xC08 - 0xC0C
   int32_t m_nKillAward; // 0xC0C - 0xC10
   int32_t m_nPrimaryReserveAmmoMax; // 0xC10 - 0xC14
   int32_t m_nSecondaryReserveAmmoMax; // 0xC14 - 0xC18
   bool m_bMeleeWeapon; // 0xC18 - 0xC19
   bool m_bHasBurstMode; // 0xC19 - 0xC1A
   bool m_bIsRevolver; // 0xC1A - 0xC1B
   bool m_bCannotShootUnderwater; // 0xC1B - 0xC1C
   unsigned char pad_C1C[0x4]; // 0xC1C - 0xC20
   CGlobalSymbol m_szName; // 0xC20 - 0xC28
   CUtlString m_szAnimExtension; // 0xC28 - 0xC30
   CSWeaponSilencerType m_eSilencerType; // 0xC30 - 0xC34
   int32_t m_nCrosshairMinDistance; // 0xC34 - 0xC38
   int32_t m_nCrosshairDeltaDistance; // 0xC38 - 0xC3C
   bool m_bIsFullAuto; // 0xC3C - 0xC3D
   unsigned char pad_C3D[0x3]; // 0xC3D - 0xC40
   int32_t m_nNumBullets; // 0xC40 - 0xC44
   CFiringModeFloat m_flCycleTime; // 0xC44 - 0xC4C
   CFiringModeFloat m_flMaxSpeed; // 0xC4C - 0xC54
   CFiringModeFloat m_flSpread; // 0xC54 - 0xC5C
   CFiringModeFloat m_flInaccuracyCrouch; // 0xC5C - 0xC64
   CFiringModeFloat m_flInaccuracyStand; // 0xC64 - 0xC6C
   CFiringModeFloat m_flInaccuracyJump; // 0xC6C - 0xC74
   CFiringModeFloat m_flInaccuracyLand; // 0xC74 - 0xC7C
   CFiringModeFloat m_flInaccuracyLadder; // 0xC7C - 0xC84
   CFiringModeFloat m_flInaccuracyFire; // 0xC84 - 0xC8C
   CFiringModeFloat m_flInaccuracyMove; // 0xC8C - 0xC94
   CFiringModeFloat m_flRecoilAngle; // 0xC94 - 0xC9C
   CFiringModeFloat m_flRecoilAngleVariance; // 0xC9C - 0xCA4
   CFiringModeFloat m_flRecoilMagnitude; // 0xCA4 - 0xCAC
   CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xCAC - 0xCB4
   CFiringModeInt m_nTracerFrequency; // 0xCB4 - 0xCBC
   float m_flInaccuracyJumpInitial; // 0xCBC - 0xCC0
   float m_flInaccuracyJumpApex; // 0xCC0 - 0xCC4
   float m_flInaccuracyReload; // 0xCC4 - 0xCC8
   int32_t m_nRecoilSeed; // 0xCC8 - 0xCCC
   int32_t m_nSpreadSeed; // 0xCCC - 0xCD0
   float m_flTimeToIdleAfterFire; // 0xCD0 - 0xCD4
   float m_flIdleInterval; // 0xCD4 - 0xCD8
   float m_flAttackMovespeedFactor; // 0xCD8 - 0xCDC
   float m_flHeatPerShot; // 0xCDC - 0xCE0
   float m_flInaccuracyPitchShift; // 0xCE0 - 0xCE4
   float m_flInaccuracyAltSoundThreshold; // 0xCE4 - 0xCE8
   float m_flBotAudibleRange; // 0xCE8 - 0xCEC
   unsigned char pad_CEC[0x4]; // 0xCEC - 0xCF0
   CUtlString m_szUseRadioSubtitle; // 0xCF0 - 0xCF8
   bool m_bUnzoomsAfterShot; // 0xCF8 - 0xCF9
   bool m_bHideViewModelWhenZoomed; // 0xCF9 - 0xCFA
   unsigned char pad_CFA[0x2]; // 0xCFA - 0xCFC
   int32_t m_nZoomLevels; // 0xCFC - 0xD00
   int32_t m_nZoomFOV1; // 0xD00 - 0xD04
   int32_t m_nZoomFOV2; // 0xD04 - 0xD08
   float m_flZoomTime0; // 0xD08 - 0xD0C
   float m_flZoomTime1; // 0xD0C - 0xD10
   float m_flZoomTime2; // 0xD10 - 0xD14
   float m_flIronSightPullUpSpeed; // 0xD14 - 0xD18
   float m_flIronSightPutDownSpeed; // 0xD18 - 0xD1C
   float m_flIronSightFOV; // 0xD1C - 0xD20
   float m_flIronSightPivotForward; // 0xD20 - 0xD24
   float m_flIronSightLooseness; // 0xD24 - 0xD28
   QAngle m_angPivotAngle; // 0xD28 - 0xD34
   Vector m_vecIronSightEyePos; // 0xD34 - 0xD40
   int32_t m_nDamage; // 0xD40 - 0xD44
   float m_flHeadshotMultiplier; // 0xD44 - 0xD48
   float m_flArmorRatio; // 0xD48 - 0xD4C
   float m_flPenetration; // 0xD4C - 0xD50
   float m_flRange; // 0xD50 - 0xD54
   float m_flRangeModifier; // 0xD54 - 0xD58
   float m_flFlinchVelocityModifierLarge; // 0xD58 - 0xD5C
   float m_flFlinchVelocityModifierSmall; // 0xD5C - 0xD60
   float m_flRecoveryTimeCrouch; // 0xD60 - 0xD64
   float m_flRecoveryTimeStand; // 0xD64 - 0xD68
   float m_flRecoveryTimeCrouchFinal; // 0xD68 - 0xD6C
   float m_flRecoveryTimeStandFinal; // 0xD6C - 0xD70
   int32_t m_nRecoveryTransitionStartBullet; // 0xD70 - 0xD74
   int32_t m_nRecoveryTransitionEndBullet; // 0xD74 - 0xD78
   float m_flThrowVelocity; // 0xD78 - 0xD7C
   Vector m_vSmokeColor; // 0xD7C - 0xD88
   CGlobalSymbol m_szAnimClass; // 0xD88 - 0xD90
   unsigned char pad_D90[0x28]; // 0xD90 - 0xDB8
}; // size - 0xDB8


class CCSWeaponBaseVData /* "client" */ : public CBasePlayerWeaponVData /* "client" */
{
public:
   CSWeaponType m_WeaponType; // 0x248 - 0x24C
   CSWeaponCategory m_WeaponCategory; // 0x24C - 0x250
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szViewModel; // 0x250 - 0x330
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szPlayerModel; // 0x330 - 0x410
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldDroppedModel; // 0x410 - 0x4F0
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szAimsightLensMaskModel; // 0x4F0 - 0x5D0
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szMagazineModel; // 0x5D0 - 0x6B0
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szHeatEffect; // 0x6B0 - 0x790
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szEjectBrassEffect; // 0x790 - 0x870
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticleAlt; // 0x870 - 0x950
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticle; // 0x950 - 0xA30
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashThirdPersonParticleAlt; // 0xA30 - 0xB10
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // 0xB10 - 0xBF0
   gear_slot_t m_GearSlot; // 0xBF0 - 0xBF4
   int32_t m_GearSlotPosition; // 0xBF4 - 0xBF8
   loadout_slot_t m_DefaultLoadoutSlot; // 0xBF8 - 0xBFC
   unsigned char pad_BFC[0x4]; // 0xBFC - 0xC00
   CUtlString m_sWrongTeamMsg; // 0xC00 - 0xC08
   int32_t m_nPrice; // 0xC08 - 0xC0C
   int32_t m_nKillAward; // 0xC0C - 0xC10
   int32_t m_nPrimaryReserveAmmoMax; // 0xC10 - 0xC14
   int32_t m_nSecondaryReserveAmmoMax; // 0xC14 - 0xC18
   bool m_bMeleeWeapon; // 0xC18 - 0xC19
   bool m_bHasBurstMode; // 0xC19 - 0xC1A
   bool m_bIsRevolver; // 0xC1A - 0xC1B
   bool m_bCannotShootUnderwater; // 0xC1B - 0xC1C
   unsigned char pad_C1C[0x4]; // 0xC1C - 0xC20
   CGlobalSymbol m_szName; // 0xC20 - 0xC28
   CUtlString m_szAnimExtension; // 0xC28 - 0xC30
   CSWeaponSilencerType m_eSilencerType; // 0xC30 - 0xC34
   int32_t m_nCrosshairMinDistance; // 0xC34 - 0xC38
   int32_t m_nCrosshairDeltaDistance; // 0xC38 - 0xC3C
   bool m_bIsFullAuto; // 0xC3C - 0xC3D
   unsigned char pad_C3D[0x3]; // 0xC3D - 0xC40
   int32_t m_nNumBullets; // 0xC40 - 0xC44
   CFiringModeFloat m_flCycleTime; // 0xC44 - 0xC4C
   CFiringModeFloat m_flMaxSpeed; // 0xC4C - 0xC54
   CFiringModeFloat m_flSpread; // 0xC54 - 0xC5C
   CFiringModeFloat m_flInaccuracyCrouch; // 0xC5C - 0xC64
   CFiringModeFloat m_flInaccuracyStand; // 0xC64 - 0xC6C
   CFiringModeFloat m_flInaccuracyJump; // 0xC6C - 0xC74
   CFiringModeFloat m_flInaccuracyLand; // 0xC74 - 0xC7C
   CFiringModeFloat m_flInaccuracyLadder; // 0xC7C - 0xC84
   CFiringModeFloat m_flInaccuracyFire; // 0xC84 - 0xC8C
   CFiringModeFloat m_flInaccuracyMove; // 0xC8C - 0xC94
   CFiringModeFloat m_flRecoilAngle; // 0xC94 - 0xC9C
   CFiringModeFloat m_flRecoilAngleVariance; // 0xC9C - 0xCA4
   CFiringModeFloat m_flRecoilMagnitude; // 0xCA4 - 0xCAC
   CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xCAC - 0xCB4
   CFiringModeInt m_nTracerFrequency; // 0xCB4 - 0xCBC
   float m_flInaccuracyJumpInitial; // 0xCBC - 0xCC0
   float m_flInaccuracyJumpApex; // 0xCC0 - 0xCC4
   float m_flInaccuracyReload; // 0xCC4 - 0xCC8
   int32_t m_nRecoilSeed; // 0xCC8 - 0xCCC
   int32_t m_nSpreadSeed; // 0xCCC - 0xCD0
   float m_flTimeToIdleAfterFire; // 0xCD0 - 0xCD4
   float m_flIdleInterval; // 0xCD4 - 0xCD8
   float m_flAttackMovespeedFactor; // 0xCD8 - 0xCDC
   float m_flHeatPerShot; // 0xCDC - 0xCE0
   float m_flInaccuracyPitchShift; // 0xCE0 - 0xCE4
   float m_flInaccuracyAltSoundThreshold; // 0xCE4 - 0xCE8
   float m_flBotAudibleRange; // 0xCE8 - 0xCEC
   unsigned char pad_CEC[0x4]; // 0xCEC - 0xCF0
   CUtlString m_szUseRadioSubtitle; // 0xCF0 - 0xCF8
   bool m_bUnzoomsAfterShot; // 0xCF8 - 0xCF9
   bool m_bHideViewModelWhenZoomed; // 0xCF9 - 0xCFA
   unsigned char pad_CFA[0x2]; // 0xCFA - 0xCFC
   int32_t m_nZoomLevels; // 0xCFC - 0xD00
   int32_t m_nZoomFOV1; // 0xD00 - 0xD04
   int32_t m_nZoomFOV2; // 0xD04 - 0xD08
   float m_flZoomTime0; // 0xD08 - 0xD0C
   float m_flZoomTime1; // 0xD0C - 0xD10
   float m_flZoomTime2; // 0xD10 - 0xD14
   float m_flIronSightPullUpSpeed; // 0xD14 - 0xD18
   float m_flIronSightPutDownSpeed; // 0xD18 - 0xD1C
   float m_flIronSightFOV; // 0xD1C - 0xD20
   float m_flIronSightPivotForward; // 0xD20 - 0xD24
   float m_flIronSightLooseness; // 0xD24 - 0xD28
   QAngle m_angPivotAngle; // 0xD28 - 0xD34
   Vector m_vecIronSightEyePos; // 0xD34 - 0xD40
   int32_t m_nDamage; // 0xD40 - 0xD44
   float m_flHeadshotMultiplier; // 0xD44 - 0xD48
   float m_flArmorRatio; // 0xD48 - 0xD4C
   float m_flPenetration; // 0xD4C - 0xD50
   float m_flRange; // 0xD50 - 0xD54
   float m_flRangeModifier; // 0xD54 - 0xD58
   float m_flFlinchVelocityModifierLarge; // 0xD58 - 0xD5C
   float m_flFlinchVelocityModifierSmall; // 0xD5C - 0xD60
   float m_flRecoveryTimeCrouch; // 0xD60 - 0xD64
   float m_flRecoveryTimeStand; // 0xD64 - 0xD68
   float m_flRecoveryTimeCrouchFinal; // 0xD68 - 0xD6C
   float m_flRecoveryTimeStandFinal; // 0xD6C - 0xD70
   int32_t m_nRecoveryTransitionStartBullet; // 0xD70 - 0xD74
   int32_t m_nRecoveryTransitionEndBullet; // 0xD74 - 0xD78
   float m_flThrowVelocity; // 0xD78 - 0xD7C
   Vector m_vSmokeColor; // 0xD7C - 0xD88
   CGlobalSymbol m_szAnimClass; // 0xD88 - 0xD90
   unsigned char pad_D90[0x28]; // 0xD90 - 0xDB8
}; // size - 0xDB8


class CCSWeaponBaseVDataAPI /* "client" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CChangeLevel /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CUtlString m_sMapName; // 0x8B8 - 0x8C0
   CUtlString m_sLandmarkName; // 0x8C0 - 0x8C8
   CEntityIOOutput m_OnChangeLevel; // 0x8C8 - 0x8F0
   bool m_bTouched; // 0x8F0 - 0x8F1
   bool m_bNoTouch; // 0x8F1 - 0x8F2
   bool m_bNewChapter; // 0x8F2 - 0x8F3
   bool m_bOnChangeLevelFired; // 0x8F3 - 0x8F4
   unsigned char pad_8F4[0x4]; // 0x8F4 - 0x8F8
}; // size - 0x8F8


class CChicken /* "server" */ : public CDynamicProp /* "server" */
{
public:
   unsigned char pad_B60[0x20]; // 0xB60 - 0xB80
   CAttributeContainer m_AttributeManager; // 0xB80 - 0xE48
   uint32_t m_OriginalOwnerXuidLow; // 0xE48 - 0xE4C
   uint32_t m_OriginalOwnerXuidHigh; // 0xE4C - 0xE50
   CountdownTimer m_updateTimer; // 0xE50 - 0xE68
   Vector m_stuckAnchor; // 0xE68 - 0xE74
   unsigned char pad_E74[0x4]; // 0xE74 - 0xE78
   CountdownTimer m_stuckTimer; // 0xE78 - 0xE90
   CountdownTimer m_collisionStuckTimer; // 0xE90 - 0xEA8
   bool m_isOnGround; // 0xEA8 - 0xEA9
   unsigned char pad_EA9[0x3]; // 0xEA9 - 0xEAC
   Vector m_vFallVelocity; // 0xEAC - 0xEB8
   ChickenActivity m_activity; // 0xEB8 - 0xEBC
   unsigned char pad_EBC[0x4]; // 0xEBC - 0xEC0
   CountdownTimer m_activityTimer; // 0xEC0 - 0xED8
   float m_turnRate; // 0xED8 - 0xEDC
   CHandle< CBaseEntity > m_fleeFrom; // 0xEDC - 0xEE0
   CountdownTimer m_moveRateThrottleTimer; // 0xEE0 - 0xEF8
   CountdownTimer m_startleTimer; // 0xEF8 - 0xF10
   CountdownTimer m_vocalizeTimer; // 0xF10 - 0xF28
   GameTime_t m_flWhenZombified; // 0xF28 - 0xF2C
   bool m_jumpedThisFrame; // 0xF2C - 0xF2D
   unsigned char pad_F2D[0x3]; // 0xF2D - 0xF30
   CHandle< CCSPlayerPawn > m_leader; // 0xF30 - 0xF34
   unsigned char pad_F34[0x4]; // 0xF34 - 0xF38
   CountdownTimer m_reuseTimer; // 0xF38 - 0xF50
   bool m_hasBeenUsed; // 0xF50 - 0xF51
   unsigned char pad_F51[0x7]; // 0xF51 - 0xF58
   CountdownTimer m_jumpTimer; // 0xF58 - 0xF70
   float m_flLastJumpTime; // 0xF70 - 0xF74
   bool m_bInJump; // 0xF74 - 0xF75
   bool m_isWaitingForLeader; // 0xF75 - 0xF76
   unsigned char pad_F76[0x200A]; // 0xF76 - 0x2F80
   CountdownTimer m_repathTimer; // 0x2F80 - 0x2F98
   CountdownTimer m_inhibitDoorTimer; // 0x2F98 - 0x2FB0
   unsigned char pad_2FB0[0x78]; // 0x2FB0 - 0x3028
   CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x3028 - 0x3040
   unsigned char pad_3040[0x8]; // 0x3040 - 0x3048
   Vector m_vecPathGoal; // 0x3048 - 0x3054
   GameTime_t m_flActiveFollowStartTime; // 0x3054 - 0x3058
   CountdownTimer m_followMinuteTimer; // 0x3058 - 0x3070
   Vector m_vecLastEggPoopPosition; // 0x3070 - 0x307C
   unsigned char pad_307C[0x4]; // 0x307C - 0x3080
   CUtlVector< CHandle< CBaseEntity > > m_vecEggsPooped; // 0x3080 - 0x3098
   unsigned char pad_3098[0x8]; // 0x3098 - 0x30A0
   CountdownTimer m_BlockDirectionTimer; // 0x30A0 - 0x30B8
}; // size - 0x30B8


class CChicken_GraphController /* "server" */ : public CAnimGraphControllerBase /* "server" */
{
public:
   CAnimGraphParamRef< char* > m_pszActivity; // 0x18 - 0x38
}; // size - 0x38


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


class CClientPointEntityAPI /* "client" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CClientScriptEntity /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_0[0x630]; // 0x0 - 0x630
}; // size - 0x630


class CCollisionProperty /* "client" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10 - 0x40
   Vector m_vecMins; // 0x40 - 0x4C
   Vector m_vecMaxs; // 0x4C - 0x58
   unsigned char pad_58[0x2]; // 0x58 - 0x5A
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


class CColorCorrectionVolume /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   bool m_bEnabled; // 0x8B8 - 0x8B9
   unsigned char pad_8B9[0x3]; // 0x8B9 - 0x8BC
   float m_MaxWeight; // 0x8BC - 0x8C0
   float m_FadeDuration; // 0x8C0 - 0x8C4
   bool m_bStartDisabled; // 0x8C4 - 0x8C5
   unsigned char pad_8C5[0x3]; // 0x8C5 - 0x8C8
   float m_Weight; // 0x8C8 - 0x8CC
   char m_lookupFilename[512]; // 0x8CC - 0xACC
   float m_LastEnterWeight; // 0xACC - 0xAD0
   GameTime_t m_LastEnterTime; // 0xAD0 - 0xAD4
   float m_LastExitWeight; // 0xAD4 - 0xAD8
   GameTime_t m_LastExitTime; // 0xAD8 - 0xADC
   unsigned char pad_ADC[0x4]; // 0xADC - 0xAE0
}; // size - 0xAE0


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


class CCommentaryViewPosition /* "server" */ : public CSprite /* "server" */
{
public:
   unsigned char pad_0[0x780]; // 0x0 - 0x780
}; // size - 0x780


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


class CConcreteAnimParameter /* "animgraphlib" */ : public CAnimParameterBase /* "animgraphlib" */
{
public:
   AnimParamButton_t m_previewButton; // 0x68 - 0x6C
   AnimParamNetworkSetting m_eNetworkSetting; // 0x6C - 0x70
   bool m_bUseMostRecentValue; // 0x70 - 0x71
   bool m_bAutoReset; // 0x71 - 0x72
   bool m_bGameWritable; // 0x72 - 0x73
   bool m_bGraphWritable; // 0x73 - 0x74
   unsigned char pad_74[0x4]; // 0x74 - 0x78
}; // size - 0x78


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


class CConstraintAnchor /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   float m_massScale; // 0x8E8 - 0x8EC
   unsigned char pad_8EC[0x4]; // 0x8EC - 0x8F0
}; // size - 0x8F0


class CCoopBonusCoin /* "server" */ : public CDynamicProp /* "server" */
{
public:
   unsigned char pad_0[0xB60]; // 0x0 - 0xB60
}; // size - 0xB60


class CCycleBase /* "modellib" */
{
public:
   float m_flCycle; // 0x0 - 0x4
}; // size - 0x4


class CDEagle /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CDamageRecord /* "client" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
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
   unsigned char pad_6A[0x6]; // 0x6A - 0x70
}; // size - 0x70


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


class CDecoyGrenade /* "server" */ : public CBaseCSGrenade /* "server" */
{
public:
   unsigned char pad_0[0xEC0]; // 0x0 - 0xEC0
}; // size - 0xEC0


class CDecoyProjectile /* "server" */ : public CBaseCSGrenadeProjectile /* "server" */
{
public:
   unsigned char pad_A98[0x8]; // 0xA98 - 0xAA0
   int32_t m_nDecoyShotTick; // 0xAA0 - 0xAA4
   int32_t m_shotsRemaining; // 0xAA4 - 0xAA8
   GameTime_t m_fExpireTime; // 0xAA8 - 0xAAC
   unsigned char pad_AAC[0xC]; // 0xAAC - 0xAB8
   uint16_t m_decoyWeaponDefIndex; // 0xAB8 - 0xABA
   unsigned char pad_ABA[0x6]; // 0xABA - 0xAC0
}; // size - 0xAC0


class CDynamicPropAPI /* "server" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CDynamicPropAPI /* "client" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class CDynamicPropAlias_cable_dynamic /* "server" */ : public CDynamicProp /* "server" */
{
public:
   unsigned char pad_0[0xB60]; // 0x0 - 0xB60
}; // size - 0xB60


class CDynamicPropAlias_dynamic_prop /* "server" */ : public CDynamicProp /* "server" */
{
public:
   unsigned char pad_0[0xB60]; // 0x0 - 0xB60
}; // size - 0xB60


class CDynamicPropAlias_prop_dynamic_override /* "server" */ : public CDynamicProp /* "server" */
{
public:
   unsigned char pad_0[0xB60]; // 0x0 - 0xB60
}; // size - 0xB60


class CEconItemView /* "server" */ : public IEconItemInterface /* "server" */
{
public:
   unsigned char pad_8[0x30]; // 0x8 - 0x38
   uint16_t m_iItemDefinitionIndex; // 0x38 - 0x3A
   unsigned char pad_3A[0x2]; // 0x3A - 0x3C
   int32_t m_iEntityQuality; // 0x3C - 0x40
   uint32_t m_iEntityLevel; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
   uint64_t m_iItemID; // 0x48 - 0x50
   uint32_t m_iItemIDHigh; // 0x50 - 0x54
   uint32_t m_iItemIDLow; // 0x54 - 0x58
   uint32_t m_iAccountID; // 0x58 - 0x5C
   uint32_t m_iInventoryPosition; // 0x5C - 0x60
   unsigned char pad_60[0x8]; // 0x60 - 0x68
   bool m_bInitialized; // 0x68 - 0x69
   unsigned char pad_69[0x7]; // 0x69 - 0x70
   CAttributeList m_AttributeList; // 0x70 - 0xD0
   CAttributeList m_NetworkedDynamicAttributes; // 0xD0 - 0x130
   char m_szCustomName[161]; // 0x130 - 0x1D1
   char m_szCustomNameOverride[161]; // 0x1D1 - 0x272
   unsigned char pad_272[0x6]; // 0x272 - 0x278
}; // size - 0x278


class CEconWearable /* "server" */ : public CEconEntity /* "server" */
{
public:
   int32_t m_nForceSkin; // 0xC70 - 0xC74
   bool m_bAlwaysAllow; // 0xC74 - 0xC75
   unsigned char pad_C75[0x3]; // 0xC75 - 0xC78
}; // size - 0xC78


class CEffectData /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
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
   unsigned char pad_5D[0x1]; // 0x5D - 0x5E
   uint16_t m_nMaterial; // 0x5E - 0x60
   uint16_t m_nHitBox; // 0x60 - 0x62
   uint8_t m_nColor; // 0x62 - 0x63
   uint8_t m_fFlags; // 0x63 - 0x64
   AttachmentHandle_t m_nAttachmentIndex; // 0x64 - 0x65
   unsigned char pad_65[0x3]; // 0x65 - 0x68
   CUtlStringToken m_nAttachmentName; // 0x68 - 0x6C
   uint16_t m_iEffectName; // 0x6C - 0x6E
   uint8_t m_nExplosionType; // 0x6E - 0x6F
   unsigned char pad_6F[0x9]; // 0x6F - 0x78
}; // size - 0x78


class CEffectData /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
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
   unsigned char pad_5D[0x1]; // 0x5D - 0x5E
   uint16_t m_nMaterial; // 0x5E - 0x60
   uint16_t m_nHitBox; // 0x60 - 0x62
   uint8_t m_nColor; // 0x62 - 0x63
   uint8_t m_fFlags; // 0x63 - 0x64
   AttachmentHandle_t m_nAttachmentIndex; // 0x64 - 0x65
   unsigned char pad_65[0x3]; // 0x65 - 0x68
   CUtlStringToken m_nAttachmentName; // 0x68 - 0x6C
   uint16_t m_iEffectName; // 0x6C - 0x6E
   uint8_t m_nExplosionType; // 0x6E - 0x6F
   unsigned char pad_6F[0x1]; // 0x6F - 0x70
}; // size - 0x70


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


class CEntityBlocker /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   unsigned char pad_0[0x710]; // 0x0 - 0x710
}; // size - 0x710


class CEntityDissolve /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   float m_flFadeInStart; // 0x710 - 0x714
   float m_flFadeInLength; // 0x714 - 0x718
   float m_flFadeOutModelStart; // 0x718 - 0x71C
   float m_flFadeOutModelLength; // 0x71C - 0x720
   float m_flFadeOutStart; // 0x720 - 0x724
   float m_flFadeOutLength; // 0x724 - 0x728
   GameTime_t m_flStartTime; // 0x728 - 0x72C
   EntityDisolveType_t m_nDissolveType; // 0x72C - 0x730
   Vector m_vDissolverOrigin; // 0x730 - 0x73C
   uint32_t m_nMagnitude; // 0x73C - 0x740
}; // size - 0x740


class CEntityIOOutput /* "entity2" */
{
public:
   unsigned char pad_0[0x18]; // 0x0 - 0x18
   CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18 - 0x28
}; // size - 0x28


class CEntityIdentity /* "entity2" */
{
public:
   unsigned char pad_0[0x14]; // 0x0 - 0x14
   int32_t m_nameStringableIndex; // 0x14 - 0x18
   CUtlSymbolLarge m_name; // 0x18 - 0x20
   CUtlSymbolLarge m_designerName; // 0x20 - 0x28
   unsigned char pad_28[0x8]; // 0x28 - 0x30
   uint32_t m_flags; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
   WorldGroupId_t m_worldGroupId; // 0x38 - 0x3C
   uint32_t m_fDataObjectTypes; // 0x3C - 0x40
   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40 - 0x42
   unsigned char pad_42[0x16]; // 0x42 - 0x58
   CEntityIdentity* m_pPrev; // 0x58 - 0x60
   CEntityIdentity* m_pNext; // 0x60 - 0x68
   CEntityIdentity* m_pPrevByClass; // 0x68 - 0x70
   CEntityIdentity* m_pNextByClass; // 0x70 - 0x78
}; // size - 0x78


class CEntityIdentity /* "entity2" */
{
public:
   unsigned char pad_0[0x14]; // 0x0 - 0x14
   int32_t m_nameStringableIndex; // 0x14 - 0x18
   CUtlSymbolLarge m_name; // 0x18 - 0x20
   CUtlSymbolLarge m_designerName; // 0x20 - 0x28
   unsigned char pad_28[0x8]; // 0x28 - 0x30
   uint32_t m_flags; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
   WorldGroupId_t m_worldGroupId; // 0x38 - 0x3C
   uint32_t m_fDataObjectTypes; // 0x3C - 0x40
   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40 - 0x42
   unsigned char pad_42[0x16]; // 0x42 - 0x58
   CEntityIdentity* m_pPrev; // 0x58 - 0x60
   CEntityIdentity* m_pNext; // 0x60 - 0x68
   CEntityIdentity* m_pPrevByClass; // 0x68 - 0x70
   CEntityIdentity* m_pNextByClass; // 0x70 - 0x78
}; // size - 0x78


class CEntityIdentity /* "entity2" */
{
public:
   unsigned char pad_0[0x14]; // 0x0 - 0x14
   int32_t m_nameStringableIndex; // 0x14 - 0x18
   CUtlSymbolLarge m_name; // 0x18 - 0x20
   CUtlSymbolLarge m_designerName; // 0x20 - 0x28
   unsigned char pad_28[0x8]; // 0x28 - 0x30
   uint32_t m_flags; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
   WorldGroupId_t m_worldGroupId; // 0x38 - 0x3C
   uint32_t m_fDataObjectTypes; // 0x3C - 0x40
   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40 - 0x42
   unsigned char pad_42[0x16]; // 0x42 - 0x58
   CEntityIdentity* m_pPrev; // 0x58 - 0x60
   CEntityIdentity* m_pNext; // 0x60 - 0x68
   CEntityIdentity* m_pPrevByClass; // 0x68 - 0x70
   CEntityIdentity* m_pNextByClass; // 0x70 - 0x78
}; // size - 0x78


class CEntityIdentity /* "entity2" */
{
public:
   unsigned char pad_0[0x14]; // 0x0 - 0x14
   int32_t m_nameStringableIndex; // 0x14 - 0x18
   CUtlSymbolLarge m_name; // 0x18 - 0x20
   CUtlSymbolLarge m_designerName; // 0x20 - 0x28
   unsigned char pad_28[0x8]; // 0x28 - 0x30
   uint32_t m_flags; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
   WorldGroupId_t m_worldGroupId; // 0x38 - 0x3C
   uint32_t m_fDataObjectTypes; // 0x3C - 0x40
   ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40 - 0x42
   unsigned char pad_42[0x16]; // 0x42 - 0x58
   CEntityIdentity* m_pPrev; // 0x58 - 0x60
   CEntityIdentity* m_pNext; // 0x60 - 0x68
   CEntityIdentity* m_pPrevByClass; // 0x68 - 0x70
   CEntityIdentity* m_pNextByClass; // 0x70 - 0x78
}; // size - 0x78


class CEntityInstance /* "entity2" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x10
   CEntityIdentity* m_pEntity; // 0x10 - 0x18
   unsigned char pad_18[0x10]; // 0x18 - 0x28
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x30
   bool m_bVisibleinPVS; // 0x30 - 0x31
   unsigned char pad_31[0x7]; // 0x31 - 0x38
}; // size - 0x38


class CEntityInstance /* "entity2" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlSymbolLarge m_iszPrivateVScripts; // 0x8 - 0x10
   CEntityIdentity* m_pEntity; // 0x10 - 0x18
   unsigned char pad_18[0x10]; // 0x18 - 0x28
   CScriptComponent* m_CScriptComponent; // 0x28 - 0x30
   bool m_bVisibleinPVS; // 0x30 - 0x31
   unsigned char pad_31[0x7]; // 0x31 - 0x38
}; // size - 0x38


class CEnvBeam /* "server" */ : public CBeam /* "server" */
{
public:
   int32_t m_active; // 0x7B0 - 0x7B4
   unsigned char pad_7B4[0x4]; // 0x7B4 - 0x7B8
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x7B8 - 0x7C0
   CUtlSymbolLarge m_iszStartEntity; // 0x7C0 - 0x7C8
   CUtlSymbolLarge m_iszEndEntity; // 0x7C8 - 0x7D0
   float m_life; // 0x7D0 - 0x7D4
   float m_boltWidth; // 0x7D4 - 0x7D8
   float m_noiseAmplitude; // 0x7D8 - 0x7DC
   int32_t m_speed; // 0x7DC - 0x7E0
   float m_restrike; // 0x7E0 - 0x7E4
   unsigned char pad_7E4[0x4]; // 0x7E4 - 0x7E8
   CUtlSymbolLarge m_iszSpriteName; // 0x7E8 - 0x7F0
   int32_t m_frameStart; // 0x7F0 - 0x7F4
   Vector m_vEndPointWorld; // 0x7F4 - 0x800
   Vector m_vEndPointRelative; // 0x800 - 0x80C
   float m_radius; // 0x80C - 0x810
   Touch_t m_TouchType; // 0x810 - 0x814
   unsigned char pad_814[0x4]; // 0x814 - 0x818
   CUtlSymbolLarge m_iFilterName; // 0x818 - 0x820
   CHandle< CBaseEntity > m_hFilter; // 0x820 - 0x824
   unsigned char pad_824[0x4]; // 0x824 - 0x828
   CUtlSymbolLarge m_iszDecal; // 0x828 - 0x830
   CEntityIOOutput m_OnTouchedByEntity; // 0x830 - 0x858
}; // size - 0x858


class CEnvCombinedLightProbeVolume /* "server" */ : public CBaseEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x1058]; // 0x4C0 - 0x1518
   Color m_Color; // 0x1518 - 0x151C
   float m_flBrightness; // 0x151C - 0x1520
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x1520 - 0x1528
   bool m_bCustomCubemapTexture; // 0x1528 - 0x1529
   unsigned char pad_1529[0x7]; // 0x1529 - 0x1530
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1530 - 0x1538
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1538 - 0x1540
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1540 - 0x1548
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1548 - 0x1550
   Vector m_vBoxMins; // 0x1550 - 0x155C
   Vector m_vBoxMaxs; // 0x155C - 0x1568
   bool m_bMoveable; // 0x1568 - 0x1569
   unsigned char pad_1569[0x3]; // 0x1569 - 0x156C
   int32_t m_nHandshake; // 0x156C - 0x1570
   int32_t m_nEnvCubeMapArrayIndex; // 0x1570 - 0x1574
   int32_t m_nPriority; // 0x1574 - 0x1578
   bool m_bStartDisabled; // 0x1578 - 0x1579
   unsigned char pad_1579[0x3]; // 0x1579 - 0x157C
   float m_flEdgeFadeDist; // 0x157C - 0x1580
   Vector m_vEdgeFadeDists; // 0x1580 - 0x158C
   int32_t m_nLightProbeSizeX; // 0x158C - 0x1590
   int32_t m_nLightProbeSizeY; // 0x1590 - 0x1594
   int32_t m_nLightProbeSizeZ; // 0x1594 - 0x1598
   int32_t m_nLightProbeAtlasX; // 0x1598 - 0x159C
   int32_t m_nLightProbeAtlasY; // 0x159C - 0x15A0
   int32_t m_nLightProbeAtlasZ; // 0x15A0 - 0x15A4
   unsigned char pad_15A4[0x15]; // 0x15A4 - 0x15B9
   bool m_bEnabled; // 0x15B9 - 0x15BA
   unsigned char pad_15BA[0x6]; // 0x15BA - 0x15C0
}; // size - 0x15C0


class CEnvCubemapBox /* "server" */ : public CEnvCubemap /* "server" */
{
public:
   unsigned char pad_0[0x5A8]; // 0x0 - 0x5A8
}; // size - 0x5A8


class CEnvCubemapFog /* "server" */ : public CBaseEntity /* "server" */
{
public:
   float m_flEndDistance; // 0x4C0 - 0x4C4
   float m_flStartDistance; // 0x4C4 - 0x4C8
   float m_flFogFalloffExponent; // 0x4C8 - 0x4CC
   bool m_bHeightFogEnabled; // 0x4CC - 0x4CD
   unsigned char pad_4CD[0x3]; // 0x4CD - 0x4D0
   float m_flFogHeightWidth; // 0x4D0 - 0x4D4
   float m_flFogHeightEnd; // 0x4D4 - 0x4D8
   float m_flFogHeightStart; // 0x4D8 - 0x4DC
   float m_flFogHeightExponent; // 0x4DC - 0x4E0
   float m_flLODBias; // 0x4E0 - 0x4E4
   bool m_bActive; // 0x4E4 - 0x4E5
   bool m_bStartDisabled; // 0x4E5 - 0x4E6
   unsigned char pad_4E6[0x2]; // 0x4E6 - 0x4E8
   float m_flFogMaxOpacity; // 0x4E8 - 0x4EC
   int32_t m_nCubemapSourceType; // 0x4EC - 0x4F0
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x4F0 - 0x4F8
   CUtlSymbolLarge m_iszSkyEntity; // 0x4F8 - 0x500
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x500 - 0x508
   bool m_bHasHeightFogEnd; // 0x508 - 0x509
   bool m_bFirstTime; // 0x509 - 0x50A
   unsigned char pad_50A[0x6]; // 0x50A - 0x510
}; // size - 0x510


class CEnvDetailController /* "server" */ : public CBaseEntity /* "server" */
{
public:
   float m_flFadeStartDist; // 0x4C0 - 0x4C4
   float m_flFadeEndDist; // 0x4C4 - 0x4C8
}; // size - 0x4C8


class CEnvFade /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   Color m_fadeColor; // 0x4C0 - 0x4C4
   float m_Duration; // 0x4C4 - 0x4C8
   float m_HoldDuration; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4]; // 0x4CC - 0x4D0
   CEntityIOOutput m_OnBeginFade; // 0x4D0 - 0x4F8
}; // size - 0x4F8


class CEnvFireSensor /* "server" */ : public CBaseEntity /* "server" */
{
public:
   bool m_bEnabled; // 0x4C0 - 0x4C1
   bool m_bHeatAtLevel; // 0x4C1 - 0x4C2
   unsigned char pad_4C2[0x2]; // 0x4C2 - 0x4C4
   float m_radius; // 0x4C4 - 0x4C8
   float m_targetLevel; // 0x4C8 - 0x4CC
   float m_targetTime; // 0x4CC - 0x4D0
   float m_levelTime; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0x4]; // 0x4D4 - 0x4D8
   CEntityIOOutput m_OnHeatLevelStart; // 0x4D8 - 0x500
   CEntityIOOutput m_OnHeatLevelEnd; // 0x500 - 0x528
}; // size - 0x528


class CEnvFireSource /* "server" */ : public CBaseEntity /* "server" */
{
public:
   bool m_bEnabled; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x3]; // 0x4C1 - 0x4C4
   float m_radius; // 0x4C4 - 0x4C8
   float m_damage; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4]; // 0x4CC - 0x4D0
}; // size - 0x4D0


class CEnvGlobal /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CEntityOutputTemplate< int32 > m_outCounter; // 0x4C0 - 0x4E8
   CUtlSymbolLarge m_globalstate; // 0x4E8 - 0x4F0
   int32_t m_triggermode; // 0x4F0 - 0x4F4
   int32_t m_initialstate; // 0x4F4 - 0x4F8
   int32_t m_counter; // 0x4F8 - 0x4FC
   unsigned char pad_4FC[0x4]; // 0x4FC - 0x500
}; // size - 0x500


class CEnvHudHint /* "server" */ : public CPointEntity /* "server" */
{
public:
   CUtlSymbolLarge m_iszMessage; // 0x4C0 - 0x4C8
}; // size - 0x4C8


class CEnvInstructorVRHint /* "server" */ : public CPointEntity /* "server" */
{
public:
   CUtlSymbolLarge m_iszName; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_iszHintTargetEntity; // 0x4C8 - 0x4D0
   int32_t m_iTimeout; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0x4]; // 0x4D4 - 0x4D8
   CUtlSymbolLarge m_iszCaption; // 0x4D8 - 0x4E0
   CUtlSymbolLarge m_iszStartSound; // 0x4E0 - 0x4E8
   int32_t m_iLayoutFileType; // 0x4E8 - 0x4EC
   unsigned char pad_4EC[0x4]; // 0x4EC - 0x4F0
   CUtlSymbolLarge m_iszCustomLayoutFile; // 0x4F0 - 0x4F8
   int32_t m_iAttachType; // 0x4F8 - 0x4FC
   float m_flHeightOffset; // 0x4FC - 0x500
}; // size - 0x500


class CEnvLightProbeVolume /* "server" */ : public CBaseEntity /* "server" */
{
public:
   unsigned char pad_4C0[0xFD8]; // 0x4C0 - 0x1498
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1498 - 0x14A0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x14A0 - 0x14A8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x14A8 - 0x14B0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x14B0 - 0x14B8
   Vector m_vBoxMins; // 0x14B8 - 0x14C4
   Vector m_vBoxMaxs; // 0x14C4 - 0x14D0
   bool m_bMoveable; // 0x14D0 - 0x14D1
   unsigned char pad_14D1[0x3]; // 0x14D1 - 0x14D4
   int32_t m_nHandshake; // 0x14D4 - 0x14D8
   int32_t m_nPriority; // 0x14D8 - 0x14DC
   bool m_bStartDisabled; // 0x14DC - 0x14DD
   unsigned char pad_14DD[0x3]; // 0x14DD - 0x14E0
   int32_t m_nLightProbeSizeX; // 0x14E0 - 0x14E4
   int32_t m_nLightProbeSizeY; // 0x14E4 - 0x14E8
   int32_t m_nLightProbeSizeZ; // 0x14E8 - 0x14EC
   int32_t m_nLightProbeAtlasX; // 0x14EC - 0x14F0
   int32_t m_nLightProbeAtlasY; // 0x14F0 - 0x14F4
   int32_t m_nLightProbeAtlasZ; // 0x14F4 - 0x14F8
   unsigned char pad_14F8[0x9]; // 0x14F8 - 0x1501
   bool m_bEnabled; // 0x1501 - 0x1502
   unsigned char pad_1502[0x6]; // 0x1502 - 0x1508
}; // size - 0x1508


class CEnvParticleGlow /* "server" */ : public CParticleSystem /* "server" */
{
public:
   float m_flAlphaScale; // 0xC88 - 0xC8C
   float m_flRadiusScale; // 0xC8C - 0xC90
   float m_flSelfIllumScale; // 0xC90 - 0xC94
   Color m_ColorTint; // 0xC94 - 0xC98
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xC98 - 0xCA0
}; // size - 0xCA0


class CEnvSky /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x710 - 0x718
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // 0x718 - 0x720
   bool m_bStartDisabled; // 0x720 - 0x721
   Color m_vTintColor; // 0x721 - 0x725
   Color m_vTintColorLightingOnly; // 0x725 - 0x729
   unsigned char pad_729[0x3]; // 0x729 - 0x72C
   float m_flBrightnessScale; // 0x72C - 0x730
   int32_t m_nFogType; // 0x730 - 0x734
   float m_flFogMinStart; // 0x734 - 0x738
   float m_flFogMinEnd; // 0x738 - 0x73C
   float m_flFogMaxStart; // 0x73C - 0x740
   float m_flFogMaxEnd; // 0x740 - 0x744
   bool m_bEnabled; // 0x744 - 0x745
   unsigned char pad_745[0x2B]; // 0x745 - 0x770
}; // size - 0x770


class CEnvVolumetricFogController /* "server" */ : public CBaseEntity /* "server" */
{
public:
   float m_flScattering; // 0x4C0 - 0x4C4
   float m_flAnisotropy; // 0x4C4 - 0x4C8
   float m_flFadeSpeed; // 0x4C8 - 0x4CC
   float m_flDrawDistance; // 0x4CC - 0x4D0
   float m_flFadeInStart; // 0x4D0 - 0x4D4
   float m_flFadeInEnd; // 0x4D4 - 0x4D8
   float m_flIndirectStrength; // 0x4D8 - 0x4DC
   int32_t m_nIndirectTextureDimX; // 0x4DC - 0x4E0
   int32_t m_nIndirectTextureDimY; // 0x4E0 - 0x4E4
   int32_t m_nIndirectTextureDimZ; // 0x4E4 - 0x4E8
   Vector m_vBoxMins; // 0x4E8 - 0x4F4
   Vector m_vBoxMaxs; // 0x4F4 - 0x500
   bool m_bActive; // 0x500 - 0x501
   unsigned char pad_501[0x3]; // 0x501 - 0x504
   GameTime_t m_flStartAnisoTime; // 0x504 - 0x508
   GameTime_t m_flStartScatterTime; // 0x508 - 0x50C
   GameTime_t m_flStartDrawDistanceTime; // 0x50C - 0x510
   float m_flStartAnisotropy; // 0x510 - 0x514
   float m_flStartScattering; // 0x514 - 0x518
   float m_flStartDrawDistance; // 0x518 - 0x51C
   float m_flDefaultAnisotropy; // 0x51C - 0x520
   float m_flDefaultScattering; // 0x520 - 0x524
   float m_flDefaultDrawDistance; // 0x524 - 0x528
   bool m_bStartDisabled; // 0x528 - 0x529
   bool m_bEnableIndirect; // 0x529 - 0x52A
   bool m_bIsMaster; // 0x52A - 0x52B
   unsigned char pad_52B[0x5]; // 0x52B - 0x530
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x530 - 0x538
   int32_t m_nForceRefreshCount; // 0x538 - 0x53C
   bool m_bFirstTime; // 0x53C - 0x53D
   unsigned char pad_53D[0x3]; // 0x53D - 0x540
}; // size - 0x540


class CEnvVolumetricFogVolume /* "server" */ : public CBaseEntity /* "server" */
{
public:
   bool m_bActive; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x3]; // 0x4C1 - 0x4C4
   Vector m_vBoxMins; // 0x4C4 - 0x4D0
   Vector m_vBoxMaxs; // 0x4D0 - 0x4DC
   bool m_bStartDisabled; // 0x4DC - 0x4DD
   unsigned char pad_4DD[0x3]; // 0x4DD - 0x4E0
   float m_flStrength; // 0x4E0 - 0x4E4
   int32_t m_nFalloffShape; // 0x4E4 - 0x4E8
   float m_flFalloffExponent; // 0x4E8 - 0x4EC
   unsigned char pad_4EC[0x4]; // 0x4EC - 0x4F0
}; // size - 0x4F0


class CEnvWindShared /* "server" */
{
public:
   class WindAveEvent_t /* "server" */
   {
   public:
      float m_flStartWindSpeed; // 0x0 - 0x4
      float m_flAveWindSpeed; // 0x4 - 0x8
   }; // size - 0x8

   unsigned char pad_0[0x8]; // 0x0 - 0x8
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
   unsigned char pad_2A[0x2]; // 0x2A - 0x2C
   Vector m_location; // 0x2C - 0x38
   int32_t m_iszGustSound; // 0x38 - 0x3C
   int32_t m_iWindDir; // 0x3C - 0x40
   float m_flWindSpeed; // 0x40 - 0x44
   Vector m_currentWindVector; // 0x44 - 0x50
   Vector m_CurrentSwayVector; // 0x50 - 0x5C
   Vector m_PrevSwayVector; // 0x5C - 0x68
   uint16_t m_iInitialWindDir; // 0x68 - 0x6A
   unsigned char pad_6A[0x2]; // 0x6A - 0x6C
   float m_flInitialWindSpeed; // 0x6C - 0x70
   CEntityIOOutput m_OnGustStart; // 0x70 - 0x98
   CEntityIOOutput m_OnGustEnd; // 0x98 - 0xC0
   GameTime_t m_flVariationTime; // 0xC0 - 0xC4
   GameTime_t m_flSwayTime; // 0xC4 - 0xC8
   GameTime_t m_flSimTime; // 0xC8 - 0xCC
   GameTime_t m_flSwitchTime; // 0xCC - 0xD0
   float m_flAveWindSpeed; // 0xD0 - 0xD4
   bool m_bGusting; // 0xD4 - 0xD5
   unsigned char pad_D5[0x3]; // 0xD5 - 0xD8
   float m_flWindAngleVariation; // 0xD8 - 0xDC
   float m_flWindSpeedVariation; // 0xDC - 0xE0
   CEntityIndex m_iEntIndex; // 0xE0 - 0xE4
   unsigned char pad_E4[0x174]; // 0xE4 - 0x258
}; // size - 0x258



class CFeIndexedJiggleBone /* "physicslib" */
{
public:
   uint32_t m_nNode; // 0x0 - 0x4
   uint32_t m_nJiggleParent; // 0x4 - 0x8
   CFeJiggleBone m_jiggleBone; // 0x8 - 0xA4
}; // size - 0xA4


class CFilterAttributeInt /* "server" */ : public CBaseFilter /* "server" */
{
public:
   CUtlStringToken m_sAttributeName; // 0x518 - 0x51C
   unsigned char pad_51C[0x4]; // 0x51C - 0x520
}; // size - 0x520


class CFire /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CHandle< CBaseFire > m_hEffect; // 0x710 - 0x714
   CHandle< CBaseEntity > m_hOwner; // 0x714 - 0x718
   int32_t m_nFireType; // 0x718 - 0x71C
   float m_flFuel; // 0x71C - 0x720
   GameTime_t m_flDamageTime; // 0x720 - 0x724
   GameTime_t m_lastDamage; // 0x724 - 0x728
   float m_flFireSize; // 0x728 - 0x72C
   GameTime_t m_flLastNavUpdateTime; // 0x72C - 0x730
   float m_flHeatLevel; // 0x730 - 0x734
   float m_flHeatAbsorb; // 0x734 - 0x738
   float m_flDamageScale; // 0x738 - 0x73C
   float m_flMaxHeat; // 0x73C - 0x740
   float m_flLastHeatLevel; // 0x740 - 0x744
   float m_flAttackTime; // 0x744 - 0x748
   bool m_bEnabled; // 0x748 - 0x749
   bool m_bStartDisabled; // 0x749 - 0x74A
   bool m_bDidActivate; // 0x74A - 0x74B
   unsigned char pad_74B[0x5]; // 0x74B - 0x750
   CEntityIOOutput m_OnIgnited; // 0x750 - 0x778
   CEntityIOOutput m_OnExtinguished; // 0x778 - 0x7A0
}; // size - 0x7A0


class CFireCrackerBlast /* "server" */ : public CInferno /* "server" */
{
public:
   unsigned char pad_0[0x1398]; // 0x0 - 0x1398
}; // size - 0x1398


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


class CFists /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   bool m_bPlayingUninterruptableAct; // 0xE90 - 0xE91
   unsigned char pad_E91[0x3]; // 0xE91 - 0xE94
   PlayerAnimEvent_t m_nUninterruptableActivity; // 0xE94 - 0xE98
   bool m_bRestorePrevWep; // 0xE98 - 0xE99
   unsigned char pad_E99[0x3]; // 0xE99 - 0xE9C
   CHandle< CBasePlayerWeapon > m_hWeaponBeforePrevious; // 0xE9C - 0xEA0
   CHandle< CBasePlayerWeapon > m_hWeaponPrevious; // 0xEA0 - 0xEA4
   bool m_bDelayedHardPunchIncoming; // 0xEA4 - 0xEA5
   bool m_bDestroyAfterTaunt; // 0xEA5 - 0xEA6
   unsigned char pad_EA6[0x2]; // 0xEA6 - 0xEA8
}; // size - 0xEA8


class CFlashbang /* "server" */ : public CBaseCSGrenade /* "server" */
{
public:
   unsigned char pad_0[0xEC0]; // 0x0 - 0xEC0
}; // size - 0xEC0


class CFlashbangProjectile /* "server" */ : public CBaseCSGrenadeProjectile /* "server" */
{
public:
   float m_flTimeToDetonate; // 0xA98 - 0xA9C
   uint8_t m_numOpponentsHit; // 0xA9C - 0xA9D
   uint8_t m_numTeammatesHit; // 0xA9D - 0xA9E
   unsigned char pad_A9E[0x2]; // 0xA9E - 0xAA0
}; // size - 0xAA0


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


class CFlexOp /* "modellib" */
{
public:
   FlexOpCode_t m_OpCode; // 0x0 - 0x4
   int32_t m_Data; // 0x4 - 0x8
}; // size - 0x8


class CFogController /* "server" */ : public CBaseEntity /* "server" */
{
public:
   fogparams_t m_fog; // 0x4C0 - 0x528
   bool m_bUseAngles; // 0x528 - 0x529
   unsigned char pad_529[0x3]; // 0x529 - 0x52C
   int32_t m_iChangedVariables; // 0x52C - 0x530
}; // size - 0x530


class CFogTrigger /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   fogparams_t m_fog; // 0x8B8 - 0x920
}; // size - 0x920


class CFogVolume /* "server" */ : public CServerOnlyModelEntity /* "server" */
{
public:
   CUtlSymbolLarge m_fogName; // 0x710 - 0x718
   CUtlSymbolLarge m_postProcessName; // 0x718 - 0x720
   CUtlSymbolLarge m_colorCorrectionName; // 0x720 - 0x728
   unsigned char pad_728[0x8]; // 0x728 - 0x730
   bool m_bDisabled; // 0x730 - 0x731
   bool m_bInFogVolumesList; // 0x731 - 0x732
   unsigned char pad_732[0x6]; // 0x732 - 0x738
}; // size - 0x738


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


class CFootPositionMetricEvaluator /* "animgraphlib" */ : public CMotionMetricEvaluator /* "animgraphlib" */
{
public:
   CUtlVector< int32 > m_footIndices; // 0x50 - 0x68
   bool m_bIgnoreSlope; // 0x68 - 0x69
   unsigned char pad_69[0x7]; // 0x69 - 0x70
}; // size - 0x70


class CFootstepControl /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CUtlSymbolLarge m_source; // 0x8B8 - 0x8C0
   CUtlSymbolLarge m_destination; // 0x8C0 - 0x8C8
}; // size - 0x8C8


class CFootstepTableHandle /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class CFuncConveyor /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CUtlSymbolLarge m_szConveyorModels; // 0x710 - 0x718
   float m_flTransitionDurationSeconds; // 0x718 - 0x71C
   QAngle m_angMoveEntitySpace; // 0x71C - 0x728
   Vector m_vecMoveDirEntitySpace; // 0x728 - 0x734
   float m_flTargetSpeed; // 0x734 - 0x738
   GameTick_t m_nTransitionStartTick; // 0x738 - 0x73C
   int32_t m_nTransitionDurationTicks; // 0x73C - 0x740
   float m_flTransitionStartSpeed; // 0x740 - 0x744
   unsigned char pad_744[0x4]; // 0x744 - 0x748
   CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels; // 0x748 - 0x760
}; // size - 0x760


class CFuncElectrifiedVolume /* "server" */ : public CFuncBrush /* "server" */
{
public:
   CUtlSymbolLarge m_EffectName; // 0x730 - 0x738
   CUtlSymbolLarge m_EffectInterpenetrateName; // 0x738 - 0x740
   CUtlSymbolLarge m_EffectZapName; // 0x740 - 0x748
   CUtlSymbolLarge m_iszEffectSource; // 0x748 - 0x750
   unsigned char pad_750[0x18]; // 0x750 - 0x768
}; // size - 0x768


class CFuncLadderAlias_func_useableladder /* "server" */ : public CFuncLadder /* "server" */
{
public:
   unsigned char pad_0[0x7C0]; // 0x0 - 0x7C0
}; // size - 0x7C0


class CFuncMonitor /* "server" */ : public CFuncBrush /* "server" */
{
public:
   CUtlString m_targetCamera; // 0x730 - 0x738
   int32_t m_nResolutionEnum; // 0x738 - 0x73C
   bool m_bRenderShadows; // 0x73C - 0x73D
   bool m_bUseUniqueColorTarget; // 0x73D - 0x73E
   unsigned char pad_73E[0x2]; // 0x73E - 0x740
   CUtlString m_brushModelName; // 0x740 - 0x748
   CHandle< CBaseEntity > m_hTargetCamera; // 0x748 - 0x74C
   bool m_bEnabled; // 0x74C - 0x74D
   bool m_bDraw3DSkybox; // 0x74D - 0x74E
   bool m_bStartEnabled; // 0x74E - 0x74F
   unsigned char pad_74F[0x1]; // 0x74F - 0x750
}; // size - 0x750


class CFuncMoveLinear /* "server" */ : public CBaseToggle /* "server" */
{
public:
   MoveLinearAuthoredPos_t m_authoredPosition; // 0x790 - 0x794
   QAngle m_angMoveEntitySpace; // 0x794 - 0x7A0
   Vector m_vecMoveDirParentSpace; // 0x7A0 - 0x7AC
   unsigned char pad_7AC[0x4]; // 0x7AC - 0x7B0
   CUtlSymbolLarge m_soundStart; // 0x7B0 - 0x7B8
   CUtlSymbolLarge m_soundStop; // 0x7B8 - 0x7C0
   CUtlSymbolLarge m_currentSound; // 0x7C0 - 0x7C8
   float m_flBlockDamage; // 0x7C8 - 0x7CC
   float m_flStartPosition; // 0x7CC - 0x7D0
   float m_flMoveDistance; // 0x7D0 - 0x7D4
   unsigned char pad_7D4[0xC]; // 0x7D4 - 0x7E0
   CEntityIOOutput m_OnFullyOpen; // 0x7E0 - 0x808
   CEntityIOOutput m_OnFullyClosed; // 0x808 - 0x830
   bool m_bCreateMovableNavMesh; // 0x830 - 0x831
   bool m_bCreateNavObstacle; // 0x831 - 0x832
   unsigned char pad_832[0xE]; // 0x832 - 0x840
}; // size - 0x840


class CFuncMoveLinearAlias_momentary_door /* "server" */ : public CFuncMoveLinear /* "server" */
{
public:
   unsigned char pad_0[0x840]; // 0x0 - 0x840
}; // size - 0x840


class CFuncNavBlocker /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   bool m_bDisabled; // 0x710 - 0x711
   unsigned char pad_711[0x3]; // 0x711 - 0x714
   int32_t m_nBlockedTeamNumber; // 0x714 - 0x718
   unsigned char pad_718[0x8]; // 0x718 - 0x720
}; // size - 0x720


class CFuncNavObstruction /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   unsigned char pad_710[0x8]; // 0x710 - 0x718
   bool m_bDisabled; // 0x718 - 0x719
   unsigned char pad_719[0x7]; // 0x719 - 0x720
}; // size - 0x720


class CFuncRotating /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CEntityIOOutput m_OnStopped; // 0x710 - 0x738
   CEntityIOOutput m_OnStarted; // 0x738 - 0x760
   CEntityIOOutput m_OnReachedStart; // 0x760 - 0x788
   RotationVector m_localRotationVector; // 0x788 - 0x794
   float m_flFanFriction; // 0x794 - 0x798
   float m_flAttenuation; // 0x798 - 0x79C
   float m_flVolume; // 0x79C - 0x7A0
   float m_flTargetSpeed; // 0x7A0 - 0x7A4
   float m_flMaxSpeed; // 0x7A4 - 0x7A8
   float m_flBlockDamage; // 0x7A8 - 0x7AC
   float m_flTimeScale; // 0x7AC - 0x7B0
   CUtlSymbolLarge m_NoiseRunning; // 0x7B0 - 0x7B8
   bool m_bReversed; // 0x7B8 - 0x7B9
   bool m_bAccelDecel; // 0x7B9 - 0x7BA
   unsigned char pad_7BA[0xA]; // 0x7BA - 0x7C4
   QAngle m_prevLocalAngles; // 0x7C4 - 0x7D0
   QAngle m_angStart; // 0x7D0 - 0x7DC
   bool m_bStopAtStartPos; // 0x7DC - 0x7DD
   unsigned char pad_7DD[0x3]; // 0x7DD - 0x7E0
   Vector m_vecClientOrigin; // 0x7E0 - 0x7EC
   QAngle m_vecClientAngles; // 0x7EC - 0x7F8
}; // size - 0x7F8


class CFuncShatterglass /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialDamaged; // 0x710 - 0x718
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialUndamaged; // 0x718 - 0x720
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFace; // 0x720 - 0x728
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeCaps; // 0x728 - 0x730
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hConcreteMaterialEdgeFins; // 0x730 - 0x738
   matrix3x4_t m_matPanelTransform; // 0x738 - 0x768
   matrix3x4_t m_matPanelTransformWsTemp; // 0x768 - 0x798
   CUtlVector< uint32 > m_vecShatterGlassShards; // 0x798 - 0x7B0
   Vector2D m_PanelSize; // 0x7B0 - 0x7B8
   Vector m_vecPanelNormalWs; // 0x7B8 - 0x7C4
   int32_t m_nNumShardsEverCreated; // 0x7C4 - 0x7C8
   GameTime_t m_flLastShatterSoundEmitTime; // 0x7C8 - 0x7CC
   GameTime_t m_flLastCleanupTime; // 0x7CC - 0x7D0
   GameTime_t m_flInitAtTime; // 0x7D0 - 0x7D4
   float m_flGlassThickness; // 0x7D4 - 0x7D8
   float m_flSpawnInvulnerability; // 0x7D8 - 0x7DC
   bool m_bBreakSilent; // 0x7DC - 0x7DD
   bool m_bBreakShardless; // 0x7DD - 0x7DE
   bool m_bBroken; // 0x7DE - 0x7DF
   bool m_bHasRateLimitedShards; // 0x7DF - 0x7E0
   bool m_bGlassNavIgnore; // 0x7E0 - 0x7E1
   bool m_bGlassInFrame; // 0x7E1 - 0x7E2
   bool m_bStartBroken; // 0x7E2 - 0x7E3
   uint8_t m_iInitialDamageType; // 0x7E3 - 0x7E4
   unsigned char pad_7E4[0x4]; // 0x7E4 - 0x7E8
   CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x7E8 - 0x7F0
   CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x7F0 - 0x7F8
   CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x7F8 - 0x800
   CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x800 - 0x808
   CUtlVector< Vector > m_vInitialDamagePositions; // 0x808 - 0x820
   CUtlVector< Vector > m_vExtraDamagePositions; // 0x820 - 0x838
   CEntityIOOutput m_OnBroken; // 0x838 - 0x860
   unsigned char pad_860[0x1]; // 0x860 - 0x861
   uint8_t m_iSurfaceType; // 0x861 - 0x862
   unsigned char pad_862[0x6]; // 0x862 - 0x868
}; // size - 0x868


class CFuncTankTrain /* "server" */ : public CFuncTrackTrain /* "server" */
{
public:
   CEntityIOOutput m_OnDeath; // 0x860 - 0x888
}; // size - 0x888


class CFuncTimescale /* "server" */ : public CBaseEntity /* "server" */
{
public:
   float m_flDesiredTimescale; // 0x4C0 - 0x4C4
   float m_flAcceleration; // 0x4C4 - 0x4C8
   float m_flMinBlendRate; // 0x4C8 - 0x4CC
   float m_flBlendDeltaMultiplier; // 0x4CC - 0x4D0
   bool m_isStarted; // 0x4D0 - 0x4D1
   unsigned char pad_4D1[0x7]; // 0x4D1 - 0x4D8
}; // size - 0x4D8


class CFuncTrackAuto /* "server" */ : public CFuncTrackChange /* "server" */
{
public:
   unsigned char pad_0[0x818]; // 0x0 - 0x818
}; // size - 0x818


class CFuncTrackTrain /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CHandle< CPathTrack > m_ppath; // 0x710 - 0x714
   float m_length; // 0x714 - 0x718
   Vector m_vPosPrev; // 0x718 - 0x724
   QAngle m_angPrev; // 0x724 - 0x730
   Vector m_controlMins; // 0x730 - 0x73C
   Vector m_controlMaxs; // 0x73C - 0x748
   Vector m_lastBlockPos; // 0x748 - 0x754
   int32_t m_lastBlockTick; // 0x754 - 0x758
   float m_flVolume; // 0x758 - 0x75C
   float m_flBank; // 0x75C - 0x760
   float m_oldSpeed; // 0x760 - 0x764
   float m_flBlockDamage; // 0x764 - 0x768
   float m_height; // 0x768 - 0x76C
   float m_maxSpeed; // 0x76C - 0x770
   float m_dir; // 0x770 - 0x774
   unsigned char pad_774[0x4]; // 0x774 - 0x778
   CUtlSymbolLarge m_iszSoundMove; // 0x778 - 0x780
   CUtlSymbolLarge m_iszSoundMovePing; // 0x780 - 0x788
   CUtlSymbolLarge m_iszSoundStart; // 0x788 - 0x790
   CUtlSymbolLarge m_iszSoundStop; // 0x790 - 0x798
   CUtlSymbolLarge m_strPathTarget; // 0x798 - 0x7A0
   float m_flMoveSoundMinDuration; // 0x7A0 - 0x7A4
   float m_flMoveSoundMaxDuration; // 0x7A4 - 0x7A8
   GameTime_t m_flNextMoveSoundTime; // 0x7A8 - 0x7AC
   float m_flMoveSoundMinPitch; // 0x7AC - 0x7B0
   float m_flMoveSoundMaxPitch; // 0x7B0 - 0x7B4
   TrainOrientationType_t m_eOrientationType; // 0x7B4 - 0x7B8
   TrainVelocityType_t m_eVelocityType; // 0x7B8 - 0x7BC
   unsigned char pad_7BC[0xC]; // 0x7BC - 0x7C8
   CEntityIOOutput m_OnStart; // 0x7C8 - 0x7F0
   CEntityIOOutput m_OnNext; // 0x7F0 - 0x818
   CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x818 - 0x840
   bool m_bManualSpeedChanges; // 0x840 - 0x841
   unsigned char pad_841[0x3]; // 0x841 - 0x844
   float m_flDesiredSpeed; // 0x844 - 0x848
   GameTime_t m_flSpeedChangeTime; // 0x848 - 0x84C
   float m_flAccelSpeed; // 0x84C - 0x850
   float m_flDecelSpeed; // 0x850 - 0x854
   bool m_bAccelToSpeed; // 0x854 - 0x855
   unsigned char pad_855[0x3]; // 0x855 - 0x858
   float m_flTimeScale; // 0x858 - 0x85C
   GameTime_t m_flNextMPSoundTime; // 0x85C - 0x860
}; // size - 0x860


class CFuncTrain /* "server" */ : public CBasePlatTrain /* "server" */
{
public:
   CHandle< CBaseEntity > m_hCurrentTarget; // 0x7B8 - 0x7BC
   bool m_activated; // 0x7BC - 0x7BD
   unsigned char pad_7BD[0x3]; // 0x7BD - 0x7C0
   CHandle< CBaseEntity > m_hEnemy; // 0x7C0 - 0x7C4
   float m_flBlockDamage; // 0x7C4 - 0x7C8
   GameTime_t m_flNextBlockTime; // 0x7C8 - 0x7CC
   unsigned char pad_7CC[0x4]; // 0x7CC - 0x7D0
   CUtlSymbolLarge m_iszLastTarget; // 0x7D0 - 0x7D8
}; // size - 0x7D8


class CFuncWater /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   CBuoyancyHelper m_BuoyancyHelper; // 0xCD0 - 0xCF0
}; // size - 0xCF0


class CFuncWater /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CBuoyancyHelper m_BuoyancyHelper; // 0x710 - 0x730
}; // size - 0x730


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


class CGameEnd /* "server" */ : public CRulePointEntity /* "server" */
{
public:
   unsigned char pad_0[0x720]; // 0x0 - 0x720
}; // size - 0x720


class CGameMoney /* "server" */ : public CRulePointEntity /* "server" */
{
public:
   CEntityIOOutput m_OnMoneySpent; // 0x720 - 0x748
   CEntityIOOutput m_OnMoneySpentFail; // 0x748 - 0x770
   int32_t m_nMoney; // 0x770 - 0x774
   unsigned char pad_774[0x4]; // 0x774 - 0x778
   CUtlString m_strAwardText; // 0x778 - 0x780
}; // size - 0x780


class CGamePlayerEquip /* "server" */ : public CRulePointEntity /* "server" */
{
public:
   unsigned char pad_0[0x738]; // 0x0 - 0x738
}; // size - 0x738


class CGamePlayerZone /* "server" */ : public CRuleBrushEntity /* "server" */
{
public:
   CEntityIOOutput m_OnPlayerInZone; // 0x718 - 0x740
   CEntityIOOutput m_OnPlayerOutZone; // 0x740 - 0x768
   CEntityOutputTemplate< int32 > m_PlayersInCount; // 0x768 - 0x790
   CEntityOutputTemplate< int32 > m_PlayersOutCount; // 0x790 - 0x7B8
}; // size - 0x7B8


class CGameSceneNode /* "client" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CTransform m_nodeToWorld; // 0x10 - 0x30
   CEntityInstance* m_pOwner; // 0x30 - 0x38
   CGameSceneNode* m_pParent; // 0x38 - 0x40
   CGameSceneNode* m_pChild; // 0x40 - 0x48
   CGameSceneNode* m_pNextSibling; // 0x48 - 0x50
   unsigned char pad_50[0x20]; // 0x50 - 0x70
   CGameSceneNodeHandle m_hParent; // 0x70 - 0x80
   CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80 - 0xB0
   unsigned char pad_B0[0x8]; // 0xB0 - 0xB8
   QAngle m_angRotation; // 0xB8 - 0xC4
   float m_flScale; // 0xC4 - 0xC8
   Vector m_vecAbsOrigin; // 0xC8 - 0xD4
   QAngle m_angAbsRotation; // 0xD4 - 0xE0
   float m_flAbsScale; // 0xE0 - 0xE4
   int16_t m_nParentAttachmentOrBone; // 0xE4 - 0xE6
   bool m_bDebugAbsOriginChanges; // 0xE6 - 0xE7
   bool m_bDormant; // 0xE7 - 0xE8
   bool m_bForceParentToBeNetworked; // 0xE8 - 0xE9
   unsigned char m_bDirtyHierarchy : 1; // 0xE9 - 0xEA
   unsigned char m_bDirtyBoneMergeInfo : 1; // 0xE9 - 0xEA
   unsigned char m_bNetworkedPositionChanged : 1; // 0xE9 - 0xEA
   unsigned char m_bNetworkedAnglesChanged : 1; // 0xE9 - 0xEA
   unsigned char m_bNetworkedScaleChanged : 1; // 0xE9 - 0xEA
   unsigned char m_bWillBeCallingPostDataUpdate : 1; // 0xE9 - 0xEA
   unsigned char m_bBoneMergeFlex : 1; // 0xE9 - 0xEA
   unsigned char m_nLatchAbsOrigin : 2; // 0xE9 - 0xEB
   unsigned char m_bDirtyBoneMergeBoneToRoot : 1; // 0xEA - 0xEB
   uint8_t m_nHierarchicalDepth; // 0xEB - 0xEC
   uint8_t m_nHierarchyType; // 0xEC - 0xED
   uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xED - 0xEE
   unsigned char pad_EE[0x2]; // 0xEE - 0xF0
   CUtlStringToken m_name; // 0xF0 - 0xF4
   unsigned char pad_F4[0x3C]; // 0xF4 - 0x130
   CUtlStringToken m_hierarchyAttachName; // 0x130 - 0x134
   float m_flZOffset; // 0x134 - 0x138
   Vector m_vRenderOrigin; // 0x138 - 0x144
   unsigned char pad_144[0xC]; // 0x144 - 0x150
}; // size - 0x150


class CGameSceneNodeHandle /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CEntityHandle m_hOwner; // 0x8 - 0xC
   CUtlStringToken m_name; // 0xC - 0x10
}; // size - 0x10


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


class CGameText /* "server" */ : public CRulePointEntity /* "server" */
{
public:
   CUtlSymbolLarge m_iszMessage; // 0x720 - 0x728
   hudtextparms_t m_textParms; // 0x728 - 0x73C
   unsigned char pad_73C[0x4]; // 0x73C - 0x740
}; // size - 0x740


class CGeneralSpin /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nSpinRateDegrees; // 0x1C0 - 0x1C4
   int32_t m_nSpinRateMinDegrees; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x4]; // 0x1C8 - 0x1CC
   float m_fSpinRateStopTime; // 0x1CC - 0x1D0
   unsigned char pad_1D0[0x10]; // 0x1D0 - 0x1E0
}; // size - 0x1E0


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


class CGradientFog /* "server" */ : public CBaseEntity /* "server" */
{
public:
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x4C0 - 0x4C8
   float m_flFogStartDistance; // 0x4C8 - 0x4CC
   float m_flFogEndDistance; // 0x4CC - 0x4D0
   bool m_bHeightFogEnabled; // 0x4D0 - 0x4D1
   unsigned char pad_4D1[0x3]; // 0x4D1 - 0x4D4
   float m_flFogStartHeight; // 0x4D4 - 0x4D8
   float m_flFogEndHeight; // 0x4D8 - 0x4DC
   float m_flFarZ; // 0x4DC - 0x4E0
   float m_flFogMaxOpacity; // 0x4E0 - 0x4E4
   float m_flFogFalloffExponent; // 0x4E4 - 0x4E8
   float m_flFogVerticalExponent; // 0x4E8 - 0x4EC
   Color m_fogColor; // 0x4EC - 0x4F0
   float m_flFogStrength; // 0x4F0 - 0x4F4
   float m_flFadeTime; // 0x4F4 - 0x4F8
   bool m_bStartDisabled; // 0x4F8 - 0x4F9
   bool m_bIsEnabled; // 0x4F9 - 0x4FA
   bool m_bGradientFogNeedsTextures; // 0x4FA - 0x4FB
   unsigned char pad_4FB[0x5]; // 0x4FB - 0x500
}; // size - 0x500


class CGrenadeTracer /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_CD0[0x20]; // 0xCD0 - 0xCF0
   float m_flTracerDuration; // 0xCF0 - 0xCF4
   GrenadeType_t m_nType; // 0xCF4 - 0xCF8
   unsigned char pad_CF8[0x4B8]; // 0xCF8 - 0x11B0
}; // size - 0x11B0


class CGunTarget /* "server" */ : public CBaseToggle /* "server" */
{
public:
   bool m_on; // 0x790 - 0x791
   unsigned char pad_791[0x3]; // 0x791 - 0x794
   CHandle< CBaseEntity > m_hTargetEnt; // 0x794 - 0x798
   CEntityIOOutput m_OnDeath; // 0x798 - 0x7C0
}; // size - 0x7C0


class CHEGrenade /* "server" */ : public CBaseCSGrenade /* "server" */
{
public:
   unsigned char pad_0[0xEC0]; // 0x0 - 0xEC0
}; // size - 0xEC0


class CHEGrenadeProjectile /* "server" */ : public CBaseCSGrenadeProjectile /* "server" */
{
public:
   unsigned char pad_0[0xA98]; // 0x0 - 0xA98
}; // size - 0xA98


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


class CHitboxComponent /* "server" */ : public CEntityComponent /* "server" */
{
public:
   unsigned char pad_8[0x1C]; // 0x8 - 0x24
   uint32 m_bvDisabledHitGroups[1]; // 0x24 - 0x28
}; // size - 0x28


class CHostageAlias_info_hostage_spawn /* "server" */ : public CHostage /* "server" */
{
public:
   unsigned char pad_0[0x2CB0]; // 0x0 - 0x2CB0
}; // size - 0x2CB0


class CHostageCarriableProp /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   unsigned char pad_0[0x8E8]; // 0x0 - 0x8E8
}; // size - 0x8E8


class CHostageRescueZone /* "server" */ : public CHostageRescueZoneShim /* "server" */
{
public:
   unsigned char pad_0[0x8C8]; // 0x0 - 0x8C8
}; // size - 0x8C8


class CHostageRescueZone /* "client" */ : public CHostageRescueZoneShim /* "client" */
{
public:
   unsigned char pad_0[0xCE0]; // 0x0 - 0xCE0
}; // size - 0xCE0


class CInButtonState /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   uint64 m_pButtonStates[3]; // 0x8 - 0x20
}; // size - 0x20


class CIncendiaryGrenade /* "server" */ : public CMolotovGrenade /* "server" */
{
public:
   unsigned char pad_0[0xEC0]; // 0x0 - 0xEC0
}; // size - 0xEC0


class CInfoDeathmatchSpawn /* "server" */ : public SpawnPoint /* "server" */
{
public:
   unsigned char pad_0[0x4D0]; // 0x0 - 0x4D0
}; // size - 0x4D0


class CInfoDynamicShadowHintBox /* "server" */ : public CInfoDynamicShadowHint /* "server" */
{
public:
   Vector m_vBoxMins; // 0x4D8 - 0x4E4
   Vector m_vBoxMaxs; // 0x4E4 - 0x4F0
}; // size - 0x4F0


class CInfoDynamicShadowHintBox /* "client" */ : public CInfoDynamicShadowHint /* "client" */
{
public:
   Vector m_vBoxMins; // 0x568 - 0x574
   Vector m_vBoxMaxs; // 0x574 - 0x580
}; // size - 0x580


class CInfoEnemyTerroristSpawn /* "server" */ : public SpawnPointCoopEnemy /* "server" */
{
public:
   unsigned char pad_0[0x508]; // 0x0 - 0x508
}; // size - 0x508


class CInfoInstructorHintBombTargetA /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CInfoInstructorHintBombTargetB /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CInfoInstructorHintHostageRescueZone /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CInfoLandmark /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CInfoOffscreenPanoramaTexture /* "server" */ : public CPointEntity /* "server" */
{
public:
   bool m_bDisabled; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x3]; // 0x4C1 - 0x4C4
   int32_t m_nResolutionX; // 0x4C4 - 0x4C8
   int32_t m_nResolutionY; // 0x4C8 - 0x4CC
   unsigned char pad_4CC[0x4]; // 0x4CC - 0x4D0
   CUtlSymbolLarge m_szLayoutFileName; // 0x4D0 - 0x4D8
   CUtlSymbolLarge m_RenderAttrName; // 0x4D8 - 0x4E0
   CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // 0x4E0 - 0x4F8
   int32_t m_nTargetChangeCount; // 0x4F8 - 0x4FC
   unsigned char pad_4FC[0x4]; // 0x4FC - 0x500
   CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x500 - 0x518
   CUtlSymbolLarge m_szTargetsName; // 0x518 - 0x520
   CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // 0x520 - 0x538
}; // size - 0x538


class CInfoOffscreenPanoramaTexture /* "client" */ : public C_PointEntity /* "client" */
{
public:
   bool m_bDisabled; // 0x550 - 0x551
   unsigned char pad_551[0x3]; // 0x551 - 0x554
   int32_t m_nResolutionX; // 0x554 - 0x558
   int32_t m_nResolutionY; // 0x558 - 0x55C
   unsigned char pad_55C[0x4]; // 0x55C - 0x560
   CUtlSymbolLarge m_szLayoutFileName; // 0x560 - 0x568
   CUtlSymbolLarge m_RenderAttrName; // 0x568 - 0x570
   C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // 0x570 - 0x588
   int32_t m_nTargetChangeCount; // 0x588 - 0x58C
   unsigned char pad_58C[0x4]; // 0x58C - 0x590
   C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x590 - 0x5A8
   unsigned char pad_5A8[0x160]; // 0x5A8 - 0x708
   bool m_bCheckCSSClasses; // 0x708 - 0x709
   unsigned char pad_709[0x2F]; // 0x709 - 0x738
}; // size - 0x738


class CInfoParticleTarget /* "client" */ : public C_PointEntity /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class CInfoPlayerCounterterrorist /* "server" */ : public SpawnPoint /* "server" */
{
public:
   unsigned char pad_0[0x4D0]; // 0x0 - 0x4D0
}; // size - 0x4D0


class CInfoPlayerTerrorist /* "server" */ : public SpawnPoint /* "server" */
{
public:
   unsigned char pad_0[0x4D0]; // 0x0 - 0x4D0
}; // size - 0x4D0


class CInfoTarget /* "client" */ : public C_PointEntity /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class CInfoVisibilityBox /* "server" */ : public CBaseEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x4]; // 0x4C0 - 0x4C4
   int32_t m_nMode; // 0x4C4 - 0x4C8
   Vector m_vBoxSize; // 0x4C8 - 0x4D4
   bool m_bEnabled; // 0x4D4 - 0x4D5
   unsigned char pad_4D5[0x3]; // 0x4D5 - 0x4D8
}; // size - 0x4D8


class CInfoWorldLayer /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x550 - 0x578
   CUtlSymbolLarge m_worldName; // 0x578 - 0x580
   CUtlSymbolLarge m_layerName; // 0x580 - 0x588
   bool m_bWorldLayerVisible; // 0x588 - 0x589
   bool m_bEntitiesSpawned; // 0x589 - 0x58A
   bool m_bCreateAsChildSpawnGroup; // 0x58A - 0x58B
   unsigned char pad_58B[0x1]; // 0x58B - 0x58C
   uint32_t m_hLayerSpawnGroup; // 0x58C - 0x590
   bool m_bWorldLayerActuallyVisible; // 0x590 - 0x591
   unsigned char pad_591[0x7]; // 0x591 - 0x598
}; // size - 0x598


class CInstancedSceneEntity /* "server" */ : public CSceneEntity /* "server" */
{
public:
   CHandle< CBaseEntity > m_hOwner; // 0xA18 - 0xA1C
   bool m_bHadOwner; // 0xA1C - 0xA1D
   unsigned char pad_A1D[0x3]; // 0xA1D - 0xA20
   float m_flPostSpeakDelay; // 0xA20 - 0xA24
   float m_flPreDelay; // 0xA24 - 0xA28
   bool m_bIsBackground; // 0xA28 - 0xA29
   bool m_bRemoveOnCompletion; // 0xA29 - 0xA2A
   unsigned char pad_A2A[0x2]; // 0xA2A - 0xA2C
   CHandle< CBaseEntity > m_hTarget; // 0xA2C - 0xA30
}; // size - 0xA30


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


class CItemDefuserAlias_item_defuser /* "server" */ : public CItemDefuser /* "server" */
{
public:
   unsigned char pad_0[0x9E0]; // 0x0 - 0x9E0
}; // size - 0x9E0


class CItemDogtags /* "server" */ : public CItem /* "server" */
{
public:
   CHandle< CCSPlayerPawn > m_OwningPlayer; // 0x9C0 - 0x9C4
   CHandle< CCSPlayerPawn > m_KillingPlayer; // 0x9C4 - 0x9C8
}; // size - 0x9C8


class CItemGeneric /* "server" */ : public CItem /* "server" */
{
public:
   unsigned char pad_9C0[0x8]; // 0x9C0 - 0x9C8
   bool m_bHasTriggerRadius; // 0x9C8 - 0x9C9
   bool m_bHasPickupRadius; // 0x9C9 - 0x9CA
   unsigned char pad_9CA[0x2]; // 0x9CA - 0x9CC
   float m_flPickupRadiusSqr; // 0x9CC - 0x9D0
   float m_flTriggerRadiusSqr; // 0x9D0 - 0x9D4
   GameTime_t m_flLastPickupCheck; // 0x9D4 - 0x9D8
   bool m_bPlayerCounterListenerAdded; // 0x9D8 - 0x9D9
   bool m_bPlayerInTriggerRadius; // 0x9D9 - 0x9DA
   unsigned char pad_9DA[0x6]; // 0x9DA - 0x9E0
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0x9E0 - 0x9E8
   CUtlSymbolLarge m_pAmbientSoundEffect; // 0x9E8 - 0x9F0
   bool m_bAutoStartAmbientSound; // 0x9F0 - 0x9F1
   unsigned char pad_9F1[0x7]; // 0x9F1 - 0x9F8
   CUtlSymbolLarge m_pSpawnScriptFunction; // 0x9F8 - 0xA00
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0xA00 - 0xA08
   CUtlSymbolLarge m_pPickupSoundEffect; // 0xA08 - 0xA10
   CUtlSymbolLarge m_pPickupScriptFunction; // 0xA10 - 0xA18
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0xA18 - 0xA20
   CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xA20 - 0xA28
   CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xA28 - 0xA30
   CUtlSymbolLarge m_pPickupFilterName; // 0xA30 - 0xA38
   CHandle< CBaseFilter > m_hPickupFilter; // 0xA38 - 0xA3C
   unsigned char pad_A3C[0x4]; // 0xA3C - 0xA40
   CEntityIOOutput m_OnPickup; // 0xA40 - 0xA68
   CEntityIOOutput m_OnTimeout; // 0xA68 - 0xA90
   CEntityIOOutput m_OnTriggerStartTouch; // 0xA90 - 0xAB8
   CEntityIOOutput m_OnTriggerTouch; // 0xAB8 - 0xAE0
   CEntityIOOutput m_OnTriggerEndTouch; // 0xAE0 - 0xB08
   CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xB08 - 0xB10
   float m_flPickupRadius; // 0xB10 - 0xB14
   float m_flTriggerRadius; // 0xB14 - 0xB18
   CUtlSymbolLarge m_pTriggerSoundEffect; // 0xB18 - 0xB20
   bool m_bGlowWhenInTrigger; // 0xB20 - 0xB21
   Color m_glowColor; // 0xB21 - 0xB25
   bool m_bUseable; // 0xB25 - 0xB26
   unsigned char pad_B26[0x2]; // 0xB26 - 0xB28
   CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xB28 - 0xB2C
   unsigned char pad_B2C[0x4]; // 0xB2C - 0xB30
}; // size - 0xB30


class CItemHeavyAssaultSuit /* "server" */ : public CItemAssaultSuit /* "server" */
{
public:
   unsigned char pad_0[0x9C0]; // 0x0 - 0x9C0
}; // size - 0x9C0


class CItemKevlar /* "server" */ : public CItem /* "server" */
{
public:
   unsigned char pad_0[0x9C0]; // 0x0 - 0x9C0
}; // size - 0x9C0


class CItemSoda /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   unsigned char pad_0[0x8E8]; // 0x0 - 0x8E8
}; // size - 0x8E8


class CItem_Healthshot /* "server" */ : public CWeaponBaseItem /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


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


class CKeepUpright /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x8]; // 0x4C0 - 0x4C8
   Vector m_worldGoalAxis; // 0x4C8 - 0x4D4
   Vector m_localTestAxis; // 0x4D4 - 0x4E0
   unsigned char pad_4E0[0x8]; // 0x4E0 - 0x4E8
   CUtlSymbolLarge m_nameAttach; // 0x4E8 - 0x4F0
   CHandle< CBaseEntity > m_attachedObject; // 0x4F0 - 0x4F4
   float m_angularLimit; // 0x4F4 - 0x4F8
   bool m_bActive; // 0x4F8 - 0x4F9
   bool m_bDampAllRotation; // 0x4F9 - 0x4FA
   unsigned char pad_4FA[0x6]; // 0x4FA - 0x500
}; // size - 0x500


class CKnife /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   bool m_bFirstAttack; // 0xE90 - 0xE91
   unsigned char pad_E91[0x7]; // 0xE91 - 0xE98
}; // size - 0xE98


class CLODComponentUpdater /* "animgraphlib" */ : public CAnimComponentUpdater /* "animgraphlib" */
{
public:
   int32_t m_nServerLOD; // 0x30 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
}; // size - 0x38


class CLeafUpdateNode /* "animgraphlib" */ : public CAnimUpdateNodeBase /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x58]; // 0x0 - 0x58
}; // size - 0x58


class CLightComponent /* "server" */ : public CEntityComponent /* "server" */
{
public:
   unsigned char pad_8[0x40]; // 0x8 - 0x48
   CNetworkVarChainer __m_pChainEntity; // 0x48 - 0x70
   unsigned char pad_70[0x15]; // 0x70 - 0x85
   Color m_Color; // 0x85 - 0x89
   Color m_SecondaryColor; // 0x89 - 0x8D
   unsigned char pad_8D[0x3]; // 0x8D - 0x90
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
   unsigned char pad_D1[0x3]; // 0xD1 - 0xD4
   int32_t m_nRenderSpecular; // 0xD4 - 0xD8
   bool m_bRenderTransmissive; // 0xD8 - 0xD9
   unsigned char pad_D9[0x3]; // 0xD9 - 0xDC
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
   unsigned char pad_11D[0x3]; // 0x11D - 0x120
   int32_t m_nShadowPriority; // 0x120 - 0x124
   int32_t m_nBakedShadowIndex; // 0x124 - 0x128
   bool m_bRenderToCubemaps; // 0x128 - 0x129
   unsigned char pad_129[0x3]; // 0x129 - 0x12C
   int32_t m_nDirectLight; // 0x12C - 0x130
   int32_t m_nIndirectLight; // 0x130 - 0x134
   float m_flFadeMinDist; // 0x134 - 0x138
   float m_flFadeMaxDist; // 0x138 - 0x13C
   float m_flShadowFadeMinDist; // 0x13C - 0x140
   float m_flShadowFadeMaxDist; // 0x140 - 0x144
   bool m_bEnabled; // 0x144 - 0x145
   bool m_bFlicker; // 0x145 - 0x146
   bool m_bPrecomputedFieldsValid; // 0x146 - 0x147
   unsigned char pad_147[0x1]; // 0x147 - 0x148
   Vector m_vPrecomputedBoundsMins; // 0x148 - 0x154
   Vector m_vPrecomputedBoundsMaxs; // 0x154 - 0x160
   Vector m_vPrecomputedOBBOrigin; // 0x160 - 0x16C
   QAngle m_vPrecomputedOBBAngles; // 0x16C - 0x178
   Vector m_vPrecomputedOBBExtent; // 0x178 - 0x184
   float m_flPrecomputedMaxRange; // 0x184 - 0x188
   int32_t m_nFogLightingMode; // 0x188 - 0x18C
   float m_flFogContributionStength; // 0x18C - 0x190
   float m_flNearClipPlane; // 0x190 - 0x194
   Color m_SkyColor; // 0x194 - 0x198
   float m_flSkyIntensity; // 0x198 - 0x19C
   Color m_SkyAmbientBounce; // 0x19C - 0x1A0
   bool m_bUseSecondaryColor; // 0x1A0 - 0x1A1
   bool m_bMixedShadows; // 0x1A1 - 0x1A2
   unsigned char pad_1A2[0x2]; // 0x1A2 - 0x1A4
   GameTime_t m_flLightStyleStartTime; // 0x1A4 - 0x1A8
   float m_flCapsuleLength; // 0x1A8 - 0x1AC
   float m_flMinRoughness; // 0x1AC - 0x1B0
   unsigned char pad_1B0[0x10]; // 0x1B0 - 0x1C0
   bool m_bPvsModifyEntity; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0x7]; // 0x1C1 - 0x1C8
}; // size - 0x1C8


class CLightComponent /* "client" */ : public CEntityComponent /* "client" */
{
public:
   unsigned char pad_8[0x40]; // 0x8 - 0x48
   CNetworkVarChainer __m_pChainEntity; // 0x48 - 0x70
   unsigned char pad_70[0x15]; // 0x70 - 0x85
   Color m_Color; // 0x85 - 0x89
   Color m_SecondaryColor; // 0x89 - 0x8D
   unsigned char pad_8D[0x3]; // 0x8D - 0x90
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
   unsigned char pad_D1[0x3]; // 0xD1 - 0xD4
   int32_t m_nRenderSpecular; // 0xD4 - 0xD8
   bool m_bRenderTransmissive; // 0xD8 - 0xD9
   unsigned char pad_D9[0x3]; // 0xD9 - 0xDC
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
   unsigned char pad_11D[0x3]; // 0x11D - 0x120
   int32_t m_nShadowPriority; // 0x120 - 0x124
   int32_t m_nBakedShadowIndex; // 0x124 - 0x128
   bool m_bRenderToCubemaps; // 0x128 - 0x129
   unsigned char pad_129[0x3]; // 0x129 - 0x12C
   int32_t m_nDirectLight; // 0x12C - 0x130
   int32_t m_nIndirectLight; // 0x130 - 0x134
   float m_flFadeMinDist; // 0x134 - 0x138
   float m_flFadeMaxDist; // 0x138 - 0x13C
   float m_flShadowFadeMinDist; // 0x13C - 0x140
   float m_flShadowFadeMaxDist; // 0x140 - 0x144
   bool m_bEnabled; // 0x144 - 0x145
   bool m_bFlicker; // 0x145 - 0x146
   bool m_bPrecomputedFieldsValid; // 0x146 - 0x147
   unsigned char pad_147[0x1]; // 0x147 - 0x148
   Vector m_vPrecomputedBoundsMins; // 0x148 - 0x154
   Vector m_vPrecomputedBoundsMaxs; // 0x154 - 0x160
   Vector m_vPrecomputedOBBOrigin; // 0x160 - 0x16C
   QAngle m_vPrecomputedOBBAngles; // 0x16C - 0x178
   Vector m_vPrecomputedOBBExtent; // 0x178 - 0x184
   float m_flPrecomputedMaxRange; // 0x184 - 0x188
   int32_t m_nFogLightingMode; // 0x188 - 0x18C
   float m_flFogContributionStength; // 0x18C - 0x190
   float m_flNearClipPlane; // 0x190 - 0x194
   Color m_SkyColor; // 0x194 - 0x198
   float m_flSkyIntensity; // 0x198 - 0x19C
   Color m_SkyAmbientBounce; // 0x19C - 0x1A0
   bool m_bUseSecondaryColor; // 0x1A0 - 0x1A1
   bool m_bMixedShadows; // 0x1A1 - 0x1A2
   unsigned char pad_1A2[0x2]; // 0x1A2 - 0x1A4
   GameTime_t m_flLightStyleStartTime; // 0x1A4 - 0x1A8
   float m_flCapsuleLength; // 0x1A8 - 0x1AC
   float m_flMinRoughness; // 0x1AC - 0x1B0
   unsigned char pad_1B0[0x10]; // 0x1B0 - 0x1C0
}; // size - 0x1C0


class CLightEnvironmentEntity /* "server" */ : public CLightDirectionalEntity /* "server" */
{
public:
   unsigned char pad_0[0x718]; // 0x0 - 0x718
}; // size - 0x718


class CLightGlow /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   uint32_t m_nHorizontalSize; // 0x710 - 0x714
   uint32_t m_nVerticalSize; // 0x714 - 0x718
   uint32_t m_nMinDist; // 0x718 - 0x71C
   uint32_t m_nMaxDist; // 0x71C - 0x720
   uint32_t m_nOuterMaxDist; // 0x720 - 0x724
   float m_flGlowProxySize; // 0x724 - 0x728
   float m_flHDRColorScale; // 0x728 - 0x72C
   unsigned char pad_72C[0x4]; // 0x72C - 0x730
}; // size - 0x730


class CLightOrthoEntity /* "server" */ : public CLightEntity /* "server" */
{
public:
   unsigned char pad_0[0x718]; // 0x0 - 0x718
}; // size - 0x718


class CLightSpotEntity /* "server" */ : public CLightEntity /* "server" */
{
public:
   unsigned char pad_0[0x718]; // 0x0 - 0x718
}; // size - 0x718


class CLogicAchievement /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   bool m_bDisabled; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x7]; // 0x4C1 - 0x4C8
   CUtlSymbolLarge m_iszAchievementEventID; // 0x4C8 - 0x4D0
   CEntityIOOutput m_OnFired; // 0x4D0 - 0x4F8
}; // size - 0x4F8


class CLogicActiveAutosave /* "server" */ : public CLogicAutosave /* "server" */
{
public:
   int32_t m_TriggerHitPoints; // 0x4D0 - 0x4D4
   float m_flTimeToTrigger; // 0x4D4 - 0x4D8
   GameTime_t m_flStartTime; // 0x4D8 - 0x4DC
   float m_flDangerousTime; // 0x4DC - 0x4E0
}; // size - 0x4E0


class CLogicAuto /* "server" */ : public CBaseEntity /* "server" */
{
public:
   CEntityIOOutput m_OnMapSpawn; // 0x4C0 - 0x4E8
   CEntityIOOutput m_OnDemoMapSpawn; // 0x4E8 - 0x510
   CEntityIOOutput m_OnNewGame; // 0x510 - 0x538
   CEntityIOOutput m_OnLoadGame; // 0x538 - 0x560
   CEntityIOOutput m_OnMapTransition; // 0x560 - 0x588
   CEntityIOOutput m_OnBackgroundMap; // 0x588 - 0x5B0
   CEntityIOOutput m_OnMultiNewMap; // 0x5B0 - 0x5D8
   CEntityIOOutput m_OnMultiNewRound; // 0x5D8 - 0x600
   CEntityIOOutput m_OnVREnabled; // 0x600 - 0x628
   CEntityIOOutput m_OnVRNotEnabled; // 0x628 - 0x650
   CUtlSymbolLarge m_globalstate; // 0x650 - 0x658
}; // size - 0x658


class CLogicBranchList /* "server" */ : public CLogicalEntity /* "server" */
{
public:

   enum class LogicBranchListenerLastState_t : std::uint32_t
   {
      LOGIC_BRANCH_LISTENER_NOT_INIT = 0,
      LOGIC_BRANCH_LISTENER_ALL_TRUE = 1,
      LOGIC_BRANCH_LISTENER_ALL_FALSE = 2,
      LOGIC_BRANCH_LISTENER_MIXED = 3
   };
   CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4C0 - 0x540
   CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x540 - 0x558
   CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x558 - 0x55C
   unsigned char pad_55C[0x4]; // 0x55C - 0x560
   CEntityIOOutput m_OnAllTrue; // 0x560 - 0x588
   CEntityIOOutput m_OnAllFalse; // 0x588 - 0x5B0
   CEntityIOOutput m_OnMixed; // 0x5B0 - 0x5D8
}; // size - 0x5D8


class CLogicCase /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CUtlSymbolLarge m_nCase[32]; // 0x4C0 - 0x5C0
   int32_t m_nShuffleCases; // 0x5C0 - 0x5C4
   int32_t m_nLastShuffleCase; // 0x5C4 - 0x5C8
   uint8 m_uchShuffleCaseMap[32]; // 0x5C8 - 0x5E8
   CEntityIOOutput m_OnCase[32]; // 0x5E8 - 0xAE8
   CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > > m_OnDefault; // 0xAE8 - 0xB10
}; // size - 0xB10


class CLogicCollisionPair /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CUtlSymbolLarge m_nameAttach1; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_nameAttach2; // 0x4C8 - 0x4D0
   bool m_disabled; // 0x4D0 - 0x4D1
   bool m_succeeded; // 0x4D1 - 0x4D2
   unsigned char pad_4D2[0x6]; // 0x4D2 - 0x4D8
}; // size - 0x4D8


class CLogicCompare /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   float m_flInValue; // 0x4C0 - 0x4C4
   float m_flCompareValue; // 0x4C4 - 0x4C8
   CEntityOutputTemplate< float32 > m_OnLessThan; // 0x4C8 - 0x4F0
   CEntityOutputTemplate< float32 > m_OnEqualTo; // 0x4F0 - 0x518
   CEntityOutputTemplate< float32 > m_OnNotEqualTo; // 0x518 - 0x540
   CEntityOutputTemplate< float32 > m_OnGreaterThan; // 0x540 - 0x568
}; // size - 0x568


class CLogicDistanceAutosave /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CUtlSymbolLarge m_iszTargetEntity; // 0x4C0 - 0x4C8
   float m_flDistanceToPlayer; // 0x4C8 - 0x4CC
   bool m_bForceNewLevelUnit; // 0x4CC - 0x4CD
   bool m_bCheckCough; // 0x4CD - 0x4CE
   bool m_bThinkDangerous; // 0x4CE - 0x4CF
   unsigned char pad_4CF[0x1]; // 0x4CF - 0x4D0
   float m_flDangerousTime; // 0x4D0 - 0x4D4
   unsigned char pad_4D4[0x4]; // 0x4D4 - 0x4D8
}; // size - 0x4D8


class CLogicEventListener /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x10]; // 0x4C0 - 0x4D0
   CUtlString m_strEventName; // 0x4D0 - 0x4D8
   bool m_bIsEnabled; // 0x4D8 - 0x4D9
   unsigned char pad_4D9[0x3]; // 0x4D9 - 0x4DC
   int32_t m_nTeam; // 0x4DC - 0x4E0
   CEntityIOOutput m_OnEventFired; // 0x4E0 - 0x508
}; // size - 0x508


class CLogicGameEvent /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CUtlSymbolLarge m_iszEventName; // 0x4C0 - 0x4C8
}; // size - 0x4C8


class CLogicGameEventListener /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x10]; // 0x4C0 - 0x4D0
   CEntityIOOutput m_OnEventFired; // 0x4D0 - 0x4F8
   CUtlSymbolLarge m_iszGameEventName; // 0x4F8 - 0x500
   CUtlSymbolLarge m_iszGameEventItem; // 0x500 - 0x508
   bool m_bEnabled; // 0x508 - 0x509
   bool m_bStartDisabled; // 0x509 - 0x50A
   unsigned char pad_50A[0x6]; // 0x50A - 0x510
}; // size - 0x510


class CLogicLineToEntity /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CEntityOutputTemplate< Vector > m_Line; // 0x4C0 - 0x4E8
   CUtlSymbolLarge m_SourceName; // 0x4E8 - 0x4F0
   CHandle< CBaseEntity > m_StartEntity; // 0x4F0 - 0x4F4
   CHandle< CBaseEntity > m_EndEntity; // 0x4F4 - 0x4F8
}; // size - 0x4F8


class CLogicMeasureMovement /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CUtlSymbolLarge m_strMeasureTarget; // 0x4C0 - 0x4C8
   CUtlSymbolLarge m_strMeasureReference; // 0x4C8 - 0x4D0
   CUtlSymbolLarge m_strTargetReference; // 0x4D0 - 0x4D8
   CHandle< CBaseEntity > m_hMeasureTarget; // 0x4D8 - 0x4DC
   CHandle< CBaseEntity > m_hMeasureReference; // 0x4DC - 0x4E0
   CHandle< CBaseEntity > m_hTarget; // 0x4E0 - 0x4E4
   CHandle< CBaseEntity > m_hTargetReference; // 0x4E4 - 0x4E8
   float m_flScale; // 0x4E8 - 0x4EC
   int32_t m_nMeasureType; // 0x4EC - 0x4F0
}; // size - 0x4F0


class CLogicNPCCounterOBB /* "server" */ : public CLogicNPCCounterAABB /* "server" */
{
public:
   unsigned char pad_0[0x830]; // 0x0 - 0x830
}; // size - 0x830


class CLogicNavigation /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   unsigned char pad_4C0[0x8]; // 0x4C0 - 0x4C8
   bool m_isOn; // 0x4C8 - 0x4C9
   unsigned char pad_4C9[0x3]; // 0x4C9 - 0x4CC
   navproperties_t m_navProperty; // 0x4CC - 0x4D0
}; // size - 0x4D0


class CLogicPlayerProxy /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CHandle< CBaseEntity > m_hPlayer; // 0x4C0 - 0x4C4
   unsigned char pad_4C4[0x4]; // 0x4C4 - 0x4C8
   CEntityIOOutput m_PlayerHasAmmo; // 0x4C8 - 0x4F0
   CEntityIOOutput m_PlayerHasNoAmmo; // 0x4F0 - 0x518
   CEntityIOOutput m_PlayerDied; // 0x518 - 0x540
   CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // 0x540 - 0x568
}; // size - 0x568


class CLogicRelay /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CEntityIOOutput m_OnTrigger; // 0x4C0 - 0x4E8
   CEntityIOOutput m_OnSpawn; // 0x4E8 - 0x510
   bool m_bDisabled; // 0x510 - 0x511
   bool m_bWaitForRefire; // 0x511 - 0x512
   bool m_bTriggerOnce; // 0x512 - 0x513
   bool m_bFastRetrigger; // 0x513 - 0x514
   bool m_bPassthoughCaller; // 0x514 - 0x515
   unsigned char pad_515[0x3]; // 0x515 - 0x518
}; // size - 0x518


class CLogicRelay /* "client" */ : public CLogicalEntity /* "client" */
{
public:
   CEntityIOOutput m_OnTrigger; // 0x550 - 0x578
   CEntityIOOutput m_OnSpawn; // 0x578 - 0x5A0
   bool m_bDisabled; // 0x5A0 - 0x5A1
   bool m_bWaitForRefire; // 0x5A1 - 0x5A2
   bool m_bTriggerOnce; // 0x5A2 - 0x5A3
   bool m_bFastRetrigger; // 0x5A3 - 0x5A4
   bool m_bPassthoughCaller; // 0x5A4 - 0x5A5
   unsigned char pad_5A5[0x3]; // 0x5A5 - 0x5A8
}; // size - 0x5A8


class CLogicScript /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


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


class CMapInfo /* "server" */ : public CPointEntity /* "server" */
{
public:
   int32_t m_iBuyingStatus; // 0x4C0 - 0x4C4
   float m_flBombRadius; // 0x4C4 - 0x4C8
   int32_t m_iPetPopulation; // 0x4C8 - 0x4CC
   bool m_bUseNormalSpawnsForDM; // 0x4CC - 0x4CD
   bool m_bDisableAutoGeneratedDMSpawns; // 0x4CD - 0x4CE
   unsigned char pad_4CE[0x2]; // 0x4CE - 0x4D0
   float m_flBotMaxVisionDistance; // 0x4D0 - 0x4D4
   int32_t m_iHostageCount; // 0x4D4 - 0x4D8
   bool m_bFadePlayerVisibilityFarZ; // 0x4D8 - 0x4D9
   unsigned char pad_4D9[0x7]; // 0x4D9 - 0x4E0
}; // size - 0x4E0


class CMapVetoPickController /* "server" */ : public CBaseEntity /* "server" */
{
public:
   bool m_bPlayedIntroVcd; // 0x4C0 - 0x4C1
   bool m_bNeedToPlayFiveSecondsRemaining; // 0x4C1 - 0x4C2
   unsigned char pad_4C2[0x1E]; // 0x4C2 - 0x4E0
   float64 m_dblPreMatchDraftSequenceTime; // 0x4E0 - 0x4E8
   bool m_bPreMatchDraftStateChanged; // 0x4E8 - 0x4E9
   unsigned char pad_4E9[0x3]; // 0x4E9 - 0x4EC
   int32_t m_nDraftType; // 0x4EC - 0x4F0
   int32_t m_nTeamWinningCoinToss; // 0x4F0 - 0x4F4
   int32 m_nTeamWithFirstChoice[64]; // 0x4F4 - 0x5F4
   int32 m_nVoteMapIdsList[7]; // 0x5F4 - 0x610
   int32 m_nAccountIDs[64]; // 0x610 - 0x710
   int32 m_nMapId0[64]; // 0x710 - 0x810
   int32 m_nMapId1[64]; // 0x810 - 0x910
   int32 m_nMapId2[64]; // 0x910 - 0xA10
   int32 m_nMapId3[64]; // 0xA10 - 0xB10
   int32 m_nMapId4[64]; // 0xB10 - 0xC10
   int32 m_nMapId5[64]; // 0xC10 - 0xD10
   int32 m_nStartingSide0[64]; // 0xD10 - 0xE10
   int32_t m_nCurrentPhase; // 0xE10 - 0xE14
   int32_t m_nPhaseStartTick; // 0xE14 - 0xE18
   int32_t m_nPhaseDurationTicks; // 0xE18 - 0xE1C
   unsigned char pad_E1C[0x4]; // 0xE1C - 0xE20
   CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapVetoed; // 0xE20 - 0xE48
   CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapPicked; // 0xE48 - 0xE70
   CEntityOutputTemplate< int32 > m_OnSidesPicked; // 0xE70 - 0xE98
   CEntityOutputTemplate< int32 > m_OnNewPhaseStarted; // 0xE98 - 0xEC0
   CEntityOutputTemplate< int32 > m_OnLevelTransition; // 0xEC0 - 0xEE8
}; // size - 0xEE8


class CMarkupVolumeTagged_Nav /* "server" */ : public CMarkupVolumeTagged /* "server" */
{
public:
   unsigned char pad_0[0x750]; // 0x0 - 0x750
}; // size - 0x750


class CMarkupVolumeTagged_NavGame /* "server" */ : public CMarkupVolumeWithRef /* "server" */
{
public:
   bool m_bFloodFillAttribute; // 0x768 - 0x769
   unsigned char pad_769[0x7]; // 0x769 - 0x770
}; // size - 0x770


class CMarkupVolumeWithRef /* "server" */ : public CMarkupVolumeTagged /* "server" */
{
public:
   bool m_bUseRef; // 0x750 - 0x751
   unsigned char pad_751[0x3]; // 0x751 - 0x754
   Vector m_vRefPos; // 0x754 - 0x760
   float m_flRefDot; // 0x760 - 0x764
   unsigned char pad_764[0x4]; // 0x764 - 0x768
}; // size - 0x768


class CMathColorBlend /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   float m_flInMin; // 0x4C0 - 0x4C4
   float m_flInMax; // 0x4C4 - 0x4C8
   Color m_OutColor1; // 0x4C8 - 0x4CC
   Color m_OutColor2; // 0x4CC - 0x4D0
   CEntityOutputTemplate< Color > m_OutValue; // 0x4D0 - 0x4F8
}; // size - 0x4F8


class CMathCounter /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   float m_flMin; // 0x4C0 - 0x4C4
   float m_flMax; // 0x4C4 - 0x4C8
   bool m_bHitMin; // 0x4C8 - 0x4C9
   bool m_bHitMax; // 0x4C9 - 0x4CA
   bool m_bDisabled; // 0x4CA - 0x4CB
   unsigned char pad_4CB[0x5]; // 0x4CB - 0x4D0
   CEntityOutputTemplate< float32 > m_OutValue; // 0x4D0 - 0x4F8
   CEntityOutputTemplate< float32 > m_OnGetValue; // 0x4F8 - 0x520
   CEntityIOOutput m_OnHitMin; // 0x520 - 0x548
   CEntityIOOutput m_OnHitMax; // 0x548 - 0x570
   CEntityIOOutput m_OnChangedFromMin; // 0x570 - 0x598
   CEntityIOOutput m_OnChangedFromMax; // 0x598 - 0x5C0
}; // size - 0x5C0


class CMathRemap /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   float m_flInMin; // 0x4C0 - 0x4C4
   float m_flInMax; // 0x4C4 - 0x4C8
   float m_flOut1; // 0x4C8 - 0x4CC
   float m_flOut2; // 0x4CC - 0x4D0
   float m_flOldInValue; // 0x4D0 - 0x4D4
   bool m_bEnabled; // 0x4D4 - 0x4D5
   unsigned char pad_4D5[0x3]; // 0x4D5 - 0x4D8
   CEntityOutputTemplate< float32 > m_OutValue; // 0x4D8 - 0x500
   CEntityIOOutput m_OnRoseAboveMin; // 0x500 - 0x528
   CEntityIOOutput m_OnRoseAboveMax; // 0x528 - 0x550
   CEntityIOOutput m_OnFellBelowMin; // 0x550 - 0x578
   CEntityIOOutput m_OnFellBelowMax; // 0x578 - 0x5A0
}; // size - 0x5A0


class CMelee /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   unsigned char pad_0[0xE90]; // 0x0 - 0xE90
}; // size - 0xE90


class CMessageEntity /* "server" */ : public CPointEntity /* "server" */
{
public:
   int32_t m_radius; // 0x4C0 - 0x4C4
   unsigned char pad_4C4[0x4]; // 0x4C4 - 0x4C8
   CUtlSymbolLarge m_messageText; // 0x4C8 - 0x4D0
   bool m_drawText; // 0x4D0 - 0x4D1
   bool m_bDeveloperOnly; // 0x4D1 - 0x4D2
   bool m_bEnabled; // 0x4D2 - 0x4D3
   unsigned char pad_4D3[0x5]; // 0x4D3 - 0x4D8
}; // size - 0x4D8


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


class CModelConfigElement_SetBodygroup /* "modellib" */ : public CModelConfigElement /* "modellib" */
{
public:
   CUtlString m_GroupName; // 0x48 - 0x50
   int32_t m_nChoice; // 0x50 - 0x54
   unsigned char pad_54[0x4]; // 0x54 - 0x58
}; // size - 0x58


class CModelState /* "server" */
{
public:
   unsigned char pad_0[0xA0]; // 0x0 - 0xA0
   CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xA0 - 0xA8
   CUtlSymbolLarge m_ModelName; // 0xA8 - 0xB0
   unsigned char pad_B0[0x38]; // 0xB0 - 0xE8
   bool m_bClientClothCreationSuppressed; // 0xE8 - 0xE9
   unsigned char pad_E9[0x97]; // 0xE9 - 0x180
   uint64_t m_MeshGroupMask; // 0x180 - 0x188
   unsigned char pad_188[0x7A]; // 0x188 - 0x202
   int8_t m_nIdealMotionType; // 0x202 - 0x203
   int8_t m_nForceLOD; // 0x203 - 0x204
   int8_t m_nClothUpdateFlags; // 0x204 - 0x205
   unsigned char pad_205[0xB]; // 0x205 - 0x210
}; // size - 0x210


class CMolotovProjectile /* "server" */ : public CBaseCSGrenadeProjectile /* "server" */
{
public:
   bool m_bIsIncGrenade; // 0xA98 - 0xA99
   unsigned char pad_A99[0xB]; // 0xA99 - 0xAA4
   bool m_bDetonated; // 0xAA4 - 0xAA5
   unsigned char pad_AA5[0x3]; // 0xAA5 - 0xAA8
   IntervalTimer m_stillTimer; // 0xAA8 - 0xAB8
   unsigned char pad_AB8[0xD0]; // 0xAB8 - 0xB88
   bool m_bHasBouncedOffPlayer; // 0xB88 - 0xB89
   unsigned char pad_B89[0x7]; // 0xB89 - 0xB90
}; // size - 0xB90


class CMomentaryRotButton /* "server" */ : public CRotButton /* "server" */
{
public:
   CEntityOutputTemplate< float32 > m_Position; // 0x8D8 - 0x900
   CEntityIOOutput m_OnUnpressed; // 0x900 - 0x928
   CEntityIOOutput m_OnFullyOpen; // 0x928 - 0x950
   CEntityIOOutput m_OnFullyClosed; // 0x950 - 0x978
   CEntityIOOutput m_OnReachedPosition; // 0x978 - 0x9A0
   int32_t m_lastUsed; // 0x9A0 - 0x9A4
   QAngle m_start; // 0x9A4 - 0x9B0
   QAngle m_end; // 0x9B0 - 0x9BC
   float m_IdealYaw; // 0x9BC - 0x9C0
   CUtlSymbolLarge m_sNoise; // 0x9C0 - 0x9C8
   bool m_bUpdateTarget; // 0x9C8 - 0x9C9
   unsigned char pad_9C9[0x3]; // 0x9C9 - 0x9CC
   int32_t m_direction; // 0x9CC - 0x9D0
   float m_returnSpeed; // 0x9D0 - 0x9D4
   float m_flStartPosition; // 0x9D4 - 0x9D8
}; // size - 0x9D8


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


class CMotorController /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   float m_speed; // 0x8 - 0xC
   float m_maxTorque; // 0xC - 0x10
   Vector m_axis; // 0x10 - 0x1C
   float m_inertiaFactor; // 0x1C - 0x20
}; // size - 0x20


class CMultiSource /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CHandle< CBaseEntity > m_rgEntities[32]; // 0x4C0 - 0x540
   int32 m_rgTriggered[32]; // 0x540 - 0x5C0
   CEntityIOOutput m_OnTrigger; // 0x5C0 - 0x5E8
   int32_t m_iTotal; // 0x5E8 - 0x5EC
   unsigned char pad_5EC[0x4]; // 0x5EC - 0x5F0
   CUtlSymbolLarge m_globalstate; // 0x5F0 - 0x5F8
}; // size - 0x5F8


class CMultiplayer_Expresser /* "server" */ : public CAI_ExpresserWithFollowup /* "server" */
{
public:
   bool m_bAllowMultipleScenes; // 0x70 - 0x71
   unsigned char pad_71[0x7]; // 0x71 - 0x78
}; // size - 0x78


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
   CUtlString m_strAnimgraphVar; // 0x0 - 0x8
   uint32_t m_unAlignmentDegrees; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class CNavLinkAreaEntity /* "server" */ : public CPointEntity /* "server" */
{
public:
   float m_flWidth; // 0x4C0 - 0x4C4
   Vector m_vLocatorOffset; // 0x4C4 - 0x4D0
   QAngle m_qLocatorAnglesOffset; // 0x4D0 - 0x4DC
   unsigned char pad_4DC[0x4]; // 0x4DC - 0x4E0
   CUtlSymbolLarge m_strMovementForward; // 0x4E0 - 0x4E8
   CUtlSymbolLarge m_strMovementReverse; // 0x4E8 - 0x4F0
   int32_t m_nNavLinkIdForward; // 0x4F0 - 0x4F4
   int32_t m_nNavLinkIdReverse; // 0x4F4 - 0x4F8
   bool m_bEnabled; // 0x4F8 - 0x4F9
   unsigned char pad_4F9[0x7]; // 0x4F9 - 0x500
   CUtlSymbolLarge m_strFilterName; // 0x500 - 0x508
   CHandle< CBaseFilter > m_hFilter; // 0x508 - 0x50C
   unsigned char pad_50C[0x4]; // 0x50C - 0x510
   CEntityIOOutput m_OnNavLinkStart; // 0x510 - 0x538
   CEntityIOOutput m_OnNavLinkFinish; // 0x538 - 0x560
   bool m_bIsTerminus; // 0x560 - 0x561
   unsigned char pad_561[0x7]; // 0x561 - 0x568
}; // size - 0x568


class CNavLinkMovementVData /* "server" */
{
public:
   bool m_bIsInterpolated; // 0x0 - 0x1
   unsigned char pad_1[0x3]; // 0x1 - 0x4
   uint32_t m_unRecommendedDistance; // 0x4 - 0x8
   CUtlVector< CNavLinkAnimgraphVar > m_vecAnimgraphVars; // 0x8 - 0x20
}; // size - 0x20


class CNavSpaceInfo /* "server" */ : public CPointEntity /* "server" */
{
public:
   bool m_bCreateFlightSpace; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x7]; // 0x4C1 - 0x4C8
}; // size - 0x4C8


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


class CNavWalkable /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


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
   unsigned char pad_16D[0x43]; // 0x16D - 0x1B0
}; // size - 0x1B0


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


class CNetworkedSequenceOperation /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   HSequence m_hSequence; // 0x8 - 0xC
   float m_flPrevCycle; // 0xC - 0x10
   float m_flCycle; // 0x10 - 0x14
   CNetworkedQuantizedFloat m_flWeight; // 0x14 - 0x1C
   bool m_bSequenceChangeNetworked; // 0x1C - 0x1D
   bool m_bDiscontinuity; // 0x1D - 0x1E
   unsigned char pad_1E[0x2]; // 0x1E - 0x20
   float m_flPrevCycleFromDiscontinuity; // 0x20 - 0x24
   float m_flPrevCycleForAnimEventDetection; // 0x24 - 0x28
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


class CNmGraph /* "animlib" */
{
public:
   CUtlVector< int16 > m_persistentNodeIndices; // 0x0 - 0x18
   CUtlVector< uint32 > m_instanceNodeStartOffsets; // 0x18 - 0x30
   uint32_t m_instanceRequiredMemory; // 0x30 - 0x34
   uint32_t m_instanceRequiredAlignment; // 0x34 - 0x38
   int16_t m_rootNodeIdx; // 0x38 - 0x3A
   unsigned char pad_3A[0x6]; // 0x3A - 0x40
   CUtlVector< CGlobalSymbol > m_controlParameterIDs; // 0x40 - 0x58
   CUtlVector< CGlobalSymbol > m_virtualParameterIDs; // 0x58 - 0x70
   CUtlVector< int16 > m_virtualParameterNodeIndices; // 0x70 - 0x88
   CUtlVector< CNmGraph::ChildGraphSlot_t > m_childGraphSlots; // 0x88 - 0xA0
   CUtlVector< CNmGraph::ExternalGraphSlot_t > m_externalGraphSlots; // 0xA0 - 0xB8
   unsigned char pad_B8[0x38]; // 0xB8 - 0xF0
}; // size - 0xF0


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



class COmniLight /* "server" */ : public CBarnLight /* "server" */
{
public:
   float m_flInnerAngle; // 0x938 - 0x93C
   float m_flOuterAngle; // 0x93C - 0x940
   bool m_bShowLight; // 0x940 - 0x941
   unsigned char pad_941[0x7]; // 0x941 - 0x948
}; // size - 0x948


class COrnamentProp /* "server" */ : public CDynamicProp /* "server" */
{
public:
   CUtlSymbolLarge m_initialOwner; // 0xB60 - 0xB68
}; // size - 0xB68


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
   unsigned char pad_48[0x8]; // 0x48 - 0x50
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem; // 0x50 - 0x58
   CUtlString m_particleSystemName; // 0x58 - 0x60
   CUtlString m_configName; // 0x60 - 0x68
   bool m_bDetachFromOwner; // 0x68 - 0x69
   bool m_bStopWhenTagEnds; // 0x69 - 0x6A
   bool m_bTagEndStopIsInstant; // 0x6A - 0x6B
   unsigned char pad_6B[0x5]; // 0x6B - 0x70
   CUtlString m_attachmentName; // 0x70 - 0x78
   ParticleAttachment_t m_attachmentType; // 0x78 - 0x7C
   unsigned char pad_7C[0x4]; // 0x7C - 0x80
   CUtlString m_attachmentCP1Name; // 0x80 - 0x88
   ParticleAttachment_t m_attachmentCP1Type; // 0x88 - 0x8C
   unsigned char pad_8C[0x4]; // 0x8C - 0x90
}; // size - 0x90


class CParticleCollectionBindingInstance /* "particleslib" */ : public CBasePulseGraphInstance /* "particleslib" */
{
public:
   unsigned char pad_0[0xF8]; // 0x0 - 0xF8
}; // size - 0xF8


class CParticleCollectionFloatInput /* "particleslib" */ : public CParticleFloatInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x158]; // 0x0 - 0x158
}; // size - 0x158


class CParticleCollectionRendererFloatInput /* "particleslib" */ : public CParticleCollectionFloatInput /* "particleslib" */
{
public:
   unsigned char pad_0[0x158]; // 0x0 - 0x158
}; // size - 0x158


class CParticleModelInput /* "particleslib" */ : public CParticleInput /* "particleslib" */
{
public:
   ParticleModelType_t m_nType; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
   CParticleNamedValueRef m_NamedValue; // 0x18 - 0x58
   int32_t m_nControlPoint; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
}; // size - 0x60


class CParticleSystem /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   char m_szSnapshotFileName[512]; // 0x710 - 0x910
   bool m_bActive; // 0x910 - 0x911
   bool m_bFrozen; // 0x911 - 0x912
   unsigned char pad_912[0x2]; // 0x912 - 0x914
   float m_flFreezeTransitionDuration; // 0x914 - 0x918
   int32_t m_nStopType; // 0x918 - 0x91C
   bool m_bAnimateDuringGameplayPause; // 0x91C - 0x91D
   unsigned char pad_91D[0x3]; // 0x91D - 0x920
   CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x920 - 0x928
   GameTime_t m_flStartTime; // 0x928 - 0x92C
   float m_flPreSimTime; // 0x92C - 0x930
   Vector m_vServerControlPoints[4]; // 0x930 - 0x960
   uint8 m_iServerControlPointAssignments[4]; // 0x960 - 0x964
   CHandle< CBaseEntity > m_hControlPointEnts[64]; // 0x964 - 0xA64
   bool m_bNoSave; // 0xA64 - 0xA65
   bool m_bNoFreeze; // 0xA65 - 0xA66
   bool m_bNoRamp; // 0xA66 - 0xA67
   bool m_bStartActive; // 0xA67 - 0xA68
   CUtlSymbolLarge m_iszEffectName; // 0xA68 - 0xA70
   CUtlSymbolLarge m_iszControlPointNames[64]; // 0xA70 - 0xC70
   int32_t m_nDataCP; // 0xC70 - 0xC74
   Vector m_vecDataCPValue; // 0xC74 - 0xC80
   int32_t m_nTintCP; // 0xC80 - 0xC84
   Color m_clrTint; // 0xC84 - 0xC88
}; // size - 0xC88


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
   unsigned char pad_30F[0x1]; // 0x30F - 0x310
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
   float m_flNoPixelVisibilityFallback; // 0x14 - 0x18
   float m_flDistanceInputMin; // 0x18 - 0x1C
   float m_flDistanceInputMax; // 0x1C - 0x20
   float m_flDotInputMin; // 0x20 - 0x24
   float m_flDotInputMax; // 0x24 - 0x28
   bool m_bDotCPAngles; // 0x28 - 0x29
   bool m_bDotCameraAngles; // 0x29 - 0x2A
   unsigned char pad_2A[0x2]; // 0x2A - 0x2C
   float m_flAlphaScaleMin; // 0x2C - 0x30
   float m_flAlphaScaleMax; // 0x30 - 0x34
   float m_flRadiusScaleMin; // 0x34 - 0x38
   float m_flRadiusScaleMax; // 0x38 - 0x3C
   float m_flRadiusScaleFOVBase; // 0x3C - 0x40
   bool m_bRightEye; // 0x40 - 0x41
   unsigned char pad_41[0x3]; // 0x41 - 0x44
}; // size - 0x44


class CPathCorner /* "server" */ : public CPointEntity /* "server" */
{
public:
   float m_flWait; // 0x4C0 - 0x4C4
   float m_flRadius; // 0x4C4 - 0x4C8
   CEntityIOOutput m_OnPass; // 0x4C8 - 0x4F0
}; // size - 0x4F0


class CPathCornerCrash /* "server" */ : public CPathCorner /* "server" */
{
public:
   unsigned char pad_0[0x4F0]; // 0x0 - 0x4F0
}; // size - 0x4F0


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


class CPhysBox /* "server" */ : public CBreakable /* "server" */
{
public:
   int32_t m_damageType; // 0x7D0 - 0x7D4
   float m_massScale; // 0x7D4 - 0x7D8
   int32_t m_damageToEnableMotion; // 0x7D8 - 0x7DC
   float m_flForceToEnableMotion; // 0x7DC - 0x7E0
   QAngle m_angPreferredCarryAngles; // 0x7E0 - 0x7EC
   bool m_bNotSolidToWorld; // 0x7EC - 0x7ED
   bool m_bEnableUseOutput; // 0x7ED - 0x7EE
   unsigned char pad_7EE[0x2]; // 0x7EE - 0x7F0
   int32_t m_iExploitableByPlayer; // 0x7F0 - 0x7F4
   float m_flTouchOutputPerEntityDelay; // 0x7F4 - 0x7F8
   CEntityIOOutput m_OnDamaged; // 0x7F8 - 0x820
   CEntityIOOutput m_OnAwakened; // 0x820 - 0x848
   CEntityIOOutput m_OnMotionEnabled; // 0x848 - 0x870
   CEntityIOOutput m_OnPlayerUse; // 0x870 - 0x898
   CEntityIOOutput m_OnStartTouch; // 0x898 - 0x8C0
   CHandle< CBasePlayerPawn > m_hCarryingPlayer; // 0x8C0 - 0x8C4
   unsigned char pad_8C4[0x1C]; // 0x8C4 - 0x8E0
}; // size - 0x8E0


class CPhysExplosion /* "server" */ : public CPointEntity /* "server" */
{
public:
   bool m_bExplodeOnSpawn; // 0x4C0 - 0x4C1
   unsigned char pad_4C1[0x3]; // 0x4C1 - 0x4C4
   float m_flMagnitude; // 0x4C4 - 0x4C8
   float m_flDamage; // 0x4C8 - 0x4CC
   float m_radius; // 0x4CC - 0x4D0
   CUtlSymbolLarge m_targetEntityName; // 0x4D0 - 0x4D8
   float m_flInnerRadius; // 0x4D8 - 0x4DC
   float m_flPushScale; // 0x4DC - 0x4E0
   bool m_bConvertToDebrisWhenPossible; // 0x4E0 - 0x4E1
   unsigned char pad_4E1[0x7]; // 0x4E1 - 0x4E8
   CEntityIOOutput m_OnPushedPlayer; // 0x4E8 - 0x510
}; // size - 0x510


class CPhysHinge /* "server" */ : public CPhysConstraint /* "server" */
{
public:
   unsigned char pad_518[0x8]; // 0x518 - 0x520
   ConstraintSoundInfo m_soundInfo; // 0x520 - 0x5A8
   CEntityIOOutput m_NotifyMinLimitReached; // 0x5A8 - 0x5D0
   CEntityIOOutput m_NotifyMaxLimitReached; // 0x5D0 - 0x5F8
   bool m_bAtMinLimit; // 0x5F8 - 0x5F9
   bool m_bAtMaxLimit; // 0x5F9 - 0x5FA
   unsigned char pad_5FA[0x2]; // 0x5FA - 0x5FC
   constraint_hingeparams_t m_hinge; // 0x5FC - 0x63C
   float m_hingeFriction; // 0x63C - 0x640
   float m_systemLoadScale; // 0x640 - 0x644
   bool m_bIsAxisLocal; // 0x644 - 0x645
   unsigned char pad_645[0x3]; // 0x645 - 0x648
   float m_flMinRotation; // 0x648 - 0x64C
   float m_flMaxRotation; // 0x64C - 0x650
   float m_flInitialRotation; // 0x650 - 0x654
   float m_flMotorFrequency; // 0x654 - 0x658
   float m_flMotorDampingRatio; // 0x658 - 0x65C
   float m_flAngleSpeed; // 0x65C - 0x660
   float m_flAngleSpeedThreshold; // 0x660 - 0x664
   unsigned char pad_664[0x4]; // 0x664 - 0x668
   CEntityIOOutput m_OnStartMoving; // 0x668 - 0x690
   CEntityIOOutput m_OnStopMoving; // 0x690 - 0x6B8
}; // size - 0x6B8


class CPhysMagnet /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   CEntityIOOutput m_OnMagnetAttach; // 0x8E8 - 0x910
   CEntityIOOutput m_OnMagnetDetach; // 0x910 - 0x938
   float m_massScale; // 0x938 - 0x93C
   float m_forceLimit; // 0x93C - 0x940
   float m_torqueLimit; // 0x940 - 0x944
   unsigned char pad_944[0x4]; // 0x944 - 0x948
   CUtlVector< magnetted_objects_t > m_MagnettedEntities; // 0x948 - 0x960
   bool m_bActive; // 0x960 - 0x961
   bool m_bHasHitSomething; // 0x961 - 0x962
   unsigned char pad_962[0x2]; // 0x962 - 0x964
   float m_flTotalMass; // 0x964 - 0x968
   float m_flRadius; // 0x968 - 0x96C
   GameTime_t m_flNextSuckTime; // 0x96C - 0x970
   int32_t m_iMaxObjectsAttached; // 0x970 - 0x974
   unsigned char pad_974[0x4]; // 0x974 - 0x978
}; // size - 0x978


class CPhysPulley /* "server" */ : public CPhysConstraint /* "server" */
{
public:
   Vector m_position2; // 0x518 - 0x524
   Vector m_offset[2]; // 0x524 - 0x53C
   float m_addLength; // 0x53C - 0x540
   float m_gearRatio; // 0x540 - 0x544
   unsigned char pad_544[0x4]; // 0x544 - 0x548
}; // size - 0x548


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
   CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48 - 0x88
   CPhysSurfacePropertiesAudio m_audioParams; // 0x88 - 0xA8
}; // size - 0xA8


class CPhysicalButton /* "server" */ : public CBaseButton /* "server" */
{
public:
   unsigned char pad_0[0x8D8]; // 0x0 - 0x8D8
}; // size - 0x8D8


class CPhysicsPropMultiplayer /* "server" */ : public CPhysicsProp /* "server" */
{
public:
   unsigned char pad_0[0xBD0]; // 0x0 - 0xBD0
}; // size - 0xBD0


class CPhysicsPropOverride /* "server" */ : public CPhysicsProp /* "server" */
{
public:
   unsigned char pad_0[0xBD0]; // 0x0 - 0xBD0
}; // size - 0xBD0


class CPhysicsPropRespawnable /* "server" */ : public CPhysicsProp /* "server" */
{
public:
   Vector m_vOriginalSpawnOrigin; // 0xBD0 - 0xBDC
   QAngle m_vOriginalSpawnAngles; // 0xBDC - 0xBE8
   Vector m_vOriginalMins; // 0xBE8 - 0xBF4
   Vector m_vOriginalMaxs; // 0xBF4 - 0xC00
   float m_flRespawnDuration; // 0xC00 - 0xC04
   unsigned char pad_C04[0x4]; // 0xC04 - 0xC08
}; // size - 0xC08


class CPhysicsShake /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   Vector m_force; // 0x8 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class CPhysicsWire /* "server" */ : public CBaseEntity /* "server" */
{
public:
   int32_t m_nDensity; // 0x4C0 - 0x4C4
   unsigned char pad_4C4[0x4]; // 0x4C4 - 0x4C8
}; // size - 0x4C8


class CPlayerSprayDecal /* "server" */ : public CModelPointEntity /* "server" */
{
public:
   int32_t m_nUniqueID; // 0x710 - 0x714
   uint32_t m_unAccountID; // 0x714 - 0x718
   uint32_t m_unTraceID; // 0x718 - 0x71C
   uint32_t m_rtGcTime; // 0x71C - 0x720
   Vector m_vecEndPos; // 0x720 - 0x72C
   Vector m_vecStart; // 0x72C - 0x738
   Vector m_vecLeft; // 0x738 - 0x744
   Vector m_vecNormal; // 0x744 - 0x750
   int32_t m_nPlayer; // 0x750 - 0x754
   int32_t m_nEntity; // 0x754 - 0x758
   int32_t m_nHitbox; // 0x758 - 0x75C
   float m_flCreationTime; // 0x75C - 0x760
   int32_t m_nTintID; // 0x760 - 0x764
   uint8_t m_nVersion; // 0x764 - 0x765
   uint8 m_ubSignature[128]; // 0x765 - 0x7E5
   unsigned char pad_7E5[0x3]; // 0x7E5 - 0x7E8
}; // size - 0x7E8


class CPlayerSprayDecalRenderHelper /* "client" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
}; // size - 0x30


class CPlayerVisibility /* "server" */ : public CBaseEntity /* "server" */
{
public:
   float m_flVisibilityStrength; // 0x4C0 - 0x4C4
   float m_flFogDistanceMultiplier; // 0x4C4 - 0x4C8
   float m_flFogMaxDensityMultiplier; // 0x4C8 - 0x4CC
   float m_flFadeTime; // 0x4CC - 0x4D0
   bool m_bStartDisabled; // 0x4D0 - 0x4D1
   bool m_bIsEnabled; // 0x4D1 - 0x4D2
   unsigned char pad_4D2[0x6]; // 0x4D2 - 0x4D8
}; // size - 0x4D8


class CPlayer_AutoaimServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class CPlayer_ItemServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class CPlayer_ItemServices /* "client" */ : public CPlayerPawnComponent /* "client" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class CPlayer_MovementServices /* "client" */ : public CPlayerPawnComponent /* "client" */
{
public:
   int32_t m_nImpulse; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
   CInButtonState m_nButtons; // 0x48 - 0x68
   uint64_t m_nQueuedButtonDownMask; // 0x68 - 0x70
   uint64_t m_nQueuedButtonChangeMask; // 0x70 - 0x78
   uint64_t m_nButtonDoublePressed; // 0x78 - 0x80
   uint32 m_pButtonPressedCmdNumber[64]; // 0x80 - 0x180
   uint32_t m_nLastCommandNumberProcessed; // 0x180 - 0x184
   unsigned char pad_184[0x4]; // 0x184 - 0x188
   uint64_t m_nToggleButtonDownMask; // 0x188 - 0x190
   unsigned char pad_190[0x8]; // 0x190 - 0x198
   float m_flMaxspeed; // 0x198 - 0x19C
   float32 m_arrForceSubtickMoveWhen[4]; // 0x19C - 0x1AC
   float m_flForwardMove; // 0x1AC - 0x1B0
   float m_flLeftMove; // 0x1B0 - 0x1B4
   float m_flUpMove; // 0x1B4 - 0x1B8
   Vector m_vecLastMovementImpulses; // 0x1B8 - 0x1C4
   QAngle m_vecOldViewAngles; // 0x1C4 - 0x1D0
   unsigned char pad_1D0[0x8]; // 0x1D0 - 0x1D8
}; // size - 0x1D8


class CPlayer_MovementServices_Humanoid /* "server" */ : public CPlayer_MovementServices /* "server" */
{
public:
   float m_flStepSoundTime; // 0x1D8 - 0x1DC
   float m_flFallVelocity; // 0x1DC - 0x1E0
   bool m_bInCrouch; // 0x1E0 - 0x1E1
   unsigned char pad_1E1[0x3]; // 0x1E1 - 0x1E4
   uint32_t m_nCrouchState; // 0x1E4 - 0x1E8
   GameTime_t m_flCrouchTransitionStartTime; // 0x1E8 - 0x1EC
   bool m_bDucked; // 0x1EC - 0x1ED
   bool m_bDucking; // 0x1ED - 0x1EE
   bool m_bInDuckJump; // 0x1EE - 0x1EF
   unsigned char pad_1EF[0x1]; // 0x1EF - 0x1F0
   Vector m_groundNormal; // 0x1F0 - 0x1FC
   float m_flSurfaceFriction; // 0x1FC - 0x200
   CUtlStringToken m_surfaceProps; // 0x200 - 0x204
   unsigned char pad_204[0xC]; // 0x204 - 0x210
   int32_t m_nStepside; // 0x210 - 0x214
   int32_t m_iTargetVolume; // 0x214 - 0x218
   Vector m_vecSmoothedVelocity; // 0x218 - 0x224
   unsigned char pad_224[0x4]; // 0x224 - 0x228
}; // size - 0x228


class CPlayer_ObserverServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   uint8_t m_iObserverMode; // 0x40 - 0x41
   unsigned char pad_41[0x3]; // 0x41 - 0x44
   CHandle< CBaseEntity > m_hObserverTarget; // 0x44 - 0x48
   ObserverMode_t m_iObserverLastMode; // 0x48 - 0x4C
   bool m_bForcedObserverMode; // 0x4C - 0x4D
   unsigned char pad_4D[0x3]; // 0x4D - 0x50
}; // size - 0x50


class CPlayer_ObserverServices /* "client" */ : public CPlayerPawnComponent /* "client" */
{
public:
   uint8_t m_iObserverMode; // 0x40 - 0x41
   unsigned char pad_41[0x3]; // 0x41 - 0x44
   CHandle< C_BaseEntity > m_hObserverTarget; // 0x44 - 0x48
   ObserverMode_t m_iObserverLastMode; // 0x48 - 0x4C
   bool m_bForcedObserverMode; // 0x4C - 0x4D
   unsigned char pad_4D[0x3]; // 0x4D - 0x50
   float m_flObserverChaseDistance; // 0x50 - 0x54
   GameTime_t m_flObserverChaseDistanceCalcTime; // 0x54 - 0x58
}; // size - 0x58


class CPlayer_UseServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class CPlayer_ViewModelServices /* "client" */ : public CPlayerPawnComponent /* "client" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class CPlayer_WaterServices /* "server" */ : public CPlayerPawnComponent /* "server" */
{
public:
   unsigned char pad_0[0x40]; // 0x0 - 0x40
}; // size - 0x40


class CPlayer_WeaponServices /* "client" */ : public CPlayerPawnComponent /* "client" */
{
public:
   C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons; // 0x40 - 0x58
   CHandle< C_BasePlayerWeapon > m_hActiveWeapon; // 0x58 - 0x5C
   CHandle< C_BasePlayerWeapon > m_hLastWeapon; // 0x5C - 0x60
   uint16 m_iAmmo[32]; // 0x60 - 0xA0
}; // size - 0xA0


class CPointAngularVelocitySensor /* "server" */ : public CPointEntity /* "server" */
{
public:
   CHandle< CBaseEntity > m_hTargetEntity; // 0x4C0 - 0x4C4
   float m_flThreshold; // 0x4C4 - 0x4C8
   int32_t m_nLastCompareResult; // 0x4C8 - 0x4CC
   int32_t m_nLastFireResult; // 0x4CC - 0x4D0
   GameTime_t m_flFireTime; // 0x4D0 - 0x4D4
   float m_flFireInterval; // 0x4D4 - 0x4D8
   float m_flLastAngVelocity; // 0x4D8 - 0x4DC
   QAngle m_lastOrientation; // 0x4DC - 0x4E8
   Vector m_vecAxis; // 0x4E8 - 0x4F4
   bool m_bUseHelper; // 0x4F4 - 0x4F5
   unsigned char pad_4F5[0x3]; // 0x4F5 - 0x4F8
   CEntityOutputTemplate< float32 > m_AngularVelocity; // 0x4F8 - 0x520
   CEntityIOOutput m_OnLessThan; // 0x520 - 0x548
   CEntityIOOutput m_OnLessThanOrEqualTo; // 0x548 - 0x570
   CEntityIOOutput m_OnGreaterThan; // 0x570 - 0x598
   CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x598 - 0x5C0
   CEntityIOOutput m_OnEqualTo; // 0x5C0 - 0x5E8
}; // size - 0x5E8


class CPointBroadcastClientCommand /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CPointCamera /* "server" */ : public CBaseEntity /* "server" */
{
public:
   float m_FOV; // 0x4C0 - 0x4C4
   float m_Resolution; // 0x4C4 - 0x4C8
   bool m_bFogEnable; // 0x4C8 - 0x4C9
   Color m_FogColor; // 0x4C9 - 0x4CD
   unsigned char pad_4CD[0x3]; // 0x4CD - 0x4D0
   float m_flFogStart; // 0x4D0 - 0x4D4
   float m_flFogEnd; // 0x4D4 - 0x4D8
   float m_flFogMaxDensity; // 0x4D8 - 0x4DC
   bool m_bActive; // 0x4DC - 0x4DD
   bool m_bUseScreenAspectRatio; // 0x4DD - 0x4DE
   unsigned char pad_4DE[0x2]; // 0x4DE - 0x4E0
   float m_flAspectRatio; // 0x4E0 - 0x4E4
   bool m_bNoSky; // 0x4E4 - 0x4E5
   unsigned char pad_4E5[0x3]; // 0x4E5 - 0x4E8
   float m_fBrightness; // 0x4E8 - 0x4EC
   float m_flZFar; // 0x4EC - 0x4F0
   float m_flZNear; // 0x4F0 - 0x4F4
   bool m_bCanHLTVUse; // 0x4F4 - 0x4F5
   bool m_bDofEnabled; // 0x4F5 - 0x4F6
   unsigned char pad_4F6[0x2]; // 0x4F6 - 0x4F8
   float m_flDofNearBlurry; // 0x4F8 - 0x4FC
   float m_flDofNearCrisp; // 0x4FC - 0x500
   float m_flDofFarCrisp; // 0x500 - 0x504
   float m_flDofFarBlurry; // 0x504 - 0x508
   float m_flDofTiltToGround; // 0x508 - 0x50C
   float m_TargetFOV; // 0x50C - 0x510
   float m_DegreesPerSecond; // 0x510 - 0x514
   bool m_bIsOn; // 0x514 - 0x515
   unsigned char pad_515[0x3]; // 0x515 - 0x518
   CPointCamera* m_pNext; // 0x518 - 0x520
}; // size - 0x520


class CPointCameraVFOV /* "server" */ : public CPointCamera /* "server" */
{
public:
   float m_flVerticalFOV; // 0x520 - 0x524
   unsigned char pad_524[0x4]; // 0x524 - 0x528
}; // size - 0x528


class CPointClientCommand /* "server" */ : public CPointEntity /* "server" */
{
public:
   unsigned char pad_0[0x4C0]; // 0x0 - 0x4C0
}; // size - 0x4C0


class CPointClientUIDialog /* "server" */ : public CBaseClientUIEntity /* "server" */
{
public:
   CHandle< CBaseEntity > m_hActivator; // 0x8C0 - 0x8C4
   bool m_bStartEnabled; // 0x8C4 - 0x8C5
   unsigned char pad_8C5[0x3]; // 0x8C5 - 0x8C8
}; // size - 0x8C8


class CPointClientUIWorldTextPanel /* "server" */ : public CPointClientUIWorldPanel /* "server" */
{
public:
   char m_messageText[512]; // 0x918 - 0xB18
}; // size - 0xB18


class CPointCommentaryNode /* "server" */ : public CBaseAnimGraph /* "server" */
{
public:
   CUtlSymbolLarge m_iszPreCommands; // 0x8E8 - 0x8F0
   CUtlSymbolLarge m_iszPostCommands; // 0x8F0 - 0x8F8
   CUtlSymbolLarge m_iszCommentaryFile; // 0x8F8 - 0x900
   CUtlSymbolLarge m_iszViewTarget; // 0x900 - 0x908
   CHandle< CBaseEntity > m_hViewTarget; // 0x908 - 0x90C
   CHandle< CBaseEntity > m_hViewTargetAngles; // 0x90C - 0x910
   CUtlSymbolLarge m_iszViewPosition; // 0x910 - 0x918
   CHandle< CBaseEntity > m_hViewPosition; // 0x918 - 0x91C
   CHandle< CBaseEntity > m_hViewPositionMover; // 0x91C - 0x920
   bool m_bPreventMovement; // 0x920 - 0x921
   bool m_bUnderCrosshair; // 0x921 - 0x922
   bool m_bUnstoppable; // 0x922 - 0x923
   unsigned char pad_923[0x1]; // 0x923 - 0x924
   GameTime_t m_flFinishedTime; // 0x924 - 0x928
   Vector m_vecFinishOrigin; // 0x928 - 0x934
   QAngle m_vecOriginalAngles; // 0x934 - 0x940
   QAngle m_vecFinishAngles; // 0x940 - 0x94C
   bool m_bPreventChangesWhileMoving; // 0x94C - 0x94D
   bool m_bDisabled; // 0x94D - 0x94E
   unsigned char pad_94E[0x2]; // 0x94E - 0x950
   Vector m_vecTeleportOrigin; // 0x950 - 0x95C
   GameTime_t m_flAbortedPlaybackAt; // 0x95C - 0x960
   CEntityIOOutput m_pOnCommentaryStarted; // 0x960 - 0x988
   CEntityIOOutput m_pOnCommentaryStopped; // 0x988 - 0x9B0
   bool m_bActive; // 0x9B0 - 0x9B1
   unsigned char pad_9B1[0x3]; // 0x9B1 - 0x9B4
   GameTime_t m_flStartTime; // 0x9B4 - 0x9B8
   float m_flStartTimeInCommentary; // 0x9B8 - 0x9BC
   unsigned char pad_9BC[0x4]; // 0x9BC - 0x9C0
   CUtlSymbolLarge m_iszTitle; // 0x9C0 - 0x9C8
   CUtlSymbolLarge m_iszSpeakers; // 0x9C8 - 0x9D0
   int32_t m_iNodeNumber; // 0x9D0 - 0x9D4
   int32_t m_iNodeNumberMax; // 0x9D4 - 0x9D8
   bool m_bListenedTo; // 0x9D8 - 0x9D9
   unsigned char pad_9D9[0x7]; // 0x9D9 - 0x9E0
}; // size - 0x9E0


class CPointGamestatsCounter /* "server" */ : public CPointEntity /* "server" */
{
public:
   CUtlSymbolLarge m_strStatisticName; // 0x4C0 - 0x4C8
   bool m_bDisabled; // 0x4C8 - 0x4C9
   unsigned char pad_4C9[0x7]; // 0x4C9 - 0x4D0
}; // size - 0x4D0


class CPointGiveAmmo /* "server" */ : public CPointEntity /* "server" */
{
public:
   CHandle< CBaseEntity > m_pActivator; // 0x4C0 - 0x4C4
   unsigned char pad_4C4[0x4]; // 0x4C4 - 0x4C8
}; // size - 0x4C8


class CPointOffScreenIndicatorUi /* "client" */ : public C_PointClientUIWorldPanel /* "client" */
{
public:
   bool m_bBeenEnabled; // 0xF30 - 0xF31
   bool m_bHide; // 0xF31 - 0xF32
   unsigned char pad_F32[0x2]; // 0xF32 - 0xF34
   float m_flSeenTargetTime; // 0xF34 - 0xF38
   C_PointClientUIWorldPanel* m_pTargetPanel; // 0xF38 - 0xF40
}; // size - 0xF40


class CPointTemplate /* "client" */ : public CLogicalEntity /* "client" */
{
public:
   CUtlSymbolLarge m_iszWorldName; // 0x550 - 0x558
   CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x558 - 0x560
   CUtlSymbolLarge m_iszEntityFilterName; // 0x560 - 0x568
   float m_flTimeoutInterval; // 0x568 - 0x56C
   bool m_bAsynchronouslySpawnEntities; // 0x56C - 0x56D
   unsigned char pad_56D[0x3]; // 0x56D - 0x570
   CEntityIOOutput m_pOutputOnSpawned; // 0x570 - 0x598
   PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x598 - 0x59C
   PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x59C - 0x5A0
   CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x5A0 - 0x5B8
   CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x5B8 - 0x5D0
   HSCRIPT m_ScriptSpawnCallback; // 0x5D0 - 0x5D8
   HSCRIPT m_ScriptCallbackScope; // 0x5D8 - 0x5E0
}; // size - 0x5E0


class CPointWorldText /* "server" */ : public CModelPointEntity /* "server" */
{
public:
   char m_messageText[512]; // 0x710 - 0x910
   char m_FontName[64]; // 0x910 - 0x950
   bool m_bEnabled; // 0x950 - 0x951
   bool m_bFullbright; // 0x951 - 0x952
   unsigned char pad_952[0x2]; // 0x952 - 0x954
   float m_flWorldUnitsPerPx; // 0x954 - 0x958
   float m_flFontSize; // 0x958 - 0x95C
   float m_flDepthOffset; // 0x95C - 0x960
   Color m_Color; // 0x960 - 0x964
   PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x964 - 0x968
   PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x968 - 0x96C
   PointWorldTextReorientMode_t m_nReorientMode; // 0x96C - 0x970
}; // size - 0x970


class CPostProcessingVolume /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_8B8[0x10]; // 0x8B8 - 0x8C8
   CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x8C8 - 0x8D0
   float m_flFadeDuration; // 0x8D0 - 0x8D4
   float m_flMinLogExposure; // 0x8D4 - 0x8D8
   float m_flMaxLogExposure; // 0x8D8 - 0x8DC
   float m_flMinExposure; // 0x8DC - 0x8E0
   float m_flMaxExposure; // 0x8E0 - 0x8E4
   float m_flExposureCompensation; // 0x8E4 - 0x8E8
   float m_flExposureFadeSpeedUp; // 0x8E8 - 0x8EC
   float m_flExposureFadeSpeedDown; // 0x8EC - 0x8F0
   float m_flTonemapEVSmoothingRange; // 0x8F0 - 0x8F4
   bool m_bMaster; // 0x8F4 - 0x8F5
   bool m_bExposureControl; // 0x8F5 - 0x8F6
   unsigned char pad_8F6[0x2]; // 0x8F6 - 0x8F8
   float m_flRate; // 0x8F8 - 0x8FC
   float m_flTonemapPercentTarget; // 0x8FC - 0x900
   float m_flTonemapPercentBrightPixels; // 0x900 - 0x904
   float m_flTonemapMinAvgLum; // 0x904 - 0x908
}; // size - 0x908


class CPrecipitation /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_0[0x8B8]; // 0x0 - 0x8B8
}; // size - 0x8B8


class CPrecipitationVData /* "server" */ : public CEntitySubclassVDataBase /* "server" */
{
public:
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; // 0x28 - 0x108
   float m_flInnerDistance; // 0x108 - 0x10C
   ParticleAttachment_t m_nAttachType; // 0x10C - 0x110
   bool m_bBatchSameVolumeType; // 0x110 - 0x111
   unsigned char pad_111[0x3]; // 0x111 - 0x114
   int32_t m_nRTEnvCP; // 0x114 - 0x118
   int32_t m_nRTEnvCPComponent; // 0x118 - 0x11C
   unsigned char pad_11C[0x4]; // 0x11C - 0x120
   CUtlString m_szModifier; // 0x120 - 0x128
}; // size - 0x128


class CPrecipitationVData /* "client" */ : public CEntitySubclassVDataBase /* "client" */
{
public:
   CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; // 0x28 - 0x108
   float m_flInnerDistance; // 0x108 - 0x10C
   ParticleAttachment_t m_nAttachType; // 0x10C - 0x110
   bool m_bBatchSameVolumeType; // 0x110 - 0x111
   unsigned char pad_111[0x3]; // 0x111 - 0x114
   int32_t m_nRTEnvCP; // 0x114 - 0x118
   int32_t m_nRTEnvCPComponent; // 0x118 - 0x11C
   unsigned char pad_11C[0x4]; // 0x11C - 0x120
   CUtlString m_szModifier; // 0x120 - 0x128
}; // size - 0x128


class CPredictedViewModel /* "server" */ : public CBaseViewModel /* "server" */
{
public:
   unsigned char pad_0[0x930]; // 0x0 - 0x930
}; // size - 0x930


class CPropDoorRotatingBreakable /* "server" */ : public CPropDoorRotating /* "server" */
{
public:
   bool m_bBreakable; // 0xE88 - 0xE89
   bool m_isAbleToCloseAreaPortals; // 0xE89 - 0xE8A
   unsigned char pad_E8A[0x2]; // 0xE8A - 0xE8C
   int32_t m_currentDamageState; // 0xE8C - 0xE90
   CUtlVector< CUtlSymbolLarge > m_damageStates; // 0xE90 - 0xEA8
}; // size - 0xEA8


class CPulseCell_Inflow_BaseEntrypoint /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
   PulseRegisterMap_t m_RegisterMap; // 0x50 - 0x70
}; // size - 0x70


class CPulseCell_Inflow_GameEvent /* "server" */ : public CPulseCell_Inflow_BaseEntrypoint /* "server" */
{
public:
   CBufferString m_EventName; // 0x70 - 0x80
   unsigned char pad_80[0x8]; // 0x80 - 0x88
}; // size - 0x88


class CPulseCell_Outflow_CycleOrdered /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
{
public:
   CUtlVector< CPulse_OutflowConnection > m_Outputs; // 0x48 - 0x60
}; // size - 0x60



class CPulseCell_Outflow_PlaySequence /* "server" */ : public CPulseCell_Outflow_PlaySceneBase /* "server" */
{
public:
   CUtlString m_ParamSequenceName; // 0x80 - 0x88
}; // size - 0x88


class CPulseCell_Outflow_PlayVCD /* "server" */ : public CPulseCell_Outflow_PlaySceneBase /* "server" */
{
public:
   CUtlString m_vcdFilename; // 0x80 - 0x88
}; // size - 0x88


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
   CPulse_ResumePoint m_OnFinished; // 0x90 - 0xA0
   CPulse_ResumePoint m_OnCanceled; // 0xA0 - 0xB0
   CUtlVector< CPulse_OutflowConnection > m_Triggers; // 0xB0 - 0xC8
}; // size - 0xC8



class CPulseCell_SoundEventStart /* "server" */ : public CPulseCell_BaseFlow /* "server" */
{
public:
   SoundEventStartType_t m_Type; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
}; // size - 0x50


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


class CPulseCell_Test_NoInflow /* "pulse_runtime_lib" */ : public CPulseCell_BaseFlow /* "pulse_runtime_lib" */
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


class CPulseGraphComponentPointServer /* "server" */ : public CPulseGraphComponentBase /* "server" */
{
public:
   unsigned char pad_0[0x150]; // 0x0 - 0x150
}; // size - 0x150


class CPulseGraphInstance_ServerEntity /* "server" */ : public CBasePulseGraphInstance /* "server" */
{
public:
   CPulseGraphComponentBase* m_pComponent; // 0xD8 - 0xE0
   unsigned char pad_E0[0x48]; // 0xE0 - 0x128
}; // size - 0x128


class CPulseRuntimeMethodArg /* "pulse_runtime_lib" */
{
public:
   CKV3MemberNameWithStorage m_Name; // 0x0 - 0x38
   CUtlString m_Description; // 0x38 - 0x40
   CPulseValueFullType m_Type; // 0x40 - 0x50
}; // size - 0x50


class CPulseServerCursor /* "server" */ : public CPulseExecCursor /* "server" */
{
public:
   unsigned char pad_0[0x168]; // 0x0 - 0x168
}; // size - 0x168


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


class CPulseTurtleGraphicsCursor /* "pulse_runtime_lib" */ : public CPulseExecCursor /* "pulse_runtime_lib" */
{
public:
   Color m_Color; // 0x168 - 0x16C
   Vector2D m_vPos; // 0x16C - 0x174
   float m_flHeadingDeg; // 0x174 - 0x178
   bool m_bPenUp; // 0x178 - 0x179
   unsigned char pad_179[0x7]; // 0x179 - 0x180
}; // size - 0x180


class CPulse_OutputConnection /* "pulse_runtime_lib" */
{
public:
   CUtlSymbolLarge m_SourceOutput; // 0x0 - 0x8
   CUtlSymbolLarge m_TargetEntity; // 0x8 - 0x10
   CUtlSymbolLarge m_TargetInput; // 0x10 - 0x18
   CUtlSymbolLarge m_Param; // 0x18 - 0x20
}; // size - 0x20


class CPushable /* "server" */ : public CBreakable /* "server" */
{
public:
   unsigned char pad_0[0x7D0]; // 0x0 - 0x7D0
}; // size - 0x7D0


class CQuaternionAnimParameter /* "animgraphlib" */ : public CConcreteAnimParameter /* "animgraphlib" */
{
public:
   unsigned char pad_78[0x8]; // 0x78 - 0x80
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
   unsigned char pad_1B1[0x7]; // 0x1B1 - 0x1B8
   CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1B8 - 0x1D0
   CUtlVector< char* > m_pchCriteriaValues; // 0x1D0 - 0x1E8
}; // size - 0x1E8


class CRagdollPropAlias_physics_prop_ragdoll /* "server" */ : public CRagdollProp /* "server" */
{
public:
   unsigned char pad_0[0xA90]; // 0x0 - 0xA90
}; // size - 0xA90


class CRagdollPropAttached /* "server" */ : public CRagdollProp /* "server" */
{
public:
   uint32_t m_boneIndexAttached; // 0xA90 - 0xA94
   uint32_t m_ragdollAttachedObjectIndex; // 0xA94 - 0xA98
   Vector m_attachmentPointBoneSpace; // 0xA98 - 0xAA4
   Vector m_attachmentPointRagdollSpace; // 0xAA4 - 0xAB0
   bool m_bShouldDetach; // 0xAB0 - 0xAB1
   unsigned char pad_AB1[0xF]; // 0xAB1 - 0xAC0
   bool m_bShouldDeleteAttachedActivationRecord; // 0xAC0 - 0xAC1
   unsigned char pad_AC1[0xF]; // 0xAC1 - 0xAD0
}; // size - 0xAD0


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


class CRectLight /* "server" */ : public CBarnLight /* "server" */
{
public:
   bool m_bShowLight; // 0x938 - 0x939
   unsigned char pad_939[0x7]; // 0x939 - 0x940
}; // size - 0x940


class CRemapFloat /* "server" */
{
public:
   float32 m_pValue[4]; // 0x0 - 0x10
}; // size - 0x10


class CRenderComponent /* "server" */ : public CEntityComponent /* "server" */
{
public:
   unsigned char pad_8[0x8]; // 0x8 - 0x10
   CNetworkVarChainer __m_pChainEntity; // 0x10 - 0x38
   unsigned char pad_38[0x18]; // 0x38 - 0x50
   bool m_bIsRenderingWithViewModels; // 0x50 - 0x51
   unsigned char pad_51[0x3]; // 0x51 - 0x54
   uint32_t m_nSplitscreenFlags; // 0x54 - 0x58
   unsigned char pad_58[0x8]; // 0x58 - 0x60
   bool m_bEnableRendering; // 0x60 - 0x61
   unsigned char pad_61[0x4F]; // 0x61 - 0xB0
   bool m_bInterpolationReadyToDraw; // 0xB0 - 0xB1
   unsigned char pad_B1[0x7]; // 0xB1 - 0xB8
}; // size - 0xB8


class CResponseCriteriaSet /* "server" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
   int32_t m_nNumPrefixedContexts; // 0x28 - 0x2C
   bool m_bOverrideOnAppend; // 0x2C - 0x2D
   unsigned char pad_2D[0x3]; // 0x2D - 0x30
}; // size - 0x30


class CResponseQueue /* "server" */
{
public:
   class CDeferredResponse /* "server" */
   {
   public:
      unsigned char pad_0[0x8]; // 0x0 - 0x8
      CResponseCriteriaSet m_contexts; // 0x8 - 0x38
      float m_fDispatchTime; // 0x38 - 0x3C
      CHandle< CBaseEntity > m_hIssuer; // 0x3C - 0x40
      unsigned char pad_40[0x8]; // 0x40 - 0x48
      CRR_Response m_response; // 0x48 - 0x230
      bool m_bResponseValid; // 0x230 - 0x231
      unsigned char pad_231[0x7]; // 0x231 - 0x238
   }; // size - 0x238

   unsigned char pad_0[0x48]; // 0x0 - 0x48
   CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x48 - 0x60
}; // size - 0x60



class CRopeKeyframe /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   unsigned char pad_710[0x8]; // 0x710 - 0x718
   uint16_t m_RopeFlags; // 0x718 - 0x71A
   unsigned char pad_71A[0x6]; // 0x71A - 0x720
   CUtlSymbolLarge m_iNextLinkName; // 0x720 - 0x728
   int16_t m_Slack; // 0x728 - 0x72A
   unsigned char pad_72A[0x2]; // 0x72A - 0x72C
   float m_Width; // 0x72C - 0x730
   float m_TextureScale; // 0x730 - 0x734
   uint8_t m_nSegments; // 0x734 - 0x735
   bool m_bConstrainBetweenEndpoints; // 0x735 - 0x736
   unsigned char pad_736[0x2]; // 0x736 - 0x738
   CUtlSymbolLarge m_strRopeMaterialModel; // 0x738 - 0x740
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x740 - 0x748
   uint8_t m_Subdiv; // 0x748 - 0x749
   uint8_t m_nChangeCount; // 0x749 - 0x74A
   int16_t m_RopeLength; // 0x74A - 0x74C
   uint8_t m_fLockedPoints; // 0x74C - 0x74D
   bool m_bCreatedFromMapFile; // 0x74D - 0x74E
   unsigned char pad_74E[0x2]; // 0x74E - 0x750
   float m_flScrollSpeed; // 0x750 - 0x754
   bool m_bStartPointValid; // 0x754 - 0x755
   bool m_bEndPointValid; // 0x755 - 0x756
   unsigned char pad_756[0x2]; // 0x756 - 0x758
   CHandle< CBaseEntity > m_hStartPoint; // 0x758 - 0x75C
   CHandle< CBaseEntity > m_hEndPoint; // 0x75C - 0x760
   AttachmentHandle_t m_iStartAttachment; // 0x760 - 0x761
   AttachmentHandle_t m_iEndAttachment; // 0x761 - 0x762
   unsigned char pad_762[0x6]; // 0x762 - 0x768
}; // size - 0x768


class CRopeKeyframeAlias_move_rope /* "server" */ : public CRopeKeyframe /* "server" */
{
public:
   unsigned char pad_0[0x768]; // 0x0 - 0x768
}; // size - 0x768


class CRopeOverlapHit /* "server" */
{
public:
   CHandle< CBaseEntity > m_hEntity; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CUtlVector< int32 > m_vecOverlappingLinks; // 0x8 - 0x20
}; // size - 0x20


class CRotButton /* "server" */ : public CBaseButton /* "server" */
{
public:
   unsigned char pad_0[0x8D8]; // 0x0 - 0x8D8
}; // size - 0x8D8


class CRotDoor /* "server" */ : public CBaseDoor /* "server" */
{
public:
   bool m_bSolidBsp; // 0x998 - 0x999
   unsigned char pad_999[0x7]; // 0x999 - 0x9A0
}; // size - 0x9A0


class CSAdditionalMatchStats_t /* "server" */ : public CSAdditionalPerRoundStats_t /* "server" */
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
   int32_t m_iNumSuicides; // 0x38 - 0x3C
   int32_t m_iNumTeamKills; // 0x3C - 0x40
   int32_t m_iTeamDamage; // 0x40 - 0x44
}; // size - 0x44


class CSMatchStats_t /* "client" */ : public CSPerRoundStats_t /* "client" */
{
public:
   int32_t m_iEnemy5Ks; // 0x68 - 0x6C
   int32_t m_iEnemy4Ks; // 0x6C - 0x70
   int32_t m_iEnemy3Ks; // 0x70 - 0x74
   int32_t m_iEnemyKnifeKills; // 0x74 - 0x78
   int32_t m_iEnemyTaserKills; // 0x78 - 0x7C
   unsigned char pad_7C[0x4]; // 0x7C - 0x80
}; // size - 0x80


class CSceneEntityAlias_logic_choreographed_scene /* "server" */ : public CSceneEntity /* "server" */
{
public:
   unsigned char pad_0[0xA18]; // 0x0 - 0xA18
}; // size - 0xA18


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
   uint32_t m_nSceneEventId; // 0x48 - 0x4C
   bool m_bClientSide; // 0x4C - 0x4D
   bool m_bStarted; // 0x4D - 0x4E
   unsigned char pad_4E[0x2]; // 0x4E - 0x50
}; // size - 0x50


class CScriptComponent /* "entity2" */ : public CEntityComponent /* "entity2" */
{
public:
   unsigned char pad_8[0x28]; // 0x8 - 0x30
   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x38
}; // size - 0x38


class CScriptComponent /* "entity2" */ : public CEntityComponent /* "entity2" */
{
public:
   unsigned char pad_8[0x28]; // 0x8 - 0x30
   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x38
}; // size - 0x38


class CScriptComponent /* "entity2" */ : public CEntityComponent /* "entity2" */
{
public:
   unsigned char pad_8[0x28]; // 0x8 - 0x30
   CUtlSymbolLarge m_scriptClassName; // 0x30 - 0x38
}; // size - 0x38


class CScriptItem /* "server" */ : public CItem /* "server" */
{
public:
   CEntityIOOutput m_OnPlayerPickup; // 0x9C0 - 0x9E8
   MoveType_t m_MoveTypeOverride; // 0x9E8 - 0x9E9
   unsigned char pad_9E9[0x7]; // 0x9E9 - 0x9F0
}; // size - 0x9F0


class CScriptTriggerHurt /* "server" */ : public CTriggerHurt /* "server" */
{
public:
   Vector m_vExtent; // 0x958 - 0x964
   unsigned char pad_964[0x4]; // 0x964 - 0x968
}; // size - 0x968


class CScriptTriggerMultiple /* "server" */ : public CTriggerMultiple /* "server" */
{
public:
   Vector m_vExtent; // 0x8E0 - 0x8EC
   unsigned char pad_8EC[0x4]; // 0x8EC - 0x8F0
}; // size - 0x8F0


class CScriptTriggerOnce /* "server" */ : public CTriggerOnce /* "server" */
{
public:
   Vector m_vExtent; // 0x8E0 - 0x8EC
   unsigned char pad_8EC[0x4]; // 0x8EC - 0x8F0
}; // size - 0x8F0


class CScriptTriggerPush /* "server" */ : public CTriggerPush /* "server" */
{
public:
   Vector m_vExtent; // 0x8D8 - 0x8E4
   unsigned char pad_8E4[0x4]; // 0x8E4 - 0x8E8
}; // size - 0x8E8


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
   SelectorTagBehavior_t m_eTagBehavior; // 0xA0 - 0xA4
   bool m_bResetOnChange; // 0xA4 - 0xA5
   bool m_bSyncCyclesOnChange; // 0xA5 - 0xA6
   unsigned char pad_A6[0x2]; // 0xA6 - 0xA8
}; // size - 0xA8


class CSensorGrenade /* "server" */ : public CBaseCSGrenade /* "server" */
{
public:
   unsigned char pad_0[0xEC0]; // 0x0 - 0xEC0
}; // size - 0xEC0


class CSensorGrenadeProjectile /* "server" */ : public CBaseCSGrenadeProjectile /* "server" */
{
public:
   GameTime_t m_fExpireTime; // 0xA98 - 0xA9C
   GameTime_t m_fNextDetectPlayerSound; // 0xA9C - 0xAA0
   CHandle< CBaseEntity > m_hDisplayGrenade; // 0xAA0 - 0xAA4
   unsigned char pad_AA4[0x4]; // 0xAA4 - 0xAA8
}; // size - 0xAA8


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


class CServerOnlyModelEntity /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class CServerRagdollTrigger /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_0[0x8B8]; // 0x0 - 0x8B8
}; // size - 0x8B8


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


class CShower /* "server" */ : public CModelPointEntity /* "server" */
{
public:
   unsigned char pad_0[0x710]; // 0x0 - 0x710
}; // size - 0x710


class CSimTimer /* "server" */ : public CSimpleSimTimer /* "server" */
{
public:
   float m_interval; // 0x8 - 0xC
}; // size - 0xC


class CSimpleMarkupVolumeTagged /* "server" */ : public CMarkupVolumeTagged /* "server" */
{
public:
   unsigned char pad_0[0x750]; // 0x0 - 0x750
}; // size - 0x750


class CSimpleStopwatch /* "server" */ : public CStopwatchBase /* "server" */
{
public:
   unsigned char pad_0[0xC]; // 0x0 - 0xC
}; // size - 0xC


class CSingleplayRules /* "server" */ : public CGameRules /* "server" */
{
public:
   bool m_bSinglePlayerGameEnding; // 0x90 - 0x91
   unsigned char pad_91[0x7]; // 0x91 - 0x98
}; // size - 0x98


class CSkeletonInstance /* "server" */ : public CGameSceneNode /* "server" */
{
public:
   unsigned char pad_150[0x10]; // 0x150 - 0x160
   CModelState m_modelState; // 0x160 - 0x370
   bool m_bIsAnimationEnabled; // 0x370 - 0x371
   bool m_bUseParentRenderBounds; // 0x371 - 0x372
   bool m_bDisableSolidCollisionsForHierarchy; // 0x372 - 0x373
   unsigned char m_bDirtyMotionType : 1; // 0x373 - 0x374
   unsigned char m_bIsGeneratingLatchedParentSpaceState : 1; // 0x373 - 0x374
   CUtlStringToken m_materialGroup; // 0x374 - 0x378
   uint8_t m_nHitboxSet; // 0x378 - 0x379
   unsigned char pad_379[0x67]; // 0x379 - 0x3E0
}; // size - 0x3E0


class CSkillDamage /* "server" */
{
public:
   CSkillFloat m_flDamage; // 0x0 - 0x10
   float m_flPhysicsForceDamage; // 0x10 - 0x14
}; // size - 0x14


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


class CSkyboxReference /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   WorldGroupId_t m_worldGroupId; // 0x550 - 0x554
   CHandle< C_SkyCamera > m_hSkyCamera; // 0x554 - 0x558
}; // size - 0x558


class CSmokeGrenade /* "server" */ : public CBaseCSGrenade /* "server" */
{
public:
   unsigned char pad_0[0xEC8]; // 0x0 - 0xEC8
}; // size - 0xEC8


class CSmokeGrenadeProjectile /* "server" */ : public CBaseCSGrenadeProjectile /* "server" */
{
public:
   unsigned char pad_A98[0x18]; // 0xA98 - 0xAB0
   int32_t m_nSmokeEffectTickBegin; // 0xAB0 - 0xAB4
   bool m_bDidSmokeEffect; // 0xAB4 - 0xAB5
   unsigned char pad_AB5[0x3]; // 0xAB5 - 0xAB8
   int32_t m_nRandomSeed; // 0xAB8 - 0xABC
   Vector m_vSmokeColor; // 0xABC - 0xAC8
   Vector m_vSmokeDetonationPos; // 0xAC8 - 0xAD4
   unsigned char pad_AD4[0x4]; // 0xAD4 - 0xAD8
   CUtlVector< uint8 > m_VoxelFrameData; // 0xAD8 - 0xAF0
   GameTime_t m_flLastBounce; // 0xAF0 - 0xAF4
   GameTime_t m_fllastSimulationTime; // 0xAF4 - 0xAF8
   unsigned char pad_AF8[0x2280]; // 0xAF8 - 0x2D78
}; // size - 0x2D78


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


class CSosSoundEventGroupListSchema /* "soundsystem" */
{
public:
   CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0 - 0x18
}; // size - 0x18


class CSound /* "server" */
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
   unsigned char pad_1F[0x1]; // 0x1F - 0x20
   int32_t m_ownerChannelIndex; // 0x20 - 0x24
   Vector m_vecOrigin; // 0x24 - 0x30
   bool m_bHasOwner; // 0x30 - 0x31
   unsigned char pad_31[0x3]; // 0x31 - 0x34
}; // size - 0x34


class CSoundEnt /* "server" */ : public CPointEntity /* "server" */
{
public:
   int32_t m_iFreeSound; // 0x4C0 - 0x4C4
   int32_t m_iActiveSound; // 0x4C4 - 0x4C8
   int32_t m_cLastActiveSounds; // 0x4C8 - 0x4CC
   CSound m_SoundPool[128]; // 0x4CC - 0x1ECC
   unsigned char pad_1ECC[0x4]; // 0x1ECC - 0x1ED0
}; // size - 0x1ED0


class CSoundEnvelope /* "server" */
{
public:
   float m_current; // 0x0 - 0x4
   float m_target; // 0x4 - 0x8
   float m_rate; // 0x8 - 0xC
   bool m_forceupdate; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
}; // size - 0x10


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


class CSpriteAlias_env_glow /* "server" */ : public CSprite /* "server" */
{
public:
   unsigned char pad_0[0x780]; // 0x0 - 0x780
}; // size - 0x780


class CSpriteOriented /* "server" */ : public CSprite /* "server" */
{
public:
   unsigned char pad_0[0x780]; // 0x0 - 0x780
}; // size - 0x780


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


class CStaticPoseCache /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
   CUtlVector< CCachedPose > m_poses; // 0x10 - 0x28
   int32_t m_nBoneCount; // 0x28 - 0x2C
   int32_t m_nMorphCount; // 0x2C - 0x30
}; // size - 0x30


class CStaticPoseCacheBuilder /* "animgraphlib" */ : public CStaticPoseCache /* "animgraphlib" */
{
public:
   unsigned char pad_0[0x38]; // 0x0 - 0x38
}; // size - 0x38


class CStopwatch /* "server" */ : public CStopwatchBase /* "server" */
{
public:
   float m_interval; // 0xC - 0x10
}; // size - 0x10


class CTablet /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   unsigned char pad_0[0x1A70]; // 0x0 - 0x1A70
}; // size - 0x1A70


class CTablet /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   unsigned char pad_0[0xE90]; // 0x0 - 0xE90
}; // size - 0xE90


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
   int32_t m_bitsDamageType; // 0x48 - 0x4C
   int32_t m_iDamageCustom; // 0x4C - 0x50
   AmmoIndex_t m_iAmmoType; // 0x50 - 0x51
   unsigned char pad_51[0xF]; // 0x51 - 0x60
   float m_flOriginalDamage; // 0x60 - 0x64
   bool m_bShouldBleed; // 0x64 - 0x65
   bool m_bShouldSpark; // 0x65 - 0x66
   unsigned char pad_66[0xA]; // 0x66 - 0x70
   TakeDamageFlags_t m_nDamageFlags; // 0x70 - 0x74
   int32_t m_nNumObjectsPenetrated; // 0x74 - 0x78
   HSCRIPT m_hScriptInstance; // 0x78 - 0x80
   unsigned char pad_80[0x14]; // 0x80 - 0x94
   bool m_bInTakeDamageFlow; // 0x94 - 0x95
   unsigned char pad_95[0x3]; // 0x95 - 0x98
}; // size - 0x98


class CTakeDamageResult /* "server" */
{
public:
   int32_t m_nHealthLost; // 0x0 - 0x4
   int32_t m_nDamageTaken; // 0x4 - 0x8
}; // size - 0x8


class CTakeDamageSummaryScopeGuard /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries; // 0x8 - 0x20
}; // size - 0x20


class CTankTargetChange /* "server" */ : public CPointEntity /* "server" */
{
public:
   CVariantBase< CVariantDefaultAllocator > m_newTarget; // 0x4C0 - 0x4D0
   CUtlSymbolLarge m_newTargetName; // 0x4D0 - 0x4D8
}; // size - 0x4D8


class CTeamplayRules /* "server" */ : public CMultiplayRules /* "server" */
{
public:
   unsigned char pad_0[0x90]; // 0x0 - 0x90
}; // size - 0x90


class CTestEffect /* "server" */ : public CBaseEntity /* "server" */
{
public:
   int32_t m_iLoop; // 0x4C0 - 0x4C4
   int32_t m_iBeam; // 0x4C4 - 0x4C8
   CBeam* m_pBeam[24]; // 0x4C8 - 0x588
   GameTime_t m_flBeamTime[24]; // 0x588 - 0x5E8
   GameTime_t m_flStartTime; // 0x5E8 - 0x5EC
   unsigned char pad_5EC[0x4]; // 0x5EC - 0x5F0
}; // size - 0x5F0


class CTextureBasedAnimatable /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   bool m_bLoop; // 0x710 - 0x711
   unsigned char pad_711[0x3]; // 0x711 - 0x714
   float m_flFPS; // 0x714 - 0x718
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x718 - 0x720
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x720 - 0x728
   Vector m_vAnimationBoundsMin; // 0x728 - 0x734
   Vector m_vAnimationBoundsMax; // 0x734 - 0x740
   float m_flStartTime; // 0x740 - 0x744
   float m_flStartFrame; // 0x744 - 0x748
}; // size - 0x748


class CTimerEntity /* "server" */ : public CLogicalEntity /* "server" */
{
public:
   CEntityIOOutput m_OnTimer; // 0x4C0 - 0x4E8
   CEntityIOOutput m_OnTimerHigh; // 0x4E8 - 0x510
   CEntityIOOutput m_OnTimerLow; // 0x510 - 0x538
   int32_t m_iDisabled; // 0x538 - 0x53C
   float m_flInitialDelay; // 0x53C - 0x540
   float m_flRefireTime; // 0x540 - 0x544
   bool m_bUpDownState; // 0x544 - 0x545
   unsigned char pad_545[0x3]; // 0x545 - 0x548
   int32_t m_iUseRandomTime; // 0x548 - 0x54C
   bool m_bPauseAfterFiring; // 0x54C - 0x54D
   unsigned char pad_54D[0x3]; // 0x54D - 0x550
   float m_flLowerRandomBound; // 0x550 - 0x554
   float m_flUpperRandomBound; // 0x554 - 0x558
   float m_flRemainingTime; // 0x558 - 0x55C
   bool m_bPaused; // 0x55C - 0x55D
   unsigned char pad_55D[0x3]; // 0x55D - 0x560
}; // size - 0x560


class CTonemapController2Alias_env_tonemap_controller2 /* "server" */ : public CTonemapController2 /* "server" */
{
public:
   unsigned char pad_0[0x4E8]; // 0x0 - 0x4E8
}; // size - 0x4E8


class CTonemapTrigger /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CUtlSymbolLarge m_tonemapControllerName; // 0x8B8 - 0x8C0
   CEntityHandle m_hTonemapController; // 0x8C0 - 0x8C4
   unsigned char pad_8C4[0x4]; // 0x8C4 - 0x8C8
}; // size - 0x8C8


class CTriggerBombReset /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_0[0x8B8]; // 0x0 - 0x8B8
}; // size - 0x8B8


class CTriggerBrush /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   CEntityIOOutput m_OnStartTouch; // 0x710 - 0x738
   CEntityIOOutput m_OnEndTouch; // 0x738 - 0x760
   CEntityIOOutput m_OnUse; // 0x760 - 0x788
   int32_t m_iInputFilter; // 0x788 - 0x78C
   int32_t m_iDontMessageParent; // 0x78C - 0x790
}; // size - 0x790


class CTriggerBuoyancy /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CBuoyancyHelper m_BuoyancyHelper; // 0x8B8 - 0x8D8
   float m_flFluidDensity; // 0x8D8 - 0x8DC
   unsigned char pad_8DC[0x4]; // 0x8DC - 0x8E0
}; // size - 0x8E0


class CTriggerCallback /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_0[0x8C0]; // 0x0 - 0x8C0
}; // size - 0x8C0


class CTriggerDetectBulletFire /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   bool m_bPlayerFireOnly; // 0x8B8 - 0x8B9
   unsigned char pad_8B9[0x7]; // 0x8B9 - 0x8C0
   CEntityIOOutput m_OnDetectedBulletFire; // 0x8C0 - 0x8E8
}; // size - 0x8E8


class CTriggerDetectExplosion /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_8B8[0x38]; // 0x8B8 - 0x8F0
   CEntityIOOutput m_OnDetectedExplosion; // 0x8F0 - 0x918
}; // size - 0x918


class CTriggerFan /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   Vector m_vFanOrigin; // 0x8B8 - 0x8C4
   Vector m_vFanEnd; // 0x8C4 - 0x8D0
   Vector m_vNoise; // 0x8D0 - 0x8DC
   float m_flForce; // 0x8DC - 0x8E0
   float m_flRopeForceScale; // 0x8E0 - 0x8E4
   float m_flPlayerForce; // 0x8E4 - 0x8E8
   float m_flRampTime; // 0x8E8 - 0x8EC
   bool m_bFalloff; // 0x8EC - 0x8ED
   bool m_bPushPlayer; // 0x8ED - 0x8EE
   bool m_bRampDown; // 0x8EE - 0x8EF
   bool m_bAddNoise; // 0x8EF - 0x8F0
   CountdownTimer m_RampTimer; // 0x8F0 - 0x908
}; // size - 0x908


class CTriggerGameEvent /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CUtlString m_strStartTouchEventName; // 0x8B8 - 0x8C0
   CUtlString m_strEndTouchEventName; // 0x8C0 - 0x8C8
   CUtlString m_strTriggerID; // 0x8C8 - 0x8D0
}; // size - 0x8D0


class CTriggerGravity /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_0[0x8B8]; // 0x0 - 0x8B8
}; // size - 0x8B8


class CTriggerHostageReset /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_0[0x8B8]; // 0x0 - 0x8B8
}; // size - 0x8B8


class CTriggerHurtGhost /* "server" */ : public CTriggerHurt /* "server" */
{
public:
   unsigned char pad_0[0x958]; // 0x0 - 0x958
}; // size - 0x958


class CTriggerImpact /* "server" */ : public CTriggerMultiple /* "server" */
{
public:
   float m_flMagnitude; // 0x8E0 - 0x8E4
   float m_flNoise; // 0x8E4 - 0x8E8
   float m_flViewkick; // 0x8E8 - 0x8EC
   unsigned char pad_8EC[0x4]; // 0x8EC - 0x8F0
   CEntityOutputTemplate< Vector > m_pOutputForce; // 0x8F0 - 0x918
}; // size - 0x918


class CTriggerLerpObject /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CUtlSymbolLarge m_iszLerpTarget; // 0x8B8 - 0x8C0
   CHandle< CBaseEntity > m_hLerpTarget; // 0x8C0 - 0x8C4
   unsigned char pad_8C4[0x4]; // 0x8C4 - 0x8C8
   CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x8C8 - 0x8D0
   AttachmentHandle_t m_hLerpTargetAttachment; // 0x8D0 - 0x8D1
   unsigned char pad_8D1[0x3]; // 0x8D1 - 0x8D4
   float m_flLerpDuration; // 0x8D4 - 0x8D8
   bool m_bLerpRestoreMoveType; // 0x8D8 - 0x8D9
   bool m_bSingleLerpObject; // 0x8D9 - 0x8DA
   unsigned char pad_8DA[0x6]; // 0x8DA - 0x8E0
   CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x8E0 - 0x8F8
   CUtlSymbolLarge m_iszLerpEffect; // 0x8F8 - 0x900
   CUtlSymbolLarge m_iszLerpSound; // 0x900 - 0x908
   bool m_bAttachTouchingObject; // 0x908 - 0x909
   unsigned char pad_909[0x3]; // 0x909 - 0x90C
   CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // 0x90C - 0x910
   CEntityIOOutput m_OnLerpStarted; // 0x910 - 0x938
   CEntityIOOutput m_OnLerpFinished; // 0x938 - 0x960
}; // size - 0x960


class CTriggerLook /* "server" */ : public CTriggerOnce /* "server" */
{
public:
   CHandle< CBaseEntity > m_hLookTarget; // 0x8E0 - 0x8E4
   float m_flFieldOfView; // 0x8E4 - 0x8E8
   float m_flLookTime; // 0x8E8 - 0x8EC
   float m_flLookTimeTotal; // 0x8EC - 0x8F0
   GameTime_t m_flLookTimeLast; // 0x8F0 - 0x8F4
   float m_flTimeoutDuration; // 0x8F4 - 0x8F8
   bool m_bTimeoutFired; // 0x8F8 - 0x8F9
   bool m_bIsLooking; // 0x8F9 - 0x8FA
   bool m_b2DFOV; // 0x8FA - 0x8FB
   bool m_bUseVelocity; // 0x8FB - 0x8FC
   CHandle< CBaseEntity > m_hActivator; // 0x8FC - 0x900
   bool m_bTestOcclusion; // 0x900 - 0x901
   unsigned char pad_901[0x7]; // 0x901 - 0x908
   CEntityIOOutput m_OnTimeout; // 0x908 - 0x930
   CEntityIOOutput m_OnStartLook; // 0x930 - 0x958
   CEntityIOOutput m_OnEndLook; // 0x958 - 0x980
}; // size - 0x980


class CTriggerPhysics /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_8B8[0x10]; // 0x8B8 - 0x8C8
   float m_gravityScale; // 0x8C8 - 0x8CC
   float m_linearLimit; // 0x8CC - 0x8D0
   float m_linearDamping; // 0x8D0 - 0x8D4
   float m_angularLimit; // 0x8D4 - 0x8D8
   float m_angularDamping; // 0x8D8 - 0x8DC
   float m_linearForce; // 0x8DC - 0x8E0
   float m_flFrequency; // 0x8E0 - 0x8E4
   float m_flDampingRatio; // 0x8E4 - 0x8E8
   Vector m_vecLinearForcePointAt; // 0x8E8 - 0x8F4
   bool m_bCollapseToForcePoint; // 0x8F4 - 0x8F5
   unsigned char pad_8F5[0x3]; // 0x8F5 - 0x8F8
   Vector m_vecLinearForcePointAtWorld; // 0x8F8 - 0x904
   Vector m_vecLinearForceDirection; // 0x904 - 0x910
   bool m_bConvertToDebrisWhenPossible; // 0x910 - 0x911
   unsigned char pad_911[0x7]; // 0x911 - 0x918
}; // size - 0x918


class CTriggerProximity /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CHandle< CBaseEntity > m_hMeasureTarget; // 0x8B8 - 0x8BC
   unsigned char pad_8BC[0x4]; // 0x8BC - 0x8C0
   CUtlSymbolLarge m_iszMeasureTarget; // 0x8C0 - 0x8C8
   float m_fRadius; // 0x8C8 - 0x8CC
   int32_t m_nTouchers; // 0x8CC - 0x8D0
   CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x8D0 - 0x8F8
}; // size - 0x8F8


class CTriggerRemove /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CEntityIOOutput m_OnRemove; // 0x8B8 - 0x8E0
}; // size - 0x8E0


class CTriggerSave /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   bool m_bForceNewLevelUnit; // 0x8B8 - 0x8B9
   unsigned char pad_8B9[0x3]; // 0x8B9 - 0x8BC
   float m_fDangerousTimer; // 0x8BC - 0x8C0
   int32_t m_minHitPoints; // 0x8C0 - 0x8C4
   unsigned char pad_8C4[0x4]; // 0x8C4 - 0x8C8
}; // size - 0x8C8


class CTriggerSndSosOpvar /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // 0x8B8 - 0x8D0
   Vector m_flPosition; // 0x8D0 - 0x8DC
   float m_flCenterSize; // 0x8DC - 0x8E0
   float m_flMinVal; // 0x8E0 - 0x8E4
   float m_flMaxVal; // 0x8E4 - 0x8E8
   float m_flWait; // 0x8E8 - 0x8EC
   unsigned char pad_8EC[0x4]; // 0x8EC - 0x8F0
   CUtlSymbolLarge m_opvarName; // 0x8F0 - 0x8F8
   CUtlSymbolLarge m_stackName; // 0x8F8 - 0x900
   CUtlSymbolLarge m_operatorName; // 0x900 - 0x908
   bool m_bVolIs2D; // 0x908 - 0x909
   char m_opvarNameChar[256]; // 0x909 - 0xA09
   char m_stackNameChar[256]; // 0xA09 - 0xB09
   char m_operatorNameChar[256]; // 0xB09 - 0xC09
   unsigned char pad_C09[0x3]; // 0xC09 - 0xC0C
   Vector m_VecNormPos; // 0xC0C - 0xC18
   float m_flNormCenterSize; // 0xC18 - 0xC1C
   unsigned char pad_C1C[0x4]; // 0xC1C - 0xC20
}; // size - 0xC20


class CTriggerSoundscape /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CHandle< CEnvSoundscapeTriggerable > m_hSoundscape; // 0x8B8 - 0x8BC
   unsigned char pad_8BC[0x4]; // 0x8BC - 0x8C0
   CUtlSymbolLarge m_SoundscapeName; // 0x8C0 - 0x8C8
   CUtlVector< CHandle< CBasePlayerPawn > > m_spectators; // 0x8C8 - 0x8E0
}; // size - 0x8E0


class CTriggerTeleport /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   CUtlSymbolLarge m_iLandmark; // 0x8B8 - 0x8C0
   bool m_bUseLandmarkAngles; // 0x8C0 - 0x8C1
   bool m_bMirrorPlayer; // 0x8C1 - 0x8C2
   unsigned char pad_8C2[0x6]; // 0x8C2 - 0x8C8
}; // size - 0x8C8


class CTriggerToggleSave /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   bool m_bDisabled; // 0x8B8 - 0x8B9
   unsigned char pad_8B9[0x7]; // 0x8B9 - 0x8C0
}; // size - 0x8C0


class CTriggerTripWire /* "server" */ : public CBaseTrigger /* "server" */
{
public:
   unsigned char pad_0[0x8B8]; // 0x0 - 0x8B8
}; // size - 0x8B8


class CTripWireFire /* "server" */ : public CBaseCSGrenade /* "server" */
{
public:
   unsigned char pad_0[0xEC0]; // 0x0 - 0xEC0
}; // size - 0xEC0


class CTripWireFire /* "client" */ : public C_BaseCSGrenade /* "client" */
{
public:
   unsigned char pad_0[0x1AA0]; // 0x0 - 0x1AA0
}; // size - 0x1AA0


class CTripWireFireProjectile /* "client" */ : public C_BaseGrenade /* "client" */
{
public:
   unsigned char pad_0[0x10C0]; // 0x0 - 0x10C0
}; // size - 0x10C0


class CTripWireFireProjectile /* "server" */ : public CBaseGrenade /* "server" */
{
public:
   unsigned char pad_0[0xA20]; // 0x0 - 0xA20
}; // size - 0xA20


class CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   unsigned char pad_0[0x20]; // 0x0 - 0x20
   CUtlDict< CPiecewiseCurve, F( size=1 ) > m_curves; // 0x20 - 0x48
   unsigned char pad_48[0x18]; // 0x48 - 0x60
}; // size - 0x60


class CVoiceContainerDecayingSineWave /* "soundsystem_voicecontainers" */ : public CVoiceContainerBase /* "soundsystem_voicecontainers" */
{
public:
   float m_flFrequency; // 0x60 - 0x64
   float m_flDecayTime; // 0x64 - 0x68
}; // size - 0x68


class CVoteController /* "server" */ : public CBaseEntity /* "server" */
{
public:
   int32_t m_iActiveIssueIndex; // 0x4C0 - 0x4C4
   int32_t m_iOnlyTeamToVote; // 0x4C4 - 0x4C8
   int32 m_nVoteOptionCount[5]; // 0x4C8 - 0x4DC
   int32_t m_nPotentialVotes; // 0x4DC - 0x4E0
   bool m_bIsYesNoVote; // 0x4E0 - 0x4E1
   unsigned char pad_4E1[0x7]; // 0x4E1 - 0x4E8
   CountdownTimer m_acceptingVotesTimer; // 0x4E8 - 0x500
   CountdownTimer m_executeCommandTimer; // 0x500 - 0x518
   CountdownTimer m_resetVoteTimer; // 0x518 - 0x530
   int32 m_nVotesCast[64]; // 0x530 - 0x630
   CPlayerSlot m_playerHoldingVote; // 0x630 - 0x634
   CPlayerSlot m_playerOverrideForVote; // 0x634 - 0x638
   int32_t m_nHighestCountIndex; // 0x638 - 0x63C
   unsigned char pad_63C[0x4]; // 0x63C - 0x640
   CUtlVector< CBaseIssue* > m_potentialIssues; // 0x640 - 0x658
   CUtlVector< char* > m_VoteOptions; // 0x658 - 0x670
}; // size - 0x670


class CWaterSplasher /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class CWeaponAWP /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponAug /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponBizon /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponCZ75a /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponElite /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponFamas /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponFiveSeven /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponG3SG1 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponGalilAR /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponGlock /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponHKP2000 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponM249 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponM4A1 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponM4A1Silencer /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponMAC10 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponMP5SD /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponMP7 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponMP9 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponMag7 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponNOVA /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   unsigned char pad_0[0xE90]; // 0x0 - 0xE90
}; // size - 0xE90


class CWeaponNegev /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponP90 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponRevolver /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponSCAR20 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponSG556 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponSSG08 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponSawedoff /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   unsigned char pad_0[0xE90]; // 0x0 - 0xE90
}; // size - 0xE90


class CWeaponShield /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   float m_flBulletDamageAbsorbed; // 0xEB0 - 0xEB4
   GameTime_t m_flLastBulletHitSoundTime; // 0xEB4 - 0xEB8
   float m_flDisplayHealth; // 0xEB8 - 0xEBC
   unsigned char pad_EBC[0x4]; // 0xEBC - 0xEC0
}; // size - 0xEC0


class CWeaponTaser /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   GameTime_t m_fFireTime; // 0xEB0 - 0xEB4
   unsigned char pad_EB4[0x4]; // 0xEB4 - 0xEB8
}; // size - 0xEB8


class CWeaponTec9 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponUMP45 /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponUSPSilencer /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponXM1014 /* "server" */ : public CCSWeaponBase /* "server" */
{
public:
   unsigned char pad_0[0xE90]; // 0x0 - 0xE90
}; // size - 0xE90


class CWeaponZoneRepulsor /* "server" */ : public CCSWeaponBaseGun /* "server" */
{
public:
   unsigned char pad_0[0xEB0]; // 0x0 - 0xEB0
}; // size - 0xEB0


class CWeaponZoneRepulsor /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class CWorld /* "server" */ : public CBaseModelEntity /* "server" */
{
public:
   unsigned char pad_0[0x710]; // 0x0 - 0x710
}; // size - 0x710


class C_AK47 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_AttributeContainer /* "client" */ : public CAttributeManager /* "client" */
{
public:
   C_EconItemView m_Item; // 0x50 - 0x498
   int32_t m_iExternalItemProviderRegisteredToken; // 0x498 - 0x49C
   unsigned char pad_49C[0x4]; // 0x49C - 0x4A0
   uint64_t m_ullRegisteredAsItemID; // 0x4A0 - 0x4A8
}; // size - 0x4A8


class C_BaseButton /* "client" */ : public C_BaseToggle /* "client" */
{
public:
   CHandle< C_BaseModelEntity > m_glowEntity; // 0xCD0 - 0xCD4
   bool m_usable; // 0xCD4 - 0xCD5
   unsigned char pad_CD5[0x3]; // 0xCD5 - 0xCD8
   CUtlSymbolLarge m_szDisplayText; // 0xCD8 - 0xCE0
}; // size - 0xCE0



class C_Beam /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   float m_flFrameRate; // 0xCD0 - 0xCD4
   float m_flHDRColorScale; // 0xCD4 - 0xCD8
   GameTime_t m_flFireTime; // 0xCD8 - 0xCDC
   float m_flDamage; // 0xCDC - 0xCE0
   uint8_t m_nNumBeamEnts; // 0xCE0 - 0xCE1
   unsigned char pad_CE1[0x3]; // 0xCE1 - 0xCE4
   int32_t m_queryHandleHalo; // 0xCE4 - 0xCE8
   unsigned char pad_CE8[0x20]; // 0xCE8 - 0xD08
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0xD08 - 0xD10
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0xD10 - 0xD18
   BeamType_t m_nBeamType; // 0xD18 - 0xD1C
   uint32_t m_nBeamFlags; // 0xD1C - 0xD20
   CHandle< C_BaseEntity > m_hAttachEntity[10]; // 0xD20 - 0xD48
   AttachmentHandle_t m_nAttachIndex[10]; // 0xD48 - 0xD52
   unsigned char pad_D52[0x2]; // 0xD52 - 0xD54
   float m_fWidth; // 0xD54 - 0xD58
   float m_fEndWidth; // 0xD58 - 0xD5C
   float m_fFadeLength; // 0xD5C - 0xD60
   float m_fHaloScale; // 0xD60 - 0xD64
   float m_fAmplitude; // 0xD64 - 0xD68
   float m_fStartFrame; // 0xD68 - 0xD6C
   float m_fSpeed; // 0xD6C - 0xD70
   float m_flFrame; // 0xD70 - 0xD74
   BeamClipStyle_t m_nClipStyle; // 0xD74 - 0xD78
   bool m_bTurnedOff; // 0xD78 - 0xD79
   unsigned char pad_D79[0x3]; // 0xD79 - 0xD7C
   Vector m_vecEndPos; // 0xD7C - 0xD88
   CHandle< C_BaseEntity > m_hEndEntity; // 0xD88 - 0xD8C
   unsigned char pad_D8C[0x4]; // 0xD8C - 0xD90
}; // size - 0xD90


class C_Breakable /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class C_BulletHitModel /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   matrix3x4_t m_matLocal; // 0xED8 - 0xF08
   int32_t m_iBoneIndex; // 0xF08 - 0xF0C
   CHandle< C_BaseEntity > m_hPlayerParent; // 0xF0C - 0xF10
   bool m_bIsHit; // 0xF10 - 0xF11
   unsigned char pad_F11[0x3]; // 0xF11 - 0xF14
   float m_flTimeCreated; // 0xF14 - 0xF18
   Vector m_vecStartPos; // 0xF18 - 0xF24
   unsigned char pad_F24[0x4]; // 0xF24 - 0xF28
}; // size - 0xF28


class C_C4 /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   char m_szScreenText[32]; // 0x1A70 - 0x1A90
   ParticleIndex_t m_activeLightParticleIndex; // 0x1A90 - 0x1A94
   C4LightEffect_t m_eActiveLightEffect; // 0x1A94 - 0x1A98
   bool m_bStartedArming; // 0x1A98 - 0x1A99
   unsigned char pad_1A99[0x3]; // 0x1A99 - 0x1A9C
   GameTime_t m_fArmedTime; // 0x1A9C - 0x1AA0
   bool m_bBombPlacedAnimation; // 0x1AA0 - 0x1AA1
   bool m_bIsPlantingViaUse; // 0x1AA1 - 0x1AA2
   unsigned char pad_1AA2[0x6]; // 0x1AA2 - 0x1AA8
   EntitySpottedState_t m_entitySpottedState; // 0x1AA8 - 0x1AC0
   int32_t m_nSpotRules; // 0x1AC0 - 0x1AC4
   bool m_bPlayedArmingBeeps[7]; // 0x1AC4 - 0x1ACB
   bool m_bBombPlanted; // 0x1ACB - 0x1ACC
   unsigned char pad_1ACC[0x4]; // 0x1ACC - 0x1AD0
}; // size - 0x1AD0


class C_CSGOViewModel /* "client" */ : public C_PredictedViewModel /* "client" */
{
public:
   bool m_bShouldIgnoreOffsetAndAccuracy; // 0xF68 - 0xF69
   unsigned char pad_F69[0x3]; // 0xF69 - 0xF6C
   uint32_t m_nWeaponParity; // 0xF6C - 0xF70
   uint32_t m_nOldWeaponParity; // 0xF70 - 0xF74
   CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0xF74 - 0xF78
   bool m_bNeedToQueueHighResComposite; // 0xF78 - 0xF79
   unsigned char pad_F79[0x63]; // 0xF79 - 0xFDC
   QAngle m_vLoweredWeaponOffset; // 0xFDC - 0xFE8
}; // size - 0xFE8


class C_CSGO_CounterTerroristTeamIntroCamera /* "client" */ : public C_CSGO_TeamPreviewCamera /* "client" */
{
public:
   unsigned char pad_0[0x5D0]; // 0x0 - 0x5D0
}; // size - 0x5D0


class C_CSGO_CounterTerroristWingmanIntroCamera /* "client" */ : public C_CSGO_TeamPreviewCamera /* "client" */
{
public:
   unsigned char pad_0[0x5D0]; // 0x0 - 0x5D0
}; // size - 0x5D0


class C_CSGO_EndOfMatchCamera /* "client" */ : public C_CSGO_TeamPreviewCamera /* "client" */
{
public:
   unsigned char pad_0[0x5D0]; // 0x0 - 0x5D0
}; // size - 0x5D0


class C_CSGO_EndOfMatchCharacterPosition /* "client" */ : public C_CSGO_TeamPreviewCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class C_CSGO_EndOfMatchLineupEnd /* "client" */ : public C_CSGO_EndOfMatchLineupEndpoint /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class C_CSGO_EndOfMatchLineupStart /* "client" */ : public C_CSGO_EndOfMatchLineupEndpoint /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class C_CSGO_PreviewModelAlias_csgo_item_previewmodel /* "client" */ : public C_CSGO_PreviewModel /* "client" */
{
public:
   unsigned char pad_0[0x1590]; // 0x0 - 0x1590
}; // size - 0x1590


class C_CSGO_PreviewModel_GraphController /* "client" */ : public CAnimGraphControllerBase /* "client" */
{
public:
   CAnimGraphParamOptionalRef< char* > m_pszCharacterMode; // 0x18 - 0x38
   CAnimGraphParamOptionalRef< char* > m_pszWeaponState; // 0x38 - 0x58
   CAnimGraphParamOptionalRef< char* > m_pszWeaponType; // 0x58 - 0x78
   CAnimGraphParamOptionalRef< char* > m_pszEndOfMatchCelebration; // 0x78 - 0x98
}; // size - 0x98


class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel /* "client" */ : public C_CSGO_PreviewPlayer /* "client" */
{
public:
   unsigned char pad_0[0x24B0]; // 0x0 - 0x24B0
}; // size - 0x24B0


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


class C_CSGO_TeamIntroCounterTerroristPosition /* "client" */ : public C_CSGO_TeamIntroCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class C_CSGO_TeamIntroTerroristPosition /* "client" */ : public C_CSGO_TeamIntroCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class C_CSGO_TeamPreviewModel /* "client" */ : public C_CSGO_PreviewPlayer /* "client" */
{
public:
   unsigned char pad_0[0x24B0]; // 0x0 - 0x24B0
}; // size - 0x24B0


class C_CSGO_TeamSelectCamera /* "client" */ : public C_CSGO_TeamPreviewCamera /* "client" */
{
public:
   unsigned char pad_0[0x5D0]; // 0x0 - 0x5D0
}; // size - 0x5D0


class C_CSGO_TeamSelectCounterTerroristPosition /* "client" */ : public C_CSGO_TeamSelectCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class C_CSGO_TeamSelectTerroristPosition /* "client" */ : public C_CSGO_TeamSelectCharacterPosition /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class C_CSGO_TerroristTeamIntroCamera /* "client" */ : public C_CSGO_TeamPreviewCamera /* "client" */
{
public:
   unsigned char pad_0[0x5D0]; // 0x0 - 0x5D0
}; // size - 0x5D0


class C_CSGO_TerroristWingmanIntroCamera /* "client" */ : public C_CSGO_TeamPreviewCamera /* "client" */
{
public:
   unsigned char pad_0[0x5D0]; // 0x0 - 0x5D0
}; // size - 0x5D0


class C_CSGameRules /* "client" */ : public C_TeamplayRules /* "client" */
{
public:
   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   bool m_bFreezePeriod; // 0x30 - 0x31
   bool m_bWarmupPeriod; // 0x31 - 0x32
   unsigned char pad_32[0x2]; // 0x32 - 0x34
   GameTime_t m_fWarmupPeriodEnd; // 0x34 - 0x38
   GameTime_t m_fWarmupPeriodStart; // 0x38 - 0x3C
   int32_t m_nTotalPausedTicks; // 0x3C - 0x40
   int32_t m_nPauseStartTick; // 0x40 - 0x44
   bool m_bServerPaused; // 0x44 - 0x45
   bool m_bGamePaused; // 0x45 - 0x46
   bool m_bTerroristTimeOutActive; // 0x46 - 0x47
   bool m_bCTTimeOutActive; // 0x47 - 0x48
   float m_flTerroristTimeOutRemaining; // 0x48 - 0x4C
   float m_flCTTimeOutRemaining; // 0x4C - 0x50
   int32_t m_nTerroristTimeOuts; // 0x50 - 0x54
   int32_t m_nCTTimeOuts; // 0x54 - 0x58
   bool m_bTechnicalTimeOut; // 0x58 - 0x59
   bool m_bMatchWaitingForResume; // 0x59 - 0x5A
   unsigned char pad_5A[0x2]; // 0x5A - 0x5C
   int32_t m_iRoundTime; // 0x5C - 0x60
   float m_fMatchStartTime; // 0x60 - 0x64
   GameTime_t m_fRoundStartTime; // 0x64 - 0x68
   GameTime_t m_flRestartRoundTime; // 0x68 - 0x6C
   bool m_bGameRestart; // 0x6C - 0x6D
   unsigned char pad_6D[0x3]; // 0x6D - 0x70
   float m_flGameStartTime; // 0x70 - 0x74
   float m_timeUntilNextPhaseStarts; // 0x74 - 0x78
   int32_t m_gamePhase; // 0x78 - 0x7C
   int32_t m_totalRoundsPlayed; // 0x7C - 0x80
   int32_t m_nRoundsPlayedThisPhase; // 0x80 - 0x84
   int32_t m_nOvertimePlaying; // 0x84 - 0x88
   int32_t m_iHostagesRemaining; // 0x88 - 0x8C
   bool m_bAnyHostageReached; // 0x8C - 0x8D
   bool m_bMapHasBombTarget; // 0x8D - 0x8E
   bool m_bMapHasRescueZone; // 0x8E - 0x8F
   bool m_bMapHasBuyZone; // 0x8F - 0x90
   bool m_bIsQueuedMatchmaking; // 0x90 - 0x91
   unsigned char pad_91[0x3]; // 0x91 - 0x94
   int32_t m_nQueuedMatchmakingMode; // 0x94 - 0x98
   bool m_bIsValveDS; // 0x98 - 0x99
   bool m_bLogoMap; // 0x99 - 0x9A
   bool m_bPlayAllStepSoundsOnServer; // 0x9A - 0x9B
   unsigned char pad_9B[0x1]; // 0x9B - 0x9C
   int32_t m_iSpectatorSlotCount; // 0x9C - 0xA0
   int32_t m_MatchDevice; // 0xA0 - 0xA4
   bool m_bHasMatchStarted; // 0xA4 - 0xA5
   unsigned char pad_A5[0x3]; // 0xA5 - 0xA8
   int32_t m_nNextMapInMapgroup; // 0xA8 - 0xAC
   char m_szTournamentEventName[512]; // 0xAC - 0x2AC
   char m_szTournamentEventStage[512]; // 0x2AC - 0x4AC
   char m_szMatchStatTxt[512]; // 0x4AC - 0x6AC
   char m_szTournamentPredictionsTxt[512]; // 0x6AC - 0x8AC
   int32_t m_nTournamentPredictionsPct; // 0x8AC - 0x8B0
   GameTime_t m_flCMMItemDropRevealStartTime; // 0x8B0 - 0x8B4
   GameTime_t m_flCMMItemDropRevealEndTime; // 0x8B4 - 0x8B8
   bool m_bIsDroppingItems; // 0x8B8 - 0x8B9
   bool m_bIsQuestEligible; // 0x8B9 - 0x8BA
   bool m_bIsHltvActive; // 0x8BA - 0x8BB
   unsigned char pad_8BB[0x1]; // 0x8BB - 0x8BC
   int32_t m_nGuardianModeWaveNumber; // 0x8BC - 0x8C0
   int32_t m_nGuardianModeSpecialKillsRemaining; // 0x8C0 - 0x8C4
   int32_t m_nGuardianModeSpecialWeaponNeeded; // 0x8C4 - 0x8C8
   int32_t m_nGuardianGrenadesToGiveBots; // 0x8C8 - 0x8CC
   int32_t m_nNumHeaviesToSpawn; // 0x8CC - 0x8D0
   uint32_t m_numGlobalGiftsGiven; // 0x8D0 - 0x8D4
   uint32_t m_numGlobalGifters; // 0x8D4 - 0x8D8
   uint32_t m_numGlobalGiftsPeriodSeconds; // 0x8D8 - 0x8DC
   uint32 m_arrFeaturedGiftersAccounts[4]; // 0x8DC - 0x8EC
   uint32 m_arrFeaturedGiftersGifts[4]; // 0x8EC - 0x8FC
   uint16 m_arrProhibitedItemIndices[100]; // 0x8FC - 0x9C4
   uint32 m_arrTournamentActiveCasterAccounts[4]; // 0x9C4 - 0x9D4
   int32_t m_numBestOfMaps; // 0x9D4 - 0x9D8
   int32_t m_nHalloweenMaskListSeed; // 0x9D8 - 0x9DC
   bool m_bBombDropped; // 0x9DC - 0x9DD
   bool m_bBombPlanted; // 0x9DD - 0x9DE
   unsigned char pad_9DE[0x2]; // 0x9DE - 0x9E0
   int32_t m_iRoundWinStatus; // 0x9E0 - 0x9E4
   int32_t m_eRoundWinReason; // 0x9E4 - 0x9E8
   bool m_bTCantBuy; // 0x9E8 - 0x9E9
   bool m_bCTCantBuy; // 0x9E9 - 0x9EA
   unsigned char pad_9EA[0x2]; // 0x9EA - 0x9EC
   GameTime_t m_flGuardianBuyUntilTime; // 0x9EC - 0x9F0
   int32 m_iMatchStats_RoundResults[30]; // 0x9F0 - 0xA68
   int32 m_iMatchStats_PlayersAlive_CT[30]; // 0xA68 - 0xAE0
   int32 m_iMatchStats_PlayersAlive_T[30]; // 0xAE0 - 0xB58
   float32 m_TeamRespawnWaveTimes[32]; // 0xB58 - 0xBD8
   GameTime_t m_flNextRespawnWave[32]; // 0xBD8 - 0xC58
   int32_t m_nServerQuestID; // 0xC58 - 0xC5C
   Vector m_vMinimapMins; // 0xC5C - 0xC68
   Vector m_vMinimapMaxs; // 0xC68 - 0xC74
   float32 m_MinimapVerticalSectionHeights[8]; // 0xC74 - 0xC94
   bool m_bDontIncrementCoopWave; // 0xC94 - 0xC95
   bool m_bSpawnedTerrorHuntHeavy; // 0xC95 - 0xC96
   unsigned char pad_C96[0x2]; // 0xC96 - 0xC98
   int32 m_nEndMatchMapGroupVoteTypes[10]; // 0xC98 - 0xCC0
   int32 m_nEndMatchMapGroupVoteOptions[10]; // 0xCC0 - 0xCE8
   int32_t m_nEndMatchMapVoteWinner; // 0xCE8 - 0xCEC
   int32_t m_iNumConsecutiveCTLoses; // 0xCEC - 0xCF0
   int32_t m_iNumConsecutiveTerroristLoses; // 0xCF0 - 0xCF4
   unsigned char pad_CF4[0x1C]; // 0xCF4 - 0xD10
   bool m_bMarkClientStopRecordAtRoundEnd; // 0xD10 - 0xD11
   unsigned char pad_D11[0x57]; // 0xD11 - 0xD68
   int32_t m_nMatchAbortedEarlyReason; // 0xD68 - 0xD6C
   bool m_bHasTriggeredRoundStartMusic; // 0xD6C - 0xD6D
   bool m_bHasTriggeredCoopSpawnReset; // 0xD6D - 0xD6E
   bool m_bSwitchingTeamsAtRoundReset; // 0xD6E - 0xD6F
   unsigned char pad_D6F[0x19]; // 0xD6F - 0xD88
   CCSGameModeRules* m_pGameModeRules; // 0xD88 - 0xD90
   C_RetakeGameRules m_RetakeRules; // 0xD90 - 0xEA8
   uint8_t m_nMatchEndCount; // 0xEA8 - 0xEA9
   unsigned char pad_EA9[0x3]; // 0xEA9 - 0xEAC
   int32_t m_nTTeamIntroVariant; // 0xEAC - 0xEB0
   int32_t m_nCTTeamIntroVariant; // 0xEB0 - 0xEB4
   bool m_bTeamIntroPeriod; // 0xEB4 - 0xEB5
   unsigned char pad_EB5[0x3]; // 0xEB5 - 0xEB8
   int32_t m_iRoundEndWinnerTeam; // 0xEB8 - 0xEBC
   int32_t m_eRoundEndReason; // 0xEBC - 0xEC0
   bool m_bRoundEndShowTimerDefend; // 0xEC0 - 0xEC1
   unsigned char pad_EC1[0x3]; // 0xEC1 - 0xEC4
   int32_t m_iRoundEndTimerTime; // 0xEC4 - 0xEC8
   CUtlString m_sRoundEndFunFactToken; // 0xEC8 - 0xED0
   CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0xED0 - 0xED4
   int32_t m_iRoundEndFunFactData1; // 0xED4 - 0xED8
   int32_t m_iRoundEndFunFactData2; // 0xED8 - 0xEDC
   int32_t m_iRoundEndFunFactData3; // 0xEDC - 0xEE0
   CUtlString m_sRoundEndMessage; // 0xEE0 - 0xEE8
   int32_t m_iRoundEndPlayerCount; // 0xEE8 - 0xEEC
   bool m_bRoundEndNoMusic; // 0xEEC - 0xEED
   unsigned char pad_EED[0x3]; // 0xEED - 0xEF0
   int32_t m_iRoundEndLegacy; // 0xEF0 - 0xEF4
   uint8_t m_nRoundEndCount; // 0xEF4 - 0xEF5
   unsigned char pad_EF5[0x3]; // 0xEF5 - 0xEF8
   int32_t m_iRoundStartRoundNumber; // 0xEF8 - 0xEFC
   uint8_t m_nRoundStartCount; // 0xEFC - 0xEFD
   unsigned char pad_EFD[0x400B]; // 0xEFD - 0x4F08
   float64 m_flLastPerfSampleTime; // 0x4F08 - 0x4F10
   unsigned char pad_4F10[0x4008]; // 0x4F10 - 0x8F18
}; // size - 0x8F18


class C_CSGameRulesProxy /* "client" */ : public C_GameRulesProxy /* "client" */
{
public:
   C_CSGameRules* m_pGameRules; // 0x550 - 0x558
}; // size - 0x558


class C_CSMinimapBoundary /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class C_CSObserverPawn /* "client" */ : public C_CSPlayerPawnBase /* "client" */
{
public:
   CEntityHandle m_hDetectParentChange; // 0x1718 - 0x171C
   unsigned char pad_171C[0x4]; // 0x171C - 0x1720
}; // size - 0x1720


class C_CSPlayerResource /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   bool m_bHostageAlive[12]; // 0x550 - 0x55C
   bool m_isHostageFollowingSomeone[12]; // 0x55C - 0x568
   CEntityIndex m_iHostageEntityIDs[12]; // 0x568 - 0x598
   Vector m_bombsiteCenterA; // 0x598 - 0x5A4
   Vector m_bombsiteCenterB; // 0x5A4 - 0x5B0
   int32 m_hostageRescueX[4]; // 0x5B0 - 0x5C0
   int32 m_hostageRescueY[4]; // 0x5C0 - 0x5D0
   int32 m_hostageRescueZ[4]; // 0x5D0 - 0x5E0
   bool m_bEndMatchNextMapAllVoted; // 0x5E0 - 0x5E1
   bool m_foundGoalPositions; // 0x5E1 - 0x5E2
   unsigned char pad_5E2[0x6]; // 0x5E2 - 0x5E8
}; // size - 0x5E8


class C_CSTeam /* "client" */ : public C_Team /* "client" */
{
public:
   char m_szTeamMatchStat[512]; // 0x608 - 0x808
   int32_t m_numMapVictories; // 0x808 - 0x80C
   bool m_bSurrendered; // 0x80C - 0x80D
   unsigned char pad_80D[0x3]; // 0x80D - 0x810
   int32_t m_scoreFirstHalf; // 0x810 - 0x814
   int32_t m_scoreSecondHalf; // 0x814 - 0x818
   int32_t m_scoreOvertime; // 0x818 - 0x81C
   char m_szClanTeamname[129]; // 0x81C - 0x89D
   unsigned char pad_89D[0x3]; // 0x89D - 0x8A0
   uint32_t m_iClanID; // 0x8A0 - 0x8A4
   char m_szTeamFlagImage[8]; // 0x8A4 - 0x8AC
   char m_szTeamLogoImage[8]; // 0x8AC - 0x8B4
   unsigned char pad_8B4[0x4]; // 0x8B4 - 0x8B8
}; // size - 0x8B8


class C_Chicken /* "client" */ : public C_DynamicProp /* "client" */
{
public:
   unsigned char pad_1140[0x8]; // 0x1140 - 0x1148
   CHandle< CBaseAnimGraph > m_hHolidayHatAddon; // 0x1148 - 0x114C
   bool m_jumpedThisFrame; // 0x114C - 0x114D
   unsigned char pad_114D[0x3]; // 0x114D - 0x1150
   CHandle< C_CSPlayerPawn > m_leader; // 0x1150 - 0x1154
   unsigned char pad_1154[0x4]; // 0x1154 - 0x1158
   C_AttributeContainer m_AttributeManager; // 0x1158 - 0x1600
   uint32_t m_OriginalOwnerXuidLow; // 0x1600 - 0x1604
   uint32_t m_OriginalOwnerXuidHigh; // 0x1604 - 0x1608
   bool m_bAttributesInitialized; // 0x1608 - 0x1609
   unsigned char pad_1609[0x3]; // 0x1609 - 0x160C
   ParticleIndex_t m_hWaterWakeParticles; // 0x160C - 0x1610
}; // size - 0x1610


class C_ClientRagdoll /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   bool m_bFadeOut; // 0xED8 - 0xED9
   bool m_bImportant; // 0xED9 - 0xEDA
   unsigned char pad_EDA[0x2]; // 0xEDA - 0xEDC
   GameTime_t m_flEffectTime; // 0xEDC - 0xEE0
   GameTime_t m_gibDespawnTime; // 0xEE0 - 0xEE4
   int32_t m_iCurrentFriction; // 0xEE4 - 0xEE8
   int32_t m_iMinFriction; // 0xEE8 - 0xEEC
   int32_t m_iMaxFriction; // 0xEEC - 0xEF0
   int32_t m_iFrictionAnimState; // 0xEF0 - 0xEF4
   bool m_bReleaseRagdoll; // 0xEF4 - 0xEF5
   AttachmentHandle_t m_iEyeAttachment; // 0xEF5 - 0xEF6
   bool m_bFadingOut; // 0xEF6 - 0xEF7
   unsigned char pad_EF7[0x1]; // 0xEF7 - 0xEF8
   float32 m_flScaleEnd[10]; // 0xEF8 - 0xF20
   GameTime_t m_flScaleTimeStart[10]; // 0xF20 - 0xF48
   GameTime_t m_flScaleTimeEnd[10]; // 0xF48 - 0xF70
}; // size - 0xF70


class C_ColorCorrectionVolume /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   float m_LastEnterWeight; // 0xCD8 - 0xCDC
   float m_LastEnterTime; // 0xCDC - 0xCE0
   float m_LastExitWeight; // 0xCE0 - 0xCE4
   float m_LastExitTime; // 0xCE4 - 0xCE8
   bool m_bEnabled; // 0xCE8 - 0xCE9
   unsigned char pad_CE9[0x3]; // 0xCE9 - 0xCEC
   float m_MaxWeight; // 0xCEC - 0xCF0
   float m_FadeDuration; // 0xCF0 - 0xCF4
   float m_Weight; // 0xCF4 - 0xCF8
   char m_lookupFilename[512]; // 0xCF8 - 0xEF8
   unsigned char pad_EF8[0x8]; // 0xEF8 - 0xF00
}; // size - 0xF00


class C_CommandContext /* "client" */
{
public:
   bool needsprocessing; // 0x0 - 0x1
   unsigned char pad_1[0x8F]; // 0x1 - 0x90
   int32_t command_number; // 0x90 - 0x94
   unsigned char pad_94[0x4]; // 0x94 - 0x98
}; // size - 0x98


class C_CsmFovOverride /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   CUtlString m_cameraName; // 0x550 - 0x558
   float m_flCsmFovOverrideValue; // 0x558 - 0x55C
   unsigned char pad_55C[0x4]; // 0x55C - 0x560
}; // size - 0x560


class C_DecoyGrenade /* "client" */ : public C_BaseCSGrenade /* "client" */
{
public:
   unsigned char pad_0[0x1AA0]; // 0x0 - 0x1AA0
}; // size - 0x1AA0


class C_DecoyProjectile /* "client" */ : public C_BaseCSGrenadeProjectile /* "client" */
{
public:
   int32_t m_nDecoyShotTick; // 0x1158 - 0x115C
   int32_t m_nClientLastKnownDecoyShotTick; // 0x115C - 0x1160
   unsigned char pad_1160[0x20]; // 0x1160 - 0x1180
   GameTime_t m_flTimeParticleEffectSpawn; // 0x1180 - 0x1184
   unsigned char pad_1184[0x4]; // 0x1184 - 0x1188
}; // size - 0x1188


class C_DynamicLight /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   uint8_t m_Flags; // 0xCD0 - 0xCD1
   uint8_t m_LightStyle; // 0xCD1 - 0xCD2
   unsigned char pad_CD2[0x2]; // 0xCD2 - 0xCD4
   float m_Radius; // 0xCD4 - 0xCD8
   int32_t m_Exponent; // 0xCD8 - 0xCDC
   float m_InnerAngle; // 0xCDC - 0xCE0
   float m_OuterAngle; // 0xCE0 - 0xCE4
   float m_SpotRadius; // 0xCE4 - 0xCE8
   unsigned char pad_CE8[0x10]; // 0xCE8 - 0xCF8
}; // size - 0xCF8


class C_DynamicPropAlias_cable_dynamic /* "client" */ : public C_DynamicProp /* "client" */
{
public:
   unsigned char pad_0[0x1140]; // 0x0 - 0x1140
}; // size - 0x1140


class C_DynamicPropAlias_dynamic_prop /* "client" */ : public C_DynamicProp /* "client" */
{
public:
   unsigned char pad_0[0x1140]; // 0x0 - 0x1140
}; // size - 0x1140


class C_DynamicPropAlias_prop_dynamic_override /* "client" */ : public C_DynamicProp /* "client" */
{
public:
   unsigned char pad_0[0x1140]; // 0x0 - 0x1140
}; // size - 0x1140



class C_EconItemView /* "client" */ : public IEconItemInterface /* "client" */
{
public:
   unsigned char pad_8[0x58]; // 0x8 - 0x60
   bool m_bInventoryImageRgbaRequested; // 0x60 - 0x61
   bool m_bInventoryImageTriedCache; // 0x61 - 0x62
   unsigned char pad_62[0x1E]; // 0x62 - 0x80
   int32_t m_nInventoryImageRgbaWidth; // 0x80 - 0x84
   int32_t m_nInventoryImageRgbaHeight; // 0x84 - 0x88
   char m_szCurrentLoadCachedFileName[260]; // 0x88 - 0x18C
   unsigned char pad_18C[0x2C]; // 0x18C - 0x1B8
   bool m_bRestoreCustomMaterialAfterPrecache; // 0x1B8 - 0x1B9
   unsigned char pad_1B9[0x1]; // 0x1B9 - 0x1BA
   uint16_t m_iItemDefinitionIndex; // 0x1BA - 0x1BC
   int32_t m_iEntityQuality; // 0x1BC - 0x1C0
   uint32_t m_iEntityLevel; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   uint64_t m_iItemID; // 0x1C8 - 0x1D0
   uint32_t m_iItemIDHigh; // 0x1D0 - 0x1D4
   uint32_t m_iItemIDLow; // 0x1D4 - 0x1D8
   uint32_t m_iAccountID; // 0x1D8 - 0x1DC
   uint32_t m_iInventoryPosition; // 0x1DC - 0x1E0
   unsigned char pad_1E0[0x8]; // 0x1E0 - 0x1E8
   bool m_bInitialized; // 0x1E8 - 0x1E9
   bool m_bDisallowSOC; // 0x1E9 - 0x1EA
   bool m_bIsStoreItem; // 0x1EA - 0x1EB
   bool m_bIsTradeItem; // 0x1EB - 0x1EC
   int32_t m_iEntityQuantity; // 0x1EC - 0x1F0
   int32_t m_iRarityOverride; // 0x1F0 - 0x1F4
   int32_t m_iQualityOverride; // 0x1F4 - 0x1F8
   uint8_t m_unClientFlags; // 0x1F8 - 0x1F9
   uint8_t m_unOverrideStyle; // 0x1F9 - 0x1FA
   unsigned char pad_1FA[0x16]; // 0x1FA - 0x210
   CAttributeList m_AttributeList; // 0x210 - 0x270
   CAttributeList m_NetworkedDynamicAttributes; // 0x270 - 0x2D0
   char m_szCustomName[161]; // 0x2D0 - 0x371
   char m_szCustomNameOverride[161]; // 0x371 - 0x412
   unsigned char pad_412[0x2E]; // 0x412 - 0x440
   bool m_bInitializedTags; // 0x440 - 0x441
   unsigned char pad_441[0x7]; // 0x441 - 0x448
}; // size - 0x448


class C_EconWearable /* "client" */ : public C_EconEntity /* "client" */
{
public:
   int32_t m_nForceSkin; // 0x15B8 - 0x15BC
   bool m_bAlwaysAllow; // 0x15BC - 0x15BD
   unsigned char pad_15BD[0x3]; // 0x15BD - 0x15C0
}; // size - 0x15C0


class C_EnvCombinedLightProbeVolume /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_550[0x1058]; // 0x550 - 0x15A8
   Color m_Color; // 0x15A8 - 0x15AC
   float m_flBrightness; // 0x15AC - 0x15B0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hCubemapTexture; // 0x15B0 - 0x15B8
   bool m_bCustomCubemapTexture; // 0x15B8 - 0x15B9
   unsigned char pad_15B9[0x7]; // 0x15B9 - 0x15C0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x15C0 - 0x15C8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x15C8 - 0x15D0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x15D0 - 0x15D8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x15D8 - 0x15E0
   Vector m_vBoxMins; // 0x15E0 - 0x15EC
   Vector m_vBoxMaxs; // 0x15EC - 0x15F8
   bool m_bMoveable; // 0x15F8 - 0x15F9
   unsigned char pad_15F9[0x3]; // 0x15F9 - 0x15FC
   int32_t m_nHandshake; // 0x15FC - 0x1600
   int32_t m_nEnvCubeMapArrayIndex; // 0x1600 - 0x1604
   int32_t m_nPriority; // 0x1604 - 0x1608
   bool m_bStartDisabled; // 0x1608 - 0x1609
   unsigned char pad_1609[0x3]; // 0x1609 - 0x160C
   float m_flEdgeFadeDist; // 0x160C - 0x1610
   Vector m_vEdgeFadeDists; // 0x1610 - 0x161C
   int32_t m_nLightProbeSizeX; // 0x161C - 0x1620
   int32_t m_nLightProbeSizeY; // 0x1620 - 0x1624
   int32_t m_nLightProbeSizeZ; // 0x1624 - 0x1628
   int32_t m_nLightProbeAtlasX; // 0x1628 - 0x162C
   int32_t m_nLightProbeAtlasY; // 0x162C - 0x1630
   int32_t m_nLightProbeAtlasZ; // 0x1630 - 0x1634
   unsigned char pad_1634[0x15]; // 0x1634 - 0x1649
   bool m_bEnabled; // 0x1649 - 0x164A
   unsigned char pad_164A[0x6]; // 0x164A - 0x1650
}; // size - 0x1650


class C_EnvCubemapBox /* "client" */ : public C_EnvCubemap /* "client" */
{
public:
   unsigned char pad_0[0x638]; // 0x0 - 0x638
}; // size - 0x638


class C_EnvCubemapFog /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   float m_flEndDistance; // 0x550 - 0x554
   float m_flStartDistance; // 0x554 - 0x558
   float m_flFogFalloffExponent; // 0x558 - 0x55C
   bool m_bHeightFogEnabled; // 0x55C - 0x55D
   unsigned char pad_55D[0x3]; // 0x55D - 0x560
   float m_flFogHeightWidth; // 0x560 - 0x564
   float m_flFogHeightEnd; // 0x564 - 0x568
   float m_flFogHeightStart; // 0x568 - 0x56C
   float m_flFogHeightExponent; // 0x56C - 0x570
   float m_flLODBias; // 0x570 - 0x574
   bool m_bActive; // 0x574 - 0x575
   bool m_bStartDisabled; // 0x575 - 0x576
   unsigned char pad_576[0x2]; // 0x576 - 0x578
   float m_flFogMaxOpacity; // 0x578 - 0x57C
   int32_t m_nCubemapSourceType; // 0x57C - 0x580
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x580 - 0x588
   CUtlSymbolLarge m_iszSkyEntity; // 0x588 - 0x590
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x590 - 0x598
   bool m_bHasHeightFogEnd; // 0x598 - 0x599
   bool m_bFirstTime; // 0x599 - 0x59A
   unsigned char pad_59A[0x6]; // 0x59A - 0x5A0
}; // size - 0x5A0


class C_EnvDecal /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0xCD0 - 0xCD8
   float m_flWidth; // 0xCD8 - 0xCDC
   float m_flHeight; // 0xCDC - 0xCE0
   float m_flDepth; // 0xCE0 - 0xCE4
   uint32_t m_nRenderOrder; // 0xCE4 - 0xCE8
   bool m_bProjectOnWorld; // 0xCE8 - 0xCE9
   bool m_bProjectOnCharacters; // 0xCE9 - 0xCEA
   bool m_bProjectOnWater; // 0xCEA - 0xCEB
   unsigned char pad_CEB[0x1]; // 0xCEB - 0xCEC
   float m_flDepthSortBias; // 0xCEC - 0xCF0
   unsigned char pad_CF0[0x18]; // 0xCF0 - 0xD08
}; // size - 0xD08


class C_EnvDetailController /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   float m_flFadeStartDist; // 0x550 - 0x554
   float m_flFadeEndDist; // 0x554 - 0x558
}; // size - 0x558


class C_EnvLightProbeVolume /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_550[0xFD8]; // 0x550 - 0x1528
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeTexture; // 0x1528 - 0x1530
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightIndicesTexture; // 0x1530 - 0x1538
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightScalarsTexture; // 0x1538 - 0x1540
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightProbeDirectLightShadowsTexture; // 0x1540 - 0x1548
   Vector m_vBoxMins; // 0x1548 - 0x1554
   Vector m_vBoxMaxs; // 0x1554 - 0x1560
   bool m_bMoveable; // 0x1560 - 0x1561
   unsigned char pad_1561[0x3]; // 0x1561 - 0x1564
   int32_t m_nHandshake; // 0x1564 - 0x1568
   int32_t m_nPriority; // 0x1568 - 0x156C
   bool m_bStartDisabled; // 0x156C - 0x156D
   unsigned char pad_156D[0x3]; // 0x156D - 0x1570
   int32_t m_nLightProbeSizeX; // 0x1570 - 0x1574
   int32_t m_nLightProbeSizeY; // 0x1574 - 0x1578
   int32_t m_nLightProbeSizeZ; // 0x1578 - 0x157C
   int32_t m_nLightProbeAtlasX; // 0x157C - 0x1580
   int32_t m_nLightProbeAtlasY; // 0x1580 - 0x1584
   int32_t m_nLightProbeAtlasZ; // 0x1584 - 0x1588
   unsigned char pad_1588[0x9]; // 0x1588 - 0x1591
   bool m_bEnabled; // 0x1591 - 0x1592
   unsigned char pad_1592[0x6]; // 0x1592 - 0x1598
}; // size - 0x1598


class C_EnvScreenOverlay /* "client" */ : public C_PointEntity /* "client" */
{
public:
   CUtlSymbolLarge m_iszOverlayNames[10]; // 0x550 - 0x5A0
   float32 m_flOverlayTimes[10]; // 0x5A0 - 0x5C8
   GameTime_t m_flStartTime; // 0x5C8 - 0x5CC
   int32_t m_iDesiredOverlay; // 0x5CC - 0x5D0
   bool m_bIsActive; // 0x5D0 - 0x5D1
   bool m_bWasActive; // 0x5D1 - 0x5D2
   unsigned char pad_5D2[0x2]; // 0x5D2 - 0x5D4
   int32_t m_iCachedDesiredOverlay; // 0x5D4 - 0x5D8
   int32_t m_iCurrentOverlay; // 0x5D8 - 0x5DC
   GameTime_t m_flCurrentOverlayTime; // 0x5DC - 0x5E0
}; // size - 0x5E0


class C_EnvSky /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0xCD0 - 0xCD8
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // 0xCD8 - 0xCE0
   bool m_bStartDisabled; // 0xCE0 - 0xCE1
   Color m_vTintColor; // 0xCE1 - 0xCE5
   Color m_vTintColorLightingOnly; // 0xCE5 - 0xCE9
   unsigned char pad_CE9[0x3]; // 0xCE9 - 0xCEC
   float m_flBrightnessScale; // 0xCEC - 0xCF0
   int32_t m_nFogType; // 0xCF0 - 0xCF4
   float m_flFogMinStart; // 0xCF4 - 0xCF8
   float m_flFogMinEnd; // 0xCF8 - 0xCFC
   float m_flFogMaxStart; // 0xCFC - 0xD00
   float m_flFogMaxEnd; // 0xD00 - 0xD04
   bool m_bEnabled; // 0xD04 - 0xD05
   unsigned char pad_D05[0x2B]; // 0xD05 - 0xD30
}; // size - 0xD30


class C_EnvVolumetricFogController /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   float m_flScattering; // 0x550 - 0x554
   float m_flAnisotropy; // 0x554 - 0x558
   float m_flFadeSpeed; // 0x558 - 0x55C
   float m_flDrawDistance; // 0x55C - 0x560
   float m_flFadeInStart; // 0x560 - 0x564
   float m_flFadeInEnd; // 0x564 - 0x568
   float m_flIndirectStrength; // 0x568 - 0x56C
   int32_t m_nIndirectTextureDimX; // 0x56C - 0x570
   int32_t m_nIndirectTextureDimY; // 0x570 - 0x574
   int32_t m_nIndirectTextureDimZ; // 0x574 - 0x578
   Vector m_vBoxMins; // 0x578 - 0x584
   Vector m_vBoxMaxs; // 0x584 - 0x590
   bool m_bActive; // 0x590 - 0x591
   unsigned char pad_591[0x3]; // 0x591 - 0x594
   GameTime_t m_flStartAnisoTime; // 0x594 - 0x598
   GameTime_t m_flStartScatterTime; // 0x598 - 0x59C
   GameTime_t m_flStartDrawDistanceTime; // 0x59C - 0x5A0
   float m_flStartAnisotropy; // 0x5A0 - 0x5A4
   float m_flStartScattering; // 0x5A4 - 0x5A8
   float m_flStartDrawDistance; // 0x5A8 - 0x5AC
   float m_flDefaultAnisotropy; // 0x5AC - 0x5B0
   float m_flDefaultScattering; // 0x5B0 - 0x5B4
   float m_flDefaultDrawDistance; // 0x5B4 - 0x5B8
   bool m_bStartDisabled; // 0x5B8 - 0x5B9
   bool m_bEnableIndirect; // 0x5B9 - 0x5BA
   bool m_bIsMaster; // 0x5BA - 0x5BB
   unsigned char pad_5BB[0x5]; // 0x5BB - 0x5C0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x5C0 - 0x5C8
   int32_t m_nForceRefreshCount; // 0x5C8 - 0x5CC
   bool m_bFirstTime; // 0x5CC - 0x5CD
   unsigned char pad_5CD[0x3]; // 0x5CD - 0x5D0
}; // size - 0x5D0


class C_EnvVolumetricFogVolume /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   bool m_bActive; // 0x550 - 0x551
   unsigned char pad_551[0x3]; // 0x551 - 0x554
   Vector m_vBoxMins; // 0x554 - 0x560
   Vector m_vBoxMaxs; // 0x560 - 0x56C
   bool m_bStartDisabled; // 0x56C - 0x56D
   unsigned char pad_56D[0x3]; // 0x56D - 0x570
   float m_flStrength; // 0x570 - 0x574
   int32_t m_nFalloffShape; // 0x574 - 0x578
   float m_flFalloffExponent; // 0x578 - 0x57C
   unsigned char pad_57C[0x4]; // 0x57C - 0x580
}; // size - 0x580


class C_EnvWind /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   C_EnvWindShared m_EnvWindShared; // 0x550 - 0x758
}; // size - 0x758


class C_EnvWindShared /* "client" */
{
public:
   class WindAveEvent_t /* "client" */
   {
   public:
      float m_flStartWindSpeed; // 0x0 - 0x4
      float m_flAveWindSpeed; // 0x4 - 0x8
   }; // size - 0x8

   class WindVariationEvent_t /* "client" */
   {
   public:
      float m_flWindAngleVariation; // 0x0 - 0x4
      float m_flWindSpeedVariation; // 0x4 - 0x8
   }; // size - 0x8

   unsigned char pad_0[0x8]; // 0x0 - 0x8
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
   unsigned char pad_2A[0x2]; // 0x2A - 0x2C
   Vector m_location; // 0x2C - 0x38
   int32_t m_iszGustSound; // 0x38 - 0x3C
   int32_t m_iWindDir; // 0x3C - 0x40
   float m_flWindSpeed; // 0x40 - 0x44
   Vector m_currentWindVector; // 0x44 - 0x50
   Vector m_CurrentSwayVector; // 0x50 - 0x5C
   Vector m_PrevSwayVector; // 0x5C - 0x68
   uint16_t m_iInitialWindDir; // 0x68 - 0x6A
   unsigned char pad_6A[0x2]; // 0x6A - 0x6C
   float m_flInitialWindSpeed; // 0x6C - 0x70
   GameTime_t m_flVariationTime; // 0x70 - 0x74
   GameTime_t m_flSwayTime; // 0x74 - 0x78
   GameTime_t m_flSimTime; // 0x78 - 0x7C
   GameTime_t m_flSwitchTime; // 0x7C - 0x80
   float m_flAveWindSpeed; // 0x80 - 0x84
   bool m_bGusting; // 0x84 - 0x85
   unsigned char pad_85[0x3]; // 0x85 - 0x88
   float m_flWindAngleVariation; // 0x88 - 0x8C
   float m_flWindSpeedVariation; // 0x8C - 0x90
   CEntityIndex m_iEntIndex; // 0x90 - 0x94
   unsigned char pad_94[0x174]; // 0x94 - 0x208
}; // size - 0x208




class C_FireCrackerBlast /* "client" */ : public C_Inferno /* "client" */
{
public:
   unsigned char pad_0[0x82B0]; // 0x0 - 0x82B0
}; // size - 0x82B0


class C_FireSprite /* "client" */ : public C_Sprite /* "client" */
{
public:
   Vector m_vecMoveDir; // 0xE00 - 0xE0C
   bool m_bFadeFromAbove; // 0xE0C - 0xE0D
   unsigned char pad_E0D[0x3]; // 0xE0D - 0xE10
}; // size - 0xE10


class C_Fish /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   Vector m_pos; // 0xED8 - 0xEE4
   Vector m_vel; // 0xEE4 - 0xEF0
   QAngle m_angles; // 0xEF0 - 0xEFC
   int32_t m_localLifeState; // 0xEFC - 0xF00
   float m_deathDepth; // 0xF00 - 0xF04
   float m_deathAngle; // 0xF04 - 0xF08
   float m_buoyancy; // 0xF08 - 0xF0C
   unsigned char pad_F0C[0x4]; // 0xF0C - 0xF10
   CountdownTimer m_wiggleTimer; // 0xF10 - 0xF28
   float m_wigglePhase; // 0xF28 - 0xF2C
   float m_wiggleRate; // 0xF2C - 0xF30
   Vector m_actualPos; // 0xF30 - 0xF3C
   QAngle m_actualAngles; // 0xF3C - 0xF48
   Vector m_poolOrigin; // 0xF48 - 0xF54
   float m_waterLevel; // 0xF54 - 0xF58
   bool m_gotUpdate; // 0xF58 - 0xF59
   unsigned char pad_F59[0x3]; // 0xF59 - 0xF5C
   float m_x; // 0xF5C - 0xF60
   float m_y; // 0xF60 - 0xF64
   float m_z; // 0xF64 - 0xF68
   float m_angle; // 0xF68 - 0xF6C
   float32 m_errorHistory[20]; // 0xF6C - 0xFBC
   int32_t m_errorHistoryIndex; // 0xFBC - 0xFC0
   int32_t m_errorHistoryCount; // 0xFC0 - 0xFC4
   float m_averageError; // 0xFC4 - 0xFC8
}; // size - 0xFC8


class C_Fists /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   bool m_bPlayingUninterruptableAct; // 0x1A70 - 0x1A71
   unsigned char pad_1A71[0x3]; // 0x1A71 - 0x1A74
   PlayerAnimEvent_t m_nUninterruptableActivity; // 0x1A74 - 0x1A78
   unsigned char pad_1A78[0x8]; // 0x1A78 - 0x1A80
}; // size - 0x1A80


class C_Flashbang /* "client" */ : public C_BaseCSGrenade /* "client" */
{
public:
   unsigned char pad_0[0x1AA0]; // 0x0 - 0x1AA0
}; // size - 0x1AA0


class C_FogController /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   fogparams_t m_fog; // 0x550 - 0x5B8
   bool m_bUseAngles; // 0x5B8 - 0x5B9
   unsigned char pad_5B9[0x3]; // 0x5B9 - 0x5BC
   int32_t m_iChangedVariables; // 0x5BC - 0x5C0
}; // size - 0x5C0


class C_FootstepControl /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   CUtlSymbolLarge m_source; // 0xCD8 - 0xCE0
   CUtlSymbolLarge m_destination; // 0xCE0 - 0xCE8
}; // size - 0xCE8


class C_FuncBrush /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class C_FuncConveyor /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_CD0[0x8]; // 0xCD0 - 0xCD8
   Vector m_vecMoveDirEntitySpace; // 0xCD8 - 0xCE4
   float m_flTargetSpeed; // 0xCE4 - 0xCE8
   GameTick_t m_nTransitionStartTick; // 0xCE8 - 0xCEC
   int32_t m_nTransitionDurationTicks; // 0xCEC - 0xCF0
   float m_flTransitionStartSpeed; // 0xCF0 - 0xCF4
   unsigned char pad_CF4[0x4]; // 0xCF4 - 0xCF8
   C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels; // 0xCF8 - 0xD10
   float m_flCurrentConveyorOffset; // 0xD10 - 0xD14
   float m_flCurrentConveyorSpeed; // 0xD14 - 0xD18
}; // size - 0xD18


class C_FuncLadder /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   Vector m_vecLadderDir; // 0xCD0 - 0xCDC
   unsigned char pad_CDC[0x4]; // 0xCDC - 0xCE0
   CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0xCE0 - 0xCF8
   Vector m_vecLocalTop; // 0xCF8 - 0xD04
   Vector m_vecPlayerMountPositionTop; // 0xD04 - 0xD10
   Vector m_vecPlayerMountPositionBottom; // 0xD10 - 0xD1C
   float m_flAutoRideSpeed; // 0xD1C - 0xD20
   bool m_bDisabled; // 0xD20 - 0xD21
   bool m_bFakeLadder; // 0xD21 - 0xD22
   bool m_bHasSlack; // 0xD22 - 0xD23
   unsigned char pad_D23[0x5]; // 0xD23 - 0xD28
}; // size - 0xD28


class C_FuncMoveLinear /* "client" */ : public C_BaseToggle /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class C_FuncRotating /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class C_FuncTrackTrain /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   int32_t m_nLongAxis; // 0xCD0 - 0xCD4
   float m_flRadius; // 0xCD4 - 0xCD8
   float m_flLineLength; // 0xCD8 - 0xCDC
   unsigned char pad_CDC[0x4]; // 0xCDC - 0xCE0
}; // size - 0xCE0


class C_GradientFog /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x550 - 0x558
   float m_flFogStartDistance; // 0x558 - 0x55C
   float m_flFogEndDistance; // 0x55C - 0x560
   bool m_bHeightFogEnabled; // 0x560 - 0x561
   unsigned char pad_561[0x3]; // 0x561 - 0x564
   float m_flFogStartHeight; // 0x564 - 0x568
   float m_flFogEndHeight; // 0x568 - 0x56C
   float m_flFarZ; // 0x56C - 0x570
   float m_flFogMaxOpacity; // 0x570 - 0x574
   float m_flFogFalloffExponent; // 0x574 - 0x578
   float m_flFogVerticalExponent; // 0x578 - 0x57C
   Color m_fogColor; // 0x57C - 0x580
   float m_flFogStrength; // 0x580 - 0x584
   float m_flFadeTime; // 0x584 - 0x588
   bool m_bStartDisabled; // 0x588 - 0x589
   bool m_bIsEnabled; // 0x589 - 0x58A
   bool m_bGradientFogNeedsTextures; // 0x58A - 0x58B
   unsigned char pad_58B[0x5D]; // 0x58B - 0x5E8
}; // size - 0x5E8


class C_HEGrenade /* "client" */ : public C_BaseCSGrenade /* "client" */
{
public:
   unsigned char pad_0[0x1AA0]; // 0x0 - 0x1AA0
}; // size - 0x1AA0


class C_HandleTest /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   CHandle< C_BaseEntity > m_Handle; // 0x550 - 0x554
   bool m_bSendHandle; // 0x554 - 0x555
   unsigned char pad_555[0x3]; // 0x555 - 0x558
}; // size - 0x558


class C_Hostage /* "client" */ : public C_BaseCombatCharacter /* "client" */
{
public:
   EntitySpottedState_t m_entitySpottedState; // 0x1100 - 0x1118
   CHandle< C_BaseEntity > m_leader; // 0x1118 - 0x111C
   unsigned char pad_111C[0x4]; // 0x111C - 0x1120
   CountdownTimer m_reuseTimer; // 0x1120 - 0x1138
   Vector m_vel; // 0x1138 - 0x1144
   bool m_isRescued; // 0x1144 - 0x1145
   bool m_jumpedThisFrame; // 0x1145 - 0x1146
   unsigned char pad_1146[0x2]; // 0x1146 - 0x1148
   int32_t m_nHostageState; // 0x1148 - 0x114C
   bool m_bHandsHaveBeenCut; // 0x114C - 0x114D
   unsigned char pad_114D[0x3]; // 0x114D - 0x1150
   CHandle< C_CSPlayerPawn > m_hHostageGrabber; // 0x1150 - 0x1154
   GameTime_t m_fLastGrabTime; // 0x1154 - 0x1158
   Vector m_vecGrabbedPos; // 0x1158 - 0x1164
   GameTime_t m_flRescueStartTime; // 0x1164 - 0x1168
   GameTime_t m_flGrabSuccessTime; // 0x1168 - 0x116C
   GameTime_t m_flDropStartTime; // 0x116C - 0x1170
   GameTime_t m_flDeadOrRescuedTime; // 0x1170 - 0x1174
   unsigned char pad_1174[0x4]; // 0x1174 - 0x1178
   CountdownTimer m_blinkTimer; // 0x1178 - 0x1190
   Vector m_lookAt; // 0x1190 - 0x119C
   unsigned char pad_119C[0x4]; // 0x119C - 0x11A0
   CountdownTimer m_lookAroundTimer; // 0x11A0 - 0x11B8
   bool m_isInit; // 0x11B8 - 0x11B9
   AttachmentHandle_t m_eyeAttachment; // 0x11B9 - 0x11BA
   AttachmentHandle_t m_chestAttachment; // 0x11BA - 0x11BB
   unsigned char pad_11BB[0x5]; // 0x11BB - 0x11C0
   CBasePlayerController* m_pPredictionOwner; // 0x11C0 - 0x11C8
   GameTime_t m_fNewestAlphaThinkTime; // 0x11C8 - 0x11CC
   unsigned char pad_11CC[0x4]; // 0x11CC - 0x11D0
}; // size - 0x11D0


class C_HostageCarriableProp /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_0[0xEE0]; // 0x0 - 0xEE0
}; // size - 0xEE0


class C_INIT_AddVectorToVector /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   Vector m_vecScale; // 0x1C0 - 0x1CC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1CC - 0x1D0
   ParticleAttributeIndex_t m_nFieldInput; // 0x1D0 - 0x1D4
   Vector m_vOffsetMin; // 0x1D4 - 0x1E0
   Vector m_vOffsetMax; // 0x1E0 - 0x1EC
   CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1EC - 0x1F4
   unsigned char pad_1F4[0xC]; // 0x1F4 - 0x200
}; // size - 0x200


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
   unsigned char pad_1E4[0xC]; // 0x1E4 - 0x1F0
}; // size - 0x1F0


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
   unsigned char pad_1E1[0xF]; // 0x1E1 - 0x1F0
}; // size - 0x1F0


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
   unsigned char pad_1F4[0xC]; // 0x1F4 - 0x200
}; // size - 0x200


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
   unsigned char pad_328[0x8]; // 0x328 - 0x330
}; // size - 0x330


class C_INIT_CreateFromParentParticles /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flVelocityScale; // 0x1C0 - 0x1C4
   float m_flIncrement; // 0x1C4 - 0x1C8
   bool m_bRandomDistribution; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   int32_t m_nRandomSeed; // 0x1CC - 0x1D0
   bool m_bSubFrame; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0xF]; // 0x1D1 - 0x1E0
}; // size - 0x1E0


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
   unsigned char pad_793[0xD]; // 0x793 - 0x7A0
}; // size - 0x7A0


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
   unsigned char pad_9D7[0x9]; // 0x9D7 - 0x9E0
}; // size - 0x9E0


class C_INIT_CreateOnModel /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleModelInput m_modelInput; // 0x1C0 - 0x220
   CParticleTransformInput m_transformInput; // 0x220 - 0x288
   int32_t m_nForceInModel; // 0x288 - 0x28C
   int32_t m_nDesiredHitbox; // 0x28C - 0x290
   int32_t m_nHitboxValueFromControlPointIndex; // 0x290 - 0x294
   unsigned char pad_294[0x4]; // 0x294 - 0x298
   CParticleCollectionVecInput m_vecHitBoxScale; // 0x298 - 0x8F0
   float m_flBoneVelocity; // 0x8F0 - 0x8F4
   float m_flMaxBoneVelocity; // 0x8F4 - 0x8F8
   CParticleCollectionVecInput m_vecDirectionBias; // 0x8F8 - 0xF50
   char m_HitboxSetName[128]; // 0xF50 - 0xFD0
   bool m_bLocalCoords; // 0xFD0 - 0xFD1
   bool m_bUseBones; // 0xFD1 - 0xFD2
   bool m_bUseMesh; // 0xFD2 - 0xFD3
   unsigned char pad_FD3[0x5]; // 0xFD3 - 0xFD8
   CParticleCollectionFloatInput m_flShellSize; // 0xFD8 - 0x1130
}; // size - 0x1130


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
   unsigned char pad_5D4[0xC]; // 0x5D4 - 0x5E0
}; // size - 0x5E0


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
   unsigned char pad_1AB8[0x8]; // 0x1AB8 - 0x1AC0
}; // size - 0x1AC0


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
   unsigned char pad_318[0x8]; // 0x318 - 0x320
}; // size - 0x320


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
   unsigned char pad_1D4[0xC]; // 0x1D4 - 0x1E0
}; // size - 0x1E0


class C_INIT_InheritVelocity /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   float m_flVelocityScale; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class C_INIT_InitFloat /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CPerParticleFloatInput m_InputValue; // 0x1C0 - 0x318
   ParticleAttributeIndex_t m_nOutputField; // 0x318 - 0x31C
   ParticleSetMethod_t m_nSetMethod; // 0x31C - 0x320
   CPerParticleFloatInput m_InputStrength; // 0x320 - 0x478
   unsigned char pad_478[0x8]; // 0x478 - 0x480
}; // size - 0x480


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
   unsigned char pad_1C4[0x8C]; // 0x1C4 - 0x250
}; // size - 0x250


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
   unsigned char pad_822[0xE]; // 0x822 - 0x830
}; // size - 0x830


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
   unsigned char pad_274[0xC]; // 0x274 - 0x280
}; // size - 0x280


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
   unsigned char pad_1951[0xF]; // 0x1951 - 0x1960
}; // size - 0x1960


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
   unsigned char pad_271[0xF]; // 0x271 - 0x280
}; // size - 0x280


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
   unsigned char pad_1E8[0x8]; // 0x1E8 - 0x1F0
}; // size - 0x1F0


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
   unsigned char pad_321[0xF]; // 0x321 - 0x330
}; // size - 0x330


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
   unsigned char pad_1E8[0x8]; // 0x1E8 - 0x1F0
}; // size - 0x1F0


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
   unsigned char pad_EE4[0xC]; // 0xEE4 - 0xEF0
}; // size - 0xEF0


class C_INIT_PositionOffsetToCP /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumberStart; // 0x1C0 - 0x1C4
   int32_t m_nControlPointNumberEnd; // 0x1C4 - 0x1C8
   bool m_bLocalCoords; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x7]; // 0x1C9 - 0x1D0
}; // size - 0x1D0


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
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


class C_INIT_RandomAlpha /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   int32_t m_nAlphaMin; // 0x1C4 - 0x1C8
   int32_t m_nAlphaMax; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x8]; // 0x1CC - 0x1D4
   float m_flAlphaRandExponent; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x8]; // 0x1D8 - 0x1E0
}; // size - 0x1E0


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
   unsigned char pad_204[0xC]; // 0x204 - 0x210
}; // size - 0x210


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
   unsigned char pad_3C8[0x8]; // 0x3C8 - 0x3D0
}; // size - 0x3D0


class C_INIT_RandomNamedModelBodyPart /* "particles" */ : public C_INIT_RandomNamedModelElement /* "particles" */
{
public:
   unsigned char pad_0[0x1F0]; // 0x0 - 0x1F0
}; // size - 0x1F0


class C_INIT_RandomNamedModelMeshGroup /* "particles" */ : public C_INIT_RandomNamedModelElement /* "particles" */
{
public:
   unsigned char pad_0[0x1F0]; // 0x0 - 0x1F0
}; // size - 0x1F0


class C_INIT_RandomNamedModelSequence /* "particles" */ : public C_INIT_RandomNamedModelElement /* "particles" */
{
public:
   unsigned char pad_0[0x1F0]; // 0x0 - 0x1F0
}; // size - 0x1F0


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


class C_INIT_RandomSecondSequence /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nSequenceMin; // 0x1C0 - 0x1C4
   int32_t m_nSequenceMax; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


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
   unsigned char pad_1E4[0xC]; // 0x1E4 - 0x1F0
}; // size - 0x1F0


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
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


class C_INIT_RemapInitialDirectionToTransformToVector /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   ParticleAttributeIndex_t m_nFieldOutput; // 0x228 - 0x22C
   float m_flScale; // 0x22C - 0x230
   float m_flOffsetRot; // 0x230 - 0x234
   Vector m_vecOffsetAxis; // 0x234 - 0x240
   bool m_bNormalize; // 0x240 - 0x241
   unsigned char pad_241[0xF]; // 0x241 - 0x250
}; // size - 0x250


class C_INIT_RemapInitialTransformDirectionToRotation /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   ParticleAttributeIndex_t m_nFieldOutput; // 0x228 - 0x22C
   float m_flOffsetRot; // 0x22C - 0x230
   int32_t m_nComponent; // 0x230 - 0x234
   unsigned char pad_234[0xC]; // 0x234 - 0x240
}; // size - 0x240


class C_INIT_RemapInitialVisibilityScalar /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   unsigned char pad_1C0[0x4]; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flInputMin; // 0x1C8 - 0x1CC
   float m_flInputMax; // 0x1CC - 0x1D0
   float m_flOutputMin; // 0x1D0 - 0x1D4
   float m_flOutputMax; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x8]; // 0x1D8 - 0x1E0
}; // size - 0x1E0


class C_INIT_RemapNamedModelBodyPartToScalar /* "particles" */ : public C_INIT_RemapNamedModelElementToScalar /* "particles" */
{
public:
   unsigned char pad_0[0x210]; // 0x0 - 0x210
}; // size - 0x210


class C_INIT_RemapNamedModelMeshGroupToScalar /* "particles" */ : public C_INIT_RemapNamedModelElementToScalar /* "particles" */
{
public:
   unsigned char pad_0[0x210]; // 0x0 - 0x210
}; // size - 0x210


class C_INIT_RemapNamedModelSequenceToScalar /* "particles" */ : public C_INIT_RemapNamedModelElementToScalar /* "particles" */
{
public:
   unsigned char pad_0[0x210]; // 0x0 - 0x210
}; // size - 0x210


class C_INIT_RemapParticleCountToNamedModelBodyPartScalar /* "particles" */ : public C_INIT_RemapParticleCountToNamedModelElementScalar /* "particles" */
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
   unsigned char pad_228[0x8]; // 0x228 - 0x230
}; // size - 0x230


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
   unsigned char pad_200[0x10]; // 0x200 - 0x210
}; // size - 0x210


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
   unsigned char pad_1E5[0xB]; // 0x1E5 - 0x1F0
}; // size - 0x1F0


class C_INIT_RemapTransformOrientationToRotations /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   Vector m_vecRotation; // 0x228 - 0x234
   bool m_bUseQuat; // 0x234 - 0x235
   bool m_bWriteNormal; // 0x235 - 0x236
   unsigned char pad_236[0xA]; // 0x236 - 0x240
}; // size - 0x240


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
   unsigned char pad_264[0xC]; // 0x264 - 0x270
}; // size - 0x270


class C_INIT_ScaleVelocity /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   CParticleCollectionVecInput m_vecScale; // 0x1C0 - 0x818
   unsigned char pad_818[0x8]; // 0x818 - 0x820
}; // size - 0x820


class C_INIT_SequenceLifeTime /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   float m_flFramerate; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


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
   unsigned char pad_A01[0xF]; // 0xA01 - 0xA10
}; // size - 0xA10


class C_INIT_SetHitboxToModel /* "particles" */ : public CParticleFunctionInitializer /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nForceInModel; // 0x1C4 - 0x1C8
   int32_t m_nDesiredHitbox; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
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
   unsigned char pad_885[0xB]; // 0x885 - 0x890
}; // size - 0x890


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
   unsigned char pad_1134[0xC]; // 0x1134 - 0x1140
}; // size - 0x1140


class C_IncendiaryGrenade /* "client" */ : public C_MolotovGrenade /* "client" */
{
public:
   unsigned char pad_0[0x1AB0]; // 0x0 - 0x1AB0
}; // size - 0x1AB0


class C_InfoInstructorHintHostageRescueZone /* "client" */ : public C_PointEntity /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class C_InfoLadderDismount /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_0[0x550]; // 0x0 - 0x550
}; // size - 0x550


class C_InfoVisibilityBox /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_550[0x4]; // 0x550 - 0x554
   int32_t m_nMode; // 0x554 - 0x558
   Vector m_vBoxSize; // 0x558 - 0x564
   bool m_bEnabled; // 0x564 - 0x565
   unsigned char pad_565[0x3]; // 0x565 - 0x568
}; // size - 0x568


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


class C_ItemDogtags /* "client" */ : public C_Item /* "client" */
{
public:
   CHandle< C_CSPlayerPawn > m_OwningPlayer; // 0x16C0 - 0x16C4
   CHandle< C_CSPlayerPawn > m_KillingPlayer; // 0x16C4 - 0x16C8
}; // size - 0x16C8


class C_Item_Healthshot /* "client" */ : public C_WeaponBaseItem /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_Knife /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   unsigned char pad_0[0x1A70]; // 0x0 - 0x1A70
}; // size - 0x1A70


class C_LightGlow /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   uint32_t m_nHorizontalSize; // 0xCD0 - 0xCD4
   uint32_t m_nVerticalSize; // 0xCD4 - 0xCD8
   uint32_t m_nMinDist; // 0xCD8 - 0xCDC
   uint32_t m_nMaxDist; // 0xCDC - 0xCE0
   uint32_t m_nOuterMaxDist; // 0xCE0 - 0xCE4
   float m_flGlowProxySize; // 0xCE4 - 0xCE8
   float m_flHDRColorScale; // 0xCE8 - 0xCEC
   unsigned char pad_CEC[0x4]; // 0xCEC - 0xCF0
   C_LightGlowOverlay m_Glow; // 0xCF0 - 0xDE8
}; // size - 0xDE8


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


class C_LightSpotEntity /* "client" */ : public C_LightEntity /* "client" */
{
public:
   unsigned char pad_0[0xCD8]; // 0x0 - 0xCD8
}; // size - 0xCD8


class C_LocalTempEntity /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_ED8[0x18]; // 0xED8 - 0xEF0
   int32_t flags; // 0xEF0 - 0xEF4
   GameTime_t die; // 0xEF4 - 0xEF8
   float m_flFrameMax; // 0xEF8 - 0xEFC
   float x; // 0xEFC - 0xF00
   float y; // 0xF00 - 0xF04
   float fadeSpeed; // 0xF04 - 0xF08
   float bounceFactor; // 0xF08 - 0xF0C
   int32_t hitSound; // 0xF0C - 0xF10
   int32_t priority; // 0xF10 - 0xF14
   Vector tentOffset; // 0xF14 - 0xF20
   QAngle m_vecTempEntAngVelocity; // 0xF20 - 0xF2C
   int32_t tempent_renderamt; // 0xF2C - 0xF30
   Vector m_vecNormal; // 0xF30 - 0xF3C
   float m_flSpriteScale; // 0xF3C - 0xF40
   int32_t m_nFlickerFrame; // 0xF40 - 0xF44
   float m_flFrameRate; // 0xF44 - 0xF48
   float m_flFrame; // 0xF48 - 0xF4C
   unsigned char pad_F4C[0x4]; // 0xF4C - 0xF50
   char* m_pszImpactEffect; // 0xF50 - 0xF58
   char* m_pszParticleEffect; // 0xF58 - 0xF60
   bool m_bParticleCollision; // 0xF60 - 0xF61
   unsigned char pad_F61[0x3]; // 0xF61 - 0xF64
   int32_t m_iLastCollisionFrame; // 0xF64 - 0xF68
   Vector m_vLastCollisionOrigin; // 0xF68 - 0xF74
   Vector m_vecTempEntVelocity; // 0xF74 - 0xF80
   Vector m_vecPrevAbsOrigin; // 0xF80 - 0xF8C
   Vector m_vecTempEntAcceleration; // 0xF8C - 0xF98
}; // size - 0xF98


class C_MapPreviewParticleSystem /* "client" */ : public C_ParticleSystem /* "client" */
{
public:
   unsigned char pad_0[0x1280]; // 0x0 - 0x1280
}; // size - 0x1280


class C_MapVetoPickController /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_550[0x10]; // 0x550 - 0x560
   int32_t m_nDraftType; // 0x560 - 0x564
   int32_t m_nTeamWinningCoinToss; // 0x564 - 0x568
   int32 m_nTeamWithFirstChoice[64]; // 0x568 - 0x668
   int32 m_nVoteMapIdsList[7]; // 0x668 - 0x684
   int32 m_nAccountIDs[64]; // 0x684 - 0x784
   int32 m_nMapId0[64]; // 0x784 - 0x884
   int32 m_nMapId1[64]; // 0x884 - 0x984
   int32 m_nMapId2[64]; // 0x984 - 0xA84
   int32 m_nMapId3[64]; // 0xA84 - 0xB84
   int32 m_nMapId4[64]; // 0xB84 - 0xC84
   int32 m_nMapId5[64]; // 0xC84 - 0xD84
   int32 m_nStartingSide0[64]; // 0xD84 - 0xE84
   int32_t m_nCurrentPhase; // 0xE84 - 0xE88
   int32_t m_nPhaseStartTick; // 0xE88 - 0xE8C
   int32_t m_nPhaseDurationTicks; // 0xE8C - 0xE90
   int32_t m_nPostDataUpdateTick; // 0xE90 - 0xE94
   bool m_bDisabledHud; // 0xE94 - 0xE95
   unsigned char pad_E95[0x3]; // 0xE95 - 0xE98
}; // size - 0xE98


class C_Melee /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   unsigned char pad_0[0x1A70]; // 0x0 - 0x1A70
}; // size - 0x1A70


class C_MolotovProjectile /* "client" */ : public C_BaseCSGrenadeProjectile /* "client" */
{
public:
   bool m_bIsIncGrenade; // 0x1158 - 0x1159
   unsigned char pad_1159[0x27]; // 0x1159 - 0x1180
}; // size - 0x1180


class C_Multimeter /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_ED8[0x8]; // 0xED8 - 0xEE0
   CHandle< C_PlantedC4 > m_hTargetC4; // 0xEE0 - 0xEE4
   unsigned char pad_EE4[0x4]; // 0xEE4 - 0xEE8
}; // size - 0xEE8


class C_NetTestBaseCombatCharacter /* "client" */ : public C_BaseCombatCharacter /* "client" */
{
public:
   unsigned char pad_0[0x1100]; // 0x0 - 0x1100
}; // size - 0x1100


class C_OP_AlphaDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flMinAlpha; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


class C_OP_AttractToControlPoint /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   Vector m_vecComponentScale; // 0x1D0 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
   CPerParticleFloatInput m_fForceAmount; // 0x1E0 - 0x338
   float m_fFalloffPower; // 0x338 - 0x33C
   unsigned char pad_33C[0x4]; // 0x33C - 0x340
   CParticleTransformInput m_TransformInput; // 0x340 - 0x3A8
   CPerParticleFloatInput m_fForceAmountMin; // 0x3A8 - 0x500
   bool m_bApplyMinForce; // 0x500 - 0x501
   unsigned char pad_501[0xF]; // 0x501 - 0x510
}; // size - 0x510


class C_OP_BasicMovement /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionVecInput m_Gravity; // 0x1C0 - 0x818
   CParticleCollectionFloatInput m_fDrag; // 0x818 - 0x970
   int32_t m_nMaxConstraintPasses; // 0x970 - 0x974
   unsigned char pad_974[0xC]; // 0x974 - 0x980
}; // size - 0x980


class C_OP_BoxConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CParticleCollectionVecInput m_vecMin; // 0x1C0 - 0x818
   CParticleCollectionVecInput m_vecMax; // 0x818 - 0xE70
   int32_t m_nCP; // 0xE70 - 0xE74
   bool m_bLocalSpace; // 0xE74 - 0xE75
   bool m_bAccountForRadius; // 0xE75 - 0xE76
   unsigned char pad_E76[0xA]; // 0xE76 - 0xE80
}; // size - 0xE80


class C_OP_CPVelocityForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
   CPerParticleFloatInput m_flScale; // 0x1D8 - 0x330
}; // size - 0x330


class C_OP_CalculateVectorAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_vStartValue; // 0x1C0 - 0x1CC
   ParticleAttributeIndex_t m_nFieldInput1; // 0x1CC - 0x1D0
   float m_flInputScale1; // 0x1D0 - 0x1D4
   ParticleAttributeIndex_t m_nFieldInput2; // 0x1D4 - 0x1D8
   float m_flInputScale2; // 0x1D8 - 0x1DC
   ControlPointReference_t m_nControlPointInput1; // 0x1DC - 0x1F0
   float m_flControlPointScale1; // 0x1F0 - 0x1F4
   ControlPointReference_t m_nControlPointInput2; // 0x1F4 - 0x208
   float m_flControlPointScale2; // 0x208 - 0x20C
   ParticleAttributeIndex_t m_nFieldOutput; // 0x20C - 0x210
   Vector m_vFinalOutputScale; // 0x210 - 0x21C
   unsigned char pad_21C[0x4]; // 0x21C - 0x220
}; // size - 0x220


class C_OP_Callback /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   unsigned char pad_0[0x200]; // 0x0 - 0x200
}; // size - 0x200


class C_OP_ChladniWave /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_flInputMin; // 0x1C8 - 0x320
   CPerParticleFloatInput m_flInputMax; // 0x320 - 0x478
   CPerParticleFloatInput m_flOutputMin; // 0x478 - 0x5D0
   CPerParticleFloatInput m_flOutputMax; // 0x5D0 - 0x728
   CPerParticleVecInput m_vecWaveLength; // 0x728 - 0xD80
   CPerParticleVecInput m_vecHarmonics; // 0xD80 - 0x13D8
   ParticleSetMethod_t m_nSetMethod; // 0x13D8 - 0x13DC
   int32_t m_nLocalSpaceControlPoint; // 0x13DC - 0x13E0
   bool m_b3D; // 0x13E0 - 0x13E1
   unsigned char pad_13E1[0xF]; // 0x13E1 - 0x13F0
}; // size - 0x13F0


class C_OP_ClampScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_flOutputMin; // 0x1C8 - 0x320
   CPerParticleFloatInput m_flOutputMax; // 0x320 - 0x478
   unsigned char pad_478[0x8]; // 0x478 - 0x480
}; // size - 0x480


class C_OP_CollideWithParentParticles /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CPerParticleFloatInput m_flParentRadiusScale; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flRadiusScale; // 0x318 - 0x470
}; // size - 0x470


class C_OP_CollideWithSelf /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CPerParticleFloatInput m_flRadiusScale; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flMinimumSpeed; // 0x318 - 0x470
}; // size - 0x470


class C_OP_ColorAdjustHSL /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_flHueAdjust; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flSaturationAdjust; // 0x318 - 0x470
   CPerParticleFloatInput m_flLightnessAdjust; // 0x470 - 0x5C8
   unsigned char pad_5C8[0x8]; // 0x5C8 - 0x5D0
}; // size - 0x5D0


class C_OP_ColorInterpolateRandom /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Color m_ColorFadeMin; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x18]; // 0x1C4 - 0x1DC
   Color m_ColorFadeMax; // 0x1DC - 0x1E0
   unsigned char pad_1E0[0xC]; // 0x1E0 - 0x1EC
   float m_flFadeStartTime; // 0x1EC - 0x1F0
   float m_flFadeEndTime; // 0x1F0 - 0x1F4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1F4 - 0x1F8
   bool m_bEaseInOut; // 0x1F8 - 0x1F9
   unsigned char pad_1F9[0x7]; // 0x1F9 - 0x200
}; // size - 0x200


class C_OP_ConnectParentParticleToNearest /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nFirstControlPoint; // 0x1C0 - 0x1C4
   int32_t m_nSecondControlPoint; // 0x1C4 - 0x1C8
   bool m_bUseRadius; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x7]; // 0x1C9 - 0x1D0
   CParticleCollectionFloatInput m_flRadiusScale; // 0x1D0 - 0x328
   CParticleCollectionFloatInput m_flParentRadiusScale; // 0x328 - 0x480
}; // size - 0x480


class C_OP_ConstrainDistance /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CParticleCollectionFloatInput m_fMinDistance; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_fMaxDistance; // 0x318 - 0x470
   int32_t m_nControlPointNumber; // 0x470 - 0x474
   Vector m_CenterOffset; // 0x474 - 0x480
   bool m_bGlobalCenter; // 0x480 - 0x481
   unsigned char pad_481[0xF]; // 0x481 - 0x490
}; // size - 0x490


class C_OP_ConstrainDistanceToPath /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   float m_fMinDistance; // 0x1C0 - 0x1C4
   float m_flMaxDistance0; // 0x1C4 - 0x1C8
   float m_flMaxDistanceMid; // 0x1C8 - 0x1CC
   float m_flMaxDistance1; // 0x1CC - 0x1D0
   CPathParameters m_PathParameters; // 0x1D0 - 0x210
   float m_flTravelTime; // 0x210 - 0x214
   ParticleAttributeIndex_t m_nFieldScale; // 0x214 - 0x218
   ParticleAttributeIndex_t m_nManualTField; // 0x218 - 0x21C
   unsigned char pad_21C[0x4]; // 0x21C - 0x220
}; // size - 0x220


class C_OP_ConstrainDistanceToUserSpecifiedPath /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   float m_fMinDistance; // 0x1C0 - 0x1C4
   float m_flMaxDistance; // 0x1C4 - 0x1C8
   float m_flTimeScale; // 0x1C8 - 0x1CC
   bool m_bLoopedPath; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
   CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x1D0 - 0x1E8
   unsigned char pad_1E8[0x8]; // 0x1E8 - 0x1F0
}; // size - 0x1F0


class C_OP_ConstrainLineLength /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   float m_flMinDistance; // 0x1C0 - 0x1C4
   float m_flMaxDistance; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


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
   int32_t m_nSnapshotControlPoint; // 0x5D4 - 0x5D8
   int32_t m_nLimitPerUpdate; // 0x5D8 - 0x5DC
   bool m_bForceEmitOnFirstUpdate; // 0x5DC - 0x5DD
   bool m_bForceEmitOnLastUpdate; // 0x5DD - 0x5DE
   unsigned char pad_5DE[0x12]; // 0x5DE - 0x5F0
}; // size - 0x5F0


class C_OP_ControlPointToRadialScreenSpace /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPIn; // 0x1D0 - 0x1D4
   Vector m_vecCP1Pos; // 0x1D4 - 0x1E0
   int32_t m_nCPOut; // 0x1E0 - 0x1E4
   int32_t m_nCPOutField; // 0x1E4 - 0x1E8
   int32_t m_nCPSSPosOut; // 0x1E8 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_OP_Cull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flCullPerc; // 0x1C0 - 0x1C4
   float m_flCullStart; // 0x1C4 - 0x1C8
   float m_flCullEnd; // 0x1C8 - 0x1CC
   float m_flCullExp; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_CurlNoiseForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   ParticleDirectionNoiseType_t m_nNoiseType; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
   CPerParticleVecInput m_vecNoiseFreq; // 0x1D8 - 0x830
   CPerParticleVecInput m_vecNoiseScale; // 0x830 - 0xE88
   CPerParticleVecInput m_vecOffset; // 0xE88 - 0x14E0
   CPerParticleVecInput m_vecOffsetRate; // 0x14E0 - 0x1B38
   CPerParticleFloatInput m_flWorleySeed; // 0x1B38 - 0x1C90
   CPerParticleFloatInput m_flWorleyJitter; // 0x1C90 - 0x1DE8
   unsigned char pad_1DE8[0x8]; // 0x1DE8 - 0x1DF0
}; // size - 0x1DF0


class C_OP_DampenToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   float m_flRange; // 0x1C4 - 0x1C8
   float m_flScale; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_Decay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bRopeDecay; // 0x1C0 - 0x1C1
   bool m_bForcePreserveParticleOrder; // 0x1C1 - 0x1C2
   unsigned char pad_1C2[0xE]; // 0x1C2 - 0x1D0
}; // size - 0x1D0


class C_OP_DecayClampCount /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_nCount; // 0x1C0 - 0x318
   unsigned char pad_318[0x8]; // 0x318 - 0x320
}; // size - 0x320


class C_OP_DecayMaintainCount /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nParticlesToMaintain; // 0x1C0 - 0x1C4
   float m_flDecayDelay; // 0x1C4 - 0x1C8
   int32_t m_nSnapshotControlPoint; // 0x1C8 - 0x1CC
   bool m_bLifespanDecay; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
   CParticleCollectionFloatInput m_flScale; // 0x1D0 - 0x328
   bool m_bKillNewest; // 0x328 - 0x329
   unsigned char pad_329[0x7]; // 0x329 - 0x330
}; // size - 0x330


class C_OP_DecayOffscreen /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flOffscreenTime; // 0x1C0 - 0x318
   unsigned char pad_318[0x8]; // 0x318 - 0x320
}; // size - 0x320


class C_OP_DensityForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flRadiusScale; // 0x1D0 - 0x1D4
   float m_flForceScale; // 0x1D4 - 0x1D8
   float m_flTargetDensity; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_DifferencePreviousParticle /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flInputMin; // 0x1C8 - 0x1CC
   float m_flInputMax; // 0x1CC - 0x1D0
   float m_flOutputMin; // 0x1D0 - 0x1D4
   float m_flOutputMax; // 0x1D4 - 0x1D8
   ParticleSetMethod_t m_nSetMethod; // 0x1D8 - 0x1DC
   bool m_bActiveRange; // 0x1DC - 0x1DD
   bool m_bSetPreviousParticle; // 0x1DD - 0x1DE
   unsigned char pad_1DE[0x2]; // 0x1DE - 0x1E0
}; // size - 0x1E0


class C_OP_Diffusion /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRadiusScale; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   int32_t m_nVoxelGridResolution; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_DirectionBetweenVecsToVec /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleVecInput m_vecPoint1; // 0x1C8 - 0x820
   CPerParticleVecInput m_vecPoint2; // 0x820 - 0xE78
   unsigned char pad_E78[0x8]; // 0xE78 - 0xE80
}; // size - 0xE80


class C_OP_DistanceBetweenTransforms /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleTransformInput m_TransformStart; // 0x1C8 - 0x230
   CParticleTransformInput m_TransformEnd; // 0x230 - 0x298
   CPerParticleFloatInput m_flInputMin; // 0x298 - 0x3F0
   CPerParticleFloatInput m_flInputMax; // 0x3F0 - 0x548
   CPerParticleFloatInput m_flOutputMin; // 0x548 - 0x6A0
   CPerParticleFloatInput m_flOutputMax; // 0x6A0 - 0x7F8
   float m_flMaxTraceLength; // 0x7F8 - 0x7FC
   float m_flLOSScale; // 0x7FC - 0x800
   char m_CollisionGroupName[128]; // 0x800 - 0x880
   ParticleTraceSet_t m_nTraceSet; // 0x880 - 0x884
   bool m_bLOS; // 0x884 - 0x885
   unsigned char pad_885[0x3]; // 0x885 - 0x888
   ParticleSetMethod_t m_nSetMethod; // 0x888 - 0x88C
   unsigned char pad_88C[0x4]; // 0x88C - 0x890
}; // size - 0x890


class C_OP_DistanceBetweenVecs /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleVecInput m_vecPoint1; // 0x1C8 - 0x820
   CPerParticleVecInput m_vecPoint2; // 0x820 - 0xE78
   CPerParticleFloatInput m_flInputMin; // 0xE78 - 0xFD0
   CPerParticleFloatInput m_flInputMax; // 0xFD0 - 0x1128
   CPerParticleFloatInput m_flOutputMin; // 0x1128 - 0x1280
   CPerParticleFloatInput m_flOutputMax; // 0x1280 - 0x13D8
   ParticleSetMethod_t m_nSetMethod; // 0x13D8 - 0x13DC
   bool m_bDeltaTime; // 0x13DC - 0x13DD
   unsigned char pad_13DD[0x3]; // 0x13DD - 0x13E0
}; // size - 0x13E0


class C_OP_DistanceCull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPoint; // 0x1C0 - 0x1C4
   Vector m_vecPointOffset; // 0x1C4 - 0x1D0
   float m_flDistance; // 0x1D0 - 0x1D4
   bool m_bCullInside; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0xB]; // 0x1D5 - 0x1E0
}; // size - 0x1E0


class C_OP_DragRelativeToPlane /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flDragAtPlane; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_flFalloff; // 0x318 - 0x470
   bool m_bDirectional; // 0x470 - 0x471
   unsigned char pad_471[0x7]; // 0x471 - 0x478
   CParticleCollectionVecInput m_vecPlaneNormal; // 0x478 - 0xAD0
   int32_t m_nControlPointNumber; // 0xAD0 - 0xAD4
   unsigned char pad_AD4[0xC]; // 0xAD4 - 0xAE0
}; // size - 0xAE0


class C_OP_DriveCPFromGlobalSoundFloat /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nOutputControlPoint; // 0x1D0 - 0x1D4
   int32_t m_nOutputField; // 0x1D4 - 0x1D8
   float m_flInputMin; // 0x1D8 - 0x1DC
   float m_flInputMax; // 0x1DC - 0x1E0
   float m_flOutputMin; // 0x1E0 - 0x1E4
   float m_flOutputMax; // 0x1E4 - 0x1E8
   CUtlString m_StackName; // 0x1E8 - 0x1F0
   CUtlString m_OperatorName; // 0x1F0 - 0x1F8
   CUtlString m_FieldName; // 0x1F8 - 0x200
   unsigned char pad_200[0x10]; // 0x200 - 0x210
}; // size - 0x210


class C_OP_EnableChildrenFromParentParticleCount /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1D0 - 0x1D4
   int32_t m_nFirstChild; // 0x1D4 - 0x1D8
   CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x1D8 - 0x330
   bool m_bDisableChildren; // 0x330 - 0x331
   bool m_bPlayEndcapOnStop; // 0x331 - 0x332
   bool m_bDestroyImmediately; // 0x332 - 0x333
   unsigned char pad_333[0xD]; // 0x333 - 0x340
}; // size - 0x340


class C_OP_EndCapDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   unsigned char pad_0[0x1C0]; // 0x0 - 0x1C0
}; // size - 0x1C0


class C_OP_EndCapTimedDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flDecayTime; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


class C_OP_EndCapTimedFreeze /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flFreezeTime; // 0x1C0 - 0x318
   unsigned char pad_318[0x8]; // 0x318 - 0x320
}; // size - 0x320


class C_OP_ExternalGameImpulseForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   CPerParticleFloatInput m_flForceScale; // 0x1D0 - 0x328
   bool m_bRopes; // 0x328 - 0x329
   bool m_bRopesZOnly; // 0x329 - 0x32A
   bool m_bExplosions; // 0x32A - 0x32B
   bool m_bParticles; // 0x32B - 0x32C
   unsigned char pad_32C[0x4]; // 0x32C - 0x330
}; // size - 0x330


class C_OP_FadeAndKill /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flStartFadeInTime; // 0x1C0 - 0x1C4
   float m_flEndFadeInTime; // 0x1C4 - 0x1C8
   float m_flStartFadeOutTime; // 0x1C8 - 0x1CC
   float m_flEndFadeOutTime; // 0x1CC - 0x1D0
   float m_flStartAlpha; // 0x1D0 - 0x1D4
   float m_flEndAlpha; // 0x1D4 - 0x1D8
   bool m_bForcePreserveParticleOrder; // 0x1D8 - 0x1D9
   unsigned char pad_1D9[0x7]; // 0x1D9 - 0x1E0
}; // size - 0x1E0


class C_OP_FadeAndKillForTracers /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flStartFadeInTime; // 0x1C0 - 0x1C4
   float m_flEndFadeInTime; // 0x1C4 - 0x1C8
   float m_flStartFadeOutTime; // 0x1C8 - 0x1CC
   float m_flEndFadeOutTime; // 0x1CC - 0x1D0
   float m_flStartAlpha; // 0x1D0 - 0x1D4
   float m_flEndAlpha; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x8]; // 0x1D8 - 0x1E0
}; // size - 0x1E0


class C_OP_FadeIn /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flFadeInTimeMin; // 0x1C0 - 0x1C4
   float m_flFadeInTimeMax; // 0x1C4 - 0x1C8
   float m_flFadeInTimeExp; // 0x1C8 - 0x1CC
   bool m_bProportional; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
}; // size - 0x1D0


class C_OP_FadeInSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flFadeInTime; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class C_OP_FadeOutSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flFadeOutTime; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class C_OP_ForceBasedOnDistanceToPlane /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flMinDist; // 0x1D0 - 0x1D4
   Vector m_vecForceAtMinDist; // 0x1D4 - 0x1E0
   float m_flMaxDist; // 0x1E0 - 0x1E4
   Vector m_vecForceAtMaxDist; // 0x1E4 - 0x1F0
   Vector m_vecPlaneNormal; // 0x1F0 - 0x1FC
   int32_t m_nControlPointNumber; // 0x1FC - 0x200
   float m_flExponent; // 0x200 - 0x204
   unsigned char pad_204[0xC]; // 0x204 - 0x210
}; // size - 0x210


class C_OP_ForceControlPointStub /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_ControlPoint; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0xC]; // 0x1D4 - 0x1E0
}; // size - 0x1E0


class C_OP_GlobalLight /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flScale; // 0x1C0 - 0x1C4
   bool m_bClampLowerRange; // 0x1C4 - 0x1C5
   bool m_bClampUpperRange; // 0x1C5 - 0x1C6
   unsigned char pad_1C6[0xA]; // 0x1C6 - 0x1D0
}; // size - 0x1D0


class C_OP_HSVShiftToCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nColorCP; // 0x1D0 - 0x1D4
   int32_t m_nColorGemEnableCP; // 0x1D4 - 0x1D8
   int32_t m_nOutputCP; // 0x1D8 - 0x1DC
   Color m_DefaultHSVColor; // 0x1DC - 0x1E0
   unsigned char pad_1E0[0x10]; // 0x1E0 - 0x1F0
}; // size - 0x1F0


class C_OP_InheritFromParentParticles /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flScale; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   int32_t m_nIncrement; // 0x1C8 - 0x1CC
   bool m_bRandomDistribution; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
}; // size - 0x1D0


class C_OP_InheritFromParentParticlesV2 /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flScale; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   int32_t m_nIncrement; // 0x1C8 - 0x1CC
   bool m_bRandomDistribution; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
   MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0xC]; // 0x1D4 - 0x1E0
}; // size - 0x1E0


class C_OP_InheritFromPeerSystem /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C4 - 0x1C8
   int32_t m_nIncrement; // 0x1C8 - 0x1CC
   int32_t m_nGroupID; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_InstantaneousEmitter /* "particles" */ : public CParticleFunctionEmitter /* "particles" */
{
public:
   CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_flStartTime; // 0x318 - 0x470
   float m_flInitFromKilledParentParticles; // 0x470 - 0x474
   unsigned char pad_474[0x4]; // 0x474 - 0x478
   CParticleCollectionFloatInput m_flParentParticleScale; // 0x478 - 0x5D0
   int32_t m_nMaxEmittedPerFrame; // 0x5D0 - 0x5D4
   int32_t m_nSnapshotControlPoint; // 0x5D4 - 0x5D8
   unsigned char pad_5D8[0x8]; // 0x5D8 - 0x5E0
}; // size - 0x5E0


class C_OP_InterpolateRadius /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flStartTime; // 0x1C0 - 0x1C4
   float m_flEndTime; // 0x1C4 - 0x1C8
   float m_flStartScale; // 0x1C8 - 0x1CC
   float m_flEndScale; // 0x1CC - 0x1D0
   bool m_bEaseInAndOut; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x3]; // 0x1D1 - 0x1D4
   float m_flBias; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x38]; // 0x1D8 - 0x210
}; // size - 0x210


class C_OP_LagCompensation /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nDesiredVelocityCP; // 0x1C0 - 0x1C4
   int32_t m_nLatencyCP; // 0x1C4 - 0x1C8
   int32_t m_nLatencyCPField; // 0x1C8 - 0x1CC
   int32_t m_nDesiredVelocityCPField; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_LerpEndCapVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   Vector m_vecOutput; // 0x1C4 - 0x1D0
   float m_flLerpTime; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0xC]; // 0x1D4 - 0x1E0
}; // size - 0x1E0


class C_OP_LerpScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_flOutput; // 0x1C8 - 0x320
   float m_flStartTime; // 0x320 - 0x324
   float m_flEndTime; // 0x324 - 0x328
   unsigned char pad_328[0x8]; // 0x328 - 0x330
}; // size - 0x330


class C_OP_LerpToInitialPosition /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_flInterpolation; // 0x1C8 - 0x320
   ParticleAttributeIndex_t m_nCacheField; // 0x320 - 0x324
   unsigned char pad_324[0x4]; // 0x324 - 0x328
   CParticleCollectionFloatInput m_flScale; // 0x328 - 0x480
   CParticleCollectionVecInput m_vecScale; // 0x480 - 0xAD8
   unsigned char pad_AD8[0x8]; // 0xAD8 - 0xAE0
}; // size - 0xAE0


class C_OP_LerpToOtherAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_flInterpolation; // 0x1C0 - 0x318
   ParticleAttributeIndex_t m_nFieldInputFrom; // 0x318 - 0x31C
   ParticleAttributeIndex_t m_nFieldInput; // 0x31C - 0x320
   ParticleAttributeIndex_t m_nFieldOutput; // 0x320 - 0x324
   unsigned char pad_324[0x2C]; // 0x324 - 0x350
}; // size - 0x350


class C_OP_LerpVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   Vector m_vecOutput; // 0x1C4 - 0x1D0
   float m_flStartTime; // 0x1D0 - 0x1D4
   float m_flEndTime; // 0x1D4 - 0x1D8
   ParticleSetMethod_t m_nSetMethod; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_LightningSnapshotGenerator /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPSnapshot; // 0x1D0 - 0x1D4
   int32_t m_nCPStartPnt; // 0x1D4 - 0x1D8
   int32_t m_nCPEndPnt; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
   CParticleCollectionFloatInput m_flSegments; // 0x1E0 - 0x338
   CParticleCollectionFloatInput m_flOffset; // 0x338 - 0x490
   CParticleCollectionFloatInput m_flOffsetDecay; // 0x490 - 0x5E8
   CParticleCollectionFloatInput m_flRecalcRate; // 0x5E8 - 0x740
   CParticleCollectionFloatInput m_flUVScale; // 0x740 - 0x898
   CParticleCollectionFloatInput m_flUVOffset; // 0x898 - 0x9F0
   CParticleCollectionFloatInput m_flSplitRate; // 0x9F0 - 0xB48
   CParticleCollectionFloatInput m_flBranchTwist; // 0xB48 - 0xCA0
   ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xCA0 - 0xCA4
   unsigned char pad_CA4[0x4]; // 0xCA4 - 0xCA8
   CParticleCollectionFloatInput m_flRadiusStart; // 0xCA8 - 0xE00
   CParticleCollectionFloatInput m_flRadiusEnd; // 0xE00 - 0xF58
   CParticleCollectionFloatInput m_flDedicatedPool; // 0xF58 - 0x10B0
}; // size - 0x10B0


class C_OP_LockPoints /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nMinCol; // 0x1C0 - 0x1C4
   int32_t m_nMaxCol; // 0x1C4 - 0x1C8
   int32_t m_nMinRow; // 0x1C8 - 0x1CC
   int32_t m_nMaxRow; // 0x1CC - 0x1D0
   int32_t m_nControlPoint; // 0x1D0 - 0x1D4
   float m_flBlendValue; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x8]; // 0x1D8 - 0x1E0
}; // size - 0x1E0


class C_OP_LockToBone /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleModelInput m_modelInput; // 0x1C0 - 0x220
   CParticleTransformInput m_transformInput; // 0x220 - 0x288
   float m_flLifeTimeFadeStart; // 0x288 - 0x28C
   float m_flLifeTimeFadeEnd; // 0x28C - 0x290
   float m_flJumpThreshold; // 0x290 - 0x294
   float m_flPrevPosScale; // 0x294 - 0x298
   char m_HitboxSetName[128]; // 0x298 - 0x318
   bool m_bRigid; // 0x318 - 0x319
   bool m_bUseBones; // 0x319 - 0x31A
   unsigned char pad_31A[0x2]; // 0x31A - 0x31C
   ParticleAttributeIndex_t m_nFieldOutput; // 0x31C - 0x320
   ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x320 - 0x324
   ParticleRotationLockType_t m_nRotationSetType; // 0x324 - 0x328
   bool m_bRigidRotationLock; // 0x328 - 0x329
   unsigned char pad_329[0x7]; // 0x329 - 0x330
   CPerParticleVecInput m_vecRotation; // 0x330 - 0x988
   CPerParticleFloatInput m_flRotLerp; // 0x988 - 0xAE0
}; // size - 0xAE0


class C_OP_LockToPointList /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CUtlVector< PointDefinition_t > m_pointList; // 0x1C8 - 0x1E0
   bool m_bPlaceAlongPath; // 0x1E0 - 0x1E1
   bool m_bClosedLoop; // 0x1E1 - 0x1E2
   unsigned char pad_1E2[0x2]; // 0x1E2 - 0x1E4
   int32_t m_nNumPointsAlongPath; // 0x1E4 - 0x1E8
   unsigned char pad_1E8[0x8]; // 0x1E8 - 0x1F0
}; // size - 0x1F0


class C_OP_LockToSavedSequentialPathV2 /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flFadeStart; // 0x1C0 - 0x1C4
   float m_flFadeEnd; // 0x1C4 - 0x1C8
   bool m_bCPPairs; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x7]; // 0x1C9 - 0x1D0
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


class C_OP_MaxVelocity /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flMaxVelocity; // 0x1C0 - 0x1C4
   float m_flMinVelocity; // 0x1C4 - 0x1C8
   int32_t m_nOverrideCP; // 0x1C8 - 0x1CC
   int32_t m_nOverrideCPField; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_ModelCull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   bool m_bBoundBox; // 0x1C4 - 0x1C5
   bool m_bCullOutside; // 0x1C5 - 0x1C6
   bool m_bUseBones; // 0x1C6 - 0x1C7
   char m_HitboxSetName[128]; // 0x1C7 - 0x247
   unsigned char pad_247[0x9]; // 0x247 - 0x250
}; // size - 0x250


class C_OP_ModelDampenMovement /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   bool m_bBoundBox; // 0x1C4 - 0x1C5
   bool m_bOutside; // 0x1C5 - 0x1C6
   bool m_bUseBones; // 0x1C6 - 0x1C7
   char m_HitboxSetName[128]; // 0x1C7 - 0x247
   unsigned char pad_247[0x1]; // 0x247 - 0x248
   CPerParticleVecInput m_vecPosOffset; // 0x248 - 0x8A0
   float m_fDrag; // 0x8A0 - 0x8A4
   unsigned char pad_8A4[0xC]; // 0x8A4 - 0x8B0
}; // size - 0x8B0


class C_OP_MoveToHitbox /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleModelInput m_modelInput; // 0x1C0 - 0x220
   CParticleTransformInput m_transformInput; // 0x220 - 0x288
   unsigned char pad_288[0x4]; // 0x288 - 0x28C
   float m_flLifeTimeLerpStart; // 0x28C - 0x290
   float m_flLifeTimeLerpEnd; // 0x290 - 0x294
   float m_flPrevPosScale; // 0x294 - 0x298
   char m_HitboxSetName[128]; // 0x298 - 0x318
   bool m_bUseBones; // 0x318 - 0x319
   unsigned char pad_319[0x3]; // 0x319 - 0x31C
   HitboxLerpType_t m_nLerpType; // 0x31C - 0x320
   CPerParticleFloatInput m_flInterpolation; // 0x320 - 0x478
   unsigned char pad_478[0x8]; // 0x478 - 0x480
}; // size - 0x480


class C_OP_MovementLoopInsideSphere /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCP; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flDistance; // 0x1C8 - 0x320
   CParticleCollectionVecInput m_vecScale; // 0x320 - 0x978
   ParticleAttributeIndex_t m_nDistSqrAttr; // 0x978 - 0x97C
   unsigned char pad_97C[0x4]; // 0x97C - 0x980
}; // size - 0x980


class C_OP_MovementMaintainOffset /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_vecOffset; // 0x1C0 - 0x1CC
   int32_t m_nCP; // 0x1CC - 0x1D0
   bool m_bRadiusScale; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0xF]; // 0x1D1 - 0x1E0
}; // size - 0x1E0


class C_OP_MovementMoveAlongSkinnedCPSnapshot /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nSnapshotControlPointNumber; // 0x1C4 - 0x1C8
   bool m_bSetNormal; // 0x1C8 - 0x1C9
   bool m_bSetRadius; // 0x1C9 - 0x1CA
   unsigned char pad_1CA[0x6]; // 0x1CA - 0x1D0
   CPerParticleFloatInput m_flInterpolation; // 0x1D0 - 0x328
   CPerParticleFloatInput m_flTValue; // 0x328 - 0x480
}; // size - 0x480


class C_OP_MovementPlaceOnGround /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_flOffset; // 0x1C0 - 0x318
   float m_flMaxTraceLength; // 0x318 - 0x31C
   float m_flTolerance; // 0x31C - 0x320
   float m_flTraceOffset; // 0x320 - 0x324
   float m_flLerpRate; // 0x324 - 0x328
   char m_CollisionGroupName[128]; // 0x328 - 0x3A8
   ParticleTraceSet_t m_nTraceSet; // 0x3A8 - 0x3AC
   int32_t m_nRefCP1; // 0x3AC - 0x3B0
   int32_t m_nRefCP2; // 0x3B0 - 0x3B4
   int32_t m_nLerpCP; // 0x3B4 - 0x3B8
   unsigned char pad_3B8[0x8]; // 0x3B8 - 0x3C0
   ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3C0 - 0x3C4
   bool m_bIncludeShotHull; // 0x3C4 - 0x3C5
   bool m_bIncludeWater; // 0x3C5 - 0x3C6
   unsigned char pad_3C6[0x2]; // 0x3C6 - 0x3C8
   bool m_bSetNormal; // 0x3C8 - 0x3C9
   bool m_bScaleOffset; // 0x3C9 - 0x3CA
   unsigned char pad_3CA[0x2]; // 0x3CA - 0x3CC
   int32_t m_nPreserveOffsetCP; // 0x3CC - 0x3D0
   int32_t m_nIgnoreCP; // 0x3D0 - 0x3D4
   unsigned char pad_3D4[0xC]; // 0x3D4 - 0x3E0
}; // size - 0x3E0


class C_OP_MovementRigidAttachToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nScaleControlPoint; // 0x1C4 - 0x1C8
   int32_t m_nScaleCPField; // 0x1C8 - 0x1CC
   ParticleAttributeIndex_t m_nFieldInput; // 0x1CC - 0x1D0
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1D0 - 0x1D4
   bool m_bOffsetLocal; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0xB]; // 0x1D5 - 0x1E0
}; // size - 0x1E0


class C_OP_MovementRotateParticleAroundAxis /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionVecInput m_vecRotAxis; // 0x1C0 - 0x818
   CParticleCollectionFloatInput m_flRotRate; // 0x818 - 0x970
   CParticleTransformInput m_TransformInput; // 0x970 - 0x9D8
   bool m_bLocalSpace; // 0x9D8 - 0x9D9
   unsigned char pad_9D9[0x7]; // 0x9D9 - 0x9E0
}; // size - 0x9E0


class C_OP_MovementSkinnedPositionFromCPSnapshot /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nSnapshotControlPointNumber; // 0x1C0 - 0x1C4
   int32_t m_nControlPointNumber; // 0x1C4 - 0x1C8
   bool m_bRandom; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x3]; // 0x1C9 - 0x1CC
   int32_t m_nRandomSeed; // 0x1CC - 0x1D0
   bool m_bSetNormal; // 0x1D0 - 0x1D1
   bool m_bSetRadius; // 0x1D1 - 0x1D2
   unsigned char pad_1D2[0x2]; // 0x1D2 - 0x1D4
   SnapshotIndexType_t m_nIndexType; // 0x1D4 - 0x1D8
   CPerParticleFloatInput m_flReadIndex; // 0x1D8 - 0x330
   CParticleCollectionFloatInput m_flIncrement; // 0x330 - 0x488
   CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x488 - 0x5E0
   CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x5E0 - 0x738
   CPerParticleFloatInput m_flInterpolation; // 0x738 - 0x890
}; // size - 0x890


class C_OP_Noise /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flOutputMin; // 0x1C4 - 0x1C8
   float m_flOutputMax; // 0x1C8 - 0x1CC
   float m_fl4NoiseScale; // 0x1CC - 0x1D0
   bool m_bAdditive; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x3]; // 0x1D1 - 0x1D4
   float m_flNoiseAnimationTimeScale; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x8]; // 0x1D8 - 0x1E0
}; // size - 0x1E0


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
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


class C_OP_NormalizeVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flScale; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class C_OP_Orient2DRelToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRotOffset; // 0x1C0 - 0x1C4
   float m_flSpinStrength; // 0x1C4 - 0x1C8
   int32_t m_nCP; // 0x1C8 - 0x1CC
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_OrientTo2dDirection /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRotOffset; // 0x1C0 - 0x1C4
   float m_flSpinStrength; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_OscillateScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_RateMin; // 0x1C0 - 0x1C4
   float m_RateMax; // 0x1C4 - 0x1C8
   float m_FrequencyMin; // 0x1C8 - 0x1CC
   float m_FrequencyMax; // 0x1CC - 0x1D0
   ParticleAttributeIndex_t m_nField; // 0x1D0 - 0x1D4
   bool m_bProportional; // 0x1D4 - 0x1D5
   bool m_bProportionalOp; // 0x1D5 - 0x1D6
   unsigned char pad_1D6[0x2]; // 0x1D6 - 0x1D8
   float m_flStartTime_min; // 0x1D8 - 0x1DC
   float m_flStartTime_max; // 0x1DC - 0x1E0
   float m_flEndTime_min; // 0x1E0 - 0x1E4
   float m_flEndTime_max; // 0x1E4 - 0x1E8
   float m_flOscMult; // 0x1E8 - 0x1EC
   float m_flOscAdd; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_OP_OscillateScalarSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_Rate; // 0x1C0 - 0x1C4
   float m_Frequency; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nField; // 0x1C8 - 0x1CC
   float m_flOscMult; // 0x1CC - 0x1D0
   float m_flOscAdd; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x2C]; // 0x1D4 - 0x200
}; // size - 0x200


class C_OP_OscillateVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_RateMin; // 0x1C0 - 0x1CC
   Vector m_RateMax; // 0x1CC - 0x1D8
   Vector m_FrequencyMin; // 0x1D8 - 0x1E4
   Vector m_FrequencyMax; // 0x1E4 - 0x1F0
   ParticleAttributeIndex_t m_nField; // 0x1F0 - 0x1F4
   bool m_bProportional; // 0x1F4 - 0x1F5
   bool m_bProportionalOp; // 0x1F5 - 0x1F6
   bool m_bOffset; // 0x1F6 - 0x1F7
   unsigned char pad_1F7[0x1]; // 0x1F7 - 0x1F8
   float m_flStartTime_min; // 0x1F8 - 0x1FC
   float m_flStartTime_max; // 0x1FC - 0x200
   float m_flEndTime_min; // 0x200 - 0x204
   float m_flEndTime_max; // 0x204 - 0x208
   CPerParticleFloatInput m_flOscMult; // 0x208 - 0x360
   CPerParticleFloatInput m_flOscAdd; // 0x360 - 0x4B8
   CPerParticleFloatInput m_flRateScale; // 0x4B8 - 0x610
}; // size - 0x610


class C_OP_OscillateVectorSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_Rate; // 0x1C0 - 0x1CC
   Vector m_Frequency; // 0x1CC - 0x1D8
   ParticleAttributeIndex_t m_nField; // 0x1D8 - 0x1DC
   float m_flOscMult; // 0x1DC - 0x1E0
   float m_flOscAdd; // 0x1E0 - 0x1E4
   bool m_bOffset; // 0x1E4 - 0x1E5
   unsigned char pad_1E5[0xB]; // 0x1E5 - 0x1F0
}; // size - 0x1F0


class C_OP_ParentVortices /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flForceScale; // 0x1D0 - 0x1D4
   Vector m_vecTwistAxis; // 0x1D4 - 0x1E0
   bool m_bFlipBasedOnYaw; // 0x1E0 - 0x1E1
   unsigned char pad_1E1[0xF]; // 0x1E1 - 0x1F0
}; // size - 0x1F0


class C_OP_PerParticleForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   CPerParticleFloatInput m_flForceScale; // 0x1D0 - 0x328
   CPerParticleVecInput m_vForce; // 0x328 - 0x980
   int32_t m_nCP; // 0x980 - 0x984
   unsigned char pad_984[0xC]; // 0x984 - 0x990
}; // size - 0x990


class C_OP_PercentageBetweenTransforms /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flInputMin; // 0x1C4 - 0x1C8
   float m_flInputMax; // 0x1C8 - 0x1CC
   float m_flOutputMin; // 0x1CC - 0x1D0
   float m_flOutputMax; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
   CParticleTransformInput m_TransformStart; // 0x1D8 - 0x240
   CParticleTransformInput m_TransformEnd; // 0x240 - 0x2A8
   ParticleSetMethod_t m_nSetMethod; // 0x2A8 - 0x2AC
   bool m_bActiveRange; // 0x2AC - 0x2AD
   bool m_bRadialCheck; // 0x2AD - 0x2AE
   unsigned char pad_2AE[0x2]; // 0x2AE - 0x2B0
}; // size - 0x2B0


class C_OP_PercentageBetweenTransformsVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flInputMin; // 0x1C4 - 0x1C8
   float m_flInputMax; // 0x1C8 - 0x1CC
   Vector m_vecOutputMin; // 0x1CC - 0x1D8
   Vector m_vecOutputMax; // 0x1D8 - 0x1E4
   unsigned char pad_1E4[0x4]; // 0x1E4 - 0x1E8
   CParticleTransformInput m_TransformStart; // 0x1E8 - 0x250
   CParticleTransformInput m_TransformEnd; // 0x250 - 0x2B8
   ParticleSetMethod_t m_nSetMethod; // 0x2B8 - 0x2BC
   bool m_bActiveRange; // 0x2BC - 0x2BD
   bool m_bRadialCheck; // 0x2BD - 0x2BE
   unsigned char pad_2BE[0x2]; // 0x2BE - 0x2C0
}; // size - 0x2C0


class C_OP_PinParticleToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionVecInput m_vecOffset; // 0x1C8 - 0x820
   bool m_bOffsetLocal; // 0x820 - 0x821
   unsigned char pad_821[0x3]; // 0x821 - 0x824
   ParticleSelection_t m_nParticleSelection; // 0x824 - 0x828
   CParticleCollectionFloatInput m_nParticleNumber; // 0x828 - 0x980
   ParticlePinDistance_t m_nPinBreakType; // 0x980 - 0x984
   unsigned char pad_984[0x4]; // 0x984 - 0x988
   CParticleCollectionFloatInput m_flBreakDistance; // 0x988 - 0xAE0
   CParticleCollectionFloatInput m_flBreakSpeed; // 0xAE0 - 0xC38
   CParticleCollectionFloatInput m_flAge; // 0xC38 - 0xD90
   int32_t m_nBreakControlPointNumber; // 0xD90 - 0xD94
   int32_t m_nBreakControlPointNumber2; // 0xD94 - 0xD98
   CParticleCollectionFloatInput m_flBreakValue; // 0xD98 - 0xEF0
   CPerParticleFloatInput m_flInterpolation; // 0xEF0 - 0x1048
   unsigned char pad_1048[0x8]; // 0x1048 - 0x1050
}; // size - 0x1050


class C_OP_PlanarConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   Vector m_PointOnPlane; // 0x1C0 - 0x1CC
   Vector m_PlaneNormal; // 0x1CC - 0x1D8
   int32_t m_nControlPointNumber; // 0x1D8 - 0x1DC
   bool m_bGlobalOrigin; // 0x1DC - 0x1DD
   bool m_bGlobalNormal; // 0x1DD - 0x1DE
   unsigned char pad_1DE[0x2]; // 0x1DE - 0x1E0
   CPerParticleFloatInput m_flRadiusScale; // 0x1E0 - 0x338
   CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x338 - 0x490
   bool m_bUseOldCode; // 0x490 - 0x491
   unsigned char pad_491[0xF]; // 0x491 - 0x4A0
}; // size - 0x4A0


class C_OP_PlaneCull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nPlaneControlPoint; // 0x1C0 - 0x1C4
   Vector m_vecPlaneDirection; // 0x1C4 - 0x1D0
   bool m_bLocalSpace; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x3]; // 0x1D1 - 0x1D4
   float m_flPlaneOffset; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x8]; // 0x1D8 - 0x1E0
}; // size - 0x1E0


class C_OP_PlayEndCapWhenFinished /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bFireOnEmissionEnd; // 0x1D0 - 0x1D1
   bool m_bIncludeChildren; // 0x1D1 - 0x1D2
   unsigned char pad_1D2[0xE]; // 0x1D2 - 0x1E0
}; // size - 0x1E0


class C_OP_PointVectorAtNextParticle /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleFloatInput m_flInterpolation; // 0x1C8 - 0x320
}; // size - 0x320


class C_OP_PositionLock /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   float m_flStartTime_min; // 0x228 - 0x22C
   float m_flStartTime_max; // 0x22C - 0x230
   float m_flStartTime_exp; // 0x230 - 0x234
   float m_flEndTime_min; // 0x234 - 0x238
   float m_flEndTime_max; // 0x238 - 0x23C
   float m_flEndTime_exp; // 0x23C - 0x240
   float m_flRange; // 0x240 - 0x244
   unsigned char pad_244[0x4]; // 0x244 - 0x248
   CParticleCollectionFloatInput m_flRangeBias; // 0x248 - 0x3A0
   float m_flJumpThreshold; // 0x3A0 - 0x3A4
   float m_flPrevPosScale; // 0x3A4 - 0x3A8
   bool m_bLockRot; // 0x3A8 - 0x3A9
   unsigned char pad_3A9[0x7]; // 0x3A9 - 0x3B0
   CParticleCollectionVecInput m_vecScale; // 0x3B0 - 0xA08
   ParticleAttributeIndex_t m_nFieldOutput; // 0xA08 - 0xA0C
   ParticleAttributeIndex_t m_nFieldOutputPrev; // 0xA0C - 0xA10
}; // size - 0xA10


class C_OP_QuantizeCPComponent /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flInputValue; // 0x1D0 - 0x328
   int32_t m_nCPOutput; // 0x328 - 0x32C
   int32_t m_nOutVectorField; // 0x32C - 0x330
   CParticleCollectionFloatInput m_flQuantizeValue; // 0x330 - 0x488
   unsigned char pad_488[0x8]; // 0x488 - 0x490
}; // size - 0x490


class C_OP_QuantizeFloat /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleFloatInput m_InputValue; // 0x1C0 - 0x318
   ParticleAttributeIndex_t m_nOutputField; // 0x318 - 0x31C
   unsigned char pad_31C[0x24]; // 0x31C - 0x340
}; // size - 0x340


class C_OP_RadiusDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flMinRadius; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


class C_OP_RampCPLinearRandom /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nOutControlPointNumber; // 0x1D0 - 0x1D4
   Vector m_vecRateMin; // 0x1D4 - 0x1E0
   Vector m_vecRateMax; // 0x1E0 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_OP_RampScalarLinearSimple /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_Rate; // 0x1C0 - 0x1C4
   float m_flStartTime; // 0x1C4 - 0x1C8
   float m_flEndTime; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x24]; // 0x1CC - 0x1F0
   ParticleAttributeIndex_t m_nField; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0xC]; // 0x1F4 - 0x200
}; // size - 0x200


class C_OP_ReadFromNeighboringParticle /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   int32_t m_nIncrement; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CPerParticleFloatInput m_DistanceCheck; // 0x1D0 - 0x328
   CPerParticleFloatInput m_flInterpolation; // 0x328 - 0x480
}; // size - 0x480


class C_OP_ReinitializeScalarEndCap /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flOutputMin; // 0x1C4 - 0x1C8
   float m_flOutputMax; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_RemapAverageHitboxSpeedtoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInControlPointNumber; // 0x1D0 - 0x1D4
   int32_t m_nOutControlPointNumber; // 0x1D4 - 0x1D8
   int32_t m_nField; // 0x1D8 - 0x1DC
   ParticleHitboxDataSelection_t m_nHitboxDataType; // 0x1DC - 0x1E0
   CParticleCollectionFloatInput m_flInputMin; // 0x1E0 - 0x338
   CParticleCollectionFloatInput m_flInputMax; // 0x338 - 0x490
   CParticleCollectionFloatInput m_flOutputMin; // 0x490 - 0x5E8
   CParticleCollectionFloatInput m_flOutputMax; // 0x5E8 - 0x740
   int32_t m_nHeightControlPointNumber; // 0x740 - 0x744
   unsigned char pad_744[0x4]; // 0x744 - 0x748
   CParticleCollectionVecInput m_vecComparisonVelocity; // 0x748 - 0xDA0
   char m_HitboxSetName[128]; // 0xDA0 - 0xE20
}; // size - 0xE20


class C_OP_RemapAverageScalarValuetoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nOutControlPointNumber; // 0x1D0 - 0x1D4
   int32_t m_nOutVectorField; // 0x1D4 - 0x1D8
   ParticleAttributeIndex_t m_nField; // 0x1D8 - 0x1DC
   float m_flInputMin; // 0x1DC - 0x1E0
   float m_flInputMax; // 0x1E0 - 0x1E4
   float m_flOutputMin; // 0x1E4 - 0x1E8
   float m_flOutputMax; // 0x1E8 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_OP_RemapBoundingVolumetoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nOutControlPointNumber; // 0x1D0 - 0x1D4
   float m_flInputMin; // 0x1D4 - 0x1D8
   float m_flInputMax; // 0x1D8 - 0x1DC
   float m_flOutputMin; // 0x1DC - 0x1E0
   float m_flOutputMax; // 0x1E0 - 0x1E4
   unsigned char pad_1E4[0xC]; // 0x1E4 - 0x1F0
}; // size - 0x1F0


class C_OP_RemapCPVelocityToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPoint; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flScale; // 0x1C8 - 0x1CC
   bool m_bNormalize; // 0x1CC - 0x1CD
   unsigned char pad_1CD[0x3]; // 0x1CD - 0x1D0
}; // size - 0x1D0


class C_OP_RemapCPtoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInputControlPoint; // 0x1D0 - 0x1D4
   int32_t m_nOutputControlPoint; // 0x1D4 - 0x1D8
   int32_t m_nInputField; // 0x1D8 - 0x1DC
   int32_t m_nOutputField; // 0x1DC - 0x1E0
   float m_flInputMin; // 0x1E0 - 0x1E4
   float m_flInputMax; // 0x1E4 - 0x1E8
   float m_flOutputMin; // 0x1E8 - 0x1EC
   float m_flOutputMax; // 0x1EC - 0x1F0
   bool m_bDerivative; // 0x1F0 - 0x1F1
   unsigned char pad_1F1[0x3]; // 0x1F1 - 0x1F4
   float m_flInterpRate; // 0x1F4 - 0x1F8
   unsigned char pad_1F8[0x8]; // 0x1F8 - 0x200
}; // size - 0x200


class C_OP_RemapCPtoScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
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
   float m_flInterpRate; // 0x1E4 - 0x1E8
   ParticleSetMethod_t m_nSetMethod; // 0x1E8 - 0x1EC
   unsigned char pad_1EC[0x4]; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_OP_RemapCPtoVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   int32_t m_nLocalSpaceCP; // 0x1C8 - 0x1CC
   Vector m_vInputMin; // 0x1CC - 0x1D8
   Vector m_vInputMax; // 0x1D8 - 0x1E4
   Vector m_vOutputMin; // 0x1E4 - 0x1F0
   Vector m_vOutputMax; // 0x1F0 - 0x1FC
   float m_flStartTime; // 0x1FC - 0x200
   float m_flEndTime; // 0x200 - 0x204
   float m_flInterpRate; // 0x204 - 0x208
   ParticleSetMethod_t m_nSetMethod; // 0x208 - 0x20C
   bool m_bOffset; // 0x20C - 0x20D
   bool m_bAccelerate; // 0x20D - 0x20E
   unsigned char pad_20E[0x2]; // 0x20E - 0x210
}; // size - 0x210


class C_OP_RemapControlPointDirectionToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flScale; // 0x1C4 - 0x1C8
   int32_t m_nControlPointNumber; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_RemapCrossProductOfTwoVectorsToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleVecInput m_InputVec1; // 0x1C0 - 0x818
   CPerParticleVecInput m_InputVec2; // 0x818 - 0xE70
   ParticleAttributeIndex_t m_nFieldOutput; // 0xE70 - 0xE74
   bool m_bNormalize; // 0xE74 - 0xE75
   unsigned char pad_E75[0xB]; // 0xE75 - 0xE80
}; // size - 0xE80


class C_OP_RemapDensityGradientToVectorAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRadiusScale; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class C_OP_RemapDensityToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flRadiusScale; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flDensityMin; // 0x1C8 - 0x1CC
   float m_flDensityMax; // 0x1CC - 0x1D0
   Vector m_vecOutputMin; // 0x1D0 - 0x1DC
   Vector m_vecOutputMax; // 0x1DC - 0x1E8
   bool m_bUseParentDensity; // 0x1E8 - 0x1E9
   unsigned char pad_1E9[0x3]; // 0x1E9 - 0x1EC
   int32_t m_nVoxelGridResolution; // 0x1EC - 0x1F0
}; // size - 0x1F0


class C_OP_RemapDirectionToCPToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCP; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flScale; // 0x1C8 - 0x1CC
   float m_flOffsetRot; // 0x1CC - 0x1D0
   Vector m_vecOffsetAxis; // 0x1D0 - 0x1DC
   bool m_bNormalize; // 0x1DC - 0x1DD
   unsigned char pad_1DD[0x3]; // 0x1DD - 0x1E0
   ParticleAttributeIndex_t m_nFieldStrength; // 0x1E0 - 0x1E4
   unsigned char pad_1E4[0xC]; // 0x1E4 - 0x1F0
}; // size - 0x1F0


class C_OP_RemapDistanceToLineSegmentToVector /* "particles" */ : public C_OP_RemapDistanceToLineSegmentBase /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1E0 - 0x1E4
   Vector m_vMinOutputValue; // 0x1E4 - 0x1F0
   Vector m_vMaxOutputValue; // 0x1F0 - 0x1FC
   unsigned char pad_1FC[0x4]; // 0x1FC - 0x200
}; // size - 0x200


class C_OP_RemapDotProductToCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInputCP1; // 0x1D0 - 0x1D4
   int32_t m_nInputCP2; // 0x1D4 - 0x1D8
   int32_t m_nOutputCP; // 0x1D8 - 0x1DC
   int32_t m_nOutVectorField; // 0x1DC - 0x1E0
   CParticleCollectionFloatInput m_flInputMin; // 0x1E0 - 0x338
   CParticleCollectionFloatInput m_flInputMax; // 0x338 - 0x490
   CParticleCollectionFloatInput m_flOutputMin; // 0x490 - 0x5E8
   CParticleCollectionFloatInput m_flOutputMax; // 0x5E8 - 0x740
}; // size - 0x740


class C_OP_RemapDotProductToScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nInputCP1; // 0x1C0 - 0x1C4
   int32_t m_nInputCP2; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C8 - 0x1CC
   float m_flInputMin; // 0x1CC - 0x1D0
   float m_flInputMax; // 0x1D0 - 0x1D4
   float m_flOutputMin; // 0x1D4 - 0x1D8
   float m_flOutputMax; // 0x1D8 - 0x1DC
   bool m_bUseParticleVelocity; // 0x1DC - 0x1DD
   unsigned char pad_1DD[0x3]; // 0x1DD - 0x1E0
   ParticleSetMethod_t m_nSetMethod; // 0x1E0 - 0x1E4
   bool m_bActiveRange; // 0x1E4 - 0x1E5
   bool m_bUseParticleNormal; // 0x1E5 - 0x1E6
   unsigned char pad_1E6[0xA]; // 0x1E6 - 0x1F0
}; // size - 0x1F0


class C_OP_RemapExternalWindToCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP; // 0x1D0 - 0x1D4
   int32_t m_nCPOutput; // 0x1D4 - 0x1D8
   CParticleCollectionVecInput m_vecScale; // 0x1D8 - 0x830
   bool m_bSetMagnitude; // 0x830 - 0x831
   unsigned char pad_831[0x3]; // 0x831 - 0x834
   int32_t m_nOutVectorField; // 0x834 - 0x838
   unsigned char pad_838[0x8]; // 0x838 - 0x840
}; // size - 0x840


class C_OP_RemapModelVolumetoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   BBoxVolumeType_t m_nBBoxType; // 0x1D0 - 0x1D4
   int32_t m_nInControlPointNumber; // 0x1D4 - 0x1D8
   int32_t m_nOutControlPointNumber; // 0x1D8 - 0x1DC
   int32_t m_nOutControlPointMaxNumber; // 0x1DC - 0x1E0
   int32_t m_nField; // 0x1E0 - 0x1E4
   float m_flInputMin; // 0x1E4 - 0x1E8
   float m_flInputMax; // 0x1E8 - 0x1EC
   float m_flOutputMin; // 0x1EC - 0x1F0
   float m_flOutputMax; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0xC]; // 0x1F4 - 0x200
}; // size - 0x200


class C_OP_RemapNamedModelBodyPartOnceTimed /* "particles" */ : public C_OP_RemapNamedModelElementOnceTimed /* "particles" */
{
public:
   unsigned char pad_0[0x220]; // 0x0 - 0x220
}; // size - 0x220


class C_OP_RemapNamedModelMeshGroupEndCap /* "particles" */ : public C_OP_RemapNamedModelElementEndCap /* "particles" */
{
public:
   unsigned char pad_0[0x220]; // 0x0 - 0x220
}; // size - 0x220


class C_OP_RemapNamedModelMeshGroupOnceTimed /* "particles" */ : public C_OP_RemapNamedModelElementOnceTimed /* "particles" */
{
public:
   unsigned char pad_0[0x220]; // 0x0 - 0x220
}; // size - 0x220


class C_OP_RemapNamedModelSequenceEndCap /* "particles" */ : public C_OP_RemapNamedModelElementEndCap /* "particles" */
{
public:
   unsigned char pad_0[0x220]; // 0x0 - 0x220
}; // size - 0x220


class C_OP_RemapParticleCountOnScalarEndCap /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   int32_t m_nInputMin; // 0x1C4 - 0x1C8
   int32_t m_nInputMax; // 0x1C8 - 0x1CC
   float m_flOutputMin; // 0x1CC - 0x1D0
   float m_flOutputMax; // 0x1D0 - 0x1D4
   bool m_bBackwards; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0x3]; // 0x1D5 - 0x1D8
   ParticleSetMethod_t m_nSetMethod; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_RemapParticleCountToScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_nInputMin; // 0x1C8 - 0x320
   CParticleCollectionFloatInput m_nInputMax; // 0x320 - 0x478
   CParticleCollectionFloatInput m_flOutputMin; // 0x478 - 0x5D0
   CParticleCollectionFloatInput m_flOutputMax; // 0x5D0 - 0x728
   bool m_bActiveRange; // 0x728 - 0x729
   unsigned char pad_729[0x3]; // 0x729 - 0x72C
   ParticleSetMethod_t m_nSetMethod; // 0x72C - 0x730
}; // size - 0x730


class C_OP_RemapSDFDistanceToScalarAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flMinDistance; // 0x1C8 - 0x320
   CParticleCollectionFloatInput m_flMaxDistance; // 0x320 - 0x478
   CParticleCollectionFloatInput m_flValueBelowMin; // 0x478 - 0x5D0
   CParticleCollectionFloatInput m_flValueAtMin; // 0x5D0 - 0x728
   CParticleCollectionFloatInput m_flValueAtMax; // 0x728 - 0x880
   CParticleCollectionFloatInput m_flValueAboveMax; // 0x880 - 0x9D8
   unsigned char pad_9D8[0x8]; // 0x9D8 - 0x9E0
}; // size - 0x9E0


class C_OP_RemapSDFDistanceToVectorAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nVectorFieldOutput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1C4 - 0x1C8
   CParticleCollectionFloatInput m_flMinDistance; // 0x1C8 - 0x320
   CParticleCollectionFloatInput m_flMaxDistance; // 0x320 - 0x478
   Vector m_vValueBelowMin; // 0x478 - 0x484
   Vector m_vValueAtMin; // 0x484 - 0x490
   Vector m_vValueAtMax; // 0x490 - 0x49C
   Vector m_vValueAboveMax; // 0x49C - 0x4A8
   unsigned char pad_4A8[0x8]; // 0x4A8 - 0x4B0
}; // size - 0x4B0


class C_OP_RemapSDFGradientToVectorAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


class C_OP_RemapScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flInputMin; // 0x1C8 - 0x1CC
   float m_flInputMax; // 0x1CC - 0x1D0
   float m_flOutputMin; // 0x1D0 - 0x1D4
   float m_flOutputMax; // 0x1D4 - 0x1D8
   bool m_bOldCode; // 0x1D8 - 0x1D9
   unsigned char pad_1D9[0x7]; // 0x1D9 - 0x1E0
}; // size - 0x1E0


class C_OP_RemapScalarEndCap /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flInputMin; // 0x1C8 - 0x1CC
   float m_flInputMax; // 0x1CC - 0x1D0
   float m_flOutputMin; // 0x1D0 - 0x1D4
   float m_flOutputMax; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x8]; // 0x1D8 - 0x1E0
}; // size - 0x1E0


class C_OP_RemapScalarOnceTimed /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bProportional; // 0x1C0 - 0x1C1
   unsigned char pad_1C1[0x3]; // 0x1C1 - 0x1C4
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C4 - 0x1C8
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C8 - 0x1CC
   float m_flInputMin; // 0x1CC - 0x1D0
   float m_flInputMax; // 0x1D0 - 0x1D4
   float m_flOutputMin; // 0x1D4 - 0x1D8
   float m_flOutputMax; // 0x1D8 - 0x1DC
   float m_flRemapTime; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_RemapSpeed /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flInputMin; // 0x1C4 - 0x1C8
   float m_flInputMax; // 0x1C8 - 0x1CC
   float m_flOutputMin; // 0x1CC - 0x1D0
   float m_flOutputMax; // 0x1D0 - 0x1D4
   ParticleSetMethod_t m_nSetMethod; // 0x1D4 - 0x1D8
   bool m_bIgnoreDelta; // 0x1D8 - 0x1D9
   unsigned char pad_1D9[0x7]; // 0x1D9 - 0x1E0
}; // size - 0x1E0


class C_OP_RemapSpeedtoCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInControlPointNumber; // 0x1D0 - 0x1D4
   int32_t m_nOutControlPointNumber; // 0x1D4 - 0x1D8
   int32_t m_nField; // 0x1D8 - 0x1DC
   float m_flInputMin; // 0x1DC - 0x1E0
   float m_flInputMax; // 0x1E0 - 0x1E4
   float m_flOutputMin; // 0x1E4 - 0x1E8
   float m_flOutputMax; // 0x1E8 - 0x1EC
   bool m_bUseDeltaV; // 0x1EC - 0x1ED
   unsigned char pad_1ED[0x3]; // 0x1ED - 0x1F0
}; // size - 0x1F0


class C_OP_RemapTransformOrientationToRotations /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   Vector m_vecRotation; // 0x228 - 0x234
   bool m_bUseQuat; // 0x234 - 0x235
   bool m_bWriteNormal; // 0x235 - 0x236
   unsigned char pad_236[0xA]; // 0x236 - 0x240
}; // size - 0x240


class C_OP_RemapTransformOrientationToYaw /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   ParticleAttributeIndex_t m_nFieldOutput; // 0x228 - 0x22C
   float m_flRotOffset; // 0x22C - 0x230
   float m_flSpinStrength; // 0x230 - 0x234
   unsigned char pad_234[0xC]; // 0x234 - 0x240
}; // size - 0x240


class C_OP_RemapTransformToVelocity /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleTransformInput m_TransformInput; // 0x1C0 - 0x228
   unsigned char pad_228[0x8]; // 0x228 - 0x230
}; // size - 0x230


class C_OP_RemapTransformVisibilityToScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleSetMethod_t m_nSetMethod; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleTransformInput m_TransformInput; // 0x1C8 - 0x230
   ParticleAttributeIndex_t m_nFieldOutput; // 0x230 - 0x234
   float m_flInputMin; // 0x234 - 0x238
   float m_flInputMax; // 0x238 - 0x23C
   float m_flOutputMin; // 0x23C - 0x240
   float m_flOutputMax; // 0x240 - 0x244
   float m_flRadius; // 0x244 - 0x248
   unsigned char pad_248[0x8]; // 0x248 - 0x250
}; // size - 0x250


class C_OP_RemapTransformVisibilityToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleSetMethod_t m_nSetMethod; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CParticleTransformInput m_TransformInput; // 0x1C8 - 0x230
   ParticleAttributeIndex_t m_nFieldOutput; // 0x230 - 0x234
   float m_flInputMin; // 0x234 - 0x238
   float m_flInputMax; // 0x238 - 0x23C
   Vector m_vecOutputMin; // 0x23C - 0x248
   Vector m_vecOutputMax; // 0x248 - 0x254
   float m_flRadius; // 0x254 - 0x258
   unsigned char pad_258[0x8]; // 0x258 - 0x260
}; // size - 0x260


class C_OP_RemapVectorComponentToScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   int32_t m_nComponent; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_RemapVectortoCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nOutControlPointNumber; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C4 - 0x1C8
   int32_t m_nParticleNumber; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OP_RemapVelocityToVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   float m_flScale; // 0x1C4 - 0x1C8
   bool m_bNormalize; // 0x1C8 - 0x1C9
   unsigned char pad_1C9[0x7]; // 0x1C9 - 0x1D0
}; // size - 0x1D0


class C_OP_RemapVisibilityScalar /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   float m_flInputMin; // 0x1C8 - 0x1CC
   float m_flInputMax; // 0x1CC - 0x1D0
   float m_flOutputMin; // 0x1D0 - 0x1D4
   float m_flOutputMax; // 0x1D4 - 0x1D8
   float m_flRadiusScale; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_RenderAsModels /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CUtlVector< ModelReference_t > m_ModelList; // 0x200 - 0x218
   unsigned char pad_218[0x4]; // 0x218 - 0x21C
   float m_flModelScale; // 0x21C - 0x220
   bool m_bFitToModelSize; // 0x220 - 0x221
   bool m_bNonUniformScaling; // 0x221 - 0x222
   unsigned char pad_222[0x2]; // 0x222 - 0x224
   ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x224 - 0x228
   ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x228 - 0x22C
   ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x22C - 0x230
   int32_t m_nSizeCullBloat; // 0x230 - 0x234
   unsigned char pad_234[0xC]; // 0x234 - 0x240
}; // size - 0x240


class C_OP_RenderCables /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flRadiusScale; // 0x200 - 0x358
   CParticleCollectionFloatInput m_flAlphaScale; // 0x358 - 0x4B0
   CParticleCollectionVecInput m_vecColorScale; // 0x4B0 - 0xB08
   ParticleColorBlendType_t m_nColorBlendType; // 0xB08 - 0xB0C
   unsigned char pad_B0C[0x4]; // 0xB0C - 0xB10
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xB10 - 0xB18
   TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xB18 - 0xB1C
   unsigned char pad_B1C[0x4]; // 0xB1C - 0xB20
   CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xB20 - 0xC78
   CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xC78 - 0xDD0
   CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xDD0 - 0xF28
   CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xF28 - 0x1080
   CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x1080 - 0x11D8
   CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x11D8 - 0x1330
   bool m_bDrawCableCaps; // 0x1330 - 0x1331
   unsigned char pad_1331[0x3]; // 0x1331 - 0x1334
   float m_flCapRoundness; // 0x1334 - 0x1338
   float m_flCapOffsetAmount; // 0x1338 - 0x133C
   float m_flTessScale; // 0x133C - 0x1340
   int32_t m_nMinTesselation; // 0x1340 - 0x1344
   int32_t m_nMaxTesselation; // 0x1344 - 0x1348
   int32_t m_nRoundness; // 0x1348 - 0x134C
   unsigned char pad_134C[0x4]; // 0x134C - 0x1350
   CParticleTransformInput m_LightingTransform; // 0x1350 - 0x13B8
   CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x13B8 - 0x13D0
   unsigned char pad_13D0[0x18]; // 0x13D0 - 0x13E8
   CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x13E8 - 0x1400
   unsigned char pad_1400[0x20]; // 0x1400 - 0x1420
}; // size - 0x1420


class C_OP_RenderClothForce /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   unsigned char pad_0[0x200]; // 0x0 - 0x200
}; // size - 0x200


class C_OP_RenderDeferredLight /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   bool m_bUseAlphaTestWindow; // 0x200 - 0x201
   bool m_bUseTexture; // 0x201 - 0x202
   unsigned char pad_202[0x2]; // 0x202 - 0x204
   float m_flRadiusScale; // 0x204 - 0x208
   float m_flAlphaScale; // 0x208 - 0x20C
   ParticleAttributeIndex_t m_nAlpha2Field; // 0x20C - 0x210
   CParticleCollectionVecInput m_vecColorScale; // 0x210 - 0x868
   ParticleColorBlendType_t m_nColorBlendType; // 0x868 - 0x86C
   float m_flLightDistance; // 0x86C - 0x870
   float m_flStartFalloff; // 0x870 - 0x874
   float m_flDistanceFalloff; // 0x874 - 0x878
   float m_flSpotFoV; // 0x878 - 0x87C
   ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x87C - 0x880
   ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x880 - 0x884
   ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x884 - 0x888
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x888 - 0x890
   int32_t m_nHSVShiftControlPoint; // 0x890 - 0x894
   unsigned char pad_894[0xC]; // 0x894 - 0x8A0
}; // size - 0x8A0


class C_OP_RenderFlattenGrass /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flFlattenStrength; // 0x200 - 0x204
   ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x204 - 0x208
   float m_flRadiusScale; // 0x208 - 0x20C
   unsigned char pad_20C[0x4]; // 0x20C - 0x210
}; // size - 0x210


class C_OP_RenderGpuImplicit /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   bool m_bUsePerParticleRadius; // 0x200 - 0x201
   unsigned char pad_201[0x7]; // 0x201 - 0x208
   CParticleCollectionRendererFloatInput m_fGridSize; // 0x208 - 0x360
   CParticleCollectionRendererFloatInput m_fRadiusScale; // 0x360 - 0x4B8
   CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // 0x4B8 - 0x610
   int32_t m_nScaleCP; // 0x610 - 0x614
   unsigned char pad_614[0x4]; // 0x614 - 0x618
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x618 - 0x620
}; // size - 0x620


class C_OP_RenderLightBeam /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CParticleCollectionVecInput m_vColorBlend; // 0x200 - 0x858
   ParticleColorBlendType_t m_nColorBlendType; // 0x858 - 0x85C
   unsigned char pad_85C[0x4]; // 0x85C - 0x860
   CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x860 - 0x9B8
   bool m_bCastShadows; // 0x9B8 - 0x9B9
   unsigned char pad_9B9[0x7]; // 0x9B9 - 0x9C0
   CParticleCollectionFloatInput m_flSkirt; // 0x9C0 - 0xB18
   CParticleCollectionFloatInput m_flRange; // 0xB18 - 0xC70
   CParticleCollectionFloatInput m_flThickness; // 0xC70 - 0xDC8
   unsigned char pad_DC8[0x8]; // 0xDC8 - 0xDD0
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


class C_OP_RenderOmni2Light /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x200 - 0x204
   unsigned char pad_204[0x4]; // 0x204 - 0x208
   CParticleCollectionVecInput m_vColorBlend; // 0x208 - 0x860
   ParticleColorBlendType_t m_nColorBlendType; // 0x860 - 0x864
   ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x864 - 0x868
   CPerParticleFloatInput m_flBrightnessLumens; // 0x868 - 0x9C0
   CPerParticleFloatInput m_flBrightnessCandelas; // 0x9C0 - 0xB18
   bool m_bCastShadows; // 0xB18 - 0xB19
   unsigned char pad_B19[0x7]; // 0xB19 - 0xB20
   CPerParticleFloatInput m_flLuminaireRadius; // 0xB20 - 0xC78
   CPerParticleFloatInput m_flSkirt; // 0xC78 - 0xDD0
   CPerParticleFloatInput m_flRange; // 0xDD0 - 0xF28
   CPerParticleFloatInput m_flInnerConeAngle; // 0xF28 - 0x1080
   CPerParticleFloatInput m_flOuterConeAngle; // 0x1080 - 0x11D8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x11D8 - 0x11E0
   bool m_bSphericalCookie; // 0x11E0 - 0x11E1
   unsigned char pad_11E1[0xF]; // 0x11E1 - 0x11F0
}; // size - 0x11F0


class C_OP_RenderPostProcessing /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   CPerParticleFloatInput m_flPostProcessStrength; // 0x200 - 0x358
   CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x358 - 0x360
   ParticlePostProcessPriorityGroup_t m_nPriority; // 0x360 - 0x364
   unsigned char pad_364[0xC]; // 0x364 - 0x370
}; // size - 0x370


class C_OP_RenderProjected /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   bool m_bProjectCharacter; // 0x200 - 0x201
   bool m_bProjectWorld; // 0x201 - 0x202
   bool m_bProjectWater; // 0x202 - 0x203
   bool m_bFlipHorizontal; // 0x203 - 0x204
   bool m_bEnableProjectedDepthControls; // 0x204 - 0x205
   unsigned char pad_205[0x3]; // 0x205 - 0x208
   float m_flMinProjectionDepth; // 0x208 - 0x20C
   float m_flMaxProjectionDepth; // 0x20C - 0x210
   CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials; // 0x210 - 0x228
   CPerParticleFloatInput m_flMaterialSelection; // 0x228 - 0x380
   float m_flAnimationTimeScale; // 0x380 - 0x384
   bool m_bOrientToNormal; // 0x384 - 0x385
   unsigned char pad_385[0x3]; // 0x385 - 0x388
   CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x388 - 0x3A0
   unsigned char pad_3A0[0x20]; // 0x3A0 - 0x3C0
}; // size - 0x3C0


class C_OP_RenderRopes /* "particles" */ : public CBaseRendererSource2 /* "particles" */
{
public:
   bool m_bEnableFadingAndClamping; // 0x2710 - 0x2711
   unsigned char pad_2711[0x3]; // 0x2711 - 0x2714
   float m_flMinSize; // 0x2714 - 0x2718
   float m_flMaxSize; // 0x2718 - 0x271C
   float m_flStartFadeSize; // 0x271C - 0x2720
   float m_flEndFadeSize; // 0x2720 - 0x2724
   float m_flStartFadeDot; // 0x2724 - 0x2728
   float m_flEndFadeDot; // 0x2728 - 0x272C
   float m_flRadiusTaper; // 0x272C - 0x2730
   int32_t m_nMinTesselation; // 0x2730 - 0x2734
   int32_t m_nMaxTesselation; // 0x2734 - 0x2738
   float m_flTessScale; // 0x2738 - 0x273C
   unsigned char pad_273C[0x4]; // 0x273C - 0x2740
   CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x2740 - 0x2898
   CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x2898 - 0x29F0
   CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x29F0 - 0x2B48
   int32_t m_nTextureVParamsCP; // 0x2B48 - 0x2B4C
   bool m_bClampV; // 0x2B4C - 0x2B4D
   unsigned char pad_2B4D[0x3]; // 0x2B4D - 0x2B50
   int32_t m_nScaleCP1; // 0x2B50 - 0x2B54
   int32_t m_nScaleCP2; // 0x2B54 - 0x2B58
   float m_flScaleVSizeByControlPointDistance; // 0x2B58 - 0x2B5C
   float m_flScaleVScrollByControlPointDistance; // 0x2B5C - 0x2B60
   float m_flScaleVOffsetByControlPointDistance; // 0x2B60 - 0x2B64
   unsigned char pad_2B64[0x1]; // 0x2B64 - 0x2B65
   bool m_bUseScalarForTextureCoordinate; // 0x2B65 - 0x2B66
   unsigned char pad_2B66[0x2]; // 0x2B66 - 0x2B68
   ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2B68 - 0x2B6C
   float m_flScalarAttributeTextureCoordScale; // 0x2B6C - 0x2B70
   bool m_bReverseOrder; // 0x2B70 - 0x2B71
   bool m_bClosedLoop; // 0x2B71 - 0x2B72
   unsigned char pad_2B72[0x2]; // 0x2B72 - 0x2B74
   ParticleOrientationChoiceList_t m_nOrientationType; // 0x2B74 - 0x2B78
   ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2B78 - 0x2B7C
   bool m_bDrawAsOpaque; // 0x2B7C - 0x2B7D
   bool m_bGenerateNormals; // 0x2B7D - 0x2B7E
   unsigned char pad_2B7E[0x2]; // 0x2B7E - 0x2B80
}; // size - 0x2B80


class C_OP_RenderScreenShake /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flDurationScale; // 0x200 - 0x204
   float m_flRadiusScale; // 0x204 - 0x208
   float m_flFrequencyScale; // 0x208 - 0x20C
   float m_flAmplitudeScale; // 0x20C - 0x210
   ParticleAttributeIndex_t m_nRadiusField; // 0x210 - 0x214
   ParticleAttributeIndex_t m_nDurationField; // 0x214 - 0x218
   ParticleAttributeIndex_t m_nFrequencyField; // 0x218 - 0x21C
   ParticleAttributeIndex_t m_nAmplitudeField; // 0x21C - 0x220
   int32_t m_nFilterCP; // 0x220 - 0x224
   unsigned char pad_224[0xC]; // 0x224 - 0x230
}; // size - 0x230


class C_OP_RenderSimpleModelCollection /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   bool m_bCenterOffset; // 0x200 - 0x201
   unsigned char pad_201[0x7]; // 0x201 - 0x208
   CParticleModelInput m_modelInput; // 0x208 - 0x268
   int32_t m_nLOD; // 0x268 - 0x26C
   bool m_bDisableShadows; // 0x26C - 0x26D
   bool m_bAcceptsDecals; // 0x26D - 0x26E
   unsigned char pad_26E[0x12]; // 0x26E - 0x280
}; // size - 0x280


class C_OP_RenderSound /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flDurationScale; // 0x200 - 0x204
   float m_flSndLvlScale; // 0x204 - 0x208
   float m_flPitchScale; // 0x208 - 0x20C
   float m_flVolumeScale; // 0x20C - 0x210
   ParticleAttributeIndex_t m_nSndLvlField; // 0x210 - 0x214
   ParticleAttributeIndex_t m_nDurationField; // 0x214 - 0x218
   ParticleAttributeIndex_t m_nPitchField; // 0x218 - 0x21C
   ParticleAttributeIndex_t m_nVolumeField; // 0x21C - 0x220
   int32_t m_nChannel; // 0x220 - 0x224
   int32_t m_nCPReference; // 0x224 - 0x228
   char m_pszSoundName[256]; // 0x228 - 0x328
   bool m_bSuppressStopSoundEvent; // 0x328 - 0x329
   unsigned char pad_329[0x7]; // 0x329 - 0x330
}; // size - 0x330


class C_OP_RenderText /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   Color m_OutlineColor; // 0x200 - 0x204
   unsigned char pad_204[0x4]; // 0x204 - 0x208
   CUtlString m_DefaultText; // 0x208 - 0x210
}; // size - 0x210


class C_OP_RenderTonemapController /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   float m_flTonemapLevel; // 0x200 - 0x204
   float m_flTonemapWeight; // 0x204 - 0x208
   ParticleAttributeIndex_t m_nTonemapLevelField; // 0x208 - 0x20C
   ParticleAttributeIndex_t m_nTonemapWeightField; // 0x20C - 0x210
}; // size - 0x210


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
   unsigned char pad_3C25[0xB]; // 0x3C25 - 0x3C30
}; // size - 0x3C30


class C_OP_RenderVRHapticEvent /* "particles" */ : public CParticleFunctionRenderer /* "particles" */
{
public:
   ParticleVRHandChoiceList_t m_nHand; // 0x200 - 0x204
   int32_t m_nOutputHandCP; // 0x204 - 0x208
   int32_t m_nOutputField; // 0x208 - 0x20C
   unsigned char pad_20C[0x4]; // 0x20C - 0x210
   CPerParticleFloatInput m_flAmplitude; // 0x210 - 0x368
   unsigned char pad_368[0x8]; // 0x368 - 0x370
}; // size - 0x370


class C_OP_RepeatedTriggerChildGroup /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
   CParticleCollectionFloatInput m_flClusterRefireTime; // 0x1D8 - 0x330
   CParticleCollectionFloatInput m_flClusterSize; // 0x330 - 0x488
   CParticleCollectionFloatInput m_flClusterCooldown; // 0x488 - 0x5E0
   bool m_bLimitChildCount; // 0x5E0 - 0x5E1
   unsigned char pad_5E1[0xF]; // 0x5E1 - 0x5F0
}; // size - 0x5F0


class C_OP_RestartAfterDuration /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flDurationMin; // 0x1C0 - 0x1C4
   float m_flDurationMax; // 0x1C4 - 0x1C8
   int32_t m_nCP; // 0x1C8 - 0x1CC
   int32_t m_nCPField; // 0x1CC - 0x1D0
   int32_t m_nChildGroupID; // 0x1D0 - 0x1D4
   bool m_bOnlyChildren; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0xB]; // 0x1D5 - 0x1E0
}; // size - 0x1E0


class C_OP_RopeSpringConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flRestLength; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_flMinDistance; // 0x318 - 0x470
   CParticleCollectionFloatInput m_flMaxDistance; // 0x470 - 0x5C8
   float m_flAdjustmentScale; // 0x5C8 - 0x5CC
   unsigned char pad_5CC[0x4]; // 0x5CC - 0x5D0
   CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5D0 - 0x728
   unsigned char pad_728[0x8]; // 0x728 - 0x730
}; // size - 0x730


class C_OP_RtEnvCull /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   Vector m_vecTestDir; // 0x1C0 - 0x1CC
   Vector m_vecTestNormal; // 0x1CC - 0x1D8
   bool m_bCullOnMiss; // 0x1D8 - 0x1D9
   bool m_bStickInsteadOfCull; // 0x1D9 - 0x1DA
   char m_RtEnvName[128]; // 0x1DA - 0x25A
   unsigned char pad_25A[0x2]; // 0x25A - 0x25C
   int32_t m_nRTEnvCP; // 0x25C - 0x260
   int32_t m_nComponent; // 0x260 - 0x264
   unsigned char pad_264[0xC]; // 0x264 - 0x270
}; // size - 0x270


class C_OP_SDFConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flMinDist; // 0x1C0 - 0x318
   CParticleCollectionFloatInput m_flMaxDist; // 0x318 - 0x470
   int32_t m_nMaxIterations; // 0x470 - 0x474
   unsigned char pad_474[0xC]; // 0x474 - 0x480
}; // size - 0x480


class C_OP_SDFForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flForceScale; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0xC]; // 0x1D4 - 0x1E0
}; // size - 0x1E0


class C_OP_SelectivelyEnableChildren /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleCollectionFloatInput m_nChildGroupID; // 0x1D0 - 0x328
   CParticleCollectionFloatInput m_nFirstChild; // 0x328 - 0x480
   CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x480 - 0x5D8
   bool m_bPlayEndcapOnStop; // 0x5D8 - 0x5D9
   bool m_bDestroyImmediately; // 0x5D9 - 0x5DA
   unsigned char pad_5DA[0x6]; // 0x5DA - 0x5E0
}; // size - 0x5E0


class C_OP_SequenceFromModel /* "particles" */ : public CParticleFunctionOperator /* "particles" */
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


class C_OP_SetCPOrientationToDirection /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nInputControlPoint; // 0x1C0 - 0x1C4
   int32_t m_nOutputControlPoint; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class C_OP_SetCPOrientationToGroundNormal /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flInterpRate; // 0x1C0 - 0x1C4
   float m_flMaxTraceLength; // 0x1C4 - 0x1C8
   float m_flTolerance; // 0x1C8 - 0x1CC
   float m_flTraceOffset; // 0x1CC - 0x1D0
   char m_CollisionGroupName[128]; // 0x1D0 - 0x250
   ParticleTraceSet_t m_nTraceSet; // 0x250 - 0x254
   int32_t m_nInputCP; // 0x254 - 0x258
   int32_t m_nOutputCP; // 0x258 - 0x25C
   unsigned char pad_25C[0xC]; // 0x25C - 0x268
   bool m_bIncludeWater; // 0x268 - 0x269
   unsigned char pad_269[0x7]; // 0x269 - 0x270
}; // size - 0x270


class C_OP_SetCPOrientationToPointAtCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nInputCP; // 0x1D0 - 0x1D4
   int32_t m_nOutputCP; // 0x1D4 - 0x1D8
   CParticleCollectionFloatInput m_flInterpolation; // 0x1D8 - 0x330
   bool m_b2DOrientation; // 0x330 - 0x331
   bool m_bAvoidSingularity; // 0x331 - 0x332
   bool m_bPointAway; // 0x332 - 0x333
   unsigned char pad_333[0xD]; // 0x333 - 0x340
}; // size - 0x340


class C_OP_SetCPtoVector /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1C0 - 0x1C4
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class C_OP_SetChildControlPoints /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1C0 - 0x1C4
   int32_t m_nFirstControlPoint; // 0x1C4 - 0x1C8
   int32_t m_nNumControlPoints; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
   CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x1D0 - 0x328
   bool m_bReverse; // 0x328 - 0x329
   bool m_bSetOrientation; // 0x329 - 0x32A
   unsigned char pad_32A[0x6]; // 0x32A - 0x330
}; // size - 0x330


class C_OP_SetControlPointFieldFromVectorExpression /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   VectorFloatExpressionType_t m_nExpression; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
   CParticleCollectionVecInput m_vecInput1; // 0x1D8 - 0x830
   CParticleCollectionVecInput m_vecInput2; // 0x830 - 0xE88
   CParticleRemapFloatInput m_flOutputRemap; // 0xE88 - 0xFE0
   int32_t m_nOutputCP; // 0xFE0 - 0xFE4
   int32_t m_nOutVectorField; // 0xFE4 - 0xFE8
   unsigned char pad_FE8[0x8]; // 0xFE8 - 0xFF0
}; // size - 0xFF0


class C_OP_SetControlPointFieldToScalarExpression /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   ScalarExpressionType_t m_nExpression; // 0x1D0 - 0x1D4
   unsigned char pad_1D4[0x4]; // 0x1D4 - 0x1D8
   CParticleCollectionFloatInput m_flInput1; // 0x1D8 - 0x330
   CParticleCollectionFloatInput m_flInput2; // 0x330 - 0x488
   CParticleRemapFloatInput m_flOutputRemap; // 0x488 - 0x5E0
   int32_t m_nOutputCP; // 0x5E0 - 0x5E4
   int32_t m_nOutVectorField; // 0x5E4 - 0x5E8
   unsigned char pad_5E8[0x8]; // 0x5E8 - 0x5F0
}; // size - 0x5F0


class C_OP_SetControlPointFieldToWater /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nSourceCP; // 0x1D0 - 0x1D4
   int32_t m_nDestCP; // 0x1D4 - 0x1D8
   int32_t m_nCPField; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_SetControlPointOrientation /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bUseWorldLocation; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x1]; // 0x1D1 - 0x1D2
   bool m_bRandomize; // 0x1D2 - 0x1D3
   bool m_bSetOnce; // 0x1D3 - 0x1D4
   int32_t m_nCP; // 0x1D4 - 0x1D8
   int32_t m_nHeadLocation; // 0x1D8 - 0x1DC
   QAngle m_vecRotation; // 0x1DC - 0x1E8
   QAngle m_vecRotationB; // 0x1E8 - 0x1F4
   unsigned char pad_1F4[0x4]; // 0x1F4 - 0x1F8
   CParticleCollectionFloatInput m_flInterpolation; // 0x1F8 - 0x350
}; // size - 0x350


class C_OP_SetControlPointOrientationToCPVelocity /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1D0 - 0x1D4
   int32_t m_nCPOutput; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x8]; // 0x1D8 - 0x1E0
}; // size - 0x1E0


class C_OP_SetControlPointPositionToRandomActiveCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1D0 - 0x1D4
   int32_t m_nHeadLocationMin; // 0x1D4 - 0x1D8
   int32_t m_nHeadLocationMax; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
   CParticleCollectionFloatInput m_flResetRate; // 0x1E0 - 0x338
   unsigned char pad_338[0x8]; // 0x338 - 0x340
}; // size - 0x340


class C_OP_SetControlPointPositionToTimeOfDayValue /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1D0 - 0x1D4
   char m_pszTimeOfDayParameter[128]; // 0x1D4 - 0x254
   Vector m_vecDefaultValue; // 0x254 - 0x260
   unsigned char pad_260[0x10]; // 0x260 - 0x270
}; // size - 0x270


class C_OP_SetControlPointPositions /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bUseWorldLocation; // 0x1D0 - 0x1D1
   bool m_bOrient; // 0x1D1 - 0x1D2
   bool m_bSetOnce; // 0x1D2 - 0x1D3
   unsigned char pad_1D3[0x1]; // 0x1D3 - 0x1D4
   int32_t m_nCP1; // 0x1D4 - 0x1D8
   int32_t m_nCP2; // 0x1D8 - 0x1DC
   int32_t m_nCP3; // 0x1DC - 0x1E0
   int32_t m_nCP4; // 0x1E0 - 0x1E4
   Vector m_vecCP1Pos; // 0x1E4 - 0x1F0
   Vector m_vecCP2Pos; // 0x1F0 - 0x1FC
   Vector m_vecCP3Pos; // 0x1FC - 0x208
   Vector m_vecCP4Pos; // 0x208 - 0x214
   int32_t m_nHeadLocation; // 0x214 - 0x218
   unsigned char pad_218[0x8]; // 0x218 - 0x220
}; // size - 0x220


class C_OP_SetControlPointRotation /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleCollectionVecInput m_vecRotAxis; // 0x1D0 - 0x828
   CParticleCollectionFloatInput m_flRotRate; // 0x828 - 0x980
   int32_t m_nCP; // 0x980 - 0x984
   int32_t m_nLocalCP; // 0x984 - 0x988
   unsigned char pad_988[0x8]; // 0x988 - 0x990
}; // size - 0x990


class C_OP_SetControlPointToCPVelocity /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1D0 - 0x1D4
   int32_t m_nCPOutputVel; // 0x1D4 - 0x1D8
   bool m_bNormalize; // 0x1D8 - 0x1D9
   unsigned char pad_1D9[0x3]; // 0x1D9 - 0x1DC
   int32_t m_nCPOutputMag; // 0x1DC - 0x1E0
   int32_t m_nCPField; // 0x1E0 - 0x1E4
   unsigned char pad_1E4[0x4]; // 0x1E4 - 0x1E8
   CParticleCollectionVecInput m_vecComparisonVelocity; // 0x1E8 - 0x840
}; // size - 0x840


class C_OP_SetControlPointToCenter /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1D0 - 0x1D4
   Vector m_vecCP1Pos; // 0x1D4 - 0x1E0
   ParticleParentSetMode_t m_nSetParent; // 0x1E0 - 0x1E4
   unsigned char pad_1E4[0xC]; // 0x1E4 - 0x1F0
}; // size - 0x1F0


class C_OP_SetControlPointToHMD /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1D0 - 0x1D4
   Vector m_vecCP1Pos; // 0x1D4 - 0x1E0
   bool m_bOrientToHMD; // 0x1E0 - 0x1E1
   unsigned char pad_1E1[0xF]; // 0x1E1 - 0x1F0
}; // size - 0x1F0


class C_OP_SetControlPointToHand /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1D0 - 0x1D4
   int32_t m_nHand; // 0x1D4 - 0x1D8
   Vector m_vecCP1Pos; // 0x1D8 - 0x1E4
   bool m_bOrientToHand; // 0x1E4 - 0x1E5
   unsigned char pad_1E5[0xB]; // 0x1E5 - 0x1F0
}; // size - 0x1F0


class C_OP_SetControlPointToImpactPoint /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPOut; // 0x1D0 - 0x1D4
   int32_t m_nCPIn; // 0x1D4 - 0x1D8
   float m_flUpdateRate; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
   CParticleCollectionFloatInput m_flTraceLength; // 0x1E0 - 0x338
   float m_flStartOffset; // 0x338 - 0x33C
   float m_flOffset; // 0x33C - 0x340
   Vector m_vecTraceDir; // 0x340 - 0x34C
   char m_CollisionGroupName[128]; // 0x34C - 0x3CC
   ParticleTraceSet_t m_nTraceSet; // 0x3CC - 0x3D0
   bool m_bSetToEndpoint; // 0x3D0 - 0x3D1
   bool m_bTraceToClosestSurface; // 0x3D1 - 0x3D2
   bool m_bIncludeWater; // 0x3D2 - 0x3D3
   unsigned char pad_3D3[0xD]; // 0x3D3 - 0x3E0
}; // size - 0x3E0


class C_OP_SetControlPointToPlayer /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCP1; // 0x1D0 - 0x1D4
   Vector m_vecCP1Pos; // 0x1D4 - 0x1E0
   bool m_bOrientToEyes; // 0x1E0 - 0x1E1
   unsigned char pad_1E1[0xF]; // 0x1E1 - 0x1F0
}; // size - 0x1F0


class C_OP_SetControlPointToVectorExpression /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   VectorExpressionType_t m_nExpression; // 0x1D0 - 0x1D4
   int32_t m_nOutputCP; // 0x1D4 - 0x1D8
   CParticleCollectionVecInput m_vInput1; // 0x1D8 - 0x830
   CParticleCollectionVecInput m_vInput2; // 0x830 - 0xE88
   bool m_bNormalizedOutput; // 0xE88 - 0xE89
   unsigned char pad_E89[0x7]; // 0xE89 - 0xE90
}; // size - 0xE90


class C_OP_SetControlPointToWaterSurface /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nSourceCP; // 0x1D0 - 0x1D4
   int32_t m_nDestCP; // 0x1D4 - 0x1D8
   int32_t m_nFlowCP; // 0x1D8 - 0x1DC
   int32_t m_nActiveCP; // 0x1DC - 0x1E0
   int32_t m_nActiveCPField; // 0x1E0 - 0x1E4
   unsigned char pad_1E4[0x4]; // 0x1E4 - 0x1E8
   CParticleCollectionFloatInput m_flRetestRate; // 0x1E8 - 0x340
   bool m_bAdaptiveThreshold; // 0x340 - 0x341
   unsigned char pad_341[0xF]; // 0x341 - 0x350
}; // size - 0x350


class C_OP_SetControlPointsToModelParticles /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   char m_HitboxSetName[128]; // 0x1C0 - 0x240
   char m_AttachmentName[128]; // 0x240 - 0x2C0
   int32_t m_nFirstControlPoint; // 0x2C0 - 0x2C4
   int32_t m_nNumControlPoints; // 0x2C4 - 0x2C8
   int32_t m_nFirstSourcePoint; // 0x2C8 - 0x2CC
   bool m_bSkin; // 0x2CC - 0x2CD
   bool m_bAttachment; // 0x2CD - 0x2CE
   unsigned char pad_2CE[0x2]; // 0x2CE - 0x2D0
}; // size - 0x2D0


class C_OP_SetControlPointsToParticle /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1C0 - 0x1C4
   int32_t m_nFirstControlPoint; // 0x1C4 - 0x1C8
   int32_t m_nNumControlPoints; // 0x1C8 - 0x1CC
   int32_t m_nFirstSourcePoint; // 0x1CC - 0x1D0
   bool m_bSetOrientation; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x3]; // 0x1D1 - 0x1D4
   ParticleOrientationSetMode_t m_nOrientationMode; // 0x1D4 - 0x1D8
   ParticleParentSetMode_t m_nSetParent; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_SetFloatAttributeToVectorExpression /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   VectorFloatExpressionType_t m_nExpression; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0x4]; // 0x1C4 - 0x1C8
   CPerParticleVecInput m_vInput1; // 0x1C8 - 0x820
   CPerParticleVecInput m_vInput2; // 0x820 - 0xE78
   CParticleRemapFloatInput m_flOutputRemap; // 0xE78 - 0xFD0
   ParticleAttributeIndex_t m_nOutputField; // 0xFD0 - 0xFD4
   ParticleSetMethod_t m_nSetMethod; // 0xFD4 - 0xFD8
   unsigned char pad_FD8[0x8]; // 0xFD8 - 0xFE0
}; // size - 0xFE0


class C_OP_SetFloatCollection /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CParticleCollectionFloatInput m_InputValue; // 0x1C0 - 0x318
   ParticleAttributeIndex_t m_nOutputField; // 0x318 - 0x31C
   ParticleSetMethod_t m_nSetMethod; // 0x31C - 0x320
   CParticleCollectionFloatInput m_Lerp; // 0x320 - 0x478
   unsigned char pad_478[0x28]; // 0x478 - 0x4A0
}; // size - 0x4A0


class C_OP_SetGravityToCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nCPInput; // 0x1D0 - 0x1D4
   int32_t m_nCPOutput; // 0x1D4 - 0x1D8
   CParticleCollectionFloatInput m_flScale; // 0x1D8 - 0x330
   bool m_bSetOrientation; // 0x330 - 0x331
   bool m_bSetZDown; // 0x331 - 0x332
   unsigned char pad_332[0xE]; // 0x332 - 0x340
}; // size - 0x340


class C_OP_SetParentControlPointsToChildCP /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1D0 - 0x1D4
   int32_t m_nChildControlPoint; // 0x1D4 - 0x1D8
   int32_t m_nNumControlPoints; // 0x1D8 - 0x1DC
   int32_t m_nFirstSourcePoint; // 0x1DC - 0x1E0
   bool m_bSetOrientation; // 0x1E0 - 0x1E1
   unsigned char pad_1E1[0xF]; // 0x1E1 - 0x1F0
}; // size - 0x1F0


class C_OP_SetPerChildControlPointFromAttribute /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nChildGroupID; // 0x1C0 - 0x1C4
   int32_t m_nFirstControlPoint; // 0x1C4 - 0x1C8
   int32_t m_nNumControlPoints; // 0x1C8 - 0x1CC
   int32_t m_nParticleIncrement; // 0x1CC - 0x1D0
   int32_t m_nFirstSourcePoint; // 0x1D0 - 0x1D4
   bool m_bNumBasedOnParticleCount; // 0x1D4 - 0x1D5
   unsigned char pad_1D5[0x3]; // 0x1D5 - 0x1D8
   ParticleAttributeIndex_t m_nAttributeToRead; // 0x1D8 - 0x1DC
   int32_t m_nCPField; // 0x1DC - 0x1E0
}; // size - 0x1E0


class C_OP_SetRandomControlPointPosition /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bUseWorldLocation; // 0x1D0 - 0x1D1
   bool m_bOrient; // 0x1D1 - 0x1D2
   unsigned char pad_1D2[0x2]; // 0x1D2 - 0x1D4
   int32_t m_nCP1; // 0x1D4 - 0x1D8
   int32_t m_nHeadLocation; // 0x1D8 - 0x1DC
   unsigned char pad_1DC[0x4]; // 0x1DC - 0x1E0
   CParticleCollectionFloatInput m_flReRandomRate; // 0x1E0 - 0x338
   Vector m_vecCPMinPos; // 0x338 - 0x344
   Vector m_vecCPMaxPos; // 0x344 - 0x350
   CParticleCollectionFloatInput m_flInterpolation; // 0x350 - 0x4A8
   unsigned char pad_4A8[0x8]; // 0x4A8 - 0x4B0
}; // size - 0x4B0


class C_OP_SetSimulationRate /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   CParticleCollectionFloatInput m_flSimulationScale; // 0x1D0 - 0x328
   unsigned char pad_328[0x8]; // 0x328 - 0x330
}; // size - 0x330


class C_OP_SetSingleControlPointPosition /* "particles" */ : public CParticleFunctionPreEmission /* "particles" */
{
public:
   bool m_bSetOnce; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0x3]; // 0x1D1 - 0x1D4
   int32_t m_nCP1; // 0x1D4 - 0x1D8
   CParticleCollectionVecInput m_vecCP1Pos; // 0x1D8 - 0x830
   CParticleTransformInput m_transformInput; // 0x830 - 0x898
   unsigned char pad_898[0x8]; // 0x898 - 0x8A0
}; // size - 0x8A0


class C_OP_SetToCP /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nControlPointNumber; // 0x1C0 - 0x1C4
   Vector m_vecOffset; // 0x1C4 - 0x1D0
   bool m_bOffsetLocal; // 0x1D0 - 0x1D1
   unsigned char pad_1D1[0xF]; // 0x1D1 - 0x1E0
}; // size - 0x1E0


class C_OP_SetVec /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   CPerParticleVecInput m_InputValue; // 0x1C0 - 0x818
   ParticleAttributeIndex_t m_nOutputField; // 0x818 - 0x81C
   ParticleSetMethod_t m_nSetMethod; // 0x81C - 0x820
   CPerParticleFloatInput m_Lerp; // 0x820 - 0x978
   bool m_bNormalizedOutput; // 0x978 - 0x979
   unsigned char pad_979[0x7]; // 0x979 - 0x980
}; // size - 0x980


class C_OP_ShapeMatchingConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   float m_flShapeRestorationTime; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


class C_OP_SnapshotRigidSkinToBones /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bTransformNormals; // 0x1C0 - 0x1C1
   bool m_bTransformRadii; // 0x1C1 - 0x1C2
   unsigned char pad_1C2[0x2]; // 0x1C2 - 0x1C4
   int32_t m_nControlPointNumber; // 0x1C4 - 0x1C8
   unsigned char pad_1C8[0x8]; // 0x1C8 - 0x1D0
}; // size - 0x1D0


class C_OP_SnapshotSkinToBones /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   bool m_bTransformNormals; // 0x1C0 - 0x1C1
   bool m_bTransformRadii; // 0x1C1 - 0x1C2
   unsigned char pad_1C2[0x2]; // 0x1C2 - 0x1C4
   int32_t m_nControlPointNumber; // 0x1C4 - 0x1C8
   float m_flLifeTimeFadeStart; // 0x1C8 - 0x1CC
   float m_flLifeTimeFadeEnd; // 0x1CC - 0x1D0
   float m_flJumpThreshold; // 0x1D0 - 0x1D4
   float m_flPrevPosScale; // 0x1D4 - 0x1D8
   unsigned char pad_1D8[0x8]; // 0x1D8 - 0x1E0
}; // size - 0x1E0


class C_OP_Spin /* "particles" */ : public CGeneralSpin /* "particles" */
{
public:
   unsigned char pad_0[0x1E0]; // 0x0 - 0x1E0
}; // size - 0x1E0


class C_OP_SpinUpdate /* "particles" */ : public CSpinUpdateBase /* "particles" */
{
public:
   unsigned char pad_0[0x1C0]; // 0x0 - 0x1C0
}; // size - 0x1C0


class C_OP_SpringToVectorConstraint /* "particles" */ : public CParticleFunctionConstraint /* "particles" */
{
public:
   CPerParticleFloatInput m_flRestLength; // 0x1C0 - 0x318
   CPerParticleFloatInput m_flMinDistance; // 0x318 - 0x470
   CPerParticleFloatInput m_flMaxDistance; // 0x470 - 0x5C8
   CPerParticleFloatInput m_flRestingLength; // 0x5C8 - 0x720
   CPerParticleVecInput m_vecAnchorVector; // 0x720 - 0xD78
   unsigned char pad_D78[0x8]; // 0xD78 - 0xD80
}; // size - 0xD80


class C_OP_TeleportBeam /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   int32_t m_nCPPosition; // 0x1C0 - 0x1C4
   int32_t m_nCPVelocity; // 0x1C4 - 0x1C8
   int32_t m_nCPMisc; // 0x1C8 - 0x1CC
   int32_t m_nCPColor; // 0x1CC - 0x1D0
   int32_t m_nCPInvalidColor; // 0x1D0 - 0x1D4
   int32_t m_nCPExtraArcData; // 0x1D4 - 0x1D8
   Vector m_vGravity; // 0x1D8 - 0x1E4
   float m_flArcMaxDuration; // 0x1E4 - 0x1E8
   float m_flSegmentBreak; // 0x1E8 - 0x1EC
   float m_flArcSpeed; // 0x1EC - 0x1F0
   float m_flAlpha; // 0x1F0 - 0x1F4
   unsigned char pad_1F4[0xC]; // 0x1F4 - 0x200
}; // size - 0x200


class C_OP_TimeVaryingForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flStartLerpTime; // 0x1D0 - 0x1D4
   Vector m_StartingForce; // 0x1D4 - 0x1E0
   float m_flEndLerpTime; // 0x1E0 - 0x1E4
   Vector m_EndingForce; // 0x1E4 - 0x1F0
}; // size - 0x1F0


class C_OP_TurbulenceForce /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_flNoiseCoordScale0; // 0x1D0 - 0x1D4
   float m_flNoiseCoordScale1; // 0x1D4 - 0x1D8
   float m_flNoiseCoordScale2; // 0x1D8 - 0x1DC
   float m_flNoiseCoordScale3; // 0x1DC - 0x1E0
   Vector m_vecNoiseAmount0; // 0x1E0 - 0x1EC
   Vector m_vecNoiseAmount1; // 0x1EC - 0x1F8
   Vector m_vecNoiseAmount2; // 0x1F8 - 0x204
   Vector m_vecNoiseAmount3; // 0x204 - 0x210
}; // size - 0x210


class C_OP_TwistAroundAxis /* "particles" */ : public CParticleFunctionForce /* "particles" */
{
public:
   float m_fForceAmount; // 0x1D0 - 0x1D4
   Vector m_TwistAxis; // 0x1D4 - 0x1E0
   bool m_bLocalSpace; // 0x1E0 - 0x1E1
   unsigned char pad_1E1[0x3]; // 0x1E1 - 0x1E4
   int32_t m_nControlPointNumber; // 0x1E4 - 0x1E8
   unsigned char pad_1E8[0x8]; // 0x1E8 - 0x1F0
}; // size - 0x1F0


class C_OP_VectorNoise /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   ParticleAttributeIndex_t m_nFieldOutput; // 0x1C0 - 0x1C4
   Vector m_vecOutputMin; // 0x1C4 - 0x1D0
   Vector m_vecOutputMax; // 0x1D0 - 0x1DC
   float m_fl4NoiseScale; // 0x1DC - 0x1E0
   bool m_bAdditive; // 0x1E0 - 0x1E1
   bool m_bOffset; // 0x1E1 - 0x1E2
   unsigned char pad_1E2[0x2]; // 0x1E2 - 0x1E4
   float m_flNoiseAnimationTimeScale; // 0x1E4 - 0x1E8
   unsigned char pad_1E8[0x8]; // 0x1E8 - 0x1F0
}; // size - 0x1F0


class C_OP_VelocityDecay /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flMinVelocity; // 0x1C0 - 0x1C4
   unsigned char pad_1C4[0xC]; // 0x1C4 - 0x1D0
}; // size - 0x1D0


class C_OP_VelocityMatchingForce /* "particles" */ : public CParticleFunctionOperator /* "particles" */
{
public:
   float m_flDirScale; // 0x1C0 - 0x1C4
   float m_flSpdScale; // 0x1C4 - 0x1C8
   int32_t m_nCPBroadcast; // 0x1C8 - 0x1CC
   unsigned char pad_1CC[0x4]; // 0x1CC - 0x1D0
}; // size - 0x1D0


class C_OmniLight /* "client" */ : public C_BarnLight /* "client" */
{
public:
   float m_flInnerAngle; // 0xF18 - 0xF1C
   float m_flOuterAngle; // 0xF1C - 0xF20
   bool m_bShowLight; // 0xF20 - 0xF21
   unsigned char pad_F21[0x7]; // 0xF21 - 0xF28
}; // size - 0xF28


class C_PathParticleRopeAlias_path_particle_rope_clientside /* "client" */ : public C_PathParticleRope /* "client" */
{
public:
   unsigned char pad_0[0x658]; // 0x0 - 0x658
}; // size - 0x658


class C_PhysBox /* "client" */ : public C_Breakable /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class C_PhysPropClientside /* "client" */ : public C_BreakableProp /* "client" */
{
public:
   GameTime_t m_flTouchDelta; // 0x1028 - 0x102C
   GameTime_t m_fDeathTime; // 0x102C - 0x1030
   float m_impactEnergyScale; // 0x1030 - 0x1034
   float m_inertiaScale; // 0x1034 - 0x1038
   float m_flDmgModBullet; // 0x1038 - 0x103C
   float m_flDmgModClub; // 0x103C - 0x1040
   float m_flDmgModExplosive; // 0x1040 - 0x1044
   float m_flDmgModFire; // 0x1044 - 0x1048
   CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x1048 - 0x1050
   CUtlSymbolLarge m_iszBasePropData; // 0x1050 - 0x1058
   int32_t m_iInteractions; // 0x1058 - 0x105C
   bool m_bHasBreakPiecesOrCommands; // 0x105C - 0x105D
   unsigned char pad_105D[0x3]; // 0x105D - 0x1060
   Vector m_vecDamagePosition; // 0x1060 - 0x106C
   Vector m_vecDamageDirection; // 0x106C - 0x1078
   int32_t m_nDamageType; // 0x1078 - 0x107C
   unsigned char pad_107C[0x4]; // 0x107C - 0x1080
}; // size - 0x1080


class C_PhysicsPropMultiplayer /* "client" */ : public C_PhysicsProp /* "client" */
{
public:
   unsigned char pad_0[0x1030]; // 0x0 - 0x1030
}; // size - 0x1030


class C_PickUpModelSlerper /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   CHandle< C_BaseEntity > m_hPlayerParent; // 0xED8 - 0xEDC
   CHandle< C_BaseEntity > m_hItem; // 0xEDC - 0xEE0
   float m_flTimePickedUp; // 0xEE0 - 0xEE4
   QAngle m_angOriginal; // 0xEE4 - 0xEF0
   Vector m_vecPosOriginal; // 0xEF0 - 0xEFC
   unsigned char pad_EFC[0x4]; // 0xEFC - 0xF00
   QAngle m_angRandom; // 0xF00 - 0xF0C
   unsigned char pad_F0C[0x4]; // 0xF0C - 0xF10
}; // size - 0xF10


class C_PlantedC4 /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   bool m_bBombTicking; // 0xED8 - 0xED9
   unsigned char pad_ED9[0x3]; // 0xED9 - 0xEDC
   int32_t m_nBombSite; // 0xEDC - 0xEE0
   int32_t m_nSourceSoundscapeHash; // 0xEE0 - 0xEE4
   unsigned char pad_EE4[0x4]; // 0xEE4 - 0xEE8
   EntitySpottedState_t m_entitySpottedState; // 0xEE8 - 0xF00
   GameTime_t m_flNextGlow; // 0xF00 - 0xF04
   GameTime_t m_flNextBeep; // 0xF04 - 0xF08
   GameTime_t m_flC4Blow; // 0xF08 - 0xF0C
   bool m_bCannotBeDefused; // 0xF0C - 0xF0D
   bool m_bHasExploded; // 0xF0D - 0xF0E
   unsigned char pad_F0E[0x2]; // 0xF0E - 0xF10
   float m_flTimerLength; // 0xF10 - 0xF14
   bool m_bBeingDefused; // 0xF14 - 0xF15
   unsigned char pad_F15[0x3]; // 0xF15 - 0xF18
   float m_bTriggerWarning; // 0xF18 - 0xF1C
   float m_bExplodeWarning; // 0xF1C - 0xF20
   bool m_bC4Activated; // 0xF20 - 0xF21
   bool m_bTenSecWarning; // 0xF21 - 0xF22
   unsigned char pad_F22[0x2]; // 0xF22 - 0xF24
   float m_flDefuseLength; // 0xF24 - 0xF28
   GameTime_t m_flDefuseCountDown; // 0xF28 - 0xF2C
   bool m_bBombDefused; // 0xF2C - 0xF2D
   unsigned char pad_F2D[0x3]; // 0xF2D - 0xF30
   CHandle< C_CSPlayerPawn > m_hBombDefuser; // 0xF30 - 0xF34
   CHandle< C_BaseEntity > m_hControlPanel; // 0xF34 - 0xF38
   CHandle< C_Multimeter > m_hDefuserMultimeter; // 0xF38 - 0xF3C
   GameTime_t m_flNextRadarFlashTime; // 0xF3C - 0xF40
   bool m_bRadarFlash; // 0xF40 - 0xF41
   unsigned char pad_F41[0x3]; // 0xF41 - 0xF44
   CHandle< C_CSPlayerPawn > m_pBombDefuser; // 0xF44 - 0xF48
   GameTime_t m_fLastDefuseTime; // 0xF48 - 0xF4C
   unsigned char pad_F4C[0x4]; // 0xF4C - 0xF50
   CBasePlayerController* m_pPredictionOwner; // 0xF50 - 0xF58
   Vector m_vecC4ExplodeSpectatePos; // 0xF58 - 0xF64
   QAngle m_vecC4ExplodeSpectateAng; // 0xF64 - 0xF70
   float m_flC4ExplodeSpectateDuration; // 0xF70 - 0xF74
   unsigned char pad_F74[0x4]; // 0xF74 - 0xF78
}; // size - 0xF78


class C_PlayerPing /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_550[0x30]; // 0x550 - 0x580
   CHandle< C_CSPlayerPawn > m_hPlayer; // 0x580 - 0x584
   CHandle< C_BaseEntity > m_hPingedEntity; // 0x584 - 0x588
   int32_t m_iType; // 0x588 - 0x58C
   bool m_bUrgent; // 0x58C - 0x58D
   char m_szPlaceName[18]; // 0x58D - 0x59F
   unsigned char pad_59F[0x1]; // 0x59F - 0x5A0
}; // size - 0x5A0


class C_PlayerSprayDecal /* "client" */ : public C_ModelPointEntity /* "client" */
{
public:
   int32_t m_nUniqueID; // 0xCD0 - 0xCD4
   uint32_t m_unAccountID; // 0xCD4 - 0xCD8
   uint32_t m_unTraceID; // 0xCD8 - 0xCDC
   uint32_t m_rtGcTime; // 0xCDC - 0xCE0
   Vector m_vecEndPos; // 0xCE0 - 0xCEC
   Vector m_vecStart; // 0xCEC - 0xCF8
   Vector m_vecLeft; // 0xCF8 - 0xD04
   Vector m_vecNormal; // 0xD04 - 0xD10
   int32_t m_nPlayer; // 0xD10 - 0xD14
   int32_t m_nEntity; // 0xD14 - 0xD18
   int32_t m_nHitbox; // 0xD18 - 0xD1C
   float m_flCreationTime; // 0xD1C - 0xD20
   int32_t m_nTintID; // 0xD20 - 0xD24
   uint8_t m_nVersion; // 0xD24 - 0xD25
   uint8 m_ubSignature[128]; // 0xD25 - 0xDA5
   unsigned char pad_DA5[0xB]; // 0xDA5 - 0xDB0
   CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xDB0 - 0xDE0
}; // size - 0xDE0


class C_PlayerVisibility /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   float m_flVisibilityStrength; // 0x550 - 0x554
   float m_flFogDistanceMultiplier; // 0x554 - 0x558
   float m_flFogMaxDensityMultiplier; // 0x558 - 0x55C
   float m_flFadeTime; // 0x55C - 0x560
   bool m_bStartDisabled; // 0x560 - 0x561
   bool m_bIsEnabled; // 0x561 - 0x562
   unsigned char pad_562[0x1E]; // 0x562 - 0x580
}; // size - 0x580


class C_PointCameraVFOV /* "client" */ : public C_PointCamera /* "client" */
{
public:
   float m_flVerticalFOV; // 0x5B0 - 0x5B4
   unsigned char pad_5B4[0x4]; // 0x5B4 - 0x5B8
}; // size - 0x5B8


class C_PointClientUIDialog /* "client" */ : public C_BaseClientUIEntity /* "client" */
{
public:
   CHandle< C_BaseEntity > m_hActivator; // 0xD00 - 0xD04
   bool m_bStartEnabled; // 0xD04 - 0xD05
   unsigned char pad_D05[0x3]; // 0xD05 - 0xD08
}; // size - 0xD08


class C_PointClientUIHUD /* "client" */ : public C_BaseClientUIEntity /* "client" */
{
public:
   unsigned char pad_D00[0x8]; // 0xD00 - 0xD08
   bool m_bCheckCSSClasses; // 0xD08 - 0xD09
   unsigned char pad_D09[0x187]; // 0xD09 - 0xE90
   bool m_bIgnoreInput; // 0xE90 - 0xE91
   unsigned char pad_E91[0x3]; // 0xE91 - 0xE94
   float m_flWidth; // 0xE94 - 0xE98
   float m_flHeight; // 0xE98 - 0xE9C
   float m_flDPI; // 0xE9C - 0xEA0
   float m_flInteractDistance; // 0xEA0 - 0xEA4
   float m_flDepthOffset; // 0xEA4 - 0xEA8
   uint32_t m_unOwnerContext; // 0xEA8 - 0xEAC
   uint32_t m_unHorizontalAlign; // 0xEAC - 0xEB0
   uint32_t m_unVerticalAlign; // 0xEB0 - 0xEB4
   uint32_t m_unOrientation; // 0xEB4 - 0xEB8
   bool m_bAllowInteractionFromAllSceneWorlds; // 0xEB8 - 0xEB9
   unsigned char pad_EB9[0x7]; // 0xEB9 - 0xEC0
   C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xEC0 - 0xED8
}; // size - 0xED8


class C_PointClientUIWorldTextPanel /* "client" */ : public C_PointClientUIWorldPanel /* "client" */
{
public:
   char m_messageText[512]; // 0xF30 - 0x1130
}; // size - 0x1130


class C_PointCommentaryNode /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_ED8[0x8]; // 0xED8 - 0xEE0
   bool m_bActive; // 0xEE0 - 0xEE1
   bool m_bWasActive; // 0xEE1 - 0xEE2
   unsigned char pad_EE2[0x2]; // 0xEE2 - 0xEE4
   GameTime_t m_flEndTime; // 0xEE4 - 0xEE8
   GameTime_t m_flStartTime; // 0xEE8 - 0xEEC
   float m_flStartTimeInCommentary; // 0xEEC - 0xEF0
   CUtlSymbolLarge m_iszCommentaryFile; // 0xEF0 - 0xEF8
   CUtlSymbolLarge m_iszTitle; // 0xEF8 - 0xF00
   CUtlSymbolLarge m_iszSpeakers; // 0xF00 - 0xF08
   int32_t m_iNodeNumber; // 0xF08 - 0xF0C
   int32_t m_iNodeNumberMax; // 0xF0C - 0xF10
   bool m_bListenedTo; // 0xF10 - 0xF11
   unsigned char pad_F11[0xF]; // 0xF11 - 0xF20
   CHandle< C_BaseEntity > m_hViewPosition; // 0xF20 - 0xF24
   bool m_bRestartAfterRestore; // 0xF24 - 0xF25
   unsigned char pad_F25[0x3]; // 0xF25 - 0xF28
}; // size - 0xF28


class C_PointValueRemapper /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   bool m_bDisabled; // 0x550 - 0x551
   bool m_bDisabledOld; // 0x551 - 0x552
   bool m_bUpdateOnClient; // 0x552 - 0x553
   unsigned char pad_553[0x1]; // 0x553 - 0x554
   ValueRemapperInputType_t m_nInputType; // 0x554 - 0x558
   CHandle< C_BaseEntity > m_hRemapLineStart; // 0x558 - 0x55C
   CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x55C - 0x560
   float m_flMaximumChangePerSecond; // 0x560 - 0x564
   float m_flDisengageDistance; // 0x564 - 0x568
   float m_flEngageDistance; // 0x568 - 0x56C
   bool m_bRequiresUseKey; // 0x56C - 0x56D
   unsigned char pad_56D[0x3]; // 0x56D - 0x570
   ValueRemapperOutputType_t m_nOutputType; // 0x570 - 0x574
   unsigned char pad_574[0x4]; // 0x574 - 0x578
   C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x578 - 0x590
   ValueRemapperHapticsType_t m_nHapticsType; // 0x590 - 0x594
   ValueRemapperMomentumType_t m_nMomentumType; // 0x594 - 0x598
   float m_flMomentumModifier; // 0x598 - 0x59C
   float m_flSnapValue; // 0x59C - 0x5A0
   float m_flCurrentMomentum; // 0x5A0 - 0x5A4
   ValueRemapperRatchetType_t m_nRatchetType; // 0x5A4 - 0x5A8
   float m_flRatchetOffset; // 0x5A8 - 0x5AC
   float m_flInputOffset; // 0x5AC - 0x5B0
   bool m_bEngaged; // 0x5B0 - 0x5B1
   bool m_bFirstUpdate; // 0x5B1 - 0x5B2
   unsigned char pad_5B2[0x2]; // 0x5B2 - 0x5B4
   float m_flPreviousValue; // 0x5B4 - 0x5B8
   GameTime_t m_flPreviousUpdateTickTime; // 0x5B8 - 0x5BC
   Vector m_vecPreviousTestPoint; // 0x5BC - 0x5C8
}; // size - 0x5C8


class C_PointWorldText /* "client" */ : public C_ModelPointEntity /* "client" */
{
public:
   unsigned char pad_CD0[0x8]; // 0xCD0 - 0xCD8
   bool m_bForceRecreateNextUpdate; // 0xCD8 - 0xCD9
   unsigned char pad_CD9[0xF]; // 0xCD9 - 0xCE8
   char m_messageText[512]; // 0xCE8 - 0xEE8
   char m_FontName[64]; // 0xEE8 - 0xF28
   bool m_bEnabled; // 0xF28 - 0xF29
   bool m_bFullbright; // 0xF29 - 0xF2A
   unsigned char pad_F2A[0x2]; // 0xF2A - 0xF2C
   float m_flWorldUnitsPerPx; // 0xF2C - 0xF30
   float m_flFontSize; // 0xF30 - 0xF34
   float m_flDepthOffset; // 0xF34 - 0xF38
   Color m_Color; // 0xF38 - 0xF3C
   PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xF3C - 0xF40
   PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xF40 - 0xF44
   PointWorldTextReorientMode_t m_nReorientMode; // 0xF44 - 0xF48
}; // size - 0xF48


class C_PostProcessingVolume /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   unsigned char pad_CD8[0x10]; // 0xCD8 - 0xCE8
   CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0xCE8 - 0xCF0
   float m_flFadeDuration; // 0xCF0 - 0xCF4
   float m_flMinLogExposure; // 0xCF4 - 0xCF8
   float m_flMaxLogExposure; // 0xCF8 - 0xCFC
   float m_flMinExposure; // 0xCFC - 0xD00
   float m_flMaxExposure; // 0xD00 - 0xD04
   float m_flExposureCompensation; // 0xD04 - 0xD08
   float m_flExposureFadeSpeedUp; // 0xD08 - 0xD0C
   float m_flExposureFadeSpeedDown; // 0xD0C - 0xD10
   float m_flTonemapEVSmoothingRange; // 0xD10 - 0xD14
   bool m_bMaster; // 0xD14 - 0xD15
   bool m_bExposureControl; // 0xD15 - 0xD16
   unsigned char pad_D16[0x2]; // 0xD16 - 0xD18
   float m_flRate; // 0xD18 - 0xD1C
   float m_flTonemapPercentTarget; // 0xD1C - 0xD20
   float m_flTonemapPercentBrightPixels; // 0xD20 - 0xD24
   float m_flTonemapMinAvgLum; // 0xD24 - 0xD28
}; // size - 0xD28


class C_Precipitation /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   float m_flDensity; // 0xCD8 - 0xCDC
   unsigned char pad_CDC[0xC]; // 0xCDC - 0xCE8
   float m_flParticleInnerDist; // 0xCE8 - 0xCEC
   unsigned char pad_CEC[0x4]; // 0xCEC - 0xCF0
   char* m_pParticleDef; // 0xCF0 - 0xCF8
   unsigned char pad_CF8[0x20]; // 0xCF8 - 0xD18
   TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xD18 - 0xD20
   bool m_bActiveParticlePrecipEmitter[1]; // 0xD20 - 0xD21
   bool m_bParticlePrecipInitialized; // 0xD21 - 0xD22
   bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xD22 - 0xD23
   unsigned char pad_D23[0x1]; // 0xD23 - 0xD24
   int32_t m_nAvailableSheetSequencesMaxIndex; // 0xD24 - 0xD28
}; // size - 0xD28


class C_PropDoorRotating /* "client" */ : public C_BasePropDoor /* "client" */
{
public:
   unsigned char pad_0[0x1180]; // 0x0 - 0x1180
}; // size - 0x1180


class C_RagdollManager /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   int8_t m_iCurrentMaxRagdollCount; // 0x550 - 0x551
   unsigned char pad_551[0x7]; // 0x551 - 0x558
}; // size - 0x558


class C_RagdollProp /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_ED8[0x8]; // 0xED8 - 0xEE0
   C_NetworkUtlVectorBase< Vector > m_ragPos; // 0xEE0 - 0xEF8
   C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0xEF8 - 0xF10
   float m_flBlendWeight; // 0xF10 - 0xF14
   CHandle< C_BaseEntity > m_hRagdollSource; // 0xF14 - 0xF18
   AttachmentHandle_t m_iEyeAttachment; // 0xF18 - 0xF19
   unsigned char pad_F19[0x3]; // 0xF19 - 0xF1C
   float m_flBlendWeightCurrent; // 0xF1C - 0xF20
   CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0xF20 - 0xF38
   CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0xF38 - 0xF50
}; // size - 0xF50


class C_RectLight /* "client" */ : public C_BarnLight /* "client" */
{
public:
   bool m_bShowLight; // 0xF18 - 0xF19
   unsigned char pad_F19[0x7]; // 0xF19 - 0xF20
}; // size - 0xF20


class C_RetakeGameRules /* "client" */
{
public:
   unsigned char pad_0[0xF8]; // 0x0 - 0xF8
   int32_t m_nMatchSeed; // 0xF8 - 0xFC
   bool m_bBlockersPresent; // 0xFC - 0xFD
   bool m_bRoundInProgress; // 0xFD - 0xFE
   unsigned char pad_FE[0x2]; // 0xFE - 0x100
   int32_t m_iFirstSecondHalfRound; // 0x100 - 0x104
   int32_t m_iBombSite; // 0x104 - 0x108
   unsigned char pad_108[0x10]; // 0x108 - 0x118
}; // size - 0x118


class C_SensorGrenade /* "client" */ : public C_BaseCSGrenade /* "client" */
{
public:
   unsigned char pad_0[0x1AA0]; // 0x0 - 0x1AA0
}; // size - 0x1AA0


class C_SensorGrenadeProjectile /* "client" */ : public C_BaseCSGrenadeProjectile /* "client" */
{
public:
   unsigned char pad_0[0x1178]; // 0x0 - 0x1178
}; // size - 0x1178


class C_ShatterGlassShardPhysics /* "client" */ : public C_PhysicsProp /* "client" */
{
public:
   unsigned char pad_1030[0x8]; // 0x1030 - 0x1038
   shard_model_desc_t m_ShardDesc; // 0x1038 - 0x1098
}; // size - 0x1098


class C_SingleplayRules /* "client" */ : public C_GameRules /* "client" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class C_SkyCamera /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   sky3dparams_t m_skyboxData; // 0x550 - 0x5E0
   CUtlStringToken m_skyboxSlotToken; // 0x5E0 - 0x5E4
   bool m_bUseAngles; // 0x5E4 - 0x5E5
   unsigned char pad_5E5[0x3]; // 0x5E5 - 0x5E8
   C_SkyCamera* m_pNext; // 0x5E8 - 0x5F0
}; // size - 0x5F0


class C_SmokeGrenade /* "client" */ : public C_BaseCSGrenade /* "client" */
{
public:
   unsigned char pad_0[0x1AA0]; // 0x0 - 0x1AA0
}; // size - 0x1AA0


class C_SmokeGrenadeProjectile /* "client" */ : public C_BaseCSGrenadeProjectile /* "client" */
{
public:
   unsigned char pad_1158[0x8]; // 0x1158 - 0x1160
   int32_t m_nSmokeEffectTickBegin; // 0x1160 - 0x1164
   bool m_bDidSmokeEffect; // 0x1164 - 0x1165
   unsigned char pad_1165[0x3]; // 0x1165 - 0x1168
   int32_t m_nRandomSeed; // 0x1168 - 0x116C
   Vector m_vSmokeColor; // 0x116C - 0x1178
   Vector m_vSmokeDetonationPos; // 0x1178 - 0x1184
   unsigned char pad_1184[0x4]; // 0x1184 - 0x1188
   CUtlVector< uint8 > m_VoxelFrameData; // 0x1188 - 0x11A0
   bool m_bSmokeVolumeDataReceived; // 0x11A0 - 0x11A1
   bool m_bSmokeEffectSpawned; // 0x11A1 - 0x11A2
   unsigned char pad_11A2[0x156]; // 0x11A2 - 0x12F8
}; // size - 0x12F8


class C_SoundAreaEntityOrientedBox /* "client" */ : public C_SoundAreaEntityBase /* "client" */
{
public:
   Vector m_vMin; // 0x578 - 0x584
   Vector m_vMax; // 0x584 - 0x590
}; // size - 0x590


class C_SoundAreaEntitySphere /* "client" */ : public C_SoundAreaEntityBase /* "client" */
{
public:
   float m_flRadius; // 0x578 - 0x57C
   unsigned char pad_57C[0x4]; // 0x57C - 0x580
}; // size - 0x580


class C_SoundOpvarSetPathCornerEntity /* "client" */ : public C_SoundOpvarSetPointEntity /* "client" */
{
public:
   unsigned char pad_0[0x570]; // 0x0 - 0x570
}; // size - 0x570


class C_SpotlightEnd /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   float m_flLightScale; // 0xCD0 - 0xCD4
   float m_Radius; // 0xCD4 - 0xCD8
   unsigned char pad_CD8[0x8]; // 0xCD8 - 0xCE0
}; // size - 0xCE0


class C_SpriteOriented /* "client" */ : public C_Sprite /* "client" */
{
public:
   unsigned char pad_0[0xE00]; // 0x0 - 0xE00
}; // size - 0xE00


class C_SunGlowOverlay /* "client" */ : public CGlowOverlay /* "client" */
{
public:
   bool m_bModulateByDot; // 0xD0 - 0xD1
   unsigned char pad_D1[0x7]; // 0xD1 - 0xD8
}; // size - 0xD8


class C_TeamRoundTimer /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   bool m_bTimerPaused; // 0x550 - 0x551
   unsigned char pad_551[0x3]; // 0x551 - 0x554
   float m_flTimeRemaining; // 0x554 - 0x558
   GameTime_t m_flTimerEndTime; // 0x558 - 0x55C
   bool m_bIsDisabled; // 0x55C - 0x55D
   bool m_bShowInHUD; // 0x55D - 0x55E
   unsigned char pad_55E[0x2]; // 0x55E - 0x560
   int32_t m_nTimerLength; // 0x560 - 0x564
   int32_t m_nTimerInitialLength; // 0x564 - 0x568
   int32_t m_nTimerMaxLength; // 0x568 - 0x56C
   bool m_bAutoCountdown; // 0x56C - 0x56D
   unsigned char pad_56D[0x3]; // 0x56D - 0x570
   int32_t m_nSetupTimeLength; // 0x570 - 0x574
   int32_t m_nState; // 0x574 - 0x578
   bool m_bStartPaused; // 0x578 - 0x579
   bool m_bInCaptureWatchState; // 0x579 - 0x57A
   unsigned char pad_57A[0x2]; // 0x57A - 0x57C
   float m_flTotalTime; // 0x57C - 0x580
   bool m_bStopWatchTimer; // 0x580 - 0x581
   bool m_bFireFinished; // 0x581 - 0x582
   bool m_bFire5MinRemain; // 0x582 - 0x583
   bool m_bFire4MinRemain; // 0x583 - 0x584
   bool m_bFire3MinRemain; // 0x584 - 0x585
   bool m_bFire2MinRemain; // 0x585 - 0x586
   bool m_bFire1MinRemain; // 0x586 - 0x587
   bool m_bFire30SecRemain; // 0x587 - 0x588
   bool m_bFire10SecRemain; // 0x588 - 0x589
   bool m_bFire5SecRemain; // 0x589 - 0x58A
   bool m_bFire4SecRemain; // 0x58A - 0x58B
   bool m_bFire3SecRemain; // 0x58B - 0x58C
   bool m_bFire2SecRemain; // 0x58C - 0x58D
   bool m_bFire1SecRemain; // 0x58D - 0x58E
   unsigned char pad_58E[0x2]; // 0x58E - 0x590
   int32_t m_nOldTimerLength; // 0x590 - 0x594
   int32_t m_nOldTimerState; // 0x594 - 0x598
}; // size - 0x598


class C_TextureBasedAnimatable /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   bool m_bLoop; // 0xCD0 - 0xCD1
   unsigned char pad_CD1[0x3]; // 0xCD1 - 0xCD4
   float m_flFPS; // 0xCD4 - 0xCD8
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0xCD8 - 0xCE0
   CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0xCE0 - 0xCE8
   Vector m_vAnimationBoundsMin; // 0xCE8 - 0xCF4
   Vector m_vAnimationBoundsMax; // 0xCF4 - 0xD00
   float m_flStartTime; // 0xD00 - 0xD04
   float m_flStartFrame; // 0xD04 - 0xD08
}; // size - 0xD08


class C_TonemapController2Alias_env_tonemap_controller2 /* "client" */ : public C_TonemapController2 /* "client" */
{
public:
   unsigned char pad_0[0x578]; // 0x0 - 0x578
}; // size - 0x578


class C_TriggerBuoyancy /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   CBuoyancyHelper m_BuoyancyHelper; // 0xCD8 - 0xCF8
   float m_flFluidDensity; // 0xCF8 - 0xCFC
   unsigned char pad_CFC[0x4]; // 0xCFC - 0xD00
}; // size - 0xD00


class C_TriggerLerpObject /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   unsigned char pad_0[0xCD8]; // 0x0 - 0xCD8
}; // size - 0xCD8


class C_TriggerMultiple /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   unsigned char pad_0[0xCD8]; // 0x0 - 0xCD8
}; // size - 0xCD8


class C_TriggerPhysics /* "client" */ : public C_BaseTrigger /* "client" */
{
public:
   float m_gravityScale; // 0xCD8 - 0xCDC
   float m_linearLimit; // 0xCDC - 0xCE0
   float m_linearDamping; // 0xCE0 - 0xCE4
   float m_angularLimit; // 0xCE4 - 0xCE8
   float m_angularDamping; // 0xCE8 - 0xCEC
   float m_linearForce; // 0xCEC - 0xCF0
   float m_flFrequency; // 0xCF0 - 0xCF4
   float m_flDampingRatio; // 0xCF4 - 0xCF8
   Vector m_vecLinearForcePointAt; // 0xCF8 - 0xD04
   bool m_bCollapseToForcePoint; // 0xD04 - 0xD05
   unsigned char pad_D05[0x3]; // 0xD05 - 0xD08
   Vector m_vecLinearForcePointAtWorld; // 0xD08 - 0xD14
   Vector m_vecLinearForceDirection; // 0xD14 - 0xD20
   bool m_bConvertToDebrisWhenPossible; // 0xD20 - 0xD21
   unsigned char pad_D21[0x7]; // 0xD21 - 0xD28
}; // size - 0xD28


class C_ViewmodelAttachmentModel /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_0[0xED8]; // 0x0 - 0xED8
}; // size - 0xED8


class C_ViewmodelWeapon /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   char* m_worldModel; // 0xED8 - 0xEE0
}; // size - 0xEE0


class C_VoteController /* "client" */ : public C_BaseEntity /* "client" */
{
public:
   unsigned char pad_550[0x10]; // 0x550 - 0x560
   int32_t m_iActiveIssueIndex; // 0x560 - 0x564
   int32_t m_iOnlyTeamToVote; // 0x564 - 0x568
   int32 m_nVoteOptionCount[5]; // 0x568 - 0x57C
   int32_t m_nPotentialVotes; // 0x57C - 0x580
   bool m_bVotesDirty; // 0x580 - 0x581
   bool m_bTypeDirty; // 0x581 - 0x582
   bool m_bIsYesNoVote; // 0x582 - 0x583
   unsigned char pad_583[0x5]; // 0x583 - 0x588
}; // size - 0x588


class C_WeaponAWP /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponAug /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponBizon /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponCZ75a /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponElite /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponFamas /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponFiveSeven /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponG3SG1 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponGalilAR /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponGlock /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponHKP2000 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponM249 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponM4A1 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponM4A1Silencer /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponMAC10 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponMP5SD /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponMP7 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponMP9 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponMag7 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponNOVA /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   unsigned char pad_0[0x1A70]; // 0x0 - 0x1A70
}; // size - 0x1A70


class C_WeaponNegev /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponP250 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponP90 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponRevolver /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponSCAR20 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponSG556 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponSSG08 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponSawedoff /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   unsigned char pad_0[0x1A70]; // 0x0 - 0x1A70
}; // size - 0x1A70


class C_WeaponShield /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   float m_flDisplayHealth; // 0x1A90 - 0x1A94
   unsigned char pad_1A94[0xC]; // 0x1A94 - 0x1AA0
}; // size - 0x1AA0


class C_WeaponTec9 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponUMP45 /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponUSPSilencer /* "client" */ : public C_CSWeaponBaseGun /* "client" */
{
public:
   unsigned char pad_0[0x1A90]; // 0x0 - 0x1A90
}; // size - 0x1A90


class C_WeaponXM1014 /* "client" */ : public C_CSWeaponBase /* "client" */
{
public:
   unsigned char pad_0[0x1A70]; // 0x0 - 0x1A70
}; // size - 0x1A70


class C_World /* "client" */ : public C_BaseModelEntity /* "client" */
{
public:
   unsigned char pad_0[0xCD0]; // 0x0 - 0xCD0
}; // size - 0xCD0


class C_WorldModelGloves /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_0[0xEE0]; // 0x0 - 0xEE0
}; // size - 0xEE0


class C_WorldModelNametag /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_0[0xED8]; // 0x0 - 0xED8
}; // size - 0xED8


class C_WorldModelStattrak /* "client" */ : public CBaseAnimGraph /* "client" */
{
public:
   unsigned char pad_0[0xED8]; // 0x0 - 0xED8
}; // size - 0xED8


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
   CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68 - 0x2D8
   CUtlString m_strGenerateTexture_TargetParam; // 0x2D8 - 0x2E0
   CUtlString m_strGenerateTexture_InitialContainer; // 0x2E0 - 0x2E8
   int32_t m_nResolution; // 0x2E8 - 0x2EC
   bool m_bIsScratchTarget; // 0x2EC - 0x2ED
   bool m_bSplatDebugInfo; // 0x2ED - 0x2EE
   bool m_bCaptureInRenderDoc; // 0x2EE - 0x2EF
   unsigned char pad_2EF[0x1]; // 0x2EF - 0x2F0
   CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions; // 0x2F0 - 0x308
   CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators; // 0x308 - 0x320
   CUtlString m_strPopInputQueue_Container; // 0x320 - 0x328
   CUtlString m_strDrawText_InputContainerSrc; // 0x328 - 0x330
   CUtlString m_strDrawText_InputContainerProperty; // 0x330 - 0x338
   Vector2D m_vecDrawText_Position; // 0x338 - 0x340
   Color m_colDrawText_Color; // 0x340 - 0x344
   unsigned char pad_344[0x4]; // 0x344 - 0x348
   CUtlString m_strDrawText_Font; // 0x348 - 0x350
   CUtlVector< CompMatMutatorCondition_t > m_vecConditions; // 0x350 - 0x368
}; // size - 0x368


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
}; // size - 0x270


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
   KeyValues3 m_FinalKVs; // 0x28 - 0x38
   unsigned char pad_38[0x8]; // 0x38 - 0x40
   CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures; // 0x40 - 0x58
   unsigned char pad_58[0x8]; // 0x58 - 0x60
}; // size - 0x60


class ConceptHistory_t /* "server" */
{
public:
   float timeSpoken; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CRR_Response m_response; // 0x8 - 0x1F0
}; // size - 0x1F0


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


class CountdownTimer /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   float m_duration; // 0x8 - 0xC
   GameTime_t m_timestamp; // 0xC - 0x10
   float m_timescale; // 0x10 - 0x14
   WorldGroupId_t m_nWorldGroupId; // 0x14 - 0x18
}; // size - 0x18


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


class EngineCountdownTimer /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   float m_duration; // 0x8 - 0xC
   float m_timestamp; // 0xC - 0x10
   float m_timescale; // 0x10 - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class EntityRenderAttribute_t /* "client" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
   CUtlStringToken m_ID; // 0x30 - 0x34
   Vector4D m_Values; // 0x34 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
}; // size - 0x48


class EntityRenderAttribute_t /* "server" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
   CUtlStringToken m_ID; // 0x30 - 0x34
   Vector4D m_Values; // 0x34 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
}; // size - 0x48


class EntitySpottedState_t /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   bool m_bSpotted; // 0x8 - 0x9
   unsigned char pad_9[0x3]; // 0x9 - 0xC
   uint32 m_bSpottedByMask[2]; // 0xC - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


class EntitySpottedState_t /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   bool m_bSpotted; // 0x8 - 0x9
   unsigned char pad_9[0x3]; // 0x9 - 0xC
   uint32 m_bSpottedByMask[2]; // 0xC - 0x14
   unsigned char pad_14[0x4]; // 0x14 - 0x18
}; // size - 0x18


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


class FeBandBendLimit_t /* "physicslib" */
{
public:
   float flDistMin; // 0x0 - 0x4
   float flDistMax; // 0x4 - 0x8
   uint16 nNode[6]; // 0x8 - 0x14
}; // size - 0x14


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


class FeNodeIntegrator_t /* "physicslib" */
{
public:
   float flPointDamping; // 0x0 - 0x4
   float flAnimationForceAttraction; // 0x4 - 0x8
   float flAnimationVertexAttraction; // 0x8 - 0xC
   float flGravity; // 0xC - 0x10
}; // size - 0x10


class FeProxyVertexMap_t /* "physicslib" */
{
public:
   CUtlString m_Name; // 0x0 - 0x8
   float m_flWeight; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class FeSimdAnimStrayRadius_t /* "physicslib" */
{
public:
   uint16 nNode[4][2]; // 0x0 - 0x10
   fltx4 flMaxDist; // 0x10 - 0x20
   fltx4 flRelaxationFactor; // 0x20 - 0x30
}; // size - 0x30


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


class FeTaperedCapsuleStretch_t /* "physicslib" */
{
public:
   uint16 nNode[2]; // 0x0 - 0x4
   uint16_t nCollisionMask; // 0x4 - 0x6
   uint16_t nDummy; // 0x6 - 0x8
   float32 flRadius[2]; // 0x8 - 0x10
}; // size - 0x10


class FilterDamageType /* "server" */ : public CBaseFilter /* "server" */
{
public:
   int32_t m_iDamageType; // 0x518 - 0x51C
   unsigned char pad_51C[0x4]; // 0x51C - 0x520
}; // size - 0x520


class FollowAttachmentSettings_t /* "animgraphlib" */
{
public:
   CAnimAttachment m_attachment; // 0x0 - 0x80
   int32_t m_boneIndex; // 0x80 - 0x84
   bool m_bMatchTranslation; // 0x84 - 0x85
   bool m_bMatchRotation; // 0x85 - 0x86
   unsigned char pad_86[0xA]; // 0x86 - 0x90
}; // size - 0x90


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


class IControlPointEditorData /* "particles" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IHasAttributes /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IParticleCollection /* "particles" */
{
public:
   unsigned char pad_0[0x10]; // 0x0 - 0x10
}; // size - 0x10


class IParticleSystemDefinition /* "particles" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class IRagdoll /* "server" */
{
public:
   virtual class CSchemaClassInfo* GetClassInformation(void) = 0;
}; // size - 0x8


class InfoForResourceTypeCAnimationGroup /* "resourcesystem" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


class IntervalTimer /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   GameTime_t m_timestamp; // 0x8 - 0xC
   WorldGroupId_t m_nWorldGroupId; // 0xC - 0x10
}; // size - 0x10


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


class MaterialVariable_t /* "particles" */
{
public:
   CUtlString m_strVariable; // 0x0 - 0x8
   ParticleAttributeIndex_t m_nVariableField; // 0x8 - 0xC
   float m_flScale; // 0xC - 0x10
}; // size - 0x10


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


class MoodAnimation_t /* "animationsystem" */
{
public:
   CUtlString m_sName; // 0x0 - 0x8
   float m_flWeight; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
}; // size - 0x10


class NavGravity_t /* "navlib" */
{
public:
   Vector m_vGravity; // 0x0 - 0xC
   bool m_bDefault; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
}; // size - 0x10


class NmPercent_t /* "animlib" */
{
public:
   float m_flValue; // 0x0 - 0x4
}; // size - 0x4


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


class PARTICLE_EHANDLE__ /* "particleslib" */
{
public:
   int32_t unused; // 0x0 - 0x4
}; // size - 0x4


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


class PermEntityLumpData_t /* "worldrenderer" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CUtlString m_name; // 0x8 - 0x10
   CUtlString m_hammerUniqueId; // 0x10 - 0x18
   CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x18 - 0x30
   CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues; // 0x30 - 0x40
}; // size - 0x40


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
   uint16_t m_nRodVelocitySmoothIterations; // 0x614 - 0x616
   uint16_t m_nQuadVelocitySmoothIterations; // 0x616 - 0x618
}; // size - 0x618


class PhysicsRagdollPose_t /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   CNetworkVarChainer __m_pChainEntity; // 0x8 - 0x30
   CNetworkUtlVectorBase< CTransform > m_Transforms; // 0x30 - 0x48
   CHandle< CBaseEntity > m_hOwner; // 0x48 - 0x4C
   unsigned char pad_4C[0x4]; // 0x4C - 0x50
}; // size - 0x50


class PointDefinition_t /* "particles" */
{
public:
   int32_t m_nControlPoint; // 0x0 - 0x4
   bool m_bLocalCoords; // 0x4 - 0x5
   unsigned char pad_5[0x3]; // 0x5 - 0x8
   Vector m_vOffset; // 0x8 - 0x14
}; // size - 0x14


class PulseDocNodeID_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseRuntimeChunkIndex_t /* "pulse_runtime_lib" */
{
public:
   int32_t m_Value; // 0x0 - 0x4
}; // size - 0x4


class PulseRuntimeStateOffset_t /* "pulse_runtime_lib" */
{
public:
   uint16_t m_Value; // 0x0 - 0x2
}; // size - 0x2


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
}; // size - 0x10


class RelationshipOverride_t /* "server" */ : public Relationship_t /* "server" */
{
public:
   CHandle< CBaseEntity > entity; // 0x8 - 0xC
   Class_T classType; // 0xC - 0x10
}; // size - 0x10


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


class RnCapsuleDesc_t /* "physicslib" */ : public RnShapeDesc_t /* "physicslib" */
{
public:
   RnCapsule_t m_Capsule; // 0x10 - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
}; // size - 0x30


class RnHullDesc_t /* "physicslib" */ : public RnShapeDesc_t /* "physicslib" */
{
public:
   RnHull_t m_Hull; // 0x10 - 0x108
}; // size - 0x108


class RnMeshDesc_t /* "physicslib" */ : public RnShapeDesc_t /* "physicslib" */
{
public:
   RnMesh_t m_Mesh; // 0x10 - 0xB8
}; // size - 0xB8


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


class SellbackPurchaseEntry_t /* "client" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
   uint16_t m_unDefIdx; // 0x30 - 0x32
   unsigned char pad_32[0x2]; // 0x32 - 0x34
   int32_t m_nCost; // 0x34 - 0x38
   int32_t m_nPrevArmor; // 0x38 - 0x3C
   bool m_bPrevHelmet; // 0x3C - 0x3D
   unsigned char pad_3D[0x3]; // 0x3D - 0x40
   CEntityHandle m_hItem; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
}; // size - 0x48


class SellbackPurchaseEntry_t /* "server" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
   uint16_t m_unDefIdx; // 0x30 - 0x32
   unsigned char pad_32[0x2]; // 0x32 - 0x34
   int32_t m_nCost; // 0x34 - 0x38
   int32_t m_nPrevArmor; // 0x38 - 0x3C
   bool m_bPrevHelmet; // 0x3C - 0x3D
   unsigned char pad_3D[0x3]; // 0x3D - 0x40
   CEntityHandle m_hItem; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
}; // size - 0x48


class SequenceHistory_t /* "client" */
{
public:
   HSequence m_hSequence; // 0x0 - 0x4
   GameTime_t m_flSeqStartTime; // 0x4 - 0x8
   float m_flSeqFixedCycle; // 0x8 - 0xC
   AnimLoopMode_t m_nSeqLoopMode; // 0xC - 0x10
   float m_flPlaybackRate; // 0x10 - 0x14
   float m_flCyclesPerSecond; // 0x14 - 0x18
}; // size - 0x18


class SequenceHistory_t /* "server" */
{
public:
   HSequence m_hSequence; // 0x0 - 0x4
   GameTime_t m_flSeqStartTime; // 0x4 - 0x8
   float m_flSeqFixedCycle; // 0x8 - 0xC
   AnimLoopMode_t m_nSeqLoopMode; // 0xC - 0x10
   float m_flPlaybackRate; // 0x10 - 0x14
   float m_flCyclesPerSecond; // 0x14 - 0x18
}; // size - 0x18


class SequenceWeightedList_t /* "particles" */
{
public:
   int32_t m_nSequence; // 0x0 - 0x4
   float m_flRelativeWeight; // 0x4 - 0x8
}; // size - 0x8


class ServerAuthoritativeWeaponSlot_t /* "client" */
{
public:
   unsigned char pad_0[0x28]; // 0x0 - 0x28
   uint16_t unClass; // 0x28 - 0x2A
   uint16_t unSlot; // 0x2A - 0x2C
   uint16_t unItemDefIdx; // 0x2C - 0x2E
   unsigned char pad_2E[0x2]; // 0x2E - 0x30
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



class SoundOpvarTraceResult_t /* "server" */
{
public:
   Vector vPos; // 0x0 - 0xC
   bool bDidHit; // 0xC - 0xD
   unsigned char pad_D[0x3]; // 0xD - 0x10
   float flDistSqrToCenter; // 0x10 - 0x14
}; // size - 0x14


class SummaryTakeDamageInfo_t /* "server" */
{
public:
   int32_t nSummarisedCount; // 0x0 - 0x4
   unsigned char pad_4[0x4]; // 0x4 - 0x8
   CTakeDamageInfo info; // 0x8 - 0xA0
   CTakeDamageResult result; // 0xA0 - 0xA8
   CHandle< CBaseEntity > hTarget; // 0xA8 - 0xAC
   unsigned char pad_AC[0x4]; // 0xAC - 0xB0
}; // size - 0xB0


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


class VMapResourceData_t /* "worldrenderer" */
{
public:
   unsigned char pad_0[0x1]; // 0x0 - 0x1
}; // size - 0x1


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


class VMixEffectChainDesc_t /* "soundsystem_lowlevel" */
{
public:
   float m_flCrossfadeTime; // 0x0 - 0x4
}; // size - 0x4


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


class VMixOscDesc_t /* "soundsystem_lowlevel" */
{
public:
   VMixLFOShape_t oscType; // 0x0 - 0x4
   float m_freq; // 0x4 - 0x8
   float m_flPhase; // 0x8 - 0xC
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


class VPhysicsCollisionAttribute_t /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   uint64_t m_nInteractsAs; // 0x8 - 0x10
   uint64_t m_nInteractsWith; // 0x10 - 0x18
   uint64_t m_nInteractsExclude; // 0x18 - 0x20
   uint32_t m_nEntityId; // 0x20 - 0x24
   uint32_t m_nOwnerId; // 0x24 - 0x28
   uint16_t m_nHierarchyId; // 0x28 - 0x2A
   uint8_t m_nCollisionGroup; // 0x2A - 0x2B
   uint8_t m_nCollisionFunctionMask; // 0x2B - 0x2C
   unsigned char pad_2C[0x4]; // 0x2C - 0x30
}; // size - 0x30


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


class ViewAngleServerChange_t /* "server" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
   FixAngleSet_t nType; // 0x30 - 0x31
   unsigned char pad_31[0x3]; // 0x31 - 0x34
   QAngle qAngle; // 0x34 - 0x40
   uint32_t nIndex; // 0x40 - 0x44
   unsigned char pad_44[0x4]; // 0x44 - 0x48
}; // size - 0x48


class WeaponPurchaseCount_t /* "client" */
{
public:
   unsigned char pad_0[0x30]; // 0x0 - 0x30
   uint16_t m_nItemDefIndex; // 0x30 - 0x32
   uint16_t m_nCount; // 0x32 - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
}; // size - 0x38


class WeaponPurchaseTracker_t /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases; // 0x8 - 0x58
}; // size - 0x58


class WorldBuilderParams_t /* "worldrenderer" */
{
public:
   float m_flMinDrawVolumeSize; // 0x0 - 0x4
   bool m_bBuildBakedLighting; // 0x4 - 0x5
   unsigned char pad_5[0x3]; // 0x5 - 0x8
   Vector2D m_vLightmapUvScale; // 0x8 - 0x10
   uint64_t m_nCompileTimestamp; // 0x10 - 0x18
   uint64_t m_nCompileFingerprint; // 0x18 - 0x20
}; // size - 0x20


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


class audioparams_t /* "server" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   Vector localSound[8]; // 0x8 - 0x68
   int32_t soundscapeIndex; // 0x68 - 0x6C
   uint8_t localBits; // 0x6C - 0x6D
   unsigned char pad_6D[0x3]; // 0x6D - 0x70
   int32_t soundscapeEntityListIndex; // 0x70 - 0x74
   uint32_t soundEventHash; // 0x74 - 0x78
}; // size - 0x78


class audioparams_t /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   Vector localSound[8]; // 0x8 - 0x68
   int32_t soundscapeIndex; // 0x68 - 0x6C
   uint8_t localBits; // 0x6C - 0x6D
   unsigned char pad_6D[0x3]; // 0x6D - 0x70
   int32_t soundscapeEntityListIndex; // 0x70 - 0x74
   uint32_t soundEventHash; // 0x74 - 0x78
}; // size - 0x78


class constraint_axislimit_t /* "vphysics2" */
{
public:
   float flMinRotation; // 0x0 - 0x4
   float flMaxRotation; // 0x4 - 0x8
   float flMotorTargetAngSpeed; // 0x8 - 0xC
   float flMotorMaxTorque; // 0xC - 0x10
}; // size - 0x10


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


class shard_model_desc_t /* "client" */
{
public:
   unsigned char pad_0[0x8]; // 0x0 - 0x8
   int32_t m_nModelID; // 0x8 - 0xC
   unsigned char pad_C[0x4]; // 0xC - 0x10
   CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x10 - 0x18
   ShardSolid_t m_solid; // 0x18 - 0x19
   ShatterPanelMode m_ShatterPanelMode; // 0x19 - 0x1A
   unsigned char pad_1A[0x2]; // 0x1A - 0x1C
   Vector2D m_vecPanelSize; // 0x1C - 0x24
   Vector2D m_vecStressPositionA; // 0x24 - 0x2C
   Vector2D m_vecStressPositionB; // 0x2C - 0x34
   unsigned char pad_34[0x4]; // 0x34 - 0x38
   C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x38 - 0x50
   float m_flGlassHalfThickness; // 0x50 - 0x54
   bool m_bHasParent; // 0x54 - 0x55
   bool m_bParentFrozen; // 0x55 - 0x56
   unsigned char pad_56[0x2]; // 0x56 - 0x58
   CUtlStringToken m_SurfacePropStringToken; // 0x58 - 0x5C
   unsigned char pad_5C[0x4]; // 0x5C - 0x60
}; // size - 0x60


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


