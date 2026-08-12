int __cdecl sub_1028DCE0(int a1, float a2, float *a3, float *a4, int a5, int a6, int a7)
{
  unsigned int v7; // ecx
  float *v8; // eax
  unsigned int v9; // ecx
  float *v10; // eax
  int v11; // eax

  v7 = 12;
  v8 = a3;
  while ( *(_DWORD *)((char *)v8 + (char *)&flt_106D79F8 - (char *)a3) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_6;
  }
  flt_106D79F8 = *a3;
  flt_106D79FC = a3[1];
  flt_106D7A00 = a3[2];
LABEL_6:
  v9 = 12;
  v10 = a4;
  while ( *(_DWORD *)((char *)v10 + (char *)&flt_106D7A04 - (char *)a4) == *(_DWORD *)v10 )
  {
    v9 -= 4;
    ++v10;
    if ( v9 < 4 )
      goto LABEL_11;
  }
  flt_106D7A04 = *a4;
  flt_106D7A08 = a4[1];
  flt_106D7A0C = a4[2];
LABEL_11:
  if ( dword_106D7A10 != a5 )
    dword_106D7A10 = a5;
  if ( dword_106D7A14 != a6 )
    dword_106D7A14 = a6;
  if ( dword_106D7A18 == -1 || off_1061BE18[4 * (dword_106D7A18 & 0xFFF) + 2] != (unsigned int)dword_106D7A18 >> 12 )
    v11 = 0;
  else
    v11 = off_1061BE18[4 * (dword_106D7A18 & 0xFFF) + 1];
  if ( v11 != a7 )
  {
    if ( a7 )
      dword_106D7A18 = *(_DWORD *)(*(int (**)(void))(*(_DWORD *)a7 + 8))();
    else
      dword_106D7A18 = -1;
  }
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D79EC, a1, a2);
}
