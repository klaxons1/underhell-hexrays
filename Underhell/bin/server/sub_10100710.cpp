double __cdecl sub_10100710(int a1, int a2, int a3)
{
  int v3; // eax
  double v4; // st7

  v3 = sub_10245550(a2);
  v4 = sub_10100630(a1, v3, a2, a3);
  if ( 0.0 == v4 )
    return 0.0;
  else
    return 1.0 / v4;
}
