void __thiscall sub_10206450(int this, int a2, int a3, int a4, int a5, int a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  bool v10; // c3
  double v11; // st3
  double v12; // st4
  double v13; // st5
  double v14; // st7
  double v15; // st6
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  float *v20; // ebx
  __m128 v21; // xmm0
  double v22; // st5
  double v23; // st0
  double v24; // rt0
  double v25; // rt1
  double v26; // st6
  double v27; // st2
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  __m128 v31; // xmm0
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  bool v37; // zf
  double v38; // st4
  double v39; // st7
  double v40; // st6
  double v41; // st7
  char v42; // [esp+1Fh] [ebp-E9h]
  float *v43; // [esp+20h] [ebp-E8h]
  __int32 v44; // [esp+20h] [ebp-E8h]
  float v45; // [esp+24h] [ebp-E4h]
  int v46; // [esp+24h] [ebp-E4h]
  float v47; // [esp+28h] [ebp-E0h]
  int v48; // [esp+28h] [ebp-E0h]
  float v49; // [esp+2Ch] [ebp-DCh]
  float v50; // [esp+30h] [ebp-D8h]
  float v51; // [esp+34h] [ebp-D4h]
  int v52; // [esp+38h] [ebp-D0h]
  int v53; // [esp+3Ch] [ebp-CCh]
  float v54; // [esp+40h] [ebp-C8h] BYREF
  float v55; // [esp+44h] [ebp-C4h]
  float v56; // [esp+48h] [ebp-C0h]
  int v57; // [esp+4Ch] [ebp-BCh]
  float v58; // [esp+50h] [ebp-B8h] BYREF
  __int64 v59; // [esp+54h] [ebp-B4h]
  float v60; // [esp+5Ch] [ebp-ACh]
  float v61; // [esp+60h] [ebp-A8h]
  float v62; // [esp+64h] [ebp-A4h]
  float v63; // [esp+68h] [ebp-A0h]
  float v64; // [esp+6Ch] [ebp-9Ch]
  float v65; // [esp+70h] [ebp-98h]
  float v66; // [esp+74h] [ebp-94h]
  float v67; // [esp+78h] [ebp-90h]
  float *v68; // [esp+7Ch] [ebp-8Ch]
  float v69; // [esp+80h] [ebp-88h]
  float v70; // [esp+84h] [ebp-84h]
  float v71; // [esp+88h] [ebp-80h]
  float v72; // [esp+8Ch] [ebp-7Ch]
  float v73; // [esp+90h] [ebp-78h]
  float v74; // [esp+94h] [ebp-74h]
  __m128 v75; // [esp+98h] [ebp-70h]
  __m128 v76; // [esp+A8h] [ebp-60h] BYREF
  __m128 v77; // [esp+B8h] [ebp-50h]
  __m128 v78; // [esp+C8h] [ebp-40h]
  int v79[12]; // [esp+D8h] [ebp-30h] BYREF

  v6 = 0.5;
  v7 = 0.5;
  v8 = 0.5;
  v10 = 0.0 == *(float *)(this + 56);
  v52 = -1;
  v57 = -1;
  v53 = -1;
  if ( !v10 || 0.0 != *(float *)(this + 60) || (v42 = 0, 0.0 != *(float *)(this + 64)) )
    v42 = 1;
  if ( 0.0 != *(float *)(this + 44) )
  {
    v52 = 0x7FFFFFFF;
    v7 = 1.0;
  }
  if ( 0.0 != *(float *)(this + 48) )
  {
    v57 = 0x7FFFFFFF;
    v8 = 1.0;
  }
  if ( 0.0 != *(float *)(this + 52) )
  {
    v53 = 0x7FFFFFFF;
    v6 = 1.0;
  }
  v11 = *(float *)(this + 96) - *(float *)(this + 84);
  v61 = v11 * v7;
  v63 = (1.0 - v7) * v11 + *(float *)(this + 84);
  v12 = *(float *)(this + 100) - *(float *)(this + 88);
  v60 = v12 * v8;
  v72 = (1.0 - v8) * v12 + *(float *)(this + 88);
  v13 = *(float *)(this + 104) - *(float *)(this + 92);
  v64 = v13 * v6;
  v74 = (1.0 - v6) * v13 + *(float *)(this + 92);
  v14 = *(float *)(this + 108);
  v73 = *(float *)(this + 108);
  v15 = *(float *)(this + 112);
  v62 = *(float *)(this + 112);
  if ( a4 )
  {
    v16 = a3;
    while ( 1 )
    {
      v17 = v16 / 4;
      v18 = v16 / 4 * *(_DWORD *)(a2 + 6324);
      v19 = v16 & 3;
      v43 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v19 + v18));
      v20 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v19 + v17 * *(_DWORD *)(a2 + 6332)));
      --a4;
      v21 = 0;
      v22 = *v43;
      v68 = (float *)(*(_DWORD *)(a2 + 6100) + 4 * (v19 + v17 * *(_DWORD *)(a2 + 6356)));
      v23 = *(float *)(this + 80) + *v68;
      v24 = (v22 + *(float *)(this + 68)) * v15;
      v25 = (v43[4] + *(float *)(this + 72)) * v15;
      v26 = v15 * (v43[8] + *(float *)(this + 76));
      v27 = v23 * v14;
      v49 = v24 + v27;
      v21.m128_f32[0] = v49;
      v76 = _mm_shuffle_ps(v21, v21, 0);
      v50 = v27 + v25;
      v28 = 0;
      v28.m128_f32[0] = v50;
      v77 = _mm_shuffle_ps(v28, v28, 0);
      v51 = v14 * v23 + v26;
      v29 = 0;
      v29.m128_f32[0] = v51;
      v78 = _mm_shuffle_ps(v29, v29, 0);
      v75 = sub_102AFBB0(&v76);
      v47 = v75.m128_f32[0];
      v65 = v49 + 100000.5;
      v30 = 0;
      v30.m128_f32[0] = v65;
      v76 = _mm_shuffle_ps(v30, v30, 0);
      v66 = v50 + 300000.25;
      v31 = 0;
      v31.m128_f32[0] = v66;
      v77 = _mm_shuffle_ps(v31, v31, 0);
      v67 = v51 + 9000001.0;
      v32 = 0;
      v32.m128_f32[0] = v67;
      v78 = _mm_shuffle_ps(v32, v32, 0);
      v75 = sub_102AFBB0(&v76);
      v45 = v75.m128_f32[0];
      v33 = 0;
      v69 = v49 + 110000.25;
      v33.m128_f32[0] = v69;
      v76 = _mm_shuffle_ps(v33, v33, 0);
      v70 = v50 + 310000.75;
      v34 = 0;
      v34.m128_f32[0] = v70;
      v77 = _mm_shuffle_ps(v34, v34, 0);
      v71 = v51 + 9100000.0;
      v35 = 0;
      v35.m128_f32[0] = v71;
      v78 = _mm_shuffle_ps(v35, v35, 0);
      v36 = sub_102AFBB0(&v76);
      v48 = v52 & LODWORD(v47);
      v46 = v57 & LODWORD(v45);
      v75 = v36;
      v44 = v53 & v36.m128_i32[0];
      if ( v42 )
      {
        if ( 0.0 != *(float *)(this + 56) )
          *(float *)&v48 = 1.0 - *(float *)&v48;
        if ( 0.0 != *(float *)(this + 60) )
          *(float *)&v46 = 1.0 - *(float *)&v46;
        if ( 0.0 != *(float *)(this + 64) )
          *(float *)&v44 = 1.0 - *(float *)&v44;
      }
      v37 = *(_BYTE *)(this + 124) == 0;
      v38 = (*(float *)&v48 * v61 + v63) * *(float *)(a2 + 48);
      v39 = *(float *)(a2 + 48);
      v54 = v38;
      v55 = (*(float *)&v46 * v60 + v72) * v39;
      v40 = v39 * (*(float *)&v44 * v64 + v74);
      v41 = v38;
      v56 = v40;
      if ( !v37 )
      {
        sub_101F8FA0((char *)a2, *(_DWORD *)(this + 120), *v68, (float *)v79);
        v58 = flt_10459240;
        v59 = qword_10459244;
        sub_101ED920(&v54, (float *)v79, &v58);
        v41 = v58;
        v54 = v58;
        v55 = *(float *)&v59;
        v56 = *((float *)&v59 + 1);
      }
      v16 = a3 + 1;
      *v20 = *v20 - v41;
      ++a3;
      v20[4] = v20[4] - v55;
      v20[8] = v20[8] - v56;
      if ( !a4 )
        break;
      v14 = v73;
      v15 = v62;
    }
  }
}
