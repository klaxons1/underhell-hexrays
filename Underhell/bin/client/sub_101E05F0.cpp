void __cdecl sub_101E05F0(
        float *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        float *a8,
        char a9,
        __int64 a10)
{
  float *v10; // ecx
  int v11; // eax
  int v12; // edi
  double v13; // st6
  int v14; // ecx
  double v15; // st7
  float *v16; // edx
  double v17; // st6
  double v18; // st5
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // st5
  double v23; // st0
  double v24; // st7
  int v25; // ecx
  double v26; // st6
  double v27; // st5
  double v28; // st5
  double v29; // st4
  double v30; // st3
  int v31; // eax
  double v32; // st0
  int v33; // edi
  float *v34; // eax
  double v35; // st7
  double v36; // st7
  int v37; // esi
  double v38; // st7
  int v39; // edi
  int v40; // edi
  double v41; // st6
  double v42; // st7
  double v43; // st5
  double v44; // st4
  int v45; // ecx
  float *v46; // eax
  double v47; // st6
  int v48; // esi
  double v49; // st7
  int v50; // eax
  double v51; // st7
  double v52; // st6
  double v53; // st5
  double v54; // st4
  double v55; // st3
  double v56; // st1
  float v57; // [esp+0h] [ebp-DE0h]
  float v58; // [esp+1Ch] [ebp-DC4h]
  float v59; // [esp+1Ch] [ebp-DC4h]
  float v60; // [esp+1Ch] [ebp-DC4h]
  float v61; // [esp+1Ch] [ebp-DC4h]
  float v62; // [esp+1Ch] [ebp-DC4h]
  float v63; // [esp+1Ch] [ebp-DC4h]
  float v64; // [esp+1Ch] [ebp-DC4h]
  float v65; // [esp+1Ch] [ebp-DC4h]
  float v66; // [esp+1Ch] [ebp-DC4h]
  float v67; // [esp+20h] [ebp-DC0h]
  float v68; // [esp+20h] [ebp-DC0h]
  float v69; // [esp+20h] [ebp-DC0h]
  float v70; // [esp+20h] [ebp-DC0h]
  float v71; // [esp+20h] [ebp-DC0h]
  char v72; // [esp+27h] [ebp-DB9h] BYREF
  double v73; // [esp+28h] [ebp-DB8h]
  float v74; // [esp+34h] [ebp-DACh]
  float v75; // [esp+38h] [ebp-DA8h]
  float v76; // [esp+3Ch] [ebp-DA4h]
  int v77; // [esp+40h] [ebp-DA0h]
  float v78; // [esp+44h] [ebp-D9Ch]
  float v79; // [esp+48h] [ebp-D98h]
  double v80; // [esp+50h] [ebp-D90h]
  float v81; // [esp+58h] [ebp-D88h]
  float v82; // [esp+5Ch] [ebp-D84h]
  float v83; // [esp+60h] [ebp-D80h]
  float v84; // [esp+64h] [ebp-D7Ch]
  float v85; // [esp+68h] [ebp-D78h]
  int v86; // [esp+6Ch] [ebp-D74h]
  double v87; // [esp+70h] [ebp-D70h]
  float v88; // [esp+7Ch] [ebp-D64h]
  int v89; // [esp+80h] [ebp-D60h] BYREF
  float v90; // [esp+84h] [ebp-D5Ch]
  float v91; // [esp+88h] [ebp-D58h]
  float v92[5]; // [esp+8Ch] [ebp-D54h]
  double v93; // [esp+A0h] [ebp-D40h]
  float v94; // [esp+A8h] [ebp-D38h]
  float v95; // [esp+ACh] [ebp-D34h]
  double v96; // [esp+B0h] [ebp-D30h]
  int v97; // [esp+B8h] [ebp-D28h] BYREF
  float v98; // [esp+BCh] [ebp-D24h]
  float v99; // [esp+C0h] [ebp-D20h]
  float v100[2]; // [esp+D0h] [ebp-D10h]
  float v101[2]; // [esp+D8h] [ebp-D08h]
  int v102[64]; // [esp+E0h] [ebp-D00h] BYREF
  float v103[64]; // [esp+1E0h] [ebp-C00h] BYREF
  int v104[64]; // [esp+2E0h] [ebp-B00h] BYREF
  float v105[64]; // [esp+3E0h] [ebp-A00h] BYREF
  float v106[64]; // [esp+4E0h] [ebp-900h] BYREF
  float v107; // [esp+5E0h] [ebp-800h] BYREF
  char v108; // [esp+5E4h] [ebp-7FCh] BYREF
  float v109; // [esp+9E0h] [ebp-400h] BYREF
  char v110; // [esp+9E4h] [ebp-3FCh] BYREF

  if ( a4 > 0 )
  {
    v10 = (float *)&v108;
    v11 = a2 + 8;
    v12 = a4;
    do
    {
      v10 += 4;
      v13 = *(float *)(v11 - 8) / 255.0;
      v11 += 16;
      --v12;
      *(v10 - 5) = v13;
      *(v10 - 4) = *(float *)(v11 - 20) / 255.0;
      *(float *)((char *)&v107 + v11 - a2 - 16) = *(float *)(v11 - 16) / 255.0;
    }
    while ( v12 );
  }
  if ( a4 <= 2 || (v72 = 1, sub_101DBAA0((float *)&v89, &v109, (float *)&v97, (bool *)&v72, &v107, a3, 3, a4), v72) )
  {
    v89 = *(int *)a2;
    v90 = *(float *)(a2 + 16 * a4 - 16);
    v91 = *(float *)(a2 + 4);
    v92[0] = *(float *)(a2 + 16 * a4 - 12);
    v92[1] = *(float *)(a2 + 8);
    v92[2] = *(float *)(a2 + 16 * a4 - 8);
  }
  else
  {
    v88 = 10000000.0;
    v86 = a5;
    v77 = v97;
    v78 = v98;
    v79 = v99;
    while ( 1 )
    {
      v75 = 1000.0;
      memset(v105, 0, sizeof(v105));
      v76 = -1000.0;
      memset(v102, 0, sizeof(v102));
      memset(v106, 0, sizeof(v106));
      memset(v104, 0, sizeof(v104));
      v14 = 0;
      v15 = v78;
      v16 = &v109;
      v17 = *(float *)&v77;
      v80 = *(float *)&v77;
      v18 = v79;
      v73 = v79;
      while ( 1 )
      {
        v19 = v16[1];
        v20 = *v16;
        v21 = v17 * v20 + v15 * v19 + v18 * v16[2];
        v22 = v16[2];
        v67 = v21;
        *(float *)&v102[v14] = v67;
        v105[v14] = v67;
        v23 = v22;
        v18 = v73;
        v106[v14] = (v23 - v67 * v73) * (v23 - v67 * v73)
                  + (v19 - v67 * v15) * (v19 - v67 * v15)
                  + (v20 - v17 * v67) * (v20 - v17 * v67);
        if ( v75 >= (double)v67 )
          v75 = v21;
        if ( v76 <= (double)v67 )
          v76 = v21;
        ++v14;
        v16 += 4;
        if ( v14 >= a4 )
          break;
        v17 = v80;
      }
      v24 = v76;
      v25 = 0;
      v26 = v75;
      v27 = (v76 - v75) * 0.125;
      v94 = v75 - v27;
      v95 = v27 + v76;
      v28 = v94;
      v96 = v94;
      v93 = v95 - v94;
      v68 = v93 * v93;
      *(float *)&v73 = 1.0 / v93;
      v29 = v68;
      v30 = *(float *)&v73;
      if ( a4 >= 4 )
      {
        v31 = a3 + 8;
        LODWORD(v73) = (char *)&v104[1] - a3;
        do
        {
          v32 = *(float *)&v102[v25] - v28;
          v25 += 4;
          v31 += 16;
          v100[v25] = v32 * v30;
          v103[v25 + 60] = *(float *)(v31 - 24) * v29;
          v100[v25 + 1] = (v100[v25 + 1] - v28) * v30;
          v103[v25 + 61] = *(float *)(v31 - 20) * v29;
          *(float *)((char *)&v102[-4] + v31 - a3) = (*(float *)((char *)&v102[-4] + v31 - a3) - v28) * v30;
          *(float *)((char *)&v104[-4] + v31 - a3) = *(float *)(v31 - 16) * v29;
          v33 = LODWORD(v73);
          *(float *)((char *)&v102[-3] + v31 - a3) = (*(float *)((char *)&v102[-3] + v31 - a3) - v28) * v30;
          *(float *)(v33 + v31 - 16) = *(float *)(v31 - 12) * v29;
        }
        while ( v25 < a4 - 3 );
      }
      for ( ; v25 < a4; v103[v25 + 63] = *(float *)((char *)v34 + a3 - (_DWORD)v102) * v29 )
      {
        v34 = (float *)&v102[v25++];
        *v34 = (*v34 - v28) * v30;
      }
      v75 = (v26 - v28) * v30;
      v76 = (v24 - v28) * v30;
      v74 = 128000.0;
      v35 = v75 - 0.05000000074505806;
      if ( v35 <= 0.0 )
        v35 = 0.0;
      v69 = v35;
      v36 = v76 + 0.05000000074505806;
      if ( v36 >= 1.0 )
        v36 = 1.0;
      *(float *)&v80 = v36;
      v37 = 8;
      v38 = v74;
      do
      {
        v39 = 8;
        *(float *)&v73 = *(float *)&v80;
        do
        {
          v57 = v38;
          v58 = sub_101DB930(v86, (int)v106, (float *)v102, (int)v104, v57, v69, *(float *)&v73, a4);
          if ( v74 <= (double)v58 )
          {
            v38 = v74;
          }
          else
          {
            v74 = v58;
            v84 = v69;
            v85 = *(float *)&v73;
            v38 = v58;
          }
          --v39;
          *(float *)&v73 = *(float *)&v73 - 0.02500000037252903;
        }
        while ( v39 );
        --v37;
        v69 = v69 + 0.02500000037252903;
      }
      while ( v37 );
      v84 = v84 * v93 + v96;
      v85 = v96 + v93 * v85;
      if ( v88 <= v38 + 0.001 )
        break;
      v88 = v38;
      v97 = v77;
      v40 = 0;
      v98 = v78;
      v99 = v79;
      v101[0] = v84;
      v101[1] = v85;
      v96 = v85;
      v41 = v84;
      v42 = v85;
      v93 = v84;
      v70 = (float)(v86 - 1);
      v59 = (v85 - v84) / v70;
      *(float *)&v73 = v59 * 0.5;
      v74 = 1.0 / v59;
      *(float *)&v80 = 1.0 / v70;
      v60 = v70 * 0.5;
      v87 = v60;
      v80 = *(float *)&v80;
      v43 = 0.0;
      do
      {
        v61 = v105[v40] - v41;
        if ( v61 > v43 )
        {
          if ( v105[v40] - v42 < 0.0 )
          {
            v62 = (v61 + *(float *)&v73) * v74;
            v63 = floor(v62);
            v103[v40] = v63;
            v41 = v93;
            v43 = 0.0;
            v42 = v96;
          }
          else
          {
            v103[v40] = v70;
          }
        }
        else
        {
          v103[v40] = v43;
        }
        v44 = v103[v40++];
        *(float *)&v102[v40 + 63] = (v44 - v87) * v80;
      }
      while ( v40 < a4 );
      v71 = v43;
      v45 = 0;
      v83 = v71;
      v82 = v71;
      v81 = v71;
      v46 = (float *)&v110;
      do
      {
        v47 = v103[v45];
        v48 = a3 - (_DWORD)v103 + 4 * v45++;
        v46 += 4;
        v64 = *(float *)((char *)v103 + v48) * v47;
        v71 = v47 * v64 + v71;
        v81 = *(v46 - 5) * v64 + v81;
        v82 = *(v46 - 4) * v64 + v82;
        v83 = v64 * *(v46 - 3) + v83;
      }
      while ( v45 < a4 );
      v79 = v43;
      v78 = v43;
      *(float *)&v77 = v43;
      v49 = v71;
      if ( v71 > v43 )
      {
        *(float *)&v77 = v81 / v49;
        v78 = v82 / v49;
        v79 = v83 / v49;
        v87 = v78;
        v80 = *(float *)&v77;
        v73 = v79;
        v65 = v78 * v78 + *(float *)&v77 * *(float *)&v77 + v79 * v79;
        v66 = sqrt(v65);
        *(float *)&v77 = *(float *)&v77 / v66;
        v78 = v78 / v66;
        v79 = v79 / v66;
      }
    }
    v50 = 0;
    v51 = *(float *)&v97;
    v52 = *(float *)&v89;
    v53 = v98;
    v54 = v90;
    v55 = v99;
    v87 = v91;
    do
    {
      v56 = v101[v50++];
      *(float *)((char *)&v88 + v50 * 4) = (v56 * v51 + v52) * 255.0;
      *(float *)((char *)&v90 + v50 * 4) = (v56 * v53 + v54) * 255.0;
      v92[v50] = (v56 * v55 + v87) * 255.0;
    }
    while ( v50 < 2 );
  }
  sub_101DB0C0(a9, (float *)&v97, (int)&v89, 0.0, 255.0, a10, SBYTE4(a10));
  if ( a6 )
    sub_101DD400((int)a1, (int)&v97, (_DWORD *)a2, a3, a4, a5, a8, a9, a10, SBYTE4(a10), a7);
  else
    sub_101DC190(a1, (int)&v97, (_DWORD *)a2, a3, a4, a5, a8, a9, a10, SBYTE4(a10), a7);
}
