#pragma once


enum class ThreeState_t : std::uint32_t
{
   TRS_FALSE = 0,
   TRS_TRUE = 1,
   TRS_NONE = 2
}

enum class fieldtype_t : std::uint8_t
{
   FIELD_VOID = 0,
   FIELD_FLOAT32 = 1,
   FIELD_STRING = 2,
   FIELD_VECTOR = 3,
   FIELD_QUATERNION = 4,
   FIELD_INT32 = 5,
   FIELD_BOOLEAN = 6,
   FIELD_INT16 = 7,
   FIELD_CHARACTER = 8,
   FIELD_COLOR32 = 9,
   FIELD_EMBEDDED = 10,
   FIELD_CUSTOM = 11,
   FIELD_CLASSPTR = 12,
   FIELD_EHANDLE = 13,
   FIELD_POSITION_VECTOR = 14,
   FIELD_TIME = 15,
   FIELD_TICK = 16,
   FIELD_SOUNDNAME = 17,
   FIELD_INPUT = 18,
   FIELD_FUNCTION = 19,
   FIELD_VMATRIX = 20,
   FIELD_VMATRIX_WORLDSPACE = 21,
   FIELD_MATRIX3X4_WORLDSPACE = 22,
   FIELD_INTERVAL = 23,
   FIELD_UNUSED = 24,
   FIELD_VECTOR2D = 25,
   FIELD_INT64 = 26,
   FIELD_VECTOR4D = 27,
   FIELD_RESOURCE = 28,
   FIELD_TYPEUNKNOWN = 29,
   FIELD_CSTRING = 30,
   FIELD_HSCRIPT = 31,
   FIELD_VARIANT = 32,
   FIELD_UINT64 = 33,
   FIELD_FLOAT64 = 34,
   FIELD_POSITIVEINTEGER_OR_NULL = 35,
   FIELD_HSCRIPT_NEW_INSTANCE = 36,
   FIELD_UINT32 = 37,
   FIELD_UTLSTRINGTOKEN = 38,
   FIELD_QANGLE = 39,
   FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 40,
   FIELD_HMATERIAL = 41,
   FIELD_HMODEL = 42,
   FIELD_NETWORK_QUANTIZED_VECTOR = 43,
   FIELD_NETWORK_QUANTIZED_FLOAT = 44,
   FIELD_DIRECTION_VECTOR_WORLDSPACE = 45,
   FIELD_QANGLE_WORLDSPACE = 46,
   FIELD_QUATERNION_WORLDSPACE = 47,
   FIELD_HSCRIPT_LIGHTBINDING = 48,
   FIELD_V8_VALUE = 49,
   FIELD_V8_OBJECT = 50,
   FIELD_V8_ARRAY = 51,
   FIELD_V8_CALLBACK_INFO = 52,
   FIELD_UTLSTRING = 53,
   FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 54,
   FIELD_HRENDERTEXTURE = 55,
   FIELD_HPARTICLESYSTEMDEFINITION = 56,
   FIELD_UINT8 = 57,
   FIELD_UINT16 = 58,
   FIELD_CTRANSFORM = 59,
   FIELD_CTRANSFORM_WORLDSPACE = 60,
   FIELD_HPOSTPROCESSING = 61,
   FIELD_MATRIX3X4 = 62,
   FIELD_SHIM = 63,
   FIELD_CMOTIONTRANSFORM = 64,
   FIELD_CMOTIONTRANSFORM_WORLDSPACE = 65,
   FIELD_ATTACHMENT_HANDLE = 66,
   FIELD_AMMO_INDEX = 67,
   FIELD_CONDITION_ID = 68,
   FIELD_AI_SCHEDULE_BITS = 69,
   FIELD_MODIFIER_HANDLE = 70,
   FIELD_ROTATION_VECTOR = 71,
   FIELD_ROTATION_VECTOR_WORLDSPACE = 72,
   FIELD_HVDATA = 73,
   FIELD_SCALE32 = 74,
   FIELD_STRING_AND_TOKEN = 75,
   FIELD_ENGINE_TIME = 76,
   FIELD_ENGINE_TICK = 77,
   FIELD_WORLD_GROUP_ID = 78,
   FIELD_TYPECOUNT = 79
}

enum class FuseVariableAccess_t : std::uint8_t
{
   WRITABLE = 0,
   READ_ONLY = 1
}

enum class FuseVariableType_t : std::uint8_t
{
   INVALID = 0,
   BOOL = 1,
   INT8 = 2,
   INT16 = 3,
   INT32 = 4,
   UINT8 = 5,
   UINT16 = 6,
   UINT32 = 7,
   FLOAT32 = 8
}

enum class RenderSlotType_t : std::int32_t
{
   RENDER_SLOT_INVALID = -1,
   RENDER_SLOT_PER_VERTEX = 0,
   RENDER_SLOT_PER_INSTANCE = 1
}

enum class RenderBufferFlags_t : std::uint32_t
{
   RENDER_BUFFER_USAGE_VERTEX_BUFFER = 1,
   RENDER_BUFFER_USAGE_INDEX_BUFFER = 2,
   RENDER_BUFFER_USAGE_SHADER_RESOURCE = 4,
   RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 8,
   RENDER_BUFFER_BYTEADDRESS_BUFFER = 16,
   RENDER_BUFFER_STRUCTURED_BUFFER = 32,
   RENDER_BUFFER_APPEND_CONSUME_BUFFER = 64,
   RENDER_BUFFER_UAV_COUNTER = 128,
   RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 256
}

enum class RenderPrimitiveType_t : std::uint32_t
{
   RENDER_PRIM_POINTS = 0,
   RENDER_PRIM_LINES = 1,
   RENDER_PRIM_LINES_WITH_ADJACENCY = 2,
   RENDER_PRIM_LINE_STRIP = 3,
   RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 4,
   RENDER_PRIM_TRIANGLES = 5,
   RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 6,
   RENDER_PRIM_TRIANGLE_STRIP = 7,
   RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 8,
   RENDER_PRIM_INSTANCED_QUADS = 9,
   RENDER_PRIM_HETEROGENOUS = 10,
   RENDER_PRIM_1_CONTROL_POINT_PATCHLIST = 11,
   RENDER_PRIM_2_CONTROL_POINT_PATCHLIST = 12,
   RENDER_PRIM_3_CONTROL_POINT_PATCHLIST = 13,
   RENDER_PRIM_4_CONTROL_POINT_PATCHLIST = 14,
   RENDER_PRIM_5_CONTROL_POINT_PATCHLIST = 15,
   RENDER_PRIM_6_CONTROL_POINT_PATCHLIST = 16,
   RENDER_PRIM_7_CONTROL_POINT_PATCHLIST = 17,
   RENDER_PRIM_8_CONTROL_POINT_PATCHLIST = 18,
   RENDER_PRIM_9_CONTROL_POINT_PATCHLIST = 19,
   RENDER_PRIM_10_CONTROL_POINT_PATCHLIST = 20,
   RENDER_PRIM_11_CONTROL_POINT_PATCHLIST = 21,
   RENDER_PRIM_12_CONTROL_POINT_PATCHLIST = 22,
   RENDER_PRIM_13_CONTROL_POINT_PATCHLIST = 23,
   RENDER_PRIM_14_CONTROL_POINT_PATCHLIST = 24,
   RENDER_PRIM_15_CONTROL_POINT_PATCHLIST = 25,
   RENDER_PRIM_16_CONTROL_POINT_PATCHLIST = 26,
   RENDER_PRIM_17_CONTROL_POINT_PATCHLIST = 27,
   RENDER_PRIM_18_CONTROL_POINT_PATCHLIST = 28,
   RENDER_PRIM_19_CONTROL_POINT_PATCHLIST = 29,
   RENDER_PRIM_20_CONTROL_POINT_PATCHLIST = 30,
   RENDER_PRIM_21_CONTROL_POINT_PATCHLIST = 31,
   RENDER_PRIM_22_CONTROL_POINT_PATCHLIST = 32,
   RENDER_PRIM_23_CONTROL_POINT_PATCHLIST = 33,
   RENDER_PRIM_24_CONTROL_POINT_PATCHLIST = 34,
   RENDER_PRIM_25_CONTROL_POINT_PATCHLIST = 35,
   RENDER_PRIM_26_CONTROL_POINT_PATCHLIST = 36,
   RENDER_PRIM_27_CONTROL_POINT_PATCHLIST = 37,
   RENDER_PRIM_28_CONTROL_POINT_PATCHLIST = 38,
   RENDER_PRIM_29_CONTROL_POINT_PATCHLIST = 39,
   RENDER_PRIM_30_CONTROL_POINT_PATCHLIST = 40,
   RENDER_PRIM_31_CONTROL_POINT_PATCHLIST = 41,
   RENDER_PRIM_32_CONTROL_POINT_PATCHLIST = 42,
   RENDER_PRIM_COMPUTE_SHADER = 43,
   RENDER_PRIM_TYPE_COUNT = 44
}

enum class InputLayoutVariation_t : std::uint32_t
{
   INPUT_LAYOUT_VARIATION_DEFAULT = 0,
   INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 1,
   INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 2,
   INPUT_LAYOUT_VARIATION_MAX = 3
}

enum class RenderMultisampleType_t : std::int32_t
{
   RENDER_MULTISAMPLE_INVALID = -1,
   RENDER_MULTISAMPLE_NONE = 0,
   RENDER_MULTISAMPLE_2X = 1,
   RENDER_MULTISAMPLE_4X = 2,
   RENDER_MULTISAMPLE_6X = 3,
   RENDER_MULTISAMPLE_8X = 4,
   RENDER_MULTISAMPLE_16X = 5,
   RENDER_MULTISAMPLE_TYPE_COUNT = 6
}

enum class SpawnDebugOverrideState_t : std::uint32_t
{
   SPAWN_DEBUG_OVERRIDE_NONE = 0,
   SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 1,
   SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 2
}

enum class SpawnDebugRestrictionOverrideState_t : std::uint32_t
{
   SPAWN_DEBUG_RESTRICT_NONE = 0,
   SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 1,
   SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 2,
   SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 4,
   SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 8
}

enum class EntityDormancyType_t : std::uint32_t
{
   ENTITY_NOT_DORMANT = 0,
   ENTITY_DORMANT = 1,
   ENTITY_SUSPENDED = 2
}

enum class EntityIOTargetType_t : std::int32_t
{
   ENTITY_IO_TARGET_INVALID = -1,
   ENTITY_IO_TARGET_ENTITYNAME = 2,
   ENTITY_IO_TARGET_EHANDLE = 6,
   ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 7
}

enum class HorizJustification_e : std::uint32_t
{
   HORIZ_JUSTIFICATION_LEFT = 0,
   HORIZ_JUSTIFICATION_CENTER = 1,
   HORIZ_JUSTIFICATION_RIGHT = 2,
   HORIZ_JUSTIFICATION_NONE = 3
}

enum class VertJustification_e : std::uint32_t
{
   VERT_JUSTIFICATION_TOP = 0,
   VERT_JUSTIFICATION_CENTER = 1,
   VERT_JUSTIFICATION_BOTTOM = 2,
   VERT_JUSTIFICATION_NONE = 3
}

enum class LayoutPositionType_e : std::uint32_t
{
   LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0,
   LAYOUTPOSITIONTYPE_FRACTIONAL = 1,
   LAYOUTPOSITIONTYPE_NONE = 2
}

enum class BloomBlendMode_t : std::uint32_t
{
   BLOOM_BLEND_ADD = 0,
   BLOOM_BLEND_SCREEN = 1,
   BLOOM_BLEND_BLUR = 2
}

enum class ViewFadeMode_t : std::uint32_t
{
   VIEW_FADE_CONSTANT_COLOR = 0,
   VIEW_FADE_MODULATE = 1,
   VIEW_FADE_MOD2X = 2
}

enum class MoodType_t : std::uint32_t
{
   eMoodType_Head = 0,
   eMoodType_Body = 1
}

enum class AnimationProcessingType_t : std::uint32_t
{
   ANIMATION_PROCESSING_SERVER_SIMULATION = 0,
   ANIMATION_PROCESSING_CLIENT_SIMULATION = 1,
   ANIMATION_PROCESSING_CLIENT_PREDICTION = 2,
   ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 3,
   ANIMATION_PROCESSING_CLIENT_RENDER = 4,
   ANIMATION_PROCESSING_MAX = 5
}

enum class AnimationSnapshotType_t : std::uint32_t
{
   ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0,
   ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 1,
   ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 2,
   ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 3,
   ANIMATION_SNAPSHOT_CLIENT_RENDER = 4,
   ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 5,
   ANIMATION_SNAPSHOT_MAX = 6
}

enum class SeqCmd_t : std::uint32_t
{
   SeqCmd_Nop = 0,
   SeqCmd_LinearDelta = 1,
   SeqCmd_FetchFrameRange = 2,
   SeqCmd_Slerp = 3,
   SeqCmd_Add = 4,
   SeqCmd_Subtract = 5,
   SeqCmd_Scale = 6,
   SeqCmd_Copy = 7,
   SeqCmd_Blend = 8,
   SeqCmd_Worldspace = 9,
   SeqCmd_Sequence = 10,
   SeqCmd_FetchCycle = 11,
   SeqCmd_FetchFrame = 12,
   SeqCmd_IKLockInPlace = 13,
   SeqCmd_IKRestoreAll = 14,
   SeqCmd_ReverseSequence = 15,
   SeqCmd_Transform = 16
}

enum class SeqPoseSetting_t : std::uint32_t
{
   SEQ_POSE_SETTING_CONSTANT = 0,
   SEQ_POSE_SETTING_ROTATION = 1,
   SEQ_POSE_SETTING_POSITION = 2,
   SEQ_POSE_SETTING_VELOCITY = 3
}

enum class ParticleAttachment_t : std::int32_t
{
   PATTACH_INVALID = -1,
   PATTACH_ABSORIGIN = 0,
   PATTACH_ABSORIGIN_FOLLOW = 1,
   PATTACH_CUSTOMORIGIN = 2,
   PATTACH_CUSTOMORIGIN_FOLLOW = 3,
   PATTACH_POINT = 4,
   PATTACH_POINT_FOLLOW = 5,
   PATTACH_EYES_FOLLOW = 6,
   PATTACH_OVERHEAD_FOLLOW = 7,
   PATTACH_WORLDORIGIN = 8,
   PATTACH_ROOTBONE_FOLLOW = 9,
   PATTACH_RENDERORIGIN_FOLLOW = 10,
   PATTACH_MAIN_VIEW = 11,
   PATTACH_WATERWAKE = 12,
   PATTACH_CENTER_FOLLOW = 13,
   PATTACH_CUSTOM_GAME_STATE_1 = 14,
   PATTACH_HEALTHBAR = 15,
   MAX_PATTACH_TYPES = 16
}

enum class CAnimationGraphVisualizerPrimitiveType : std::uint32_t
{
   ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0,
   ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 1,
   ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 2,
   ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 3,
   ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 4
}

enum class AnimParamType_t : std::uint8_t
{
   ANIMPARAM_UNKNOWN = 0,
   ANIMPARAM_BOOL = 1,
   ANIMPARAM_ENUM = 2,
   ANIMPARAM_INT = 3,
   ANIMPARAM_FLOAT = 4,
   ANIMPARAM_VECTOR = 5,
   ANIMPARAM_QUATERNION = 6,
   ANIMPARAM_STRINGTOKEN = 7,
   ANIMPARAM_COUNT = 8
}

enum class BoneTransformSpace_t : std::int32_t
{
   BoneTransformSpace_Invalid = -1,
   BoneTransformSpace_Parent = 0,
   BoneTransformSpace_Model = 1,
   BoneTransformSpace_World = 2
}

enum class PoseType_t : std::uint8_t
{
   POSETYPE_STATIC = 0,
   POSETYPE_DYNAMIC = 1,
   POSETYPE_INVALID = 255
}

enum class AnimParamButton_t : std::uint32_t
{
   ANIMPARAM_BUTTON_NONE = 0,
   ANIMPARAM_BUTTON_DPAD_UP = 1,
   ANIMPARAM_BUTTON_DPAD_RIGHT = 2,
   ANIMPARAM_BUTTON_DPAD_DOWN = 3,
   ANIMPARAM_BUTTON_DPAD_LEFT = 4,
   ANIMPARAM_BUTTON_A = 5,
   ANIMPARAM_BUTTON_B = 6,
   ANIMPARAM_BUTTON_X = 7,
   ANIMPARAM_BUTTON_Y = 8,
   ANIMPARAM_BUTTON_LEFT_SHOULDER = 9,
   ANIMPARAM_BUTTON_RIGHT_SHOULDER = 10,
   ANIMPARAM_BUTTON_LTRIGGER = 11,
   ANIMPARAM_BUTTON_RTRIGGER = 12
}

enum class AnimParamNetworkSetting : std::uint32_t
{
   Auto = 0,
   AlwaysNetwork = 1,
   NeverNetwork = 2
}

enum class AnimNodeNetworkMode : std::uint32_t
{
   ServerAuthoritative = 0,
   ClientSimulate = 1
}

enum class StateActionBehavior : std::uint32_t
{
   STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0,
   STATETAGBEHAVIOR_FIRE_ON_ENTER = 1,
   STATETAGBEHAVIOR_FIRE_ON_EXIT = 2,
   STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 3
}

enum class SolveIKChainAnimNodeSettingSource : std::uint32_t
{
   SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0,
   SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 1
}

enum class FootstepLandedFootSoundType_t : std::uint32_t
{
   FOOTSOUND_Left = 0,
   FOOTSOUND_Right = 1,
   FOOTSOUND_UseOverrideSound = 2
}

enum class AnimPoseControl : std::uint32_t
{
   NoPoseControl = 0,
   AbsolutePoseControl = 1,
   RelativePoseControl = 2
}

enum class FacingMode : std::uint32_t
{
   FacingMode_Manual = 0,
   FacingMode_Path = 1,
   FacingMode_LookTarget = 2
}

enum class RagdollPoseControl : std::uint32_t
{
   Absolute = 0,
   Relative = 1
}

enum class AnimVRHandMotionRange_t : std::uint32_t
{
   MotionRange_WithController = 0,
   MotionRange_WithoutController = 1
}

enum class AnimVrFingerSplay_t : std::uint32_t
{
   AnimVrFingerSplay_Thumb_Index = 0,
   AnimVrFingerSplay_Index_Middle = 1,
   AnimVrFingerSplay_Middle_Ring = 2,
   AnimVrFingerSplay_Ring_Pinky = 3
}

enum class AnimVrBoneTransformSource_t : std::uint32_t
{
   AnimVrBoneTransformSource_LiveStream = 0,
   AnimVrBoneTransformSource_GripLimit = 1
}

enum class IKSolverType : std::uint32_t
{
   IKSOLVER_Perlin = 0,
   IKSOLVER_TwoBone = 1,
   IKSOLVER_Fabrik = 2,
   IKSOLVER_DogLeg3Bone = 3,
   IKSOLVER_CCD = 4,
   IKSOLVER_COUNT = 5
}

enum class IKTargetSource : std::uint32_t
{
   IKTARGETSOURCE_Bone = 0,
   IKTARGETSOURCE_AnimgraphParameter = 1,
   IKTARGETSOURCE_COUNT = 2
}

enum class IKTargetCoordinateSystem : std::uint32_t
{
   IKTARGETCOORDINATESYSTEM_WorldSpace = 0,
   IKTARGETCOORDINATESYSTEM_ModelSpace = 1,
   IKTARGETCOORDINATESYSTEM_COUNT = 2
}

enum class AnimValueSource : std::uint32_t
{
   MoveHeading = 0,
   MoveSpeed = 1,
   ForwardSpeed = 2,
   StrafeSpeed = 3,
   FacingHeading = 4,
   ManualFacingHeading = 5,
   LookHeading = 6,
   LookPitch = 7,
   Parameter = 8,
   WayPointHeading = 9,
   WayPointDistance = 10,
   BoundaryRadius = 11,
   TargetMoveHeading = 12,
   TargetMoveSpeed = 13,
   AccelerationHeading = 14,
   AccelerationSpeed = 15,
   SlopeHeading = 16,
   SlopeAngle = 17,
   SlopePitch = 18,
   SlopeYaw = 19,
   GoalDistance = 20,
   AccelerationLeftRight = 21,
   AccelerationFrontBack = 22,
   RootMotionSpeed = 23,
   RootMotionTurnSpeed = 24,
   MoveHeadingRelativeToLookHeading = 25,
   MaxMoveSpeed = 26,
   FingerCurl_Thumb = 27,
   FingerCurl_Index = 28,
   FingerCurl_Middle = 29,
   FingerCurl_Ring = 30,
   FingerCurl_Pinky = 31,
   FingerSplay_Thumb_Index = 32,
   FingerSplay_Index_Middle = 33,
   FingerSplay_Middle_Ring = 34,
   FingerSplay_Ring_Pinky = 35
}

enum class AnimVectorSource : std::uint32_t
{
   MoveDirection = 0,
   FacingDirection = 1,
   LookDirection = 2,
   VectorParameter = 3,
   WayPointDirection = 4,
   Acceleration = 5,
   SlopeNormal = 6,
   SlopeNormal_WorldSpace = 7,
   LookTarget = 8,
   LookTarget_WorldSpace = 9,
   WayPointPosition = 10,
   GoalPosition = 11,
   RootMotionVelocity = 12
}

enum class DampingSpeedFunction : std::uint32_t
{
   NoDamping = 0,
   Constant = 1,
   Spring = 2
}

enum class EAnimValueSource : std::uint32_t
{
   Constant = 0,
   Parameter = 1
}

enum class ControlValue : std::uint32_t
{
   ControlValue_MoveHeading = 0,
   ControlValue_MoveSpeed = 1,
   ControlValue_FacingHeading = 2,
   ControlValue_LookHeading = 3,
   ControlValue_LookPitch = 4,
   ControlValue_WayPointHeading = 5,
   ControlValue_WayPointDistance = 6,
   ControlValue_BoundaryRadius = 7,
   ControlValue_TotalTranslation_SourceState = 8,
   ControlValue_TotalTranslation_TargetState = 9,
   ControlValue_RemainingTranslation_SourceState = 10,
   ControlValue_RemainingTranslation_TargetState = 11,
   ControlValue_MoveVsFacingDelta = 12,
   ControlValue_SourceStateBlendWeight = 13,
   ControlValue_TargetStateBlendWeight = 14,
   ControlValue_TargetMoveHeading = 15,
   ControlValue_TargetMoveSpeed = 16,
   ControlValue_AccelerationHeading = 17,
   ControlValue_AccelerationSpeed = 18,
   ControlValue_SlopeHeading = 19,
   ControlValue_SlopeAngle = 20,
   ControlValue_SlopeYaw = 21,
   ControlValue_SlopePitch = 22,
   ControlValue_GoalDistance = 23,
   ControlValue_AccelerationLeftRight = 24,
   ControlValue_AccelerationFrontBack = 25,
   ControlValue_RootMotionSpeed = 26,
   ControlValue_RootMotionTurnSpeed = 27,
   ControlValue_MoveHeadingRelativeToLookHeading = 28,
   ControlValue_FingerCurl_Thumb = 29,
   ControlValue_FingerCurl_Index = 30,
   ControlValue_FingerCurl_Middle = 31,
   ControlValue_FingerCurl_Ring = 32,
   ControlValue_FingerCurl_Pinky = 33,
   ControlValue_FingerSplay_Thumb_Index = 34,
   ControlValue_FingerSplay_Index_Middle = 35,
   ControlValue_FingerSplay_Middle_Ring = 36,
   ControlValue_FingerSplay_Ring_Pinky = 37,
   ControlValue_Count = 38,
   ControlValue_Invalid = 255
}

