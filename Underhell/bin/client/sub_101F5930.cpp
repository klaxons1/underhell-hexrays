float *__thiscall sub_101F5930(float *this, float *a2)
{
  float *result; // eax

  result = a2;
  this[255] = *a2;
  this[256] = a2[1];
  this[257] = a2[2];
  return result;
}
