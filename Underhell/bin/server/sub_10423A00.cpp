double __cdecl sub_10423A00(float a1, float a2, float a3, float a4, float a5)
{
  double v5; // st7
  double v6; // st5
  double v7; // st4

  v5 = a5;
  v6 = v5 * v5 * v5;
  v7 = v6 * 2.0 - v5 * v5 * 3.0 + 1.0;
  return (1.0 - v7) * a2 + v7 * a1 + (a5 + v6 - 2.0 * (v5 * v5)) * a3 + (v6 - v5 * v5) * a4;
}
