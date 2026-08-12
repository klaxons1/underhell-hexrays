double __thiscall sub_100196B0(float *this)
{
  double result; // st7
  float v3; // [esp+0h] [ebp-8h]

  v3 = this[1] * this[1] + *this * *this;
  result = off_10689708(v3);
  if ( 0.0 == result )
  {
    this[1] = 0.0;
    *this = 0.0;
  }
  else
  {
    *this = *this * (1.0 / result);
    this[1] = 1.0 / result * this[1];
  }
  return result;
}
