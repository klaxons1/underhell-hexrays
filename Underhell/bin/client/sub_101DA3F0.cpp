double __fastcall sub_101DA3F0(
        char a1,
        const void *a2,
        float *a3,
        int NumOfElements,
        char a5,
        char a6,
        int a7,
        char a8,
        char a9)
{
  int v9; // ecx
  unsigned int v10; // edi
  double v11; // st4
  double v12; // st2
  double v13; // st2
  double v14; // rt0
  double v15; // rt1
  double v16; // st2
  double v17; // st4
  double v18; // rt2
  double v19; // st6
  double v20; // st5
  double v21; // st6
  double v22; // st4
  double v23; // rtt
  double v24; // st4
  double v25; // rt0
  double v26; // st4
  double v27; // st6
  double v28; // rt1
  double v29; // st6
  double v30; // st4
  double v31; // rt2
  double v32; // st6
  double v33; // st4
  double v34; // rtt
  double v35; // st6
  double v36; // st4
  double v37; // rt0
  double v38; // st6
  double v39; // st4
  double v40; // rt2
  double v41; // st4
  double v42; // st7
  double v43; // st2
  double v44; // st4
  double v45; // st3
  double v46; // st6
  double v47; // st7
  double v48; // st5
  double v49; // st4
  double v50; // st6
  double v51; // st3
  double v52; // st2
  double v53; // st1
  double v54; // st1
  double v55; // rt0
  double v56; // rt1
  double v57; // st1
  double v58; // st5
  double v59; // st7
  double v60; // rt2
  double v61; // st5
  double v62; // st6
  double v63; // st5
  double v64; // st5
  double v65; // rt1
  double v66; // st7
  double v67; // st6
  double v68; // st7
  double v69; // rtt
  double v70; // st2
  double v71; // st4
  double v72; // st7
  double v73; // st6
  double v74; // rt1
  double v75; // st6
  double v76; // st7
  double v77; // st7
  unsigned int v78; // eax
  double v79; // st6
  double v80; // st6
  float v82; // [esp+0h] [ebp-384h]
  float v83; // [esp+10h] [ebp-374h]
  unsigned int v84; // [esp+14h] [ebp-370h]
  float v85; // [esp+14h] [ebp-370h]
  float v86; // [esp+14h] [ebp-370h]
  unsigned int v87; // [esp+18h] [ebp-36Ch]
  float v88; // [esp+18h] [ebp-36Ch]
  float X; // [esp+1Ch] [ebp-368h]
  int v90; // [esp+34h] [ebp-350h] BYREF
  int v91; // [esp+38h] [ebp-34Ch]
  int v92; // [esp+3Ch] [ebp-348h] BYREF
  int v93; // [esp+40h] [ebp-344h]
  double v94; // [esp+44h] [ebp-340h]
  int v95; // [esp+4Ch] [ebp-338h] BYREF
  int v96; // [esp+50h] [ebp-334h]
  int v97; // [esp+54h] [ebp-330h]
  int v98; // [esp+58h] [ebp-32Ch] BYREF
  double v99; // [esp+5Ch] [ebp-328h]
  double v100; // [esp+64h] [ebp-320h]
  double v101; // [esp+6Ch] [ebp-318h]
  double v102; // [esp+74h] [ebp-310h]
  double v103; // [esp+7Ch] [ebp-308h]
  __m128 v104[16]; // [esp+84h] [ebp-300h] BYREF
  _BYTE v105[256]; // [esp+184h] [ebp-200h] BYREF
  float Base[64]; // [esp+284h] [ebp-100h] BYREF

  v91 = 1 << a1;
  memset(v104, 0, sizeof(v104));
  *(float *)&v92 = (float)(1 << a1);
  memset(v105, 0, sizeof(v105));
  memcpy_0(Base, a2, 4 * NumOfElements);
  qsort(Base, NumOfElements, 4u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_101DA3B0);
  v9 = 0;
  *(float *)&v90 = -2.0;
  v10 = 0;
  v104[0].m128_f32[0] = 0.0;
  if ( a6 )
  {
    v11 = 1.0;
    if ( NumOfElements >= 4 )
    {
      v12 = -2.0;
      do
      {
        if ( Base[v9] == v12 )
        {
          if ( v10 && *((float *)&v103 + v10 + 1) == v12 )
            v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
        }
        else
        {
          v90 = SLODWORD(Base[v9]);
          v12 = *(float *)&v90;
          if ( *(float *)&v90 > 0.005882352941176471 && v12 < 0.9941176470588236 )
          {
            *((float *)&v103 + ++v10 + 1) = Base[v9];
            v104[15].m128_f32[v10 + 3] = 1.0;
          }
        }
        if ( Base[v9 + 1] == v12 )
        {
          if ( v10 && *((float *)&v103 + v10 + 1) == v12 )
            v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
        }
        else
        {
          v90 = SLODWORD(Base[v9 + 1]);
          v12 = *(float *)&v90;
          if ( *(float *)&v90 > 0.005882352941176471 && v12 < 0.9941176470588236 )
          {
            *((float *)&v103 + ++v10 + 1) = Base[v9 + 1];
            v104[15].m128_f32[v10 + 3] = 1.0;
          }
        }
        if ( Base[v9 + 2] == v12 )
        {
          if ( v10 && *((float *)&v103 + v10 + 1) == v12 )
            v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
        }
        else
        {
          v90 = SLODWORD(Base[v9 + 2]);
          v12 = *(float *)&v90;
          if ( *(float *)&v90 > 0.005882352941176471 && v12 < 0.9941176470588236 )
          {
            *((float *)&v103 + ++v10 + 1) = Base[v9 + 2];
            v104[15].m128_f32[v10 + 3] = 1.0;
          }
        }
        if ( Base[v9 + 3] == v12 )
        {
          if ( v10 && *((float *)&v103 + v10 + 1) == v12 )
            v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
        }
        else
        {
          v90 = SLODWORD(Base[v9 + 3]);
          v12 = *(float *)&v90;
          if ( *(float *)&v90 > 0.005882352941176471 && v12 < 0.9941176470588236 )
          {
            *((float *)&v103 + ++v10 + 1) = Base[v9 + 3];
            v104[15].m128_f32[v10 + 3] = 1.0;
          }
        }
        v9 += 4;
      }
      while ( v9 < NumOfElements - 3 );
    }
    if ( v9 < NumOfElements )
    {
      v13 = *(float *)&v90;
      while ( 1 )
      {
        if ( Base[v9] == v13 )
        {
          if ( v10 && *((float *)&v103 + v10 + 1) == v13 )
            v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
        }
        else
        {
          v90 = SLODWORD(Base[v9]);
          v13 = *(float *)&v90;
          if ( *(float *)&v90 > 0.005882352941176471 && v13 < 0.9941176470588236 )
          {
            *((float *)&v103 + ++v10 + 1) = Base[v9];
            v15 = v13;
            v16 = v11;
            v17 = v15;
            v104[15].m128_f32[v10 + 3] = v16;
            goto LABEL_44;
          }
        }
        v18 = v13;
        v16 = v11;
        v17 = v18;
LABEL_44:
        if ( ++v9 >= NumOfElements )
        {
          v11 = v16;
          break;
        }
        v14 = v16;
        v13 = v17;
        v11 = v14;
      }
    }
    v19 = 1.0;
    v20 = v11;
    if ( v10 <= 2 )
    {
      if ( v10 == 2 )
      {
        v99 = *(float *)&v92 - 1.0;
        *(float *)&v91 = v99 * v104[0].m128_f32[0] + 0.5;
        *(float *)&v91 = floor(*(float *)&v91);
        v96 = v91;
        *(float *)&v91 = v104[0].m128_f32[1] * v99 + 0.5;
        *(float *)&v91 = floor(*(float *)&v91);
        v97 = v91;
        *(float *)&v93 = 0.0;
      }
      else
      {
        if ( v10 == 1 )
        {
          *(float *)&v91 = (*(float *)&v92 - 1.0) * v104[0].m128_f32[0] + 0.5;
          *(float *)&v91 = floor(*(float *)&v91);
          v96 = v91;
          *(float *)&v97 = *(float *)&v91 + 1.0;
        }
        else
        {
          *(float *)&v96 = 128.0;
          *(float *)&v97 = 129.0;
        }
        *(float *)&v93 = 0.0;
      }
      goto LABEL_123;
    }
  }
  else
  {
    v21 = 1.0;
    v22 = *(float *)&v90;
    if ( NumOfElements < 4 )
    {
      v26 = 1.0;
      v27 = *(float *)&v90;
    }
    else
    {
      while ( 1 )
      {
        if ( Base[v9] == v22 )
        {
          v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
          v28 = v22;
          v26 = v21;
          v27 = v28;
        }
        else
        {
          ++v10;
          v90 = SLODWORD(Base[v9]);
          v24 = *(float *)&v90;
          *((float *)&v103 + v10 + 1) = *(float *)&v90;
          v25 = v24;
          v26 = v21;
          v27 = v25;
          v104[15].m128_f32[v10 + 3] = v26;
        }
        if ( Base[v9 + 1] == v27 )
        {
          v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
        }
        else
        {
          v29 = v26;
          ++v10;
          v90 = SLODWORD(Base[v9 + 1]);
          v30 = *(float *)&v90;
          *((float *)&v103 + v10 + 1) = *(float *)&v90;
          v31 = v30;
          v26 = v29;
          v27 = v31;
          v104[15].m128_f32[v10 + 3] = v26;
        }
        if ( Base[v9 + 2] == v27 )
        {
          v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
        }
        else
        {
          v32 = v26;
          ++v10;
          v90 = SLODWORD(Base[v9 + 2]);
          v33 = *(float *)&v90;
          *((float *)&v103 + v10 + 1) = *(float *)&v90;
          v34 = v33;
          v26 = v32;
          v27 = v34;
          v104[15].m128_f32[v10 + 3] = v26;
        }
        if ( Base[v9 + 3] == v27 )
        {
          v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
        }
        else
        {
          v35 = v26;
          ++v10;
          v90 = SLODWORD(Base[v9 + 3]);
          v36 = *(float *)&v90;
          *((float *)&v103 + v10 + 1) = *(float *)&v90;
          v37 = v36;
          v26 = v35;
          v27 = v37;
          v104[15].m128_f32[v10 + 3] = v26;
        }
        v9 += 4;
        if ( v9 >= NumOfElements - 3 )
          break;
        v23 = v26;
        v22 = v27;
        v21 = v23;
      }
    }
    for ( ; v9 < NumOfElements; ++v9 )
    {
      if ( Base[v9] == v27 )
      {
        v104[15].m128_f32[v10 + 3] = v104[15].m128_f32[v10 + 3] + 1.0;
      }
      else
      {
        v38 = v26;
        ++v10;
        v90 = SLODWORD(Base[v9]);
        v39 = *(float *)&v90;
        *((float *)&v103 + v10 + 1) = *(float *)&v90;
        v40 = v39;
        v26 = v38;
        v27 = v40;
        v104[15].m128_f32[v10 + 3] = v26;
      }
    }
    if ( v10 <= 2 )
    {
      v99 = *(float *)&v92 - 1.0;
      *(float *)&v91 = v99 * v104[0].m128_f32[0] + 0.5;
      *(float *)&v91 = floor(*(float *)&v91);
      v96 = v91;
      if ( v10 == 1 )
      {
        *(float *)&v97 = *(float *)&v96 + 1.0;
      }
      else
      {
        *(float *)&v91 = v104[0].m128_f32[1] * v99 + 0.5;
        *(float *)&v91 = floor(*(float *)&v91);
        v97 = v91;
      }
      *(float *)&v93 = 0.0;
      goto LABEL_123;
    }
    v20 = v26;
    v19 = 1.0;
  }
  v90 = *((int *)&v103 + v10 + 1);
  v41 = v104[0].m128_f32[0];
  v98 = v104[0].m128_i32[0];
  v95 = v90;
  v42 = *(float *)&v90;
  *(float *)&v96 = 0.0;
  *(float *)&v91 = 0.0;
  *(float *)&v99 = (*(float *)&v90 + v104[0].m128_f32[0]) * 0.5;
  *(float *)&v90 = 128000.0;
  if ( a8 && !a7 && 48.0 / *(float *)&v92 >= v42 - v41 )
  {
    v76 = v20;
    v75 = *(float *)&v90;
  }
  else
  {
    v43 = v41 - 0.1000000014901161;
    if ( v41 - 0.1000000014901161 < 0.0 )
      v43 = 0.0;
    *(float *)&v93 = v43;
    if ( v42 + 0.1000000014901161 <= v19 )
      v19 = v42 + 0.1000000014901161;
    *(float *)&v98 = v19;
    v44 = *(float *)&v99;
    v45 = v104[0].m128_f32[0] + 0.1000000014901161;
    if ( v45 > *(float *)&v99 )
      v45 = *(float *)&v99;
    *(float *)&v99 = v45;
    v46 = v42 - 0.1000000014901161;
    if ( v44 > v42 - 0.1000000014901161 )
      v46 = v44;
    *(float *)&v94 = v46;
    v95 = v93;
    v100 = *(float *)&v99;
    if ( *(float *)&v99 <= (double)*(float *)&v93 )
    {
      v73 = v20;
      v72 = *(float *)&v90;
    }
    else
    {
      v47 = *(float *)&v99;
      v48 = *(float *)&v94;
      v103 = *(float *)&v94;
      v101 = *(float *)&v98;
      v49 = *(float *)&v93;
      v50 = *(float *)&v98;
      v102 = *(float *)&v93;
      v51 = 0.01799999922513962;
      v52 = *(float *)&v90;
      v53 = *(float *)&v95;
      while ( 1 )
      {
        v93 = v98;
        v56 = v53;
        v57 = v48;
        v58 = v56;
        if ( v57 > v50 )
        {
          v48 = v57;
        }
        else
        {
          v59 = v52;
          v60 = v58;
          v61 = v50;
          v62 = v60;
          v94 = v61;
          v63 = *(float *)&v93;
          while ( 1 )
          {
            if ( a9 )
            {
              *(float *)&v87 = v63;
              *(float *)&v84 = v62;
              v83 = v59;
              v66 = sub_101D9FA0(v104, (int)v105, v83, v84, v87, v10, a5);
            }
            else
            {
              X = v63;
              v88 = v62;
              v85 = v59;
              v66 = sub_101DA090(a5, (int)v105, v104[0].m128_f32, v85, v88, X, v10);
            }
            *(float *)&v99 = v66;
            v67 = *(float *)&v90;
            if ( *(float *)&v90 <= (double)*(float *)&v99 )
            {
              v68 = *(float *)&v95;
            }
            else
            {
              v90 = SLODWORD(v99);
              v68 = *(float *)&v95;
              v96 = v95;
              v91 = v93;
              v67 = *(float *)&v99;
            }
            *(float *)&v93 = v94 - 0.01799999922513962;
            v94 = *(float *)&v93;
            if ( v103 > *(float *)&v93 )
              break;
            v64 = v68;
            v59 = v67;
            v65 = v64;
            v63 = *(float *)&v93;
            v62 = v65;
          }
          v47 = v100;
          v52 = v67;
          v50 = v101;
          v48 = v103;
          v51 = 0.01799999922513962;
          v49 = v102;
        }
        v69 = v52;
        v70 = v49;
        v71 = v69;
        *(float *)&v95 = v70 + v51;
        v102 = *(float *)&v95;
        if ( *(float *)&v95 >= v47 )
          break;
        v54 = v71;
        v49 = *(float *)&v95;
        v55 = v54;
        v53 = *(float *)&v95;
        v52 = v55;
      }
      v72 = v71;
      v73 = 1.0;
    }
    v98 = v96;
    v95 = v91;
    v74 = v73;
    v75 = v72;
    v76 = v74;
  }
  v100 = *(float *)&v92;
  v86 = v76;
  *(float *)&v94 = 0.6000000238418579 / *(float *)&v92;
  v82 = v75;
  *(float *)&v93 = sub_101DA1F0(
                     (int)v105,
                     v104,
                     v82,
                     (float *)&v98,
                     (float *)&v95,
                     *(float *)&v94,
                     0.0,
                     v86,
                     v10,
                     a5,
                     a9);
  v99 = v100 - 1.0;
  *(float *)&v90 = *(float *)&v95 * v99;
  *(float *)&v92 = v99 * *(float *)&v98;
  if ( !a8 || a7 )
  {
    v100 = *(float *)&v90;
    if ( *(float *)&v90 - *(float *)&v92 > 0.0 )
    {
      *(float *)&v94 = *(float *)&v92 + 0.5;
      *(float *)&v91 = floor(*(float *)&v94);
      v101 = *(float *)&v91;
      *(float *)&v94 = v100 + 0.5;
      *(float *)&v94 = floor(*(float *)&v94);
      if ( v101 == *(float *)&v94 )
      {
        v77 = v99;
        v78 = 0;
        if ( (int)v10 >= 4 )
        {
          do
          {
            v79 = v104[0].m128_f32[v78];
            v78 += 4;
            *((float *)&v102 + v78) = v79 * v77;
            *((float *)&v102 + v78 + 1) = *((float *)&v102 + v78 + 1) * v77;
            *((float *)&v103 + v78) = *((float *)&v103 + v78) * v77;
            *((float *)&v103 + v78 + 1) = *((float *)&v103 + v78 + 1) * v77;
          }
          while ( v78 < v10 - 3 );
        }
        for ( ; v78 < v10; *((float *)&v103 + v78 + 1) = v80 * v77 )
          v80 = v104[0].m128_f32[v78++];
        v92 = v91;
        v90 = v91;
        *(float *)&v93 = sub_101DA1F0(
                           (int)v105,
                           v104,
                           128000.0,
                           (float *)&v92,
                           (float *)&v90,
                           1.0,
                           0.0,
                           255.0,
                           v10,
                           a5,
                           a9);
      }
    }
  }
  *(float *)&v94 = *(float *)&v90 + 0.5;
  *(float *)&v94 = floor(*(float *)&v94);
  v97 = SLODWORD(v94);
  *(float *)&v94 = *(float *)&v92 + 0.5;
  *(float *)&v94 = floor(*(float *)&v94);
  v96 = SLODWORD(v94);
LABEL_123:
  *a3 = *(float *)&v96;
  a3[1] = *(float *)&v97;
  return *(float *)&v93;
}
