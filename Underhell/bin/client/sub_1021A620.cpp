unsigned int __thiscall sub_1021A620(int this, int a2, float a3, int a4)
{
  __m128 v4; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  _DWORD *v11; // ebx
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __m128 v27; // xmm3
  __m128 v28; // xmm1
  __int16 v29; // ax
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  __m128 v34; // xmm4
  __m128 v35; // xmm0
  __m128 v36; // xmm1
  __m128 v37; // xmm2
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  __m128 v42; // xmm2
  __m128 v43; // xmm3
  __m128 v44; // xmm4
  __m128 v45; // xmm2
  __m128 v46; // xmm4
  __m128 v47; // xmm3
  __m128 v48; // xmm4
  __m128 v49; // xmm2
  __m128 v50; // xmm4
  __m128 v51; // xmm3
  __m128 v52; // xmm4
  __m128 v53; // xmm4
  __m128 v54; // xmm6
  __m128 v55; // xmm4
  __m128 v56; // xmm0
  __m128 v57; // xmm4
  __m128 v58; // xmm0
  unsigned int result; // eax
  int v60; // [esp+0h] [ebp-324h]
  float v61; // [esp+4h] [ebp-320h]
  float v62; // [esp+4h] [ebp-320h]
  __m128 v63; // [esp+4h] [ebp-320h]
  float v64; // [esp+8h] [ebp-31Ch]
  float v65; // [esp+8h] [ebp-31Ch]
  float v66; // [esp+Ch] [ebp-318h]
  float v67; // [esp+Ch] [ebp-318h]
  __m128 *v68; // [esp+14h] [ebp-310h]
  int v69; // [esp+1Ch] [ebp-308h]
  __m128 *v70; // [esp+20h] [ebp-304h]
  unsigned int v71; // [esp+28h] [ebp-2FCh]
  int v72; // [esp+2Ch] [ebp-2F8h]
  __m128 *v73; // [esp+30h] [ebp-2F4h]
  int v74; // [esp+38h] [ebp-2ECh]
  int v75; // [esp+3Ch] [ebp-2E8h]
  __m128 v76; // [esp+44h] [ebp-2E0h]
  __m128 v77; // [esp+44h] [ebp-2E0h]
  __m128 v78; // [esp+54h] [ebp-2D0h]
  __m128 v79; // [esp+64h] [ebp-2C0h]
  __m128 v80; // [esp+74h] [ebp-2B0h]
  __m128 v81; // [esp+74h] [ebp-2B0h]
  __m128 v82; // [esp+84h] [ebp-2A0h]
  __m128 v83; // [esp+94h] [ebp-290h]
  __m128 v84; // [esp+B4h] [ebp-270h]
  __m128 v85; // [esp+C4h] [ebp-260h]
  __m128 v86; // [esp+D4h] [ebp-250h]
  __m128 v87; // [esp+E4h] [ebp-240h]
  __m128 v88; // [esp+104h] [ebp-220h]
  __m128 v89; // [esp+114h] [ebp-210h]
  __m128 v90; // [esp+124h] [ebp-200h]
  __m128 v91; // [esp+134h] [ebp-1F0h]
  __m128 v92; // [esp+144h] [ebp-1E0h]
  __m128 v93; // [esp+154h] [ebp-1D0h]
  __m128 v94; // [esp+164h] [ebp-1C0h]
  __m128 v95; // [esp+174h] [ebp-1B0h]
  __m128 v96; // [esp+184h] [ebp-1A0h]
  __m128 v97; // [esp+194h] [ebp-190h]
  __m128 v98; // [esp+1A4h] [ebp-180h]
  __m128 v99; // [esp+1B4h] [ebp-170h]
  __m128 v100; // [esp+1C4h] [ebp-160h]
  __m128 v101; // [esp+1D4h] [ebp-150h]
  __m128 v102; // [esp+1E4h] [ebp-140h]
  __m128 v103; // [esp+1F4h] [ebp-130h]
  __m128 v104; // [esp+204h] [ebp-120h]
  __m128 v105; // [esp+214h] [ebp-110h]
  __m128 v106; // [esp+224h] [ebp-100h]
  __m128 v107; // [esp+234h] [ebp-F0h]
  __m128 v108; // [esp+244h] [ebp-E0h]
  __m128 v109; // [esp+254h] [ebp-D0h]
  __m128 v110; // [esp+264h] [ebp-C0h]
  __m128 v111; // [esp+274h] [ebp-B0h]
  __m128 v112; // [esp+284h] [ebp-A0h]
  __int128 v113; // [esp+2C4h] [ebp-60h] BYREF
  __int128 v114; // [esp+2D4h] [ebp-50h] BYREF
  __int128 v115; // [esp+2E4h] [ebp-40h] BYREF
  __int128 v116; // [esp+2F4h] [ebp-30h] BYREF
  __int128 v117; // [esp+304h] [ebp-20h] BYREF
  __int128 v118; // [esp+314h] [ebp-10h] BYREF

  v4 = 0;
  v4.m128_f32[0] = *(float *)(a2 + 44) * a3;
  v6 = *(__m128 *)(a2 + 16);
  v94 = _mm_shuffle_ps(v4, v4, 0);
  v7 = 0;
  v7.m128_f32[0] = *(float *)(this + 116);
  v92 = _mm_shuffle_ps(v7, v7, 0);
  v8 = 0;
  v8.m128_f32[0] = *(float *)(this + 120);
  v9 = _mm_shuffle_ps(v8, v8, 0);
  v90 = _mm_add_ps(_mm_mul_ps(v92, v6), v9);
  v10 = 0;
  v109 = v9;
  v10.m128_f32[0] = *(float *)(this + 100);
  v105 = _mm_shuffle_ps(v10, v10, 0);
  v70 = *(__m128 **)(a2 + 6100);
  v11 = *(_DWORD **)(a2 + 6112);
  v12 = 0;
  v12.m128_f32[0] = *(float *)(this + 104) - v10.m128_f32[0];
  v93 = _mm_shuffle_ps(v12, v12, 0);
  v13 = 0;
  v13.m128_f32[0] = *(float *)(this + 108);
  v91 = _mm_shuffle_ps(v13, v13, 0);
  v68 = *(__m128 **)(a2 + 6072);
  v14 = 0;
  v14.m128_f32[0] = *(float *)(this + 112) - v13.m128_f32[0];
  v101 = _mm_shuffle_ps(v14, v14, 0);
  v15 = 0;
  v15.m128_f32[0] = *(float *)(this + 68);
  v73 = *(__m128 **)(a2 + 4 * *(_DWORD *)(this + 92) + 6068);
  v102 = _mm_shuffle_ps(v15, v15, 0);
  v16 = 0;
  v89 = v6;
  v60 = *(_DWORD *)(a2 + 6628);
  v16.m128_f32[0] = *(float *)(this + 72);
  v103 = _mm_shuffle_ps(v16, v16, 0);
  v17 = 0;
  v17.m128_f32[0] = *(float *)(this + 76);
  v61 = *(float *)(this + 80) - *(float *)(this + 68);
  v104 = _mm_shuffle_ps(v17, v17, 0);
  v18 = 0;
  v18.m128_f32[0] = v61;
  v64 = *(float *)(this + 84) - *(float *)(this + 72);
  v98 = _mm_shuffle_ps(v18, v18, 0);
  v19 = 0;
  v19.m128_f32[0] = v64;
  v66 = *(float *)(this + 88) - *(float *)(this + 76);
  v99 = _mm_shuffle_ps(v19, v19, 0);
  v20 = 0;
  v20.m128_f32[0] = v66;
  v62 = *(float *)(this + 56) - *(float *)(this + 44);
  v100 = _mm_shuffle_ps(v20, v20, 0);
  v21 = 0;
  v65 = *(float *)(this + 60) - *(float *)(this + 48);
  v21.m128_f32[0] = *(float *)(this + 44);
  v110 = _mm_shuffle_ps(v21, v21, 0);
  v22 = 0;
  v67 = *(float *)(this + 64) - *(float *)(this + 52);
  v22.m128_f32[0] = *(float *)(this + 48);
  v111 = _mm_shuffle_ps(v22, v22, 0);
  v23 = 0;
  v23.m128_f32[0] = *(float *)(this + 52);
  v112 = _mm_shuffle_ps(v23, v23, 0);
  v24 = 0;
  v24.m128_f32[0] = v62;
  v106 = _mm_shuffle_ps(v24, v24, 0);
  v25 = 0;
  v25.m128_f32[0] = v65;
  v69 = *(_DWORD *)(a2 + 32);
  v107 = _mm_shuffle_ps(v25, v25, 0);
  v26 = 0;
  v26.m128_f32[0] = v67;
  v74 = 16 * (*(_DWORD *)(a2 + 6328) >> 2);
  v108 = _mm_shuffle_ps(v26, v26, 0);
  v72 = 16 * (*(_DWORD *)(a2 + 6356) >> 2);
  v71 = 48 * (*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 92) + 6324) / 0xCu);
  v75 = 16 * (*(_DWORD *)(a2 + 6368) >> 2);
  do
  {
    v76 = *v68;
    v27 = _mm_cmplt_ps((__m128)xmmword_10394140, *v68);
    if ( *(_BYTE *)(this + 97) )
    {
      v79 = _mm_sub_ps(v6, *v70);
      v28 = _mm_mul_ps(_mm_rcp_ps(*v68), v79);
    }
    else
    {
      v28 = _mm_sub_ps(v6, *v70);
      v79 = v28;
    }
    v29 = *(_DWORD *)(a2 + 6624) + v60;
    v63.m128_f32[0] = flt_103EE7C0[(v29 + (unsigned __int16)*v11 + 11) & 0xFFF];
    v63.m128_f32[1] = flt_103EE7C0[(v29 + (unsigned __int16)v11[1] + 11) & 0xFFF];
    v63.m128_f32[2] = flt_103EE7C0[(v29 + (unsigned __int16)v11[2] + 11) & 0xFFF];
    v63.m128_f32[3] = flt_103EE7C0[(v29 + (unsigned __int16)v11[3] + 11) & 0xFFF];
    v78.m128_f32[0] = flt_103EE7C0[(v29 + (unsigned __int16)*v11 + 12) & 0xFFF];
    v78.m128_f32[1] = flt_103EE7C0[(v29 + (unsigned __int16)v11[1] + 12) & 0xFFF];
    v78.m128_f32[2] = flt_103EE7C0[(v29 + (unsigned __int16)v11[2] + 12) & 0xFFF];
    v78.m128_f32[3] = flt_103EE7C0[(v29 + (unsigned __int16)v11[3] + 12) & 0xFFF];
    v88 = _mm_and_ps(
            _mm_and_ps(_mm_cmple_ps(_mm_add_ps(_mm_mul_ps(v63, v93), v105), v28), v27),
            _mm_cmplt_ps(v28, _mm_add_ps(_mm_mul_ps(v78, v101), v91)));
    if ( _mm_movemask_ps(v88) )
    {
      v80 = *(__m128 *)sub_10213190((_DWORD *)a2, &v117, v11, v60 + 8);
      v82 = _mm_add_ps(v103, _mm_mul_ps(v99, *(__m128 *)sub_10213190((_DWORD *)a2, &v113, v11, v60 + 12)));
      v81 = _mm_add_ps(v102, _mm_mul_ps(v98, v80));
      v83 = _mm_add_ps(v104, _mm_mul_ps(v100, *(__m128 *)sub_10213190((_DWORD *)a2, &v114, v11, v60 + 15)));
      v30 = _mm_add_ps(v110, _mm_mul_ps(v106, *(__m128 *)sub_10213190((_DWORD *)a2, &v116, v11, v60 + 3)));
      v31 = _mm_add_ps(v111, _mm_mul_ps(v107, *(__m128 *)sub_10213190((_DWORD *)a2, &v118, v11, v60 + 7)));
      v32 = _mm_add_ps(v112, _mm_mul_ps(v108, *(__m128 *)sub_10213190((_DWORD *)a2, &v115, v11, v60 + 9)));
      if ( *(_BYTE *)(this + 96) )
      {
        v33 = _mm_mul_ps(_mm_rcp_ps(v76), v79);
        v84 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v82, v33), v92), v109);
        v34 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v81, v33), v92), v109);
        v85 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v83, v33), v92), v109);
      }
      else
      {
        v84 = _mm_mul_ps(v82, v90);
        v34 = _mm_mul_ps(v81, v90);
        v85 = _mm_mul_ps(v83, v90);
      }
      v95 = _mm_mul_ps(v30, v94);
      v86 = *v73;
      v96 = _mm_mul_ps(v31, v94);
      v97 = _mm_mul_ps(v32, v94);
      v87 = v73[1];
      v35 = _mm_and_ps((__m128)xmmword_10394240, v34);
      v36 = _mm_sub_ps(
              _mm_and_ps(_mm_add_ps(v35, (__m128)xmmword_103941D0), (__m128)xmmword_10394260),
              (__m128)xmmword_103941D0);
      v37 = _mm_cmplt_ps(v35, v36);
      v38 = _mm_sub_ps(
              v35,
              _mm_or_ps(_mm_and_ps(_mm_sub_ps(v36, (__m128)xmmword_10394160), v37), _mm_andnot_ps(v37, v36)));
      v39 = _mm_cmple_ps((__m128)xmmword_10394150, v38);
      v40 = _mm_sub_ps(v38, _mm_and_ps(v39, (__m128)xmmword_10394150));
      v41 = _mm_add_ps(
              _mm_mul_ps(
                _mm_xor_ps(
                  _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394180, _mm_mul_ps(v40, (__m128)xmmword_10394180)), v40),
                  _mm_and_ps(_mm_xor_ps(v39, v34), (__m128)xmmword_10394250)),
                v95),
              *v73);
      v42 = _mm_and_ps((__m128)xmmword_10394240, v84);
      v43 = _mm_sub_ps(
              _mm_and_ps(_mm_add_ps(v42, (__m128)xmmword_103941D0), (__m128)xmmword_10394260),
              (__m128)xmmword_103941D0);
      v44 = _mm_cmplt_ps(v42, v43);
      v45 = _mm_sub_ps(
              v42,
              _mm_or_ps(_mm_and_ps(_mm_sub_ps(v43, (__m128)xmmword_10394160), v44), _mm_andnot_ps(v44, v43)));
      v46 = _mm_cmple_ps((__m128)xmmword_10394150, v45);
      v47 = _mm_xor_ps(v46, v84);
      v48 = _mm_sub_ps(v45, _mm_and_ps(v46, (__m128)xmmword_10394150));
      v49 = _mm_add_ps(
              _mm_mul_ps(
                _mm_xor_ps(
                  _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394180, _mm_mul_ps(v48, (__m128)xmmword_10394180)), v48),
                  _mm_and_ps(v47, (__m128)xmmword_10394250)),
                v96),
              v87);
      v50 = _mm_and_ps((__m128)xmmword_10394240, v85);
      v51 = _mm_sub_ps(
              _mm_and_ps(_mm_add_ps(v50, (__m128)xmmword_103941D0), (__m128)xmmword_10394260),
              (__m128)xmmword_103941D0);
      v77 = v50;
      v52 = _mm_cmplt_ps(v50, v51);
      v53 = _mm_sub_ps(
              v77,
              _mm_or_ps(_mm_and_ps(_mm_sub_ps(v51, (__m128)xmmword_10394160), v52), _mm_andnot_ps(v52, v51)));
      v54 = _mm_cmple_ps((__m128)xmmword_10394150, v53);
      v55 = _mm_sub_ps(v53, _mm_and_ps(v54, (__m128)xmmword_10394150));
      v56 = _mm_mul_ps(_mm_sub_ps((__m128)xmmword_10394180, _mm_mul_ps(v55, (__m128)xmmword_10394180)), v55);
      v57 = v73[2];
      v58 = _mm_add_ps(
              _mm_mul_ps(_mm_xor_ps(v56, _mm_and_ps(_mm_xor_ps(v54, v85), (__m128)xmmword_10394250)), v97),
              v57);
      if ( *(_DWORD *)(this + 92) == 6 )
      {
        *v73 = _mm_or_ps(
                 _mm_and_ps(_mm_max_ps(_mm_min_ps(v41, (__m128)xmmword_10394150), (__m128)xmmword_10394140), v88),
                 _mm_andnot_ps(v88, v86));
        v73[1] = _mm_or_ps(
                   _mm_and_ps(_mm_max_ps(_mm_min_ps(v49, (__m128)xmmword_10394150), (__m128)xmmword_10394140), v88),
                   _mm_andnot_ps(v88, v87));
        v73[2] = _mm_or_ps(
                   _mm_and_ps(_mm_max_ps(_mm_min_ps(v58, (__m128)xmmword_10394150), (__m128)xmmword_10394140), v88),
                   _mm_andnot_ps(v88, v57));
      }
      else
      {
        *v73 = _mm_or_ps(_mm_and_ps(v41, v88), _mm_andnot_ps(v88, v86));
        v73[1] = _mm_or_ps(_mm_andnot_ps(v88, v87), _mm_and_ps(v49, v88));
        v73[2] = _mm_or_ps(_mm_andnot_ps(v88, v57), _mm_and_ps(v58, v88));
      }
      v6 = v89;
    }
    result = v71;
    v70 = (__m128 *)((char *)v70 + v72);
    v68 = (__m128 *)((char *)v68 + v74);
    v73 = (__m128 *)((char *)v73 + v71);
    v11 = (_DWORD *)((char *)v11 + v75);
    --v69;
  }
  while ( v69 );
  return result;
}
