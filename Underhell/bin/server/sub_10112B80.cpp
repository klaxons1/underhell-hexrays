int *sub_10112B80()
{
  if ( (dword_1069B48C & 1) == 0 )
  {
    dword_1069B48C |= 1u;
    dword_1069B470 = (int)"CCollisionProperty";
    dword_1069B478 = 0;
    dword_1069B47C = 0;
    dword_1069B480 = 0;
    dword_1069B484 = 0;
    dword_1069B488 = 0;
    dword_1069B474 = 18;
    atexit(sub_10470610);
  }
  dword_106153BC = 0;
  dword_106153B4 = 11;
  dword_106153B0 = (int)&unk_1061545C;
  return &dword_106153B0;
}
