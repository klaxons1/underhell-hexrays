int __cdecl sub_10291AB0(int a1, float a2, float *a3, float *a4, int a5, int a6)
{
  unsigned int v6; // ecx
  float *v7; // eax
  unsigned int v8; // ecx
  float *v9; // eax

  v6 = 12;
  v7 = a3;
  while ( *(_DWORD *)((char *)v7 + (char *)&flt_106DA434 - (char *)a3) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_6;
  }
  flt_106DA434 = *a3;
  flt_106DA438 = a3[1];
  flt_106DA43C = a3[2];
LABEL_6:
  v8 = 12;
  v9 = a4;
  while ( *(_DWORD *)((char *)v9 + (char *)&flt_106DA448 - (char *)a4) == *(_DWORD *)v9 )
  {
    v8 -= 4;
    ++v9;
    if ( v8 < 4 )
      goto LABEL_11;
  }
  flt_106DA448 = *a4;
  flt_106DA44C = a4[1];
  flt_106DA450 = a4[2];
LABEL_11:
  if ( dword_106DA444 != a5 )
    dword_106DA444 = a5;
  if ( dword_106DA440 != a6 )
    dword_106DA440 = a6;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DA428, a1, a2);
}
