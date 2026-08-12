double __cdecl sub_101D9530(int a1, int a2, int a3, int a4, char a5, float *a6)
{
  int v6; // ecx
  int v7; // ebx
  float *v8; // ecx
  float *v9; // eax
  int v10; // edi
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st4
  float *v15; // esi
  double v16; // st3
  unsigned int v17; // edx
  double v18; // st0
  double v19; // st0
  double v20; // st0
  double v21; // st0
  double v22; // st6
  int v23; // edx
  double v24; // st5
  double v25; // st4
  double v26; // st3
  float *v27; // esi
  double v28; // st2
  double v29; // st0
  double v30; // st7
  double v31; // st6
  double v32; // st5
  float *v33; // edx
  unsigned int v34; // esi
  double v35; // st1
  double v36; // st3
  double v37; // st1
  double v38; // st3
  double v39; // st1
  double v40; // st2
  double v41; // st3
  double v42; // st1
  double v43; // st3
  double v44; // st1
  double v45; // st2
  double v46; // st3
  double v47; // st1
  double v48; // st3
  double v49; // st1
  double v50; // st2
  double v51; // st3
  double v52; // st6
  float *v53; // esi
  int v54; // edx
  double v55; // st1
  double v56; // st3
  double v57; // st7
  bool v58; // cc
  float v60; // [esp+4h] [ebp-24h]
  float v61; // [esp+8h] [ebp-20h]
  double v62; // [esp+8h] [ebp-20h]
  float v63; // [esp+8h] [ebp-20h]
  double v64; // [esp+8h] [ebp-20h]
  float v65; // [esp+8h] [ebp-20h]
  double v66; // [esp+8h] [ebp-20h]
  float v67; // [esp+8h] [ebp-20h]
  float v68; // [esp+8h] [ebp-20h]
  float v69; // [esp+8h] [ebp-20h]
  float v70; // [esp+8h] [ebp-20h]
  float v71; // [esp+8h] [ebp-20h]
  float v72; // [esp+8h] [ebp-20h]
  float v73; // [esp+8h] [ebp-20h]
  float v74; // [esp+10h] [ebp-18h]
  int v75; // [esp+14h] [ebp-14h]
  double v76; // [esp+18h] [ebp-10h]
  double v77; // [esp+20h] [ebp-8h]
  double v78; // [esp+20h] [ebp-8h]
  double v79; // [esp+20h] [ebp-8h]
  double v80; // [esp+20h] [ebp-8h]

  v74 = 0.0;
  v7 = 1;
  if ( !a5 )
    v7 = a4;
  v75 = 0;
  if ( a3 > 0 )
  {
    v8 = (float *)(v6 + 4);
    do
    {
      v9 = a6;
      v10 = 0;
      v60 = 9.9999998e10;
      if ( a6 )
      {
        if ( v7 >= 4 )
        {
          v11 = *v8;
          v12 = a6[1];
          v13 = v8[1];
          v14 = *a6;
          v15 = (float *)(a2 + 128);
          v16 = *(v8 - 1);
          v17 = ((unsigned int)(v7 - 4) >> 2) + 1;
          v10 = 4 * v17;
          v76 = a6[2];
          do
          {
            v77 = v16 - *(v15 - 32);
            v18 = v11 - *(v15 - 16);
            v61 = (v13 - *v15) * (v13 - *v15) * v14 + v18 * v18 * v12 + v77 * v77 * v76;
            if ( v60 > (double)v61 )
              v60 = (v13 - *v15) * (v13 - *v15) * v14 + v18 * v18 * v12 + v77 * v77 * v76;
            v78 = v13 - v15[1];
            v62 = v16 - *(v15 - 31);
            v19 = v11 - *(v15 - 15);
            v63 = v78 * v78 * v14 + v19 * v19 * v12 + v62 * v62 * v76;
            if ( v60 > (double)v63 )
              v60 = v63;
            v79 = v13 - v15[2];
            v64 = v16 - *(v15 - 30);
            v20 = v11 - *(v15 - 14);
            v65 = v79 * v79 * v14 + v20 * v20 * v12 + v64 * v64 * v76;
            if ( v60 > (double)v65 )
              v60 = v65;
            v80 = v13 - v15[3];
            v66 = v16 - *(v15 - 29);
            v21 = v11 - *(v15 - 13);
            v67 = v80 * v80 * v14 + v21 * v21 * v12 + v66 * v66 * v76;
            if ( v60 > (double)v67 )
              v60 = v67;
            v15 += 4;
            --v17;
          }
          while ( v17 );
          v9 = a6;
        }
        if ( v10 < v7 )
        {
          v22 = v9[1];
          v23 = v7 - v10;
          v24 = v8[1];
          v25 = *v9;
          v26 = v9[2];
          v27 = (float *)(a2 + 4 * v10 + 128);
          do
          {
            v28 = *(v8 - 1) - *(v27 - 32);
            v29 = *v8 - *(v27 - 16);
            v68 = (v24 - *v27) * (v24 - *v27) * v25 + v29 * v29 * v22 + v28 * v28 * v26;
            if ( v60 > (double)v68 )
              v60 = (v24 - *v27) * (v24 - *v27) * v25 + v29 * v29 * v22 + v28 * v28 * v26;
            ++v27;
            --v23;
          }
          while ( v23 );
        }
      }
      else
      {
        if ( v7 >= 4 )
        {
          v30 = v8[1];
          v31 = *v8;
          v32 = *(v8 - 1);
          v33 = (float *)(a2 + 64);
          v34 = ((unsigned int)(v7 - 4) >> 2) + 1;
          v10 = 4 * v34;
          do
          {
            v35 = v30 - v33[16];
            v36 = v32 - *(v33 - 16);
            v69 = v35 * v35 + (v31 - *v33) * (v31 - *v33) + v36 * v36;
            if ( v60 > (double)v69 )
              v60 = v35 * v35 + (v31 - *v33) * (v31 - *v33) + v36 * v36;
            v37 = v31 - v33[1];
            v38 = v37 * v37;
            v39 = v30 - v33[17];
            v40 = v38;
            v41 = v32 - *(v33 - 15);
            v70 = v39 * v39 + v40 + v41 * v41;
            if ( v60 > (double)v70 )
              v60 = v39 * v39 + v40 + v41 * v41;
            v42 = v31 - v33[2];
            v43 = v42 * v42;
            v44 = v30 - v33[18];
            v45 = v43;
            v46 = v32 - *(v33 - 14);
            v71 = v44 * v44 + v45 + v46 * v46;
            if ( v60 > (double)v71 )
              v60 = v44 * v44 + v45 + v46 * v46;
            v47 = v31 - v33[3];
            v48 = v47 * v47;
            v49 = v30 - v33[19];
            v50 = v48;
            v51 = v32 - *(v33 - 13);
            v72 = v49 * v49 + v50 + v51 * v51;
            if ( v60 > (double)v72 )
              v60 = v49 * v49 + v50 + v51 * v51;
            v33 += 4;
            --v34;
          }
          while ( v34 );
        }
        if ( v10 < v7 )
        {
          v52 = *v8;
          v53 = (float *)(a2 + 4 * v10 + 64);
          v54 = v7 - v10;
          do
          {
            v55 = v8[1] - v53[16];
            v56 = *(v8 - 1) - *(v53 - 16);
            v73 = v55 * v55 + (v52 - *v53) * (v52 - *v53) + v56 * v56;
            if ( v60 > (double)v73 )
              v60 = v55 * v55 + (v52 - *v53) * (v52 - *v53) + v56 * v56;
            ++v53;
            --v54;
          }
          while ( v54 );
        }
      }
      v57 = *(float *)(a1 + 4 * v75) * v60;
      v8 += 4;
      v58 = ++v75 < a3;
      v74 = v57 + v74;
    }
    while ( v58 );
  }
  return v74;
}
