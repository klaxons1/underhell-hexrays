int __thiscall sub_10041FA0(float *this, float a2, float a3)
{
  int result; // eax
  float v5; // [esp+10h] [ebp+Ch]

  v5 = a3 - a2;
  *this = (double)sub_10115FB0() * 0.000030518509 * v5 + a2;
  this[1] = (double)sub_10115FB0() * 0.000030518509 * v5 + a2;
  result = sub_10115FB0();
  this[2] = (double)result * 0.000030518509 * v5 + a2;
  return result;
}
