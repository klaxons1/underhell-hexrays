float *__cdecl sub_101FB4C0(float *a1, float *a2, float a3)
{
  double v3; // st5
  bool v4; // c0
  bool v5; // c3
  double v6; // st5
  double v7; // st7
  float *result; // eax
  float v9; // [esp+0h] [ebp-14h]

  v3 = a3;
  if ( a3 <= 100.0 )
  {
    v7 = *(float *)(dword_106EFD94 + 44);
  }
  else
  {
    v4 = v3 > 1000.0;
    v5 = 1000.0 == v3;
    v6 = 1000.0;
    if ( !v4 && !v5 )
      v6 = a3;
    v9 = v6;
    v7 = sub_101E1A80(v9, 100.0, 600.0, *(float *)(dword_106EFD94 + 44), *(float *)(dword_106EFD4C + 44));
  }
  result = a1;
  *a1 = *a2 * v7;
  a1[1] = a2[1] * v7;
  a1[2] = v7 * a2[2];
  return result;
}
