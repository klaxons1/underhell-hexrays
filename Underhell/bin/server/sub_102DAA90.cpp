double __thiscall sub_102DAA90(int this)
{
  long double v2; // st7
  double v3; // st7
  double v4; // st7
  double v5; // st4
  bool v6; // c0
  bool v7; // c3
  double v8; // st4
  double v9; // st4
  bool v10; // c0
  double result; // st7
  float v12; // [esp+0h] [ebp-18h]
  float v13; // [esp+0h] [ebp-18h]
  float v14; // [esp+8h] [ebp-10h]
  float v15; // [esp+Ch] [ebp-Ch]

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v14 = *(float *)(this + 476);
  v15 = *(float *)(this + 480);
  v12 = v14 * v14 + v15 * v15;
  if ( off_10689708(v12) > 0.5 )
  {
    v2 = atan2(v15, v14) * 57.29578;
    *(float *)(this + 5072) = v2;
    v13 = v2;
    sub_10424CA0(v13);
    *(float *)(this + 5072) = v2;
  }
  v3 = *(float *)(this + 3252);
  if ( v3 <= 180.0 )
  {
    v6 = v3 > -180.0;
    v7 = -180.0 == v3;
    v5 = *(float *)(this + 3252);
    v4 = -180.0;
    if ( !v6 && !v7 )
      v5 = v5 + 360.0;
  }
  else
  {
    v4 = -180.0;
    v5 = *(float *)(this + 3252) - 360.0;
  }
  v8 = -(v5 - *(float *)(this + 5072));
  v9 = v8 - (double)(360 * (int)(0.0027777778 * v8));
  v10 = v9 < v4;
  result = v9;
  if ( v10 )
    return v9 + 360.0;
  if ( v9 > 180.0 )
    return v9 - 360.0;
  return result;
}
