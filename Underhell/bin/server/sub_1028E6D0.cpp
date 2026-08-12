int __cdecl sub_1028E6D0(int a1, float a2, float *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  unsigned int v10; // ecx
  float *v11; // eax

  v10 = 12;
  v11 = a3;
  while ( *(_DWORD *)((char *)v11 + (char *)&flt_106D7FCC - (char *)a3) == *(_DWORD *)v11 )
  {
    v10 -= 4;
    ++v11;
    if ( v10 < 4 )
      goto LABEL_6;
  }
  flt_106D7FCC = *a3;
  flt_106D7FD0 = a3[1];
  flt_106D7FD4 = a3[2];
LABEL_6:
  if ( dword_106D7FDC != a4 )
    dword_106D7FDC = a4;
  if ( dword_106D7FE0 != a5 )
    dword_106D7FE0 = a5;
  if ( dword_106D7FE4 != a6 )
    dword_106D7FE4 = a6;
  if ( dword_106D7FE8 != a7 )
    dword_106D7FE8 = a7;
  if ( dword_106D7FD8 != a8 )
    dword_106D7FD8 = a8;
  if ( dword_106D7FEC != a9 )
    dword_106D7FEC = a9;
  if ( dword_106D7FF0 != a10 )
    dword_106D7FF0 = a10;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D7FC0, a1, a2);
}
