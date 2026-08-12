void __thiscall sub_1006BA60(int *this, float *a2, float *a3, int a4, int a5, int a6, float *a7)
{
  long double v7; // st7
  long double v8; // st6
  long double v9; // st7
  double v10; // st6
  float v11[6]; // [esp+0h] [ebp-1Ch] BYREF
  __int16 v12; // [esp+18h] [ebp-4h]

  if ( !a2 || (v7 = fabs(a2[12] - a2[11]), v8 = fabs(a2[10] - a2[9]), 0.0 == v8) || v7 == 0.0 )
    v9 = 1.0;
  else
    v9 = v7 / v8;
  v11[0] = *a3;
  v10 = a3[1];
  v12 = 1;
  v11[1] = v10;
  v11[2] = a3[2];
  v11[3] = 2.0;
  v11[4] = v9;
  v11[5] = 0.0625;
  sub_1006B980(v11, this + 1, a4, a5, a6, a7);
}
