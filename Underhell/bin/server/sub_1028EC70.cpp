int __cdecl sub_1028EC70(int a1, float a2, float *a3, float *a4, char a5)
{
  unsigned int v5; // ecx
  float *v6; // eax
  unsigned int v7; // ecx
  float *v8; // eax

  v5 = 12;
  v6 = a3;
  while ( *(_DWORD *)((char *)v6 + (char *)&flt_106D82EC - (char *)a3) == *(_DWORD *)v6 )
  {
    v5 -= 4;
    ++v6;
    if ( v5 < 4 )
      goto LABEL_6;
  }
  flt_106D82EC = *a3;
  flt_106D82F0 = a3[1];
  flt_106D82F4 = a3[2];
LABEL_6:
  v7 = 12;
  v8 = a4;
  while ( *(_DWORD *)((char *)v8 + (char *)&flt_106D82F8 - (char *)a4) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_11;
  }
  flt_106D82F8 = *a4;
  flt_106D82FC = a4[1];
  flt_106D8300 = a4[2];
LABEL_11:
  if ( a5 != byte_106D8304 )
    byte_106D8304 = a5;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D82E0, a1, a2);
}
