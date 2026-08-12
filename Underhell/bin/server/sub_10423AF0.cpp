void __cdecl sub_10423AF0(float *a1, float *a2, float *a3, float a4, float *a5)
{
  float *v5; // edx
  float *v6; // edx
  double v7; // st4
  double v8; // st3
  double v9; // rtt
  float v10; // [esp+4h] [ebp-20h] BYREF
  float v11; // [esp+8h] [ebp-1Ch]
  float v12; // [esp+Ch] [ebp-18h]
  float v13; // [esp+10h] [ebp-14h]
  float v14[4]; // [esp+14h] [ebp-10h] BYREF
  float v15; // [esp+30h] [ebp+Ch]
  float v16; // [esp+30h] [ebp+Ch]
  float v17; // [esp+30h] [ebp+Ch]

  sub_10422BE0(a3, a1, v14);
  sub_10422BE0(v5, a2, &v10);
  v7 = a4 * a4;
  v8 = v7 * a4;
  v15 = v8;
  *a5 = (v15 - v7) * (*v6 - v10)
      + *v6 * (1.0 - (v8 * 2.0 - v7 * 3.0 + 1.0))
      + (v8 * 2.0 - v7 * 3.0 + 1.0) * v10
      + (v15 - v7 * 2.0 + a4) * (v10 - v14[0]);
  v16 = v8;
  a5[1] = v6[1] * (1.0 - (v8 * 2.0 - v7 * 3.0 + 1.0))
        + (v8 * 2.0 - v7 * 3.0 + 1.0) * v11
        + (v16 - v7 * 2.0 + a4) * (v11 - v14[1])
        + (v16 - v7) * (v6[1] - v11);
  v17 = v8;
  a5[2] = v6[2] * (1.0 - (v8 * 2.0 - v7 * 3.0 + 1.0))
        + (v8 * 2.0 - v7 * 3.0 + 1.0) * v12
        + (v17 - v7 * 2.0 + a4) * (v12 - v14[2])
        + (v17 - v7) * (v6[2] - v12);
  v9 = v8 * 2.0 - v7 * 3.0 + 1.0;
  a5[3] = (v6[3] - v13) * (v8 - v7) + (a4 + v8 - 2.0 * v7) * (v13 - v14[3]) + v9 * v13 + (1.0 - v9) * v6[3];
  sub_10422DC0(a5);
}
