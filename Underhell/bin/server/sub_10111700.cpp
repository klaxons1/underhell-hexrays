float *__thiscall sub_10111700(float *this, float *a2, float *a3)
{
  float *v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st5
  double v8; // st7
  double v9; // st5
  float *result; // eax
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]

  v4 = (float *)sub_10022D70();
  *v4 = this[5] - this[2];
  v4[1] = this[6] - this[3];
  v4[2] = this[7] - this[4];
  v5 = *v4;
  v12 = v4[2];
  v11 = v4[1];
  if ( 0.0 == v5 )
    v6 = 0.5;
  else
    v6 = (*a2 - this[2]) / v5;
  v7 = v6;
  v8 = 0.5;
  *a3 = v7;
  if ( 0.0 == v11 )
    v9 = 0.5;
  else
    v9 = (a2[1] - this[3]) / v11;
  a3[1] = v9;
  result = a3;
  if ( v12 != 0.0 )
    v8 = (a2[2] - this[4]) / v12;
  a3[2] = v8;
  return result;
}
