void __stdcall sub_1012D9E0(int a1, int a2, int a3)
{
  if ( (*(_BYTE *)(a1 + 252) & 1) == 0 && ((a3 ^ a2) & 0x10000) != 0 )
  {
    if ( (a3 & (a3 ^ a2) & 0x10000) != 0 )
      sub_1012D670((int *)&off_1061BE24, a1);
    if ( (a2 & (a3 ^ a2) & 0x10000) != 0 )
      sub_1012CDA0(&off_1061BE24, a1);
  }
}
