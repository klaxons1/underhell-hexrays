int __thiscall sub_10197360(float *this, float *a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7

  sub_10027DA0((int)this, a2);
  sub_10197200(this);
  v3 = this[499];
  *a2 = *a2 * v3;
  a2[1] = a2[1] * v3;
  a2[2] = v3 * a2[2];
  v4 = this[500];
  a2[4] = a2[4] * v4;
  a2[5] = a2[5] * v4;
  a2[6] = v4 * a2[6];
  v5 = this[501];
  a2[8] = a2[8] * v5;
  a2[9] = a2[9] * v5;
  a2[10] = v5 * a2[10];
  return sub_10039310((int)this);
}
