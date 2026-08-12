int *sub_100797E0()
{
  if ( (dword_104138A8 & 1) == 0 )
  {
    dword_104138A8 |= 1u;
    dword_10413888 = (int)&CClassMap::`vftable';
    dword_10413890 = 0;
    dword_10413894 = 0;
    dword_10413898 = 0;
    dword_1041389C = 0xFFFF;
    dword_104138A0 = -1;
    dword_104138A4 = 0;
    dword_1041388C = (int)sub_10002020;
    atexit(sub_102C91F0);
  }
  return &dword_10413888;
}
