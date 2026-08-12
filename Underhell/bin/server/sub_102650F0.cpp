float *__cdecl sub_102650F0(float *a1, float a2)
{
  float v3; // [esp+0h] [ebp-4h]

  a1[2] = 0.0;
  v3 = a2 * 0.017453292;
  *a1 = cos(v3);
  a1[1] = sin(v3);
  return a1;
}
