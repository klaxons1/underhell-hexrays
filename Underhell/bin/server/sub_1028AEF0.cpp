int __cdecl sub_1028AEF0(
        int a1,
        float a2,
        float *a3,
        float *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  unsigned int v18; // ecx
  float *v19; // eax
  unsigned int v20; // ecx
  float *v21; // eax

  v18 = 12;
  v19 = a3;
  while ( *(_DWORD *)((char *)v19 + (char *)&flt_106D5F98 - (char *)a3) == *(_DWORD *)v19 )
  {
    v18 -= 4;
    ++v19;
    if ( v18 < 4 )
      goto LABEL_6;
  }
  flt_106D5F98 = *a3;
  flt_106D5F9C = a3[1];
  flt_106D5FA0 = a3[2];
LABEL_6:
  v20 = 12;
  v21 = a4;
  while ( *(_DWORD *)((char *)v21 + (char *)&flt_106D5FA4 - (char *)a4) == *(_DWORD *)v21 )
  {
    v20 -= 4;
    ++v21;
    if ( v20 < 4 )
      goto LABEL_11;
  }
  flt_106D5FA4 = *a4;
  flt_106D5FA8 = a4[1];
  flt_106D5FAC = a4[2];
LABEL_11:
  if ( dword_106D5F5C != a5 )
    dword_106D5F5C = a5;
  if ( dword_106D5F60 != a6 )
    dword_106D5F60 = a6;
  if ( dword_106D5F64 != a7 )
    dword_106D5F64 = a7;
  if ( dword_106D5F68 != a8 )
    dword_106D5F68 = a8;
  if ( dword_106D5F6C != a9 )
    dword_106D5F6C = a9;
  if ( dword_106D5F70 != a10 )
    dword_106D5F70 = a10;
  if ( dword_106D5F74 != a11 )
    dword_106D5F74 = a11;
  if ( dword_106D5F78 != a12 )
    dword_106D5F78 = a12;
  if ( dword_106D5F7C != a13 )
    dword_106D5F7C = a13;
  if ( dword_106D5F90 != a18 )
    dword_106D5F90 = a18;
  if ( dword_106D5F80 != a14 )
    dword_106D5F80 = a14;
  if ( dword_106D5F84 != a15 )
    dword_106D5F84 = a15;
  if ( dword_106D5F88 != a16 )
    dword_106D5F88 = a16;
  if ( dword_106D5F8C != a17 )
    dword_106D5F8C = a17;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D5F50, a1, a2);
}
