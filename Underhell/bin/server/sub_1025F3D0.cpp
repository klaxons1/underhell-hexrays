void __cdecl sub_1025F3D0(int a1, float a2)
{
  int v2; // ecx
  double v3; // st7
  double v4; // st6

  v2 = 0;
  while ( fabs(*(float *)(a1 + 4 * v2)) <= 1.0 - a2 )
  {
    if ( ++v2 >= 3 )
      return;
  }
  if ( *(float *)(a1 + 4 * v2) >= 0.0 )
  {
    v4 = 1.0;
    v3 = 0.0;
  }
  else
  {
    v3 = 0.0;
    v4 = -1.0;
  }
  *(float *)(a1 + 4 * v2) = v4;
  *(float *)(a1 + 4 * ((v2 + 1) % 3)) = v3;
  *(float *)(a1 + 4 * ((v2 + 2) % 3)) = v3;
}
