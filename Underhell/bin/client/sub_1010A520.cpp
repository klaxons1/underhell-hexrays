int __thiscall sub_1010A520(int this, int a2, float *a3, int a4)
{
  int v5; // eax
  int v6; // ebx
  long double v7; // st7
  int v8; // edx
  float *v9; // ecx
  int v10; // esi

  if ( !*(_BYTE *)(this + 20) )
    return 0;
  v5 = *(_DWORD *)(this + 24);
  v6 = 1;
  if ( (*(_WORD *)(v5 + 18) & 0x400) != 0 )
    return v6;
  v7 = *(float *)(v5 + 48);
  v8 = 0;
  if ( a4 <= 0 )
    return v6;
  v9 = a3;
  v10 = a2 - (_DWORD)a3;
  while ( *v9 == *(float *)((char *)v9 + v10) )
  {
LABEL_10:
    ++v8;
    ++v9;
    if ( v8 >= a4 )
      return v6;
  }
  if ( v7 > 0.0 && fabs(*(float *)((char *)v9 + v10) - *v9) <= v7 )
  {
    v6 = 2;
    goto LABEL_10;
  }
  return 0;
}
