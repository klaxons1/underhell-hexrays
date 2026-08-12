int sub_101E9B10()
{
  if ( (dword_106BCF80 & 1) == 0 )
  {
    dword_106BCF80 |= 1u;
    sub_10122040((int)&unk_106BCEE8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106BCF34, (int)"deadflag", 4, 1, 1, 1, 0);
    atexit(sub_10473550);
  }
  sub_10121D00(byte_106BBEA0, (int)&unk_106BCF34, 1, (int)off_1063C82C);
  return 1;
}
