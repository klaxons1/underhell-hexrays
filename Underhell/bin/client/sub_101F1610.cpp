float *__cdecl sub_101F1610(float *a1, int a2, float a3, float a4, float a5, float a6, float *a7)
{
  double v7; // st6
  long double v8; // st6
  float v10; // [esp+Ch] [ebp-2Ch]
  int v11[3]; // [esp+14h] [ebp-24h] BYREF
  int v12[3]; // [esp+20h] [ebp-18h] BYREF
  int v13[3]; // [esp+2Ch] [ebp-Ch] BYREF

  sub_101EE040(*(float *)&a2, (float *)v13, (float *)v12, (float *)v11);
  v7 = a5;
  if ( a5 < 1.0 || a5 > 179.0 )
    v7 = 90.0;
  v8 = atan2(tan(v7 * 0.017453292 * 0.5) / a6, 1.0);
  v10 = v8 * 57.29578 + v8 * 57.29578;
  return sub_101F13D0(a1, (float *)v13, (float *)v12, (float *)v11, a3, a4, a5, v10, a7);
}
