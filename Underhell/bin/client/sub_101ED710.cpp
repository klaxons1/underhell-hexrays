void __thiscall sub_101ED710(float *this)
{
  long double v1; // st7

  v1 = 1.0 / (sqrt(this[2] * this[2] + this[1] * this[1] + *this * *this) + 0.00000011920929);
  *this = *this * v1;
  this[1] = v1 * this[1];
  this[2] = v1 * this[2];
}
