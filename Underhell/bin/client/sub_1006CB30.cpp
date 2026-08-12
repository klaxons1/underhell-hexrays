float *__thiscall sub_1006CB30(int this, float a2, float *a3, float *a4, float *a5, float *a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st6
  double v9; // st5
  float *result; // eax
  double v11; // st4
  double v12; // st7
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7

  if ( *(_BYTE *)(this + 164) )
  {
    v6 = 0.75;
    v7 = 0.75 - (a2 - 1.0) * 0.75 * -9.9999981;
    if ( v7 <= 0.75 )
    {
      v6 = v7;
      if ( v7 < 0.0 )
        v6 = 0.0;
    }
    *a4 = a3[3] * 6.0;
    *a5 = 6.0 * a3[4];
    v8 = *a3 * v6;
    v9 = a3[1] * v6;
    result = a6;
    v11 = *(float *)(this + 148);
    v12 = v6 * a3[2] * v11;
    *a6 = v8 * v11;
    a6[1] = v9 * v11;
    a6[2] = v12;
  }
  else
  {
    *a4 = a3[3];
    *a5 = a3[4];
    v13 = *(float *)(this + 148);
    v14 = *a3 * v13;
    v15 = a3[1] * v13;
    result = a6;
    v16 = v13 * a3[2];
    *a6 = v14;
    a6[1] = v15;
    a6[2] = v16;
  }
  return result;
}
