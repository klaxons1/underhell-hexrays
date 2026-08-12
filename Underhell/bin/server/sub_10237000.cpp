int sub_10237000()
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

  if ( (dword_106C4E10 & 1) == 0 )
  {
    dword_106C4E10 |= 1u;
    sub_10122040((int)&unk_106C4B18, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C4B64,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700((int)&unk_106C4BB0, (int)"m_bEnabled", 800, 1);
    sub_10122120((int)&unk_106C4BFC, (int)"m_szDisplayText", 801, 128, 0, (int)sub_10121B10);
    sub_10122120((int)&unk_106C4C48, (int)"m_szSlideshowDirectory", 929, 128, 0, (int)sub_10121B10);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10122040((int)&v1, (int)"m_chCurrentSlideLists", 1084, 1, 8, 1, 0);
    sub_101223F0(
      (int)&unk_106C4C94,
      (int)"m_chCurrentSlideLists",
      1084,
      1,
      16,
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
    sub_10121D30((int)&unk_106C4CE0, (int)"m_fMinSlideTime", 1100, 4, 11, 0, 0.0, 20.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C4D2C, (int)"m_fMaxSlideTime", 1104, 4, 11, 0, 0.0, 20.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106C4D78, (int)"m_iCycleType", 1108, 4, 2, 1, 0);
    sub_10234700((int)&unk_106C4DC4, (int)"m_bNoListRepeats", 1112, 1);
    atexit(sub_10473F60);
  }
  sub_10121D00(byte_106C4E4C, (int)&unk_106C4B64, 9, (int)off_1064B0A8[0]);
  return 1;
}