enum class FieldNetworkOption : std::uint32_t
{
   Auto = 0,
   ForceEnable = 1,
   ForceDisable = 2
}

enum class DampedValueType : std::uint32_t
{
   FloatParameter = 0,
   VectorParameter = 1
}

enum class SelectionSource_t : std::uint32_t
{
   SelectionSource_Bool = 0,
   SelectionSource_Enum = 1
}

enum class SingleFrameSelection : std::uint32_t
{
   FirstFrame = 0,
   LastFrame = 1,
   SpecificFrame = 2
}

enum class Comparison_t : std::uint32_t
{
   COMPARISON_EQUALS = 0,
   COMPARISON_NOT_EQUALS = 1,
   COMPARISON_GREATER = 2,
   COMPARISON_GREATER_OR_EQUAL = 3,
   COMPARISON_LESS = 4,
   COMPARISON_LESS_OR_EQUAL = 5,
   COMPARISON_COUNT = 6
}

enum class ComparisonValueType : std::uint8_t
{
   COMPARISONVALUETYPE_FIXEDVALUE = 0,
   COMPARISONVALUETYPE_PARAMETER = 1
}

enum class FinishedConditionOption : std::uint32_t
{
   FinishedConditionOption_OnFinished = 0,
   FinishedConditionOption_OnAlmostFinished = 1
}

enum class StateComparisonValueType : std::uint32_t
{
   StateComparisonValue_FixedValue = 0,
   StateComparisonValue_StateValue = 1,
   StateComparisonValue_Parameter = 2
}

enum class StateValue : std::uint32_t
{
   TotalTranslation_SourceState = 0,
   TotalTranslation_TargetState = 1,
   SourceStateBlendWeight = 2,
   TargetStateBlendWeight = 3,
   Count = 4
}

enum class FootFallTagFoot_t : std::uint32_t
{
   FOOT1 = 0,
   FOOT2 = 1,
   FOOT3 = 2,
   FOOT4 = 3,
   FOOT5 = 4,
   FOOT6 = 5,
   FOOT7 = 6,
   FOOT8 = 7
}

enum class MatterialAttributeTagType_t : std::uint32_t
{
   MATERIAL_ATTRIBUTE_TAG_VALUE = 0,
   MATERIAL_ATTRIBUTE_TAG_COLOR = 1
}

enum class AnimScriptType : std::int16_t
{
   ANIMSCRIPT_TYPE_INVALID = -1,
   ANIMSCRIPT_FUSE_GENERAL = 0,
   ANIMSCRIPT_FUSE_STATEMACHINE = 1,
   ANIMSCRIPT_EXPRTK = 2
}

enum class BlendKeyType : std::uint32_t
{
   BlendKey_UserValue = 0,
   BlendKey_Velocity = 1,
   BlendKey_Distance = 2,
   BlendKey_RemainingDistance = 3
}

enum class ResetCycleOption : std::uint32_t
{
   Beginning = 0,
   SameCycleAsSource = 1,
   InverseSourceCycle = 2,
   FixedValue = 3,
   SameTimeAsSource = 4
}

enum class ChoiceMethod : std::uint32_t
{
   WeightedRandom = 0,
   WeightedRandomNoRepeat = 1,
   Iterate = 2,
   IterateRandom = 3
}

enum class ChoiceChangeMethod : std::uint32_t
{
   OnReset = 0,
   OnCycleEnd = 1,
   OnResetOrCycleEnd = 2
}

enum class ChoiceBlendMethod : std::uint32_t
{
   SingleBlendTime = 0,
   PerChoiceBlendTimes = 1
}

enum class IkEndEffectorType : std::uint32_t
{
   IkEndEffector_Attachment = 0,
   IkEndEffector_Bone = 1
}

enum class IkTargetType : std::uint32_t
{
   IkTarget_Attachment = 0,
   IkTarget_Bone = 1,
   IkTarget_Parameter_ModelSpace = 2,
   IkTarget_Parameter_WorldSpace = 3
}

enum class BinaryNodeTiming : std::uint32_t
{
   UseChild1 = 0,
   UseChild2 = 1,
   SyncChildren = 2
}

enum class BinaryNodeChildOption : std::uint32_t
{
   Child1 = 0,
   Child2 = 1
}

enum class StanceOverrideMode : std::uint32_t
{
   Sequence = 0,
   Node = 1
}

enum class SelectorTagBehavior_t : std::uint32_t
{
   SelectorTagBehavior_OnWhileCurrent = 0,
   SelectorTagBehavior_OffWhenFinished = 1,
   SelectorTagBehavior_OffBeforeFinished = 2
}

enum class Blend2DMode : std::uint32_t
{
   Blend2DMode_General = 0,
   Blend2DMode_Directional = 1
}

enum class FootLockSubVisualization : std::uint32_t
{
   FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0,
   FOOTLOCKSUBVISUALIZATION_IKSolve = 1
}

enum class FootPinningTimingSource : std::uint32_t
{
   FootMotion = 0,
   Tag = 1,
   Parameter = 2
}

enum class JumpCorrectionMethod : std::uint32_t
{
   ScaleMotion = 0,
   AddCorrectionDelta = 1
}

enum class StepPhase : std::uint32_t
{
   StepPhase_OnGround = 0,
   StepPhase_InAir = 1
}

enum class VelocityMetricMode : std::uint8_t
{
   DirectionOnly = 0,
   MagnitudeOnly = 1,
   DirectionAndMagnitude = 2
}

enum class BoneMaskBlendSpace : std::uint32_t
{
   BlendSpace_Parent = 0,
   BlendSpace_Model = 1,
   BlendSpace_Model_RotationOnly = 2,
   BlendSpace_Model_TranslationOnly = 3
}

enum class AimMatrixBlendMode : std::uint32_t
{
   AimMatrixBlendMode_None = 0,
   AimMatrixBlendMode_Additive = 1,
   AimMatrixBlendMode_ModelSpaceAdditive = 2,
   AimMatrixBlendMode_BoneMask = 3
}

enum class SolveIKChainAnimNodeDebugSetting : std::uint32_t
{
   SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0,
   SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 1,
   SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 2,
   SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 3,
   SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 4,
   SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 5,
   SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 6
}

enum class JiggleBoneSimSpace : std::uint32_t
{
   SimSpace_Local = 0,
   SimSpace_Model = 1,
   SimSpace_World = 2
}

enum class VPhysXFlagEnum_t : std::uint32_t
{
   FLAG_STATIC = 1,
   FLAG_KINEMATIC = 2,
   FLAG_JOINT = 4,
   FLAG_MASS = 8,
   FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 16
}

enum class EnumFlags0_t : std::uint32_t
{
   FLAG0_SHIFT_INTERPENETRATE = 0,
   FLAG0_SHIFT_CONSTRAIN = 1,
   FLAG0_SHIFT_BREAKABLE_FORCE = 2,
   FLAG0_SHIFT_BREAKABLE_TORQUE = 3
}

enum class Flags_t : std::uint32_t
{
   JOINT_FLAGS_NONE = 0,
   JOINT_FLAGS_BODY1_FIXED = 1
}

enum class VPhysXFlagEnum_t : std::uint32_t
{
   FLAG_IS_POLYSOUP_GEOMETRY = 1,
   FLAG_LEVEL_COLLISION = 16,
   FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32
}

enum class MeshDrawPrimitiveFlags_t : std::uint32_t
{
   MESH_DRAW_FLAGS_NONE = 0,
   MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 1,
   MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 2,
   MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 8,
   MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 16,
   MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 32,
   MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 64,
   MESH_DRAW_FLAGS_DRAW_LAST = 128
}

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
}

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
}

enum class ModelBoneFlexComponent_t : std::int32_t
{
   MODEL_BONE_FLEX_INVALID = -1,
   MODEL_BONE_FLEX_TX = 0,
   MODEL_BONE_FLEX_TY = 1,
   MODEL_BONE_FLEX_TZ = 2
}

enum class ModelConfigAttachmentType_t : std::int32_t
{
   MODEL_CONFIG_ATTACHMENT_INVALID = -1,
   MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0,
   MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 1,
   MODEL_CONFIG_ATTACHMENT_BONEMERGE = 2,
   MODEL_CONFIG_ATTACHMENT_COUNT = 3
}

enum class FlexOpCode_t : std::uint32_t
{
   FLEX_OP_CONST = 1,
   FLEX_OP_FETCH1 = 2,
   FLEX_OP_FETCH2 = 3,
   FLEX_OP_ADD = 4,
   FLEX_OP_SUB = 5,
   FLEX_OP_MUL = 6,
   FLEX_OP_DIV = 7,
   FLEX_OP_NEG = 8,
   FLEX_OP_EXP = 9,
   FLEX_OP_OPEN = 10,
   FLEX_OP_CLOSE = 11,
   FLEX_OP_COMMA = 12,
   FLEX_OP_MAX = 13,
   FLEX_OP_MIN = 14,
   FLEX_OP_2WAY_0 = 15,
   FLEX_OP_2WAY_1 = 16,
   FLEX_OP_NWAY = 17,
   FLEX_OP_COMBO = 18,
   FLEX_OP_DOMINATE = 19,
   FLEX_OP_DME_LOWER_EYELID = 20,
   FLEX_OP_DME_UPPER_EYELID = 21,
   FLEX_OP_SQRT = 22,
   FLEX_OP_REMAPVALCLAMPED = 23,
   FLEX_OP_SIN = 24,
   FLEX_OP_COS = 25,
   FLEX_OP_ABS = 26
}

enum class MorphFlexControllerRemapType_t : std::uint32_t
{
   MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0,
   MORPH_FLEXCONTROLLER_REMAP_2WAY = 1,
   MORPH_FLEXCONTROLLER_REMAP_NWAY = 2,
   MORPH_FLEXCONTROLLER_REMAP_EYELID = 3
}

enum class MorphBundleType_t : std::uint32_t
{
   MORPH_BUNDLE_TYPE_NONE = 0,
   MORPH_BUNDLE_TYPE_POSITION_SPEED = 1,
   MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 2,
   MORPH_BUNDLE_TYPE_COUNT = 3
}

enum class AnimVRHand_t : std::uint32_t
{
   AnimVRHand_Left = 0,
   AnimVRHand_Right = 1
}

enum class AnimVRFinger_t : std::uint32_t
{
   AnimVrFinger_Thumb = 0,
   AnimVrFinger_Index = 1,
   AnimVrFinger_Middle = 2,
   AnimVrFinger_Ring = 3,
   AnimVrFinger_Pinky = 4
}

enum class JointAxis_t : std::uint32_t
{
   JOINT_AXIS_X = 0,
   JOINT_AXIS_Y = 1,
   JOINT_AXIS_Z = 2,
   JOINT_AXIS_COUNT = 3
}

enum class JointMotion_t : std::uint32_t
{
   JOINT_MOTION_FREE = 0,
   JOINT_MOTION_LOCKED = 1,
   JOINT_MOTION_COUNT = 2
}

enum class soundlevel_t : std::uint32_t
{
   SNDLVL_NONE = 0,
   SNDLVL_20dB = 20,
   SNDLVL_25dB = 25,
   SNDLVL_30dB = 30,
   SNDLVL_35dB = 35,
   SNDLVL_40dB = 40,
   SNDLVL_45dB = 45,
   SNDLVL_50dB = 50,
   SNDLVL_55dB = 55,
   SNDLVL_IDLE = 60,
   SNDLVL_60dB = 60,
   SNDLVL_65dB = 65,
   SNDLVL_STATIC = 66,
   SNDLVL_70dB = 70,
   SNDLVL_NORM = 75,
   SNDLVL_75dB = 75,
   SNDLVL_80dB = 80,
   SNDLVL_TALKING = 80,
   SNDLVL_85dB = 85,
   SNDLVL_90dB = 90,
   SNDLVL_95dB = 95,
   SNDLVL_100dB = 100,
   SNDLVL_105dB = 105,
   SNDLVL_110dB = 110,
   SNDLVL_120dB = 120,
   SNDLVL_130dB = 130,
   SNDLVL_GUNFIRE = 140,
   SNDLVL_140dB = 140,
   SNDLVL_150dB = 150,
   SNDLVL_180dB = 180
}

enum class ActionType_t : std::uint32_t
{
   SOS_ACTION_NONE = 0,
   SOS_ACTION_LIMITER = 1,
   SOS_ACTION_TIME_LIMIT = 2
}

enum class SosActionStopType_t : std::uint32_t
{
   SOS_STOPTYPE_NONE = 0,
   SOS_STOPTYPE_TIME = 1,
   SOS_STOPTYPE_OPVAR = 2
}

enum class SosActionSortType_t : std::uint32_t
{
   SOS_SORTTYPE_HIGHEST = 0,
   SOS_SORTTYPE_LOWEST = 1
}

enum class SosGroupType_t : std::uint32_t
{
   SOS_GROUPTYPE_DYNAMIC = 0,
   SOS_GROUPTYPE_STATIC = 1
}

enum class SosEditItemType_t : std::uint32_t
{
   SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0,
   SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 1,
   SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 2,
   SOS_EDIT_ITEM_TYPE_STACK = 3,
   SOS_EDIT_ITEM_TYPE_OPERATOR = 4,
   SOS_EDIT_ITEM_TYPE_FIELD = 5
}

enum class VMixFilterType_t : std::int16_t
{
   FILTER_UNKNOWN = -1,
   FILTER_LOWPASS = 0,
   FILTER_HIGHPASS = 1,
   FILTER_BANDPASS = 2,
   FILTER_NOTCH = 3,
   FILTER_PEAKING_EQ = 4,
   FILTER_LOW_SHELF = 5,
   FILTER_HIGH_SHELF = 6,
   FILTER_ALLPASS = 7,
   FILTER_PASSTHROUGH = 8
}

enum class VMixFilterSlope_t : std::uint8_t
{
   FILTER_SLOPE_1POLE_6dB = 0,
   FILTER_SLOPE_1POLE_12dB = 1,
   FILTER_SLOPE_1POLE_18dB = 2,
   FILTER_SLOPE_1POLE_24dB = 3,
   FILTER_SLOPE_12dB = 4,
   FILTER_SLOPE_24dB = 5,
   FILTER_SLOPE_36dB = 6,
   FILTER_SLOPE_48dB = 7,
   FILTER_SLOPE_MAX = 7
}

enum class VMixProcessorType_t : std::uint16_t
{
   VPROCESSOR_UNKNOWN = 0,
   VPROCESSOR_STEAMAUDIO_REVERB = 1,
   VPROCESSOR_RT_PITCH = 2,
   VPROCESSOR_STEAMAUDIO_HRTF = 3,
   VPROCESSOR_DYNAMICS = 4,
   VPROCESSOR_PRESETDSP = 5,
   VPROCESSOR_DELAY = 6,
   VPROCESSOR_MOD_DELAY = 7,
   VPROCESSOR_DIFFUSOR = 8,
   VPROCESSOR_BOXVERB = 9,
   VPROCESSOR_FREEVERB = 10,
   VPROCESSOR_PLATEVERB = 11,
   VPROCESSOR_FULLWAVE_INTEGRATOR = 12,
   VPROCESSOR_FILTER = 13,
   VPROCESSOR_STEAMAUDIO_PATHING = 14,
   VPROCESSOR_EQ8 = 15,
   VPROCESSOR_ENVELOPE = 16,
   VPROCESSOR_VOCODER = 17,
   VPROCESSOR_CONVOLUTION = 18,
   VPROCESSOR_DYNAMICS_3BAND = 19,
   VPROCESSOR_DYNAMICS_COMPRESSOR = 20,
   VPROCESSOR_SHAPER = 21,
   VPROCESSOR_PANNER = 22,
   VPROCESSOR_UTILITY = 23,
   VPROCESSOR_AUTOFILTER = 24,
   VPROCESSOR_OSC = 25,
   VPROCESSOR_STEREODELAY = 26,
   VPROCESSOR_EFFECT_CHAIN = 27,
   VPROCESSOR_SUBGRAPH_SWITCH = 28,
   VPROCESSOR_STEAMAUDIO_DIRECT = 29
}

enum class VMixLFOShape_t : std::uint32_t
{
   LFO_SHAPE_SINE = 0,
   LFO_SHAPE_SQUARE = 1,
   LFO_SHAPE_TRI = 2,
   LFO_SHAPE_SAW = 3,
   LFO_SHAPE_NOISE = 4
}

enum class VMixPannerType_t : std::uint32_t
{
   PANNER_TYPE_LINEAR = 0,
   PANNER_TYPE_EQUAL_POWER = 1
}

enum class VMixSubgraphSwitchInterpolationType_t : std::uint32_t
{
   SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0,
   SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 1,
   SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 2
}

enum class VMixChannelOperation_t : std::uint32_t
{
   VMIX_CHAN_STEREO = 0,
   VMIX_CHAN_LEFT = 1,
   VMIX_CHAN_RIGHT = 2,
   VMIX_CHAN_SWAP = 3,
   VMIX_CHAN_MONO = 4,
   VMIX_CHAN_MID_SIDE = 5
}

enum class DisableShadows_t : std::uint8_t
{
   kDisableShadows_None = 0,
   kDisableShadows_All = 1,
   kDisableShadows_Baked = 2,
   kDisableShadows_Realtime = 3
}

enum class ObjectTypeFlags_t : std::uint32_t
{
   OBJECT_TYPE_NONE = 0,
   OBJECT_TYPE_IMAGE_LOD = 1,
   OBJECT_TYPE_GEOMETRY_LOD = 2,
   OBJECT_TYPE_DECAL = 4,
   OBJECT_TYPE_MODEL = 8,
   OBJECT_TYPE_BLOCK_LIGHT = 16,
   OBJECT_TYPE_NO_SHADOWS = 32,
   OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 64,
   OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 128,
   OBJECT_TYPE_NO_SUN_SHADOWS = 256,
   OBJECT_TYPE_RENDER_WITH_DYNAMIC = 512,
   OBJECT_TYPE_RENDER_TO_CUBEMAPS = 1024,
   OBJECT_TYPE_MODEL_HAS_LODS = 2048,
   OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 16384,
   OBJECT_TYPE_STATIC_CUBE_MAP = 32768
}

enum class ParticleControlPointAxis_t : std::uint32_t
{
   PARTICLE_CP_AXIS_X = 0,
   PARTICLE_CP_AXIS_Y = 1,
   PARTICLE_CP_AXIS_Z = 2,
   PARTICLE_CP_AXIS_NEGATIVE_X = 3,
   PARTICLE_CP_AXIS_NEGATIVE_Y = 4,
   PARTICLE_CP_AXIS_NEGATIVE_Z = 5
}

enum class ParticleImpulseType_t : std::uint32_t
{
   IMPULSE_TYPE_NONE = 0,
   IMPULSE_TYPE_GENERIC = 1,
   IMPULSE_TYPE_ROPE = 2,
   IMPULSE_TYPE_EXPLOSION = 4,
   IMPULSE_TYPE_EXPLOSION_UNDERWATER = 8,
   IMPULSE_TYPE_PARTICLE_SYSTEM = 16
}

enum class ParticleFalloffFunction_t : std::uint32_t
{
   PARTICLE_FALLOFF_CONSTANT = 0,
   PARTICLE_FALLOFF_LINEAR = 1,
   PARTICLE_FALLOFF_EXPONENTIAL = 2
}

enum class AnimationType_t : std::uint32_t
{
   ANIMATION_TYPE_FIXED_RATE = 0,
   ANIMATION_TYPE_FIT_LIFETIME = 1,
   ANIMATION_TYPE_MANUAL_FRAMES = 2
}

enum class ClosestPointTestType_t : std::uint32_t
{
   PARTICLE_CLOSEST_TYPE_BOX = 0,
   PARTICLE_CLOSEST_TYPE_CAPSULE = 1,
   PARTICLE_CLOSEST_TYPE_HYBRID = 2
}

enum class InheritableBoolType_t : std::uint32_t
{
   INHERITABLE_BOOL_INHERIT = 0,
   INHERITABLE_BOOL_FALSE = 1,
   INHERITABLE_BOOL_TRUE = 2
}

enum class ParticleHitboxBiasType_t : std::uint32_t
{
   PARTICLE_HITBOX_BIAS_ENTITY = 0,
   PARTICLE_HITBOX_BIAS_HITBOX = 1
}

enum class PFuncVisualizationType_t : std::uint32_t
{
   PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0,
   PFUNC_VISUALIZATION_SPHERE_SOLID = 1,
   PFUNC_VISUALIZATION_BOX = 2,
   PFUNC_VISUALIZATION_RING = 3,
   PFUNC_VISUALIZATION_PLANE = 4,
   PFUNC_VISUALIZATION_LINE = 5,
   PFUNC_VISUALIZATION_CYLINDER = 6
}

enum class PetGroundType_t : std::uint32_t
{
   PET_GROUND_NONE = 0,
   PET_GROUND_GRID = 1,
   PET_GROUND_PLANE = 2
}

enum class SpriteCardShaderType_t : std::uint32_t
{
   SPRITECARD_SHADER_BASE = 0,
   SPRITECARD_SHADER_CUSTOM = 1
}

enum class ParticleTopology_t : std::uint32_t
{
   PARTICLE_TOPOLOGY_POINTS = 0,
   PARTICLE_TOPOLOGY_LINES = 1,
   PARTICLE_TOPOLOGY_TRIS = 2,
   PARTICLE_TOPOLOGY_QUADS = 3,
   PARTICLE_TOPOLOGY_CUBES = 4
}

enum class ParticleDetailLevel_t : std::uint32_t
{
   PARTICLEDETAIL_LOW = 0,
   PARTICLEDETAIL_MEDIUM = 1,
   PARTICLEDETAIL_HIGH = 2,
   PARTICLEDETAIL_ULTRA = 3
}

enum class ParticleTraceSet_t : std::uint32_t
{
   PARTICLE_TRACE_SET_ALL = 0,
   PARTICLE_TRACE_SET_STATIC = 1,
   PARTICLE_TRACE_SET_DYNAMIC = 2
}

enum class ParticleCollisionMode_t : std::int32_t
{
   COLLISION_MODE_PER_PARTICLE_TRACE = 3,
   COLLISION_MODE_USE_NEAREST_TRACE = 2,
   COLLISION_MODE_PER_FRAME_PLANESET = 1,
   COLLISION_MODE_INITIAL_TRACE_DOWN = 0,
   COLLISION_MODE_DISABLED = -1
}

enum class ParticleColorBlendMode_t : std::uint32_t
{
   PARTICLEBLEND_DEFAULT = 0,
   PARTICLEBLEND_OVERLAY = 1,
   PARTICLEBLEND_DARKEN = 2,
   PARTICLEBLEND_LIGHTEN = 3,
   PARTICLEBLEND_MULTIPLY = 4
}

enum class Detail2Combo_t : std::int32_t
{
   DETAIL_2_COMBO_UNINITIALIZED = -1,
   DETAIL_2_COMBO_OFF = 0,
   DETAIL_2_COMBO_ADD = 1,
   DETAIL_2_COMBO_ADD_SELF_ILLUM = 2,
   DETAIL_2_COMBO_MOD2X = 3,
   DETAIL_2_COMBO_MUL = 4,
   DETAIL_2_COMBO_CROSSFADE = 5
}

enum class DetailCombo_t : std::uint32_t
{
   DETAIL_COMBO_OFF = 0,
   DETAIL_COMBO_ADD = 1,
   DETAIL_COMBO_ADD_SELF_ILLUM = 2,
   DETAIL_COMBO_MOD2X = 3
}

