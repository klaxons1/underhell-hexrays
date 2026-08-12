void __cdecl sub_100430E0(int a1, float *a2)
{
  double v2; // st7
  float v3; // eax
  double v4; // st6
  float v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v2 = *(float *)(a1 + 4);
  v3 = a2[59];
  v5[0] = a2[58];
  v4 = a2[60];
  v5[1] = v3;
  if ( v2 != v4 )
  {
    v5[2] = v2;
    sub_10034BD0(a2, v5);
  }
}
