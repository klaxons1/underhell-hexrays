char __thiscall sub_1018D4F0(_DWORD *this, float *a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // ecx
  double v5; // st3
  double v6; // st6
  double v7; // st3
  double v8; // st4

  v2 = this[24];
  if ( v2 == -1 )
    return 0;
  v3 = this[21];
  while ( 1 )
  {
    v4 = (_DWORD *)(v3 + 12 * v2);
    v5 = *(float *)(*v4 + 4) - *a2;
    v6 = v5 * v5;
    v7 = *(float *)(*v4 + 8) - a2[1];
    v8 = *(float *)(*v4 + 12) - a2[2];
    if ( v8 * v8 + v7 * v7 + v6 < 900.0 )
      break;
    v2 = v4[2];
    if ( v2 == -1 )
      return 0;
  }
  return 1;
}
