char __thiscall sub_10366440(float *this, float *a2, int a3, float *a4)
{
  double v5; // st4
  double v6; // st5
  float v8; // [esp+8h] [ebp-10h]

  if ( !sub_10042560(a2, a3, a4, 220.0, 384.0, 512.0) )
    return 0;
  v5 = a2[1] - a4[1];
  v6 = a2[2] - a4[2];
  v8 = v6 * v6 + v5 * v5 + (*a2 - *a4) * (*a2 - *a4);
  this[998] = off_10689708(v8);
  return 1;
}
