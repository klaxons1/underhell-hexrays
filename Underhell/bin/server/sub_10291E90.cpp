int __cdecl sub_10291E90(int a1, float a2, float *a3, float *a4)
{
  unsigned int v4; // ecx
  float *v5; // eax
  unsigned int v6; // ecx
  float *i; // eax

  v4 = 12;
  v5 = a3;
  while ( *(_DWORD *)((char *)v5 + (char *)&flt_106DA578 - (char *)a3) == *(_DWORD *)v5 )
  {
    v4 -= 4;
    ++v5;
    if ( v4 < 4 )
      goto LABEL_6;
  }
  flt_106DA578 = *a3;
  flt_106DA57C = a3[1];
  flt_106DA580 = a3[2];
LABEL_6:
  v6 = 12;
  for ( i = a4; *(_DWORD *)((char *)i + (char *)&flt_106DA584 - (char *)a4) == *(_DWORD *)i; ++i )
  {
    v6 -= 4;
    if ( v6 < 4 )
      return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DA56C, a1, a2);
  }
  flt_106DA584 = *a4;
  flt_106DA588 = a4[1];
  flt_106DA58C = a4[2];
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DA56C, a1, a2);
}
