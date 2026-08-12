double __thiscall sub_100C5400(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // edx
  double result; // st7
  int v5; // esi

  if ( a2 < 0 )
    return 0.0;
  if ( a2 >= this[283] )
    return 0.0;
  v2 = this[280];
  v3 = 76 * a2;
  if ( (*(_BYTE *)(v2 + 76 * a2) & 1) == 0 )
    return 0.0;
  result = *(float *)(v2 + v3 + 24);
  if ( 0.0 == result )
  {
    sub_10019B30(this, *(_DWORD *)(v2 + v3 + 8));
  }
  else
  {
    v5 = v3 + v2;
    sub_10019B30(this, *(_DWORD *)(v5 + 8));
    return result * (1.0 - *(float *)(v5 + 12)) / *(float *)(v5 + 24);
  }
  return result;
}
