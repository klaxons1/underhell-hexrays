int __cdecl sub_1028C790(
        int a1,
        float a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v11; // ecx
  float *v12; // eax
  unsigned int v13; // ecx
  float *v14; // eax
  unsigned int v15; // ecx
  float *v16; // eax
  unsigned int v17; // ecx
  float *v18; // eax

  v11 = 12;
  v12 = a3;
  while ( *(_DWORD *)((char *)v12 + (char *)&flt_106D7004 - (char *)a3) == *(_DWORD *)v12 )
  {
    v11 -= 4;
    ++v12;
    if ( v11 < 4 )
      goto LABEL_6;
  }
  flt_106D7004 = *a3;
  flt_106D7008 = a3[1];
  flt_106D700C = a3[2];
LABEL_6:
  v13 = 12;
  v14 = a4;
  while ( *(_DWORD *)((char *)v14 + (char *)&flt_106D7028 - (char *)a4) == *(_DWORD *)v14 )
  {
    v13 -= 4;
    ++v14;
    if ( v13 < 4 )
      goto LABEL_11;
  }
  flt_106D7028 = *a4;
  flt_106D702C = a4[1];
  flt_106D7030 = a4[2];
LABEL_11:
  v15 = 12;
  v16 = a5;
  while ( *(_DWORD *)((char *)v16 + (char *)&flt_106D7010 - (char *)a5) == *(_DWORD *)v16 )
  {
    v15 -= 4;
    ++v16;
    if ( v15 < 4 )
      goto LABEL_16;
  }
  flt_106D7010 = *a5;
  flt_106D7014 = a5[1];
  flt_106D7018 = a5[2];
LABEL_16:
  v17 = 12;
  v18 = a6;
  while ( *(_DWORD *)((char *)v18 + (char *)&flt_106D701C - (char *)a6) == *(_DWORD *)v18 )
  {
    v17 -= 4;
    ++v18;
    if ( v17 < 4 )
      goto LABEL_21;
  }
  flt_106D701C = *a6;
  flt_106D7020 = a6[1];
  flt_106D7024 = a6[2];
LABEL_21:
  if ( dword_106D7038 != a7 )
    dword_106D7038 = a7;
  if ( dword_106D7034 != a8 )
    dword_106D7034 = a8;
  if ( dword_106D703C != a9 )
    dword_106D703C = a9;
  if ( dword_106D7040 != a10 )
    dword_106D7040 = a10;
  if ( dword_106D7044 != a11 )
    dword_106D7044 = a11;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D6FF8, a1, a2);
}
