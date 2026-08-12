int sub_1028BC70()
{
  if ( (dword_106D68A8 & 1) == 0 )
  {
    dword_106D68A8 |= 1u;
    sub_10122040((int)&unk_106D65B0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121E50((int)&unk_106D65FC, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D6648, (int)"m_vecDirection", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D6694, (int)&unk_1053B95C, 44, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D66E0, (int)&unk_1053B958, 48, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D672C, (int)&unk_1053B954, 52, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D6778, (int)"a", 56, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D67C4, (int)"m_nSprayModel", 36, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D6810, (int)"m_nDropModel", 40, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D685C, (int)"m_nSize", 60, 4, 8, 1, 0);
    atexit(sub_10475BD0);
  }
  sub_10121D00(byte_106D68C4, (int)&unk_106D65FC, 9, (int)off_1065C804);
  return 1;
}
