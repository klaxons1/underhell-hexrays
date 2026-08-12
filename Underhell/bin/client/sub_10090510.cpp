bool __cdecl sub_10090510(float *a1, float *a2, float *a3, float *a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  bool result; // al
  double v10; // st4
  double v11; // st3
  double v12; // st2
  double v13; // st5
  double v14; // st6
  double v15; // st2
  double v16; // st1
  float v17; // [esp+8h] [ebp-18h]
  float v18; // [esp+Ch] [ebp-14h]
  float v19; // [esp+10h] [ebp-10h]
  float v20; // [esp+14h] [ebp-Ch]
  float v21; // [esp+18h] [ebp-8h]
  float v22; // [esp+1Ch] [ebp-4h]
  float v23; // [esp+28h] [ebp+8h]

  v18 = a1[5];
  v17 = a1[4];
  v19 = a1[6];
  v21 = a2[5];
  v20 = a2[4];
  v22 = a2[6];
  off_103EDFEC();
  off_103EDFEC();
  v5 = v19 * v20 - v22 * v17;
  v6 = v22 * v18 - v21 * v19;
  v7 = v17 * v21 - v18 * v20;
  v8 = v5 * v5 + v6 * v6 + v7 * v7;
  v23 = v8;
  if ( 0.0 == v8 )
  {
    *a3 = 0.0;
    result = 0;
    *a4 = 0.0;
  }
  else
  {
    v10 = *a2 - *a1;
    v11 = a2[1] - a1[1];
    v12 = v11 * v7 - (a2[2] - a1[2]) * v5;
    v13 = (a2[2] - a1[2]) * v6 - v7 * v10;
    v14 = v10 * v5 - v6 * v11;
    *a3 = (-v14 * v22 + -v13 * v21 + -v12 * v20) / v23;
    v15 = (-v14 * v19 + -v13 * v18 + -v12 * v17) / v23;
    *a4 = v15;
    v16 = *a3;
    return v17 * v16 + *a1 == v20 * v15 + *a2
        && v21 * v15 + a2[1] == v18 * *a3 + a1[1]
        && v19 * v16 + a1[2] == v15 * v22 + a2[2];
  }
  return result;
}
