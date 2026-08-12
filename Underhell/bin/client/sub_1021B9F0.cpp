__m128 *__thiscall sub_1021B9F0(void *this, int a2, float a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  __m128 *result; // eax
  __m128 v10; // xmm2
  int v11; // esi
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  unsigned int v14; // ecx
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  int v17; // ecx
  int v18; // ebx
  unsigned int v19; // edx
  __m128 *v21; // [esp+10h] [ebp-10h]
  __m128 *v22; // [esp+18h] [ebp-8h]

  v22 = *(__m128 **)(a2 + 6100);
  v4 = *(_DWORD *)(a2 + 6356) >> 2;
  v5 = (*(int (__fastcall **)(void *))(*(_DWORD *)this + 124))(this);
  v21 = *(__m128 **)(a2 + 4 * v5 + 6068);
  v6 = *(_DWORD *)(a2 + 4 * v5 + 6324) >> 2;
  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 120))(this);
  v8 = *(_DWORD *)(a2 + 4 * v7 + 6324);
  result = *(__m128 **)(a2 + 4 * v7 + 6068);
  v10 = *(__m128 *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 40);
  v12 = 0;
  v12.m128_f32[0] = *(float *)(a2 + 44);
  v13 = 0;
  v14 = v8 >> 2;
  v13.m128_f32[0] = a3;
  v15 = _mm_shuffle_ps(v12, v12, 0);
  v16 = _mm_shuffle_ps(v13, v13, 0);
  if ( v11 > 0 )
  {
    v17 = 16 * v14;
    v18 = 16 * v6;
    v19 = ((unsigned int)(v11 - 1) >> 2) + 1;
    do
    {
      *result = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_min_ps(v15, _mm_sub_ps(v10, *v22)), v16), *v21), *result);
      result = (__m128 *)((char *)result + v17);
      --v19;
      v21 = (__m128 *)((char *)v21 + v18);
      v22 += v4;
    }
    while ( v19 );
  }
  return result;
}
