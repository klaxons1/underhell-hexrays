double __cdecl sub_10270F20(float a1, float a2, int a3, int a4)
{
  double result; // st7
  bool v5; // c0
  double v6; // st7
  bool v7; // c0
  bool v8; // c3
  float v9; // [esp+0h] [ebp-18h]

  if ( 0.0 == *(float *)a3 )
    return a2;
  if ( a4 == 2 )
    goto LABEL_15;
  if ( !*(_BYTE *)(a3 + 4) )
    goto LABEL_10;
  if ( a4 == 1 )
  {
LABEL_15:
    *(_BYTE *)(a3 + 4) = 1;
    *(float *)(a3 + 8) = *(float *)(dword_106B31C8 + 12) + *(float *)a3;
    return a1;
  }
  if ( *(float *)(a3 + 8) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    v5 = *(float *)(a3 + 12) > 0.0;
    *(_BYTE *)(a3 + 4) = 0;
    if ( v5 )
      *(float *)(a3 + 8) = *(float *)(dword_106B31C8 + 12);
    else
      *(float *)(a3 + 8) = 0.0;
  }
LABEL_10:
  if ( *(_BYTE *)(a3 + 4) )
    return a1;
  if ( 0.0 == *(float *)(a3 + 8) )
    return a2;
  v9 = *(float *)(dword_106B31C8 + 12) - *(float *)(a3 + 8);
  v6 = sub_10134630(v9, 0.0, *(float *)(a3 + 12), 0.0, 1.0);
  v7 = v6 > 1.0;
  v8 = 1.0 == v6;
  result = a1 + (a2 - a1) * v6;
  if ( v7 || v8 )
    *(float *)(a3 + 8) = 0.0;
  return result;
}