enum class ScalarExpressionType_t : std::int32_t
{
   SCALAR_EXPRESSION_UNINITIALIZED = -1,
   SCALAR_EXPRESSION_ADD = 0,
   SCALAR_EXPRESSION_SUBTRACT = 1,
   SCALAR_EXPRESSION_MUL = 2,
   SCALAR_EXPRESSION_DIVIDE = 3,
   SCALAR_EXPRESSION_INPUT_1 = 4,
   SCALAR_EXPRESSION_MIN = 5,
   SCALAR_EXPRESSION_MAX = 6,
   SCALAR_EXPRESSION_MOD = 7
}

enum class VectorExpressionType_t : std::int32_t
{
   VECTOR_EXPRESSION_UNINITIALIZED = -1,
   VECTOR_EXPRESSION_ADD = 0,
   VECTOR_EXPRESSION_SUBTRACT = 1,
   VECTOR_EXPRESSION_MUL = 2,
   VECTOR_EXPRESSION_DIVIDE = 3,
   VECTOR_EXPRESSION_INPUT_1 = 4,
   VECTOR_EXPRESSION_MIN = 5,
   VECTOR_EXPRESSION_MAX = 6,
   VECTOR_EXPRESSION_CROSSPRODUCT = 7
}

enum class VectorFloatExpressionType_t : std::int32_t
{
   VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = -1,
   VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0,
   VECTOR_FLOAT_EXPRESSION_DISTANCE = 1,
   VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 2,
   VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 3,
   VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 4,
   VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 5
}

enum class MissingParentInheritBehavior_t : std::int32_t
{
   MISSING_PARENT_DO_NOTHING = -1,
   MISSING_PARENT_KILL = 0,
   MISSING_PARENT_FIND_NEW = 1,
   MISSING_PARENT_SAME_INDEX = 2
}

enum class HitboxLerpType_t : std::uint32_t
{
   HITBOX_LERP_LIFETIME = 0,
   HITBOX_LERP_CONSTANT = 1
}

enum class ParticleSelection_t : std::uint32_t
{
   PARTICLE_SELECTION_FIRST = 0,
   PARTICLE_SELECTION_LAST = 1,
   PARTICLE_SELECTION_NUMBER = 2
}

enum class ParticlePinDistance_t : std::int32_t
{
   PARTICLE_PIN_DISTANCE_NONE = -1,
   PARTICLE_PIN_DISTANCE_NEIGHBOR = 0,
   PARTICLE_PIN_DISTANCE_FARTHEST = 1,
   PARTICLE_PIN_DISTANCE_FIRST = 2,
   PARTICLE_PIN_DISTANCE_LAST = 3,
   PARTICLE_PIN_DISTANCE_CENTER = 5,
   PARTICLE_PIN_DISTANCE_CP = 6,
   PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 7,
   PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 8,
   PARTICLE_PIN_SPEED = 9,
   PARTICLE_PIN_COLLECTION_AGE = 10
}

enum class ParticleColorBlendType_t : std::uint32_t
{
   PARTICLE_COLOR_BLEND_MULTIPLY = 0,
   PARTICLE_COLOR_BLEND_MULTIPLY2X = 1,
   PARTICLE_COLOR_BLEND_DIVIDE = 2,
   PARTICLE_COLOR_BLEND_ADD = 3,
   PARTICLE_COLOR_BLEND_SUBTRACT = 4,
   PARTICLE_COLOR_BLEND_MOD2X = 5,
   PARTICLE_COLOR_BLEND_SCREEN = 6,
   PARTICLE_COLOR_BLEND_MAX = 7,
   PARTICLE_COLOR_BLEND_MIN = 8,
   PARTICLE_COLOR_BLEND_REPLACE = 9,
   PARTICLE_COLOR_BLEND_AVERAGE = 10,
   PARTICLE_COLOR_BLEND_NEGATE = 11,
   PARTICLE_COLOR_BLEND_LUMINANCE = 12
}

enum class ParticleSetMethod_t : std::uint32_t
{
   PARTICLE_SET_REPLACE_VALUE = 0,
   PARTICLE_SET_SCALE_INITIAL_VALUE = 1,
   PARTICLE_SET_ADD_TO_INITIAL_VALUE = 2,
   PARTICLE_SET_RAMP_CURRENT_VALUE = 3,
   PARTICLE_SET_SCALE_CURRENT_VALUE = 4,
   PARTICLE_SET_ADD_TO_CURRENT_VALUE = 5
}

enum class ParticleDirectionNoiseType_t : std::uint32_t
{
   PARTICLE_DIR_NOISE_PERLIN = 0,
   PARTICLE_DIR_NOISE_CURL = 1,
   PARTICLE_DIR_NOISE_WORLEY_BASIC = 2
}

enum class ParticleRotationLockType_t : std::uint32_t
{
   PARTICLE_ROTATION_LOCK_NONE = 0,
   PARTICLE_ROTATION_LOCK_ROTATIONS = 1,
   PARTICLE_ROTATION_LOCK_NORMAL = 2
}

enum class ParticleEndcapMode_t : std::int32_t
{
   PARTICLE_ENDCAP_ALWAYS_ON = -1,
   PARTICLE_ENDCAP_ENDCAP_OFF = 0,
   PARTICLE_ENDCAP_ENDCAP_ON = 1
}

enum class ParticleLightingQuality_t : std::int32_t
{
   PARTICLE_LIGHTING_PER_PARTICLE = 0,
   PARTICLE_LIGHTING_PER_VERTEX = 1,
   PARTICLE_LIGHTING_PER_PIXEL = -1
}

enum class StandardLightingAttenuationStyle_t : std::uint32_t
{
   LIGHT_STYLE_OLD = 0,
   LIGHT_STYLE_NEW = 1
}

enum class ParticleTraceMissBehavior_t : std::uint32_t
{
   PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0,
   PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 1,
   PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 2
}

enum class ParticleOrientationSetMode_t : std::uint32_t
{
   PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0,
   PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 1
}

enum class ParticleLightnintBranchBehavior_t : std::uint32_t
{
   PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0,
   PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 1
}

enum class ParticleLightFogLightingMode_t : std::uint32_t
{
   PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0,
   PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 2,
   PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 4
}

enum class ParticleSequenceCropOverride_t : std::int32_t
{
   PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = -1,
   PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0,
   PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 1
}

enum class ParticleParentSetMode_t : std::uint32_t
{
   PARTICLE_SET_PARENT_NO = 0,
   PARTICLE_SET_PARENT_IMMEDIATE = 1,
   PARTICLE_SET_PARENT_ROOT = 1
}

enum class MaterialProxyType_t : std::uint32_t
{
   MATERIAL_PROXY_STATUS_EFFECT = 0,
   MATERIAL_PROXY_TINT = 1
}

enum class ParticleOrientationChoiceList_t : std::uint32_t
{
   PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0,
   PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 1,
   PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 2,
   PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 3,
   PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 4,
   PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 5
}

enum class ParticleOutputBlendMode_t : std::uint32_t
{
   PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0,
   PARTICLE_OUTPUT_BLEND_MODE_ADD = 1,
   PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 2,
   PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 3,
   PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 4,
   PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 5,
   PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 6
}

enum class ParticleAlphaReferenceType_t : std::uint32_t
{
   PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0,
   PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 1,
   PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 2,
   PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 3
}

enum class BlurFilterType_t : std::uint32_t
{
   BLURFILTER_GAUSSIAN = 0,
   BLURFILTER_BOX = 1
}

enum class ParticleLightTypeChoiceList_t : std::uint32_t
{
   PARTICLE_LIGHT_TYPE_POINT = 0,
   PARTICLE_LIGHT_TYPE_SPOT = 1,
   PARTICLE_LIGHT_TYPE_FX = 2,
   PARTICLE_LIGHT_TYPE_CAPSULE = 3
}

enum class ParticleLightUnitChoiceList_t : std::uint32_t
{
   PARTICLE_LIGHT_UNIT_CANDELAS = 0,
   PARTICLE_LIGHT_UNIT_LUMENS = 1
}

enum class ParticleOmni2LightTypeChoiceList_t : std::uint32_t
{
   PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0,
   PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 1
}

enum class ParticleLightBehaviorChoiceList_t : std::uint32_t
{
   PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0,
   PARTICLE_LIGHT_BEHAVIOR_ROPE = 1,
   PARTICLE_LIGHT_BEHAVIOR_TRAILS = 2
}

enum class ParticleDepthFeatheringMode_t : std::uint32_t
{
   PARTICLE_DEPTH_FEATHERING_OFF = 0,
   PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 1,
   PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 2
}

enum class ParticleVRHandChoiceList_t : std::uint32_t
{
   PARTICLE_VRHAND_LEFT = 0,
   PARTICLE_VRHAND_RIGHT = 1,
   PARTICLE_VRHAND_CP = 2,
   PARTICLE_VRHAND_CP_OBJECT = 3
}

enum class ParticleSortingChoiceList_t : std::uint32_t
{
   PARTICLE_SORTING_NEAREST = 0,
   PARTICLE_SORTING_CREATION_TIME = 1
}

enum class SpriteCardTextureType_t : std::uint32_t
{
   SPRITECARD_TEXTURE_DIFFUSE = 0,
   SPRITECARD_TEXTURE_ZOOM = 1,
   SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 2,
   SPRITECARD_TEXTURE_UVDISTORTION = 3,
   SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 4,
   SPRITECARD_TEXTURE_NORMALMAP = 5,
   SPRITECARD_TEXTURE_ANIMMOTIONVEC = 6,
   SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 7,
   SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 8,
   SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 9
}

enum class SpriteCardTextureChannel_t : std::uint32_t
{
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 1,
   SPRITECARD_TEXTURE_CHANNEL_MIX_A = 2,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 3,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 4,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 5,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 6,
   SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 7,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 8,
   SPRITECARD_TEXTURE_CHANNEL_MIX_R = 9,
   SPRITECARD_TEXTURE_CHANNEL_MIX_G = 10,
   SPRITECARD_TEXTURE_CHANNEL_MIX_B = 11,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 12,
   SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 13,
   SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 14
}

enum class SpriteCardPerParticleScale_t : std::uint32_t
{
   SPRITECARD_TEXTURE_PP_SCALE_NONE = 0,
   SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 1,
   SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 2,
   SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 3,
   SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 4,
   SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 5,
   SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 6,
   SPRITECARD_TEXTURE_PP_SCALE_ROLL = 7,
   SPRITECARD_TEXTURE_PP_SCALE_YAW = 8,
   SPRITECARD_TEXTURE_PP_SCALE_PITCH = 9,
   SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 10,
   SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 11,
   SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 12,
   SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 13
}

enum class ParticleTextureLayerBlendType_t : std::uint32_t
{
   SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0,
   SPRITECARD_TEXTURE_BLEND_MOD2X = 1,
   SPRITECARD_TEXTURE_BLEND_REPLACE = 2,
   SPRITECARD_TEXTURE_BLEND_ADD = 3,
   SPRITECARD_TEXTURE_BLEND_SUBTRACT = 4,
   SPRITECARD_TEXTURE_BLEND_AVERAGE = 5,
   SPRITECARD_TEXTURE_BLEND_LUMINANCE = 6
}

enum class ParticlePostProcessPriorityGroup_t : std::uint32_t
{
   PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0,
   PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 1,
   PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 2,
   PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 3,
   PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 4,
   PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 5
}

enum class ParticleFogType_t : std::uint32_t
{
   PARTICLE_FOG_GAME_DEFAULT = 0,
   PARTICLE_FOG_ENABLED = 1,
   PARTICLE_FOG_DISABLED = 2
}

enum class TextureRepetitionMode_t : std::uint32_t
{
   TEXTURE_REPETITION_PARTICLE = 0,
   TEXTURE_REPETITION_PATH = 1
}

enum class ParticleFloatType_t : std::int32_t
{
   PF_TYPE_INVALID = -1,
   PF_TYPE_LITERAL = 0,
   PF_TYPE_NAMED_VALUE = 1,
   PF_TYPE_RANDOM_UNIFORM = 2,
   PF_TYPE_RANDOM_BIASED = 3,
   PF_TYPE_COLLECTION_AGE = 4,
   PF_TYPE_ENDCAP_AGE = 5,
   PF_TYPE_CONTROL_POINT_COMPONENT = 6,
   PF_TYPE_CONTROL_POINT_CHANGE_AGE = 7,
   PF_TYPE_CONTROL_POINT_SPEED = 8,
   PF_TYPE_PARTICLE_DETAIL_LEVEL = 9,
   PF_TYPE_PARTICLE_NOISE = 10,
   PF_TYPE_PARTICLE_AGE = 11,
   PF_TYPE_PARTICLE_AGE_NORMALIZED = 12,
   PF_TYPE_PARTICLE_FLOAT = 13,
   PF_TYPE_PARTICLE_VECTOR_COMPONENT = 14,
   PF_TYPE_PARTICLE_SPEED = 15,
   PF_TYPE_PARTICLE_NUMBER = 16,
   PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 17,
   PF_TYPE_COUNT = 18
}

enum class ParticleFloatBiasType_t : std::int32_t
{
   PF_BIAS_TYPE_INVALID = -1,
   PF_BIAS_TYPE_STANDARD = 0,
   PF_BIAS_TYPE_GAIN = 1,
   PF_BIAS_TYPE_EXPONENTIAL = 2,
   PF_BIAS_TYPE_COUNT = 3
}

enum class PFNoiseType_t : std::uint32_t
{
   PF_NOISE_TYPE_PERLIN = 0,
   PF_NOISE_TYPE_SIMPLEX = 1,
   PF_NOISE_TYPE_WORLEY = 2,
   PF_NOISE_TYPE_CURL = 3
}

enum class PFNoiseModifier_t : std::uint32_t
{
   PF_NOISE_MODIFIER_NONE = 0,
   PF_NOISE_MODIFIER_LINES = 1,
   PF_NOISE_MODIFIER_CLUMPS = 2,
   PF_NOISE_MODIFIER_RINGS = 3
}

enum class PFNoiseTurbulence_t : std::uint32_t
{
   PF_NOISE_TURB_NONE = 0,
   PF_NOISE_TURB_HIGHLIGHT = 1,
   PF_NOISE_TURB_FEEDBACK = 2,
   PF_NOISE_TURB_LOOPY = 3,
   PF_NOISE_TURB_CONTRAST = 4,
   PF_NOISE_TURB_ALTERNATE = 5
}

enum class ParticleFloatRandomMode_t : std::int32_t
{
   PF_RANDOM_MODE_INVALID = -1,
   PF_RANDOM_MODE_CONSTANT = 0,
   PF_RANDOM_MODE_VARYING = 1,
   PF_RANDOM_MODE_COUNT = 2
}

enum class ParticleFloatInputMode_t : std::int32_t
{
   PF_INPUT_MODE_INVALID = -1,
   PF_INPUT_MODE_CLAMPED = 0,
   PF_INPUT_MODE_LOOPED = 1,
   PF_INPUT_MODE_COUNT = 2
}

enum class ParticleFloatMapType_t : std::int32_t
{
   PF_MAP_TYPE_INVALID = -1,
   PF_MAP_TYPE_DIRECT = 0,
   PF_MAP_TYPE_MULT = 1,
   PF_MAP_TYPE_REMAP = 2,
   PF_MAP_TYPE_REMAP_BIASED = 3,
   PF_MAP_TYPE_CURVE = 4,
   PF_MAP_TYPE_NOTCHED = 5,
   PF_MAP_TYPE_COUNT = 6
}

enum class ParticleTransformType_t : std::uint32_t
{
   PT_TYPE_INVALID = 0,
   PT_TYPE_NAMED_VALUE = 1,
   PT_TYPE_CONTROL_POINT = 2,
   PT_TYPE_CONTROL_POINT_RANGE = 3,
   PT_TYPE_COUNT = 4
}

enum class ParticleVecType_t : std::int32_t
{
   PVEC_TYPE_INVALID = -1,
   PVEC_TYPE_LITERAL = 0,
   PVEC_TYPE_LITERAL_COLOR = 1,
   PVEC_TYPE_NAMED_VALUE = 2,
   PVEC_TYPE_PARTICLE_VECTOR = 3,
   PVEC_TYPE_PARTICLE_VELOCITY = 4,
   PVEC_TYPE_CP_VALUE = 5,
   PVEC_TYPE_CP_RELATIVE_POSITION = 6,
   PVEC_TYPE_CP_RELATIVE_DIR = 7,
   PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 8,
   PVEC_TYPE_FLOAT_COMPONENTS = 9,
   PVEC_TYPE_FLOAT_INTERP_CLAMPED = 10,
   PVEC_TYPE_FLOAT_INTERP_OPEN = 11,
   PVEC_TYPE_FLOAT_INTERP_GRADIENT = 12,
   PVEC_TYPE_RANDOM_UNIFORM = 13,
   PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 14,
   PVEC_TYPE_COUNT = 15
}

enum class ELayoutNodeType : std::uint32_t
{
   ROOT = 0,
   STYLES = 1,
   SCRIPT_BODY = 2,
   SCRIPTS = 3,
   SNIPPETS = 4,
   INCLUDE = 5,
   SNIPPET = 6,
   PANEL = 7,
   PANEL_ATTRIBUTE = 8,
   PANEL_ATTRIBUTE_VALUE = 9,
   REFERENCE_CONTENT = 10,
   REFERENCE_COMPILED = 11,
   REFERENCE_PASSTHROUGH = 12
}

enum class EStyleNodeType : std::uint32_t
{
   ROOT = 0,
   EXPRESSION = 1,
   PROPERTY = 2,
   DEFINE = 3,
   IMPORT = 4,
   KEYFRAMES = 5,
   KEYFRAME_SELECTOR = 6,
   STYLE_SELECTOR = 7,
   WHITESPACE = 8,
   EXPRESSION_TEXT = 9,
   EXPRESSION_URL = 10,
   EXPRESSION_CONCAT = 11,
   REFERENCE_CONTENT = 12,
   REFERENCE_COMPILED = 13,
   REFERENCE_PASSTHROUGH = 14
}

enum class NavAttributeEnum : std::uint32_t
{
   NAV_MESH_AVOID = 128,
   NAV_MESH_STAIRS = 4096,
   NAV_MESH_NON_ZUP = 32768,
   NAV_MESH_SHORT_HEIGHT = 65536,
   NAV_MESH_CROUCH = 65536,
   NAV_MESH_JUMP = 2,
   NAV_MESH_PRECISE = 4,
   NAV_MESH_NO_JUMP = 8,
   NAV_MESH_STOP = 16,
   NAV_MESH_RUN = 32,
   NAV_MESH_WALK = 64,
   NAV_MESH_TRANSIENT = 256,
   NAV_MESH_DONT_HIDE = 512,
   NAV_MESH_STAND = 1024,
   NAV_MESH_NO_HOSTAGES = 2048,
   NAV_MESH_NO_MERGE = 8192,
   NAV_MESH_OBSTACLE_TOP = 16384,
   NAV_ATTR_FIRST_GAME_INDEX = 19,
   NAV_ATTR_LAST_INDEX = 31
}

enum class NavDirType : std::uint32_t
{
   NORTH = 0,
   EAST = 1,
   SOUTH = 2,
   WEST = 3,
   NUM_NAV_DIR_TYPE_DIRECTIONS = 4
}

enum class PointTemplateOwnerSpawnGroupType_t : std::uint32_t
{
   INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0,
   INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 1,
   INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 2
}

enum class PointTemplateClientOnlyEntityBehavior_t : std::uint32_t
{
   CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0,
   CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 1
}

enum class PerformanceMode_t : std::uint32_t
{
   PM_NORMAL = 0,
   PM_NO_GIBS = 1,
   PM_FULL_GIBS = 2,
   PM_REDUCED_GIBS = 3
}

enum class ChatIgnoreType_t : std::uint32_t
{
   CHAT_IGNORE_NONE = 0,
   CHAT_IGNORE_ALL = 1,
   CHAT_IGNORE_TEAM = 2
}

enum class CommandExecMode_t : std::uint32_t
{
   EXEC_MANUAL = 0,
   EXEC_LEVELSTART = 1,
   EXEC_PERIODIC = 2,
   EXEC_MODES_COUNT = 3
}

enum class CommandEntitySpecType_t : std::uint32_t
{
   SPEC_SEARCH = 0,
   SPEC_TYPES_COUNT = 1
}

enum class GameAnimEventIndex_t : std::uint32_t
{
   AE_EMPTY = 0,
   AE_CL_PLAYSOUND = 1,
   AE_CL_PLAYSOUND_ATTACHMENT = 2,
   AE_CL_PLAYSOUND_POSITION = 3,
   AE_SV_PLAYSOUND = 4,
   AE_CL_STOPSOUND = 5,
   AE_CL_PLAYSOUND_LOOPING = 6,
   AE_CL_CREATE_PARTICLE_EFFECT = 7,
   AE_CL_STOP_PARTICLE_EFFECT = 8,
   AE_CL_CREATE_PARTICLE_EFFECT_CFG = 9,
   AE_SV_CREATE_PARTICLE_EFFECT_CFG = 10,
   AE_SV_STOP_PARTICLE_EFFECT = 11,
   AE_FOOTSTEP = 12,
   AE_RAGDOLL = 13,
   AE_CL_STOP_RAGDOLL_CONTROL = 14,
   AE_CL_ENABLE_BODYGROUP = 15,
   AE_CL_DISABLE_BODYGROUP = 16,
   AE_CL_BODYGROUP_SET_VALUE = 17,
   AE_SV_BODYGROUP_SET_VALUE = 18,
   AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN = 19,
   AE_WPN_PRIMARYATTACK = 20,
   AE_WPN_SECONDARYATTACK = 21,
   AE_FIRE_INPUT = 22,
   AE_CL_CLOTH_ATTR = 23,
   AE_CL_CLOTH_GROUND_OFFSET = 24,
   AE_CL_CLOTH_STIFFEN = 25,
   AE_CL_CLOTH_EFFECT = 26,
   AE_CL_CREATE_ANIM_SCOPE_PROP = 27,
   AE_CL_WEAPON_TRANSITION_INTO_HAND = 28,
   AE_CL_BODYGROUP_SET_TO_CLIP = 29,
   AE_CL_BODYGROUP_SET_TO_NEXTCLIP = 30,
   AE_SV_SHOW_SILENCER = 31,
   AE_SV_ATTACH_SILENCER_COMPLETE = 32,
   AE_SV_HIDE_SILENCER = 33,
   AE_SV_DETACH_SILENCER_COMPLETE = 34,
   AE_CL_EJECT_MAG = 35,
   AE_CL_EJECT_MAG_UNHIDE = 36,
   AE_WPN_COMPLETE_RELOAD = 37,
   AE_WPN_CZ_DUMP_CURRENT_MAG = 38,
   AE_WPN_CZ_UPDATE_BODYGROUP = 39,
   AE_WPN_HEALTHSHOT_INJECT = 40,
   AE_CL_C4_SCREEN_TEXT = 41
}

enum class ObserverMode_t : std::uint32_t
{
   OBS_MODE_NONE = 0,
   OBS_MODE_FIXED = 1,
   OBS_MODE_IN_EYE = 2,
   OBS_MODE_CHASE = 3,
   OBS_MODE_ROAMING = 4,
   OBS_MODE_DIRECTED = 5,
   NUM_OBSERVER_MODES = 6
}

enum class ObserverInterpState_t : std::uint32_t
{
   OBSERVER_INTERP_NONE = 0,
   OBSERVER_INTERP_TRAVELING = 1,
   OBSERVER_INTERP_SETTLING = 2
}

