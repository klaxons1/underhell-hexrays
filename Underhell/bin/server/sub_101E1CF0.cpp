int __cdecl sub_101E1CF0(int a1, int a2)
{
  double v2; // st7
  int result; // eax

  v2 = (double)a1 / (double)a2;
  if ( a1 < 0 )
    return 5;
  if ( !a1 )
    return 1;
  if ( v2 < 0.33 )
    return 2;
  result = 3;
  if ( v2 >= 0.66 )
    return 4;
  return result;
}
