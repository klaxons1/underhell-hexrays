float *__stdcall sub_10195980(float *a1, int a2)
{
  float *result; // eax
  double v3; // st6
  double v4; // st7

  result = a1;
  v3 = 0.0 * *((float *)off_103DC81C + 4);
  v4 = *((float *)off_103DC81C + 4) * -1000.0;
  a1[6] = v3 + a1[6];
  a1[7] = v3 + a1[7];
  a1[8] = v4 + a1[8];
  return result;
}
