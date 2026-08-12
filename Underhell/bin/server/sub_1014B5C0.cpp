int sub_1014B5C0()
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

  if ( (dword_106B1AB4 & 1) == 0 )
  {
    dword_106B1AB4 |= 1u;
    sub_10122040((int)&unk_106B1770, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B17BC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106B1808, (int)"m_nNumWide", 976, 4, 8, 1, 0);
    sub_10122040((int)&unk_106B1854, (int)"m_nNumHigh", 980, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106B18A0, (int)"m_flPanelWidth", 984, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B18EC, (int)"m_flPanelHeight", 988, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106B1938, (int)"m_vNormal", 992, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106B1984, (int)"m_vCorner", 1004, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106B19D0, (int)"m_bIsBroken", 1016, 1, 1, 1, 0);
    sub_10122040((int)&unk_106B1A1C, (int)"m_nSurfaceType", 1020, 4, 2, 1, 0);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10122040((int)&v1, (int)"m_RawPanelBitVec", 2108, 1, 1, 1, 0);
    sub_101223F0(
      (int)&unk_106B1A68,
      (int)"m_RawPanelBitVec",
      2108,
      1,
      256,
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
    atexit(sub_104713C0);
  }
  sub_10121D00(byte_106B1BB0, (int)&unk_106B17BC, 10, (int)off_10625E34[0]);
  return 1;
}
