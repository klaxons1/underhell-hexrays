BOOL __stdcall sub_103664D0(int a1, int a2, int a3, float *a4)
{
  double v4; // st7
  bool v5; // c0
  bool v6; // c3
  double v7; // st7
  double v8; // st6
  bool v9; // c0

  v4 = *(float *)(a3 + 8) - *(float *)(a2 + 8);
  if ( a1 == 2 )
  {
    v5 = v4 > 0.0;
    v6 = 0.0 == v4;
    v7 = 1.0;
    if ( v5 || v6 )
      v8 = 1.5;
    else
      v8 = 0.5;
  }
  else if ( a1 == 8 )
  {
    v9 = v4 > 0.0;
    v7 = 1.0;
    if ( v9 )
      v8 = 0.5;
    else
      v8 = 4.0;
  }
  else
  {
    v8 = 1.0;
    v7 = 1.0;
  }
  *a4 = *a4 * v8;
  return v8 != v7;
}
