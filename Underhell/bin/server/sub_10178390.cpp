float *__thiscall sub_10178390(float *this, float *a2, int a3)
{
  float *result; // eax

  if ( a3 >= 2 )
  {
    *a2 = this[1];
    a2[1] = this[2];
    a2[2] = this[3];
    result = &a2[9 * a3 - 9];
    *result = this[4];
    result[1] = this[5];
    result[2] = this[6];
  }
  return result;
}
