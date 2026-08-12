int __cdecl sub_10290BE0(int a1, float a2, float *a3, float *a4, int a5, int a6)
{
  unsigned int v6; // ecx
  float *v7; // eax
  unsigned int v8; // ecx
  float *v9; // eax

  v6 = 12;
  v7 = a3;
  while ( *(_DWORD *)((char *)v7 + (char *)&flt_106D9AD4 - (char *)a3) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_6;
  }
  flt_106D9AD4 = *a3;
  flt_106D9AD8 = a3[1];
  flt_106D9ADC = a3[2];
LABEL_6:
  v8 = 12;
  v9 = a4;
  while ( *(_DWORD *)((char *)v9 + (char *)&flt_106D9AE0 - (char *)a4) == *(_DWORD *)v9 )
  {
    v8 -= 4;
    ++v9;
    if ( v8 < 4 )
      goto LABEL_11;
  }
  flt_106D9AE0 = *a4;
  flt_106D9AE4 = a4[1];
  flt_106D9AE8 = a4[2];
LABEL_11:
  if ( dword_106D9AEC != a5 )
    dword_106D9AEC = a5;
  if ( dword_106D9AF0 != a6 )
    dword_106D9AF0 = a6;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D9AC8, a1, a2);
}
