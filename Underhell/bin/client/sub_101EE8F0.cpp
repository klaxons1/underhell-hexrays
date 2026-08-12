long double __cdecl sub_101EE8F0(float a1, float a2)
{
  double v2; // st7
  long double v3; // st6

  v2 = a1;
  v3 = 1.0 - a2;
  if ( a1 >= 0.5 )
  {
    if ( v3 != flt_103EE014 )
      flt_10459258 = __FYL2X__(v3, 0.6931471805599453094) * -1.4427;
    return 1.0 - pow(2.0 - v2 * 2.0, flt_10459258) * 0.5;
  }
  else
  {
    if ( v3 != flt_103EE014 )
      flt_10459258 = __FYL2X__(v3, 0.6931471805599453094) * -1.4427;
    return pow(v2 + v2, flt_10459258) * 0.5;
  }
}
