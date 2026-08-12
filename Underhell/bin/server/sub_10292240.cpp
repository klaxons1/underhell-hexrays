int __cdecl sub_10292240(int a1, float a2, float *a3, int a4, int a5, int a6)
{
  unsigned int v6; // ecx
  float *v7; // eax

  v6 = 12;
  v7 = a3;
  while ( *(_DWORD *)((char *)v7 + (char *)&flt_106DA794 - (char *)a3) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_6;
  }
  flt_106DA794 = *a3;
  flt_106DA798 = a3[1];
  flt_106DA79C = a3[2];
LABEL_6:
  if ( dword_106DA7A0 != a4 )
    dword_106DA7A0 = a4;
  if ( dword_106DA7A4 != a5 )
    dword_106DA7A4 = a5;
  if ( dword_106DA7A8 != a6 )
    dword_106DA7A8 = a6;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DA788, a1, a2);
}
