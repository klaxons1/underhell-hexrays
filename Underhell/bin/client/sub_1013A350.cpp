int __thiscall sub_1013A350(float *this, float *a2, int a3, float a4)
{
  int result; // eax

  *a2 = this[11] * a4 + *a2;
  a2[1] = this[12] * a4 + a2[1];
  a2[2] = this[13] * a4 + a2[2];
  result = a3;
  *(float *)(a3 + 8) = a4 * this[14] + *(float *)(a3 + 8);
  return result;
}
