void __userpurge sub_10062390(_BYTE *a1@<ecx>, int a2@<esi>, int a3, float *a4, float *a5, int a6)
{
  int v6; // edi
  float v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  double v11; // st7
  float v12; // edx
  int v13; // ecx
  float v14; // edx
  double v15; // st6
  float *v16; // ebx
  double v17; // st5
  double v18; // st4
  float *v19; // eax
  float *v20; // edi
  float *v21; // esi
  int v22; // edx
  double v23; // st3
  double v24; // st3
  double v25; // st2
  double v26; // st1
  double v27; // st3
  int v28; // eax
  double v29; // st2
  double v30; // st3
  float *v31; // eax
  char *v32; // ecx
  int v33; // edx
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st7
  double v38; // st7
  double v39; // st6
  double v40; // st5
  double v41; // st4
  double v42; // st1
  double v43; // st7
  double v44; // rt0
  int v45; // edx
  double v46; // st7
  double v47; // st7
  double v48; // st7
  double v49; // st6
  double v50; // st5
  double v51; // st4
  float *v52; // edx
  float *v53; // ecx
  int v54; // esi
  double v55; // st3
  double v56; // st1
  double v57; // rt1
  double v58; // st2
  double v59; // st3
  int v60; // edx
  double v61; // st6
  double v62; // st5
  int v63; // ecx
  double v64; // st4
  int v65; // eax
  double v66; // rt0
  double v67; // st4
  double v68; // rt1
  double v69; // rtt
  double v70; // st6
  double v71; // st5
  double v72; // st4
  float v74[12]; // [esp+8h] [ebp-A4h] BYREF
  float v75; // [esp+38h] [ebp-74h]
  float v76; // [esp+3Ch] [ebp-70h]
  float v77; // [esp+44h] [ebp-68h]
  float v78; // [esp+48h] [ebp-64h]
  float v79; // [esp+4Ch] [ebp-60h]
  char *v80; // [esp+50h] [ebp-5Ch]
  float v81; // [esp+54h] [ebp-58h]
  float v82; // [esp+58h] [ebp-54h]
  float v83; // [esp+5Ch] [ebp-50h]
  int v84; // [esp+60h] [ebp-4Ch]
  float *v85; // [esp+64h] [ebp-48h]
  char *v86; // [esp+68h] [ebp-44h]
  int v87; // [esp+6Ch] [ebp-40h]
  float *v88; // [esp+70h] [ebp-3Ch]
  float v89; // [esp+74h] [ebp-38h]
  float v90; // [esp+78h] [ebp-34h]
  float v91; // [esp+7Ch] [ebp-30h]
  float v92; // [esp+80h] [ebp-2Ch]
  int v93; // [esp+84h] [ebp-28h]
  float v94; // [esp+88h] [ebp-24h]
  float v95; // [esp+8Ch] [ebp-20h]
  int v96; // [esp+90h] [ebp-1Ch] BYREF
  int v97; // [esp+94h] [ebp-18h]
  int v98; // [esp+98h] [ebp-14h]
  int v99; // [esp+9Ch] [ebp-10h]
  float *v100; // [esp+A0h] [ebp-Ch]
  int v101; // [esp+A4h] [ebp-8h]
  float *v102; // [esp+A8h] [ebp-4h]
  float v103; // [esp+B4h] [ebp+8h]
  float v104; // [esp+C0h] [ebp+14h]

  v6 = a3;
  v7 = *(float *)&a1;
  v95 = *(float *)&a1;
  if ( !a3 )
    return;
  v8 = a6;
  if ( *(_DWORD *)(dword_1040E7BC + 48) == 1 )
    v102 = &flt_1040EA88;
  else
    v102 = *(float **)(a6 + 4);
  v80 = sub_10061200(a1, &v96);
  v9 = v96;
  v98 = v96 + 1;
  v10 = *(_DWORD *)(a6 + 8);
  v11 = 1.0 / (double)(v96 + 1);
  v85 = *(float **)a6;
  v89 = *(float *)(a6 + 12);
  v12 = *(float *)(a6 + 16);
  v97 = v10;
  v13 = v10 - 1;
  v90 = v12;
  v14 = *(float *)(a6 + 20);
  v101 = 0;
  v98 = v13;
  v91 = v14;
  v92 = v11;
  if ( v97 > 0 )
  {
    v15 = v91;
    v16 = v85;
    v17 = v90;
    v18 = v89;
    v84 = 36 * v96;
    v100 = (float *)(a3 - 12);
    v19 = (float *)(a3 + 16);
    v20 = (float *)(a3 + 4);
    v21 = v102 + 5;
    v86 = 0;
    v99 = 2;
    v88 = v85;
    LODWORD(v94) = -20 - (_DWORD)v102;
    do
    {
      v22 = v99;
      *v20 = *v16;
      ++v101;
      v23 = v16[1];
      v100 += 9;
      v20[1] = v23;
      v19 += 9;
      v20[2] = v16[2];
      v20 += 9;
      v24 = *(v21 - 5);
      v102 = v19;
      v25 = *(v21 - 4) * v17;
      v26 = v24 * v18;
      v27 = *(v21 - 3) * v15;
      *(v19 - 9) = v26;
      *(v19 - 8) = v25;
      *(v19 - 7) = v27;
      if ( v22 - 2 < v13 )
      {
        v93 = v99;
        v87 = v99 - 1;
        if ( v99 - 1 < v97 )
        {
          v28 = v13;
          if ( v99 < v97 )
            v28 = v93;
          v13 = v87;
        }
        else
        {
          v28 = v13;
        }
        v29 = *(v21 - 1) - *(v21 - 4);
        v30 = *v21 - *(v21 - 3);
        v77 = v18 * (*(v21 - 2) - *(v21 - 5)) * v11;
        v78 = v17 * v29 * v11;
        v79 = v11 * (v15 * v30);
        sub_10060BE0((float *)&v86[(_DWORD)v85], v16, &v85[3 * v13], &v85[3 * v28], v74);
        if ( v96 > 0 )
        {
          v101 += v96;
          v102 = (float *)((char *)v102 + v84);
          v31 = v100;
          v20 = (float *)((char *)v20 + v84);
          v32 = v80 + 4;
          v100 = (float *)((char *)v100 + v84);
          v33 = v96;
          do
          {
            v34 = *(v31 - 2);
            v31 += 9;
            v32 += 12;
            --v33;
            v35 = *(v31 - 10) + v78;
            v36 = v34 + v77;
            v37 = *(v31 - 9) + v79;
            *(v31 - 2) = v36;
            *(v31 - 1) = v35;
            *v31 = v37;
            v38 = *((float *)v32 - 2);
            v39 = v74[0] * v38;
            v40 = v74[1] * v38;
            v41 = *((float *)v32 - 3);
            v42 = *((float *)v32 - 4);
            v81 = v74[6] * v42;
            v82 = v74[7] * v42;
            v83 = v42 * v74[8];
            v75 = v74[9] + v81;
            v76 = v74[10] + v82;
            v43 = v38 * v74[2] + v41 * v74[5] + v74[11] + v83;
            v44 = v40 + v74[4] * v41 + v76;
            *(v31 - 5) = v39 + v74[3] * v41 + v75;
            *(v31 - 4) = v44;
            *(v31 - 3) = v43;
          }
          while ( v33 );
          v16 = v88;
        }
        v15 = v91;
        v19 = v102;
        v86 = (char *)v21 + LODWORD(v94);
        v11 = v92;
        v18 = v89;
        v17 = v90;
      }
      ++v99;
      v16 += 3;
      v21 += 3;
      v13 = v98;
      v88 = v16;
    }
    while ( v99 - 2 < v97 );
    v8 = a6;
    v7 = v95;
    v6 = a3;
    v9 = v96;
  }
  v45 = v101;
  *(float *)(v6 + 3284) = 0.0;
  *(_DWORD *)v6 = v45;
  v46 = (*(float *)(v8 + 28) + *(float *)(v8 + 24) - 100.0)
      * (4.0
       / *(float *)(LODWORD(v7) + 1932))
      / (double)(v9 * v13 + 1)
      / (double)*(int *)(LODWORD(v7) + 1960);
  v103 = v46;
  if ( *(_DWORD *)(LODWORD(v7) + 1956) && *(_DWORD *)(dword_1040E60C + 48) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) > 70
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 184))(dword_1047C97C) )
    {
      v47 = (double)sub_10076740(a2);
      v94 = v47;
      v95 = v47 * 0.5;
      v92 = *(float *)(dword_1040E654 + 44);
      v48 = *(float *)(dword_1040E6E4 + 44);
      v104 = *(float *)(dword_1040E774 + 44);
      v49 = *(float *)(dword_1040E69C + 44);
      v50 = *(float *)(dword_1040E72C + 44);
      v51 = *(float *)(LODWORD(v7) + 1240);
      if ( v101 > 0 )
      {
        v52 = (float *)(v6 + 2956);
        v53 = (float *)(v6 + 12);
        v54 = v101;
        do
        {
          v53[4] = v51;
          v55 = (*(v53 - 2) - *a5) * *a4 + (*(v53 - 1) - a5[1]) * a4[1] + (*v53 - a5[2]) * a4[2];
          if ( v55 <= 0.1 )
            v55 = 0.1;
          v56 = *(float *)(LODWORD(v7) + 1940) * v95 / v55;
          if ( v56 >= v49 )
          {
            if ( v56 <= v50 )
            {
              if ( v50 == v49 )
              {
                if ( v56 < v50 )
                  v58 = v48;
                else
                  v58 = v104;
              }
              else
              {
                v58 = (v56 - v49) * (v104 - v48) / (v50 - v49) + v48;
              }
            }
            else
            {
              v58 = v104;
            }
            v53[6] = v58;
            v53[5] = *(float *)(LODWORD(v7) + 1940);
            v59 = *(float *)(LODWORD(v7) + 1940) - v55 * v92 / v94;
            *v52 = v59;
            if ( v59 >= 0.0 )
            {
              if ( v59 < *(float *)(v6 + 3284) )
                v59 = *(float *)(v6 + 3284);
              *(float *)(v6 + 3284) = v59;
            }
            else
            {
              *v52 = 0.0;
            }
          }
          else
          {
            v57 = v95;
            v53[6] = v48;
            v53[5] = v55 * v49 / v57;
            *v52 = 0.0;
          }
          v51 = v51 + v103;
          ++v52;
          v53 += 9;
          --v54;
        }
        while ( v54 );
      }
      return;
    }
    v46 = v103;
  }
  v60 = v101;
  v61 = *(float *)(LODWORD(v7) + 1240);
  if ( v101 > 0 )
  {
    v62 = 0.30000001;
    v63 = v6 + 2956;
    v64 = -1.0;
    v65 = v6 + 36;
    while ( 1 )
    {
      v63 += 4;
      *(float *)(v65 - 8) = v61;
      v65 += 36;
      --v60;
      v69 = v61;
      *(float *)(v65 - 36) = v62;
      *(float *)(v65 - 40) = *(float *)(LODWORD(v7) + 1940);
      v70 = v62;
      *(float *)(v63 - 4) = v64;
      v71 = v64;
      v72 = v69 + v46;
      if ( !v60 )
        break;
      v66 = v72;
      v67 = v70;
      v61 = v66;
      v68 = v67;
      v64 = v71;
      v62 = v68;
    }
  }
}
