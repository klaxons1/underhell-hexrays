int sub_100BCF70()
{
  char v1[4]; // [esp+Ch] [ebp-50h] BYREF
  int v2; // [esp+10h] [ebp-4Ch]
  int v3; // [esp+14h] [ebp-48h]
  int v4; // [esp+18h] [ebp-44h]
  float v5; // [esp+1Ch] [ebp-40h]
  float v6; // [esp+20h] [ebp-3Ch]
  int v7; // [esp+24h] [ebp-38h]
  int v8; // [esp+28h] [ebp-34h]
  int v9; // [esp+2Ch] [ebp-30h]
  int v10; // [esp+30h] [ebp-2Ch]
  int v11; // [esp+34h] [ebp-28h]
  int v12; // [esp+38h] [ebp-24h]
  float v13; // [esp+3Ch] [ebp-20h]
  int v14; // [esp+40h] [ebp-1Ch]
  int v15; // [esp+44h] [ebp-18h]
  int v16; // [esp+48h] [ebp-14h]
  int v17; // [esp+4Ch] [ebp-10h]
  int v18; // [esp+50h] [ebp-Ch]
  int v19; // [esp+54h] [ebp-8h]
  int (__cdecl *v20)(int, int, int); // [esp+58h] [ebp-4h]

  if ( (dword_10695E9C & 1) == 0 )
  {
    dword_10695E9C |= 1u;
    sub_10122040(&unk_106957C8, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_10695814,
      "baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040(&unk_10695860, "m_nForceBone", 832, 4, 8, 0, 0);
    sub_10121E50((int)&unk_106958AC, (int)"m_vecForce", 836, 12, -1, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040(&unk_106958F8, "m_nSkin", 848, 4, 10, 0, 0);
    sub_10122040(&unk_10695944, "m_nBody", 852, 4, 32, 0, 0);
    sub_10122040(&unk_10695990, "m_nHitboxSet", 856, 4, 2, 1, 0);
    sub_10121D30((int)&unk_106959DC, (int)"m_flModelWidthScale", 860, 4, 6, 16, 0.0, 1.0, (int)sub_10121A20);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10121D30((int)v1, (int)"m_flPoseParameter", 912, 4, 11, 0, 0.0, 1.0, (int)sub_10121A20);
    sub_101223F0(
      (int)&unk_10695A28,
      (char)"m_flPoseParameter",
      912,
      4,
      24,
      v1[0],
      v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      (int)v20);
    sub_10122040(&unk_10695A74, "m_nSequence", 908, 4, 12, 1, 0);
    sub_10121D30((int)&unk_10695AC0, (int)"m_flPlaybackRate", 864, 4, 8, 16, -4.0, 12.0, (int)sub_10121A20);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10121D30((int)v1, (int)"m_flEncodedController", 1008, 4, 11, 8, 0.0, 1.0, (int)sub_10121A20);
    sub_101223F0(
      (int)&unk_10695B0C,
      (char)"m_flEncodedController",
      1008,
      4,
      4,
      v1[0],
      v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      (int)v20);
    sub_10122040(&unk_10695B58, "m_bClientSideAnimation", 1024, 1, 1, 1, 0);
    sub_10122040(&unk_10695BA4, "m_bClientSideFrameReset", 1025, 1, 1, 1, 0);
    sub_10122040(&unk_10695BF0, "m_nNewSequenceParity", 1028, 4, 3, 1025, 0);
    sub_10122040(&unk_10695C3C, "m_nResetEventsParity", 1032, 4, 3, 1025, 0);
    sub_10122040(&unk_10695C88, "m_nMuzzleFlashParity", 1036, 1, 2, 1025, 0);
    sub_10234730(&unk_10695CD4, "m_hLightingOrigin", 1040, 4, -1, sub_10234830);
    sub_10234730(&unk_10695D20, "m_hLightingOriginRelative", 1044, 4, -1, sub_10234830);
    sub_101221E0(&unk_10695D6C, "serveranimdata", 0, &unk_10696044, sub_100D9880);
    sub_10121D30((int)&unk_10695DB8, (int)"m_fadeMinDist", 1064, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_10695E04, (int)"m_fadeMaxDist", 1068, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_10695E50, (int)"m_flFadeScale", 1072, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_1046F7F0);
  }
  sub_10121D00(&unk_10695814, 22, off_1060D1B0[0]);
  return 1;
}
