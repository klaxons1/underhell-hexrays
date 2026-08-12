double __thiscall sub_1018AF90(float *this, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st5
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // rt1
  char v11; // fps^1
  double v12; // st7
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  char v16; // ah
  double v17; // st7
  bool v18; // c0
  bool v19; // c3
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  int v24; // edx

  if ( this[1] > (double)*a2 )
  {
    if ( this[2] > (double)a2[1] )
    {
      v2 = this[1] - *a2;
      v3 = this[2] - a2[1];
      v4 = this[3];
LABEL_4:
      v5 = v4 - a2[2];
      return v5 * v5 + v3 * v3 + v2 * v2;
    }
    v7 = this[1] - *a2;
    if ( this[5] < (double)a2[1] )
    {
      v8 = this[5] - a2[1];
      v9 = this[14];
LABEL_7:
      v10 = v9 - a2[2];
      return v7 * v7 + v8 * v8 + v10 * v10;
    }
    return v7 * v7;
  }
  v12 = this[4];
  v13 = v12 < *a2;
  v14 = 0;
  v15 = v12 == *a2;
  v16 = v11;
  v17 = this[2];
  v18 = v17 < a2[1];
  v19 = v17 == a2[1];
  if ( __SETP__(v16 & 5, 0) )
  {
    if ( !v18 && !v19 )
    {
      v21 = this[2] - a2[1];
      return v21 * v21;
    }
    if ( this[5] < (double)a2[1] )
    {
      v22 = a2[1] - this[5];
      return v22 * v22;
    }
    v23 = sub_1018AD70(this, a2);
    v7 = v23 - *(float *)(v24 + 8);
    return v7 * v7;
  }
  if ( !v18 && !v19 )
  {
    v7 = this[4] - *a2;
    v8 = this[2] - a2[1];
    v9 = this[13];
    goto LABEL_7;
  }
  if ( this[5] < (double)a2[1] )
  {
    v2 = this[4] - *a2;
    v3 = this[5] - a2[1];
    v4 = this[6];
    goto LABEL_4;
  }
  v20 = a2[2] - this[4];
  return v20 * v20;
}
