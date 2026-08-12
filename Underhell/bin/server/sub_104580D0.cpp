int sub_104580D0()
{
  int result; // eax

  if ( (dword_106B3EF4 & 1) == 0 )
  {
    dword_106B3EF4 |= 1u;
    sub_10122040((int)&unk_106B3EA8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    atexit(sub_104719F0);
  }
  result = sub_10121D00(byte_106B3E00, (int)&dword_106B3EF4, 0, (int)off_10627F84);
  dword_106B3E14 = 1;
  return result;
}
