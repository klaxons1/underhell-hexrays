int sub_10461F50()
{
  int result; // eax

  if ( (dword_106D23BC & 1) == 0 )
  {
    dword_106D23BC |= 1u;
    sub_10122040((int)&unk_106D2370, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    atexit(sub_104754F0);
  }
  result = sub_10121D00(byte_106D2354, (int)&dword_106D23BC, 0, (int)off_1065A4D4[0]);
  dword_106D2368 = 1;
  return result;
}
