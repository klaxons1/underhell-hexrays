void __usercall sub_101DBAA0(float *a1@<eax>, float *a2, float *a3, bool *a4, float *a5, int a6, int a7, int a8)
{
  float *v8; // ecx
  int v9; // ebx
  float *v10; // ebp
  int v12; // edi
  int v13; // edx
  float *v14; // ecx
  unsigned int v15; // edi
  int v16; // eax
  double v17; // st6
  int v18; // eax
  double v19; // st6
  double v20; // st6
  float *v21; // edx
  int v22; // edi
  float *v23; // eax
  int v24; // ecx
  double v25; // st5
  int v26; // ebx
  double v27; // st4
  double v28; // st4
  double v29; // st4
  double v30; // st4
  float *v31; // edx
  int v32; // eax
  double v33; // st4
  double v34; // st5
  int v35; // ebx
  double v36; // st4
  int v37; // edx
  bool v38; // zf
  int v39; // edi
  int v40; // esi
  double v41; // st4
  double v42; // st3
  double v43; // st2
  double v44; // st7
  char v45; // fps^1
  bool v46; // c0
  char v47; // c2
  bool v48; // c3
  bool v49; // al
  int v50; // ebx
  int v51; // esi
  double v52; // st7
  int v53; // esi
  int v54; // ebx
  double v55; // st7
  double v56; // st5
  double v57; // st5
  double v58; // st4
  double v59; // st5
  double v60; // st6
  float v61; // [esp+10h] [ebp-4Ch]
  float v62; // [esp+10h] [ebp-4Ch]
  float v63; // [esp+10h] [ebp-4Ch]
  float v64; // [esp+10h] [ebp-4Ch]
  float *v65; // [esp+10h] [ebp-4Ch]
  float *v66; // [esp+14h] [ebp-48h]
  float *v67; // [esp+18h] [ebp-44h]
  int v68; // [esp+1Ch] [ebp-40h]
  double v69; // [esp+1Ch] [ebp-40h]
  float v70; // [esp+24h] [ebp-38h]
  float v71; // [esp+24h] [ebp-38h]
  float v72; // [esp+24h] [ebp-38h]
  float v73; // [esp+24h] [ebp-38h]
  float v74; // [esp+24h] [ebp-38h]
  float v75; // [esp+28h] [ebp-34h]
  float v76; // [esp+28h] [ebp-34h]
  float v77; // [esp+28h] [ebp-34h]
  float v78; // [esp+2Ch] [ebp-30h]
  float v79[2]; // [esp+30h] [ebp-2Ch]
  float v80; // [esp+38h] [ebp-24h]
  float v81; // [esp+3Ch] [ebp-20h]
  float v82; // [esp+40h] [ebp-1Ch]
  float v83[2]; // [esp+44h] [ebp-18h]
  float v84[4]; // [esp+4Ch] [ebp-10h]
  float v85; // [esp+68h] [ebp+Ch]
  float v86; // [esp+68h] [ebp+Ch]
  float v87; // [esp+68h] [ebp+Ch]
  float v88; // [esp+68h] [ebp+Ch]
  float *v89; // [esp+78h] [ebp+1Ch]
  float *v90; // [esp+78h] [ebp+1Ch]
  float v91; // [esp+78h] [ebp+1Ch]
  float v92; // [esp+78h] [ebp+1Ch]
  float v93; // [esp+78h] [ebp+1Ch]
  float v94; // [esp+78h] [ebp+1Ch]
  float v95; // [esp+78h] [ebp+1Ch]
  float v96; // [esp+78h] [ebp+1Ch]

  v8 = a3;
  v9 = a6;
  v10 = a2;
  a1[2] = 0.0;
  v12 = a8;
  a1[1] = 0.0;
  *a1 = 0.0;
  v13 = 0;
  v84[2] = 0.0;
  v84[1] = 0.0;
  v84[0] = 0.0;
  v83[0] = 0.0;
  v82 = 0.0;
  v81 = 0.0;
  a3[2] = 0.0;
  a3[1] = 0.0;
  *a3 = 0.0;
  v61 = 0.0;
  if ( a8 >= 4 )
  {
    v14 = a5 + 2;
    v15 = ((unsigned int)(a8 - 4) >> 2) + 1;
    v16 = a6 + 8;
    v13 = 4 * v15;
    do
    {
      v16 += 16;
      v17 = *(v14 - 2) * *(float *)(v16 - 24);
      v14 += 16;
      --v15;
      *a1 = v17 + *a1;
      a1[1] = *(v14 - 17) * *(float *)(v16 - 24) + a1[1];
      a1[2] = *(v14 - 16) * *(float *)(v16 - 24) + a1[2];
      v62 = v61 + *(float *)(v16 - 24);
      *a1 = *(v14 - 14) * *(float *)(v16 - 20) + *a1;
      a1[1] = *(v14 - 13) * *(float *)(v16 - 20) + a1[1];
      a1[2] = *(v14 - 12) * *(float *)(v16 - 20) + a1[2];
      v63 = v62 + *(float *)(v16 - 20);
      *a1 = *(v14 - 10) * *(float *)(v16 - 16) + *a1;
      a1[1] = *(v14 - 9) * *(float *)(v16 - 16) + a1[1];
      a1[2] = *(v14 - 8) * *(float *)(v16 - 16) + a1[2];
      v64 = *(float *)(v16 - 16) + v63;
      *a1 = *(v14 - 6) * *(float *)(v16 - 12) + *a1;
      a1[1] = *(v14 - 5) * *(float *)(v16 - 12) + a1[1];
      a1[2] = *(v14 - 4) * *(float *)(v16 - 12) + a1[2];
      v61 = v64 + *(float *)(v16 - 12);
    }
    while ( v15 );
    v8 = a3;
    v12 = a8;
  }
  if ( v13 < v12 )
  {
    v18 = (int)&a5[4 * v13 + 2];
    do
    {
      ++v13;
      v19 = *(float *)(v18 - 8) * *(float *)(a6 + 4 * v13 - 4);
      v18 += 16;
      *a1 = v19 + *a1;
      a1[1] = *(float *)(v18 - 20) * *(float *)(a6 + 4 * v13 - 4) + a1[1];
      a1[2] = *(float *)(v18 - 16) * *(float *)(a6 + 4 * v13 - 4) + a1[2];
      v61 = *(float *)(a6 + 4 * v13 - 4) + v61;
    }
    while ( v13 < v12 );
    v8 = a3;
  }
  v20 = v61;
  *a1 = *a1 / v61;
  a1[1] = a1[1] / v61;
  a1[2] = a1[2] / v61;
  if ( v12 > 0 )
  {
    v21 = a5;
    v22 = 0;
    v23 = a2 + 1;
    v67 = a5;
    v66 = a2;
    v65 = a2 + 1;
    v68 = a8;
    do
    {
      *(v23 - 1) = *v21 - *a1;
      v24 = 0;
      *v23 = *(float *)((char *)v23 + (char *)a5 - (char *)a2) - a1[1];
      v23[1] = v21[2] - a1[2];
      if ( a7 >= 4 )
      {
        v25 = *(float *)(v22 + v9);
        v26 = 2;
        v89 = v66;
        do
        {
          v27 = *v89;
          *(&v81 + v24) = v27 * v27 * v25 + *(&v81 + v24);
          v24 += 4;
          *(&v81 + v24) = v27 * a2[v22 + (v26 - 1) % 3] * v25 + *(&v81 + v24);
          v28 = v89[1];
          v79[v24] = v28 * v28 * v25 + v79[v24];
          v83[v24 - 1] = v28 * a2[v22 + v26 % 3] * v25 + v83[v24 - 1];
          v29 = v89[2];
          v79[v24 + 1] = v29 * v29 * v25 + v79[v24 + 1];
          v30 = v29 * a2[v22 + (v26 + 1) % 3];
          v31 = v89;
          v32 = v26 + 2;
          v89 += 4;
          v26 += 4;
          v83[v24] = v30 * v25 + v83[v24];
          v33 = v31[3];
          *(&v80 + v24) = v33 * v33 * v25 + *(&v80 + v24);
          v10 = a2;
          v83[v24 + 1] = v33 * a2[v22 + v32 % 3] * v25 + v83[v24 + 1];
        }
        while ( v24 < a7 - 3 );
        v23 = v65;
        v9 = a6;
      }
      if ( v24 < a7 )
      {
        v34 = *(float *)(v22 + v9);
        v35 = v24 + 1;
        v90 = &v10[v24 + v22];
        do
        {
          v36 = *v90;
          v37 = v35 % 3;
          *(&v81 + v24) = v36 * v36 * v34 + *(&v81 + v24);
          v10 = a2;
          ++v90;
          ++v24;
          ++v35;
          v83[v24 + 1] = v36 * a2[v22 + v37] * v34 + v83[v24 + 1];
        }
        while ( v24 < a7 );
        v9 = a6;
        v23 = v65;
      }
      v66 += 4;
      v21 = v67 + 4;
      v23 += 4;
      v22 += 4;
      v38 = v68-- == 1;
      v67 += 4;
      v65 = v23;
    }
    while ( !v38 );
    v8 = a3;
  }
  v39 = 0;
  v91 = 0.0;
  v40 = 0;
  v70 = v20 * 0.007843137718737125 * 0.007843137718737125;
  v41 = v70;
  v42 = v81;
  if ( v81 < (double)v70 )
  {
    v81 = 0.0;
    v42 = (float)0.0;
  }
  else
  {
    v40 = 1;
  }
  if ( v42 > 0.0 )
  {
    v39 = 0;
    v91 = v42;
  }
  v43 = v82;
  if ( v82 < v41 )
  {
    v82 = 0.0;
    v43 = (float)0.0;
  }
  else
  {
    ++v40;
  }
  if ( v91 < v43 )
  {
    v39 = 1;
    v91 = v43;
  }
  if ( v83[0] < v41 )
    v83[0] = 0.0;
  else
    ++v40;
  if ( v91 < (double)v83[0] )
    v39 = 2;
  v44 = v83[0];
  *a4 = 1;
  v92 = 0.007843137718737125 * (v20 * 3.0 * 0.007843137718737125);
  v47 = 0;
  v46 = v92 < v42;
  v48 = v92 == v42;
  *a4 = (v45 & 0x41) == 0;
  *a4 &= v43 < v92;
  v49 = v92 > v44;
  v38 = !v49 || !*a4;
  *a4 &= v49;
  if ( v38 )
  {
    if ( v40 == 1 )
    {
      v8[v39] = 1.0;
    }
    else if ( v40 == 2 )
    {
      v50 = (v39 + 1) % 3;
      if ( *(&v81 + v50) <= 0.0 )
        v51 = (v39 + 2) % 3;
      else
        v51 = (v39 + 1) % 3;
      if ( v51 == v50 )
        v52 = v84[v39];
      else
        v52 = v84[(v39 + 2) % 3];
      v93 = v52;
      v8[v51] = v93 / *(&v81 + v39);
      v8[v39] = 1.0;
    }
    else
    {
      v53 = 0;
      v94 = 100000.0;
      if ( a7 > 0 )
      {
        do
        {
          v54 = v53 + 1;
          v55 = *(&v81 + (v53 + 1) % 3) * *(&v81 + v53);
          v69 = v84[v53];
          v71 = v55 - v69 * v69;
          v85 = v55;
          v86 = sqrt(v85);
          v87 = v69 / v86;
          v88 = fabs(v87);
          v79[v53 - 1] = v88;
          if ( v71 > (double)v94 )
          {
            v94 = v55 - v69 * v69;
            v39 = v53;
          }
          ++v53;
        }
        while ( v54 < a7 );
        v8 = a3;
      }
      v72 = v84[(v39 + 2) % 3];
      v75 = v84[(v39 + 1) % 3];
      v78 = *(&v81 + (v39 + 1) % 3);
      v80 = *(&v81 + v39);
      v79[0] = -v84[v39];
      v56 = v72;
      v73 = v78 * v72 + v75 * v79[0];
      v76 = v79[0] * v56 + v75 * v80;
      v74 = v73 / v94;
      v77 = v76 / v94;
      v8[v39] = 1.0;
      v8[(v39 + 1) % 3] = 1.0;
      v8[(v39 + 2) % 3] = v77 + v74;
    }
    v95 = v8[1] * v8[1] + *v8 * *v8 + v8[2] * v8[2];
    v96 = sqrt(v95);
    if ( v96 <= 0.0 )
    {
      v58 = 0.0;
      v57 = 0.0;
    }
    else
    {
      v57 = *a3 / v96;
      v58 = 0.0;
    }
    *a3 = v57;
    v59 = v96;
    v60 = v58;
    if ( v96 > 0.0 )
      v58 = a3[1] / v59;
    a3[1] = v58;
    if ( v59 <= 0.0 )
      a3[2] = v60;
    else
      a3[2] = a3[2] / v59;
  }
}
