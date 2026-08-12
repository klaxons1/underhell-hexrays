int *sub_10129000()
{
  if ( (dword_10438240 & 1) == 0 )
  {
    dword_10438240 |= 1u;
    dword_10438224 = (int)"CMultiDamage";
    dword_1043822C = 0;
    dword_10438230 = 0;
    dword_10438234 = 0;
    dword_10438238 = 0;
    dword_1043823C = 0;
    dword_10438228 = 12;
    atexit(sub_102CB940);
  }
  dword_103E6954 = (int)&dword_103E6930;
  dword_103E694C = 1;
  dword_103E6948 = (int)&unk_103E6CC4;
  return &dword_103E6948;
}
