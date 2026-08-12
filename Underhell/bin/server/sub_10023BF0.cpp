int __stdcall sub_10023BF0(float *a1, float *a2, float *a3)
{
  double v3; // st4
  double v4; // st6
  double v5; // st4
  double v6; // st5
  double v7; // st6
  long double v8; // st7
  float *v9; // eax
  int v10; // edi
  double v11; // st6
  long double v12; // st7
  _BYTE v14[12]; // [esp+Ch] [ebp-18h] BYREF
  float v15[3]; // [esp+18h] [ebp-Ch] BYREF

  v3 = a1[1] - a2[1];
  v4 = v3 * v3;
  v5 = *a1 - *a2;
  v6 = v4;
  v7 = a1[2] - a2[2];
  v8 = v5 * v5 + v6 + v7 * v7;
  if ( v8 <= 160000.0 )
  {
    v12 = sqrt(v8) - 0.1;
    v10 = (int)(0.050000001 * v12);
    v9 = a3;
    v11 = *a3 * v12;
  }
  else
  {
    v9 = a3;
    v10 = 20;
    v11 = *a3 * 400.0;
    v12 = 400.0;
  }
  v15[0] = v11 + *a1;
  v15[1] = v9[1] * v12 + a1[1];
  v15[2] = v12 * v9[2] + a1[2];
  sub_100E8B30(a1, v14);
  return sub_10261F70(v14, v15, v10);
}
