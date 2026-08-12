void __cdecl sub_1005BF50(int a1, float *a2)
{
  double v2; // st7

  v2 = *(float *)(a1 + 4);
  if ( v2 != a2[299] )
  {
    a2[306] = a2[305];
    a2[307] = v2;
    a2[299] = v2;
  }
}
