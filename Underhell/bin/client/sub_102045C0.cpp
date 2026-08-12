void __thiscall sub_102045C0(float *this, float a2, __m128 *a3, int a4)
{
  double v5; // st7
  double v6; // st7
  double v7; // st5
  double v8; // st5
  double X; // st7
  int v10; // eax
  __int32 v11; // edi
  __int32 v12; // ecx
  __int32 v13; // ebx
  double v14; // st7
  double v15; // st6
  double v16; // st4
  __int32 v17; // ecx
  double v18; // rt2
  double v19; // rt0
  double v20; // st4
  double v21; // st6
  double v22; // st4
  double v23; // st4
  double v24; // st4
  double v25; // st4
  float *v26; // ecx
  double v27; // st7
  double v28; // st5
  __m128 v29; // xmm0
  double v30; // st7
  float v31; // [esp+14h] [ebp-14h]
  float v32; // [esp+14h] [ebp-14h]
  float v33; // [esp+18h] [ebp-10h]
  float v34; // [esp+18h] [ebp-10h]
  float v35; // [esp+1Ch] [ebp-Ch]
  int v36; // [esp+1Ch] [ebp-Ch]
  float v37; // [esp+1Ch] [ebp-Ch]
  float v38; // [esp+20h] [ebp-8h] BYREF
  float v39; // [esp+24h] [ebp-4h]

  v5 = this[12] + *(float *)(a4 + 12);
  v31 = v5;
  if ( v5 < a2 )
  {
    v35 = (double)sub_101F89A0(a3) * this[15];
    v33 = this[13];
    if ( sub_101F7E80(a3->m128_f32, this, &v38) )
      v6 = v38 * v33;
    else
      v6 = v33;
    if ( v35 != 0.0 )
      v6 = v6 * v35;
    v7 = a3[2].m128_f32[1] - a2;
    v34 = a3[2].m128_f32[1];
    if ( 0.0 != this[11] && v31 > v7 )
      v7 = v31;
    v8 = a3[2].m128_f32[1] - v7;
    if ( v8 >= 4.0 )
      v8 = 4.0;
    v39 = v8;
    *(_DWORD *)(a4 + 4) = 0;
    v32 = v34 - v8;
    X = v6 * v8;
    *(float *)a4 = X;
    v10 = (int)floor(X);
    v11 = a3[2].m128_i32[2];
    v12 = a3[4].m128_i32[2];
    v36 = v10;
    if ( v12 < v11 + v10 )
    {
      v10 = v12 - v11;
      v36 = v12 - v11;
    }
    v13 = v11 + v10;
    v14 = v39 / (double)v36;
    a3[2].m128_i32[0] = (v11 + v10 + 3) / 4;
    a3[2].m128_i32[2] = v11 + v10;
    v15 = v14 + v32;
    v16 = v34;
    if ( v10 < 4 )
    {
      v25 = v15;
      v21 = v34;
    }
    else
    {
      v17 = v11 + 1;
      while ( 1 )
      {
        if ( v16 <= v15 )
          v15 = v16;
        v19 = v16;
        v20 = v15;
        v21 = v19;
        *(float *)(a3[381].m128_i32[1] + 4 * ((v11 & 3) + a3[397].m128_i32[1] * (v11 / 4))) = v20;
        v22 = v20 + v14;
        if ( v22 >= v19 )
          v22 = v21;
        *(float *)(a3[381].m128_i32[1] + 4 * ((v17 & 3) + a3[397].m128_i32[1] * (v17 / 4))) = v22;
        v23 = v22 + v14;
        if ( v23 >= v21 )
          v23 = v21;
        *(float *)(a3[381].m128_i32[1] + 4 * ((((_BYTE)v17 + 1) & 3) + a3[397].m128_i32[1] * ((v17 + 1) / 4))) = v23;
        v24 = v23 + v14;
        if ( v24 >= v21 )
          v24 = v21;
        v11 += 4;
        *(float *)(a3[381].m128_i32[1] + 4 * ((((_BYTE)v17 - 2) & 3) + a3[397].m128_i32[1] * ((v17 + 2) / 4))) = v24;
        v25 = v24 + v14;
        v17 += 4;
        if ( v11 >= v13 - 3 )
          break;
        v18 = v25;
        v16 = v21;
        v15 = v18;
      }
    }
    for ( ; v11 < v13; v25 = v25 + v14 )
    {
      v26 = (float *)(a3[381].m128_i32[1] + 4 * ((v11 & 3) + a3[397].m128_i32[1] * (v11 / 4)));
      if ( v25 >= v21 )
        v25 = v21;
      ++v11;
      *v26 = v25;
    }
    v27 = v32;
    if ( !byte_10465904 )
    {
      v28 = v21 - *(float *)(a3[4].m128_i32[0] + 540);
      if ( v28 >= v27 )
      {
        v32 = v28;
        v27 = v28;
      }
      a3[2].m128_f32[1] = v27;
      v29 = 0;
      v37 = v27;
      v29.m128_f32[0] = v32;
      a3[1] = _mm_shuffle_ps(v29, v29, 0);
      if ( v27 < v21 )
      {
        do
        {
          sub_101FA6F0(a3, 0.1);
          v30 = v37 + 0.1;
          v37 = v30;
        }
        while ( v30 < v34 );
      }
    }
  }
}
