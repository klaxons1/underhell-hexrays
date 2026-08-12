bool __thiscall sub_1018AC50(float *this, float *a2, float a3)
{
  double v3; // st7

  v3 = a3;
  return *a2 + a3 >= this[1] && *a2 - v3 <= this[4] && v3 + a2[1] >= this[2] && a2[1] - v3 <= this[5];
}
