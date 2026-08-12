int *sub_1013E610()
{
  if ( (dword_106B0324 & 1) == 0 )
  {
    dword_106B0324 |= 1u;
    dword_106B0308 = (int)"CFilterMultiple";
    dword_106B0310 = 0;
    dword_106B0314 = 0;
    dword_106B0318 = 0;
    dword_106B031C = 0;
    dword_106B0320 = 0;
    dword_106B030C = 15;
    atexit(sub_10471020);
  }
  dword_10622320 = (int)&dword_106222FC;
  dword_10622318 = 7;
  dword_10622314 = (int)&unk_10622784;
  return &dword_10622314;
}
