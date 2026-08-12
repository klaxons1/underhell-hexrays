void __cdecl sub_100315D0(int a1)
{
  double v1; // st6
  double v2; // st7
  double v3; // st7

  if ( *(int *)a1 >= -1 )
  {
    if ( *(int *)a1 > 0xFFFF )
      *(_DWORD *)a1 = 0xFFFF;
  }
  else
  {
    *(_DWORD *)a1 = -1;
  }
  if ( *(float *)(a1 + 20) >= -2.0 )
  {
    if ( *(float *)(a1 + 20) > 2.0 )
      *(float *)(a1 + 20) = 2.0;
    v1 = -2.0;
    v2 = 2.0;
  }
  else
  {
    v1 = -2.0;
    v2 = 2.0;
    *(float *)(a1 + 20) = -2.0;
  }
  if ( v1 <= *(float *)(a1 + 4) )
  {
    if ( v2 < *(float *)(a1 + 4) )
      *(float *)(a1 + 4) = v2;
  }
  else
  {
    *(float *)(a1 + 4) = v1;
  }
  v3 = -5.0;
  if ( *(float *)(a1 + 8) < -5.0 || (v3 = 5.0, *(float *)(a1 + 8) > 5.0) )
    *(float *)(a1 + 8) = v3;
}
