void __stdcall sub_10090AA0(float a1, float a2, int a3, float *a4, float *a5)
{
  double v5; // st5
  double v6; // st3
  double v7; // st5
  double v8; // st3
  double v9; // st6
  double v10; // st5

  if ( a3 )
  {
    v5 = (double)a3 * a2 + a1;
    *a5 = v5;
    if ( v5 >= 0.0 )
    {
      if ( v5 < 360.0 )
      {
        v7 = 360.0;
      }
      else
      {
        v8 = v5 - 360.0;
        v7 = 360.0;
        *a5 = v8;
      }
    }
    else
    {
      v6 = v5 + 360.0;
      v7 = 360.0;
      *a5 = v6;
    }
    v9 = v7;
    v10 = *a5 - a2 * (double)(2 * (a3 > 0) - 1) * 0.5;
    *a4 = v10;
    if ( v10 >= 0.0 )
    {
      if ( v9 <= v10 )
        *a4 = v10 - v9;
    }
    else
    {
      *a4 = v10 + v9;
    }
  }
  else
  {
    *a4 = a1;
    *a5 = a1;
  }
}
