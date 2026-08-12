float *__thiscall sub_10035FD0(unsigned __int8 *this, float *a2)
{
  float *result; // eax

  result = a2;
  *a2 = (double)this[84] * 0.0039215689;
  a2[1] = (double)this[85] * 0.0039215689;
  a2[2] = 0.0039215689 * (double)this[86];
  return result;
}
