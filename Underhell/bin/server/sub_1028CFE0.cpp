int __cdecl sub_1028CFE0(int a1, float a2, float *a3, int a4, int a5)
{
  unsigned int v5; // ecx
  float *v6; // eax

  v5 = 12;
  v6 = a3;
  while ( *(_DWORD *)((char *)v6 + (char *)&flt_106D7200 - (char *)a3) == *(_DWORD *)v6 )
  {
    v5 -= 4;
    ++v6;
    if ( v5 < 4 )
      goto LABEL_6;
  }
  flt_106D7200 = *a3;
  flt_106D7204 = a3[1];
  flt_106D7208 = a3[2];
LABEL_6:
  if ( dword_106D720C != a4 )
    dword_106D720C = a4;
  if ( dword_106D7210 != a5 )
    dword_106D7210 = a5;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D71F4, a1, a2);
}
