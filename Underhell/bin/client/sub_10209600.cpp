void __thiscall sub_10209600(int this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  double v6; // st7
  double v8; // st5
  double v9; // st4
  double v10; // st3
  double v11; // st2
  int v12; // ecx
  double v13; // rtt
  double v14; // st3
  double v15; // st7
  double i; // st6
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  float *v20; // ebx
  __m128 v21; // xmm0
  double v22; // st0
  double v23; // rt1
  double v24; // rt2
  double v25; // st6
  double v26; // st2
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  double v29; // st7
  double v30; // st6
  double v31; // st6
  float *v32; // [esp+18h] [ebp-68h]
  int v33; // [esp+1Ch] [ebp-64h]
  float v34; // [esp+20h] [ebp-60h]
  float v35; // [esp+24h] [ebp-5Ch]
  float v36; // [esp+28h] [ebp-58h]
  float v37; // [esp+2Ch] [ebp-54h]
  float *v38; // [esp+30h] [ebp-50h]
  float v39; // [esp+34h] [ebp-4Ch]
  float v40; // [esp+38h] [ebp-48h]
  float v41; // [esp+3Ch] [ebp-44h]
  _OWORD v42[3]; // [esp+50h] [ebp-30h] BYREF

  v6 = 0.5;
  v33 = -1;
  if ( *(_BYTE *)(this + 44) )
  {
    v33 = 0x7FFFFFFF;
    v6 = 1.0;
  }
  v8 = *(float *)(this + 52);
  v9 = *(float *)(this + 56);
  v10 = *(float *)(this + 60);
  v35 = *(float *)(this + 60);
  v11 = *(float *)(this + 64);
  v34 = *(float *)(this + 64);
  if ( a4 )
  {
    v12 = a3;
    v36 = (v9 - v8) * v6;
    v13 = v10;
    v14 = 1.0 - v6;
    v15 = v13;
    for ( i = v11; ; i = v34 )
    {
      v17 = v12 / 4;
      v18 = v12 / 4 * a2[1581];
      v19 = v12 & 3;
      v32 = (float *)(a2[1517] + 4 * (v19 + v18));
      v20 = (float *)(a2[1525] + 4 * (v19 + v17 * a2[1589]));
      --a4;
      v21 = 0;
      v38 = (float *)(a2[1518] + 4 * (v19 + v17 * a2[1582]));
      v22 = *(float *)(this + 48) + *v20;
      v23 = (*v32 + *(float *)(this + 68)) * i;
      v24 = (v32[4] + *(float *)(this + 72)) * i;
      v25 = i * (v32[8] + *(float *)(this + 76));
      v26 = v22 * v15;
      v39 = v23 + v26;
      v21.m128_f32[0] = v39;
      v42[0] = _mm_shuffle_ps(v21, v21, 0);
      v40 = v26 + v24;
      v27 = 0;
      v27.m128_f32[0] = v40;
      v42[1] = _mm_shuffle_ps(v27, v27, 0);
      v41 = v15 * v22 + v25;
      v28 = 0;
      v28.m128_f32[0] = v41;
      v42[2] = _mm_shuffle_ps(v28, v28, 0);
      v29 = 1.0;
      v30 = COERCE_FLOAT(v33 & sub_102AFBB0(v42).m128_u32[0]);
      if ( *(_BYTE *)(this + 45) )
        v30 = 1.0 - v30;
      v37 = v8 + (v9 - v8) * v14;
      v31 = v30 * v36 + v37;
      if ( v31 <= 1.0 )
      {
        v29 = v31;
        if ( v31 < 0.0 )
          v29 = 0.0;
      }
      v12 = ++a3;
      *v20 = *v20 - v29 * *v38;
      if ( !a4 )
        break;
      v15 = v35;
    }
  }
}
