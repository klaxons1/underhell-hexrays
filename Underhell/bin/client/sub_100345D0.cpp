void __thiscall sub_100345D0(float *this, float *a2)
{
  double v2; // st7
  double v3; // st4
  double v4; // st5
  float v5; // [esp+0h] [ebp-4h]

  v2 = *this - *a2;
  v3 = this[1] - a2[1];
  v4 = this[2] - a2[2];
  v5 = v4 * v4 + v3 * v3 + v2 * v2;
  off_103EDFE0(v5);
}
