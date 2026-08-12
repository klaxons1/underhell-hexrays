int *sub_101281E0()
{
  if ( (dword_1069DBE8 & 1) == 0 )
  {
    dword_1069DBE8 |= 1u;
    dword_1069DBCC = (int)"CPrecipitation";
    dword_1069DBD4 = 0;
    dword_1069DBD8 = 0;
    dword_1069DBDC = 0;
    dword_1069DBE0 = 0;
    dword_1069DBE4 = 0;
    dword_1069DBD0 = 14;
    atexit(sub_10470A50);
  }
  dword_10619938 = (int)&dword_1060F348;
  dword_10619930 = 1;
  dword_1061992C = (int)&unk_1061A7F4;
  return &dword_1061992C;
}
