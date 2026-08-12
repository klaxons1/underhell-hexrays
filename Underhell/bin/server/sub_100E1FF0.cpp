int *sub_100E1FF0()
{
  if ( (dword_106982DC & 1) == 0 )
  {
    dword_106982DC |= 1u;
    dword_106982C0 = (int)"thinkfunc_t";
    dword_106982C8 = 0;
    dword_106982CC = 0;
    dword_106982D0 = 0;
    dword_106982D4 = 0;
    dword_106982D8 = 0;
    dword_106982C4 = 11;
    atexit(sub_1046FE40);
  }
  dword_1060F324 = 0;
  dword_1060F31C = 3;
  dword_1060F318 = (int)&unk_1060F614;
  return &dword_1060F318;
}
