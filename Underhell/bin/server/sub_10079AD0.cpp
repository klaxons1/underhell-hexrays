float *__stdcall sub_10079AD0(float *a1, float *a2, float *a3, float a4, float *a5, float a6, float *a7)
{
  double v8; // st7
  double v9; // st5
  double v10; // st6
  double v11; // st4
  float *result; // eax
  long double v13; // st2
  long double v14; // st5
  long double v15; // st7
  long double v16; // st2
  long double v17; // st1
  long double v18; // rt2
  long double v19; // st1
  long double v20; // st7
  long double v21; // st6
  long double v22; // rtt
  float v23; // [esp+4h] [ebp-Ch]
  float v24; // [esp+8h] [ebp-8h]
  int v25; // [esp+1Ch] [ebp+Ch]

  *(float *)&v25 = a3[2] - a2[2];
  v23 = *a3 - *a2;
  v24 = a3[1] - a2[1];
  v8 = off_10689714();
  v9 = v8 / a6 * 0.5 * (0.5 * a4 * (v8 / a6 * 0.5));
  v10 = a4;
  if ( v9 < *a5 )
    v9 = *a5;
  *a5 = v9;
  if ( *(float *)&v25 >= v9 )
    v9 = *(float *)&v25;
  v11 = v9;
  result = a1;
  *a5 = v9;
  v13 = v9 - *(float *)&v25;
  v14 = sqrt(v9 * 2.0 / v10);
  v15 = v8 / (sqrt(fabs(v13) * 2.0 / v10) + v14);
  v16 = v23 * v15;
  *a1 = v16;
  v17 = v24 * v15;
  a1[1] = v17;
  v18 = v17;
  v19 = v15;
  v20 = v18;
  a1[2] = sqrt(2.0 * a4 * v11);
  if ( a7 )
  {
    v21 = v20 * v14 + a2[1];
    v22 = v14 * (v19 * (float)0.0) + a2[2] + v11;
    *a7 = v16 * v14 + *a2;
    a7[1] = v21;
    a7[2] = v22;
  }
  return result;
}
