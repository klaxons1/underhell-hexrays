int sub_1045F0A0()
{
  int result; // eax

  if ( (dword_106C60B4 & 1) == 0 )
  {
    dword_106C60B4 |= 1u;
    sub_10122040((int)&unk_106C6068, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    atexit(sub_10474340);
  }
  result = sub_10121D00(byte_106C61F4, (int)&dword_106C60B4, 0, (int)off_1064ED04[0]);
  dword_106C6208 = 1;
  return result;
}
