int *sub_1013E690()
{
  if ( (dword_106B0344 & 1) == 0 )
  {
    dword_106B0344 |= 1u;
    dword_106B0328 = (int)"CFilterName";
    dword_106B0330 = 0;
    dword_106B0334 = 0;
    dword_106B0338 = 0;
    dword_106B033C = 0;
    dword_106B0340 = 0;
    dword_106B032C = 11;
    atexit(sub_10471030);
  }
  dword_10622338 = (int)&dword_106222FC;
  dword_10622330 = 1;
  dword_1062232C = (int)&unk_10622924;
  return &dword_1062232C;
}
