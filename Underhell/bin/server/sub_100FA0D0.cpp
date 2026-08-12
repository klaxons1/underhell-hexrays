int sub_100FA0D0()
{
  int v0; // eax
  char v2; // [esp-44h] [ebp-50h] BYREF
  int v3; // [esp-40h] [ebp-4Ch]
  int v4; // [esp-3Ch] [ebp-48h]
  int v5; // [esp-38h] [ebp-44h]
  float v6; // [esp-34h] [ebp-40h]
  float v7; // [esp-30h] [ebp-3Ch]
  int v8; // [esp-2Ch] [ebp-38h]
  int v9; // [esp-28h] [ebp-34h]
  int v10; // [esp-24h] [ebp-30h]
  int v11; // [esp-20h] [ebp-2Ch]
  int v12; // [esp-1Ch] [ebp-28h]
  int v13; // [esp-18h] [ebp-24h]
  float v14; // [esp-14h] [ebp-20h]
  int v15; // [esp-10h] [ebp-1Ch]
  int v16; // [esp-Ch] [ebp-18h]
  int v17; // [esp-8h] [ebp-14h]
  int v18; // [esp-4h] [ebp-10h]
  int v19; // [esp+0h] [ebp-Ch]
  int v20; // [esp+4h] [ebp-8h]
  int (__cdecl *v21)(int, int, int); // [esp+8h] [ebp-4h]

  if ( (dword_1069A098 & 1) == 0 )
  {
    dword_1069A098 |= 1u;
    sub_10122040(&unk_106998E0, "should_never_see_this", 0, 4, -1, 0, 0);
    v0 = sub_10421D60(6);
    sub_10122040(&unk_1069992C, "m_nBeamType", 824, 4, v0 + 1, 1, 0);
    sub_10122040(&unk_10699978, "m_nBeamFlags", 828, 4, 17, 1, 0);
    sub_10122040(&unk_106999C4, "m_nNumBeamEnts", 816, 4, 5, 1, 0);
    v21 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10234730(&v2, "m_hAttachEntity", 832, 4, -1, sub_10234830);
    sub_101223F0(
      (int)&unk_10699A10,
      (char)"m_hAttachEntity",
      832,
      4,
      10,
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
      v20,
      (int)v21);
    v21 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10122040(&v2, "m_nAttachIndex", 872, 4, 5, 1, 0);
    sub_101223F0(
      (int)&unk_10699A5C,
      (char)"m_nAttachIndex",
      872,
      4,
      10,
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
      v20,
      (int)v21);
    sub_10122040(&unk_10699AA8, "m_nHaloIndex", 820, 4, 16, 1, 0);
    sub_10121D30((int)&unk_10699AF4, (int)"m_fHaloScale", 924, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_10699B40, (int)"m_fWidth", 912, 4, 10, 16, 0.0, 102.3, (int)sub_10121A20);
    sub_10121D30((int)&unk_10699B8C, (int)"m_fEndWidth", 916, 4, 10, 16, 0.0, 102.3, (int)sub_10121A20);
    sub_10121D30((int)&unk_10699BD8, (int)"m_fFadeLength", 920, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_10699C24, (int)"m_fAmplitude", 928, 4, 8, 8, 0.0, 64.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_10699C70, (int)"m_fStartFrame", 932, 4, 8, 8, 0.0, 256.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_10699CBC, (int)"m_fSpeed", 936, 4, 8, 4, 0.0, 100.0, (int)sub_10121A20);
    sub_10122040(&unk_10699D08, "m_nRenderFX", 112, 1, 8, 1, 0);
    sub_10122040(&unk_10699D54, "m_nRenderMode", 113, 1, 8, 1, 0);
    sub_10121D30((int)&unk_10699DA0, (int)"m_flFrameRate", 800, 4, 10, 16, -25.0, 25.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_10699DEC, (int)"m_flHDRColorScale", 804, 4, 0, 4, 0.0, 100.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_10699E38, (int)"m_flFrame", 944, 4, 20, 1032, 0.0, 256.0, (int)sub_10121A20);
    sub_10122040(&unk_10699E84, "m_clrRender", 116, 4, 32, 1025, 0);
    sub_10121E50((int)&unk_10699ED0, (int)"m_vecEndPos", 948, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040(&unk_10699F1C, "m_nModelIndex", 114, 2, 11, 0, 0);
    sub_10121E50((int)&unk_10699F68, (int)"m_vecOrigin", 716, 12, 19, 1024, -16384.0, 16384.0, (int)sub_10121AA0);
    sub_10234730(&unk_10699FB4, "moveparent", 308, 4, -1, sub_10234830);
    sub_10122040(&unk_1069A000, "m_nMinDXLevel", 940, 4, 8, 1, 0);
    sub_101221E0(&unk_1069A04C, "beampredictable_id", 0, &unk_1069A0D8, sub_100FA030);
    atexit(sub_10470170);
  }
  sub_10121D00(&unk_1069992C, 25, off_10612A14);
  return 1;
}
