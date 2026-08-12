char __stdcall sub_10150E50(float *a1, float a2)
{
  double v2; // st6
  double v3; // st7

  if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_104131A0)(dword_104131A0, a1, 0) & 1) != 0 )
    return 0;
  *a1 = a1[3] * a2 + *a1;
  a1[1] = a1[4] * a2 + a1[1];
  a1[2] = a2 * a1[5] + a1[2];
  if ( flt_1043D718 <= (double)a1[3] )
  {
    if ( flt_1043D718 >= (double)a1[3] )
    {
      v2 = 0.5;
      v3 = 5.0;
    }
    else
    {
      a1[3] = a1[3] - 5.0 / a1[7];
      v2 = 0.5;
      v3 = 5.0;
      a1[8] = 0.5;
      if ( flt_1043D718 > (double)a1[3] )
        a1[3] = flt_1043D718;
    }
  }
  else
  {
    a1[3] = 5.0 / a1[7] + a1[3];
    v2 = 0.5;
    v3 = 5.0;
    a1[8] = 0.5;
    if ( flt_1043D718 < (double)a1[3] )
      a1[3] = flt_1043D718;
  }
  if ( flt_1043D71C <= (double)a1[4] )
  {
    if ( flt_1043D71C < (double)a1[4] )
    {
      a1[4] = a1[4] - v3 / a1[7];
      a1[8] = v2;
      if ( flt_1043D71C > (double)a1[4] )
      {
        a1[4] = flt_1043D71C;
        return 1;
      }
    }
  }
  else
  {
    a1[4] = v3 / a1[7] + a1[4];
    a1[8] = v2;
    if ( flt_1043D71C < (double)a1[4] )
    {
      a1[4] = flt_1043D71C;
      return 1;
    }
  }
  return 1;
}
