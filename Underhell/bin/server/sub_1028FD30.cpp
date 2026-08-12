int __cdecl sub_1028FD30(
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
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  unsigned int v16; // ecx
  float *v17; // eax
  unsigned int v18; // ecx
  float *v19; // eax
  unsigned int v20; // ecx
  float *v21; // eax
  unsigned int v22; // ecx
  float *v23; // eax

  v16 = 12;
  v17 = a3;
  while ( *(_DWORD *)((char *)v17 + (char *)&flt_106D9194 - (char *)a3) == *(_DWORD *)v17 )
  {
    v16 -= 4;
    ++v17;
    if ( v16 < 4 )
      goto LABEL_6;
  }
  flt_106D9194 = *a3;
  flt_106D9198 = a3[1];
  flt_106D919C = a3[2];
LABEL_6:
  v18 = 12;
  v19 = a4;
  while ( *(_DWORD *)((char *)v19 + (char *)&flt_106D91A0 - (char *)a4) == *(_DWORD *)v19 )
  {
    v18 -= 4;
    ++v19;
    if ( v18 < 4 )
      goto LABEL_11;
  }
  flt_106D91A0 = *a4;
  flt_106D91A4 = a4[1];
  flt_106D91A8 = a4[2];
LABEL_11:
  v20 = 12;
  v21 = a5;
  while ( *(_DWORD *)((char *)v21 + (char *)&flt_106D91AC - (char *)a5) == *(_DWORD *)v21 )
  {
    v20 -= 4;
    ++v21;
    if ( v20 < 4 )
      goto LABEL_16;
  }
  flt_106D91AC = *a5;
  flt_106D91B0 = a5[1];
  flt_106D91B4 = a5[2];
LABEL_16:
  v22 = 12;
  v23 = a6;
  while ( *(_DWORD *)((char *)v23 + (char *)&flt_106D91B8 - (char *)a6) == *(_DWORD *)v23 )
  {
    v22 -= 4;
    ++v23;
    if ( v22 < 4 )
      goto LABEL_21;
  }
  flt_106D91B8 = *a6;
  flt_106D91BC = a6[1];
  flt_106D91C0 = a6[2];
LABEL_21:
  if ( dword_106D91C4 != a7 )
    dword_106D91C4 = a7;
  if ( dword_106D91C8 != a8 )
    dword_106D91C8 = a8;
  if ( dword_106D91CC != a9 )
    dword_106D91CC = a9;
  if ( dword_106D91D0 != a10 )
    dword_106D91D0 = a10;
  if ( a11 != byte_106D91D4 )
    byte_106D91D4 = a11;
  if ( a12 != byte_106D91D5 )
    byte_106D91D5 = a12;
  if ( a13 != byte_106D91D6 )
    byte_106D91D6 = a13;
  if ( a14 != byte_106D91D7 )
    byte_106D91D7 = a14;
  if ( a15 != byte_106D91D8 )
    byte_106D91D8 = a15;
  if ( a16 != byte_106D91D9 )
    byte_106D91D9 = a16;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&unk_106D9188, a1, a2);
}
