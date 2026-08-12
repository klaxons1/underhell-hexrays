float *__cdecl sub_10425040(float *a1, float *a2, float *a3)
{
  float *result; // eax

  sub_104227F0(a1, a3);
  result = a2;
  a3[3] = *a2;
  a3[7] = a2[1];
  a3[11] = a2[2];
  return result;
}
