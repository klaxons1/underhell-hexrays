int __cdecl sub_102909F0(int a1, float a2, float *a3, int a4, int a5)
{
  unsigned int v5; // ecx
  float *v6; // eax

  v5 = 12;
  v6 = a3;
  while ( *(_DWORD *)((char *)v6 + (char *)&flt_106D98BC - (char *)a3) == *(_DWORD *)v6 )
  {
    v5 -= 4;
    ++v6;
    if ( v5 < 4 )
      goto LABEL_6;
  }
  flt_106D98BC = *a3;
  flt_106D98C0 = a3[1];
  flt_106D98C4 = a3[2];
LABEL_6:
  if ( dword_106D98C8 != a4 )
    dword_106D98C8 = a4;
  if ( dword_106D98CC != a5 )
    dword_106D98CC = a5;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D98B0, a1, a2);
}
