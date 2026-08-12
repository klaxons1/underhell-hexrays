bool __cdecl sub_1001C320(float *a1, float a2)
{
  double v2; // st7

  if ( a1[18] <= 1.0 )
  {
    v2 = a2;
  }
  else if ( a2 >= (double)a1[15] )
  {
    v2 = a2;
  }
  else
  {
    v2 = a2 + 1.0;
  }
  return v2 >= a1[16] && v2 < a1[18];
}