enum class RumbleEffect_t : std::int32_t
{
   RUMBLE_INVALID = -1,
   RUMBLE_STOP_ALL = 0,
   RUMBLE_PISTOL = 1,
   RUMBLE_357 = 2,
   RUMBLE_SMG1 = 3,
   RUMBLE_AR2 = 4,
   RUMBLE_SHOTGUN_SINGLE = 5,
   RUMBLE_SHOTGUN_DOUBLE = 6,
   RUMBLE_AR2_ALT_FIRE = 7,
   RUMBLE_RPG_MISSILE = 8,
   RUMBLE_CROWBAR_SWING = 9,
   RUMBLE_AIRBOAT_GUN = 10,
   RUMBLE_JEEP_ENGINE_LOOP = 11,
   RUMBLE_FLAT_LEFT = 12,
   RUMBLE_FLAT_RIGHT = 13,
   RUMBLE_FLAT_BOTH = 14,
   RUMBLE_DMG_LOW = 15,
   RUMBLE_DMG_MED = 16,
   RUMBLE_DMG_HIGH = 17,
   RUMBLE_FALL_LONG = 18,
   RUMBLE_FALL_SHORT = 19,
   RUMBLE_PHYSCANNON_OPEN = 20,
   RUMBLE_PHYSCANNON_PUNT = 21,
   RUMBLE_PHYSCANNON_LOW = 22,
   RUMBLE_PHYSCANNON_MEDIUM = 23,
   RUMBLE_PHYSCANNON_HIGH = 24,
   NUM_RUMBLE_EFFECTS = 25
}

enum class WeaponSound_t : std::uint32_t
{
   WEAPON_SOUND_EMPTY = 0,
   WEAPON_SOUND_SINGLE = 1,
   WEAPON_SOUND_DOUBLE = 2,
   WEAPON_SOUND_RELOAD = 3,
   WEAPON_SOUND_MELEE_MISS = 4,
   WEAPON_SOUND_MELEE_HIT = 5,
   WEAPON_SOUND_MELEE_HIT_WORLD = 6,
   WEAPON_SOUND_MELEE_HIT_PLAYER = 7,
   WEAPON_SOUND_SPECIAL1 = 8,
   WEAPON_SOUND_SPECIAL2 = 9,
   WEAPON_SOUND_SPECIAL3 = 10,
   WEAPON_SOUND_NEARLYEMPTY = 11,
   WEAPON_SOUND_IMPACT1 = 12,
   WEAPON_SOUND_REFLECT = 13,
   WEAPON_SOUND_SINGLE_ACCURATE = 14,
   WEAPON_SOUND_ZOOM_IN = 15,
   WEAPON_SOUND_ZOOM_OUT = 16,
   WEAPON_SOUND_MOUSE_PRESSED = 17,
   WEAPON_SOUND_DROP = 18,
   WEAPON_SOUND_RADIO_USE = 19,
   WEAPON_SOUND_NUM_TYPES = 20
}

