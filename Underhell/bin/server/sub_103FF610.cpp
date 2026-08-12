_DWORD *__usercall sub_103FF610@<eax>(_DWORD *a1@<ecx>, float a2@<ebx>)
{
  int v2; // edi
  _DWORD *result; // eax
  _DWORD *v4; // esi
  char v5; // al
  double v6; // st7
  _DWORD *v7; // eax
  int v8; // esi
  unsigned int v9; // eax
  const char *v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // eax
  unsigned __int16 *v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  int *v19; // edi
  int v20; // eax
  int v21; // esi
  int *v22; // eax
  int *v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  int *v26; // esi
  int *v27; // ecx
  unsigned int v28; // eax
  int v29; // eax
  int v30; // esi
  int v31; // edi
  int *v32; // ecx
  unsigned int v33; // eax
  int v34; // esi
  double v35; // st7
  int v36; // ecx
  int *v37; // ecx
  _DWORD *v38; // ebx
  int v39; // edi
  unsigned int v40; // eax
  int v41; // eax
  unsigned int v42; // eax
  int v43; // ecx
  int v44; // eax
  float *v45; // esi
  int *v46; // ecx
  unsigned int v47; // eax
  int v48; // ecx
  int v49; // esi
  int *v50; // ecx
  unsigned int v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  int v54; // esi
  _DWORD *v55; // edi
  _DWORD *v56; // ebx
  char *v57; // esi
  _DWORD *v58; // eax
  int v59; // eax
  int *v60; // edi
  int v61; // eax
  int v62; // esi
  int *v63; // eax
  int *v64; // ecx
  int v65; // ebx
  int v66; // eax
  int v67; // edi
  int *v68; // ecx
  _DWORD *v69; // esi
  unsigned int v70; // eax
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  _DWORD *v75; // ebx
  char *v76; // esi
  _DWORD *v77; // eax
  int v78; // eax
  int *v79; // edi
  int v80; // eax
  int v81; // esi
  int *v82; // eax
  int *v83; // ecx
  int v84; // ebx
  int v85; // edi
  unsigned int v86; // eax
  int v87; // ecx
  int *v88; // ecx
  int *v89; // ecx
  int v90; // esi
  int *v91; // ecx
  int *v92; // ecx
  _DWORD *v93; // esi
  int v94; // ecx
  int v95; // ecx
  int *v96; // ecx
  unsigned int v97; // eax
  char *v98; // esi
  _DWORD *v99; // eax
  unsigned int v100; // eax
  int v101; // edi
  int v102; // esi
  int *v103; // ecx
  unsigned int v104; // eax
  int v105; // ebx
  int v106; // edi
  unsigned int v107; // eax
  int v108; // ecx
  int *v109; // ecx
  int *v110; // ecx
  unsigned int v111; // eax
  int v112; // esi
  int *v113; // ecx
  int *v114; // ecx
  _DWORD *v115; // esi
  unsigned int v116; // eax
  int v117; // ecx
  unsigned int v118; // eax
  int v119; // ecx
  unsigned int v120; // eax
  char *v121; // esi
  _DWORD *v122; // eax
  unsigned int v123; // eax
  int v124; // edi
  int v125; // esi
  int *v126; // ecx
  unsigned int v127; // eax
  int v128; // edi
  int v129; // eax
  int v130; // ebx
  int *v131; // ecx
  _DWORD *v132; // esi
  unsigned int v133; // eax
  int v134; // ecx
  unsigned int v135; // eax
  int v136; // ecx
  unsigned int v137; // eax
  int v138; // ecx
  unsigned int v139; // eax
  float v140; // [esp+10h] [ebp-50h]
  float v141; // [esp+10h] [ebp-50h]
  float v142; // [esp+14h] [ebp-4Ch]
  char *String1; // [esp+24h] [ebp-3Ch]
  const char *v145; // [esp+28h] [ebp-38h]
  const char *v146; // [esp+2Ch] [ebp-34h]
  const char *v147; // [esp+30h] [ebp-30h]
  const char *v148; // [esp+34h] [ebp-2Ch]
  const char *v149; // [esp+38h] [ebp-28h]
  char *v150[2]; // [esp+3Ch] [ebp-24h]
  float v151; // [esp+44h] [ebp-1Ch]
  float v152; // [esp+48h] [ebp-18h]
  _DWORD *v153; // [esp+4Ch] [ebp-14h]
  _DWORD *v154; // [esp+50h] [ebp-10h]
  int v155; // [esp+54h] [ebp-Ch]
  _DWORD *v156; // [esp+58h] [ebp-8h]
  bool v157; // [esp+5Fh] [ebp-1h]

  v2 = (int)a1;
  v156 = a1;
  result = (_DWORD *)sub_100D1940(a1);
  v4 = result;
  v153 = result;
  if ( result )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 320))(result);
    if ( (_BYTE)result )
    {
      v5 = *(_BYTE *)(dword_106B3CDC + 12);
      v157 = v5 == 1;
      if ( v5 == 1 )
        v6 = 1.5;
      else
        v6 = 1.0;
      v152 = v6;
      v7 = (_DWORD *)sub_101E7EA0(v4, 0);
      v8 = 0;
      v154 = v7;
      v155 = 0;
      do
      {
        v9 = *(_DWORD *)(v2 + 4 * v8 + 1432);
        if ( v9 == -1
          || off_1061BE18[4 * (*(_DWORD *)(v2 + 4 * v8 + 1432) & 0xFFF) + 2] != v9 >> 12
          || !off_1061BE18[4 * (*(_DWORD *)(v2 + 4 * v8 + 1432) & 0xFFF) + 1] )
        {
          String1 = "fork1t";
          v146 = "fork1t";
          v148 = "fork1t";
          v145 = "fork2t";
          v147 = "fork2t";
          v149 = "fork2t";
          v10 = "sprites/lgtning_noz.vmt";
          if ( !v157 )
            v10 = "sprites/orangelight1.vmt";
          v11 = sub_100FB5C0(v10, 1.0);
          if ( v11 )
            *(_DWORD *)(v2 + 4 * v8 + 1432) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
          else
            *(_DWORD *)(v2 + 4 * v8 + 1432) = -1;
          v12 = *(_DWORD *)(v2 + 4 * v8 + 1432);
          if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 4 * v8 + 1432) & 0xFFF) + 2] != v12 >> 12 )
            v13 = 0;
          else
            v13 = off_1061BE18[4 * (*(_DWORD *)(v2 + 4 * v8 + 1432) & 0xFFF) + 1];
          sub_100FAE40(v13, v154, v154);
          v14 = sub_100BEF30(v2, (&String1)[v8]);
          v15 = *(_DWORD *)(v2 + 4 * v8 + 1432);
          if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 4 * v8 + 1432) & 0xFFF) + 2] != v15 >> 12 )
            v16 = 0;
          else
            v16 = (unsigned __int16 *)off_1061BE18[4 * (*(_DWORD *)(v2 + 4 * v8 + 1432) & 0xFFF) + 1];
          sub_100EACE0(v16, (int)v154, 1);
          v17 = *(_DWORD *)(v2 + 4 * v8 + 1432);
          if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 4 * v8 + 1432) & 0xFFF) + 2] != v17 >> 12 )
            v18 = 0;
          else
            v18 = off_1061BE18[4 * (*(_DWORD *)(v2 + 4 * v8 + 1432) & 0xFFF) + 1];
          v19 = (int *)(v18 + 248);
          v20 = *(_DWORD *)(v18 + 248);
          v21 = v20 | 0x8000;
          if ( v20 != (v20 | 0x8000) )
          {
            v22 = v19 - 62;
            if ( *((_BYTE *)v19 - 164) )
            {
              *((_BYTE *)v22 + 88) |= 1u;
            }
            else
            {
              v23 = (int *)v22[6];
              if ( v23 )
                sub_100194B0(v23, 248);
            }
            *v19 = v21;
          }
          v24 = v156[v155 + 358];
          if ( v24 == -1 || off_1061BE18[4 * (v156[v155 + 358] & 0xFFF) + 2] != v24 >> 12 )
            v25 = 0;
          else
            v25 = off_1061BE18[4 * (v156[v155 + 358] & 0xFFF) + 1];
          v26 = (int *)(v25 + 872);
          if ( *(_DWORD *)(v25 + 872) != v14 )
          {
            if ( *(_BYTE *)(v25 + 84) )
            {
              *(_BYTE *)(v25 + 88) |= 1u;
            }
            else
            {
              v27 = *(int **)(v25 + 24);
              if ( v27 )
                sub_100194B0(v27, 872);
            }
            *v26 = v14;
          }
          v28 = v156[v155 + 358];
          if ( v28 == -1 || off_1061BE18[4 * (v156[v155 + 358] & 0xFFF) + 2] != v28 >> 12 )
            v29 = 0;
          else
            v29 = off_1061BE18[4 * (v156[v155 + 358] & 0xFFF) + 1];
          v30 = *(_DWORD *)(v29 + 816);
          v31 = v29 + 872;
          if ( *(_DWORD *)(v29 + 4 * v30 + 868) != 1 )
          {
            if ( *(_BYTE *)(v29 + 84) )
            {
              *(_BYTE *)(v29 + 88) |= 1u;
            }
            else
            {
              v32 = *(int **)(v29 + 24);
              if ( v32 )
                sub_100194B0(v32, 4 * v30 - 4 + 872);
            }
            *(_DWORD *)(v31 + 4 * v30 - 4) = 1;
          }
          v33 = v156[v155 + 358];
          if ( v33 == -1 || off_1061BE18[4 * (v156[v155 + 358] & 0xFFF) + 2] != v33 >> 12 )
            v34 = 0;
          else
            v34 = off_1061BE18[4 * (v156[v155 + 358] & 0xFFF) + 1];
          v35 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  8.0,
                  16.0,
                  LODWORD(a2));
          v36 = *(_DWORD *)(v34 + 928);
          v151 = v35;
          if ( v36 != LODWORD(v151) )
          {
            if ( *(_BYTE *)(v34 + 84) )
            {
              *(_BYTE *)(v34 + 88) |= 1u;
            }
            else
            {
              v37 = *(int **)(v34 + 24);
              if ( v37 )
                sub_100194B0(v37, 928);
            }
            *(float *)(v34 + 928) = v151;
          }
          v38 = v156;
          v39 = v155;
          v40 = v156[v155 + 358];
          if ( v40 == -1 || off_1061BE18[4 * (v156[v155 + 358] & 0xFFF) + 2] != v40 >> 12 )
            v41 = 0;
          else
            v41 = off_1061BE18[4 * (v156[v155 + 358] & 0xFFF) + 1];
          sub_1005C620((_BYTE *)(v41 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v41 + 116)));
          v42 = v38[v39 + 358];
          if ( v42 == -1 || off_1061BE18[4 * (v38[v39 + 358] & 0xFFF) + 2] != v42 >> 12 )
            v43 = 0;
          else
            v43 = off_1061BE18[4 * (v38[v39 + 358] & 0xFFF) + 1];
          v44 = *(_DWORD *)(v43 + 936);
          v45 = (float *)(v43 + 936);
          v151 = 25.0;
          if ( v44 != COERCE_INT(25.0) )
          {
            if ( *(_BYTE *)(v43 + 84) )
            {
              *(_BYTE *)(v43 + 88) |= 1u;
            }
            else
            {
              v46 = *(int **)(v43 + 24);
              if ( v46 )
                sub_100194B0(v46, 936);
            }
            *v45 = 25.0;
          }
          v47 = v38[v39 + 358];
          if ( v47 == -1 || off_1061BE18[4 * (v38[v39 + 358] & 0xFFF) + 2] != v47 >> 12 )
            v48 = 0;
          else
            v48 = off_1061BE18[4 * (v38[v39 + 358] & 0xFFF) + 1];
          v49 = v48 + 116;
          if ( *(_BYTE *)(v48 + 119) != 0x80 )
          {
            if ( *(_BYTE *)(v48 + 84) )
            {
              *(_BYTE *)(v48 + 88) |= 1u;
            }
            else
            {
              v50 = *(int **)(v48 + 24);
              if ( v50 )
                sub_100194B0(v50, 116);
            }
            *(_BYTE *)(v49 + 3) = 0x80;
          }
          v51 = v38[v39 + 358];
          if ( v51 == -1 || off_1061BE18[4 * (v38[v39 + 358] & 0xFFF) + 2] != v51 >> 12 )
            v52 = 0;
          else
            v52 = off_1061BE18[4 * (v38[v39 + 358] & 0xFFF) + 1];
          sub_1005C3A0(v52, 0.0);
          v53 = v38[v39 + 358];
          if ( v53 == -1 || off_1061BE18[4 * (v38[v39 + 358] & 0xFFF) + 2] != v53 >> 12 )
            v54 = 0;
          else
            v54 = off_1061BE18[4 * (v38[v39 + 358] & 0xFFF) + 1];
          a2 = 4.0;
          v142 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 2.0);
          sub_1005C410(v54, v142);
          v8 = v155;
          v2 = (int)v38;
        }
        v155 = ++v8;
      }
      while ( v8 < 4 );
      v55 = v156;
      v56 = v156 + 362;
      v155 = 0;
      v154 = v156 + 362;
      do
      {
        if ( *v56 == -1 || off_1061BE18[4 * (*v56 & 0xFFF) + 2] != *v56 >> 12 || !off_1061BE18[4 * (*v56 & 0xFFF) + 1] )
        {
          String1 = "fork1b";
          v145 = "fork1m";
          v146 = "fork1t";
          v147 = "fork2b";
          v148 = "fork2m";
          v149 = "fork2t";
          v57 = "sprites/blueflare1_noz.vmt";
          if ( !v157 )
            v57 = "sprites/glow04_noz.vmt";
          if ( (v55[63] & 0x800) != 0 )
            sub_100DAE60((int)v55);
          v58 = sub_10243040(v57, (float *)v55 + 145, 0);
          if ( v58 )
            *v56 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v58 + 8))(v58);
          else
            *v56 = -1;
          if ( *v56 == -1 || off_1061BE18[4 * (*v56 & 0xFFF) + 2] != *v56 >> 12 )
            v59 = 0;
          else
            v59 = off_1061BE18[4 * (*v56 & 0xFFF) + 1];
          v60 = (int *)(v59 + 248);
          v61 = *(_DWORD *)(v59 + 248);
          v62 = v61 | 0x8000;
          if ( v61 != (v61 | 0x8000) )
          {
            v63 = v60 - 62;
            if ( *((_BYTE *)v60 - 164) )
            {
              *((_BYTE *)v63 + 88) |= 1u;
            }
            else
            {
              v64 = (int *)v63[6];
              if ( v64 )
                sub_100194B0(v64, 248);
            }
            *v60 = v62;
          }
          if ( *v56 == -1 || off_1061BE18[4 * (*v56 & 0xFFF) + 2] != *v56 >> 12 )
            v65 = 0;
          else
            v65 = off_1061BE18[4 * (*v56 & 0xFFF) + 1];
          v151 = COERCE_FLOAT(sub_100BEF30((int)v156, (&String1)[v155]));
          v66 = sub_101E7EA0(v153, 0);
          v67 = v66;
          if ( v66 )
          {
            sub_100C0E40((unsigned int *)(v65 + 800), v66);
            if ( *(_DWORD *)(v65 + 804) != LODWORD(v151) )
            {
              if ( *(_BYTE *)(v65 + 84) )
              {
                *(_BYTE *)(v65 + 88) |= 1u;
              }
              else
              {
                v68 = *(int **)(v65 + 24);
                if ( v68 )
                  sub_100194B0(v68, 804);
              }
              *(float *)(v65 + 804) = v151;
            }
            sub_100EACE0((unsigned __int16 *)v65, v67, 1);
          }
          v69 = v154;
          v70 = *v154;
          if ( v157 )
          {
            if ( v70 == -1 || off_1061BE18[4 * (*v154 & 0xFFF) + 2] != v70 >> 12 )
              v71 = 0;
            else
              v71 = off_1061BE18[4 * (*v154 & 0xFFF) + 1];
            sub_10128950(v71, 5, 255, 255, 255, 128, 0);
          }
          else
          {
            if ( v70 == -1 || off_1061BE18[4 * (*v154 & 0xFFF) + 2] != v70 >> 12 )
              v72 = 0;
            else
              v72 = off_1061BE18[4 * (*v154 & 0xFFF) + 1];
            sub_10128950(v72, 5, 255, 128, 0, 64, 14);
          }
          if ( *v69 == -1 || off_1061BE18[4 * (*v69 & 0xFFF) + 2] != *v69 >> 12 )
            v73 = 0;
          else
            v73 = off_1061BE18[4 * (*v69 & 0xFFF) + 1];
          sub_10242820(v73, 255, 0.2);
          if ( *v69 == -1 || off_1061BE18[4 * (*v69 & 0xFFF) + 2] != *v69 >> 12 )
            v74 = 0;
          else
            v74 = off_1061BE18[4 * (*v69 & 0xFFF) + 1];
          v140 = v152 * 0.25;
          sub_102428B0(v74, v140, 0.2);
          v56 = v154;
          v55 = v156;
        }
        ++v56;
        ++v155;
        v154 = v56;
      }
      while ( v155 < 6 );
      v75 = v55 + 368;
      v155 = 0;
      v154 = v55 + 368;
      do
      {
        if ( *v75 == -1 || off_1061BE18[4 * (*v75 & 0xFFF) + 2] != *v75 >> 12 || !off_1061BE18[4 * (*v75 & 0xFFF) + 1] )
        {
          v150[0] = "fork1t";
          v150[1] = "fork2t";
          v76 = "sprites/blueflare1_noz.vmt";
          if ( !v157 )
            v76 = "sprites/orangeflare1.vmt";
          if ( (v55[63] & 0x800) != 0 )
            sub_100DAE60((int)v55);
          v77 = sub_10243040(v76, (float *)v55 + 145, 0);
          if ( v77 )
            *v75 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v77 + 8))(v77);
          else
            *v75 = -1;
          if ( *v75 == -1 || off_1061BE18[4 * (*v75 & 0xFFF) + 2] != *v75 >> 12 )
            v78 = 0;
          else
            v78 = off_1061BE18[4 * (*v75 & 0xFFF) + 1];
          v79 = (int *)(v78 + 248);
          v80 = *(_DWORD *)(v78 + 248);
          v81 = v80 | 0x8000;
          if ( v80 != (v80 | 0x8000) )
          {
            v82 = v79 - 62;
            if ( *((_BYTE *)v79 - 164) )
            {
              *((_BYTE *)v82 + 88) |= 1u;
            }
            else
            {
              v83 = (int *)v82[6];
              if ( v83 )
                sub_100194B0(v83, 248);
            }
            *v79 = v81;
          }
          if ( *v75 == -1 || off_1061BE18[4 * (*v75 & 0xFFF) + 2] != *v75 >> 12 )
            v84 = 0;
          else
            v84 = off_1061BE18[4 * (*v75 & 0xFFF) + 1];
          v151 = COERCE_FLOAT(sub_100BEF30((int)v156, v150[v155]));
          v85 = sub_101E7EA0(v153, 0);
          if ( v85 )
          {
            v86 = *(_DWORD *)(v84 + 800);
            if ( v86 == -1 || off_1061BE18[4 * (*(_DWORD *)(v84 + 800) & 0xFFF) + 2] != v86 >> 12 )
              v87 = 0;
            else
              v87 = off_1061BE18[4 * (*(_DWORD *)(v84 + 800) & 0xFFF) + 1];
            if ( v87 != v85 )
            {
              if ( *(_BYTE *)(v84 + 84) )
              {
                *(_BYTE *)(v84 + 88) |= 1u;
              }
              else
              {
                v88 = *(int **)(v84 + 24);
                if ( v88 )
                  sub_100194B0(v88, 800);
              }
              *(_DWORD *)(v84 + 800) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v85 + 8))(v85);
            }
            if ( *(_DWORD *)(v84 + 804) != LODWORD(v151) )
            {
              if ( *(_BYTE *)(v84 + 84) )
              {
                *(_BYTE *)(v84 + 88) |= 1u;
              }
              else
              {
                v89 = *(int **)(v84 + 24);
                if ( v89 )
                  sub_100194B0(v89, 804);
              }
              *(float *)(v84 + 804) = v151;
            }
            sub_100EACE0((unsigned __int16 *)v84, v85, 1);
          }
          if ( *v154 == -1 || off_1061BE18[4 * (*v154 & 0xFFF) + 2] != *v154 >> 12 )
            v90 = 0;
          else
            v90 = off_1061BE18[4 * (*v154 & 0xFFF) + 1];
          if ( *(_BYTE *)(v90 + 113) != 5 )
          {
            if ( *(_BYTE *)(v90 + 84) )
            {
              *(_BYTE *)(v90 + 88) |= 1u;
            }
            else
            {
              v91 = *(int **)(v90 + 24);
              if ( v91 )
                sub_100194B0(v91, 113);
            }
            *(_BYTE *)(v90 + 113) = 5;
          }
          sub_1005C620((_BYTE *)(v90 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v90 + 116)));
          sub_10242820(v90, 255, 0.0);
          if ( *(_BYTE *)(v90 + 112) != 14 )
          {
            if ( *(_BYTE *)(v90 + 84) )
            {
              *(_BYTE *)(v90 + 88) |= 1u;
            }
            else
            {
              v92 = *(int **)(v90 + 24);
              if ( v92 )
                sub_100194B0(v92, 112);
            }
            *(_BYTE *)(v90 + 112) = 14;
          }
          v93 = v154;
          if ( *v154 == -1 || off_1061BE18[4 * (*v154 & 0xFFF) + 2] != *v154 >> 12 )
            v94 = 0;
          else
            v94 = off_1061BE18[4 * (*v154 & 0xFFF) + 1];
          sub_10242820(v94, 255, 0.2);
          if ( *v93 == -1 || off_1061BE18[4 * (*v93 & 0xFFF) + 2] != *v93 >> 12 )
            v95 = 0;
          else
            v95 = off_1061BE18[4 * (*v93 & 0xFFF) + 1];
          v141 = v152 * 0.25;
          sub_102428B0(v95, v141, 0.2);
          if ( *v93 == -1 || off_1061BE18[4 * (*v93 & 0xFFF) + 2] != *v93 >> 12 )
            v96 = 0;
          else
            v96 = (int *)off_1061BE18[4 * (*v93 & 0xFFF) + 1];
          sub_10242060(v96);
          v55 = v156;
          v75 = v154;
        }
        ++v75;
        ++v155;
        v154 = v75;
      }
      while ( v155 < 2 );
      v97 = v55[372];
      if ( v97 == -1
        || off_1061BE18[4 * (v55[372] & 0xFFF) + 2] != v97 >> 12
        || !off_1061BE18[4 * (v55[372] & 0xFFF) + 1] )
      {
        v98 = "effects/fluttercore.vmt";
        if ( !v157 )
          v98 = "sprites/orangecore1.vmt";
        if ( (v55[63] & 0x800) != 0 )
          sub_100DAE60((int)v55);
        v99 = sub_10243040(v98, (float *)v55 + 145, 0);
        if ( v99 )
          v55[372] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v99 + 8))(v99);
        else
          v55[372] = -1;
        v100 = v55[372];
        if ( v100 == -1 || off_1061BE18[4 * (v55[372] & 0xFFF) + 2] != v100 >> 12 )
          v101 = 0;
        else
          v101 = off_1061BE18[4 * (v55[372] & 0xFFF) + 1];
        v102 = *(_DWORD *)(v101 + 248) | 0x8000;
        if ( *(_DWORD *)(v101 + 248) != v102 )
        {
          if ( *(_BYTE *)(v101 + 84) )
          {
            *(_BYTE *)(v101 + 88) |= 1u;
          }
          else
          {
            v103 = *(int **)(v101 + 24);
            if ( v103 )
              sub_100194B0(v103, 248);
          }
          *(_DWORD *)(v101 + 248) = v102;
        }
        v104 = v156[372];
        if ( v104 == -1 || off_1061BE18[4 * (v156[372] & 0xFFF) + 2] != v104 >> 12 )
          v105 = 0;
        else
          v105 = off_1061BE18[4 * (v156[372] & 0xFFF) + 1];
        v106 = sub_101E7EA0(v153, 0);
        if ( v106 )
        {
          v107 = *(_DWORD *)(v105 + 800);
          if ( v107 == -1 || off_1061BE18[4 * (*(_DWORD *)(v105 + 800) & 0xFFF) + 2] != v107 >> 12 )
            v108 = 0;
          else
            v108 = off_1061BE18[4 * (*(_DWORD *)(v105 + 800) & 0xFFF) + 1];
          if ( v108 != v106 )
          {
            if ( *(_BYTE *)(v105 + 84) )
            {
              *(_BYTE *)(v105 + 88) |= 1u;
            }
            else
            {
              v109 = *(int **)(v105 + 24);
              if ( v109 )
                sub_100194B0(v109, 800);
            }
            *(_DWORD *)(v105 + 800) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v106 + 8))(v106);
          }
          if ( *(_DWORD *)(v105 + 804) != 1 )
          {
            if ( *(_BYTE *)(v105 + 84) )
            {
              *(_BYTE *)(v105 + 88) |= 1u;
            }
            else
            {
              v110 = *(int **)(v105 + 24);
              if ( v110 )
                sub_100194B0(v110, 804);
            }
            *(_DWORD *)(v105 + 804) = 1;
          }
          sub_100EACE0((unsigned __int16 *)v105, v106, 1);
        }
        v111 = v156[372];
        if ( v111 == -1 || off_1061BE18[4 * (v156[372] & 0xFFF) + 2] != v111 >> 12 )
          v112 = 0;
        else
          v112 = off_1061BE18[4 * (v156[372] & 0xFFF) + 1];
        if ( *(_BYTE *)(v112 + 113) != 5 )
        {
          if ( *(_BYTE *)(v112 + 84) )
          {
            *(_BYTE *)(v112 + 88) |= 1u;
          }
          else
          {
            v113 = *(int **)(v112 + 24);
            if ( v113 )
              sub_100194B0(v113, 113);
          }
          *(_BYTE *)(v112 + 113) = 5;
        }
        sub_1005C620((_BYTE *)(v112 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v112 + 116)));
        sub_10242820(v112, 255, 0.0);
        if ( *(_BYTE *)(v112 + 112) )
        {
          if ( *(_BYTE *)(v112 + 84) )
          {
            *(_BYTE *)(v112 + 88) |= 1u;
          }
          else
          {
            v114 = *(int **)(v112 + 24);
            if ( v114 )
              sub_100194B0(v114, 112);
          }
          *(_BYTE *)(v112 + 112) = 0;
        }
        v115 = v156;
        v116 = v156[372];
        if ( v116 == -1 || off_1061BE18[4 * (v156[372] & 0xFFF) + 2] != v116 >> 12 )
          v117 = 0;
        else
          v117 = off_1061BE18[4 * (v156[372] & 0xFFF) + 1];
        sub_10242820(v117, 255, 0.2);
        v118 = v115[372];
        if ( v118 == -1 || off_1061BE18[4 * (v115[372] & 0xFFF) + 2] != v118 >> 12 )
          v119 = 0;
        else
          v119 = off_1061BE18[4 * (v115[372] & 0xFFF) + 1];
        sub_102428B0(v119, 0.1, 0.2);
        v55 = v115;
      }
      v120 = v55[373];
      if ( v120 == -1
        || (result = (_DWORD *)(v120 >> 12), (_DWORD *)off_1061BE18[4 * (v55[373] & 0xFFF) + 2] != result)
        || !off_1061BE18[4 * (v55[373] & 0xFFF) + 1] )
      {
        v121 = "effects/fluttercore.vmt";
        if ( !v157 )
          v121 = "sprites/orangecore2.vmt";
        if ( (v55[63] & 0x800) != 0 )
          sub_100DAE60((int)v55);
        v122 = sub_10243040(v121, (float *)v55 + 145, 0);
        if ( v122 )
          v55[373] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v122 + 8))(v122);
        else
          v55[373] = -1;
        v123 = v55[373];
        if ( v123 == -1 || off_1061BE18[4 * (v55[373] & 0xFFF) + 2] != v123 >> 12 )
          v124 = 0;
        else
          v124 = off_1061BE18[4 * (v55[373] & 0xFFF) + 1];
        v125 = *(_DWORD *)(v124 + 248) | 0x8000;
        if ( *(_DWORD *)(v124 + 248) != v125 )
        {
          if ( *(_BYTE *)(v124 + 84) )
          {
            *(_BYTE *)(v124 + 88) |= 1u;
          }
          else
          {
            v126 = *(int **)(v124 + 24);
            if ( v126 )
              sub_100194B0(v126, 248);
          }
          *(_DWORD *)(v124 + 248) = v125;
        }
        v127 = v156[373];
        if ( v127 == -1 || off_1061BE18[4 * (v156[373] & 0xFFF) + 2] != v127 >> 12 )
          v128 = 0;
        else
          v128 = off_1061BE18[4 * (v156[373] & 0xFFF) + 1];
        v129 = sub_101E7EA0(v153, 0);
        v130 = v129;
        if ( v129 )
        {
          sub_100C0E40((unsigned int *)(v128 + 800), v129);
          if ( *(_DWORD *)(v128 + 804) != 1 )
          {
            if ( *(_BYTE *)(v128 + 84) )
            {
              *(_BYTE *)(v128 + 88) |= 1u;
            }
            else
            {
              v131 = *(int **)(v128 + 24);
              if ( v131 )
                sub_100194B0(v131, 804);
            }
            *(_DWORD *)(v128 + 804) = 1;
          }
          sub_100EACE0((unsigned __int16 *)v128, v130, 1);
        }
        v132 = v156;
        v133 = v156[373];
        if ( v133 == -1 || off_1061BE18[4 * (v156[373] & 0xFFF) + 2] != v133 >> 12 )
          v134 = 0;
        else
          v134 = off_1061BE18[4 * (v156[373] & 0xFFF) + 1];
        sub_10128950(v134, 5, 255, 255, 255, 255, 0);
        v135 = v132[373];
        if ( v135 == -1 || off_1061BE18[4 * (v132[373] & 0xFFF) + 2] != v135 >> 12 )
          v136 = 0;
        else
          v136 = off_1061BE18[4 * (v132[373] & 0xFFF) + 1];
        sub_10242820(v136, 255, 0.2);
        v137 = v132[373];
        if ( v137 == -1 || off_1061BE18[4 * (v132[373] & 0xFFF) + 2] != v137 >> 12 )
          v138 = 0;
        else
          v138 = off_1061BE18[4 * (v132[373] & 0xFFF) + 1];
        sub_102428B0(v138, 0.1, 0.2);
        v139 = v132[373];
        if ( v139 == -1 || off_1061BE18[4 * (v132[373] & 0xFFF) + 2] != v139 >> 12 )
          return (_DWORD *)sub_10242060(0);
        else
          return (_DWORD *)sub_10242060((int *)off_1061BE18[4 * (v132[373] & 0xFFF) + 1]);
      }
    }
  }
  return result;
}
