int __cdecl sub_102899F0(int a1, float a2, float *a3, float *a4)
{
  unsigned int v4; // ecx
  float *v5; // eax
  unsigned int v6; // ecx
  float *i; // eax

  v4 = 12;
  v5 = a3;
  while ( *(_DWORD *)((char *)v5 + (char *)&flt_106D51A0 - (char *)a3) == *(_DWORD *)v5 )
  {
    v4 -= 4;
    ++v5;
    if ( v4 < 4 )
      goto LABEL_6;
  }
  flt_106D51A0 = *a3;
  flt_106D51A4 = a3[1];
  flt_106D51A8 = a3[2];
LABEL_6:
  v6 = 12;
  for ( i = a4; *(_DWORD *)((char *)i + (char *)&flt_106D51AC - (char *)a4) == *(_DWORD *)i; ++i )
  {
    v6 -= 4;
    if ( v6 < 4 )
      return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D5194, a1, a2);
  }
  flt_106D51AC = *a4;
  flt_106D51B0 = a4[1];
  flt_106D51B4 = a4[2];
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D5194, a1, a2);
}
