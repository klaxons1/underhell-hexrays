double __stdcall sub_103890A0(float a1)
{
  double v1; // st6

  v1 = a1;
  if ( a1 < 400.0 )
    return -200.0;
  if ( v1 < 1000.0 )
    return (1.0 - (v1 - 400.0) * 0.0016666667) * -200.0;
  if ( a1 <= 2000.0 )
    return 0.0;
  return (a1 - 2000.0) * 0.0020000001 * 200.0;
}
