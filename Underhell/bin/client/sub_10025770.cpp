double __thiscall sub_10025770(float *this, int a2, int a3, float a4)
{
  double result; // st7

  result = a4;
  if ( a2 )
  {
    if ( a3 >= 0 )
    {
      result = sub_1001D8C0(a2, a3, a4, &a4);
      this[a3 + 351] = a4;
    }
  }
  return result;
}
