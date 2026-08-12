double __cdecl sub_1018B7B0(float a1, float *a2)
{
  float *v2; // esi
  float v3; // edx
  double v4; // st7
  float v5; // eax
  double v6; // st6
  double v7; // st7
  double v8; // st6
  double v9; // st5
  float v11; // [esp+0h] [ebp-20h]
  float v12; // [esp+0h] [ebp-20h]
  float v13; // [esp+8h] [ebp-18h]
  float v14; // [esp+Ch] [ebp-14h]
  float v15; // [esp+14h] [ebp-Ch] BYREF
  float v16; // [esp+18h] [ebp-8h]
  float v17; // [esp+1Ch] [ebp-4h]

  v13 = 0.0;
  v2 = (float *)LODWORD(a1);
  v14 = 0.0;
  if ( fabs(*(float *)(LODWORD(a1) + 4) - a2[1]) >= fabs(*(float *)LODWORD(a1) - *a2) )
  {
    v14 = 25.0;
    if ( a2[1] > (double)*(float *)(LODWORD(a1) + 4) )
      v14 = -25.0;
  }
  else
  {
    v13 = 25.0;
    if ( *a2 > (double)*(float *)LODWORD(a1) )
      v13 = -25.0;
  }
  v3 = a2[1];
  v15 = *a2;
  v4 = v15 - *(float *)LODWORD(a1);
  v5 = a2[2];
  v16 = v3;
  v6 = v3 - *(float *)(LODWORD(a1) + 4);
  v17 = v5;
  v11 = v4 * v4 + v6 * v6;
  if ( off_10689708(v11) > 25.0 )
  {
    do
    {
      v15 = v15 + v13;
      v16 = v16 + v14;
      v17 = v17 + 18.0;
      a1 = v17;
      if ( (unsigned __int8)sub_1019DEA0(&v15, &a1, 0) )
        v7 = a1;
      else
        v7 = v17 - 18.0;
      v17 = v7;
      v8 = v16 - v2[1];
      v9 = v15 - *v2;
      v12 = v9 * v9 + v8 * v8;
    }
    while ( off_10689708(v12) > 25.0 );
  }
  a1 = v17 + 18.0;
  v15 = *v2;
  v16 = v2[1];
  v17 = a1;
  if ( (unsigned __int8)sub_1019DEA0(&v15, &a1, 0) )
    return a1;
  else
    return v17 - 18.0;
}
