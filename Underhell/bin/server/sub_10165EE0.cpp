int *sub_10165EE0()
{
  if ( (dword_106B4E04 & 1) == 0 )
  {
    dword_106B4E04 |= 1u;
    dword_106B4DE8 = (int)"CNPC_Furniture";
    dword_106B4DF0 = 0;
    dword_106B4DF4 = 0;
    dword_106B4DF8 = 0;
    dword_106B4DFC = 0;
    dword_106B4E00 = 0;
    dword_106B4DEC = 14;
    atexit(sub_10471B60);
  }
  dword_10628998 = (int)&dword_105FD568;
  dword_10628990 = 3;
  dword_1062898C = (int)asc_10628A6C;
  return &dword_1062898C;
}
