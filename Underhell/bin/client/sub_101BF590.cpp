int __cdecl sub_101BF590(float *a1)
{
  double v1; // st6
  double v2; // st7
  double v3; // st5
  double v4; // st7
  double v5; // st5
  double v6; // st5
  double v7; // st5
  int v9; // [esp+0h] [ebp-8h]

  v1 = 255.0;
  v2 = *a1 * 255.0;
  v3 = 0.0;
  if ( v2 > 255.0 || v2 >= 0.0 )
  {
    v3 = 255.0;
    if ( v2 <= 255.0 )
    {
      v1 = 255.0;
      v3 = v2;
      v4 = 0.0;
    }
    else
    {
      v4 = 0.0;
      v1 = 255.0;
    }
  }
  else
  {
    v4 = 0.0;
  }
  LOBYTE(v9) = (int)v3;
  v5 = a1[1] * v1;
  if ( v5 > v1 || v5 >= v4 )
  {
    if ( v5 > v1 )
      v5 = v1;
  }
  else
  {
    v5 = v4;
  }
  BYTE1(v9) = (int)v5;
  v6 = a1[2] * v1;
  if ( v6 > v1 || v6 >= v4 )
  {
    if ( v6 > v1 )
      v6 = v1;
  }
  else
  {
    v6 = v4;
  }
  BYTE2(v9) = (int)v6;
  v7 = a1[3] * v1;
  if ( v7 > v1 || v7 >= v4 )
  {
    v4 = v7;
    if ( v1 < v7 )
      v4 = v1;
  }
  HIBYTE(v9) = (int)v4;
  return v9;
}
