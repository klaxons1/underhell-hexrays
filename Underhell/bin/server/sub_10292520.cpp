int __cdecl sub_10292520(int a1, float a2, float *a3, int a4, int a5, float *a6)
{
  unsigned int v6; // ecx
  float *v7; // eax

  v6 = 12;
  v7 = a3;
  while ( *(_DWORD *)((char *)v7 + (char *)&flt_106DA968 - (char *)a3) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_6;
  }
  flt_106DA968 = *a3;
  flt_106DA96C = a3[1];
  flt_106DA970 = a3[2];
LABEL_6:
  if ( dword_106DA974 != a4 )
    dword_106DA974 = a4;
  if ( dword_106DA978 != a5 )
    dword_106DA978 = a5;
  if ( a6 )
    sub_102923F0(flt_106DA97C, a6);
  else
    sub_102923F0(flt_106DA97C, &flt_106F1CA8);
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DA95C, a1, a2);
}
