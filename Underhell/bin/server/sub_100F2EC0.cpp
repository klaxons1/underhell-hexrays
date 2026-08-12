float *__stdcall sub_100F2EC0(float *a1)
{
  double v1; // st7
  float *result; // eax

  *a1 = (double)sub_10219A30() * 0.000030518509 * 1200.0 - 600.0;
  a1[1] = (double)sub_10219A30() * 0.000030518509 * 1200.0 - 600.0;
  v1 = (double)sub_10219A30();
  result = a1;
  a1[2] = v1 * 0.000030518509 * 1200.0 - 600.0;
  return result;
}
