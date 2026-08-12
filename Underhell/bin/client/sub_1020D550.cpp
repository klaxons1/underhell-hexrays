__m128 *__thiscall sub_1020D550(int this, int a2, int a3, int a4, int a5, int a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  __m128 v10; // xmm0
  double v11; // st3
  double v12; // st4
  __m128 v13; // xmm0
  double v14; // st5
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  float v17; // xmm1_4
  __m128 v18; // xmm0
  float v19; // xmm1_4
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  __m128 *v24; // ebx
  __m128 v25; // xmm0
  __m128 *v26; // edi
  __m128 *result; // eax
  __m128 v28; // xmm0
  __m128 v29; // xmm4
  __m128 v30; // xmm6
  __m128 v31; // xmm0
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  __m128 v37; // xmm4
  __m128 v38; // xmm6
  __m128 v39; // xmm3
  __m128 v40; // xmm2
  __m128 v41; // xmm6
  __m128 v42; // xmm1
  __m128 v43; // xmm3
  __m128 v44; // xmm2
  __m128 v45; // xmm0
  __m128 v46; // xmm2
  __m128 v47; // xmm1
  __m128 v48; // xmm4
  __m128 v49; // xmm1
  __m128 v50; // xmm1
  __m128 v51; // xmm2
  __m128 v52; // xmm3
  __m128 v53; // xmm1
  __m128 v54; // xmm4
  __m128 v55; // xmm5
  __m128 v56; // xmm0
  char v57; // [esp+17h] [ebp-2E1h]
  float v58; // [esp+18h] [ebp-2E0h]
  float v59; // [esp+18h] [ebp-2E0h]
  float v60; // [esp+1Ch] [ebp-2DCh]
  float v61; // [esp+1Ch] [ebp-2DCh]
  int v62; // [esp+1Ch] [ebp-2DCh]
  float v63; // [esp+20h] [ebp-2D8h]
  __m128 *v64; // [esp+20h] [ebp-2D8h]
  float v65; // [esp+24h] [ebp-2D4h]
  int v66; // [esp+24h] [ebp-2D4h]
  __m128 v67; // [esp+28h] [ebp-2D0h]
  __m128 v68; // [esp+38h] [ebp-2C0h]
  float v69; // [esp+50h] [ebp-2A8h]
  float v70; // [esp+54h] [ebp-2A4h]
  __m128 v71; // [esp+58h] [ebp-2A0h]
  __m128 v72; // [esp+68h] [ebp-290h]
  __m128 v73; // [esp+78h] [ebp-280h]
  __m128 v74; // [esp+88h] [ebp-270h]
  __m128 v75; // [esp+98h] [ebp-260h]
  __m128 v76; // [esp+A8h] [ebp-250h]
  __m128 v77; // [esp+B8h] [ebp-240h]
  __m128 v78; // [esp+C8h] [ebp-230h]
  __m128 v79; // [esp+D8h] [ebp-220h]
  __m128 v80; // [esp+E8h] [ebp-210h]
  __m128 v81; // [esp+F8h] [ebp-200h]
  __m128 v82; // [esp+108h] [ebp-1F0h]
  __m128 v83; // [esp+118h] [ebp-1E0h]
  __m128 v84; // [esp+128h] [ebp-1D0h]
  __m128 v85; // [esp+138h] [ebp-1C0h]
  __m128 v86; // [esp+148h] [ebp-1B0h]
  __m128 v87; // [esp+158h] [ebp-1A0h]
  __m128 v88; // [esp+168h] [ebp-190h]
  __m128 v89; // [esp+178h] [ebp-180h]
  __m128 v90; // [esp+188h] [ebp-170h]
  __m128 v91; // [esp+198h] [ebp-160h]
  _OWORD v92[3]; // [esp+1A8h] [ebp-150h] BYREF
  _OWORD v93[3]; // [esp+1D8h] [ebp-120h] BYREF
  _OWORD v94[3]; // [esp+208h] [ebp-F0h] BYREF
  __m128 v95[12]; // [esp+238h] [ebp-C0h] BYREF

  v6 = 0.5;
  v7 = 0.5;
  v8 = 0.5;
  v71 = _mm_cmpeq_ps((__m128)xmmword_10394140, (__m128)xmmword_10394140);
  v72 = v71;
  v73 = v71;
  if ( 0.0 != *(float *)(this + 56) || 0.0 != *(float *)(this + 60) || (v57 = 0, 0.0 != *(float *)(this + 64)) )
    v57 = 1;
  if ( 0.0 != *(float *)(this + 44) )
  {
    v71 = (__m128)xmmword_10394240;
    v7 = 1.0;
  }
  if ( 0.0 != *(float *)(this + 48) )
  {
    v72 = (__m128)xmmword_10394240;
    v8 = 1.0;
  }
  if ( 0.0 != *(float *)(this + 52) )
  {
    v73 = (__m128)xmmword_10394240;
    v6 = 1.0;
  }
  v10 = 0;
  v11 = *(float *)(this + 96) - *(float *)(this + 84);
  v65 = v11 * v7;
  v63 = (1.0 - v7) * v11 + *(float *)(this + 84);
  v12 = *(float *)(this + 100) - *(float *)(this + 88);
  v10.m128_f32[0] = v63;
  v75 = _mm_shuffle_ps(v10, v10, 0);
  v13 = 0;
  v58 = v12 * v8;
  v70 = (1.0 - v8) * v12 + *(float *)(this + 88);
  v14 = *(float *)(this + 104) - *(float *)(this + 92);
  v13.m128_f32[0] = v70;
  v79 = _mm_shuffle_ps(v13, v13, 0);
  v15 = 0;
  v60 = v14 * v6;
  v69 = (1.0 - v6) * v14 + *(float *)(this + 92);
  v15.m128_f32[0] = v69;
  v83 = _mm_shuffle_ps(v15, v15, 0);
  v16 = 0;
  v16.m128_f32[0] = v65;
  v17 = v58;
  v59 = *(float *)(this + 108);
  v84 = _mm_shuffle_ps(v16, v16, 0);
  v18 = 0;
  v18.m128_f32[0] = v17;
  v19 = v60;
  v61 = *(float *)(this + 112);
  v77 = _mm_shuffle_ps(v18, v18, 0);
  v20 = 0;
  v20.m128_f32[0] = v19;
  v81 = _mm_shuffle_ps(v20, v20, 0);
  v21 = 0;
  v21.m128_f32[0] = *(float *)(this + 80);
  v64 = (__m128 *)(*(_DWORD *)(a2 + 6068) + 48 * a3 * (*(_DWORD *)(a2 + 6324) / 0xCu));
  v66 = *(_DWORD *)(a2 + 6356) >> 2;
  v89 = _mm_shuffle_ps(v21, v21, 0);
  v22 = 0;
  v22.m128_f32[0] = *(float *)(this + 68);
  v85 = _mm_shuffle_ps(v22, v22, 0);
  v23 = 0;
  v23.m128_f32[0] = *(float *)(this + 72);
  v24 = (__m128 *)(*(_DWORD *)(a2 + 6100) + 16 * a3 * v66);
  v86 = _mm_shuffle_ps(v23, v23, 0);
  v25 = 0;
  v25.m128_f32[0] = *(float *)(this + 76);
  v26 = (__m128 *)(*(_DWORD *)(a2 + 6076) + 48 * a3 * (*(_DWORD *)(a2 + 6332) / 0xCu));
  v87 = _mm_shuffle_ps(v25, v25, 0);
  result = sub_101F9040((float *)a2, *(_DWORD *)(this + 120), v24->m128_f32[0], v95);
  if ( a4 )
  {
    v28 = 0;
    v28.m128_f32[0] = v61;
    v29 = v28;
    v30 = 0;
    v30.m128_f32[0] = v59;
    v31 = 0;
    v31.m128_f32[0] = 100000.5;
    v74 = _mm_shuffle_ps(v31, v31, 0);
    v32 = 0;
    v32.m128_f32[0] = 300000.25;
    v88 = _mm_shuffle_ps(v32, v32, 0);
    v33 = 0;
    v33.m128_f32[0] = 9000001.0;
    v80 = _mm_shuffle_ps(v33, v33, 0);
    v34 = 0;
    v34.m128_f32[0] = 110000.25;
    v91 = _mm_shuffle_ps(v34, v34, 0);
    v35 = 0;
    v35.m128_f32[0] = 310000.75;
    v82 = _mm_shuffle_ps(v35, v35, 0);
    v36 = 0;
    v36.m128_f32[0] = 9100000.0;
    v37 = _mm_shuffle_ps(v29, v29, 0);
    v38 = _mm_shuffle_ps(v30, v30, 0);
    v78 = v37;
    v76 = v38;
    v90 = _mm_shuffle_ps(v36, v36, 0);
    v62 = 48 * v66;
    while ( 1 )
    {
      --a4;
      v39 = _mm_mul_ps(_mm_add_ps(v64[1], v86), v37);
      v40 = _mm_mul_ps(_mm_add_ps(v64[2], v87), v37);
      v41 = _mm_mul_ps(v38, _mm_add_ps(*v24, v89));
      v42 = _mm_add_ps(_mm_mul_ps(v37, _mm_add_ps(*v64, v85)), v41);
      v94[0] = _mm_add_ps(v74, v42);
      v43 = _mm_add_ps(v39, v41);
      v94[1] = _mm_add_ps(v88, v43);
      v44 = _mm_add_ps(v40, v41);
      v94[2] = _mm_add_ps(v80, v44);
      v93[0] = _mm_add_ps(v91, v42);
      v93[1] = _mm_add_ps(v82, v43);
      v92[0] = v42;
      v92[1] = v43;
      v92[2] = v44;
      v93[2] = _mm_add_ps(v90, v44);
      v67 = _mm_and_ps(sub_102AFBB0(v92), v71);
      v68 = _mm_and_ps(sub_102AFBB0(v94), v72);
      v45 = _mm_and_ps(sub_102AFBB0(v93), v73);
      if ( v57 )
      {
        if ( 0.0 == *(float *)(this + 56) )
          v46 = v67;
        else
          v46 = _mm_sub_ps((__m128)xmmword_10394150, v67);
        if ( 0.0 == *(float *)(this + 60) )
          v47 = v68;
        else
          v47 = _mm_sub_ps((__m128)xmmword_10394150, v68);
        if ( 0.0 != *(float *)(this + 64) )
          v45 = _mm_sub_ps((__m128)xmmword_10394150, v45);
      }
      else
      {
        v47 = v68;
        v46 = v67;
      }
      v48 = _mm_add_ps(_mm_mul_ps(v47, v77), v79);
      v49 = 0;
      v49.m128_f32[0] = *(float *)(a2 + 48);
      v50 = _mm_shuffle_ps(v49, v49, 0);
      v51 = _mm_mul_ps(v50, _mm_add_ps(_mm_mul_ps(v46, v84), v75));
      v52 = _mm_mul_ps(v50, v48);
      v53 = _mm_mul_ps(v50, _mm_add_ps(_mm_mul_ps(v45, v81), v83));
      if ( *(_BYTE *)(this + 124) )
      {
        v54 = _mm_mul_ps(v95[6], v53);
        v55 = _mm_mul_ps(v95[7], v53);
        v53 = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(v95[8], v53), _mm_mul_ps(v95[5], v51)), _mm_mul_ps(v95[11], v52));
        v56 = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(v95[4], v51), v55), _mm_mul_ps(v95[10], v52));
        v51 = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(v95[3], v51), v54), _mm_mul_ps(v95[9], v52));
        v52 = v56;
      }
      result = (__m128 *)(48 * v66);
      v64 = (__m128 *)((char *)v64 + v62);
      v24 += v66;
      *v26 = _mm_sub_ps(*v26, v51);
      v26[1] = _mm_sub_ps(v26[1], v52);
      v26[2] = _mm_sub_ps(v26[2], v53);
      v26 = (__m128 *)((char *)v26 + v62);
      if ( !a4 )
        break;
      v37 = v78;
      v38 = v76;
    }
  }
  return result;
}
