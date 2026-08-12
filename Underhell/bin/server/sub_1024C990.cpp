int sub_1024C990()
{
  if ( (dword_106C6D40 & 1) == 0 )
  {
    dword_106C6D40 |= 1u;
    sub_10122040((int)&unk_106C6CA8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106C6CF4, (int)"m_WithProxy", 800, 4, -1, 0, 0);
    atexit(sub_10474530);
  }
  sub_10121D00(byte_106C6C18, (int)&unk_106C6CF4, 1, (int)off_1064FEE0[0]);
  return 1;
}
