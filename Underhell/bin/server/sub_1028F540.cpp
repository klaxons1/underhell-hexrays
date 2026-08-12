int __cdecl sub_1028F540(int a1, float a2, float *a3, float *a4, int a5, int a6, char a7)
{
  unsigned int v7; // ecx
  float *v8; // eax
  unsigned int v9; // ecx
  float *v10; // eax

  v7 = 12;
  v8 = a3;
  while ( *(_DWORD *)((char *)v8 + (char *)&flt_106D8AE0 - (char *)a3) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_6;
  }
  flt_106D8AE0 = *a3;
  flt_106D8AE4 = a3[1];
  flt_106D8AE8 = a3[2];
LABEL_6:
  v9 = 12;
  v10 = a4;
  while ( *(_DWORD *)((char *)v10 + (char *)&flt_106D8AEC - (char *)a4) == *(_DWORD *)v10 )
  {
    v9 -= 4;
    ++v10;
    if ( v9 < 4 )
      goto LABEL_11;
  }
  flt_106D8AEC = *a4;
  flt_106D8AF0 = a4[1];
  flt_106D8AF4 = a4[2];
LABEL_11:
  if ( dword_106D8AF8 != a5 )
    dword_106D8AF8 = a5;
  if ( dword_106D8AFC != a6 )
    dword_106D8AFC = a6;
  if ( a7 != byte_106D8B00 )
    byte_106D8B00 = a7;
  off_10689714();
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D8AD4, a1, a2);
}