enum class BaseActivity_t : std::uint32_t
{
   ACT_RESET = 0,
   ACT_IDLE = 1,
   ACT_TRANSITION = 2,
   ACT_COVER = 3,
   ACT_COVER_MED = 4,
   ACT_COVER_LOW = 5,
   ACT_WALK = 6,
   ACT_WALK_AIM = 7,
   ACT_WALK_CROUCH = 8,
   ACT_WALK_CROUCH_AIM = 9,
   ACT_RUN = 10,
   ACT_RUN_AIM = 11,
   ACT_RUN_CROUCH = 12,
   ACT_RUN_CROUCH_AIM = 13,
   ACT_RUN_PROTECTED = 14,
   ACT_SCRIPT_CUSTOM_MOVE = 15,
   ACT_RANGE_ATTACK1 = 16,
   ACT_RANGE_ATTACK2 = 17,
   ACT_RANGE_ATTACK1_LOW = 18,
   ACT_RANGE_ATTACK2_LOW = 19,
   ACT_DIESIMPLE = 20,
   ACT_DIEBACKWARD = 21,
   ACT_DIEFORWARD = 22,
   ACT_DIEVIOLENT = 23,
   ACT_DIERAGDOLL = 24,
   ACT_FLY = 25,
   ACT_HOVER = 26,
   ACT_GLIDE = 27,
   ACT_SWIM = 28,
   ACT_JUMP = 29,
   ACT_HOP = 30,
   ACT_LEAP = 31,
   ACT_LAND = 32,
   ACT_CLIMB_UP = 33,
   ACT_CLIMB_DOWN = 34,
   ACT_CLIMB_DISMOUNT = 35,
   ACT_SHIPLADDER_UP = 36,
   ACT_SHIPLADDER_DOWN = 37,
   ACT_STRAFE_LEFT = 38,
   ACT_STRAFE_RIGHT = 39,
   ACT_ROLL_LEFT = 40,
   ACT_ROLL_RIGHT = 41,
   ACT_TURN_LEFT = 42,
   ACT_TURN_RIGHT = 43,
   ACT_CROUCH = 44,
   ACT_CROUCHIDLE = 45,
   ACT_STAND = 46,
   ACT_USE = 47,
   ACT_ALIEN_BURROW_IDLE = 48,
   ACT_ALIEN_BURROW_OUT = 49,
   ACT_SIGNAL1 = 50,
   ACT_SIGNAL2 = 51,
   ACT_SIGNAL3 = 52,
   ACT_SIGNAL_ADVANCE = 53,
   ACT_SIGNAL_FORWARD = 54,
   ACT_SIGNAL_GROUP = 55,
   ACT_SIGNAL_HALT = 56,
   ACT_SIGNAL_LEFT = 57,
   ACT_SIGNAL_RIGHT = 58,
   ACT_SIGNAL_TAKECOVER = 59,
   ACT_LOOKBACK_RIGHT = 60,
   ACT_LOOKBACK_LEFT = 61,
   ACT_COWER = 62,
   ACT_SMALL_FLINCH = 63,
   ACT_BIG_FLINCH = 64,
   ACT_MELEE_ATTACK1 = 65,
   ACT_MELEE_ATTACK2 = 66,
   ACT_RELOAD = 67,
   ACT_RELOAD_START = 68,
   ACT_RELOAD_FINISH = 69,
   ACT_RELOAD_LOW = 70,
   ACT_ARM = 71,
   ACT_DISARM = 72,
   ACT_DROP_WEAPON = 73,
   ACT_DROP_WEAPON_SHOTGUN = 74,
   ACT_PICKUP_GROUND = 75,
   ACT_PICKUP_RACK = 76,
   ACT_IDLE_ANGRY = 77,
   ACT_IDLE_RELAXED = 78,
   ACT_IDLE_STIMULATED = 79,
   ACT_IDLE_AGITATED = 80,
   ACT_IDLE_STEALTH = 81,
   ACT_IDLE_HURT = 82,
   ACT_WALK_RELAXED = 83,
   ACT_WALK_STIMULATED = 84,
   ACT_WALK_AGITATED = 85,
   ACT_WALK_STEALTH = 86,
   ACT_RUN_RELAXED = 87,
   ACT_RUN_STIMULATED = 88,
   ACT_RUN_AGITATED = 89,
   ACT_RUN_STEALTH = 90,
   ACT_IDLE_AIM_RELAXED = 91,
   ACT_IDLE_AIM_STIMULATED = 92,
   ACT_IDLE_AIM_AGITATED = 93,
   ACT_IDLE_AIM_STEALTH = 94,
   ACT_WALK_AIM_RELAXED = 95,
   ACT_WALK_AIM_STIMULATED = 96,
   ACT_WALK_AIM_AGITATED = 97,
   ACT_WALK_AIM_STEALTH = 98,
   ACT_RUN_AIM_RELAXED = 99,
   ACT_RUN_AIM_STIMULATED = 100,
   ACT_RUN_AIM_AGITATED = 101,
   ACT_RUN_AIM_STEALTH = 102,
   ACT_CROUCHIDLE_STIMULATED = 103,
   ACT_CROUCHIDLE_AIM_STIMULATED = 104,
   ACT_CROUCHIDLE_AGITATED = 105,
   ACT_WALK_HURT = 106,
   ACT_RUN_HURT = 107,
   ACT_SPECIAL_ATTACK1 = 108,
   ACT_SPECIAL_ATTACK2 = 109,
   ACT_COMBAT_IDLE = 110,
   ACT_WALK_SCARED = 111,
   ACT_RUN_SCARED = 112,
   ACT_VICTORY_DANCE = 113,
   ACT_DIE_HEADSHOT = 114,
   ACT_DIE_CHESTSHOT = 115,
   ACT_DIE_GUTSHOT = 116,
   ACT_DIE_BACKSHOT = 117,
   ACT_FLINCH_HEAD = 118,
   ACT_FLINCH_CHEST = 119,
   ACT_FLINCH_STOMACH = 120,
   ACT_FLINCH_LEFTARM = 121,
   ACT_FLINCH_RIGHTARM = 122,
   ACT_FLINCH_LEFTLEG = 123,
   ACT_FLINCH_RIGHTLEG = 124,
   ACT_FLINCH_PHYSICS = 125,
   ACT_FLINCH_HEAD_BACK = 126,
   ACT_FLINCH_CHEST_BACK = 127,
   ACT_FLINCH_STOMACH_BACK = 128,
   ACT_FLINCH_CROUCH_FRONT = 129,
   ACT_FLINCH_CROUCH_BACK = 130,
   ACT_FLINCH_CROUCH_LEFT = 131,
   ACT_FLINCH_CROUCH_RIGHT = 132,
   ACT_IDLE_ON_FIRE = 133,
   ACT_WALK_ON_FIRE = 134,
   ACT_RUN_ON_FIRE = 135,
   ACT_180_LEFT = 137,
   ACT_180_RIGHT = 138,
   ACT_90_LEFT = 139,
   ACT_90_RIGHT = 140,
   ACT_STEP_LEFT = 141,
   ACT_STEP_RIGHT = 142,
   ACT_STEP_BACK = 143,
   ACT_STEP_FORE = 144,
   ACT_GESTURE_RANGE_ATTACK1 = 145,
   ACT_GESTURE_RANGE_ATTACK2 = 146,
   ACT_GESTURE_MELEE_ATTACK1 = 147,
   ACT_GESTURE_MELEE_ATTACK2 = 148,
   ACT_GESTURE_RANGE_ATTACK1_LOW = 149,
   ACT_GESTURE_RANGE_ATTACK2_LOW = 150,
   ACT_MELEE_ATTACK_SWING_GESTURE = 151,
   ACT_GESTURE_SMALL_FLINCH = 152,
   ACT_GESTURE_BIG_FLINCH = 153,
   ACT_GESTURE_FLINCH_BLAST = 154,
   ACT_GESTURE_FLINCH_BLAST_SHOTGUN = 155,
   ACT_GESTURE_FLINCH_BLAST_DAMAGED = 156,
   ACT_GESTURE_FLINCH_BLAST_DAMAGED_SHOTGUN = 157,
   ACT_GESTURE_FLINCH_HEAD = 158,
   ACT_GESTURE_FLINCH_CHEST = 159,
   ACT_GESTURE_FLINCH_STOMACH = 160,
   ACT_GESTURE_FLINCH_LEFTARM = 161,
   ACT_GESTURE_FLINCH_RIGHTARM = 162,
   ACT_GESTURE_FLINCH_LEFTLEG = 163,
   ACT_GESTURE_FLINCH_RIGHTLEG = 164,
   ACT_GESTURE_TURN_LEFT = 165,
   ACT_GESTURE_TURN_RIGHT = 166,
   ACT_GESTURE_TURN_LEFT45 = 167,
   ACT_GESTURE_TURN_RIGHT45 = 168,
   ACT_GESTURE_TURN_LEFT90 = 169,
   ACT_GESTURE_TURN_RIGHT90 = 170,
   ACT_GESTURE_TURN_LEFT45_FLAT = 171,
   ACT_GESTURE_TURN_RIGHT45_FLAT = 172,
   ACT_GESTURE_TURN_LEFT90_FLAT = 173,
   ACT_GESTURE_TURN_RIGHT90_FLAT = 174,
   ACT_BARNACLE_HIT = 175,
   ACT_BARNACLE_PULL = 176,
   ACT_BARNACLE_CHOMP = 177,
   ACT_BARNACLE_CHEW = 178,
   ACT_DO_NOT_DISTURB = 179,
   ACT_SPECIFIC_SEQUENCE = 180,
   ACT_VM_DEPLOY = 181,
   ACT_VM_RELOAD_EMPTY = 182,
   ACT_VM_DRAW = 183,
   ACT_VM_HOLSTER = 184,
   ACT_VM_IDLE = 185,
   ACT_VM_FIDGET = 186,
   ACT_VM_PULLBACK = 187,
   ACT_VM_PULLBACK_HIGH = 188,
   ACT_VM_PULLBACK_LOW = 189,
   ACT_VM_THROW = 190,
   ACT_VM_DROP = 191,
   ACT_VM_PULLPIN = 192,
   ACT_VM_PRIMARYATTACK = 193,
   ACT_VM_SECONDARYATTACK = 194,
   ACT_VM_RELOAD = 195,
   ACT_VM_DRYFIRE = 196,
   ACT_VM_HITLEFT = 197,
   ACT_VM_HITLEFT2 = 198,
   ACT_VM_HITRIGHT = 199,
   ACT_VM_HITRIGHT2 = 200,
   ACT_VM_HITCENTER = 201,
   ACT_VM_HITCENTER2 = 202,
   ACT_VM_MISSLEFT = 203,
   ACT_VM_MISSLEFT2 = 204,
   ACT_VM_MISSRIGHT = 205,
   ACT_VM_MISSRIGHT2 = 206,
   ACT_VM_MISSCENTER = 207,
   ACT_VM_MISSCENTER2 = 208,
   ACT_VM_HAULBACK = 209,
   ACT_VM_SWINGHARD = 210,
   ACT_VM_SWINGMISS = 211,
   ACT_VM_SWINGHIT = 212,
   ACT_VM_IDLE_TO_LOWERED = 213,
   ACT_VM_IDLE_LOWERED = 214,
   ACT_VM_LOWERED_TO_IDLE = 215,
   ACT_VM_RECOIL1 = 216,
   ACT_VM_RECOIL2 = 217,
   ACT_VM_RECOIL3 = 218,
   ACT_VM_PICKUP = 219,
   ACT_VM_RELEASE = 220,
   ACT_VM_MAUL_LOOP = 221,
   ACT_VM_ATTACH_SILENCER = 222,
   ACT_VM_DETACH_SILENCER = 223,
   ACT_SLAM_STICKWALL_IDLE = 224,
   ACT_SLAM_STICKWALL_ND_IDLE = 225,
   ACT_SLAM_STICKWALL_ATTACH = 226,
   ACT_SLAM_STICKWALL_ATTACH2 = 227,
   ACT_SLAM_STICKWALL_ND_ATTACH = 228,
   ACT_SLAM_STICKWALL_ND_ATTACH2 = 229,
   ACT_SLAM_STICKWALL_DETONATE = 230,
   ACT_SLAM_STICKWALL_DETONATOR_HOLSTER = 231,
   ACT_SLAM_STICKWALL_DRAW = 232,
   ACT_SLAM_STICKWALL_ND_DRAW = 233,
   ACT_SLAM_STICKWALL_TO_THROW = 234,
   ACT_SLAM_STICKWALL_TO_THROW_ND = 235,
   ACT_SLAM_STICKWALL_TO_TRIPMINE_ND = 236,
   ACT_SLAM_THROW_IDLE = 237,
   ACT_SLAM_THROW_ND_IDLE = 238,
   ACT_SLAM_THROW_THROW = 239,
   ACT_SLAM_THROW_THROW2 = 240,
   ACT_SLAM_THROW_THROW_ND = 241,
   ACT_SLAM_THROW_THROW_ND2 = 242,
   ACT_SLAM_THROW_DRAW = 243,
   ACT_SLAM_THROW_ND_DRAW = 244,
   ACT_SLAM_THROW_TO_STICKWALL = 245,
   ACT_SLAM_THROW_TO_STICKWALL_ND = 246,
   ACT_SLAM_THROW_DETONATE = 247,
   ACT_SLAM_THROW_DETONATOR_HOLSTER = 248,
   ACT_SLAM_THROW_TO_TRIPMINE_ND = 249,
   ACT_SLAM_TRIPMINE_IDLE = 250,
   ACT_SLAM_TRIPMINE_DRAW = 251,
   ACT_SLAM_TRIPMINE_ATTACH = 252,
   ACT_SLAM_TRIPMINE_ATTACH2 = 253,
   ACT_SLAM_TRIPMINE_TO_STICKWALL_ND = 254,
   ACT_SLAM_TRIPMINE_TO_THROW_ND = 255,
   ACT_SLAM_DETONATOR_IDLE = 256,
   ACT_SLAM_DETONATOR_DRAW = 257,
   ACT_SLAM_DETONATOR_DETONATE = 258,
   ACT_SLAM_DETONATOR_HOLSTER = 259,
   ACT_SLAM_DETONATOR_STICKWALL_DRAW = 260,
   ACT_SLAM_DETONATOR_THROW_DRAW = 261,
   ACT_SHOTGUN_RELOAD_START = 262,
   ACT_SHOTGUN_RELOAD_FINISH = 263,
   ACT_SHOTGUN_PUMP = 264,
   ACT_SMG2_IDLE2 = 265,
   ACT_SMG2_FIRE2 = 266,
   ACT_SMG2_DRAW2 = 267,
   ACT_SMG2_RELOAD2 = 268,
   ACT_SMG2_DRYFIRE2 = 269,
   ACT_SMG2_TOAUTO = 270,
   ACT_SMG2_TOBURST = 271,
   ACT_PHYSCANNON_UPGRADE = 272,
   ACT_RANGE_ATTACK_AR1 = 273,
   ACT_RANGE_ATTACK_AR2 = 274,
   ACT_RANGE_ATTACK_AR2_LOW = 275,
   ACT_RANGE_ATTACK_AR2_GRENADE = 276,
   ACT_RANGE_ATTACK_HMG1 = 277,
   ACT_RANGE_ATTACK_ML = 278,
   ACT_RANGE_ATTACK_SMG1 = 279,
   ACT_RANGE_ATTACK_SMG1_LOW = 280,
   ACT_RANGE_ATTACK_SMG2 = 281,
   ACT_RANGE_ATTACK_SHOTGUN = 282,
   ACT_RANGE_ATTACK_SHOTGUN_LOW = 283,
   ACT_RANGE_ATTACK_PISTOL = 284,
   ACT_RANGE_ATTACK_PISTOL_LOW = 285,
   ACT_RANGE_ATTACK_SLAM = 286,
   ACT_RANGE_ATTACK_TRIPWIRE = 287,
   ACT_RANGE_ATTACK_THROW = 288,
   ACT_RANGE_ATTACK_SNIPER_RIFLE = 289,
   ACT_RANGE_ATTACK_RPG = 290,
   ACT_MELEE_ATTACK_SWING = 291,
   ACT_RANGE_AIM_LOW = 292,
   ACT_RANGE_AIM_SMG1_LOW = 293,
   ACT_RANGE_AIM_PISTOL_LOW = 294,
   ACT_RANGE_AIM_AR2_LOW = 295,
   ACT_COVER_PISTOL_LOW = 296,
   ACT_COVER_SMG1_LOW = 297,
   ACT_GESTURE_RANGE_ATTACK_AR1 = 298,
   ACT_GESTURE_RANGE_ATTACK_AR2 = 299,
   ACT_GESTURE_RANGE_ATTACK_AR2_GRENADE = 300,
   ACT_GESTURE_RANGE_ATTACK_HMG1 = 301,
   ACT_GESTURE_RANGE_ATTACK_ML = 302,
   ACT_GESTURE_RANGE_ATTACK_SMG1 = 303,
   ACT_GESTURE_RANGE_ATTACK_SMG1_LOW = 304,
   ACT_GESTURE_RANGE_ATTACK_SMG2 = 305,
   ACT_GESTURE_RANGE_ATTACK_SHOTGUN = 306,
   ACT_GESTURE_RANGE_ATTACK_PISTOL = 307,
   ACT_GESTURE_RANGE_ATTACK_PISTOL_LOW = 308,
   ACT_GESTURE_RANGE_ATTACK_SLAM = 309,
   ACT_GESTURE_RANGE_ATTACK_TRIPWIRE = 310,
   ACT_GESTURE_RANGE_ATTACK_THROW = 311,
   ACT_GESTURE_RANGE_ATTACK_SNIPER_RIFLE = 312,
   ACT_GESTURE_MELEE_ATTACK_SWING = 313,
   ACT_IDLE_RIFLE = 314,
   ACT_IDLE_SMG1 = 315,
   ACT_IDLE_ANGRY_SMG1 = 316,
   ACT_IDLE_PISTOL = 317,
   ACT_IDLE_ANGRY_PISTOL = 318,
   ACT_IDLE_ANGRY_SHOTGUN = 319,
   ACT_IDLE_STEALTH_PISTOL = 320,
   ACT_IDLE_PACKAGE = 321,
   ACT_WALK_PACKAGE = 322,
   ACT_IDLE_SUITCASE = 323,
   ACT_WALK_SUITCASE = 324,
   ACT_IDLE_SMG1_RELAXED = 325,
   ACT_IDLE_SMG1_STIMULATED = 326,
   ACT_WALK_RIFLE_RELAXED = 327,
   ACT_RUN_RIFLE_RELAXED = 328,
   ACT_WALK_RIFLE_STIMULATED = 329,
   ACT_RUN_RIFLE_STIMULATED = 330,
   ACT_IDLE_AIM_RIFLE_STIMULATED = 331,
   ACT_WALK_AIM_RIFLE_STIMULATED = 332,
   ACT_RUN_AIM_RIFLE_STIMULATED = 333,
   ACT_IDLE_SHOTGUN_RELAXED = 334,
   ACT_IDLE_SHOTGUN_STIMULATED = 335,
   ACT_IDLE_SHOTGUN_AGITATED = 336,
   ACT_WALK_ANGRY = 337,
   ACT_POLICE_HARASS1 = 338,
   ACT_POLICE_HARASS2 = 339,
   ACT_IDLE_MANNEDGUN = 340,
   ACT_IDLE_MELEE = 341,
   ACT_IDLE_ANGRY_MELEE = 342,
   ACT_IDLE_RPG_RELAXED = 343,
   ACT_IDLE_RPG = 344,
   ACT_IDLE_ANGRY_RPG = 345,
   ACT_COVER_LOW_RPG = 346,
   ACT_WALK_RPG = 347,
   ACT_RUN_RPG = 348,
   ACT_WALK_CROUCH_RPG = 349,
   ACT_RUN_CROUCH_RPG = 350,
   ACT_WALK_RPG_RELAXED = 351,
   ACT_RUN_RPG_RELAXED = 352,
   ACT_WALK_RIFLE = 353,
   ACT_WALK_AIM_RIFLE = 354,
   ACT_WALK_CROUCH_RIFLE = 355,
   ACT_WALK_CROUCH_AIM_RIFLE = 356,
   ACT_RUN_RIFLE = 357,
   ACT_RUN_AIM_RIFLE = 358,
   ACT_RUN_CROUCH_RIFLE = 359,
   ACT_RUN_CROUCH_AIM_RIFLE = 360,
   ACT_RUN_STEALTH_PISTOL = 361,
   ACT_WALK_AIM_SHOTGUN = 362,
   ACT_RUN_AIM_SHOTGUN = 363,
   ACT_WALK_PISTOL = 364,
   ACT_RUN_PISTOL = 365,
   ACT_WALK_AIM_PISTOL = 366,
   ACT_RUN_AIM_PISTOL = 367,
   ACT_WALK_STEALTH_PISTOL = 368,
   ACT_WALK_AIM_STEALTH_PISTOL = 369,
   ACT_RUN_AIM_STEALTH_PISTOL = 370,
   ACT_RELOAD_PISTOL = 371,
   ACT_RELOAD_PISTOL_LOW = 372,
   ACT_RELOAD_SMG1 = 373,
   ACT_RELOAD_SMG1_LOW = 374,
   ACT_RELOAD_SHOTGUN = 375,
   ACT_RELOAD_SHOTGUN_LOW = 376,
   ACT_GESTURE_RELOAD = 377,
   ACT_GESTURE_RELOAD_PISTOL = 378,
   ACT_GESTURE_RELOAD_SMG1 = 379,
   ACT_GESTURE_RELOAD_SHOTGUN = 380,
   ACT_BUSY_LEAN_LEFT = 381,
   ACT_BUSY_LEAN_LEFT_ENTRY = 382,
   ACT_BUSY_LEAN_LEFT_EXIT = 383,
   ACT_BUSY_LEAN_BACK = 384,
   ACT_BUSY_LEAN_BACK_ENTRY = 385,
   ACT_BUSY_LEAN_BACK_EXIT = 386,
   ACT_BUSY_SIT_GROUND = 387,
   ACT_BUSY_SIT_GROUND_ENTRY = 388,
   ACT_BUSY_SIT_GROUND_EXIT = 389,
   ACT_BUSY_SIT_CHAIR = 390,
   ACT_BUSY_SIT_CHAIR_ENTRY = 391,
   ACT_BUSY_SIT_CHAIR_EXIT = 392,
   ACT_BUSY_STAND = 393,
   ACT_BUSY_QUEUE = 394,
   ACT_DUCK_DODGE = 395,
   ACT_DIE_BARNACLE_SWALLOW = 396,
   ACT_GESTURE_BARNACLE_STRANGLE = 397,
   ACT_DIE_FRONTSIDE = 402,
   ACT_DIE_RIGHTSIDE = 403,
   ACT_DIE_BACKSIDE = 404,
   ACT_DIE_LEFTSIDE = 405,
   ACT_DIE_CROUCH_FRONTSIDE = 406,
   ACT_DIE_CROUCH_RIGHTSIDE = 407,
   ACT_DIE_CROUCH_BACKSIDE = 408,
   ACT_DIE_CROUCH_LEFTSIDE = 409,
   ACT_DIE_INCAP = 410,
   ACT_DIE_STANDING = 411,
   ACT_OPEN_DOOR = 412,
   ACT_DI_ALYX_ZOMBIE_MELEE = 413,
   ACT_DI_ALYX_ZOMBIE_TORSO_MELEE = 414,
   ACT_DI_ALYX_HEADCRAB_MELEE = 415,
   ACT_DI_ALYX_ANTLION = 416,
   ACT_DI_ALYX_ZOMBIE_SHOTGUN64 = 417,
   ACT_DI_ALYX_ZOMBIE_SHOTGUN26 = 418,
   ACT_READINESS_RELAXED_TO_STIMULATED = 419,
   ACT_READINESS_RELAXED_TO_STIMULATED_WALK = 420,
   ACT_READINESS_AGITATED_TO_STIMULATED = 421,
   ACT_READINESS_STIMULATED_TO_RELAXED = 422,
   ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED = 423,
   ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED_WALK = 424,
   ACT_READINESS_PISTOL_AGITATED_TO_STIMULATED = 425,
   ACT_READINESS_PISTOL_STIMULATED_TO_RELAXED = 426,
   ACT_IDLE_CARRY = 427,
   ACT_WALK_CARRY = 428,
   ACT_STARTDYING = 429,
   ACT_DYINGLOOP = 430,
   ACT_DYINGTODEAD = 431,
   ACT_RIDE_MANNED_GUN = 432,
   ACT_VM_SPRINT_ENTER = 433,
   ACT_VM_SPRINT_IDLE = 434,
   ACT_VM_SPRINT_LEAVE = 435,
   ACT_FIRE_START = 436,
   ACT_FIRE_LOOP = 437,
   ACT_FIRE_END = 438,
   ACT_CROUCHING_GRENADEIDLE = 439,
   ACT_CROUCHING_GRENADEREADY = 440,
   ACT_CROUCHING_PRIMARYATTACK = 441,
   ACT_OVERLAY_GRENADEIDLE = 442,
   ACT_OVERLAY_GRENADEREADY = 443,
   ACT_OVERLAY_PRIMARYATTACK = 444,
   ACT_OVERLAY_SHIELD_UP = 445,
   ACT_OVERLAY_SHIELD_DOWN = 446,
   ACT_OVERLAY_SHIELD_UP_IDLE = 447,
   ACT_OVERLAY_SHIELD_ATTACK = 448,
   ACT_OVERLAY_SHIELD_KNOCKBACK = 449,
   ACT_SHIELD_UP = 450,
   ACT_SHIELD_DOWN = 451,
   ACT_SHIELD_UP_IDLE = 452,
   ACT_SHIELD_ATTACK = 453,
   ACT_SHIELD_KNOCKBACK = 454,
   ACT_CROUCHING_SHIELD_UP = 455,
   ACT_CROUCHING_SHIELD_DOWN = 456,
   ACT_CROUCHING_SHIELD_UP_IDLE = 457,
   ACT_CROUCHING_SHIELD_ATTACK = 458,
   ACT_CROUCHING_SHIELD_KNOCKBACK = 459,
   ACT_TURNRIGHT45 = 460,
   ACT_TURNLEFT45 = 461,
   ACT_TURN = 462,
   ACT_OBJ_ASSEMBLING = 463,
   ACT_OBJ_DISMANTLING = 464,
   ACT_OBJ_STARTUP = 465,
   ACT_OBJ_RUNNING = 466,
   ACT_OBJ_IDLE = 467,
   ACT_OBJ_PLACING = 468,
   ACT_OBJ_DETERIORATING = 469,
   ACT_OBJ_UPGRADING = 470,
   ACT_DEPLOY = 471,
   ACT_DEPLOY_IDLE = 472,
   ACT_UNDEPLOY = 473,
   ACT_CROSSBOW_DRAW_UNLOADED = 474,
   ACT_GAUSS_SPINUP = 475,
   ACT_GAUSS_SPINCYCLE = 476,
   ACT_VM_PRIMARYATTACK_SILENCED = 477,
   ACT_VM_RELOAD_SILENCED = 478,
   ACT_VM_DRYFIRE_SILENCED = 479,
   ACT_VM_IDLE_SILENCED = 480,
   ACT_VM_DRAW_SILENCED = 481,
   ACT_VM_IDLE_EMPTY_LEFT = 482,
   ACT_VM_DRYFIRE_LEFT = 483,
   ACT_VM_IS_DRAW = 484,
   ACT_VM_IS_HOLSTER = 485,
   ACT_VM_IS_IDLE = 486,
   ACT_VM_IS_PRIMARYATTACK = 487,
   ACT_PLAYER_IDLE_FIRE = 488,
   ACT_PLAYER_CROUCH_FIRE = 489,
   ACT_PLAYER_CROUCH_WALK_FIRE = 490,
   ACT_PLAYER_WALK_FIRE = 491,
   ACT_PLAYER_RUN_FIRE = 492,
   ACT_IDLETORUN = 493,
   ACT_RUNTOIDLE = 494,
   ACT_VM_DRAW_DEPLOYED = 495,
   ACT_HL2MP_IDLE_MELEE = 496,
   ACT_HL2MP_RUN_MELEE = 497,
   ACT_HL2MP_IDLE_CROUCH_MELEE = 498,
   ACT_HL2MP_WALK_CROUCH_MELEE = 499,
   ACT_HL2MP_GESTURE_RANGE_ATTACK_MELEE = 500,
   ACT_HL2MP_GESTURE_RELOAD_MELEE = 501,
   ACT_HL2MP_JUMP_MELEE = 502,
   ACT_MP_STAND_IDLE = 503,
   ACT_MP_CROUCH_IDLE = 504,
   ACT_MP_CROUCH_DEPLOYED_IDLE = 505,
   ACT_MP_CROUCH_DEPLOYED = 506,
   ACT_MP_DEPLOYED_IDLE = 507,
   ACT_MP_RUN = 508,
   ACT_MP_WALK = 509,
   ACT_MP_AIRWALK = 510,
   ACT_MP_CROUCHWALK = 511,
   ACT_MP_SPRINT = 512,
   ACT_MP_JUMP = 513,
   ACT_MP_JUMP_START = 514,
   ACT_MP_JUMP_FLOAT = 515,
   ACT_MP_JUMP_LAND = 516,
   ACT_MP_DOUBLEJUMP = 517,
   ACT_MP_SWIM = 518,
   ACT_MP_DEPLOYED = 519,
   ACT_MP_SWIM_DEPLOYED = 520,
   ACT_MP_VCD = 521,
   ACT_MP_ATTACK_STAND_PRIMARYFIRE = 522,
   ACT_MP_ATTACK_STAND_PRIMARYFIRE_DEPLOYED = 523,
   ACT_MP_ATTACK_STAND_SECONDARYFIRE = 524,
   ACT_MP_ATTACK_STAND_GRENADE = 525,
   ACT_MP_ATTACK_CROUCH_PRIMARYFIRE = 526,
   ACT_MP_ATTACK_CROUCH_PRIMARYFIRE_DEPLOYED = 527,
   ACT_MP_ATTACK_CROUCH_SECONDARYFIRE = 528,
   ACT_MP_ATTACK_CROUCH_GRENADE = 529,
   ACT_MP_ATTACK_SWIM_PRIMARYFIRE = 530,
   ACT_MP_ATTACK_SWIM_SECONDARYFIRE = 531,
   ACT_MP_ATTACK_SWIM_GRENADE = 532,
   ACT_MP_ATTACK_AIRWALK_PRIMARYFIRE = 533,
   ACT_MP_ATTACK_AIRWALK_SECONDARYFIRE = 534,
   ACT_MP_ATTACK_AIRWALK_GRENADE = 535,
   ACT_MP_RELOAD_STAND = 536,
   ACT_MP_RELOAD_STAND_LOOP = 537,
   ACT_MP_RELOAD_STAND_END = 538,
   ACT_MP_RELOAD_CROUCH = 539,
   ACT_MP_RELOAD_CROUCH_LOOP = 540,
   ACT_MP_RELOAD_CROUCH_END = 541,
   ACT_MP_RELOAD_SWIM = 542,
   ACT_MP_RELOAD_SWIM_LOOP = 543,
   ACT_MP_RELOAD_SWIM_END = 544,
   ACT_MP_RELOAD_AIRWALK = 545,
   ACT_MP_RELOAD_AIRWALK_LOOP = 546,
   ACT_MP_RELOAD_AIRWALK_END = 547,
   ACT_MP_ATTACK_STAND_PREFIRE = 548,
   ACT_MP_ATTACK_STAND_POSTFIRE = 549,
   ACT_MP_ATTACK_STAND_STARTFIRE = 550,
   ACT_MP_ATTACK_CROUCH_PREFIRE = 551,
   ACT_MP_ATTACK_CROUCH_POSTFIRE = 552,
   ACT_MP_ATTACK_SWIM_PREFIRE = 553,
   ACT_MP_ATTACK_SWIM_POSTFIRE = 554,
   ACT_MP_STAND_PRIMARY = 555,
   ACT_MP_CROUCH_PRIMARY = 556,
   ACT_MP_RUN_PRIMARY = 557,
   ACT_MP_WALK_PRIMARY = 558,
   ACT_MP_AIRWALK_PRIMARY = 559,
   ACT_MP_CROUCHWALK_PRIMARY = 560,
   ACT_MP_JUMP_PRIMARY = 561,
   ACT_MP_JUMP_START_PRIMARY = 562,
   ACT_MP_JUMP_FLOAT_PRIMARY = 563,
   ACT_MP_JUMP_LAND_PRIMARY = 564,
   ACT_MP_SWIM_PRIMARY = 565,
   ACT_MP_DEPLOYED_PRIMARY = 566,
   ACT_MP_SWIM_DEPLOYED_PRIMARY = 567,
   ACT_MP_ATTACK_STAND_PRIMARY = 568,
   ACT_MP_ATTACK_STAND_PRIMARY_DEPLOYED = 569,
   ACT_MP_ATTACK_CROUCH_PRIMARY = 570,
   ACT_MP_ATTACK_CROUCH_PRIMARY_DEPLOYED = 571,
   ACT_MP_ATTACK_SWIM_PRIMARY = 572,
   ACT_MP_ATTACK_AIRWALK_PRIMARY = 573,
   ACT_MP_RELOAD_STAND_PRIMARY = 574,
   ACT_MP_RELOAD_STAND_PRIMARY_LOOP = 575,
   ACT_MP_RELOAD_STAND_PRIMARY_END = 576,
   ACT_MP_RELOAD_CROUCH_PRIMARY = 577,
   ACT_MP_RELOAD_CROUCH_PRIMARY_LOOP = 578,
   ACT_MP_RELOAD_CROUCH_PRIMARY_END = 579,
   ACT_MP_RELOAD_SWIM_PRIMARY = 580,
   ACT_MP_RELOAD_SWIM_PRIMARY_LOOP = 581,
   ACT_MP_RELOAD_SWIM_PRIMARY_END = 582,
   ACT_MP_RELOAD_AIRWALK_PRIMARY = 583,
   ACT_MP_RELOAD_AIRWALK_PRIMARY_LOOP = 584,
   ACT_MP_RELOAD_AIRWALK_PRIMARY_END = 585,
   ACT_MP_ATTACK_STAND_GRENADE_PRIMARY = 586,
   ACT_MP_ATTACK_CROUCH_GRENADE_PRIMARY = 587,
   ACT_MP_ATTACK_SWIM_GRENADE_PRIMARY = 588,
   ACT_MP_ATTACK_AIRWALK_GRENADE_PRIMARY = 589,
   ACT_MP_STAND_SECONDARY = 590,
   ACT_MP_CROUCH_SECONDARY = 591,
   ACT_MP_RUN_SECONDARY = 592,
   ACT_MP_WALK_SECONDARY = 593,
   ACT_MP_AIRWALK_SECONDARY = 594,
   ACT_MP_CROUCHWALK_SECONDARY = 595,
   ACT_MP_JUMP_SECONDARY = 596,
   ACT_MP_JUMP_START_SECONDARY = 597,
   ACT_MP_JUMP_FLOAT_SECONDARY = 598,
   ACT_MP_JUMP_LAND_SECONDARY = 599,
   ACT_MP_SWIM_SECONDARY = 600,
   ACT_MP_ATTACK_STAND_SECONDARY = 601,
   ACT_MP_ATTACK_CROUCH_SECONDARY = 602,
   ACT_MP_ATTACK_SWIM_SECONDARY = 603,
   ACT_MP_ATTACK_AIRWALK_SECONDARY = 604,
   ACT_MP_RELOAD_STAND_SECONDARY = 605,
   ACT_MP_RELOAD_STAND_SECONDARY_LOOP = 606,
   ACT_MP_RELOAD_STAND_SECONDARY_END = 607,
   ACT_MP_RELOAD_CROUCH_SECONDARY = 608,
   ACT_MP_RELOAD_CROUCH_SECONDARY_LOOP = 609,
   ACT_MP_RELOAD_CROUCH_SECONDARY_END = 610,
   ACT_MP_RELOAD_SWIM_SECONDARY = 611,
   ACT_MP_RELOAD_SWIM_SECONDARY_LOOP = 612,
   ACT_MP_RELOAD_SWIM_SECONDARY_END = 613,
   ACT_MP_RELOAD_AIRWALK_SECONDARY = 614,
   ACT_MP_RELOAD_AIRWALK_SECONDARY_LOOP = 615,
   ACT_MP_RELOAD_AIRWALK_SECONDARY_END = 616,
   ACT_MP_ATTACK_STAND_GRENADE_SECONDARY = 617,
   ACT_MP_ATTACK_CROUCH_GRENADE_SECONDARY = 618,
   ACT_MP_ATTACK_SWIM_GRENADE_SECONDARY = 619,
   ACT_MP_ATTACK_AIRWALK_GRENADE_SECONDARY = 620,
   ACT_MP_STAND_MELEE = 621,
   ACT_MP_CROUCH_MELEE = 622,
   ACT_MP_RUN_MELEE = 623,
   ACT_MP_WALK_MELEE = 624,
   ACT_MP_AIRWALK_MELEE = 625,
   ACT_MP_CROUCHWALK_MELEE = 626,
   ACT_MP_JUMP_MELEE = 627,
   ACT_MP_JUMP_START_MELEE = 628,
   ACT_MP_JUMP_FLOAT_MELEE = 629,
   ACT_MP_JUMP_LAND_MELEE = 630,
   ACT_MP_SWIM_MELEE = 631,
   ACT_MP_ATTACK_STAND_MELEE = 632,
   ACT_MP_ATTACK_STAND_MELEE_SECONDARY = 633,
   ACT_MP_ATTACK_CROUCH_MELEE = 634,
   ACT_MP_ATTACK_CROUCH_MELEE_SECONDARY = 635,
   ACT_MP_ATTACK_SWIM_MELEE = 636,
   ACT_MP_ATTACK_AIRWALK_MELEE = 637,
   ACT_MP_ATTACK_STAND_GRENADE_MELEE = 638,
   ACT_MP_ATTACK_CROUCH_GRENADE_MELEE = 639,
   ACT_MP_ATTACK_SWIM_GRENADE_MELEE = 640,
   ACT_MP_ATTACK_AIRWALK_GRENADE_MELEE = 641,
   ACT_MP_STAND_ITEM1 = 642,
   ACT_MP_CROUCH_ITEM1 = 643,
   ACT_MP_RUN_ITEM1 = 644,
   ACT_MP_WALK_ITEM1 = 645,
   ACT_MP_AIRWALK_ITEM1 = 646,
   ACT_MP_CROUCHWALK_ITEM1 = 647,
   ACT_MP_JUMP_ITEM1 = 648,
   ACT_MP_JUMP_START_ITEM1 = 649,
   ACT_MP_JUMP_FLOAT_ITEM1 = 650,
   ACT_MP_JUMP_LAND_ITEM1 = 651,
   ACT_MP_SWIM_ITEM1 = 652,
   ACT_MP_ATTACK_STAND_ITEM1 = 653,
   ACT_MP_ATTACK_STAND_ITEM1_SECONDARY = 654,
   ACT_MP_ATTACK_CROUCH_ITEM1 = 655,
   ACT_MP_ATTACK_CROUCH_ITEM1_SECONDARY = 656,
   ACT_MP_ATTACK_SWIM_ITEM1 = 657,
   ACT_MP_ATTACK_AIRWALK_ITEM1 = 658,
   ACT_MP_STAND_ITEM2 = 659,
   ACT_MP_CROUCH_ITEM2 = 660,
   ACT_MP_RUN_ITEM2 = 661,
   ACT_MP_WALK_ITEM2 = 662,
   ACT_MP_AIRWALK_ITEM2 = 663,
   ACT_MP_CROUCHWALK_ITEM2 = 664,
   ACT_MP_JUMP_ITEM2 = 665,
   ACT_MP_JUMP_START_ITEM2 = 666,
   ACT_MP_JUMP_FLOAT_ITEM2 = 667,
   ACT_MP_JUMP_LAND_ITEM2 = 668,
   ACT_MP_SWIM_ITEM2 = 669,
   ACT_MP_ATTACK_STAND_ITEM2 = 670,
   ACT_MP_ATTACK_STAND_ITEM2_SECONDARY = 671,
   ACT_MP_ATTACK_CROUCH_ITEM2 = 672,
   ACT_MP_ATTACK_CROUCH_ITEM2_SECONDARY = 673,
   ACT_MP_ATTACK_SWIM_ITEM2 = 674,
   ACT_MP_ATTACK_AIRWALK_ITEM2 = 675,
   ACT_MP_GESTURE_FLINCH = 676,
   ACT_MP_GESTURE_FLINCH_PRIMARY = 677,
   ACT_MP_GESTURE_FLINCH_SECONDARY = 678,
   ACT_MP_GESTURE_FLINCH_MELEE = 679,
   ACT_MP_GESTURE_FLINCH_ITEM1 = 680,
   ACT_MP_GESTURE_FLINCH_ITEM2 = 681,
   ACT_MP_GESTURE_FLINCH_HEAD = 682,
   ACT_MP_GESTURE_FLINCH_CHEST = 683,
   ACT_MP_GESTURE_FLINCH_STOMACH = 684,
   ACT_MP_GESTURE_FLINCH_LEFTARM = 685,
   ACT_MP_GESTURE_FLINCH_RIGHTARM = 686,
   ACT_MP_GESTURE_FLINCH_LEFTLEG = 687,
   ACT_MP_GESTURE_FLINCH_RIGHTLEG = 688,
   ACT_MP_GRENADE1_DRAW = 689,
   ACT_MP_GRENADE1_IDLE = 690,
   ACT_MP_GRENADE1_ATTACK = 691,
   ACT_MP_GRENADE2_DRAW = 692,
   ACT_MP_GRENADE2_IDLE = 693,
   ACT_MP_GRENADE2_ATTACK = 694,
   ACT_MP_PRIMARY_GRENADE1_DRAW = 695,
   ACT_MP_PRIMARY_GRENADE1_IDLE = 696,
   ACT_MP_PRIMARY_GRENADE1_ATTACK = 697,
   ACT_MP_PRIMARY_GRENADE2_DRAW = 698,
   ACT_MP_PRIMARY_GRENADE2_IDLE = 699,
   ACT_MP_PRIMARY_GRENADE2_ATTACK = 700,
   ACT_MP_SECONDARY_GRENADE1_DRAW = 701,
   ACT_MP_SECONDARY_GRENADE1_IDLE = 702,
   ACT_MP_SECONDARY_GRENADE1_ATTACK = 703,
   ACT_MP_SECONDARY_GRENADE2_DRAW = 704,
   ACT_MP_SECONDARY_GRENADE2_IDLE = 705,
   ACT_MP_SECONDARY_GRENADE2_ATTACK = 706,
   ACT_MP_MELEE_GRENADE1_DRAW = 707,
   ACT_MP_MELEE_GRENADE1_IDLE = 708,
   ACT_MP_MELEE_GRENADE1_ATTACK = 709,
   ACT_MP_MELEE_GRENADE2_DRAW = 710,
   ACT_MP_MELEE_GRENADE2_IDLE = 711,
   ACT_MP_MELEE_GRENADE2_ATTACK = 712,
   ACT_MP_ITEM1_GRENADE1_DRAW = 713,
   ACT_MP_ITEM1_GRENADE1_IDLE = 714,
   ACT_MP_ITEM1_GRENADE1_ATTACK = 715,
   ACT_MP_ITEM1_GRENADE2_DRAW = 716,
   ACT_MP_ITEM1_GRENADE2_IDLE = 717,
   ACT_MP_ITEM1_GRENADE2_ATTACK = 718,
   ACT_MP_ITEM2_GRENADE1_DRAW = 719,
   ACT_MP_ITEM2_GRENADE1_IDLE = 720,
   ACT_MP_ITEM2_GRENADE1_ATTACK = 721,
   ACT_MP_ITEM2_GRENADE2_DRAW = 722,
   ACT_MP_ITEM2_GRENADE2_IDLE = 723,
   ACT_MP_ITEM2_GRENADE2_ATTACK = 724,
   ACT_MP_STAND_BUILDING = 725,
   ACT_MP_CROUCH_BUILDING = 726,
   ACT_MP_RUN_BUILDING = 727,
   ACT_MP_WALK_BUILDING = 728,
   ACT_MP_AIRWALK_BUILDING = 729,
   ACT_MP_CROUCHWALK_BUILDING = 730,
   ACT_MP_JUMP_BUILDING = 731,
   ACT_MP_JUMP_START_BUILDING = 732,
   ACT_MP_JUMP_FLOAT_BUILDING = 733,
   ACT_MP_JUMP_LAND_BUILDING = 734,
   ACT_MP_SWIM_BUILDING = 735,
   ACT_MP_ATTACK_STAND_BUILDING = 736,
   ACT_MP_ATTACK_CROUCH_BUILDING = 737,
   ACT_MP_ATTACK_SWIM_BUILDING = 738,
   ACT_MP_ATTACK_AIRWALK_BUILDING = 739,
   ACT_MP_ATTACK_STAND_GRENADE_BUILDING = 740,
   ACT_MP_ATTACK_CROUCH_GRENADE_BUILDING = 741,
   ACT_MP_ATTACK_SWIM_GRENADE_BUILDING = 742,
   ACT_MP_ATTACK_AIRWALK_GRENADE_BUILDING = 743,
   ACT_MP_STAND_PDA = 744,
   ACT_MP_CROUCH_PDA = 745,
   ACT_MP_RUN_PDA = 746,
   ACT_MP_WALK_PDA = 747,
   ACT_MP_AIRWALK_PDA = 748,
   ACT_MP_CROUCHWALK_PDA = 749,
   ACT_MP_JUMP_PDA = 750,
   ACT_MP_JUMP_START_PDA = 751,
   ACT_MP_JUMP_FLOAT_PDA = 752,
   ACT_MP_JUMP_LAND_PDA = 753,
   ACT_MP_SWIM_PDA = 754,
   ACT_MP_ATTACK_STAND_PDA = 755,
   ACT_MP_ATTACK_SWIM_PDA = 756,
   ACT_MP_GESTURE_VC_HANDMOUTH = 757,
   ACT_MP_GESTURE_VC_FINGERPOINT = 758,
   ACT_MP_GESTURE_VC_FISTPUMP = 759,
   ACT_MP_GESTURE_VC_THUMBSUP = 760,
   ACT_MP_GESTURE_VC_NODYES = 761,
   ACT_MP_GESTURE_VC_NODNO = 762,
   ACT_MP_GESTURE_VC_HANDMOUTH_PRIMARY = 763,
   ACT_MP_GESTURE_VC_FINGERPOINT_PRIMARY = 764,
   ACT_MP_GESTURE_VC_FISTPUMP_PRIMARY = 765,
   ACT_MP_GESTURE_VC_THUMBSUP_PRIMARY = 766,
   ACT_MP_GESTURE_VC_NODYES_PRIMARY = 767,
   ACT_MP_GESTURE_VC_NODNO_PRIMARY = 768,
   ACT_MP_GESTURE_VC_HANDMOUTH_SECONDARY = 769,
   ACT_MP_GESTURE_VC_FINGERPOINT_SECONDARY = 770,
   ACT_MP_GESTURE_VC_FISTPUMP_SECONDARY = 771,
   ACT_MP_GESTURE_VC_THUMBSUP_SECONDARY = 772,
   ACT_MP_GESTURE_VC_NODYES_SECONDARY = 773,
   ACT_MP_GESTURE_VC_NODNO_SECONDARY = 774,
   ACT_MP_GESTURE_VC_HANDMOUTH_MELEE = 775,
   ACT_MP_GESTURE_VC_FINGERPOINT_MELEE = 776,
   ACT_MP_GESTURE_VC_FISTPUMP_MELEE = 777,
   ACT_MP_GESTURE_VC_THUMBSUP_MELEE = 778,
   ACT_MP_GESTURE_VC_NODYES_MELEE = 779,
   ACT_MP_GESTURE_VC_NODNO_MELEE = 780,
   ACT_MP_GESTURE_VC_HANDMOUTH_ITEM1 = 781,
   ACT_MP_GESTURE_VC_FINGERPOINT_ITEM1 = 782,
   ACT_MP_GESTURE_VC_FISTPUMP_ITEM1 = 783,
   ACT_MP_GESTURE_VC_THUMBSUP_ITEM1 = 784,
   ACT_MP_GESTURE_VC_NODYES_ITEM1 = 785,
   ACT_MP_GESTURE_VC_NODNO_ITEM1 = 786,
   ACT_MP_GESTURE_VC_HANDMOUTH_ITEM2 = 787,
   ACT_MP_GESTURE_VC_FINGERPOINT_ITEM2 = 788,
   ACT_MP_GESTURE_VC_FISTPUMP_ITEM2 = 789,
   ACT_MP_GESTURE_VC_THUMBSUP_ITEM2 = 790,
   ACT_MP_GESTURE_VC_NODYES_ITEM2 = 791,
   ACT_MP_GESTURE_VC_NODNO_ITEM2 = 792,
   ACT_MP_GESTURE_VC_HANDMOUTH_BUILDING = 793,
   ACT_MP_GESTURE_VC_FINGERPOINT_BUILDING = 794,
   ACT_MP_GESTURE_VC_FISTPUMP_BUILDING = 795,
   ACT_MP_GESTURE_VC_THUMBSUP_BUILDING = 796,
   ACT_MP_GESTURE_VC_NODYES_BUILDING = 797,
   ACT_MP_GESTURE_VC_NODNO_BUILDING = 798,
   ACT_MP_GESTURE_VC_HANDMOUTH_PDA = 799,
   ACT_MP_GESTURE_VC_FINGERPOINT_PDA = 800,
   ACT_MP_GESTURE_VC_FISTPUMP_PDA = 801,
   ACT_MP_GESTURE_VC_THUMBSUP_PDA = 802,
   ACT_MP_GESTURE_VC_NODYES_PDA = 803,
   ACT_MP_GESTURE_VC_NODNO_PDA = 804,
   ACT_VM_UNUSABLE = 805,
   ACT_VM_UNUSABLE_TO_USABLE = 806,
   ACT_VM_USABLE_TO_UNUSABLE = 807,
   ACT_PRIMARY_VM_DRAW = 808,
   ACT_PRIMARY_VM_HOLSTER = 809,
   ACT_PRIMARY_VM_IDLE = 810,
   ACT_PRIMARY_VM_PULLBACK = 811,
   ACT_PRIMARY_VM_PRIMARYATTACK = 812,
   ACT_PRIMARY_VM_SECONDARYATTACK = 813,
   ACT_PRIMARY_VM_RELOAD = 814,
   ACT_PRIMARY_VM_DRYFIRE = 815,
   ACT_PRIMARY_VM_IDLE_TO_LOWERED = 816,
   ACT_PRIMARY_VM_IDLE_LOWERED = 817,
   ACT_PRIMARY_VM_LOWERED_TO_IDLE = 818,
   ACT_SECONDARY_VM_DRAW = 819,
   ACT_SECONDARY_VM_HOLSTER = 820,
   ACT_SECONDARY_VM_IDLE = 821,
   ACT_SECONDARY_VM_PULLBACK = 822,
   ACT_SECONDARY_VM_PRIMARYATTACK = 823,
   ACT_SECONDARY_VM_SECONDARYATTACK = 824,
   ACT_SECONDARY_VM_RELOAD = 825,
   ACT_SECONDARY_VM_DRYFIRE = 826,
   ACT_SECONDARY_VM_IDLE_TO_LOWERED = 827,
   ACT_SECONDARY_VM_IDLE_LOWERED = 828,
   ACT_SECONDARY_VM_LOWERED_TO_IDLE = 829,
   ACT_MELEE_VM_DRAW = 830,
   ACT_MELEE_VM_HOLSTER = 831,
   ACT_MELEE_VM_IDLE = 832,
   ACT_MELEE_VM_PULLBACK = 833,
   ACT_MELEE_VM_PRIMARYATTACK = 834,
   ACT_MELEE_VM_SECONDARYATTACK = 835,
   ACT_MELEE_VM_RELOAD = 836,
   ACT_MELEE_VM_DRYFIRE = 837,
   ACT_MELEE_VM_IDLE_TO_LOWERED = 838,
   ACT_MELEE_VM_IDLE_LOWERED = 839,
   ACT_MELEE_VM_LOWERED_TO_IDLE = 840,
   ACT_PDA_VM_DRAW = 841,
   ACT_PDA_VM_HOLSTER = 842,
   ACT_PDA_VM_IDLE = 843,
   ACT_PDA_VM_PULLBACK = 844,
   ACT_PDA_VM_PRIMARYATTACK = 845,
   ACT_PDA_VM_SECONDARYATTACK = 846,
   ACT_PDA_VM_RELOAD = 847,
   ACT_PDA_VM_DRYFIRE = 848,
   ACT_PDA_VM_IDLE_TO_LOWERED = 849,
   ACT_PDA_VM_IDLE_LOWERED = 850,
   ACT_PDA_VM_LOWERED_TO_IDLE = 851,
   ACT_ITEM1_VM_DRAW = 852,
   ACT_ITEM1_VM_HOLSTER = 853,
   ACT_ITEM1_VM_IDLE = 854,
   ACT_ITEM1_VM_PULLBACK = 855,
   ACT_ITEM1_VM_PRIMARYATTACK = 856,
   ACT_ITEM1_VM_SECONDARYATTACK = 857,
   ACT_ITEM1_VM_RELOAD = 858,
   ACT_ITEM1_VM_DRYFIRE = 859,
   ACT_ITEM1_VM_IDLE_TO_LOWERED = 860,
   ACT_ITEM1_VM_IDLE_LOWERED = 861,
   ACT_ITEM1_VM_LOWERED_TO_IDLE = 862,
   ACT_ITEM2_VM_DRAW = 863,
   ACT_ITEM2_VM_HOLSTER = 864,
   ACT_ITEM2_VM_IDLE = 865,
   ACT_ITEM2_VM_PULLBACK = 866,
   ACT_ITEM2_VM_PRIMARYATTACK = 867,
   ACT_ITEM2_VM_SECONDARYATTACK = 868,
   ACT_ITEM2_VM_RELOAD = 869,
   ACT_ITEM2_VM_DRYFIRE = 870,
   ACT_ITEM2_VM_IDLE_TO_LOWERED = 871,
   ACT_ITEM2_VM_IDLE_LOWERED = 872,
   ACT_ITEM2_VM_LOWERED_TO_IDLE = 873,
   ACT_RELOAD_SUCCEED = 874,
   ACT_RELOAD_FAIL = 875,
   ACT_WALK_AIM_AUTOGUN = 876,
   ACT_RUN_AIM_AUTOGUN = 877,
   ACT_IDLE_AUTOGUN = 878,
   ACT_IDLE_AIM_AUTOGUN = 879,
   ACT_RELOAD_AUTOGUN = 880,
   ACT_CROUCH_IDLE_AUTOGUN = 881,
   ACT_RANGE_ATTACK_AUTOGUN = 882,
   ACT_JUMP_AUTOGUN = 883,
   ACT_IDLE_AIM_PISTOL = 884,
   ACT_WALK_AIM_DUAL = 885,
   ACT_RUN_AIM_DUAL = 886,
   ACT_IDLE_DUAL = 887,
   ACT_IDLE_AIM_DUAL = 888,
   ACT_RELOAD_DUAL = 889,
   ACT_CROUCH_IDLE_DUAL = 890,
   ACT_RANGE_ATTACK_DUAL = 891,
   ACT_JUMP_DUAL = 892,
   ACT_IDLE_AIM_SHOTGUN = 893,
   ACT_CROUCH_IDLE_SHOTGUN = 894,
   ACT_IDLE_AIM_RIFLE = 895,
   ACT_CROUCH_IDLE_RIFLE = 896,
   ACT_RANGE_ATTACK_RIFLE = 897,
   ACT_SLEEP = 898,
   ACT_WAKE = 899,
   ACT_FLICK_LEFT = 900,
   ACT_FLICK_LEFT_MIDDLE = 901,
   ACT_FLICK_RIGHT_MIDDLE = 902,
   ACT_FLICK_RIGHT = 903,
   ACT_SPINAROUND = 904,
   ACT_PREP_TO_FIRE = 905,
   ACT_FIRE = 906,
   ACT_FIRE_RECOVER = 907,
   ACT_SPRAY = 908,
   ACT_PREP_EXPLODE = 909,
   ACT_EXPLODE = 910,
   ACT_SCRIPT_CUSTOM_0 = 911,
   ACT_SCRIPT_CUSTOM_1 = 912,
   ACT_SCRIPT_CUSTOM_2 = 913,
   ACT_SCRIPT_CUSTOM_3 = 914,
   ACT_SCRIPT_CUSTOM_4 = 915,
   ACT_SCRIPT_CUSTOM_5 = 916,
   ACT_SCRIPT_CUSTOM_6 = 917,
   ACT_SCRIPT_CUSTOM_7 = 918,
   ACT_SCRIPT_CUSTOM_8 = 919,
   ACT_SCRIPT_CUSTOM_9 = 920,
   ACT_SCRIPT_CUSTOM_10 = 921,
   ACT_SCRIPT_CUSTOM_11 = 922,
   ACT_SCRIPT_CUSTOM_12 = 923,
   ACT_SCRIPT_CUSTOM_13 = 924,
   ACT_SCRIPT_CUSTOM_14 = 925,
   ACT_SCRIPT_CUSTOM_15 = 926,
   ACT_SCRIPT_CUSTOM_16 = 927,
   ACT_SCRIPT_CUSTOM_17 = 928,
   ACT_SCRIPT_CUSTOM_18 = 929,
   ACT_SCRIPT_CUSTOM_19 = 930,
   ACT_SCRIPT_CUSTOM_20 = 931,
   ACT_SCRIPT_CUSTOM_21 = 932,
   ACT_SCRIPT_CUSTOM_22 = 933,
   ACT_SCRIPT_CUSTOM_23 = 934,
   ACT_SCRIPT_CUSTOM_24 = 935,
   ACT_SCRIPT_CUSTOM_25 = 936,
   ACT_SCRIPT_CUSTOM_26 = 937,
   ACT_SCRIPT_CUSTOM_27 = 938,
   ACT_SCRIPT_CUSTOM_28 = 939,
   ACT_SCRIPT_CUSTOM_29 = 940,
   ACT_SCRIPT_CUSTOM_30 = 941,
   ACT_SCRIPT_CUSTOM_31 = 942,
   ACT_VR_PISTOL_LAST_SHOT = 943,
   ACT_VR_PISTOL_SLIDE_RELEASE = 944,
   ACT_VR_PISTOL_CLIP_OUT_CHAMBERED = 945,
   ACT_VR_PISTOL_CLIP_OUT_SLIDE_BACK = 946,
   ACT_VR_PISTOL_CLIP_IN_CHAMBERED = 947,
   ACT_VR_PISTOL_CLIP_IN_SLIDE_BACK = 948,
   ACT_VR_PISTOL_IDLE_SLIDE_BACK = 949,
   ACT_VR_PISTOL_IDLE_SLIDE_BACK_CLIP_READY = 950,
   ACT_RAGDOLL_RECOVERY_FRONT = 951,
   ACT_RAGDOLL_RECOVERY_BACK = 952,
   ACT_RAGDOLL_RECOVERY_LEFT = 953,
   ACT_RAGDOLL_RECOVERY_RIGHT = 954,
   ACT_GRABBITYGLOVES_GRAB = 955,
   ACT_GRABBITYGLOVES_RELEASE = 956,
   ACT_GRABBITYGLOVES_GRAB_IDLE = 957,
   ACT_GRABBITYGLOVES_ACTIVE = 958,
   ACT_GRABBITYGLOVES_ACTIVE_IDLE = 959,
   ACT_GRABBITYGLOVES_DEACTIVATE = 960,
   ACT_GRABBITYGLOVES_PULL = 961,
   ACT_HEADCRAB_SMOKE_BOMB = 962,
   ACT_HEADCRAB_SPIT = 963,
   ACT_ZOMBIE_TRIP = 964,
   ACT_ZOMBIE_LUNGE = 965,
   ACT_NEUTRAL_REF_POSE = 966,
   ACT_ANTLION_SCUTTLE_FORWARD = 967,
   ACT_ANTLION_SCUTTLE_BACK = 968,
   ACT_ANTLION_SCUTTLE_LEFT = 969,
   ACT_ANTLION_SCUTTLE_RIGHT = 970,
   ACT_VR_PISTOL_EMPTY_CLIP_IN_SLIDE_BACK = 971,
   ACT_VR_SHOTGUN_IDLE = 972,
   ACT_VR_SHOTGUN_OPEN_CHAMBER = 973,
   ACT_VR_SHOTGUN_RELOAD_1 = 974,
   ACT_VR_SHOTGUN_RELOAD_2 = 975,
   ACT_VR_SHOTGUN_RELOAD_3 = 976,
   ACT_VR_SHOTGUN_CLOSE_CHAMBER = 977,
   ACT_VR_SHOTGUN_TRIGGER_SQUEEZE = 978,
   ACT_VR_SHOTGUN_SHOOT = 979,
   ACT_VR_SHOTGUN_SLIDE_BACK = 980,
   ACT_VR_SHOTGUN_SLIDE_FORWARD = 981,
   ACT_VR_PISTOL_LONG_CLIP_IN_CHAMBERED = 982,
   ACT_VR_PISTOL_LONG_CLIP_IN_SLIDE_BACK = 983,
   ACT_VR_PISTOL_BURST_TOGGLE = 984,
   ACT_VR_PISTOL_LOW_KICK = 985,
   ACT_VR_PISTOL_BURST_ATTACK = 986,
   ACT_VR_SHOTGUN_GRENADE_TWIST = 987,
   ACT_DIE_STAND = 988,
   ACT_DIE_STAND_HEADSHOT = 989,
   ACT_DIE_CROUCH = 990,
   ACT_DIE_CROUCH_HEADSHOT = 991,
   ACT_CSGO_NULL = 992,
   ACT_CSGO_DEFUSE = 993,
   ACT_CSGO_DEFUSE_WITH_KIT = 994,
   ACT_CSGO_FLASHBANG_REACTION = 995,
   ACT_CSGO_FIRE_PRIMARY = 996,
   ACT_CSGO_FIRE_PRIMARY_OPT_1 = 997,
   ACT_CSGO_FIRE_PRIMARY_OPT_2 = 998,
   ACT_CSGO_FIRE_SECONDARY = 999,
   ACT_CSGO_FIRE_SECONDARY_OPT_1 = 1000,
   ACT_CSGO_FIRE_SECONDARY_OPT_2 = 1001,
   ACT_CSGO_RELOAD = 1002,
   ACT_CSGO_RELOAD_START = 1003,
   ACT_CSGO_RELOAD_LOOP = 1004,
   ACT_CSGO_RELOAD_END = 1005,
   ACT_CSGO_OPERATE = 1006,
   ACT_CSGO_DEPLOY = 1007,
   ACT_CSGO_CATCH = 1008,
   ACT_CSGO_SILENCER_DETACH = 1009,
   ACT_CSGO_SILENCER_ATTACH = 1010,
   ACT_CSGO_TWITCH = 1011,
   ACT_CSGO_TWITCH_BUYZONE = 1012,
   ACT_CSGO_PLANT_BOMB = 1013,
   ACT_CSGO_IDLE_TURN_BALANCEADJUST = 1014,
   ACT_CSGO_IDLE_ADJUST_STOPPEDMOVING = 1015,
   ACT_CSGO_ALIVE_LOOP = 1016,
   ACT_CSGO_FLINCH = 1017,
   ACT_CSGO_FLINCH_HEAD = 1018,
   ACT_CSGO_FLINCH_MOLOTOV = 1019,
   ACT_CSGO_JUMP = 1020,
   ACT_CSGO_FALL = 1021,
   ACT_CSGO_CLIMB_LADDER = 1022,
   ACT_CSGO_LAND_LIGHT = 1023,
   ACT_CSGO_LAND_HEAVY = 1024,
   ACT_CSGO_EXIT_LADDER_TOP = 1025,
   ACT_CSGO_EXIT_LADDER_BOTTOM = 1026,
   ACT_CSGO_PARACHUTE = 1027,
   ACT_CSGO_TAUNT = 1028
}

