bool __fastcall sub_101135C0(float *a1, float *a2, __m128 *a3, unsigned int a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st3
  __m128 v10; // [esp+4h] [ebp-18h] BYREF
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]

  if ( a3[4].m128_i8[1] )
  {
    v10.m128_f32[3] = *a1 - a3[3].m128_f32[0];
    v11 = a1[1] - a3[3].m128_f32[1];
    v12 = a1[2] - a3[3].m128_f32[2];
    v10.m128_f32[0] = *a2 + a3[3].m128_f32[0];
    v10.m128_f32[1] = a2[1] + a3[3].m128_f32[1];
    v10.m128_f32[2] = a2[2] + a3[3].m128_f32[2];
    return sub_10113460((__m128 *)&v10.m128_u32[3], &v10, a3, a3 + 1, a4);
  }
  else
  {
    v4 = a3->m128_f32[0] - a3[3].m128_f32[0];
    v10.m128_f32[0] = v4;
    v5 = a3->m128_f32[1] - a3[3].m128_f32[1];
    v10.m128_f32[1] = v5;
    v6 = a3->m128_f32[2] - a3[3].m128_f32[2];
    v10.m128_f32[2] = v6;
    v7 = a3->m128_f32[0] + a3[3].m128_f32[0];
    v10.m128_f32[3] = v7;
    v8 = a3[3].m128_f32[1] + a3->m128_f32[1];
    v11 = v8;
    v12 = a3[3].m128_f32[2] + a3->m128_f32[2];
    if ( 0.0 != *(float *)&a4 )
    {
      v10.m128_f32[0] = v4 - *(float *)&a4;
      v10.m128_f32[1] = v5 - *(float *)&a4;
      v10.m128_f32[2] = v6 - *(float *)&a4;
      v10.m128_f32[3] = v7 + *(float *)&a4;
      v11 = v8 + *(float *)&a4;
      v12 = *(float *)&a4 + v12;
    }
    return sub_101133F0(a1, a2, v10.m128_f32, &v10.m128_f32[3]);
  }
}
