float *__thiscall sub_101A4860(void *this, float *a2, float *a3)
{
  double v3; // st7
  float *result; // eax

  v3 = sub_100A4EE0((int)this + 40, *((float *)off_103DC81C + 3));
  *a2 = -v3;
  a2[1] = -v3;
  a2[2] = -v3;
  result = a3;
  *a3 = v3;
  a3[1] = v3;
  a3[2] = v3;
  return result;
}