enum class AmmoFlags_t : std::uint32_t
{
   AMMO_FORCE_DROP_IF_CARRIED = 1,
   AMMO_RESERVE_STAYS_WITH_WEAPON = 2,
   AMMO_FLAG_MAX = 2
}

enum class TakeDamageFlags_t : std::uint32_t
{
   DFLAG_NONE = 0,
   DFLAG_SUPPRESS_HEALTH_CHANGES = 1,
   DFLAG_SUPPRESS_PHYSICS_FORCE = 2,
   DFLAG_SUPPRESS_EFFECTS = 4,
   DFLAG_PREVENT_DEATH = 8,
   DFLAG_FORCE_DEATH = 16,
   DFLAG_ALWAYS_GIB = 32,
   DFLAG_NEVER_GIB = 64,
   DFLAG_REMOVE_NO_RAGDOLL = 128,
   DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 256,
   DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 512,
   DFLAG_RADIUS_DMG = 1024,
   DMG_LASTDFLAG = 1024,
   DFLAG_IGNORE_ARMOR = 2048
}

enum class DamageTypes_t : std::uint32_t
{
   DMG_GENERIC = 0,
   DMG_CRUSH = 1,
   DMG_BULLET = 2,
   DMG_SLASH = 4,
   DMG_BURN = 8,
   DMG_VEHICLE = 16,
   DMG_FALL = 32,
   DMG_BLAST = 64,
   DMG_CLUB = 128,
   DMG_SHOCK = 256,
   DMG_SONIC = 512,
   DMG_ENERGYBEAM = 1024,
   DMG_DROWN = 16384,
   DMG_POISON = 32768,
   DMG_RADIATION = 65536,
   DMG_DROWNRECOVER = 131072,
   DMG_ACID = 262144,
   DMG_PHYSGUN = 1048576,
   DMG_DISSOLVE = 2097152,
   DMG_BLAST_SURFACE = 4194304,
   DMG_BUCKSHOT = 16777216,
   DMG_LASTGENERICFLAG = 16777216,
   DMG_HEADSHOT = 33554432,
   DMG_DANGERZONE = 67108864
}

enum class BaseExplosionTypes_t : std::uint32_t
{
   EXPLOSION_TYPE_DEFAULT = 0,
   EXPLOSION_TYPE_GRENADE = 1,
   EXPLOSION_TYPE_MOLOTOV = 2,
   EXPLOSION_TYPE_FIREWORKS = 3,
   EXPLOSION_TYPE_GASCAN = 4,
   EXPLOSION_TYPE_GASCYLINDER = 5,
   EXPLOSION_TYPE_EXPLOSIVEBARREL = 6,
   EXPLOSION_TYPE_ELECTRICAL = 7,
   EXPLOSION_TYPE_EMP = 8,
   EXPLOSION_TYPE_SHRAPNEL = 9,
   EXPLOSION_TYPE_SMOKEGRENADE = 10,
   EXPLOSION_TYPE_FLASHBANG = 11,
   EXPLOSION_TYPE_TRIPMINE = 12,
   EXPLOSION_TYPE_ICE = 13,
   EXPLOSION_TYPE_NONE = 14,
   EXPLOSION_TYPE_CUSTOM = 15,
   EXPLOSION_TYPE_COUNT = 16
}

enum class HierarchyType_t : std::uint32_t
{
   HIERARCHY_NONE = 0,
   HIERARCHY_BONE_MERGE = 1,
   HIERARCHY_ATTACHMENT = 2,
   HIERARCHY_ABSORIGIN = 3,
   HIERARCHY_BONE = 4,
   HIERARCHY_TYPE_COUNT = 5
}

enum class CanPlaySequence_t : std::uint32_t
{
   CANNOT_PLAY = 0,
   CAN_PLAY_NOW = 1,
   CAN_PLAY_ENQUEUED = 2
}

enum class ScriptedMoveTo_t : std::uint32_t
{
   CINE_MOVETO_WAIT = 0,
   CINE_MOVETO_WALK = 1,
   CINE_MOVETO_RUN = 2,
   CINE_MOVETO_CUSTOM = 3,
   CINE_MOVETO_TELEPORT = 4,
   CINE_MOVETO_WAIT_FACING = 5
}

