int __thiscall sub_1020CAB0(char *this, int a2, int a3, int a4, int a5, int a6)
{
  bool v7; // al
  bool v8; // c0
  int v9; // ebx
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  double v16; // st7
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  int v19; // eax
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  __m128 *v23; // ecx
  float *v24; // edx
  __m128 *v25; // eax
  double v26; // st6
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  int v38; // edi
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  __m128 v41; // xmm0
  _DWORD *v42; // eax
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  __m128 v47; // xmm0
  __m128 v48; // xmm0
  __m128 v49; // xmm0
  __m128 v50; // xmm0
  int v51; // ebx
  __m128 v52; // xmm1
  __m128 v53; // xmm2
  __m128 v54; // xmm3
  __m128 v55; // xmm4
  __m128 v56; // xmm0
  __m128 v57; // xmm6
  __m128 v58; // xmm1
  __m128 v59; // xmm4
  __m128 v60; // xmm2
  __m128 v61; // xmm3
  __m128 v62; // xmm6
  __m128 v63; // xmm0
  __m128 v64; // xmm5
  __m128 v65; // xmm1
  __m128 v66; // xmm2
  __m128 v67; // xmm3
  __m128 v68; // xmm0
  __m128 v69; // xmm0
  __m128 v70; // xmm0
  __m128 v71; // xmm0
  __m128 v72; // xmm0
  __m128 *v73; // eax
  bool v75; // [esp+17h] [ebp-2C9h]
  int v76; // [esp+18h] [ebp-2C8h]
  float v77; // [esp+1Ch] [ebp-2C4h]
  int v78; // [esp+1Ch] [ebp-2C4h]
  __m128 *v79; // [esp+20h] [ebp-2C0h]
  unsigned int v80; // [esp+24h] [ebp-2BCh]
  __m128 *v81; // [esp+28h] [ebp-2B8h]
  unsigned int v82; // [esp+2Ch] [ebp-2B4h]
  __m128 *v83; // [esp+30h] [ebp-2B0h]
  __m128 v84; // [esp+40h] [ebp-2A0h]
  __m128 v85; // [esp+40h] [ebp-2A0h]
  __m128 v86; // [esp+40h] [ebp-2A0h]
  __m128 v87; // [esp+40h] [ebp-2A0h]
  __m128 v88; // [esp+50h] [ebp-290h]
  __m128 v89; // [esp+50h] [ebp-290h]
  __m128 v90; // [esp+50h] [ebp-290h]
  __m128 v91; // [esp+50h] [ebp-290h]
  __m128 v92; // [esp+60h] [ebp-280h]
  __m128 v93; // [esp+60h] [ebp-280h]
  __m128 v94; // [esp+60h] [ebp-280h]
  __m128 v95; // [esp+80h] [ebp-260h] BYREF
  __m128 v96; // [esp+90h] [ebp-250h] BYREF
  __m128 v97; // [esp+A0h] [ebp-240h] BYREF
  __m128 v98; // [esp+B0h] [ebp-230h]
  __m128 v99; // [esp+C0h] [ebp-220h]
  __m128 v100; // [esp+D0h] [ebp-210h]
  __m128 v101; // [esp+E0h] [ebp-200h]
  __m128 v102; // [esp+F0h] [ebp-1F0h]
  __m128 v103; // [esp+100h] [ebp-1E0h]
  __m128 v104; // [esp+110h] [ebp-1D0h] BYREF
  __m128 v105; // [esp+120h] [ebp-1C0h]
  __m128 v106; // [esp+130h] [ebp-1B0h]
  __m128 v107; // [esp+140h] [ebp-1A0h]
  __m128 v108; // [esp+150h] [ebp-190h]
  __m128 v109; // [esp+160h] [ebp-180h]
  __m128 v110; // [esp+170h] [ebp-170h]
  __m128 v111; // [esp+180h] [ebp-160h]
  __m128 v112; // [esp+190h] [ebp-150h]
  __m128 v113; // [esp+1A0h] [ebp-140h]
  __m128 v114; // [esp+1B0h] [ebp-130h]
  __m128 v115; // [esp+1C0h] [ebp-120h]
  __m128 v116; // [esp+1D0h] [ebp-110h]
  __m128 v117; // [esp+1E0h] [ebp-100h]
  __m128 v118; // [esp+1F0h] [ebp-F0h]
  __m128 v119; // [esp+200h] [ebp-E0h]
  __m128 v120; // [esp+210h] [ebp-D0h]
  __m128 v121; // [esp+220h] [ebp-C0h]
  __m128 v122; // [esp+230h] [ebp-B0h]
  __m128 v123; // [esp+240h] [ebp-A0h]
  __m128 v124; // [esp+250h] [ebp-90h]
  __m128 v125; // [esp+260h] [ebp-80h]
  __m128 v126; // [esp+270h] [ebp-70h]
  __m128 v127; // [esp+280h] [ebp-60h]
  __m128 v128; // [esp+290h] [ebp-50h]
  __m128 v129; // [esp+2A0h] [ebp-40h]
  __m128 v130[3]; // [esp+2B0h] [ebp-30h] BYREF

  v7 = this[94] || *((_DWORD *)this + 31);
  if ( this[95] && this[92] || v7 || !*(_DWORD *)(dword_10465A5C + 48) )
    return (*(int (__thiscall **)(char *, int, int, int, int, int))(*(_DWORD *)this + 96))(
             this,
             a2,
             4 * a3,
             4 * a4,
             a5,
             a6);
  v8 = *(float *)(a2 + 44) > 0.0;
  v82 = *(_DWORD *)(a2 + 6324) / 0xCu;
  v81 = (__m128 *)(48 * a3 * v82 + *(_DWORD *)(a2 + 6068));
  v80 = *(_DWORD *)(a2 + 6332) / 0xCu;
  v79 = (__m128 *)(48 * a3 * v80 + *(_DWORD *)(a2 + 6076));
  v9 = *(_DWORD *)(a2 + 6356) >> 2;
  v83 = (__m128 *)(16 * a3 * v9 + *(_DWORD *)(a2 + 6100));
  v10 = 0;
  v10.m128_f32[0] = *(float *)(a2 + 68 * *((_DWORD *)this + 19) + 100);
  v11 = 0;
  v11.m128_f32[0] = *(float *)(a2 + 68 * *((_DWORD *)this + 19) + 104);
  v12 = 0;
  v12.m128_f32[0] = *(float *)(a2 + 68 * *((_DWORD *)this + 19) + 108);
  v13 = 0;
  v13.m128_f32[0] = *(float *)(a2 + 68 * *((_DWORD *)this + 19) + 88);
  v14 = 0;
  v14.m128_f32[0] = *(float *)(a2 + 68 * *((_DWORD *)this + 19) + 92);
  v15 = 0;
  v15.m128_f32[0] = *(float *)(a2 + 68 * *((_DWORD *)this + 19) + 96);
  v110 = _mm_shuffle_ps(v10, v10, 0);
  v111 = _mm_shuffle_ps(v11, v11, 0);
  v112 = _mm_shuffle_ps(v12, v12, 0);
  v114 = _mm_sub_ps(_mm_shuffle_ps(v13, v13, 0), v110);
  v115 = _mm_sub_ps(_mm_shuffle_ps(v14, v14, 0), v111);
  v116 = _mm_sub_ps(_mm_shuffle_ps(v15, v15, 0), v112);
  if ( v8 )
    v16 = 1.0 / *(float *)(a2 + 44);
  else
    v16 = 0.0;
  v17 = 0;
  v77 = v16;
  v17.m128_f32[0] = v77;
  v102 = _mm_shuffle_ps(v17, v17, 0);
  v18 = 0;
  v18.m128_f32[0] = *(float *)(a2 + 36) - *(float *)(a2 + 44);
  v103 = _mm_shuffle_ps(v18, v18, 0);
  v19 = sub_102AF3A0();
  v20 = 0;
  v20.m128_f32[0] = *((float *)this + 13);
  v18.m128_i32[0] = *((_DWORD *)this + 14);
  v106 = _mm_shuffle_ps(v20, v20, 0);
  v21 = 0;
  v21.m128_f32[0] = v18.m128_f32[0];
  v18.m128_i32[0] = *((_DWORD *)this + 15);
  v107 = _mm_shuffle_ps(v21, v21, 0);
  v22 = 0;
  v22.m128_f32[0] = v18.m128_f32[0];
  v108 = _mm_shuffle_ps(v22, v22, 0);
  v78 = v19;
  v23 = v130;
  v24 = (float *)(this + 64);
  v76 = 3;
  do
  {
    if ( *v24 <= 0.0 )
    {
      v96 = (__m128)xmmword_10394280;
      v25 = &v96;
    }
    else
    {
      v95 = (__m128)xmmword_10394240;
      v25 = &v95;
    }
    *v23 = *v25;
    ++v24;
    ++v23;
    --v76;
  }
  while ( v76 );
  v26 = *((float *)this + 22) * 4.0;
  v27 = 0;
  v27.m128_f32[0] = *((float *)this + 11);
  v95 = _mm_shuffle_ps(v27, v27, 0);
  v28 = 0;
  v28.m128_f32[0] = *((float *)this + 12) - v27.m128_f32[0];
  v96 = _mm_shuffle_ps(v28, v28, 0);
  v75 = *((float *)this + 21) > 0.0
     || 0.0 != *((float *)this + 28)
     || 0.0 != *((float *)this + 29)
     || 0.0 != *((float *)this + 30)
     || 0.0 != *((float *)this + 25)
     || 0.0 != *((float *)this + 26)
     || 0.0 != *((float *)this + 27);
  v29 = 0;
  v29.m128_f32[0] = *((float *)this + 20);
  v100 = _mm_shuffle_ps(v29, v29, 0);
  v30 = 0;
  v30.m128_f32[0] = *((float *)this + 21) - v29.m128_f32[0];
  v129 = _mm_shuffle_ps(v30, v30, 0);
  v31 = 0;
  v31.m128_f32[0] = *((float *)this + 25);
  v105 = _mm_shuffle_ps(v31, v31, 0);
  v32 = 0;
  v32.m128_f32[0] = *((float *)this + 28) - v31.m128_f32[0];
  v33 = v32;
  v32.m128_i32[0] = *((_DWORD *)this + 26);
  v117 = _mm_shuffle_ps(v33, v33, 0);
  v34 = 0;
  v34.m128_f32[0] = v32.m128_f32[0];
  v109 = _mm_shuffle_ps(v34, v34, 0);
  v34.m128_f32[0] = *((float *)this + 29) - v32.m128_f32[0];
  v35 = 0;
  v35.m128_f32[0] = v34.m128_f32[0];
  v36 = v35;
  v35.m128_i32[0] = *((_DWORD *)this + 27);
  v125 = _mm_shuffle_ps(v36, v36, 0);
  v37 = 0;
  v37.m128_f32[0] = v35.m128_f32[0];
  v113 = _mm_shuffle_ps(v37, v37, 0);
  v37.m128_i32[0] = *((_DWORD *)this + 30);
  v38 = *((_DWORD *)this + 19);
  v37.m128_f32[0] = v37.m128_f32[0] - v35.m128_f32[0];
  v39 = 0;
  v39.m128_f32[0] = v37.m128_f32[0];
  v121 = _mm_shuffle_ps(v39, v39, 0);
  v40 = 0;
  v40.m128_f32[0] = *(float *)(a2 + 68 * v38 + 112);
  v39.m128_i32[0] = *(_DWORD *)(a2 + 68 * v38 + 116);
  v118 = _mm_shuffle_ps(v40, v40, 0);
  v41 = 0;
  v41.m128_f32[0] = v39.m128_f32[0];
  v39.m128_i32[0] = *(_DWORD *)(a2 + 68 * v38 + 120);
  v42 = (_DWORD *)(a2 + 68 * v38);
  v119 = _mm_shuffle_ps(v41, v41, 0);
  v43 = 0;
  v43.m128_f32[0] = v39.m128_f32[0];
  v39.m128_i32[0] = v42[31];
  v120 = _mm_shuffle_ps(v43, v43, 0);
  v44 = 0;
  v44.m128_f32[0] = v39.m128_f32[0];
  v39.m128_i32[0] = v42[32];
  v126 = _mm_shuffle_ps(v44, v44, 0);
  v45 = 0;
  v45.m128_f32[0] = v39.m128_f32[0];
  v39.m128_i32[0] = v42[33];
  v127 = _mm_shuffle_ps(v45, v45, 0);
  v46 = 0;
  v46.m128_f32[0] = v39.m128_f32[0];
  v128 = _mm_shuffle_ps(v46, v46, 0);
  v47 = 0;
  v47.m128_f32[0] = *(float *)(a2 + 68 * (v38 + 2));
  v39.m128_i32[0] = *(_DWORD *)(a2 + 68 * (v38 + 2) + 4);
  v122 = _mm_shuffle_ps(v47, v47, 0);
  v48 = 0;
  v48.m128_f32[0] = v39.m128_f32[0];
  v39.m128_i32[0] = *(_DWORD *)(a2 + 68 * (v38 + 2) + 8);
  v123 = _mm_shuffle_ps(v48, v48, 0);
  v49 = 0;
  v49.m128_f32[0] = v39.m128_f32[0];
  v39.m128_i32[0] = *(_DWORD *)(a2 + 48);
  v124 = _mm_shuffle_ps(v49, v49, 0);
  v50 = 0;
  v50.m128_f32[0] = v39.m128_f32[0];
  v101 = _mm_shuffle_ps(v50, v50, 0);
  if ( a4 )
  {
    v51 = 16 * v9;
    do
    {
      --a4;
      sub_102051B0(&v97);
      v52 = _mm_mul_ps(v106, _mm_and_ps(v130[0], v97));
      v53 = _mm_mul_ps(v107, _mm_and_ps(v130[1], v98));
      v54 = _mm_mul_ps(v108, _mm_and_ps(v130[2], v99));
      v55 = _mm_rsqrt_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(v53, v53), _mm_mul_ps(v52, v52)), _mm_mul_ps(v54, v54)));
      v56 = _mm_add_ps(
              _mm_mul_ps(
                _mm_sqrt_ps(_mm_add_ps(_mm_mul_ps(v99, v99), _mm_add_ps(_mm_mul_ps(v98, v98), _mm_mul_ps(v97, v97)))),
                v96),
              v95);
      v57 = _mm_mul_ps(v55, v52);
      v58 = _mm_mul_ps(v55, v53);
      v59 = _mm_mul_ps(v55, v54);
      v60 = _mm_mul_ps(v56, v57);
      v61 = v56;
      v84 = v57;
      v62 = _mm_add_ps(v112, _mm_mul_ps(v56, v59));
      v63 = _mm_mul_ps(_mm_sub_ps(*v83, v103), v102);
      v64 = _mm_add_ps(v111, _mm_mul_ps(v61, v58));
      v88 = v58;
      v65 = _mm_add_ps(_mm_mul_ps(v114, v63), _mm_add_ps(v110, v60));
      v66 = _mm_add_ps(_mm_mul_ps(v115, v63), v64);
      v67 = _mm_add_ps(_mm_mul_ps(v116, v63), v62);
      v97 = v65;
      v98 = v66;
      v99 = v67;
      *v81 = v65;
      v81[1] = v66;
      v81[2] = v67;
      if ( (a5 & 4) != 0 )
      {
        if ( v75 )
        {
          v104 = sub_102AF370();
          v68 = sub_101F41F0(&v104, (int)v26);
          v69 = _mm_add_ps(_mm_mul_ps(v68, v129), v100);
          v85 = _mm_mul_ps(v84, v69);
          v89 = _mm_mul_ps(v88, v69);
          v92 = _mm_mul_ps(v59, v69);
          v70 = _mm_add_ps(_mm_mul_ps(sub_102AF370(), v117), v105);
          v86 = _mm_add_ps(_mm_mul_ps(v118, v70), v85);
          v90 = _mm_add_ps(_mm_mul_ps(v119, v70), v89);
          v93 = _mm_add_ps(_mm_mul_ps(v120, v70), v92);
          v71 = _mm_add_ps(_mm_mul_ps(sub_102AF370(), v125), v109);
          v87 = _mm_add_ps(_mm_mul_ps(v122, v71), v86);
          v91 = _mm_add_ps(_mm_mul_ps(v123, v71), v90);
          v94 = _mm_add_ps(_mm_mul_ps(v124, v71), v93);
          v72 = _mm_add_ps(_mm_mul_ps(sub_102AF370(), v121), v113);
          v65 = _mm_sub_ps(v97, _mm_mul_ps(_mm_add_ps(_mm_mul_ps(v126, v72), v87), v101));
          v66 = _mm_sub_ps(v98, _mm_mul_ps(_mm_add_ps(_mm_mul_ps(v127, v72), v91), v101));
          v67 = _mm_sub_ps(v99, _mm_mul_ps(_mm_add_ps(_mm_mul_ps(v128, v72), v94), v101));
        }
        v73 = v79;
        *v79 = v65;
        v79[1] = v66;
        v79[2] = v67;
      }
      else
      {
        v73 = v79;
      }
      v83 = (__m128 *)((char *)v83 + v51);
      v81 += 3 * v82;
      v79 = &v73[3 * v80];
    }
    while ( a4 );
  }
  return sub_102AF3F0(v78);
}
