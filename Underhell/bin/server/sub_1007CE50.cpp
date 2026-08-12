float *__stdcall sub_1007CE50(float *a1, float *a2)
{
  float *result; // eax
  float *v3; // ecx
  double v4; // st6
  double v5; // st5
  double v6; // rt0
  double v7; // st4
  double v8; // rt2
  double v9; // st5
  double v10; // st6
  double v11; // rt0
  double v12; // st4
  double v13; // st4

  result = a1;
  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    v4 = 0.0;
    v5 = 360.0;
    while ( 1 )
    {
      if ( *(v3 - 1) >= 0.0099999998 )
      {
        v7 = flt_10608800[2 * *((_DWORD *)v3 - 2)];
        *(v3 - 1) = v7 + (flt_10608804[2 * *((_DWORD *)v3 - 2)] - v7) * *(v3 - 1);
        v11 = v5;
        v9 = v4;
        v10 = v11;
      }
      else
      {
        v8 = v5;
        v9 = v4;
        v10 = v8;
        *(v3 - 1) = v9;
      }
      v12 = *v3;
      if ( v12 < v9 )
      {
        do
          v12 = v12 + v10;
        while ( v12 < v9 );
        *v3 = v12;
      }
      v13 = *v3;
      if ( v13 >= v10 )
      {
        do
          v13 = v13 - v10;
        while ( v13 >= v10 );
        *v3 = v13;
      }
      v3 += 6;
      result = v3 - 2;
      if ( v3 - 2 == a2 )
        break;
      v6 = v9;
      v5 = v10;
      v4 = v6;
    }
  }
  return result;
}