enum class ScriptedOnDeath_t : std::int32_t
{
   SS_ONDEATH_NOT_APPLICABLE = -1,
   SS_ONDEATH_UNDEFINED = 0,
   SS_ONDEATH_RAGDOLL = 1,
   SS_ONDEATH_ANIMATED_DEATH = 2
}

enum class ScriptState_t : std::uint32_t
{
   SCRIPT_PLAYING = 0,
   SCRIPT_WAIT = 1,
   SCRIPT_POST_IDLE = 2,
   SCRIPT_CLEANUP = 3,
   SCRIPT_WALK_TO_MARK = 4,
   SCRIPT_RUN_TO_MARK = 5,
   SCRIPT_CUSTOM_MOVE_TO_MARK = 6
}

enum class ChoreoState_t : std::uint32_t
{
   STATE_PRE_SCRIPT = 0,
   STATE_WAIT_FOR_SCRIPT = 1,
   STATE_WALK_TO_MARK = 2,
   STATE_SYNCHRONIZE_SCRIPT = 3,
   STATE_PLAY_SCRIPT = 4,
   STATE_PLAY_SCRIPT_POST_IDLE = 5,
   STATE_PLAY_SCRIPT_POST_IDLE_DONE = 6
}

enum class InputBitMask_t : std::int64_t
{
   IN_NONE = 0,
   IN_ALL = -1,
   IN_ATTACK = 1,
   IN_JUMP = 2,
   IN_DUCK = 4,
   IN_FORWARD = 8,
   IN_BACK = 16,
   IN_USE = 32,
   IN_TURNLEFT = 128,
   IN_TURNRIGHT = 256,
   IN_MOVELEFT = 512,
   IN_MOVERIGHT = 1024,
   IN_ATTACK2 = 2048,
   IN_RELOAD = 8192,
   IN_SPEED = 65536,
   IN_JOYAUTOSPRINT = 131072,
   IN_FIRST_MOD_SPECIFIC_BIT = 0,
   IN_USEORRELOAD = 0,
   IN_SCORE = 0,
   IN_ZOOM = 0,
   IN_JUMP_THROW_RELEASE = 0
}

enum class EInButtonState : std::uint32_t
{
   IN_BUTTON_UP = 0,
   IN_BUTTON_DOWN = 1,
   IN_BUTTON_DOWN_UP = 2,
   IN_BUTTON_UP_DOWN = 3,
   IN_BUTTON_UP_DOWN_UP = 4,
   IN_BUTTON_DOWN_UP_DOWN = 5,
   IN_BUTTON_DOWN_UP_DOWN_UP = 6,
   IN_BUTTON_UP_DOWN_UP_DOWN = 7,
   IN_BUTTON_STATE_COUNT = 8
}

enum class ShakeCommand_t : std::uint32_t
{
   SHAKE_START = 0,
   SHAKE_STOP = 1,
   SHAKE_AMPLITUDE = 2,
   SHAKE_FREQUENCY = 3,
   SHAKE_START_RUMBLEONLY = 4,
   SHAKE_START_NORUMBLE = 5
}

enum class TimelineCompression_t : std::uint32_t
{
   TIMELINE_COMPRESSION_SUM = 0,
   TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 1,
   TIMELINE_COMPRESSION_AVERAGE = 2,
   TIMELINE_COMPRESSION_AVERAGE_BLEND = 3,
   TIMELINE_COMPRESSION_TOTAL = 4
}

enum class DebugOverlayBits_t : std::int64_t
{
   OVERLAY_TEXT_BIT = 1,
   OVERLAY_NAME_BIT = 2,
   OVERLAY_BBOX_BIT = 4,
   OVERLAY_PIVOT_BIT = 8,
   OVERLAY_MESSAGE_BIT = 16,
   OVERLAY_ABSBOX_BIT = 32,
   OVERLAY_RBOX_BIT = 64,
   OVERLAY_SHOW_BLOCKSLOS = 128,
   OVERLAY_ATTACHMENTS_BIT = 256,
   OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 512,
   OVERLAY_INTERPOLATED_PIVOT_BIT = 1024,
   OVERLAY_SKELETON_BIT = 2048,
   OVERLAY_INTERPOLATED_SKELETON_BIT = 4096,
   OVERLAY_TRIGGER_BOUNDS_BIT = 8192,
   OVERLAY_HITBOX_BIT = 16384,
   OVERLAY_INTERPOLATED_HITBOX_BIT = 32768,
   OVERLAY_AUTOAIM_BIT = 65536,
   OVERLAY_NPC_SELECTED_BIT = 131072,
   OVERLAY_JOINT_INFO_BIT = 262144,
   OVERLAY_NPC_ROUTE_BIT = 524288,
   OVERLAY_NPC_TRIANGULATE_BIT = 1048576,
   OVERLAY_NPC_ZAP_BIT = 2097152,
   OVERLAY_NPC_ENEMIES_BIT = 4194304,
   OVERLAY_NPC_CONDITIONS_BIT = 8388608,
   OVERLAY_NPC_COMBAT_BIT = 16777216,
   OVERLAY_NPC_TASK_BIT = 33554432,
   OVERLAY_NPC_BODYLOCATIONS = 67108864,
   OVERLAY_NPC_VIEWCONE_BIT = 134217728,
   OVERLAY_NPC_KILL_BIT = 268435456,
   OVERLAY_WC_CHANGE_ENTITY = 536870912,
   OVERLAY_BUDDHA_MODE = 1073741824,
   OVERLAY_NPC_STEERING_REGULATIONS = -2147483648,
   OVERLAY_NPC_TASK_TEXT_BIT = 0,
   OVERLAY_PROP_DEBUG = 0,
   OVERLAY_NPC_RELATION_BIT = 0,
   OVERLAY_VIEWOFFSET = 0,
   OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0,
   OVERLAY_NPC_NEAREST_NODE_BIT = 0,
   OVERLAY_ACTORNAME_BIT = 0,
   OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0
}

enum class MoveType_t : std::uint8_t
{
   MOVETYPE_NONE = 0,
   MOVETYPE_OBSOLETE = 1,
   MOVETYPE_WALK = 2,
   MOVETYPE_STEP = 3,
   MOVETYPE_FLY = 4,
   MOVETYPE_FLYGRAVITY = 5,
   MOVETYPE_VPHYSICS = 6,
   MOVETYPE_PUSH = 7,
   MOVETYPE_NOCLIP = 8,
   MOVETYPE_OBSERVER = 9,
   MOVETYPE_LADDER = 10,
   MOVETYPE_CUSTOM = 11,
   MOVETYPE_LAST = 12,
   MOVETYPE_MAX_BITS = 5
}

enum class MoveCollide_t : std::uint8_t
{
   MOVECOLLIDE_DEFAULT = 0,
   MOVECOLLIDE_FLY_BOUNCE = 1,
   MOVECOLLIDE_FLY_CUSTOM = 2,
   MOVECOLLIDE_FLY_SLIDE = 3,
   MOVECOLLIDE_COUNT = 4,
   MOVECOLLIDE_MAX_BITS = 3
}

enum class SolidType_t : std::uint8_t
{
   SOLID_NONE = 0,
   SOLID_BSP = 1,
   SOLID_BBOX = 2,
   SOLID_OBB = 3,
   SOLID_SPHERE = 4,
   SOLID_POINT = 5,
   SOLID_VPHYSICS = 6,
   SOLID_CAPSULE = 7,
   SOLID_LAST = 8
}

enum class BrushSolidities_e : std::uint32_t
{
   BRUSHSOLID_TOGGLE = 0,
   BRUSHSOLID_NEVER = 1,
   BRUSHSOLID_ALWAYS = 2
}

enum class RenderMode_t : std::uint8_t
{
   kRenderNormal = 0,
   kRenderTransColor = 1,
   kRenderTransTexture = 2,
   kRenderGlow = 3,
   kRenderTransAlpha = 4,
   kRenderTransAdd = 5,
   kRenderEnvironmental = 6,
   kRenderTransAddFrameBlend = 7,
   kRenderTransAlphaAdd = 8,
   kRenderWorldGlow = 9,
   kRenderNone = 10,
   kRenderDevVisualizer = 11,
   kRenderModeCount = 12
}

enum class RenderFx_t : std::uint8_t
{
   kRenderFxNone = 0,
   kRenderFxPulseSlow = 1,
   kRenderFxPulseFast = 2,
   kRenderFxPulseSlowWide = 3,
   kRenderFxPulseFastWide = 4,
   kRenderFxFadeSlow = 5,
   kRenderFxFadeFast = 6,
   kRenderFxSolidSlow = 7,
   kRenderFxSolidFast = 8,
   kRenderFxStrobeSlow = 9,
   kRenderFxStrobeFast = 10,
   kRenderFxStrobeFaster = 11,
   kRenderFxFlickerSlow = 12,
   kRenderFxFlickerFast = 13,
   kRenderFxNoDissipation = 14,
   kRenderFxFadeOut = 15,
   kRenderFxFadeIn = 16,
   kRenderFxPulseFastWider = 17,
   kRenderFxGlowShell = 18,
   kRenderFxMax = 19
}

enum class ResponseEnum_t : std::uint32_t
{
   MAX_RESPONSE_NAME = 192,
   MAX_RULE_NAME = 128
}

enum class LessonPanelLayoutFileTypes_t : std::uint32_t
{
   LAYOUT_HAND_DEFAULT = 0,
   LAYOUT_WORLD_DEFAULT = 1,
   LAYOUT_CUSTOM = 2
}

enum class Touch_t : std::uint32_t
{
   touch_none = 0,
   touch_player_only = 1,
   touch_npc_only = 2,
   touch_player_or_npc = 3,
   touch_player_or_npc_or_physicsprop = 4
}

enum class ScriptedMoveType_t : std::uint32_t
{
   SCRIPTED_MOVETYPE_NONE = 0,
   SCRIPTED_MOVETYPE_TO_WITH_DURATION = 1,
   SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 2,
   SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 3
}

enum class ForcedCrouchState_t : std::uint32_t
{
   FORCEDCROUCH_NONE = 0,
   FORCEDCROUCH_CROUCHED = 1,
   FORCEDCROUCH_UNCROUCHED = 2
}

enum class Hull_t : std::uint32_t
{
   HULL_HUMAN = 0,
   HULL_SMALL_CENTERED = 1,
   HULL_WIDE_HUMAN = 2,
   HULL_TINY = 3,
   HULL_MEDIUM = 4,
   HULL_TINY_CENTERED = 5,
   HULL_LARGE = 6,
   HULL_LARGE_CENTERED = 7,
   HULL_MEDIUM_TALL = 8,
   NUM_HULLS = 9,
   HULL_NONE = 10
}

enum class navproperties_t : std::uint32_t
{
   NAV_IGNORE = 1
}

enum class LogicBranchListenerLastState_t : std::uint32_t
{
   LOGIC_BRANCH_LISTENER_NOT_INIT = 0,
   LOGIC_BRANCH_LISTENER_ALL_TRUE = 1,
   LOGIC_BRANCH_LISTENER_ALL_FALSE = 2,
   LOGIC_BRANCH_LISTENER_MIXED = 3
}

enum class EntFinderMethod_t : std::uint32_t
{
   ENT_FIND_METHOD_NEAREST = 0,
   ENT_FIND_METHOD_FARTHEST = 1,
   ENT_FIND_METHOD_RANDOM = 2
}

enum class ValueRemapperInputType_t : std::uint32_t
{
   InputType_PlayerShootPosition = 0,
   InputType_PlayerShootPositionAroundAxis = 1
}

enum class ValueRemapperOutputType_t : std::uint32_t
{
   OutputType_AnimationCycle = 0,
   OutputType_RotationX = 1,
   OutputType_RotationY = 2,
   OutputType_RotationZ = 3
}

enum class ValueRemapperHapticsType_t : std::uint32_t
{
   HaticsType_Default = 0,
   HaticsType_None = 1
}

enum class ValueRemapperMomentumType_t : std::uint32_t
{
   MomentumType_None = 0,
   MomentumType_Friction = 1,
   MomentumType_SpringTowardSnapValue = 2,
   MomentumType_SpringAwayFromSnapValue = 3
}

enum class ValueRemapperRatchetType_t : std::uint32_t
{
   RatchetType_Absolute = 0,
   RatchetType_EachEngage = 1
}

enum class PointWorldTextJustifyHorizontal_t : std::uint32_t
{
   POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0,
   POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 1,
   POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 2
}

enum class PointWorldTextJustifyVertical_t : std::uint32_t
{
   POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0,
   POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 1,
   POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 2
}

enum class PointWorldTextReorientMode_t : std::uint32_t
{
   POINT_WORLD_TEXT_REORIENT_NONE = 0,
   POINT_WORLD_TEXT_REORIENT_AROUND_UP = 1
}

enum class doorCheck_e : std::uint32_t
{
   DOOR_CHECK_FORWARD = 0,
   DOOR_CHECK_BACKWARD = 1,
   DOOR_CHECK_FULL = 2
}

enum class PropDoorRotatingSpawnPos_t : std::uint32_t
{
   DOOR_SPAWN_CLOSED = 0,
   DOOR_SPAWN_OPEN_FORWARD = 1,
   DOOR_SPAWN_OPEN_BACK = 2,
   DOOR_SPAWN_AJAR = 3
}

enum class PropDoorRotatingOpenDirection_e : std::uint32_t
{
   DOOR_ROTATING_OPEN_BOTH_WAYS = 0,
   DOOR_ROTATING_OPEN_FORWARD = 1,
   DOOR_ROTATING_OPEN_BACKWARD = 2
}

enum class SceneOnPlayerDeath_t : std::uint32_t
{
   SCENE_ONPLAYERDEATH_DO_NOTHING = 0,
   SCENE_ONPLAYERDEATH_CANCEL = 1
}

enum class ScriptedConflictResponse_t : std::uint32_t
{
   SS_CONFLICT_ENQUEUE = 0,
   SS_CONFLICT_INTERRUPT = 1
}

enum class TRAIN_CODE : std::uint32_t
{
   TRAIN_SAFE = 0,
   TRAIN_BLOCKING = 1,
   TRAIN_FOLLOWING = 2
}

enum class TOGGLE_STATE : std::uint32_t
{
   TS_AT_TOP = 0,
   TS_AT_BOTTOM = 1,
   TS_GOING_UP = 2,
   TS_GOING_DOWN = 3,
   DOOR_OPEN = 0,
   DOOR_CLOSED = 1,
   DOOR_OPENING = 2,
   DOOR_CLOSING = 3
}

enum class FuncDoorSpawnPos_t : std::uint32_t
{
   FUNC_DOOR_SPAWN_CLOSED = 0,
   FUNC_DOOR_SPAWN_OPEN = 1
}

enum class filter_t : std::uint32_t
{
   FILTER_AND = 0,
   FILTER_OR = 1
}

enum class Explosions : std::uint32_t
{
   expRandom = 0,
   expDirected = 1,
   expUsePrecise = 2
}

enum class Materials : std::uint32_t
{
   matGlass = 0,
   matWood = 1,
   matMetal = 2,
   matFlesh = 3,
   matCinderBlock = 4,
   matCeilingTile = 5,
   matComputer = 6,
   matUnbreakableGlass = 7,
   matRocks = 8,
   matWeb = 9,
   matNone = 10,
   matLastMaterial = 11
}

enum class EOverrideBlockLOS_t : std::uint32_t
{
   BLOCK_LOS_DEFAULT = 0,
   BLOCK_LOS_FORCE_FALSE = 1,
   BLOCK_LOS_FORCE_TRUE = 2
}

enum class MoveLinearAuthoredPos_t : std::uint32_t
{
   MOVELINEAR_AUTHORED_AT_START_POSITION = 0,
   MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 1,
   MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 2
}

enum class TrackOrientationType_t : std::uint32_t
{
   TrackOrientation_Fixed = 0,
   TrackOrientation_FacePath = 1,
   TrackOrientation_FacePathAngles = 2
}

enum class SimpleConstraintsSoundProfileKeypoints_t : std::uint32_t
{
   kMIN_THRESHOLD = 0,
   kMIN_FULL = 1,
   kHIGHWATER = 2
}

enum class SoundFlags_t : std::int32_t
{
   SOUND_NONE = 0,
   SOUND_COMBAT = 1,
   SOUND_WORLD = 2,
   SOUND_PLAYER = 4,
   SOUND_DANGER = 8,
   SOUND_BULLET_IMPACT = 16,
   SOUND_THUMPER = 32,
   SOUND_PHYSICS_DANGER = 64,
   SOUND_MOVE_AWAY = 128,
   SOUND_PLAYER_VEHICLE = 256,
   SOUND_GLASS_BREAK = 512,
   SOUND_PHYSICS_OBJECT = 1024,
   SOUND_CONTEXT_GUNFIRE = 1048576,
   SOUND_CONTEXT_COMBINE_ONLY = 2097152,
   SOUND_CONTEXT_REACT_TO_SOURCE = 4194304,
   SOUND_CONTEXT_EXPLOSION = 8388608,
   SOUND_CONTEXT_EXCLUDE_COMBINE = 16777216,
   SOUND_CONTEXT_DANGER_APPROACH = 33554432,
   SOUND_CONTEXT_ALLIES_ONLY = 67108864,
   SOUND_CONTEXT_PANIC_NPCS = 134217728,
   ALL_CONTEXTS = -1048576,
   ALL_SCENTS = 0,
   ALL_SOUNDS = 1048575
}

enum class TrainVelocityType_t : std::uint32_t
{
   TrainVelocity_Instantaneous = 0,
   TrainVelocity_LinearBlend = 1,
   TrainVelocity_EaseInEaseOut = 2
}

enum class TrainOrientationType_t : std::uint32_t
{
   TrainOrientation_Fixed = 0,
   TrainOrientation_AtPathTracks = 1,
   TrainOrientation_LinearBlend = 2,
   TrainOrientation_EaseInEaseOut = 3
}

enum class BeamType_t : std::uint32_t
{
   BEAM_INVALID = 0,
   BEAM_POINTS = 1,
   BEAM_ENTPOINT = 2,
   BEAM_ENTS = 3,
   BEAM_HOSE = 4,
   BEAM_SPLINE = 5,
   BEAM_LASER = 6
}

enum class BeamClipStyle_t : std::uint32_t
{
   kNOCLIP = 0,
   kGEOCLIP = 1,
   kMODELCLIP = 2,
   kBEAMCLIPSTYLE_NUMBITS = 2
}

enum class SurroundingBoundsType_t : std::uint8_t
{
   USE_OBB_COLLISION_BOUNDS = 0,
   USE_BEST_COLLISION_BOUNDS = 1,
   USE_HITBOXES = 2,
   USE_SPECIFIED_BOUNDS = 3,
   USE_GAME_CODE = 4,
   USE_ROTATION_EXPANDED_BOUNDS = 5,
   USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 6,
   USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 7,
   SURROUNDING_TYPE_BIT_COUNT = 3
}

enum class ShatterPanelMode : std::uint8_t
{
   SHATTER_GLASS = 0,
   SHATTER_DRYWALL = 1
}

enum class ShatterDamageCause : std::uint8_t
{
   SHATTERDAMAGE_BULLET = 0,
   SHATTERDAMAGE_MELEE = 1,
   SHATTERDAMAGE_THROWN = 2,
   SHATTERDAMAGE_SCRIPT = 3,
   SHATTERDAMAGE_EXPLOSIVE = 4
}

enum class ShatterGlassStressType : std::uint8_t
{
   SHATTERGLASS_BLUNT = 0,
   SHATTERGLASS_BALLISTIC = 1,
   SHATTERGLASS_PULSE = 2,
   SHATTERDRYWALL_CHUNKS = 3,
   SHATTERGLASS_EXPLOSIVE = 4
}

enum class OnFrame : std::uint8_t
{
   ONFRAME_UNKNOWN = 0,
   ONFRAME_TRUE = 1,
   ONFRAME_FALSE = 2
}

enum class ShardSolid_t : std::uint8_t
{
   SHARD_SOLID = 0,
   SHARD_DEBRIS = 1
}

enum class AnimLoopMode_t : std::int32_t
{
   ANIM_LOOP_MODE_INVALID = -1,
   ANIM_LOOP_MODE_NOT_LOOPING = 0,
   ANIM_LOOP_MODE_LOOPING = 1,
   ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 2,
   ANIM_LOOP_MODE_COUNT = 3
}

enum class EntitySubclassScope_t : std::int32_t
{
   SUBCLASS_SCOPE_NONE = -1,
   SUBCLASS_SCOPE_PRECIPITATION = 0,
   SUBCLASS_SCOPE_PLAYER_WEAPONS = 1,
   SUBCLASS_SCOPE_COUNT = 2
}

enum class SubclassVDataChangeType_t : std::uint32_t
{
   SUBCLASS_VDATA_CREATED = 0,
   SUBCLASS_VDATA_SUBCLASS_CHANGED = 1,
   SUBCLASS_VDATA_RELOADED = 2
}

enum class PlayerConnectedState : std::int32_t
{
   PlayerNeverConnected = -1,
   PlayerConnected = 0,
   PlayerConnecting = 1,
   PlayerReconnecting = 2,
   PlayerDisconnecting = 3,
   PlayerDisconnected = 4,
   PlayerReserved = 5
}

enum class vote_create_failed_t : std::uint32_t
{
   VOTE_FAILED_GENERIC = 0,
   VOTE_FAILED_TRANSITIONING_PLAYERS = 1,
   VOTE_FAILED_RATE_EXCEEDED = 2,
   VOTE_FAILED_YES_MUST_EXCEED_NO = 3,
   VOTE_FAILED_QUORUM_FAILURE = 4,
   VOTE_FAILED_ISSUE_DISABLED = 5,
   VOTE_FAILED_MAP_NOT_FOUND = 6,
   VOTE_FAILED_MAP_NAME_REQUIRED = 7,
   VOTE_FAILED_FAILED_RECENTLY = 8,
   VOTE_FAILED_TEAM_CANT_CALL = 9,
   VOTE_FAILED_WAITINGFORPLAYERS = 10,
   VOTE_FAILED_PLAYERNOTFOUND = 11,
   VOTE_FAILED_CANNOT_KICK_ADMIN = 12,
   VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 13,
   VOTE_FAILED_SPECTATOR = 14,
   VOTE_FAILED_FAILED_RECENT_KICK = 15,
   VOTE_FAILED_FAILED_RECENT_CHANGEMAP = 16,
   VOTE_FAILED_FAILED_RECENT_SWAPTEAMS = 17,
   VOTE_FAILED_FAILED_RECENT_SCRAMBLETEAMS = 18,
   VOTE_FAILED_FAILED_RECENT_RESTART = 19,
   VOTE_FAILED_SWAP_IN_PROGRESS = 20,
   VOTE_FAILED_DISABLED = 21,
   VOTE_FAILED_NEXTLEVEL_SET = 22,
   VOTE_FAILED_TOO_EARLY_SURRENDER = 23,
   VOTE_FAILED_MATCH_PAUSED = 24,
   VOTE_FAILED_MATCH_NOT_PAUSED = 25,
   VOTE_FAILED_NOT_IN_WARMUP = 26,
   VOTE_FAILED_NOT_10_PLAYERS = 27,
   VOTE_FAILED_TIMEOUT_ACTIVE = 28,
   VOTE_FAILED_TIMEOUT_INACTIVE = 29,
   VOTE_FAILED_TIMEOUT_EXHAUSTED = 30,
   VOTE_FAILED_CANT_ROUND_END = 31,
   VOTE_FAILED_REMATCH = 32,
   VOTE_FAILED_CONTINUE = 33,
   VOTE_FAILED_MAX = 34
}

enum class WeaponState_t : std::uint32_t
{
   WEAPON_NOT_CARRIED = 0,
   WEAPON_IS_CARRIED_BY_PLAYER = 1,
   WEAPON_IS_ACTIVE = 2
}

