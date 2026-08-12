int sub_10116780()
{
  if ( (dword_1069BC5C & 1) == 0 )
  {
    dword_1069BC5C |= 1u;
    sub_10122040(&unk_1069BB78, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121D30((int)&unk_1069BBC4, (int)"m_Weight", 1096, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122120(&unk_1069BC10, "m_lookupFilename", 1104, 260, 0, sub_10121B10);
    atexit(sub_10470670);
  }
  sub_10121D00(&unk_1069BBC4, 2, off_106157BC[0]);
  return 1;
}
