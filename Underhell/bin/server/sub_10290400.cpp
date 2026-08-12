int __cdecl sub_10290400(int a1, float a2, float *a3, int a4, int a5, int a6, int a7)
{
  unsigned int v7; // ecx
  float *v8; // eax

  v7 = 12;
  v8 = a3;
  while ( *(_DWORD *)((char *)v8 + (char *)&flt_106D9430 - (char *)a3) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_6;
  }
  flt_106D9430 = *a3;
  flt_106D9434 = a3[1];
  flt_106D9438 = a3[2];
LABEL_6:
  if ( dword_106D943C != a4 )
    dword_106D943C = a4;
  if ( dword_106D9444 != a5 )
    dword_106D9444 = a5;
  if ( dword_106D9440 != a6 )
    dword_106D9440 = a6;
  if ( dword_106D9448 != a7 )
    dword_106D9448 = a7;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D9424, a1, a2);
}
