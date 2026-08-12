int sub_101FEEC0()
{
  char v1; // [esp-44h] [ebp-50h] BYREF
  int v2; // [esp-40h] [ebp-4Ch]
  int v3; // [esp-3Ch] [ebp-48h]
  int v4; // [esp-38h] [ebp-44h]
  float v5; // [esp-34h] [ebp-40h]
  float v6; // [esp-30h] [ebp-3Ch]
  int v7; // [esp-2Ch] [ebp-38h]
  int v8; // [esp-28h] [ebp-34h]
  int v9; // [esp-24h] [ebp-30h]
  int v10; // [esp-20h] [ebp-2Ch]
  int v11; // [esp-1Ch] [ebp-28h]
  int v12; // [esp-18h] [ebp-24h]
  float v13; // [esp-14h] [ebp-20h]
  int v14; // [esp-10h] [ebp-1Ch]
  int v15; // [esp-Ch] [ebp-18h]
  int v16; // [esp-8h] [ebp-14h]
  int v17; // [esp-4h] [ebp-10h]
  int v18; // [esp+0h] [ebp-Ch]
  int v19; // [esp+4h] [ebp-8h]
  int (__cdecl *v20)(int, int, int); // [esp+8h] [ebp-4h]

  if ( (dword_106C1934 & 1) == 0 )
  {
    dword_106C1934 |= 1u;
    sub_10122040((int)&unk_106C1558, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C15A4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10234730(&v1, "m_hProps", 800, 4, -1, sub_10234830);
    sub_101223F0(
      (int)&unk_106C15F0,
      (int)"m_hProps",
      800,
      4,
      4,
      v1,
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
      v20);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10122040((int)&v1, (int)"m_chPoseIndex", 816, 1, 5, 1, 0);
    sub_101223F0(
      (int)&unk_106C163C,
      (int)"m_chPoseIndex",
      816,
      1,
      4,
      v1,
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
      v20);
    sub_10234700(&unk_106C1688, "m_bPoseValueParity", 821, 1);
    sub_10121D30((int)&unk_106C16D4, (int)"m_fPoseValue", 832, 4, 11, 0, 0.0, 1.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C1720, (int)"m_fInterpolationTime", 836, 4, 11, 0, 0.0, 10.0, (int)sub_10121A20);
    sub_10234700(&unk_106C176C, "m_bInterpolationWrap", 840, 1);
    sub_10121D30((int)&unk_106C17B8, (int)"m_fCycleFrequency", 844, 4, 11, 0, -10.0, 10.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106C1804, (int)"m_nFModType", 848, 4, 3, 1, 0);
    sub_10121D30((int)&unk_106C1850, (int)"m_fFModTimeOffset", 852, 4, 11, 0, -1.0, 1.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C189C, (int)"m_fFModRate", 856, 4, 11, 0, -10.0, 10.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C18E8, (int)"m_fFModAmplitude", 860, 4, 11, 0, 0.0, 10.0, (int)sub_10121A20);
    atexit(sub_104737C0);
  }
  sub_10121D00(byte_106C1970, (int)&unk_106C15A4, 12, (int)off_10640718[0]);
  return 1;
}
