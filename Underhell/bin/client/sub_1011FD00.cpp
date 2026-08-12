float *__cdecl sub_1011FD00(float *a1, float a2, float *a3, int a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // rt1
  double v8; // st5
  double v9; // st6
  double v10; // st5
  double v11; // st6
  long double v12; // st7
  long double v13; // st5
  long double v14; // st4
  long double v15; // rt2
  long double v16; // st7
  float *result; // eax
  float v18; // [esp+4h] [ebp-14h]
  float v19; // [esp+8h] [ebp-10h]

  v4 = *(float *)(a4 + 12) - a3[3];
  if ( a2 - a3[3] <= v4 )
  {
    v5 = 0.0;
    v6 = a2 - a3[3];
    if ( v6 < 0.0 )
      v6 = 0.0;
  }
  else
  {
    v5 = 0.0;
    v6 = v4;
  }
  v7 = v6;
  v8 = v5;
  v9 = v7;
  if ( v8 >= v4 )
  {
    v11 = 1.0;
    v12 = 1.0;
  }
  else
  {
    v10 = v9;
    v11 = 1.0;
    v12 = v10 / v4;
  }
  switch ( *(_DWORD *)(a4 + 16) )
  {
    case 1:
      v12 = 3.0 * (v12 * v12) - v12 * (v12 * v12 + v12 * v12);
      break;
    case 2:
      v12 = v12 * v12;
      break;
    case 3:
      v12 = sqrt(v12);
      break;
  }
  v13 = *(float *)a4 * v12;
  v14 = *(float *)(a4 + 4) * v12;
  v15 = *(float *)(a4 + 8) * v12;
  v16 = v11 - v12;
  result = a1;
  v18 = a3[1];
  v19 = a3[2];
  *a1 = v13 + *a3 * v16;
  a1[1] = v14 + v18 * v16;
  a1[2] = v15 + v16 * v19;
  return result;
}
