int __thiscall sub_10203EF0(int this, int a2, float a3, int a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st7
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  double v11; // st7
  double v12; // st4
  double v13; // st7
  double v14; // st5
  double v15; // st7
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st5
  double v24; // st7
  double v25; // rt2
  int v26; // edi
  double v27; // st7
  double X; // st7
  double v29; // st7
  int v30; // eax
  int v31; // edi
  int v32; // ebx
  double v33; // st7
  double v34; // st6
  double v35; // st5
  int v36; // ecx
  double v37; // rt1
  double v38; // rtt
  double v39; // st5
  double v40; // st6
  double v41; // st5
  double v42; // st5
  double v43; // st5
  double v44; // st5
  float *v45; // ecx
  float v46; // [esp+14h] [ebp-64h]
  float v47; // [esp+14h] [ebp-64h]
  int v48; // [esp+18h] [ebp-60h]
  float v49; // [esp+18h] [ebp-60h]
  float v50; // [esp+1Ch] [ebp-5Ch]
  float v51; // [esp+1Ch] [ebp-5Ch]
  int v52; // [esp+1Ch] [ebp-5Ch]
  float v53; // [esp+20h] [ebp-58h]
  float v54; // [esp+24h] [ebp-54h]
  float v55; // [esp+24h] [ebp-54h]
  float v56; // [esp+28h] [ebp-50h]
  float v57; // [esp+2Ch] [ebp-4Ch]
  float v58; // [esp+2Ch] [ebp-4Ch]
  float v59; // [esp+30h] [ebp-48h]
  float v60; // [esp+30h] [ebp-48h]
  float v61; // [esp+34h] [ebp-44h]
  float v62; // [esp+34h] [ebp-44h]
  float v63; // [esp+38h] [ebp-40h]
  float v64; // [esp+3Ch] [ebp-3Ch]
  _OWORD v65[3]; // [esp+48h] [ebp-30h] BYREF

  v48 = -1;
  v56 = (double)sub_101F89A0((_DWORD *)a2) * *(float *)(this + 60);
  v50 = 0.5;
  if ( *(_BYTE *)(this + 64) )
  {
    v48 = 0x7FFFFFFF;
    v50 = 1.0;
  }
  v54 = *(float *)(this + 72);
  v53 = *(float *)(this + 76);
  v5 = *(float *)(this + 80);
  v6 = *(float *)(this + 68) + *(float *)(a2 + 36);
  v57 = v6 * v5;
  v59 = v57;
  v61 = v5 * v6;
  v63 = (double)(unsigned int)Plat_MSTime() * *(float *)(this + 100);
  v64 = (double)(unsigned int)Plat_MSTime() * *(float *)(this + 100);
  v7 = (double)(unsigned int)Plat_MSTime() * *(float *)(this + 100);
  v8 = 0;
  v58 = v63 + v57;
  v8.m128_f32[0] = v58;
  v65[0] = _mm_shuffle_ps(v8, v8, 0);
  v60 = v64 + v59;
  v9 = 0;
  v9.m128_f32[0] = v60;
  v65[1] = _mm_shuffle_ps(v9, v9, 0);
  v62 = v7 + v61;
  v10 = 0;
  v10.m128_f32[0] = v62;
  v65[2] = _mm_shuffle_ps(v10, v10, 0);
  LODWORD(v46) = v48 & sub_102AFBB0(v65).m128_u32[0];
  v11 = v53 - v54;
  v12 = v11 * (1.0 - v50);
  v13 = v11 * v50;
  if ( *(_BYTE *)(this + 65) )
    v14 = 1.0 - v46;
  else
    v14 = v46;
  v15 = v13 * v14 + v54 + v12;
  v16 = 2147483600.0;
  if ( v15 <= 2147483600.0 )
  {
    v16 = 0.0;
    if ( v15 >= 0.0 )
      v16 = v15;
    v17 = 0.0;
  }
  else
  {
    v17 = 0.0;
  }
  v18 = v16 * a3;
  v51 = v18;
  if ( v56 != v17 )
  {
    v18 = v18 * v56;
    v51 = v18;
  }
  if ( v18 == v17 )
    return 0;
  if ( !sub_10203BD0((float *)this, a2, a4) )
    return 0;
  v19 = *(float *)(this + 48) + *(float *)(a4 + 12);
  if ( v19 > *(float *)(a2 + 36) )
    return 0;
  v21 = *(float *)(a2 + 36) - *(float *)(a2 + 44);
  v49 = v21;
  v22 = *(float *)(a2 + 36);
  v47 = *(float *)(a2 + 36);
  if ( 0.0 == *(float *)(this + 44) )
    goto LABEL_28;
  v23 = v21;
  if ( v21 < v19 )
  {
    v23 = v19;
    v49 = v19;
  }
  v24 = v19 + *(float *)(this + 44);
  v25 = v23;
  v22 = *(float *)(a2 + 36);
  v21 = v25;
  if ( v22 <= v24 )
LABEL_28:
    v24 = v22;
  else
    v47 = v24;
  v26 = *(_DWORD *)(a4 + 4);
  v27 = v24 - v21;
  v55 = v27;
  X = v27 * v51 + *(float *)a4;
  *(float *)a4 = X;
  v29 = floor(X) - (double)v26;
  v30 = (int)v29;
  *(_DWORD *)(a4 + 4) = (int)v29 + v26;
  if ( !(int)v29 )
    return 0;
  v31 = *(_DWORD *)(a2 + 40);
  v52 = (int)v29;
  if ( *(_DWORD *)(a2 + 72) - v31 < v30 )
  {
    v30 = *(_DWORD *)(a2 + 72) - v31;
    v52 = v30;
  }
  if ( !v30 )
    return 0;
  v32 = v31 + v30;
  v33 = v55 / (double)v52;
  *(_DWORD *)(a2 + 40) = v31 + v30;
  *(_DWORD *)(a2 + 32) = (v31 + v30 + 3) / 4;
  v34 = v49 + v33;
  v35 = v47;
  if ( v30 < 4 )
  {
    v44 = v34;
    v40 = v47;
  }
  else
  {
    v36 = v31 + 1;
    while ( 1 )
    {
      if ( v35 <= v34 )
        v34 = v35;
      v38 = v35;
      v39 = v34;
      v40 = v38;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((v31 & 3) + *(_DWORD *)(a2 + 6356) * (v31 / 4))) = v39;
      v41 = v39 + v33;
      if ( v41 >= v38 )
        v41 = v40;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((v36 & 3) + *(_DWORD *)(a2 + 6356) * (v36 / 4))) = v41;
      v42 = v41 + v33;
      if ( v42 >= v40 )
        v42 = v40;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((((_BYTE)v36 + 1) & 3) + *(_DWORD *)(a2 + 6356) * ((v36 + 1) / 4))) = v42;
      v43 = v42 + v33;
      if ( v43 >= v40 )
        v43 = v40;
      v31 += 4;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((((_BYTE)v36 - 2) & 3) + *(_DWORD *)(a2 + 6356) * ((v36 + 2) / 4))) = v43;
      v44 = v43 + v33;
      v36 += 4;
      if ( v31 >= v32 - 3 )
        break;
      v37 = v44;
      v35 = v40;
      v34 = v37;
    }
  }
  for ( ; v31 < v32; v44 = v44 + v33 )
  {
    v45 = (float *)(*(_DWORD *)(a2 + 6100) + 4 * ((v31 & 3) + *(_DWORD *)(a2 + 6356) * (v31 / 4)));
    if ( v44 >= v40 )
      v44 = v40;
    ++v31;
    *v45 = v44;
  }
  return 256;
}
