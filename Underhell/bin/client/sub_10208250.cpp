void __thiscall sub_10208250(int this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  double v6; // st7
  double v8; // st5
  double v9; // st4
  int v10; // ebx
  double v11; // rt1
  double v12; // st6
  int v13; // ecx
  float *v14; // edx
  float *v15; // ebx
  __m128 v16; // xmm0
  double v17; // rt1
  double v18; // st6
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  double v21; // st7
  double v22; // st6
  double v23; // st6
  int v24; // [esp+18h] [ebp-68h]
  float v25; // [esp+1Ch] [ebp-64h]
  float v26; // [esp+20h] [ebp-60h]
  float v27; // [esp+24h] [ebp-5Ch]
  float v28; // [esp+28h] [ebp-58h]
  float v29; // [esp+28h] [ebp-58h]
  float v30; // [esp+2Ch] [ebp-54h]
  float v31; // [esp+2Ch] [ebp-54h]
  float v32; // [esp+30h] [ebp-50h]
  float i; // [esp+30h] [ebp-50h]
  float v34; // [esp+34h] [ebp-4Ch]
  float v35; // [esp+34h] [ebp-4Ch]
  float v36; // [esp+38h] [ebp-48h]
  float v37; // [esp+38h] [ebp-48h]
  float v38; // [esp+3Ch] [ebp-44h]
  _OWORD v39[3]; // [esp+50h] [ebp-30h] BYREF

  v6 = 0.5;
  v24 = -1;
  if ( *(_BYTE *)(this + 48) )
  {
    v24 = 0x7FFFFFFF;
    v6 = 1.0;
  }
  v8 = *(float *)(this + 56);
  v9 = *(float *)(this + 60);
  if ( ((1 << *(_DWORD *)(this + 44)) & 0x1010) != 0 )
  {
    v8 = v8 * 0.0174532925199433;
    v9 = v9 * 0.0174532925199433;
  }
  v10 = a3;
  v25 = *(float *)(this + 68);
  v11 = *(float *)(this + 64);
  v26 = (v9 - v8) * v6;
  v27 = (v9 - v8) * (1.0 - v6) + v8;
  v12 = *(float *)(this + 52) + *(float *)(a2[1525] + 4 * ((a3 & 3) + a2[1589] * (a3 / 4)));
  v28 = v12 * v11;
  v30 = v28;
  v32 = v11 * v12;
  v34 = (double)(unsigned int)Plat_MSTime() * *(float *)(this + 84);
  v36 = (double)(unsigned int)Plat_MSTime() * *(float *)(this + 84);
  v29 = v34 + v28;
  v31 = v36 + v30;
  for ( i = (double)(unsigned int)Plat_MSTime() * *(float *)(this + 84) + v32; a4; ++a3 )
  {
    v13 = v10 & 3;
    v14 = (float *)(a2[1517] + 4 * (v13 + v10 / 4 * a2[1581]));
    --a4;
    v15 = (float *)(a2[*(_DWORD *)(this + 44) + 1517] + 4 * (v13 + v10 / 4 * a2[*(_DWORD *)(this + 44) + 1581]));
    v16 = 0;
    v17 = (v14[8] + *(float *)(this + 80)) * v25;
    v35 = (*v14 + *(float *)(this + 72)) * v25 + v29;
    v16.m128_f32[0] = v35;
    v18 = (v14[4] + *(float *)(this + 76)) * v25 + v31;
    v39[0] = _mm_shuffle_ps(v16, v16, 0);
    v19 = 0;
    v37 = v18;
    v19.m128_f32[0] = v37;
    v39[1] = _mm_shuffle_ps(v19, v19, 0);
    v20 = 0;
    v38 = v17 + i;
    v20.m128_f32[0] = v38;
    v39[2] = _mm_shuffle_ps(v20, v20, 0);
    v21 = 1.0;
    v22 = COERCE_FLOAT(v24 & sub_102AFBB0(v39).m128_u32[0]);
    if ( *(_BYTE *)(this + 49) )
      v22 = 1.0 - v22;
    v23 = v22 * v26 + v27;
    if ( ((1 << *(_DWORD *)(this + 44)) & 0x10080) == 0 || v23 <= 1.0 && (v21 = v23, v23 = 0.0, v21 < 0.0) )
      v21 = v23;
    *v15 = v21;
    v10 = a3 + 1;
  }
}
