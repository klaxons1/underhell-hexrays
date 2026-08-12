double __usercall sub_101E0EC0@<st0>(
        __m128 a1@<xmm2>,
        int a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5,
        _BYTE *a6,
        void *a7,
        char a8,
        char a9,
        char a10,
        unsigned __int8 a11,
        float *a12,
        char a13,
        float a14)
{
  double v14; // st7
  size_t v15; // eax
  size_t v16; // esi
  size_t v17; // edi
  float *v18; // ecx
  float *v19; // ebx
  float *v20; // edi
  float *v21; // esi
  float *p_Base; // edx
  float *v23; // edx
  float *v24; // ecx
  double result; // st7
  double v26; // st7
  int v27; // ecx
  double v28; // st6
  _DWORD *v29; // ebx
  char *v30; // edi
  double v31; // rt0
  unsigned int v32; // eax
  _DWORD *v33; // ecx
  int *v34; // edx
  int v35; // esi
  unsigned int v36; // eax
  unsigned __int8 *v37; // ecx
  unsigned __int8 *v38; // edx
  unsigned int v39; // eax
  unsigned __int8 *v40; // ecx
  unsigned __int8 *v41; // edx
  unsigned __int8 *v42; // ecx
  unsigned __int8 *v43; // edx
  int v44; // eax
  double v45; // rt1
  double v46; // st6
  double v47; // st7
  int v48; // ecx
  int v49; // edx
  int v50; // eax
  int v51; // ecx
  int v52; // edx
  int v53; // ecx
  int v54; // edx
  int v55; // ecx
  int v56; // edx
  double v57; // rt2
  int v58; // ecx
  float *v59; // eax
  int v60; // edx
  double v61; // st6
  _BYTE *v62; // esi
  float *v63; // edx
  int v64; // edi
  int i; // ecx
  double v66; // st7
  int v67; // ebx
  float *v68; // ecx
  int v69; // eax
  double v70; // st5
  size_t v71; // [esp+1Ch] [ebp-934h]
  _DWORD *v72; // [esp+1Ch] [ebp-934h]
  unsigned int v73; // [esp+20h] [ebp-930h]
  size_t v74; // [esp+20h] [ebp-930h]
  int v75; // [esp+20h] [ebp-930h]
  int v76; // [esp+24h] [ebp-92Ch]
  size_t v77; // [esp+24h] [ebp-92Ch]
  float *v78; // [esp+2Ch] [ebp-924h]
  int v79; // [esp+30h] [ebp-920h] BYREF
  int v80; // [esp+34h] [ebp-91Ch]
  int v81; // [esp+38h] [ebp-918h]
  int v82; // [esp+3Ch] [ebp-914h]
  float v83[64]; // [esp+50h] [ebp-900h] BYREF
  int Base; // [esp+150h] [ebp-800h] BYREF
  int v85; // [esp+154h] [ebp-7FCh] BYREF
  int v86; // [esp+158h] [ebp-7F8h] BYREF
  int v87; // [esp+15Ch] [ebp-7F4h] BYREF
  char v88; // [esp+160h] [ebp-7F0h] BYREF
  _DWORD v89[256]; // [esp+550h] [ebp-400h] BYREF

  memset(v83, 0, sizeof(v83));
  memset(v89, 0, sizeof(v89));
  v14 = a14;
  v15 = a3;
  v16 = 0;
  v17 = 0;
  v71 = 0;
  if ( a3 >= 4u )
  {
    v73 = (((unsigned int)a3 - 4) >> 2) + 1;
    v18 = (float *)(a2 + 8);
    v19 = (float *)&v87;
    v20 = (float *)&v86;
    v21 = (float *)&v85;
    p_Base = (float *)&Base;
    v76 = 4 * v73;
    do
    {
      if ( !a13 || v18[1] >= v14 )
      {
        ++v71;
        *p_Base = *v18;
        p_Base += 4;
        v21 += 4;
        *(v21 - 4) = *(v18 - 1);
        v20 += 4;
        v19 += 4;
        *(v20 - 4) = *(v18 - 2);
        *(v19 - 4) = 0.0;
      }
      if ( !a13 || v18[5] >= v14 )
      {
        ++v71;
        *p_Base = v18[4];
        p_Base += 4;
        v21 += 4;
        *(v21 - 4) = v18[3];
        v20 += 4;
        v19 += 4;
        *(v20 - 4) = v18[2];
        *(v19 - 4) = 0.0;
      }
      if ( !a13 || v18[9] >= v14 )
      {
        ++v71;
        *p_Base = v18[8];
        p_Base += 4;
        v21 += 4;
        *(v21 - 4) = v18[7];
        v20 += 4;
        v19 += 4;
        *(v20 - 4) = v18[6];
        *(v19 - 4) = 0.0;
      }
      if ( !a13 || v18[13] >= v14 )
      {
        ++v71;
        *p_Base = v18[12];
        p_Base += 4;
        v21 += 4;
        *(v21 - 4) = v18[11];
        v20 += 4;
        v19 += 4;
        *(v20 - 4) = v18[10];
        *(v19 - 4) = 0.0;
      }
      v18 += 16;
      --v73;
    }
    while ( v73 );
    v16 = v71;
    v17 = v76;
    v15 = a3;
  }
  if ( v17 < v15 )
  {
    v23 = (float *)(16 * v17 + a2 + 8);
    v24 = (float *)(&v85 + 4 * v16);
    v74 = v15 - v17;
    do
    {
      if ( !a13 || (v15 = a3, v23[1] >= v14) )
      {
        ++v16;
        *(v24 - 1) = *v23;
        v24 += 4;
        *(v24 - 4) = *(v23 - 1);
        *(v24 - 3) = *(v23 - 2);
        *(v24 - 2) = 0.0;
      }
      v23 += 4;
      --v74;
    }
    while ( v74 );
  }
  if ( !v16 )
  {
    a6[5] = -1;
    a6[3] = -1;
    a6[1] = -1;
    a6[4] = 0;
    a6[2] = 0;
    *a6 = 0;
    memset(a7, 255, v15);
    return 0.0;
  }
  if ( v16 != v15 && a13 && (a8 & 1) == 0 )
    return 3.4028235e38;
  qsort(&Base, v16, 0x10u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_101D94C0);
  v26 = 1.0;
  v83[0] = 1.0;
  v27 = 0;
  v75 = 0;
  v89[0] = Base;
  v89[1] = v85;
  v89[2] = v86;
  v89[3] = v87;
  v79 = Base;
  v80 = v85;
  v81 = v86;
  v82 = v87;
  if ( v16 > 1 )
  {
    v28 = 1.0;
    v29 = v89;
    v78 = v83;
    v30 = &v88;
    v72 = v89;
    v77 = v16 - 1;
    while ( 2 )
    {
      v32 = 16;
      v33 = v30;
      v34 = &v79;
      do
      {
        if ( *v34 != *v33 )
          goto LABEL_35;
        v32 -= 4;
        ++v33;
        ++v34;
      }
      while ( v32 >= 4 );
      if ( v32 )
      {
LABEL_35:
        v35 = *(unsigned __int8 *)v34 - *(unsigned __int8 *)v33;
        if ( v35 )
          goto LABEL_42;
        v36 = v32 - 1;
        v37 = (unsigned __int8 *)v33 + 1;
        v38 = (unsigned __int8 *)v34 + 1;
        if ( v36 )
        {
          v35 = *v38 - *v37;
          if ( v35
            || (v39 = v36 - 1, v40 = v37 + 1, v41 = v38 + 1, v39)
            && ((v35 = *v41 - *v40) != 0 || (v42 = v40 + 1, v43 = v41 + 1, v39 != 1) && (v35 = *v43 - *v42) != 0) )
          {
LABEL_42:
            v29 = v72;
            v44 = 1;
            if ( v35 <= 0 )
              v44 = -1;
LABEL_46:
            if ( v44 )
            {
              v45 = v28;
              v46 = v26;
              v47 = v45;
              v48 = *(_DWORD *)v30;
              v49 = *((_DWORD *)v30 + 1);
              v50 = v75 + 1;
              v29 += 4;
              v83[v50] = v46;
              *v29 = v48;
              v51 = *((_DWORD *)v30 + 2);
              v29[1] = v49;
              v52 = *((_DWORD *)v30 + 3);
              v29[2] = v51;
              v53 = *(_DWORD *)v30;
              v29[3] = v52;
              v54 = *((_DWORD *)v30 + 1);
              ++v75;
              v79 = v53;
              v55 = *((_DWORD *)v30 + 2);
              v80 = v54;
              v56 = *((_DWORD *)v30 + 3);
              v72 = v29;
              v81 = v55;
              v82 = v56;
              v78 = &v83[v50];
            }
            else
            {
              *v78 = *v78 + v28;
              v57 = v28;
              v46 = v26;
              v47 = v57;
            }
            v30 += 16;
            if ( --v77 )
            {
              v31 = v46;
              v28 = v47;
              v26 = v31;
              continue;
            }
            v27 = v75;
            goto LABEL_51;
          }
        }
        v29 = v72;
      }
      break;
    }
    v44 = 0;
    goto LABEL_46;
  }
LABEL_51:
  v58 = v27 + 1;
  if ( v58 )
  {
    v59 = (float *)&v89[1];
    v60 = v58;
    do
    {
      v61 = *(v59 - 1);
      v59 += 4;
      --v60;
      *(v59 - 5) = v61 * 255.0;
      *(v59 - 4) = *(v59 - 4) * 255.0;
      *(v59 - 3) = *(v59 - 3) * 255.0;
      *(v59 - 2) = *(v59 - 2) * 255.0;
    }
    while ( v60 );
  }
  if ( a9 )
    sub_101DFD00(a1, (float *)&v79, (int)v89, (int)v83, v58, a8, a10, a11, a12, a4, a5, SBYTE4(a5));
  else
    sub_101E05F0((float *)&v79, (int)v89, (int)v83, v58, a8, a10, a11, a12, a4, a5);
  v62 = a6;
  v63 = (float *)&v79;
  v64 = 3;
  do
  {
    for ( i = 0; i < 2; v62[i - 1] = (int)v66 )
    {
      v66 = *v63;
      ++i;
      ++v63;
    }
    v62 += 2;
    --v64;
  }
  while ( v64 );
  v67 = a3;
  if ( a3 )
  {
    v68 = (float *)&Base;
    v69 = a2 + 4;
    do
    {
      v68 += 4;
      v70 = *(float *)(v69 + 4) * 255.0;
      v69 += 16;
      --v67;
      *(v68 - 4) = v70;
      *(float *)((char *)&Base + v69 - a2 - 16) = *(float *)(v69 - 16) * 255.0;
      *(float *)((char *)&v85 + v69 - a2 - 16) = *(float *)(v69 - 20) * 255.0;
      *(float *)((char *)&v86 + v69 - a2 - 16) = 0.0;
    }
    while ( v67 );
  }
  result = a14;
  sub_101DB700((int)&Base, a3, a6, (int)a7, a8, a12, a13, a14, a4, a5, BYTE4(a5));
  return result;
}
