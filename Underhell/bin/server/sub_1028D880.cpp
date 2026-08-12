int __cdecl sub_1028D880(int a1, float a2, float *a3, float *a4, int a5, int a6, int a7, int a8)
{
  unsigned int v8; // ecx
  float *v9; // eax
  unsigned int v10; // ecx
  float *v11; // eax
  int v12; // eax

  v8 = 12;
  v9 = a3;
  while ( *(_DWORD *)((char *)v9 + (char *)&flt_106D777C - (char *)a3) == *(_DWORD *)v9 )
  {
    v8 -= 4;
    ++v9;
    if ( v8 < 4 )
      goto LABEL_6;
  }
  flt_106D777C = *a3;
  flt_106D7780 = a3[1];
  flt_106D7784 = a3[2];
LABEL_6:
  v10 = 12;
  v11 = a4;
  while ( *(_DWORD *)((char *)v11 + (char *)&flt_106D7788 - (char *)a4) == *(_DWORD *)v11 )
  {
    v10 -= 4;
    ++v11;
    if ( v10 < 4 )
      goto LABEL_11;
  }
  flt_106D7788 = *a4;
  flt_106D778C = a4[1];
  flt_106D7790 = a4[2];
LABEL_11:
  if ( dword_106D7794 != a5 )
    dword_106D7794 = a5;
  if ( dword_106D7798 != a6 )
    dword_106D7798 = a6;
  v12 = a7;
  if ( a7 >= 255 )
    v12 = 255;
  if ( dword_106D779C != v12 )
    dword_106D779C = v12;
  if ( dword_106D77A0 != a8 )
    dword_106D77A0 = a8;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D7770, a1, a2);
}
