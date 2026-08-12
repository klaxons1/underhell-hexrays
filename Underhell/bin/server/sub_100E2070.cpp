int *sub_100E2070()
{
  if ( (dword_106982FC & 1) == 0 )
  {
    dword_106982FC |= 1u;
    dword_106982E0 = (int)"ResponseContext_t";
    dword_106982E8 = 0;
    dword_106982EC = 0;
    dword_106982F0 = 0;
    dword_106982F4 = 0;
    dword_106982F8 = 0;
    dword_106982E4 = 17;
    atexit(sub_1046FE50);
  }
  dword_1060F33C = 0;
  dword_1060F334 = 3;
  dword_1060F330 = (int)&unk_1060F6E4;
  return &dword_1060F330;
}
