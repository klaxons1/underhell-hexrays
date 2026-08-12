int *sub_10128800()
{
  if ( (dword_1069DCC8 & 1) == 0 )
  {
    dword_1069DCC8 |= 1u;
    dword_1069DCAC = (int)"CEnvQuadraticBeam";
    dword_1069DCB4 = 0;
    dword_1069DCB8 = 0;
    dword_1069DCBC = 0;
    dword_1069DCC0 = 0;
    dword_1069DCC4 = 0;
    dword_1069DCB0 = 17;
    atexit(sub_10470AC0);
  }
  dword_106199EC = (int)&dword_1060F348;
  dword_106199E4 = 4;
  dword_106199E0 = (int)&unk_1061B254;
  return &dword_106199E0;
}
