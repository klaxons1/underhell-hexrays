int __thiscall sub_10255B40(int this, int a2, int a3, int a4, float *a5, float *a6)
{
  double v8; // st7
  long double v9; // st5
  double v10; // st4
  double v11; // st7
  float v12[3]; // [esp+4h] [ebp-18h] BYREF
  float v13; // [esp+10h] [ebp-Ch] BYREF
  float v14; // [esp+14h] [ebp-8h]
  float v15; // [esp+18h] [ebp-4h]
  float v16; // [esp+28h] [ebp+Ch]

  if ( 0.0 == *(float *)(this + 8) )
    return 0;
  v13 = flt_106F1CB4;
  v8 = (double)(a3 % 15 + 5);
  v14 = flt_106F1CB8;
  v15 = flt_106F1CBC;
  v16 = v8;
  v14 = cos(v8 * (*(float *)(dword_106B31C8 + 12) + 1.0)) * 30.0 + (double)*(int *)(this + 4);
  sub_10422220(&v13, v12);
  v9 = 3.0 * (sin((*(float *)(dword_106B31C8 + 12) + 1.0) * v16) + 1.1);
  v10 = *(float *)(this + 8);
  v11 = v12[1] * 3.0 * v10;
  *a5 = v12[0] * 3.0 * v10;
  a5[1] = v11;
  a5[2] = v9 * v10;
  *a6 = flt_106F1CA8;
  a6[1] = flt_106F1CAC;
  a6[2] = flt_106F1CB0;
  return 4;
}
