int __cdecl sub_1007CF50(float a1)
{
  int v1; // ecx
  double v2; // st7
  int v4; // eax

  v2 = a1;
  if ( a1 < 80.0 )
  {
    v4 = 2;
    if ( v2 < 30.0 )
      v4 = 3;
    return v1 + 2 * v4 - 6;
  }
  else if ( v2 < 200.0 )
  {
    return v1 - 4;
  }
  else
  {
    return v1 - 6;
  }
}
