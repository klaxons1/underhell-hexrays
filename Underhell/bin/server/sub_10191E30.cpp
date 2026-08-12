double __cdecl sub_10191E30(float a1, float a2)
{
  double v2; // st5

  if ( a1 >= 0.0 )
    v2 = 0.5;
  else
    v2 = -0.5;
  return a2 * (double)((int)(a1 + v2 * a2) / (int)a2);
}
