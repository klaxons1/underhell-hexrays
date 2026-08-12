int __cdecl sub_1028D390(int a1, float a2, float *a3, float *a4, int a5, int a6, int a7, int a8)
{
  unsigned int v8; // ecx
  float *v9; // eax
  unsigned int v10; // ecx
  float *v11; // eax

  v8 = 12;
  v9 = a3;
  while ( *(_DWORD *)((char *)v9 + (char *)&flt_106D74B4 - (char *)a3) == *(_DWORD *)v9 )
  {
    v8 -= 4;
    ++v9;
    if ( v8 < 4 )
      goto LABEL_6;
  }
  flt_106D74B4 = *a3;
  flt_106D74B8 = a3[1];
  flt_106D74BC = a3[2];
LABEL_6:
  v10 = 12;
  v11 = a4;
  while ( *(_DWORD *)((char *)v11 + (char *)&flt_106D74C0 - (char *)a4) == *(_DWORD *)v11 )
  {
    v10 -= 4;
    ++v11;
    if ( v10 < 4 )
      goto LABEL_11;
  }
  flt_106D74C0 = *a4;
  flt_106D74C4 = a4[1];
  flt_106D74C8 = a4[2];
LABEL_11:
  if ( dword_106D74CC != a5 )
    dword_106D74CC = a5;
  if ( dword_106D74D0 != a6 )
    dword_106D74D0 = a6;
  if ( dword_106D74D4 != a7 )
    dword_106D74D4 = a7;
  if ( dword_106D74D8 != a8 )
    dword_106D74D8 = a8;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D74A8, a1, a2);
}
