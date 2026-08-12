void __cdecl sub_10043040(int a1, float *a2)
{
  double v2; // st7
  float v3; // eax
  float v4; // edx
  float v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v2 = *(float *)(a1 + 4);
  v3 = a2[59];
  v5[0] = a2[58];
  v4 = a2[60];
  v5[1] = v3;
  v5[2] = v4;
  if ( v2 != v5[0] )
  {
    v5[0] = v2;
    sub_10034BD0(a2, v5);
  }
}