enum class ItemFlagTypes_t : std::uint8_t
{
   ITEM_FLAG_NONE = 0,
   ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 1,
   ITEM_FLAG_NOAUTORELOAD = 2,
   ITEM_FLAG_NOAUTOSWITCHEMPTY = 4,
   ITEM_FLAG_LIMITINWORLD = 8,
   ITEM_FLAG_EXHAUSTIBLE = 16,
   ITEM_FLAG_DOHITLOCATIONDMG = 32,
   ITEM_FLAG_NOAMMOPICKUPS = 64,
   ITEM_FLAG_NOITEMPICKUP = 128
}

enum class EntityDisolveType_t : std::int32_t
{
   ENTITY_DISSOLVE_INVALID = -1,
   ENTITY_DISSOLVE_NORMAL = 0,
   ENTITY_DISSOLVE_ELECTRICAL = 1,
   ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 2,
   ENTITY_DISSOLVE_CORE = 3
}

enum class HitGroup_t : std::int32_t
{
   HITGROUP_INVALID = -1,
   HITGROUP_GENERIC = 0,
   HITGROUP_HEAD = 1,
   HITGROUP_CHEST = 2,
   HITGROUP_STOMACH = 3,
   HITGROUP_LEFTARM = 4,
   HITGROUP_RIGHTARM = 5,
   HITGROUP_LEFTLEG = 6,
   HITGROUP_RIGHTLEG = 7,
   HITGROUP_NECK = 8,
   HITGROUP_UNUSED = 9,
   HITGROUP_GEAR = 10,
   HITGROUP_SPECIAL = 11,
   HITGROUP_COUNT = 12
}

enum class WaterLevel_t : std::uint8_t
{
   WL_NotInWater = 0,
   WL_Feet = 1,
   WL_Waist = 2,
   WL_Chest = 3,
   WL_FullyUnderwater = 4,
   WL_Count = 5
}

enum class DoorState_t : std::uint32_t
{
   DOOR_STATE_CLOSED = 0,
   DOOR_STATE_OPENING = 1,
   DOOR_STATE_OPEN = 2,
   DOOR_STATE_CLOSING = 3,
   DOOR_STATE_AJAR = 4
}

enum class ShadowType_t : std::uint32_t
{
   SHADOWS_NONE = 0,
   SHADOWS_SIMPLE = 1
}

enum class Class_T : std::uint32_t
{
   CLASS_NONE = 0,
   CLASS_PLAYER = 1,
   CLASS_PLAYER_ALLY = 2,
   CLASS_DZ_DRONE = 3,
   CLASS_DZ_SPAWN_CHOPPER = 4,
   CLASS_BOMB = 5,
   CLASS_FOOT_CONTACT_SHADOW = 6,
   CLASS_WEAPON_VIEWMODEL = 7,
   NUM_CLASSIFY_CLASSES = 8
}

enum class Disposition_t : std::uint32_t
{
   D_ER = 0,
   D_HT = 1,
   D_FR = 2,
   D_LI = 3,
   D_NU = 4,
   D_ERROR = 0,
   D_HATE = 1,
   D_FEAR = 2,
   D_LIKE = 3,
   D_NEUTRAL = 4
}

enum class LatchDirtyPermission_t : std::uint32_t
{
   LATCH_DIRTY_DISALLOW = 0,
   LATCH_DIRTY_SERVER_CONTROLLED = 1,
   LATCH_DIRTY_CLIENT_SIMULATED = 2,
   LATCH_DIRTY_PREDICTION = 3,
   LATCH_DIRTY_FRAMESIMULATE = 4,
   LATCH_DIRTY_PARTICLE_SIMULATE = 5
}

enum class LifeState_t : std::uint32_t
{
   LIFE_ALIVE = 0,
   LIFE_DYING = 1,
   LIFE_DEAD = 2,
   LIFE_RESPAWNABLE = 3,
   LIFE_RESPAWNING = 4
}

enum class StanceType_t : std::int32_t
{
   STANCE_CURRENT = -1,
   STANCE_DEFAULT = 0,
   STANCE_CROUCHING = 1,
   NUM_STANCES = 2
}

enum class ModifyDamageReturn_t : std::uint32_t
{
   CONTINUE_TO_APPLY_DAMAGE = 0,
   ABORT_DO_NOT_APPLY_DAMAGE = 1
}

enum class WorldTextPanelHorizontalAlign_t : std::uint32_t
{
   WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0,
   WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 1,
   WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 2
}

enum class WorldTextPanelVerticalAlign_t : std::uint32_t
{
   WORLDTEXT_VERTICAL_ALIGN_TOP = 0,
   WORLDTEXT_VERTICAL_ALIGN_CENTER = 1,
   WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 2
}

enum class WorldTextPanelOrientation_t : std::uint32_t
{
   WORLDTEXT_ORIENTATION_DEFAULT = 0,
   WORLDTEXT_ORIENTATION_FACEUSER = 1,
   WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 2
}

enum class WorldTextAttachmentType_t : std::uint32_t
{
   ATTACHED_NONE = 0,
   ATTACHED_ENTITY = 1,
   ATTACHED_ENTITY_LARGE = 2,
   ATTACHED_HAND_SPECIFIED_IN_EVENT = 3
}

enum class attributeprovidertypes_t : std::uint32_t
{
   PROVIDER_GENERIC = 0,
   PROVIDER_WEAPON = 1
}

enum class BotDefaultBehavior_t : std::uint32_t
{
   DEFEND_AREA = 0,
   HUNT = 1,
   CHARGE_ENEMY = 2,
   DEFEND_INVESTIGATE = 3
}

enum class MoveMountingAmount_t : std::uint32_t
{
   MOVE_MOUNT_NONE = 0,
   MOVE_MOUNT_LOW = 1,
   MOVE_MOUNT_HIGH = 2,
   MOVE_MOUNT_MAXCOUNT = 3
}

enum class CSPlayerState : std::uint32_t
{
   STATE_ACTIVE = 0,
   STATE_WELCOME = 1,
   STATE_PICKINGTEAM = 2,
   STATE_PICKINGCLASS = 3,
   STATE_DEATH_ANIM = 4,
   STATE_DEATH_WAIT_FOR_KEY = 5,
   STATE_OBSERVER_MODE = 6,
   STATE_GUNGAME_RESPAWN = 7,
   STATE_DORMANT = 8,
   NUM_PLAYER_STATES = 9
}

enum class CSPlayerBlockingUseAction_t : std::uint32_t
{
   k_CSPlayerBlockingUseAction_None = 0,
   k_CSPlayerBlockingUseAction_DefusingDefault = 1,
   k_CSPlayerBlockingUseAction_DefusingWithKit = 2,
   k_CSPlayerBlockingUseAction_HostageGrabbing = 3,
   k_CSPlayerBlockingUseAction_HostageDropping = 4,
   k_CSPlayerBlockingUseAction_OpeningSafe = 5,
   k_CSPlayerBlockingUseAction_EquippingParachute = 6,
   k_CSPlayerBlockingUseAction_EquippingHeavyArmor = 7,
   k_CSPlayerBlockingUseAction_EquippingContract = 8,
   k_CSPlayerBlockingUseAction_EquippingTabletUpgrade = 9,
   k_CSPlayerBlockingUseAction_TakingOffHeavyArmor = 10,
   k_CSPlayerBlockingUseAction_PayingToOpenDoor = 11,
   k_CSPlayerBlockingUseAction_CancelingSpawnRappelling = 12,
   k_CSPlayerBlockingUseAction_EquippingExoJump = 13,
   k_CSPlayerBlockingUseAction_PickingUpBumpMine = 14,
   k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 15,
   k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 16,
   k_CSPlayerBlockingUseAction_MaxCount = 17
}

enum class GrenadeType_t : std::uint32_t
{
   GRENADE_TYPE_EXPLOSIVE = 0,
   GRENADE_TYPE_FLASH = 1,
   GRENADE_TYPE_FIRE = 2,
   GRENADE_TYPE_DECOY = 3,
   GRENADE_TYPE_SMOKE = 4,
   GRENADE_TYPE_SENSOR = 5,
   GRENADE_TYPE_SNOWBALL = 6,
   GRENADE_TYPE_TOTAL = 7
}

enum class RelativeDamagedDirection_t : std::uint32_t
{
   DAMAGED_DIR_NONE = 0,
   DAMAGED_DIR_FRONT = 1,
   DAMAGED_DIR_BACK = 2,
   DAMAGED_DIR_LEFT = 3,
   DAMAGED_DIR_RIGHT = 4,
   DAMAGED_DIR_TOTAL = 5
}

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

enum class loadout_positions_t : std::int32_t
{
   LOADOUT_POSITION_INVALID = -1,
   LOADOUT_POSITION_MELEE = 0,
   LOADOUT_POSITION_C4 = 1,
   LOADOUT_POSITION_FIRST_AUTO_BUY_WEAPON = 0,
   LOADOUT_POSITION_LAST_AUTO_BUY_WEAPON = 1,
   LOADOUT_POSITION_SECONDARY0 = 2,
   LOADOUT_POSITION_SECONDARY1 = 3,
   LOADOUT_POSITION_SECONDARY2 = 4,
   LOADOUT_POSITION_SECONDARY3 = 5,
   LOADOUT_POSITION_SECONDARY4 = 6,
   LOADOUT_POSITION_SECONDARY5 = 7,
   LOADOUT_POSITION_SMG0 = 8,
   LOADOUT_POSITION_SMG1 = 9,
   LOADOUT_POSITION_SMG2 = 10,
   LOADOUT_POSITION_SMG3 = 11,
   LOADOUT_POSITION_SMG4 = 12,
   LOADOUT_POSITION_SMG5 = 13,
   LOADOUT_POSITION_RIFLE0 = 14,
   LOADOUT_POSITION_RIFLE1 = 15,
   LOADOUT_POSITION_RIFLE2 = 16,
   LOADOUT_POSITION_RIFLE3 = 17,
   LOADOUT_POSITION_RIFLE4 = 18,
   LOADOUT_POSITION_RIFLE5 = 19,
   LOADOUT_POSITION_HEAVY0 = 20,
   LOADOUT_POSITION_HEAVY1 = 21,
   LOADOUT_POSITION_HEAVY2 = 22,
   LOADOUT_POSITION_HEAVY3 = 23,
   LOADOUT_POSITION_HEAVY4 = 24,
   LOADOUT_POSITION_HEAVY5 = 25,
   LOADOUT_POSITION_FIRST_WHEEL_WEAPON = 2,
   LOADOUT_POSITION_LAST_WHEEL_WEAPON = 25,
   LOADOUT_POSITION_FIRST_PRIMARY_WEAPON = 8,
   LOADOUT_POSITION_LAST_PRIMARY_WEAPON = 25,
   LOADOUT_POSITION_FIRST_WHEEL_GRENADE = 26,
   LOADOUT_POSITION_GRENADE0 = 26,
   LOADOUT_POSITION_GRENADE1 = 27,
   LOADOUT_POSITION_GRENADE2 = 28,
   LOADOUT_POSITION_GRENADE3 = 29,
   LOADOUT_POSITION_GRENADE4 = 30,
   LOADOUT_POSITION_GRENADE5 = 31,
   LOADOUT_POSITION_LAST_WHEEL_GRENADE = 31,
   LOADOUT_POSITION_EQUIPMENT0 = 32,
   LOADOUT_POSITION_EQUIPMENT1 = 33,
   LOADOUT_POSITION_EQUIPMENT2 = 34,
   LOADOUT_POSITION_EQUIPMENT3 = 35,
   LOADOUT_POSITION_EQUIPMENT4 = 36,
   LOADOUT_POSITION_EQUIPMENT5 = 37,
   LOADOUT_POSITION_FIRST_WHEEL_EQUIPMENT = 32,
   LOADOUT_POSITION_LAST_WHEEL_EQUIPMENT = 37,
   LOADOUT_POSITION_CLOTHING_CUSTOMPLAYER = 38,
   LOADOUT_POSITION_PET = 39,
   LOADOUT_POSITION_CLOTHING_FACEMASK = 40,
   LOADOUT_POSITION_CLOTHING_HANDS = 41,
   LOADOUT_POSITION_FIRST_COSMETIC = 41,
   LOADOUT_POSITION_LAST_COSMETIC = 41,
   LOADOUT_POSITION_CLOTHING_EYEWEAR = 42,
   LOADOUT_POSITION_CLOTHING_HAT = 43,
   LOADOUT_POSITION_CLOTHING_LOWERBODY = 44,
   LOADOUT_POSITION_CLOTHING_TORSO = 45,
   LOADOUT_POSITION_CLOTHING_APPEARANCE = 46,
   LOADOUT_POSITION_MISC0 = 47,
   LOADOUT_POSITION_MISC1 = 48,
   LOADOUT_POSITION_MISC2 = 49,
   LOADOUT_POSITION_MISC3 = 50,
   LOADOUT_POSITION_MISC4 = 51,
   LOADOUT_POSITION_MISC5 = 52,
   LOADOUT_POSITION_MISC6 = 53,
   LOADOUT_POSITION_MUSICKIT = 54,
   LOADOUT_POSITION_FLAIR0 = 55,
   LOADOUT_POSITION_SPRAY0 = 56,
   LOADOUT_POSITION_FIRST_ALL_CHARACTER = 54,
   LOADOUT_POSITION_LAST_ALL_CHARACTER = 56,
   LOADOUT_POSITION_COUNT = 57
}

enum class EKillTypes_t : std::uint8_t
{
   KILL_NONE = 0,
   KILL_DEFAULT = 1,
   KILL_HEADSHOT = 2,
   KILL_BLAST = 3,
   KILL_BURN = 4,
   KILL_SLASH = 5,
   KILLTYPE_COUNT = 6
}

enum class CSWeaponType : std::uint32_t
{
   WEAPONTYPE_KNIFE = 0,
   WEAPONTYPE_PISTOL = 1,
   WEAPONTYPE_SUBMACHINEGUN = 2,
   WEAPONTYPE_RIFLE = 3,
   WEAPONTYPE_SHOTGUN = 4,
   WEAPONTYPE_SNIPER_RIFLE = 5,
   WEAPONTYPE_MACHINEGUN = 6,
   WEAPONTYPE_C4 = 7,
   WEAPONTYPE_TASER = 8,
   WEAPONTYPE_GRENADE = 9,
   WEAPONTYPE_EQUIPMENT = 10,
   WEAPONTYPE_STACKABLEITEM = 11,
   WEAPONTYPE_FISTS = 12,
   WEAPONTYPE_BREACHCHARGE = 13,
   WEAPONTYPE_BUMPMINE = 14,
   WEAPONTYPE_TABLET = 15,
   WEAPONTYPE_MELEE = 16,
   WEAPONTYPE_SHIELD = 17,
   WEAPONTYPE_ZONE_REPULSOR = 18,
   WEAPONTYPE_UNKNOWN = 19
}

enum class CSWeaponCategory : std::uint32_t
{
   WEAPONCATEGORY_OTHER = 0,
   WEAPONCATEGORY_MELEE = 1,
   WEAPONCATEGORY_SECONDARY = 2,
   WEAPONCATEGORY_SMG = 3,
   WEAPONCATEGORY_RIFLE = 4,
   WEAPONCATEGORY_HEAVY = 5,
   WEAPONCATEGORY_COUNT = 6
}

enum class CSWeaponSilencerType : std::uint32_t
{
   WEAPONSILENCER_NONE = 0,
   WEAPONSILENCER_DETACHABLE = 1,
   WEAPONSILENCER_INTEGRATED = 2
}

enum class PlayerAnimEvent_t : std::uint32_t
{
   PLAYERANIMEVENT_FIRE_GUN_PRIMARY = 0,
   PLAYERANIMEVENT_FIRE_GUN_SECONDARY = 1,
   PLAYERANIMEVENT_GRENADE_PULL_PIN = 2,
   PLAYERANIMEVENT_THROW_GRENADE = 3,
   PLAYERANIMEVENT_JUMP = 4,
   PLAYERANIMEVENT_RELOAD = 5,
   PLAYERANIMEVENT_CLEAR_FIRING = 6,
   PLAYERANIMEVENT_DEPLOY = 7,
   PLAYERANIMEVENT_SILENCER_STATE = 8,
   PLAYERANIMEVENT_SILENCER_TOGGLE = 9,
   PLAYERANIMEVENT_THROW_GRENADE_UNDERHAND = 10,
   PLAYERANIMEVENT_CATCH_WEAPON = 11,
   PLAYERANIMEVENT_LOOKATWEAPON_REQUEST = 12,
   PLAYERANIMEVENT_HAULBACK = 13,
   PLAYERANIMEVENT_IDLE = 14,
   PLAYERANIMEVENT_STRIKE_HIT = 15,
   PLAYERANIMEVENT_STRIKE_MISS = 16,
   PLAYERANIMEVENT_BACKSTAB = 17,
   PLAYERANIMEVENT_DRYFIRE = 18,
   PLAYERANIMEVENT_FIDGET = 19,
   PLAYERANIMEVENT_RELEASE = 20,
   PLAYERANIMEVENT_TAUNT = 21,
   PLAYERANIMEVENT_COUNT = 22
}

enum class MedalRank_t : std::uint32_t
{
   MEDAL_RANK_NONE = 0,
   MEDAL_RANK_BRONZE = 1,
   MEDAL_RANK_SILVER = 2,
   MEDAL_RANK_GOLD = 3,
   MEDAL_RANK_COUNT = 4
}

enum class ESurvivalSpawnTileState : std::uint8_t
{
   kSurvivalSpawn_Available = 0,
   kSurvivalSpawn_Unused = 1,
   kSurvivalSpawn_Blocked = 2,
   kSurvivalSpawn_Occupied = 3,
   kSurvivalSpawn_Blockupied = 4,
   kSurvivalSpawn_Locked = 5,
   kSurvivalSpawn_ProximityBlocked = 6,
   kSurvivalSpawn_TileStateCount = 7,
   kSurvivalSpawn_UI_Invalid = 127,
   kSurvivalSpawn_UI_LocalPlayerFlag = 128
}

enum class ESurvivalGameRuleDecision_t : std::uint32_t
{
   k_ESurvivalGameRuleDecision_Unknown = 0,
   k_ESurvivalGameRuleDecision_Tablet_Purchase_Pistol_DefIdx = 1,
   k_ESurvivalGameRuleDecision_Tablet_Purchase_SMG_DefIdx = 2,
   k_ESurvivalGameRuleDecision_Tablet_Purchase_Rifle_DefIdx = 3,
   k_ESurvivalGameRuleDecision_Tablet_Purchase_Sniper_DefIdx = 4,
   k_ESurvivalGameRuleDecision_Tablet_Purchase_MegaPistol_DefIdx = 5,
   k_ESurvivalGameRuleDecision_TotalCount = 6
}

enum class SpawnStage_t : std::uint32_t
{
   SPAWN_STAGE_NONE = 0,
   SPAWN_STAGE_SELECTION = 1,
   SPAWN_STAGE_LOCKED = 3,
   SPAWN_STAGE_ALL_READY = 2,
   SPAWN_STAGE_PERK_SELECTION = 4,
   SPAWN_STAGE_PERK_ALL_READY = 5,
   SPAWN_STAGE_PLAYERS_CAN_RESPAWN = 6,
   SPAWN_STAGE_COUNT = 7
}

enum class CSWeaponMode : std::uint32_t
{
   Primary_Mode = 0,
   Secondary_Mode = 1,
   WeaponMode_MAX = 2
}

enum class EGrenadeThrowState : std::uint32_t
{
   NotThrowing = 0,
   Throwing = 1,
   ThrowComplete = 2
}

enum class tablet_skin_state_t : std::uint8_t
{
   TABLET_SKIN_STATE_BLANK = 0,
   TABLET_SKIN_STATE_RADAR = 1,
   TABLET_SKIN_STATE_BUYMENU = 2
}

enum class gear_slot_t : std::int32_t
{
   GEAR_SLOT_INVALID = -1,
   GEAR_SLOT_RIFLE = 0,
   GEAR_SLOT_PISTOL = 1,
   GEAR_SLOT_KNIFE = 2,
   GEAR_SLOT_GRENADES = 3,
   GEAR_SLOT_C4 = 4,
   GEAR_SLOT_RESERVED_SLOT6 = 5,
   GEAR_SLOT_RESERVED_SLOT7 = 6,
   GEAR_SLOT_RESERVED_SLOT8 = 7,
   GEAR_SLOT_RESERVED_SLOT9 = 8,
   GEAR_SLOT_RESERVED_SLOT10 = 9,
   GEAR_SLOT_RESERVED_SLOT11 = 10,
   GEAR_SLOT_BOOSTS = 11,
   GEAR_SLOT_UTILITY = 12,
   GEAR_SLOT_COUNT = 13,
   GEAR_SLOT_FIRST = 0,
   GEAR_SLOT_LAST = 12
}

enum class ChickenActivity : std::uint32_t
{
   IDLE = 0,
   WALK = 1,
   RUN = 2,
   HOP = 3,
   JUMP = 4,
   GLIDE = 5,
   LAND = 6
}

enum class WaterWakeMode_t : std::uint32_t
{
   WATER_WAKE_NONE = 0,
   WATER_WAKE_IDLE = 1,
   WATER_WAKE_WALKING = 2,
   WATER_WAKE_RUNNING = 3,
   WATER_WAKE_WATER_OVERHEAD = 4
}

enum class CompositeMaterialMatchFilterType_t : std::uint32_t
{
   MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0,
   MATCH_FILTER_MATERIAL_SHADER = 1,
   MATCH_FILTER_MATERIAL_NAME_SUBSTR = 2,
   MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 3,
   MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 4,
   MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 5
}

enum class CompositeMaterialVarSystemVar_t : std::uint32_t
{
   COMPMATSYSVAR_COMPOSITETIME = 0,
   COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 1
}

enum class CompositeMaterialInputLooseVariableType_t : std::uint32_t
{
   LOOSE_VARIABLE_TYPE_BOOLEAN = 0,
   LOOSE_VARIABLE_TYPE_INTEGER1 = 1,
   LOOSE_VARIABLE_TYPE_INTEGER2 = 2,
   LOOSE_VARIABLE_TYPE_INTEGER3 = 3,
   LOOSE_VARIABLE_TYPE_INTEGER4 = 4,
   LOOSE_VARIABLE_TYPE_FLOAT1 = 5,
   LOOSE_VARIABLE_TYPE_FLOAT2 = 6,
   LOOSE_VARIABLE_TYPE_FLOAT3 = 7,
   LOOSE_VARIABLE_TYPE_FLOAT4 = 8,
   LOOSE_VARIABLE_TYPE_COLOR4 = 9,
   LOOSE_VARIABLE_TYPE_STRING = 10,
   LOOSE_VARIABLE_TYPE_SYSTEMVAR = 11,
   LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 12,
   LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 13
}

enum class CompositeMaterialInputTextureType_t : std::uint32_t
{
   INPUT_TEXTURE_TYPE_DEFAULT = 0,
   INPUT_TEXTURE_TYPE_NORMALMAP = 1
}

enum class CompMatPropertyMutatorType_t : std::uint32_t
{
   COMP_MAT_PROPERTY_MUTATOR_INIT = 0,
   COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 1,
   COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 2,
   COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 3,
   COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 4,
   COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 5,
   COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 6,
   COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 7,
   COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 8,
   COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 9
}

enum class CompMatPropertyMutatorConditionType_t : std::uint32_t
{
   COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0,
   COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 1,
   COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 2
}

enum class CompositeMaterialInputContainerSourceType_t : std::uint32_t
{
   CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0,
   CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 1,
   CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 2,
   CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 3,
   CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 4,
   CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 5
}
