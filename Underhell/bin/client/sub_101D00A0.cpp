double __cdecl sub_101D00A0(int a1, int a2, double *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // edi
  int v7; // ecx
  __int16 v8; // fps
  bool v9; // c0
  char v10; // c2
  bool v11; // c3
  double v12; // st7
  int v13; // eax
  double v14; // st7
  int v15; // esi
  int v16; // edx
  int v17; // ebx
  double v18; // st7
  double v19; // st6
  int v20; // edx
  double *v21; // esi
  int i; // ecx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  double v26; // st7
  double v27; // st5
  double v28; // st4
  double v29; // st4
  double v30; // st3
  double v31; // kr00_8
  long double v32; // st2
  long double v33; // st1
  long double v34; // st7
  bool v35; // zf
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  int *v39; // esi
  __int16 v40; // fps
  double v41; // st7
  bool v42; // c0
  char v43; // c2
  bool v44; // c3
  int v45; // eax
  int *v46; // edx
  int v47; // edx
  int v48; // ecx
  int v49; // eax
  double v50; // st7
  double v51; // st6
  double v52; // st5
  long double v53; // st4
  long double v54; // st3
  double v55; // st7
  int *v56; // edi
  double *v57; // esi
  __int64 v58; // rax
  int v59; // ecx
  int v60; // esi
  int v61; // eax
  int v62; // edx
  int v63; // ebx
  int v64; // ecx
  int v65; // esi
  int v66; // edi
  double v67; // st7
  long double v68; // st6
  __int16 v69; // fps
  long double v70; // st5
  bool v71; // c0
  char v72; // c2
  bool v73; // c3
  double v74; // st7
  double v75; // st6
  long double v76; // [esp+18h] [ebp-110h]
  int v77; // [esp+18h] [ebp-110h]
  double v78; // [esp+18h] [ebp-110h]
  long double v79; // [esp+20h] [ebp-108h]
  double v80; // [esp+20h] [ebp-108h]
  double v81; // [esp+20h] [ebp-108h]
  int v82; // [esp+2Ch] [ebp-FCh]
  long double v83; // [esp+30h] [ebp-F8h]
  long double v84; // [esp+30h] [ebp-F8h]
  double v85; // [esp+38h] [ebp-F0h]
  double v86; // [esp+38h] [ebp-F0h]
  double v87; // [esp+38h] [ebp-F0h]
  int v88; // [esp+44h] [ebp-E4h]
  int v89; // [esp+44h] [ebp-E4h]
  long double v90; // [esp+48h] [ebp-E0h]
  long double v91; // [esp+50h] [ebp-D8h]
  double v92; // [esp+50h] [ebp-D8h]
  double v93; // [esp+58h] [ebp-D0h]
  double v94; // [esp+60h] [ebp-C8h]
  double v95; // [esp+60h] [ebp-C8h]
  double v96; // [esp+68h] [ebp-C0h]
  double v97; // [esp+68h] [ebp-C0h]
  double v98; // [esp+70h] [ebp-B8h]
  double v99; // [esp+78h] [ebp-B0h]
  int v100; // [esp+84h] [ebp-A4h]
  double v101; // [esp+88h] [ebp-A0h]
  double v102; // [esp+88h] [ebp-A0h]
  double v103; // [esp+90h] [ebp-98h]
  int v104; // [esp+98h] [ebp-90h] BYREF
  int v105; // [esp+9Ch] [ebp-8Ch]
  double v106; // [esp+B8h] [ebp-70h]
  double v107; // [esp+C0h] [ebp-68h]
  double v108; // [esp+C8h] [ebp-60h]
  double v109; // [esp+D0h] [ebp-58h]
  double v110; // [esp+D8h] [ebp-50h]
  double v111; // [esp+E0h] [ebp-48h]
  _DWORD v112[16]; // [esp+E8h] [ebp-40h] BYREF

  v5 = a2;
  v100 = 64;
  if ( !a2 )
    return 0.0;
  v7 = 1;
  dbl_10456308 = (double)a2;
  dbl_10454230 = 1.0 / dbl_10456308;
  dbl_10456140[0] = *a3;
  dbl_10456138 = dbl_10456140[0];
  dbl_104553A8[0] = dbl_10456140[0];
  for ( *a5 = 0; v7 < a2; *a5 = 0 )
  {
    v9 = dbl_10456138 < a3[v7];
    v10 = 0;
    v11 = dbl_10456138 == a3[v7];
    if ( (v8 & 0x4100) == 0 )
      dbl_10456138 = a3[v7];
    if ( dbl_10456140[0] < a3[v7] )
      dbl_10456140[0] = a3[v7];
    v12 = dbl_104553A8[0] + a3[v7++];
    dbl_104553A8[0] = v12;
  }
  v13 = 0;
  for ( dbl_104553A8[0] = dbl_104553A8[0] * dbl_10454230; v13 < a2; dbl_104553A8[v13] = v14 )
    v14 = a3[v13++] - dbl_104553A8[0];
  v15 = a1;
  dbl_10456138 = dbl_10456138 - dbl_104553A8[0];
  v82 = a1 - 1;
  dbl_10456140[0] = dbl_10456140[0] - dbl_104553A8[0];
  while ( 1 )
  {
    v16 = 0;
    v17 = 1;
    v88 = 0;
    if ( v82 > 0 )
    {
      v18 = (dbl_10456140[0] - dbl_10456138) / (double)v82;
      memset(&v104, 0, 4 * v82);
      do
      {
        v19 = (double)v88;
        v88 = ++v16;
        dbl_104562C0[v16] = (v19 + 0.5) * v18 + dbl_10456138;
      }
      while ( v16 < v82 );
      v5 = a2;
    }
    v20 = 0;
    *((_DWORD *)&v103 + v15 + 1) = 0;
    if ( v5 > 0 )
    {
      v21 = dbl_104553B0;
      do
      {
        for ( i = 0; i < v82; ++i )
        {
          if ( *v21 < dbl_104562C8[i] )
            break;
        }
        ++*(&v104 + i);
        v17 = (a5[v20] == i) & (unsigned __int8)v17;
        ++v21;
        a5[v20++] = i;
      }
      while ( v20 < a2 );
      v15 = a1;
    }
    v23 = 0;
    v24 = 0;
    v89 = 0;
    if ( v15 > 0 )
    {
      do
        v23 += *(&v104 + v24++) != 0;
      while ( v24 < v15 );
      v89 = v23;
      if ( v23 == 1 )
        break;
    }
    v25 = 0;
    dbl_10456300 = 0.0;
    dbl_10456978 = 0.0;
    for ( dbl_10458498 = 0.0; v25 < a2; dbl_10456300 = v26 * v26 + dbl_10456300 )
    {
      ++v25;
      dbl_10458498 = (double)(int)a5[v25 - 1] * dbl_104553A8[v25] + dbl_10458498;
      dbl_10456978 = (double)(int)a5[v25 - 1] + dbl_10456978;
      v26 = (double)(int)a5[v25 - 1];
    }
    dbl_10456978 = dbl_10456978 * dbl_10454230;
    dbl_10456300 = dbl_10456300 - dbl_10456978 * dbl_10456978 * dbl_10456308;
    v103 = (double)a1 - 1.0;
    v27 = dbl_10456308 * -dbl_10456978 * -dbl_10456978 + dbl_10456300;
    v28 = dbl_10456308 * (v103 - dbl_10456978);
    v94 = v28 * -dbl_10456978 + dbl_10456300;
    v29 = v28 * (v103 - dbl_10456978) + dbl_10456300;
    v85 = v29 * v27;
    v106 = v103 * v103;
    v96 = v106 * dbl_10456300 * v85 * v85;
    v30 = -(dbl_10456300 * dbl_104553A8[0]);
    v108 = 1.0 - dbl_104553A8[0];
    v101 = dbl_10458498 * -dbl_10456978;
    v31 = dbl_10458498 * (v103 - dbl_10456978);
    v76 = v30 - v101;
    v79 = v108 * dbl_10456300 - v101;
    qword_10454238 = *(_QWORD *)&dbl_10456138;
    v32 = (v79 - fabs(v79) + fabs(v76) + v76) * 0.5 * v94;
    qword_10454240 = *(_QWORD *)&dbl_10456140[0];
    v33 = ((v108 * dbl_10456300 - v31) * v27
         - fabs((v108 * dbl_10456300 - v31) * v27 - v32)
         + fabs((v30 - v31) * v27 - v32)
         + (v30 - v31) * v27)
        * 0.5;
    v90 = v33 * v29;
    v83 = (v79 * v85 - fabs(v79 * v85 - v33 * v94) + fabs(v76 * v85 - v33 * v94) + v76 * v85) * 0.5;
    v34 = -dbl_10456978 * v90 - v83 * (v103 - dbl_10456978);
    dbl_10458600 = dbl_10456300 * (v83 - v90) * (v83 - v90)
                 + dbl_10456308 * v34 * v34
                 - dbl_10458498 * dbl_10458498 * v96;
    dbl_104546E8 = dbl_10456300 * v96;
    v35 = v100-- == 0;
    dbl_10456138 = (1.0 / v85 * v83 + v101) * (1.0 / dbl_10456300);
    dbl_10456140[0] = (1.0 / v85 * v90 + v31) * (1.0 / dbl_10456300);
    if ( v35 )
      break;
    if ( v17 )
    {
      if ( v15 > 0 )
        memset(v112, 0xFFu, 4 * v15);
      v36 = 0;
      if ( a2 > 0 )
      {
        do
        {
          v37 = a5[v36];
          v38 = v112[v37];
          v39 = &v112[v37];
          if ( v38 == -1 )
          {
            v112[v37 + 8] = v36;
            *v39 = v36;
          }
          else
          {
            v41 = dbl_104553B0[v38];
            v42 = v41 < dbl_104553B0[v36];
            v43 = 0;
            v44 = v41 == dbl_104553B0[v36];
            if ( (v40 & 0x4100) == 0 )
              *v39 = v36;
            v45 = v112[v37 + 8];
            v46 = &v112[v37 + 8];
            if ( dbl_104553B0[v45] < dbl_104553B0[v36] )
              *v46 = v36;
          }
          ++v36;
        }
        while ( v36 < a2 );
        v15 = a1;
      }
      v47 = 0;
      v110 = dbl_10456300 + 1.0;
      while ( 1 )
      {
        v99 = 1.0;
        if ( v47 )
          HIDWORD(v99) = -1074790400;
        v48 = v47;
        v77 = v47;
        v107 = dbl_10454230 * v99 + dbl_10456978;
        v111 = v110 - (dbl_10456978 * v99 + dbl_10456978 * v99) - dbl_10454230;
        if ( v47 < v47 + v82 )
          break;
LABEL_51:
        if ( ++v47 >= 2 )
          goto LABEL_52;
      }
      while ( 1 )
      {
        v49 = *(&v104 + v48);
        if ( v49 && (v49 > 1 || v89 > 2) )
        {
          v93 = v99 * dbl_104553B0[v112[v48 - 8 * v47 + 8]] + dbl_10458498;
          v78 = (double)v77 * v99 + (double)v77 * v99 + v111;
          v97 = -v107;
          v95 = v103 - v107;
          v50 = v97 * v97 * dbl_10456308 + v78;
          v51 = v95 * v97 * dbl_10456308 + v78;
          v102 = v95 * v95 * dbl_10456308 + v78;
          v98 = v102 * v50;
          v86 = v106 * v98 * v98 * v78;
          v52 = -(v78 * dbl_104553A8[0]);
          v80 = v95 * v93;
          v91 = v52 - v97 * v93;
          v84 = v108 * v78 - v97 * v93;
          v109 = (v52 - v80) * v50;
          v53 = (v84 - fabs(v84) + fabs(v91) + v91) * 0.5 * v51;
          v54 = ((v108 * v78 - v80) * v50 - fabs((v108 * v78 - v80) * v50 - v53) + fabs(v109 - v53) + v109) * 0.5;
          v81 = v54 * v102;
          v92 = (v84 * v98 - fabs(v84 * v98 - v54 * v51) + fabs(v91 * v98 - v54 * v51) + v91 * v98) * 0.5;
          v55 = (v81 * v97 - v92 * v95) * (v81 * v97 - v92 * v95) * dbl_10456308
              + (v92 - v81) * (v92 - v81) * v78
              - v86 * v93 * v93;
          v87 = v86 * v78;
          if ( v55 * dbl_104546E8 < v87 * dbl_10458600 )
            break;
        }
        v77 = ++v48;
        if ( v48 >= v47 + v15 - 1 )
          goto LABEL_51;
      }
      dbl_104546E8 = v87;
      dbl_10456138 = (v92 * (1.0 / v98) + v97 * v93) * (1.0 / v78);
      dbl_10456140[0] = (v81 * (1.0 / v98) + v95 * v93) * (1.0 / v78);
      dbl_10458600 = v55;
    }
    v5 = a2;
  }
LABEL_52:
  v56 = &v104;
  v57 = &dbl_10456138;
  do
  {
    v58 = (__int64)floor((dbl_104553A8[0] + *v57) * 255.0 + 0.5);
    *v56 = v58;
    if ( (int)v58 >= 0 )
    {
      if ( (int)v58 > 255 )
        LODWORD(v58) = 255;
    }
    else
    {
      LODWORD(v58) = 0;
    }
    *v56 = v58;
    ++v57;
    ++v56;
  }
  while ( (int)v57 < (int)dbl_10456148 );
  v59 = 2;
  if ( a1 > 2 )
  {
    v60 = a1 - 2;
    do
    {
      v61 = (v105 * (v59++ - 1) + (a1 - 2) / 2 + v104 * v60--) / v82;
      *((_DWORD *)&v103 + v59 + 1) = v61;
    }
    while ( v59 < a1 );
  }
  v62 = v105;
  v63 = 0;
  *a4 = v104;
  a4[1] = v62;
  for ( dbl_104587E0 = 0.0; v63 < a2; dbl_104587E0 = (v74 - v75) * (v74 - v75) + dbl_104587E0 )
  {
    v64 = 1;
    v65 = 0;
    if ( a1 > 1 )
    {
      v66 = 0;
      v67 = a3[v63] * 255.0;
      do
      {
        v68 = fabs((double)*(&v104 + v64) - v67);
        v70 = fabs((double)*(int *)((char *)&v104 + v66) - v67);
        v71 = v70 < v68;
        v72 = 0;
        v73 = v70 == v68;
        if ( (v69 & 0x4100) == 0 )
        {
          v65 = v64;
          v66 = 4 * v64;
        }
        ++v64;
      }
      while ( v64 < a1 );
    }
    v74 = (double)*(&v104 + v65);
    a5[v63] = v65;
    v75 = a3[v63++] * 255.0;
  }
  return dbl_104587E0;
}
