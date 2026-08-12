void __stdcall sub_10121A10(int a1, float a2, float a3)
{
  double v3; // st7
  float v4; // [esp+0h] [ebp-8h]

  *(_DWORD *)(a1 + 60) |= 1u;
  v3 = 1.0;
  if ( a2 <= 1.0 )
    v3 = a2;
  v4 = v3;
  sub_10121910((float *)(a1 + 16), v4, a3);
}
