__m128 *__thiscall sub_1021B090(__m128 *this, _DWORD *a2, int a3, int a4)
{
  double v4; // st7
  __m128 v5; // xmm3
  double v6; // st6
  __int32 v7; // ecx
  __m128 *v8; // esi
  int v9; // ebx
  __m128 v10; // xmm0
  double v11; // st6
  float v12; // xmm1_4
  __m128 v13; // xmm0
  unsigned int v14; // edi
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 *result; // eax
  float v18; // [esp+8h] [ebp-6Ch]
  float v19; // [esp+8h] [ebp-6Ch]
  int v20; // [esp+8h] [ebp-6Ch]
  __m128 *v21; // [esp+Ch] [ebp-68h]
  __m128 v22; // [esp+14h] [ebp-60h]
  __m128 v23; // [esp+24h] [ebp-50h]
  __m128 v24; // [esp+34h] [ebp-40h]
  _OWORD v25[3]; // [esp+44h] [ebp-30h] BYREF

  v4 = this[3].m128_f32[0];
  v5 = this[4];
  v6 = this[3].m128_f32[1];
  v7 = this[2].m128_i32[3];
  v8 = (__m128 *)a2[1517];
  v21 = (__m128 *)a2[v7 + 1517];
  v22 = v5;
  if ( ((1 << v7) & 0x1010) != 0 )
  {
    v4 = v4 * 0.0174532925199433;
    v6 = v6 * 0.0174532925199433;
  }
  v9 = a2[8];
  v10 = 0;
  v11 = (v6 - v4) * 0.5;
  v18 = v11;
  v10.m128_f32[0] = v18;
  v19 = v4 + v11;
  v23 = _mm_shuffle_ps(v10, v10, 0);
  v12 = v19;
  v13 = 0;
  v20 = a2[v7 + 1581] >> 2;
  v13.m128_f32[0] = v12;
  v24 = _mm_shuffle_ps(v13, v13, 0);
  v14 = 48 * (a2[1581] / 0xCu);
  while ( 1 )
  {
    v15 = _mm_mul_ps(v8[1], v5);
    v16 = _mm_mul_ps(v8[2], v5);
    v25[0] = _mm_mul_ps(*v8, v5);
    v25[1] = v15;
    v25[2] = v16;
    *v21 = _mm_add_ps(_mm_mul_ps(sub_102AFBB0(v25), v23), v24);
    result = &v21[v20];
    v8 = (__m128 *)((char *)v8 + v14);
    --v9;
    v21 = (__m128 *)((char *)v21 + v20 * 16);
    if ( !v9 )
      break;
    v5 = v22;
  }
  return result;
}
