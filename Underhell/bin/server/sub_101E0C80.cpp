int *sub_101E0C80()
{
  if ( (dword_106BB1E0 & 1) == 0 )
  {
    dword_106BB1E0 |= 1u;
    dword_106BB1C4 = (int)"CSimplePhysicsProp";
    dword_106BB1CC = 0;
    dword_106BB1D0 = 0;
    dword_106BB1D4 = 0;
    dword_106BB1D8 = 0;
    dword_106BB1DC = 0;
    dword_106BB1C8 = 18;
    atexit(sub_10473240);
  }
  dword_1063B098 = (int)&dword_1060D0FC;
  if ( (dword_106BB1E0 & 2) == 0 )
  {
    dword_106BB1E0 |= 2u;
    dword_1063BF9C = (int)off_10614A2C;
    dword_1063BFA0 = 0;
    dword_1063BFA4 = 0;
    dword_1063BFA8 = 0;
    dword_1063BFAC = 0;
    dword_1063BFB0 = 0;
    dword_1063BFB4 = 0;
  }
  dword_1063B090 = 1;
  dword_1063B08C = (int)&unk_1063BF84;
  return &dword_1063B08C;
}
