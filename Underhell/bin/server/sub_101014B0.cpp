float *__thiscall sub_101014B0(float *this, float *a2, float *a3)
{
  float *result; // eax
  long double v4; // st7
  double v5; // st7
  long double v6; // st7

  this[9] = *a2;
  this[10] = a2[1];
  result = a3;
  this[11] = a2[2];
  v4 = sqrt(this[10] * this[10] + this[9] * this[9] + this[11] * this[11]);
  this[9] = this[9] / v4;
  this[10] = this[10] / v4;
  this[11] = this[11] / v4;
  v5 = result[1] * this[10] + this[9] * *result + this[11] * result[2];
  this[12] = *a3 - this[9] * v5;
  this[13] = a3[1] - this[10] * v5;
  this[14] = a3[2] - v5 * this[11];
  v6 = sqrt(this[13] * this[13] + this[12] * this[12] + this[14] * this[14]);
  this[12] = this[12] / v6;
  this[13] = this[13] / v6;
  this[14] = this[14] / v6;
  this[15] = this[10] * this[14] - this[11] * this[13];
  this[16] = this[12] * this[11] - this[9] * this[14];
  this[17] = this[9] * this[13] - this[12] * this[10];
  *this = this[9];
  this[1] = this[12];
  this[2] = this[15];
  this[3] = this[10];
  this[4] = this[13];
  this[5] = this[16];
  this[6] = this[11];
  this[7] = this[14];
  this[8] = this[17];
  return result;
}
