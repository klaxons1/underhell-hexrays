int __cdecl sub_10293190(int a1, float a2, float *a3, int a4)
{
  unsigned int v4; // ecx
  float *v5; // eax

  v4 = 12;
  v5 = a3;
  while ( *(_DWORD *)((char *)v5 + (char *)&flt_106DAFDC - (char *)a3) == *(_DWORD *)v5 )
  {
    v4 -= 4;
    ++v5;
    if ( v4 < 4 )
      goto LABEL_6;
  }
  flt_106DAFDC = *a3;
  flt_106DAFE0 = a3[1];
  flt_106DAFE4 = a3[2];
LABEL_6:
  if ( dword_106DAFE8 != a4 )
    dword_106DAFE8 = a4;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DAFD0, a1, a2);
}
