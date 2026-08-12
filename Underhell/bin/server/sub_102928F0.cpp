int __cdecl sub_102928F0(int a1, float a2, float *a3, int a4, int a5, int a6)
{
  unsigned int v6; // ecx
  float *v7; // eax

  v6 = 12;
  v7 = a3;
  while ( *(_DWORD *)((char *)v7 + (char *)&flt_106DAB8C - (char *)a3) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_6;
  }
  flt_106DAB8C = *a3;
  flt_106DAB90 = a3[1];
  flt_106DAB94 = a3[2];
LABEL_6:
  if ( dword_106DAB98 != a4 )
    dword_106DAB98 = a4;
  if ( dword_106DAB9C != a5 )
    dword_106DAB9C = a5;
  if ( dword_106DABA0 != a6 )
    dword_106DABA0 = a6;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DAB80, a1, a2);
}
