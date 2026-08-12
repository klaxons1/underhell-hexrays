int sub_10217670()
{
  if ( (dword_106C2AB0 & 1) == 0 )
  {
    dword_106C2AB0 |= 1u;
    sub_10122040((int)&unk_106C2A18, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106C2A64, (int)"m_iCurrentMaxRagdollCount", 800, 4, 6, 0, 0);
    atexit(sub_10473BD0);
  }
  sub_10121D00(byte_106C2AE8, (int)&unk_106C2A64, 1, (int)off_10645C30[0]);
  return 1;
}
