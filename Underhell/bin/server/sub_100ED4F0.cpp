int sub_100ED4F0()
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

  if ( (dword_10698998 & 1) == 0 )
  {
    dword_10698998 |= 1u;
    sub_10122040(&unk_106986A0, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_106986EC,
      "baseclass",
      0,
      off_1060DB9C,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10121D30((int)v1, (int)"m_flexWeight", 1140, 4, 12, 8, 0.0, 1.0, (int)sub_10121A20);
    sub_101223F0(
      (int)&unk_10698738,
      (char)"m_flexWeight",
      1140,
      4,
      96,
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
    sub_10122040(&unk_10698784, "m_blinktoggle", 1536, 4, 1, 1, 0);
    sub_10121E50((int)&unk_106987D0, (int)"m_viewtarget", 1524, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_1069881C, (int)"m_vecViewOffset[0]", -744, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_10698868, (int)"m_vecViewOffset[1]", -748, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106988B4, (int)"m_vecViewOffset[2]", -752, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_10698900, (int)"m_vecLean", 1644, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_1069894C, (int)"m_vecShift", 1656, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_1046FFC0);
  }
  sub_10121D00(&unk_106986EC, 9, off_1061174C[0]);
  return 1;
}
