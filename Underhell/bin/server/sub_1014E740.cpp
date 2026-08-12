int __cdecl sub_1014E740(int a1, float a2, float *a3, float *a4, int a5, int a6)
{
  unsigned int v6; // ecx
  float *v7; // eax
  unsigned int v8; // ecx
  float *v9; // eax

  v6 = 12;
  v7 = a3;
  while ( *(_DWORD *)((char *)v7 + (char *)&flt_106B21D0 - (char *)a3) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_6;
  }
  flt_106B21D0 = *a3;
  flt_106B21D4 = a3[1];
  flt_106B21D8 = a3[2];
LABEL_6:
  v8 = 12;
  v9 = a4;
  while ( *(_DWORD *)((char *)v9 + (char *)&flt_106B21E4 - (char *)a4) == *(_DWORD *)v9 )
  {
    v8 -= 4;
    ++v9;
    if ( v8 < 4 )
      goto LABEL_11;
  }
  flt_106B21E4 = *a4;
  flt_106B21E8 = a4[1];
  flt_106B21EC = a4[2];
LABEL_11:
  if ( dword_106B21DC != a5 )
    dword_106B21DC = a5;
  if ( dword_106B21E0 != a6 )
    dword_106B21E0 = a6;
  return sub_102823A0(a1, a2);
}
