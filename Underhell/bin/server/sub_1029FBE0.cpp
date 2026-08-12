char __thiscall sub_1029FBE0(float *this, float a2, float *a3, float *a4)
{
  double v5; // st7
  double v6; // st7

  if ( a3 )
  {
    v5 = sub_10134630(a2, this[29], this[30], 0.0, 1.0);
    *a3 = 3.0 * (v5 * v5) - v5 * (v5 * v5 + v5 * v5);
  }
  if ( a4 )
  {
    v6 = sub_10134630(a2, this[31], this[32], 0.0, 1.0);
    *a4 = 3.0 * (v6 * v6) - v6 * (v6 * v6 + v6 * v6);
  }
  return 1;
}
