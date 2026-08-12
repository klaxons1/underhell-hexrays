void __stdcall sub_10233900(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st3
  double v9; // st2

  v4 = *a2 - *a3;
  v5 = a2[1] - a3[1];
  v6 = a2[2] - a3[2];
  v7 = *a2 - *a1;
  v8 = a2[1] - a1[1];
  v9 = a2[2] - a1[2];
  *a4 = v9 * v5 - v8 * v6;
  a4[1] = v6 * v7 - v9 * v4;
  a4[2] = v8 * v4 - v5 * v7;
  off_103EDFF0(a4);
}
