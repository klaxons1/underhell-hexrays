double __thiscall sub_10111020(float *this)
{
  double v1; // st6
  double v2; // st5
  float v4; // [esp+0h] [ebp-4h]

  v1 = this[6] - this[3];
  v2 = this[5] - this[2];
  v4 = v2 * v2 + v1 * v1;
  return off_10689708(v4) * 0.5;
}
