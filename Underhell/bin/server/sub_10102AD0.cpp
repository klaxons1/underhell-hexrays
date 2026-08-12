BOOL __thiscall sub_10102AD0(float *this, float a2, float a3, float *a4, float *a5, float *a6)
{
  double v8; // st4
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st6
  long double v13; // st7
  long double v14; // st6
  long double v15; // st5
  long double v16; // st3

  sub_101014B0(this, a4, a5);
  v8 = this[13] * a4[1] + this[12] * *a4 + this[14] * a4[2];
  v9 = v8 * v8;
  v10 = this[10] * a4[1] + this[9] * *a4 + this[11] * a4[2];
  v11 = v9;
  v12 = this[16] * a4[1] + this[15] * *a4 + this[17] * a4[2];
  v13 = sqrt(v10 * v10 + v11 + v12 * v12);
  v14 = a2;
  v15 = ((v14 * v14 - a3 * a3) / v13 + v13) * 0.5;
  v16 = sqrt(v14 * v14 - v15 * v15);
  *a6 = this[2] * 0.0 + this[1] * v16 + *this * v15;
  a6[1] = this[4] * v16 + this[3] * v15 + this[5] * 0.0;
  a6[2] = v16 * this[7] + this[6] * v15 + 0.0 * this[8];
  return v15 > v13 - a3 && v14 > v15;
}
