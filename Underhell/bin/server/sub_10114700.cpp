char __cdecl sub_10114700(
        int a1,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        int a6,
        float *a7,
        float *a8,
        float a9,
        float *a10)
{
  double v10; // st6
  double v11; // st5
  double v12; // st4
  double v13; // st3
  double v14; // st2
  int v16[12]; // [esp+14h] [ebp-78h] BYREF
  int v17[12]; // [esp+44h] [ebp-48h] BYREF
  float v18[3]; // [esp+74h] [ebp-18h] BYREF
  float v19[3]; // [esp+80h] [ebp-Ch] BYREF

  sub_10113F00(a4, a3, (int)v16, a1, a2);
  sub_10113E80(a8, a7, a5, (int)v17, a6);
  v10 = a4[1] - a3[1];
  v11 = a4[2] - a3[2];
  v12 = *a8 - *a7;
  v13 = a8[1] - a7[1];
  v14 = a8[2] - a7[2];
  v18[0] = (*a4 - *a3) * 0.5;
  v18[1] = v10 * 0.5;
  v18[2] = v11 * 0.5;
  v19[0] = v12 * 0.5;
  v19[1] = v13 * 0.5;
  v19[2] = 0.5 * v14;
  return sub_10114030(v18, v19, (float *)v16, (int)v17, a9, a10);
}
