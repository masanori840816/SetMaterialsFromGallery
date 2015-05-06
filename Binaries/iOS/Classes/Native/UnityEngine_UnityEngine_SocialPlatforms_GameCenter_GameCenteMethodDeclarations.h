#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_t431;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t432;
// System.Action`1<System.Boolean>
struct Action_1_t422;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t12;
// System.String[]
struct StringU5BU5D_t9;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t433;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t435;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t423;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t424;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t425;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t437;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t426;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t428;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t438;
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
 void GameCenterPlatform__ctor_m2063 (GameCenterPlatform_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
 void GameCenterPlatform__cctor_m2064 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
 void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2065 (GameCenterPlatform_t431 * __this, Object_t * ___user, Action_1_t422 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
 void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2066 (GameCenterPlatform_t431 * __this, Object_t * ___user, Action_1_t422 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
 void GameCenterPlatform_Internal_Authenticate_m2067 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
 bool GameCenterPlatform_Internal_Authenticated_m2068 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
 String_t* GameCenterPlatform_Internal_UserName_m2069 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
 String_t* GameCenterPlatform_Internal_UserID_m2070 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
 bool GameCenterPlatform_Internal_Underage_m2071 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
 Texture2D_t12 * GameCenterPlatform_Internal_UserImage_m2072 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
 void GameCenterPlatform_Internal_LoadFriends_m2073 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
 void GameCenterPlatform_Internal_LoadAchievementDescriptions_m2074 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
 void GameCenterPlatform_Internal_LoadAchievements_m2075 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
 void GameCenterPlatform_Internal_ReportProgress_m2076 (Object_t * __this/* static, unused */, String_t* ___id, double ___progress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
 void GameCenterPlatform_Internal_ReportScore_m2077 (Object_t * __this/* static, unused */, int64_t ___score, String_t* ___category, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
 void GameCenterPlatform_Internal_LoadScores_m2078 (Object_t * __this/* static, unused */, String_t* ___category, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
 void GameCenterPlatform_Internal_ShowAchievementsUI_m2079 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
 void GameCenterPlatform_Internal_ShowLeaderboardUI_m2080 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
 void GameCenterPlatform_Internal_LoadUsers_m2081 (Object_t * __this/* static, unused */, StringU5BU5D_t9* ___userIds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
 void GameCenterPlatform_Internal_ResetAllAchievements_m2082 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
 void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2083 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
 void GameCenterPlatform_ResetAllAchievements_m2084 (Object_t * __this/* static, unused */, Action_1_t422 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
 void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2085 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
 void GameCenterPlatform_ShowLeaderboardUI_m2086 (Object_t * __this/* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
 void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2087 (Object_t * __this/* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
 void GameCenterPlatform_ClearAchievementDescriptions_m2088 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
 void GameCenterPlatform_SetAchievementDescription_m2089 (Object_t * __this/* static, unused */, GcAchievementDescriptionData_t439  ___data, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SetAchievementDescriptionImage_m2090 (Object_t * __this/* static, unused */, Texture2D_t12 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
 void GameCenterPlatform_TriggerAchievementDescriptionCallback_m2091 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
 void GameCenterPlatform_AuthenticateCallbackWrapper_m2092 (Object_t * __this/* static, unused */, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
 void GameCenterPlatform_ClearFriends_m2093 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
 void GameCenterPlatform_SetFriends_m2094 (Object_t * __this/* static, unused */, GcUserProfileData_t440  ___data, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SetFriendImage_m2095 (Object_t * __this/* static, unused */, Texture2D_t12 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
 void GameCenterPlatform_TriggerFriendsCallbackWrapper_m2096 (Object_t * __this/* static, unused */, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
 void GameCenterPlatform_AchievementCallbackWrapper_m2097 (Object_t * __this/* static, unused */, GcAchievementDataU5BU5D_t433* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
 void GameCenterPlatform_ProgressCallbackWrapper_m2098 (Object_t * __this/* static, unused */, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
 void GameCenterPlatform_ScoreCallbackWrapper_m2099 (Object_t * __this/* static, unused */, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
 void GameCenterPlatform_ScoreLoaderCallbackWrapper_m2100 (Object_t * __this/* static, unused */, GcScoreDataU5BU5D_t435* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
 Object_t * GameCenterPlatform_get_localUser_m2101 (GameCenterPlatform_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
 void GameCenterPlatform_PopulateLocalUser_m2102 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
 void GameCenterPlatform_LoadAchievementDescriptions_m2103 (GameCenterPlatform_t431 * __this, Action_1_t423 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
 void GameCenterPlatform_ReportProgress_m2104 (GameCenterPlatform_t431 * __this, String_t* ___id, double ___progress, Action_1_t422 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
 void GameCenterPlatform_LoadAchievements_m2105 (GameCenterPlatform_t431 * __this, Action_1_t424 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
 void GameCenterPlatform_ReportScore_m2106 (GameCenterPlatform_t431 * __this, int64_t ___score, String_t* ___board, Action_1_t422 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
 void GameCenterPlatform_LoadScores_m2107 (GameCenterPlatform_t431 * __this, String_t* ___category, Action_1_t425 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
 void GameCenterPlatform_LoadScores_m2108 (GameCenterPlatform_t431 * __this, Object_t * ___board, Action_1_t422 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
 void GameCenterPlatform_LeaderboardCallbackWrapper_m2109 (Object_t * __this/* static, unused */, bool ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
 bool GameCenterPlatform_GetLoading_m2110 (GameCenterPlatform_t431 * __this, Object_t * ___board, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
 bool GameCenterPlatform_VerifyAuthentication_m2111 (GameCenterPlatform_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
 void GameCenterPlatform_ShowAchievementsUI_m2112 (GameCenterPlatform_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
 void GameCenterPlatform_ShowLeaderboardUI_m2113 (GameCenterPlatform_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
 void GameCenterPlatform_ClearUsers_m2114 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
 void GameCenterPlatform_SetUser_m2115 (Object_t * __this/* static, unused */, GcUserProfileData_t440  ___data, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SetUserImage_m2116 (Object_t * __this/* static, unused */, Texture2D_t12 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
 void GameCenterPlatform_TriggerUsersCallbackWrapper_m2117 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
 void GameCenterPlatform_LoadUsers_m2118 (GameCenterPlatform_t431 * __this, StringU5BU5D_t9* ___userIds, Action_1_t426 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
 void GameCenterPlatform_SafeSetUserImage_m2119 (Object_t * __this/* static, unused */, UserProfileU5BU5D_t428** ___array, Texture2D_t12 * ___texture, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
 void GameCenterPlatform_SafeClearArray_m2120 (Object_t * __this/* static, unused */, UserProfileU5BU5D_t428** ___array, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
 Object_t * GameCenterPlatform_CreateLeaderboard_m2121 (GameCenterPlatform_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
 Object_t * GameCenterPlatform_CreateAchievement_m2122 (GameCenterPlatform_t431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
 void GameCenterPlatform_TriggerResetAchievementCallback_m2123 (Object_t * __this/* static, unused */, bool ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
