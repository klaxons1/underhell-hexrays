char __cdecl sub_101F0C10(float a1, float a2, float a3, float a4, float a5, float a6, float *a7, float *a8, float *a9)
{
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st4
  double v13; // st5
  double v14; // st3
  double v15; // st2
  double v16; // rt1
  double v17; // st3
  double v18; // st7
  double v19; // rt2
  double v20; // st3
  double v21; // st4
  double v22; // rt1
  double v23; // st3
  double v24; // rt2
  double v25; // st3
  double v26; // rtt
  double v27; // st2
  double v28; // st1
  double v29; // st0
  double v30; // st0
  double v31; // rt2
  double v32; // st0
  double v33; // rt0
  double v34; // st0
  double v35; // st7
  double v36; // st6
  bool v37; // c0
  bool v38; // c3
  double v39; // st7
  double v41; // st4
  float v42; // [esp+0h] [ebp-38h]
  float v43; // [esp+4h] [ebp-34h]
  float v44; // [esp+8h] [ebp-30h]
  float v45; // [esp+Ch] [ebp-2Ch]
  float v46; // [esp+10h] [ebp-28h]
  float v47; // [esp+14h] [ebp-24h]
  float v48; // [esp+30h] [ebp-8h]
  float v49; // [esp+34h] [ebp-4h]

  v9 = a3;
  v10 = a1;
  if ( a1 <= (double)a3 )
  {
    v9 = a1;
    v10 = a3;
    v12 = a4;
    v13 = a2;
  }
  else
  {
    a1 = a3;
    a3 = v10;
    v11 = a2;
    a2 = a4;
    v12 = v11;
    v13 = a4;
    a4 = v12;
  }
  v14 = a5;
  if ( a5 < v10 )
  {
    a3 = a5;
    v14 = v10;
    v10 = a5;
    a5 = v14;
    a4 = a6;
    v15 = v12;
    v12 = a6;
    a6 = v15;
  }
  v16 = v14;
  v17 = v9;
  v18 = v16;
  if ( v17 > v10 )
  {
    v19 = v17;
    a1 = v10;
    a3 = v17;
    v20 = v12;
    v21 = v19;
    a2 = v20;
    v22 = v20;
    v23 = v13;
    v13 = v22;
    a4 = v23;
    v24 = v23;
    v25 = v21;
    v12 = v24;
    v26 = v25;
    v17 = v10;
    v10 = v26;
  }
  v27 = 0.0;
  v48 = 0.0;
  v49 = (v10 - v17) * (a6 - v13) / (v18 - v17) + v13;
  v28 = 1.0;
  v29 = a6;
  while ( 1 )
  {
    v47 = v29;
    v46 = v18;
    v45 = v27 * v49 + v12 * (v28 - v27);
    v44 = v10;
    v43 = v13;
    v42 = v17;
    if ( !sub_101EE730(v42, v43, v44, v45, v46, v47, a7, a8, a9) )
      return 0;
    v35 = *a7 + *a7 + *a8;
    v36 = a4;
    v13 = a2;
    if ( a2 >= (double)a4 || a6 <= v36 )
      break;
    v37 = v35 > 0.0;
    v38 = 0.0 == v35;
    v39 = a6;
    if ( v37 || v38 )
      return 1;
LABEL_19:
    v41 = v48 + 0.05;
    v48 = v41;
    if ( v41 > 1.0 )
      return 1;
    v30 = v39;
    v18 = a5;
    v31 = v30;
    v32 = v36;
    v10 = a3;
    v33 = v32;
    v34 = v41;
    v12 = v33;
    v27 = v34;
    v17 = a1;
    v29 = v31;
    v28 = 1.0;
  }
  if ( a2 <= v36 )
    return 1;
  if ( a4 > (double)a6 && v35 > 0.0 )
  {
    v39 = a6;
    v13 = a2;
    v36 = a4;
    goto LABEL_19;
  }
  return 1;
}
