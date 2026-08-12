int __thiscall sub_1001EF40(float *this, float a2, float a3)
{
  int result; // eax
  float v5; // [esp+10h] [ebp+Ch]

  v5 = a3 - a2;
  *this = (double)sub_10219A30() * 0.000030518509 * v5 + a2;
  this[1] = (double)sub_10219A30() * 0.000030518509 * v5 + a2;
  result = sub_10219A30();
  this[2] = (double)result * 0.000030518509 * v5 + a2;
  return result;
}
