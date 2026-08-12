void __cdecl sub_1004D6F0(int a1, float *a2)
{
  double v2; // st7
  double v3; // st7
  float v4; // [esp+8h] [ebp+8h]

  v2 = *(float *)(a1 + 4);
  v4 = *(float *)(a1 + 4);
  if ( -1.0 == v2 )
  {
    v3 = sub_1009B850() - 1.0;
    a2[307] = v3;
    a2[308] = v3;
  }
  else
  {
    a2[307] = sub_1009B850();
    a2[308] = sub_1009B850() + v4;
  }
  a2[300] = v4;
}
