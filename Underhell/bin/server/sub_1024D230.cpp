int sub_1024D230()
{
  if ( (dword_106C714C & 1) == 0 )
  {
    dword_106C714C |= 1u;
    sub_10122040((int)&unk_106C6F38, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106C6F84, (int)"m_clrRender", 116, 4, 32, 1, 0);
    sub_10121E50((int)&unk_106C6FD0, (int)"m_vecOrigin", 716, 12, 19, 0, -16384.0, 16384.0, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106C701C, (int)"m_angRotation[0]", -728, 4, 19, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C7068, (int)"m_angRotation[1]", -732, 4, 19, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C70B4, (int)"m_angRotation[2]", -736, 4, 19, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10234730((int)&unk_106C7100, (int)"moveparent", 308, 4, -1, sub_10234830);
    atexit(sub_104745F0);
  }
  sub_10121D00(byte_106C723C, (int)&unk_106C6F84, 6, (int)off_1064FF88);
  return 1;
}
