int __cdecl sub_10415500(int a1, float a2, float *a3, int a4, int a5, int a6, float *a7)
{
  unsigned int v7; // ecx
  float *v8; // eax
  float v10[3]; // [esp+8h] [ebp-Ch] BYREF

  v7 = 12;
  v8 = a3;
  while ( *(_DWORD *)((char *)v8 + (char *)&flt_106F1380 - (char *)a3) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_6;
  }
  flt_106F1380 = *a3;
  flt_106F1384 = a3[1];
  flt_106F1388 = a3[2];
LABEL_6:
  if ( dword_106F1398 != a4 )
    dword_106F1398 = a4;
  if ( dword_106F139C != a5 )
    dword_106F139C = a5;
  if ( dword_106F13A0 != a6 )
    dword_106F13A0 = a6;
  if ( a7 )
  {
    sub_102923F0(flt_106F138C, a7);
  }
  else
  {
    v10[0] = 0.0;
    v10[1] = 0.0;
    v10[2] = 1.0;
    sub_102923F0(flt_106F138C, v10);
  }
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106F1374, a1, a2);
}
