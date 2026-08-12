int *sub_101CACF0()
{
  if ( (dword_106BA93C & 1) == 0 )
  {
    dword_106BA93C |= 1u;
    dword_106BA920 = (int)"CPhysicsEntitySolver";
    dword_106BA928 = 0;
    dword_106BA92C = 0;
    dword_106BA930 = 0;
    dword_106BA934 = 0;
    dword_106BA938 = 0;
    dword_106BA924 = 20;
    atexit(sub_104730A0);
  }
  dword_106389B0 = (int)&dword_1060F348;
  dword_106389A8 = 5;
  dword_106389A4 = (int)&unk_10638C54;
  return &dword_106389A4;
}
