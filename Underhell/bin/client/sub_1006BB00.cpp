void __thiscall sub_1006BB00(char *this, float *a2, float *a3, int a4, int a5, int a6, float *a7)
{
  long double v7; // st7
  long double v8; // st6
  long double v9; // st7
  float *v10; // ecx
  double v11; // st6
  float v12[6]; // [esp+0h] [ebp-1Ch] BYREF
  __int16 v13; // [esp+18h] [ebp-4h]

  if ( !a2 || (v7 = fabs(a2[12] - a2[11]), v8 = fabs(a2[10] - a2[9]), 0.0 == v8) || v7 == 0.0 )
    v9 = 1.0;
  else
    v9 = v7 / v8;
  v12[0] = *a3;
  v10 = (float *)(this + 4);
  v11 = a3[1];
  v13 = 1;
  v12[1] = v11;
  v12[2] = a3[2];
  v12[3] = v10[13];
  v12[4] = v9;
  v12[5] = 0.0625;
  sub_1006B980(v12, (int *)v10, a4, a5, a6, a7);
}
