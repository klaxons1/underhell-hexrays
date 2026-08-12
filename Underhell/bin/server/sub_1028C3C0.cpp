int __cdecl sub_1028C3C0(int a1, float a2, float *a3, float *a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // ecx
  float *v10; // eax
  unsigned int v11; // ecx
  float *v12; // eax

  v9 = 12;
  v10 = a3;
  while ( *(_DWORD *)((char *)v10 + (char *)&flt_106D6BBC - (char *)a3) == *(_DWORD *)v10 )
  {
    v9 -= 4;
    ++v10;
    if ( v9 < 4 )
      goto LABEL_6;
  }
  flt_106D6BBC = *a3;
  flt_106D6BC0 = a3[1];
  flt_106D6BC4 = a3[2];
LABEL_6:
  v11 = 12;
  v12 = a4;
  while ( *(_DWORD *)((char *)v12 + (char *)&flt_106D6BC8 - (char *)a4) == *(_DWORD *)v12 )
  {
    v11 -= 4;
    ++v12;
    if ( v11 < 4 )
      goto LABEL_11;
  }
  flt_106D6BC8 = *a4;
  flt_106D6BCC = a4[1];
  flt_106D6BD0 = a4[2];
LABEL_11:
  if ( dword_106D6BD4 != a5 )
    dword_106D6BD4 = a5;
  if ( dword_106D6BD8 != a6 )
    dword_106D6BD8 = a6;
  if ( dword_106D6BDC != a7 )
    dword_106D6BDC = a7;
  if ( dword_106D6BE0 != a8 )
    dword_106D6BE0 = a8;
  if ( dword_106D6BE4 != a9 )
    dword_106D6BE4 = a9;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D6BB0, a1, a2);
}
