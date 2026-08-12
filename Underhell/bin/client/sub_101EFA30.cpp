float *__cdecl sub_101EFA30(
        float a1,
        float a2,
        float a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float a8,
        float *a9)
{
  float *result; // eax
  double v10; // st6
  double v11; // st4
  double v12; // st2
  double v13; // st5
  double v14; // st7
  double v15; // st1
  double v16; // st6
  double v17; // st3
  double v18; // st7
  double v19; // st4
  double v20; // st2
  double v21; // st3
  double v22; // st1
  double v23; // st1
  double v24; // st1
  double v25; // rt2
  double v26; // st1
  double v27; // rtt
  double v28; // st2
  double v29; // st2
  double v30; // st1
  double v31; // st2
  double v32; // st6
  double v33; // st2
  double v34; // rt0
  double v35; // rt1
  double v36; // st2
  double v37; // st1
  double v38; // st2
  double v39; // st4
  double v40; // st3
  double v41; // st2
  double v42; // st4
  double v43; // rt1
  double v44; // st2
  double v45; // st5
  double v46; // st0
  double v47; // rtt
  double v48; // st3
  double v49; // rt0
  double v50; // st3
  double v51; // st5
  float v52; // [esp+0h] [ebp-30h]
  float v53; // [esp+0h] [ebp-30h]
  float v54; // [esp+4h] [ebp-2Ch]
  float v55; // [esp+4h] [ebp-2Ch]
  float v56; // [esp+8h] [ebp-28h]
  float v57; // [esp+8h] [ebp-28h]
  float v58; // [esp+Ch] [ebp-24h]
  float v59; // [esp+Ch] [ebp-24h]
  float v60; // [esp+10h] [ebp-20h]
  float v61; // [esp+10h] [ebp-20h]
  float v62; // [esp+10h] [ebp-20h]
  float v63; // [esp+14h] [ebp-1Ch]
  float v64; // [esp+18h] [ebp-18h]
  float v65; // [esp+1Ch] [ebp-14h]
  float v66; // [esp+1Ch] [ebp-14h]
  float v67; // [esp+1Ch] [ebp-14h]
  float v68; // [esp+24h] [ebp-Ch]
  float v69; // [esp+28h] [ebp-8h]
  float v70; // [esp+28h] [ebp-8h]
  float v71; // [esp+50h] [ebp+20h]

  result = a9;
  v10 = 1.0 - a1;
  v11 = a2 + 1.0;
  v12 = a3 + 1.0;
  v13 = v12 * v11 * v10;
  v14 = (1.0 - a2) * v10;
  v15 = 1.0 - a3;
  v16 = v10 * (v11 * v15);
  v17 = v14;
  v18 = v15 * v14;
  v19 = v12 * v17;
  v20 = a8 * a8 * 0.5;
  v21 = v20 * a8;
  v71 = 0.5 * a8;
  *a9 = 0.0;
  a9[1] = 0.0;
  a9[2] = 0.0;
  v22 = -(v21 * v13);
  v52 = *a4 * v22;
  v54 = a4[1] * v22;
  v56 = v22 * a4[2];
  v23 = (v13 + 4.0 - v18 - v16) * v21;
  v58 = *a5 * v23;
  v60 = a5[1] * v23;
  v63 = v23 * a5[2];
  v24 = (v16 + v18 - 4.0 - v19) * v21;
  v64 = *a6 * v24;
  v65 = a6[1] * v24;
  v25 = v24 * a6[2];
  v68 = *a7 * (v21 * v19);
  v69 = a7[1] * (v21 * v19);
  v26 = v21 * v19 * a7[2];
  *a9 = v68 + v64 + v58 + v52;
  a9[1] = v69 + v65 + v60 + v54;
  v27 = v20;
  a9[2] = v25 + v26 + v63 + v56;
  v28 = v20 * v13 * 2.0;
  v53 = *a4 * v28;
  v55 = a4[1] * v28;
  v57 = v28 * a4[2];
  v29 = v18 * 2.0;
  v30 = (v29 - (2.0 * v13 + 6.0) + v16) * v27;
  v59 = *a5 * v30;
  v61 = a5[1] * v30;
  v31 = 6.0 - v29 - v16;
  v32 = v30 * a5[2];
  v33 = (v31 + v19) * v27;
  v66 = a6[1] * v33;
  v34 = *a6 * v33;
  v35 = v33 * a6[2];
  v36 = -(v19 * v27);
  v37 = *a7 * v36;
  v70 = a7[1] * v36;
  v38 = v36 * a7[2];
  *a9 = v34 + v37 + *a9 + v59 + v53;
  a9[1] = a9[1] + v70 + v66 + v61 + v55;
  a9[2] = v32 + v35 + v38 + v57 + a9[2];
  v39 = -(v13 * v71);
  v40 = *a4 * v39;
  v41 = a4[1] * v39;
  v42 = v39 * a4[2];
  v43 = v41;
  v44 = (v13 - v18) * v71;
  v62 = a5[1] * v44;
  v45 = v71 * v18;
  v67 = a6[1] * v45;
  v46 = a6[2];
  v47 = v44 * a5[2];
  v48 = v40 + *a5 * v44 + *a6 * v45 + *a9;
  *a9 = v48;
  v49 = v48;
  v50 = v43 + a9[1] + v67 + v62;
  a9[1] = v50;
  v51 = v47 + v45 * v46 + v42 + a9[2];
  a9[2] = v51;
  *a9 = v49 + *a5;
  a9[1] = v50 + a5[1];
  a9[2] = v51 + a5[2];
  return result;
}
