double __cdecl sub_104260F0(float a1)
{
  double result; // st7
  float v2; // [esp+0h] [ebp-4h]

  result = 0.0;
  if ( a1 >= 0.0 )
  {
    if ( a1 < 0.94999999 )
    {
      v2 = a1 * 255.0;
      return flt_106F54E8[v2];
    }
    else
    {
      return 1.0;
    }
  }
  return result;
}
