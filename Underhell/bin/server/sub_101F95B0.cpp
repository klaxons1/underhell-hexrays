float *__thiscall sub_101F95B0(char *this)
{
  float *result; // eax
  float *v2; // edx
  int i; // ecx

  result = (float *)this;
  v2 = (float *)(this + 56);
  for ( i = 14; i >= 0; --i )
  {
    v2[1] = 0.0;
    *v2 = 0.0;
    v2[2] = 0.0;
    v2[3] = 0.0;
    v2 += 4;
  }
  *result = 0.0;
  result[1] = 0.0;
  result[2] = 0.0;
  result[3] = 0.0;
  result[4] = 0.0;
  result[5] = 0.0;
  result[6] = 0.0;
  result[7] = 0.0;
  result[8] = 0.0;
  result[9] = 0.0;
  result[10] = 0.0;
  result[11] = 0.0;
  result[12] = 0.0;
  result[74] = 0.0;
  result[13] = -1.0;
  result[75] = 0.0;
  return result;
}
