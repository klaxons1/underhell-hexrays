float *__cdecl sub_100FE9D0(float a1, int a2, int a3, float *a4)
{
  float *result; // eax
  int v5[4]; // [esp+8h] [ebp-20h] BYREF
  float v6[4]; // [esp+18h] [ebp-10h] BYREF

  sub_10422E20(a2, a1, (int)v5);
  sub_10422EC0(v5, a3, v6);
  sub_10422DC0(v6);
  result = a4;
  *a4 = v6[0];
  a4[1] = v6[1];
  a4[2] = v6[2];
  a4[3] = v6[3];
  return result;
}
