int __cdecl sub_102917A0(int a1, float a2, float *a3, int a4, int a5)
{
  unsigned int v5; // ecx
  float *v6; // eax

  v5 = 12;
  v6 = a3;
  while ( *(_DWORD *)((char *)v6 + (char *)&flt_106DA21C - (char *)a3) == *(_DWORD *)v6 )
  {
    v5 -= 4;
    ++v6;
    if ( v5 < 4 )
      goto LABEL_6;
  }
  flt_106DA21C = *a3;
  flt_106DA220 = a3[1];
  flt_106DA224 = a3[2];
LABEL_6:
  if ( dword_106DA218 != a4 )
    dword_106DA218 = a4;
  if ( dword_106DA228 != a5 )
    dword_106DA228 = a5;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DA20C, a1, a2);
}
