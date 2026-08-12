double __cdecl sub_1006B980(float *a1, int *a2, int a3, int a4, int a5, float *a6)
{
  double v6; // st7
  bool v7; // c0
  double result; // st7
  double v9; // st7
  double v10; // st5
  double v11; // st4
  double v12; // st5
  float v13; // [esp+4h] [ebp-4h]
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v6 = sub_1005BF10(a1, a2);
  v13 = v6;
  v7 = v6 > 0.0;
  result = 0.0;
  if ( v7 )
  {
    v9 = sub_1005A5F0((int)&savedregs, a1, 0);
    if ( v9 > 0.0 )
    {
      if ( a4 == 14 )
      {
        return (double)a5 * 0.0039215689 * v13;
      }
      else
      {
        v10 = 1440000.0 / (v9 * v9);
        v11 = 1.0;
        if ( v10 <= 1.0 )
        {
          v11 = v10;
          v12 = 1.0;
          if ( v11 < 0.0 )
            v11 = 0.0;
        }
        else
        {
          v12 = 1.0;
        }
        if ( a3 == 9 )
        {
          return v11 * v13;
        }
        else
        {
          if ( *a6 == 0.0 )
            *a6 = v12;
          *a6 = v9 * 0.0049999999 * *a6;
          return v11 * v13;
        }
      }
    }
    else
    {
      return 0.0;
    }
  }
  return result;
}
