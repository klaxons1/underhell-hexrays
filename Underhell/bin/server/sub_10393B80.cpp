int *sub_10393B80()
{
  if ( (dword_106EA224 & 1) == 0 )
  {
    dword_106EA224 |= 1u;
    dword_106EA208 = (int)"CNPC_Mossman";
    dword_106EA210 = 0;
    dword_106EA214 = 0;
    dword_106EA218 = 0;
    dword_106EA21C = 0;
    dword_106EA220 = 0;
    dword_106EA20C = 12;
    atexit(sub_10478860);
  }
  dword_10677550 = (int)&dword_10609D78;
  dword_10677548 = 1;
  dword_10677544 = (int)&unk_106EA1D4;
  return &dword_10677544;
}
