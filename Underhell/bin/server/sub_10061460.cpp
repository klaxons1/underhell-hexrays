double __thiscall sub_10061460(int this, float *a2)
{
  double v2; // st6
  double v3; // st7
  int v4; // esi
  int v5; // edx
  double v6; // rt1
  int v7; // eax
  double v8; // rt2
  double v9; // st6
  double result; // st7
  double v11; // st6
  int v12; // edx
  double v13; // st5
  double v14; // st5

  v2 = 0.0;
  v3 = *(float *)(this + 16);
  v4 = 0;
  *a2 = 0.0;
  if ( *(_DWORD *)(this + 108) - 1 <= 0 )
    return 0.0;
  v5 = 0;
  while ( *(float *)(v5 + *(_DWORD *)(this + 96)) <= v3 )
  {
    ++v4;
    *a2 = *(float *)(*(_DWORD *)(this + 96) + v5 + 68);
    v7 = *(_DWORD *)(this + 96);
    v5 += 56;
    v8 = v2 + *(float *)(v7 + v5 - 48);
    v9 = v3;
    result = v8;
    v11 = v9 - *(float *)(v7 + v5 - 56);
    if ( v4 >= *(_DWORD *)(this + 108) - 1 )
      return result;
    v6 = v11;
    v2 = result;
    v3 = v6;
  }
  v12 = *(_DWORD *)(this + 96);
  v13 = v3 / *(float *)(v12 + 56 * v4);
  v14 = v13 * *(float *)(v12 + 56 * v4 + 68) + (1.0 - v13) * *(float *)(v12 + 56 * v4 + 12);
  *a2 = v14;
  return v3 * ((v14 + *(float *)(*(_DWORD *)(this + 96) + 56 * v4 + 12)) * 0.5) + v2;
}
