int __stdcall sub_100A0830(int a1)
{
  float v2; // [esp+0h] [ebp-8h]

  v2 = 1.0 - *(float *)(a1 + 44) / *(float *)(a1 + 40);
  return sub_101EE8A0(v2, 0.25);
}
