int sub_101AB9E0()
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

  if ( (dword_106B9B34 & 1) == 0 )
  {
    dword_106B9B34 |= 1u;
    sub_10122040((int)&unk_106B97F0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121E50((int)&unk_106B983C, (int)"m_vecOrigin", 716, 12, -1, 1026, 0.0, -121121.12, (int)sub_100D9930);
    sub_10234730(&unk_106B9888, "m_hOwnerEntity", 412, 4, -1, sub_10234830);
    sub_10234730(&unk_106B98D4, "moveparent", 308, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106B9920, (int)"m_iParentAttachment", 305, 1, 6, 1, 0);
    sub_10121FA0((int)&unk_106B996C, (int)"m_angRotation", 728, 12, 13, 1024, (int)sub_100D99A0);
    sub_10122040((int)&unk_106B99B8, (int)"m_iEffectIndex", 812, 4, 10, 1, 0);
    sub_10234700(&unk_106B9A04, "m_bActive", 808, 1);
    sub_10121D30((int)&unk_106B9A50, (int)"m_flStartTime", 816, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10234730(&v1, "m_hControlPointEnts", 1072, 4, -1, sub_10234830);
    sub_101223F0(
      (int)&unk_106B9A9C,
      (int)"m_hControlPointEnts",
      1072,
      4,
      63,
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
    sub_10122040((int)&v1, (int)"m_iControlPointParents", 1324, 1, 3, 1, 0);
    sub_101223F0(
      (int)&unk_106B9AE8,
      (int)"m_iControlPointParents",
      1324,
      1,
      63,
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
    atexit(sub_10472BE0);
  }
  sub_10121D00(byte_106B9B6C, (int)&unk_106B983C, 10, (int)off_10633F98[0]);
  return 1;
}
