int __cdecl sub_1013B9F0(float *a1, float *a2)
{
  float *v2; // eax
  double v3; // st7
  int result; // eax
  double v5; // st7
  double v6; // st7

  v2 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 144))(dword_1041315C);
  *a2 = v2[1] * a1[1] + *v2 * *a1 + v2[2] * a1[2] + v2[3];
  a2[1] = v2[5] * a1[1] + v2[4] * *a1 + v2[6] * a1[2] + v2[7];
  v3 = v2[13] * a1[1] + v2[12] * *a1 + v2[14] * a1[2] + v2[15];
  a2[2] = 0.0;
  if ( v3 >= 0.001 )
  {
    v6 = 1.0 / v3;
    result = 0;
    *a2 = *a2 * v6;
    v5 = v6 * a2[1];
  }
  else
  {
    result = 1;
    *a2 = *a2 * 100000.0;
    v5 = 100000.0 * a2[1];
  }
  a2[1] = v5;
  return result;
}
