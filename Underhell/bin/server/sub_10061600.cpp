double __thiscall sub_10061600(int this)
{
  int v2; // esi
  double result; // st7
  double v4; // st6
  int v5; // ecx
  float *i; // esi
  int v7; // esi
  int v8; // ecx
  double v9; // st7
  float v10; // [esp+10h] [ebp-4h]

  v2 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(this + 4));
  result = *(float *)(v2 + 708);
  v4 = *(float *)(this + 16);
  v5 = 0;
  if ( *(_DWORD *)(this + 128) - 1 > 0 )
  {
    for ( i = *(float **)(this + 116); v4 >= *i; i += 14 )
    {
      v4 = v4 - *i;
      if ( ++v5 >= *(_DWORD *)(this + 128) - 1 )
        return result;
    }
    v7 = 7 * v5;
    v8 = *(_DWORD *)(this + 116);
    v7 *= 8;
    v10 = v4 / *(float *)(v7 + v8);
    v9 = *(float *)(v7 + v8 + 72);
    sub_10424C10(*(float *)(v7 + v8 + 72), *(float *)(v7 + v8 + 16));
    return (double)(unsigned __int16)(int)((v9 * v10 + *(float *)(v7 + *(_DWORD *)(this + 116) + 16)) * 182.04445)
         * 0.0054931641;
  }
  return result;
}
