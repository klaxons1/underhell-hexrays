double __thiscall sub_101ED6D0(float *this)
{
  double result; // st7
  double v2; // st6

  result = sqrt(this[2] * this[2] + this[1] * this[1] + *this * *this);
  v2 = 1.0 / (result + 0.00000011920929);
  *this = *this * v2;
  this[1] = v2 * this[1];
  this[2] = v2 * this[2];
  return result;
}
