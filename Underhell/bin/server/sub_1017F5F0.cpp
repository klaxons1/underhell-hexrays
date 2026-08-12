int *sub_1017F5F0()
{
  if ( (dword_106B64C8 & 1) == 0 )
  {
    dword_106B64C8 |= 1u;
    dword_106B64AC = (int)"CEnvGlobal";
    dword_106B64B4 = 0;
    dword_106B64B8 = 0;
    dword_106B64BC = 0;
    dword_106B64C0 = 0;
    dword_106B64C4 = 0;
    dword_106B64B0 = 10;
    atexit(sub_10471F80);
  }
  dword_1062CDB8 = (int)&dword_1060F348;
  if ( (dword_106B64C8 & 2) == 0 )
  {
    dword_106B64C8 |= 2u;
    dword_1062E094 = (int)off_10614A2C;
    dword_1062E098 = 0;
    dword_1062E09C = 0;
    dword_1062E0A0 = 0;
    dword_1062E0A4 = 0;
    dword_1062E0A8 = 0;
    dword_1062E0AC = 0;
  }
  dword_1062CDB0 = 15;
  dword_1062CDAC = (int)&unk_1062DDA4;
  return &dword_1062CDAC;
}
