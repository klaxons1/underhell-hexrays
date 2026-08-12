float *__thiscall sub_100AFC40(float *this, float a2, float *a3, float *a4, float *a5, float *a6)
{
  double v7; // st7
  float *result; // eax
  double v9; // st6
  double v10; // st5
  double v11; // st7
  float v12; // [esp+Ch] [ebp-10h]
  float v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+10h] [ebp-Ch]
  float v15; // [esp+10h] [ebp-Ch]

  v14 = a3[3] * 70.0;
  v12 = a3[3] * 150.0;
  *a4 = sub_100260E0(a2, flt_1042F8B0, 1.0, v12, v14);
  v15 = a3[4] * 70.0;
  v13 = a3[4] * 150.0;
  *a5 = sub_100260E0(a2, flt_1042F8B0, 1.0, v13, v15);
  v7 = sub_100260E0(a2, flt_1042F8B0, 1.0, 0.0, 1.0) * this[37];
  result = a6;
  v9 = *a3 * v7;
  v10 = a3[1] * v7;
  v11 = v7 * a3[2];
  *a6 = v9;
  a6[1] = v10;
  a6[2] = v11;
  return result;
}
