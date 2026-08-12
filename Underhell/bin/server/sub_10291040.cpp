int __cdecl sub_10291040(int a1, float a2, int a3, int a4, float *a5, float *a6, float *a7, int a8, int a9)
{
  unsigned int v9; // ecx
  float *v10; // eax
  unsigned int v11; // ecx
  float *v12; // eax
  unsigned int v13; // ecx
  float *v14; // eax

  v9 = 12;
  v10 = a5;
  while ( *(_DWORD *)((char *)v10 + (char *)&flt_106DA02C - (char *)a5) == *(_DWORD *)v10 )
  {
    v9 -= 4;
    ++v10;
    if ( v9 < 4 )
      goto LABEL_6;
  }
  flt_106DA02C = *a5;
  flt_106DA030 = a5[1];
  flt_106DA034 = a5[2];
LABEL_6:
  v11 = 12;
  v12 = a6;
  while ( *(_DWORD *)((char *)v12 + (char *)&flt_106DA038 - (char *)a6) == *(_DWORD *)v12 )
  {
    v11 -= 4;
    ++v12;
    if ( v11 < 4 )
      goto LABEL_11;
  }
  flt_106DA038 = *a6;
  flt_106DA03C = a6[1];
  flt_106DA040 = a6[2];
LABEL_11:
  v13 = 12;
  v14 = a7;
  while ( *(_DWORD *)((char *)v14 + (char *)&flt_106DA044 - (char *)a7) == *(_DWORD *)v14 )
  {
    v13 -= 4;
    ++v14;
    if ( v13 < 4 )
      goto LABEL_16;
  }
  flt_106DA044 = *a7;
  flt_106DA048 = a7[1];
  flt_106DA04C = a7[2];
LABEL_16:
  if ( dword_106DA050 != a3 )
    dword_106DA050 = a3;
  if ( dword_106DA054 != a4 )
    dword_106DA054 = a4;
  if ( dword_106DA058 != a8 )
    dword_106DA058 = a8;
  if ( dword_106DA05C != a9 )
    dword_106DA05C = a9;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DA020, a1, a2);
}
