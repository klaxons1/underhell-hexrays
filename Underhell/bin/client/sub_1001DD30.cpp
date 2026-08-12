double __cdecl sub_1001DD30(int a1, int a2, int a3)
{
  int v3; // eax
  double v4; // st7

  v3 = sub_10127960(a2);
  v4 = sub_1001DC50(a1, v3, a2, a3);
  if ( 0.0 == v4 )
    return 0.0;
  else
    return 1.0 / v4;
}
