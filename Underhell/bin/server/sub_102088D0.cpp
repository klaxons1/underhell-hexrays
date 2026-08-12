double __thiscall sub_102088D0(float *this)
{
  double v1; // st4
  double v2; // st6
  double v3; // st4
  double v4; // st5
  double v5; // st6
  float v7; // [esp+0h] [ebp-8h]

  v1 = this[493] - this[183];
  v2 = v1 * v1;
  v3 = this[492] - this[182];
  v4 = v2;
  v5 = this[494] - this[184];
  v7 = v3 * v3 + v4 + v5 * v5;
  return off_10689708(v7) / this[27];
}
