void *__thiscall sub_100A4E50(float *this, float a2)
{
  void *result; // eax
  double v3; // st7

  this[3] = a2;
  this[2] = a2;
  result = off_103DC81C;
  v3 = *((float *)off_103DC81C + 3);
  this[4] = 0.0;
  this[1] = v3;
  *this = v3;
  return result;
}
