void __cdecl sub_101A8440(int a1, float *a2)
{
  double v2; // st7

  v2 = *(float *)(a1 + 4);
  if ( v2 != a2[298] )
  {
    a2[299] = a2[298];
    a2[300] = *((float *)off_103DC81C + 3);
  }
  a2[298] = v2;
}
