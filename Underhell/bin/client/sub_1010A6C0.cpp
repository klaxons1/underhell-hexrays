int __thiscall sub_1010A6C0(int this, float *a2, int a3, int a4)
{
  int v5; // eax
  long double v6; // st7
  int v7; // esi
  float *v8; // edx
  float *v9; // ecx
  char *v10; // edi
  int v11; // [esp+0h] [ebp-4h]

  if ( !*(_BYTE *)(this + 20) )
    return 0;
  v5 = *(_DWORD *)(this + 24);
  v11 = 1;
  if ( (*(_WORD *)(v5 + 18) & 0x400) != 0 )
    return v11;
  v6 = *(float *)(v5 + 48);
  v7 = 0;
  if ( a4 <= 0 )
    return v11;
  v8 = a2;
  v9 = (float *)(a3 + 4);
  v10 = (char *)a2 - a3;
  while ( 1 )
  {
    if ( *v8 == *(v9 - 1) && *(float *)((char *)v9 + (_DWORD)v10) == *v9 && v8[2] == v9[1] )
      goto LABEL_14;
    if ( v6 <= 0.0
      || fabs(*v8 - *(v9 - 1)) > v6
      || fabs(*(float *)((char *)v9 + (_DWORD)v10) - *v9) > v6
      || fabs(v8[2] - v9[1]) > v6 )
    {
      return 0;
    }
    v11 = 2;
LABEL_14:
    ++v7;
    v9 += 3;
    v8 += 3;
    if ( v7 >= a4 )
      return v11;
  }
}
