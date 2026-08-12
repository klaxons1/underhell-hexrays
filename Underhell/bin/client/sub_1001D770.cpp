double __cdecl sub_1001D770(int a1, int a2, float a3, float *a4)
{
  double result; // st7
  int v5; // eax
  double v6; // st5
  bool v7; // c0
  bool v8; // c3
  double v9; // st5
  double v10; // st4
  double v11; // st5

  if ( !a1 )
    return a3;
  v5 = sub_1001D710(a2);
  if ( v5 )
  {
    if ( (*(_BYTE *)(v5 + 4) & 0x38) != 0 )
    {
      v6 = *(float *)(v5 + 8);
      v7 = v6 < *(float *)(v5 + 12);
      v8 = v6 == *(float *)(v5 + 12);
      v9 = a3;
      if ( !v7 && !v8 )
        v9 = -v9;
      if ( *(float *)(v5 + 8) + 359.0 < *(float *)(v5 + 12) )
      {
        if ( v9 <= 360.0 )
        {
          if ( v9 < 0.0 )
            v9 = v9 + (double)(int)(-0.0027777778 * v9 + 1.0) * 360.0;
        }
        else
        {
          v9 = v9 - (double)(int)(v9 * 0.0027777778) * 360.0;
        }
      }
      else
      {
        v10 = (*(float *)(v5 + 8) + *(float *)(v5 + 12)) * 0.5;
        if ( v10 + 180.0 < v9 )
          v9 = v9 - 360.0;
        if ( v10 - 180.0 > v9 )
          v9 = v9 + 360.0;
      }
    }
    else
    {
      v9 = a3;
    }
    v11 = (v9 - *(float *)(v5 + 8)) / (*(float *)(v5 + 12) - *(float *)(v5 + 8));
    *a4 = v11;
    if ( v11 >= 0.0 )
    {
      if ( v11 > 1.0 )
        *a4 = 1.0;
    }
    else
    {
      *a4 = 0.0;
    }
    result = (1.0 - *a4) * *(float *)(v5 + 8) + *a4 * *(float *)(v5 + 12);
    if ( (*(_BYTE *)(v5 + 4) & 0x38) != 0 && *(float *)(v5 + 8) > (double)*(float *)(v5 + 12) )
      return result * -1.0;
  }
  else
  {
    *a4 = 0.0;
    return a3;
  }
  return result;
}
