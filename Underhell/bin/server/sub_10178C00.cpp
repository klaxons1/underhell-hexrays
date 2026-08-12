int *sub_10178C00()
{
  if ( (dword_106B62B4 & 1) == 0 )
  {
    dword_106B62B4 |= 1u;
    dword_106B6298 = (int)"CLightGlow";
    dword_106B62A0 = 0;
    dword_106B62A4 = 0;
    dword_106B62A8 = 0;
    dword_106B62AC = 0;
    dword_106B62B0 = 0;
    dword_106B629C = 10;
    atexit(sub_10471EC0);
  }
  dword_1062BDC8 = (int)&dword_1060F348;
  dword_1062BDC0 = 8;
  dword_1062BDBC = (int)&unk_1062BE5C;
  return &dword_1062BDBC;
}
