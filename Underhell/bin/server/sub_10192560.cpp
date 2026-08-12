char __usercall sub_10192560@<al>(int a1@<ecx>, int a2@<ebp>)
{
  int v3; // esi
  bool v4; // al
  int v5; // eax
  int v6; // eax
  float *v7; // esi
  float v8; // edx
  float v9; // ecx
  float v10; // eax
  float v11; // edx
  float v12; // eax
  float v13; // ecx
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // rt2
  double v18; // st5
  double v19; // st7
  double v20; // st4
  double v21; // st5
  double v22; // st3
  double v23; // rt0
  double v24; // st3
  double v25; // st5
  double v26; // st2
  double v27; // rt1
  double v28; // st2
  double v29; // st4
  double v30; // st6
  double v31; // st7
  float v32; // eax
  float v33; // ecx
  double v34; // st6
  double v35; // st5
  double v36; // st5
  double v37; // st7
  double v38; // st7
  double v39; // st6
  double v40; // st5
  int v41; // eax
  int v42; // ecx
  int v43; // esi
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  float v47; // eax
  int v48; // ecx
  int k; // eax
  int v50; // eax
  float *v51; // esi
  float v52; // edx
  double v53; // st7
  double v54; // st7
  double i; // st7
  double v56; // st5
  double v57; // rtt
  double v58; // rt0
  double v59; // st5
  double v60; // st7
  double v61; // st5
  double v62; // st7
  float v63; // edx
  float v64; // eax
  float v65; // esi
  double v66; // st7
  int v68; // eax
  int v69; // eax
  int v70; // ecx
  float v71; // eax
  float v72; // ecx
  float v73; // [esp+4h] [ebp-164h]
  float v74[22]; // [esp+1Ch] [ebp-14Ch] BYREF
  _DWORD v75[3]; // [esp+74h] [ebp-F4h] BYREF
  float v76; // [esp+80h] [ebp-E8h] BYREF
  float v77; // [esp+84h] [ebp-E4h]
  float v78; // [esp+88h] [ebp-E0h]
  float v79; // [esp+8Ch] [ebp-DCh]
  float v80; // [esp+90h] [ebp-D8h]
  float v81; // [esp+94h] [ebp-D4h]
  float v82; // [esp+A0h] [ebp-C8h]
  int v83; // [esp+A4h] [ebp-C4h]
  __int16 v84; // [esp+B4h] [ebp-B4h]
  float v85[6]; // [esp+CCh] [ebp-9Ch] BYREF
  int v86; // [esp+E4h] [ebp-84h]
  float v87; // [esp+E8h] [ebp-80h] BYREF
  float v88; // [esp+ECh] [ebp-7Ch]
  float v89; // [esp+F0h] [ebp-78h]
  float v90; // [esp+F4h] [ebp-74h] BYREF
  float v91; // [esp+F8h] [ebp-70h]
  float v92; // [esp+FCh] [ebp-6Ch]
  float v93; // [esp+100h] [ebp-68h] BYREF
  float v94; // [esp+104h] [ebp-64h]
  float v95; // [esp+108h] [ebp-60h]
  float v96; // [esp+10Ch] [ebp-5Ch] BYREF
  float v97; // [esp+110h] [ebp-58h]
  float v98; // [esp+114h] [ebp-54h]
  int j; // [esp+118h] [ebp-50h]
  int v100; // [esp+11Ch] [ebp-4Ch]
  int v101; // [esp+120h] [ebp-48h]
  float v102; // [esp+124h] [ebp-44h]
  float v103; // [esp+128h] [ebp-40h] BYREF
  float v104; // [esp+12Ch] [ebp-3Ch]
  float v105; // [esp+130h] [ebp-38h]
  int v106; // [esp+134h] [ebp-34h]
  float v107; // [esp+138h] [ebp-30h]
  int v108; // [esp+13Ch] [ebp-2Ch]
  int v109; // [esp+140h] [ebp-28h]
  float v110; // [esp+144h] [ebp-24h] BYREF
  float v111; // [esp+148h] [ebp-20h]
  float v112; // [esp+14Ch] [ebp-1Ch]
  float v113; // [esp+150h] [ebp-18h] BYREF
  float v114; // [esp+154h] [ebp-14h]
  float v115; // [esp+158h] [ebp-10h]
  _DWORD v116[3]; // [esp+15Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+168h] [ebp+0h]

  v116[0] = a2;
  v116[1] = retaddr;
  *(float *)(a1 + 1120) = 0.0;
  *(_BYTE *)(a1 + 1117) = 0;
  *(_DWORD *)(a1 + 1092) = 0;
  *(_BYTE *)(a1 + 1128) = 0;
  *(_DWORD *)(a1 + 1172) = 0;
  *(float *)&v3 = COERCE_FLOAT(sub_1025FC50());
  v102 = *(float *)&v3;
  if ( *(float *)&v3 != 0.0 )
  {
    sub_101922E0(&v110, (int)&v87);
    v96 = v87 * 1000.0 + v110;
    v97 = v88 * 1000.0 + v111;
    v98 = 1000.0 * v89 + v112;
    sub_1002A5F0((int)v116, v3, &v110, &v96, 81931, v3, 0, (int)v75);
    if ( 1.0 != v82 )
    {
      if ( *(_DWORD *)(a1 + 1124) != 1 )
      {
        v4 = *(_BYTE *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v84) + 74) != 0;
        *(_BYTE *)(a1 + 1128) = v4;
        if ( !v4 )
          *(_BYTE *)(a1 + 1128) = (v83 & 0x20000000) != 0;
        *(float *)(a1 + 1132) = v79;
        *(float *)(a1 + 1136) = v80;
        *(float *)(a1 + 1140) = v81;
        if ( !*(_BYTE *)(a1 + 1128) )
          goto LABEL_14;
        if ( *(_BYTE *)(a1 + 1168) && sub_1001F080((float *)(a1 + 1132), (float *)(a1 + 1156)) )
          *(_BYTE *)(a1 + 1128) = 0;
        if ( *(float *)(a1 + 1140) > 0.89999998 )
          *(_BYTE *)(a1 + 1128) = 0;
      }
      if ( *(_BYTE *)(a1 + 1128) && !*(_BYTE *)(a1 + 1168) )
      {
LABEL_15:
        v5 = *(_DWORD *)(a1 + 1212);
        *(float *)&v108 = 40000.0;
        if ( v5 != -1 )
        {
          while ( 1 )
          {
            v6 = 12 * v5;
            v7 = *(float **)(v6 + *(_DWORD *)(a1 + 1200));
            v8 = v7[3];
            v9 = v7[5];
            v109 = v6;
            v10 = v7[4];
            v103 = v8;
            v11 = *v7;
            v104 = v10;
            v12 = v7[1];
            v105 = v9;
            v13 = v7[2];
            v113 = 0.0;
            v96 = v11;
            v114 = 0.0;
            v115 = 0.0;
            v97 = v12;
            v93 = 0.0;
            v94 = 0.0;
            v95 = 0.0;
            v98 = v13;
            sub_10421D80(v7 + 14, &v113);
            v14 = v7[7] * 0.5;
            v15 = v113 * v14;
            v113 = v15;
            v16 = v14 * v114;
            v114 = v16;
            v17 = v16;
            v18 = v14 * v115;
            v19 = v17;
            v115 = v18;
            v20 = -v15;
            v21 = -v17;
            if ( v20 >= v15 )
              v22 = v15;
            else
              v22 = v20;
            v23 = v22 + v103;
            v24 = v21;
            v25 = v23;
            if ( v24 >= v19 )
              v26 = v19;
            else
              v26 = v24;
            v27 = v26 + v104;
            v28 = v20;
            v29 = v27;
            if ( v28 > v15 )
              v15 = v28;
            v30 = v15 + v96;
            if ( v24 > v19 )
              v19 = v24;
            v85[0] = v25 - 5.0;
            v85[1] = v29 - 5.0;
            v85[2] = v105 - 5.0;
            v85[3] = v30 + 5.0;
            v85[4] = v19 + v97 + 5.0;
            v85[5] = v98 + 5.0;
            if ( sub_10191DD0(v85, (float *)(a1 + 1076)) )
              break;
            if ( *(_BYTE *)(a1 + 1128) )
            {
              v31 = v7[3] + *v7;
              v32 = *(float *)(a1 + 1080);
              v33 = *(float *)(a1 + 1084);
              v34 = v7[4] + v7[1];
              v110 = *(float *)(a1 + 1076);
              v35 = v7[5];
              v111 = v32;
              v36 = v35 + v7[2];
              v112 = v33;
              v37 = (v36 * 0.5 - v33) * (v36 * 0.5 - v33)
                  + (v31 * 0.5 - v110) * (v31 * 0.5 - v110)
                  + (v34 * 0.5 - v32) * (v34 * 0.5 - v32);
              if ( *(float *)&v108 > v37 )
              {
                *(float *)&v108 = v37;
                *(_DWORD *)(a1 + 1172) = v7;
              }
            }
            v5 = *(_DWORD *)(v109 + *(_DWORD *)(a1 + 1200) + 8);
            if ( v5 == -1 )
              goto LABEL_33;
          }
          *(_DWORD *)(a1 + 1172) = v7;
        }
LABEL_33:
        v38 = v76;
        *(float *)(a1 + 1076) = v76;
        v39 = v77;
        *(float *)(a1 + 1080) = v77;
        v40 = v78;
        *(float *)(a1 + 1084) = v78;
        if ( *(_BYTE *)(a1 + 1128) || *(_DWORD *)(a1 + 1172) )
          goto LABEL_67;
        if ( !*(_DWORD *)(a1 + 4) )
        {
LABEL_65:
          if ( *(_DWORD *)(a1 + 1092) )
          {
LABEL_68:
            for ( i = *(float *)((*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v102) + 508))(COERCE_FLOAT(LODWORD(v102)))
                               + 4); i > 360.0; i = i - 360.0 )
              ;
            v56 = 0.0;
            if ( i < 0.0 )
            {
              while ( 1 )
              {
                v58 = v56;
                v59 = i;
                v60 = v58;
                v61 = v59 + 360.0;
                if ( v61 >= v58 )
                  break;
                v57 = v61;
                v56 = v60;
                i = v57;
              }
              i = v61;
            }
            if ( i < 45.0 || i > 315.0 || i > 135.0 && i < 225.0 )
            {
              v62 = sub_10192230(v77, 1);
              *(_BYTE *)(a1 + 1117) = 1;
            }
            else
            {
              v62 = sub_10192230(v76, 1);
              *(_BYTE *)(a1 + 1117) = 0;
            }
            *(float *)(a1 + 1120) = v62;
LABEL_82:
            if ( *(_BYTE *)(a1 + 1128) || *(_BYTE *)(a1 + 1168) )
              return 1;
            if ( *(_DWORD *)(dword_106B8370 + 1240) )
            {
              v109 = 25;
            }
            else
            {
              v68 = *(_DWORD *)(dword_106B7C04 + 48);
              if ( !v68 )
              {
                v71 = *(float *)(a1 + 1080);
                v72 = *(float *)(a1 + 1084);
                v113 = *(float *)(a1 + 1076);
                v114 = v71;
                v115 = v72;
                goto LABEL_87;
              }
              v69 = v68 - 2;
              v70 = 25;
              if ( v69 )
              {
                if ( v69 == 1 )
                  v70 = 1;
              }
              else
              {
                v70 = 5;
              }
              v109 = v70;
            }
            v63 = *(float *)(a1 + 1076);
            v64 = *(float *)(a1 + 1080);
            v65 = *(float *)(a1 + 1084);
            v102 = (float)v109;
            v110 = v63;
            v66 = *(float *)(a1 + 1076);
            v111 = v64;
            v73 = v66;
            v110 = sub_10191E30(v73, v102);
            v111 = sub_10191E30(*(float *)(a1 + 1080), v102);
            v113 = v110;
            v114 = v111;
            v115 = v65;
LABEL_87:
            *(float *)(a1 + 1076) = v113;
            *(float *)(a1 + 1080) = v114;
            *(float *)(a1 + 1084) = v115;
            return 1;
          }
          *(_DWORD *)(a1 + 1092) = sub_1019E4A0(&v76, 0, 500.0, 0);
LABEL_67:
          if ( !*(_DWORD *)(a1 + 1092) )
            goto LABEL_82;
          goto LABEL_68;
        }
        v113 = *(float *)v75;
        v114 = *(float *)&v75[1];
        v115 = *(float *)&v75[2];
        v110 = v38 + v87 * 10.0;
        v111 = v39 + v88 * 10.0;
        v112 = 10.0 * v89 + v40;
        sub_1001F200(v74, &v113, &v110, &flt_106F1CA8, &flt_106F1CA8);
        v107 = 1.0;
        v93 = v113;
        v94 = v114;
        v95 = v115;
        v92 = v115;
        v90 = v113;
        v91 = v114;
        sub_101920D0(&v90, &v110);
        v41 = (int)((v90 - *(float *)(a1 + 20)) / *(float *)(a1 + 8));
        v101 = v41;
        if ( v41 >= 0 )
        {
          v42 = *(_DWORD *)(a1 + 12);
          if ( v41 >= v42 )
            v101 = v42 - 1;
        }
        else
        {
          v101 = 0;
        }
        v43 = (int)((v91 - *(float *)(a1 + 24)) / *(float *)(a1 + 8));
        if ( v43 >= 0 )
        {
          v44 = *(_DWORD *)(a1 + 16);
          if ( v43 >= v44 )
            v43 = v44 - 1;
        }
        else
        {
          v43 = 0;
        }
        v45 = (int)((v93 - *(float *)(a1 + 20)) / *(float *)(a1 + 8));
        v106 = v45;
        if ( v45 >= 0 )
        {
          v46 = *(_DWORD *)(a1 + 12);
          if ( v45 >= v46 )
            v106 = v46 - 1;
        }
        else
        {
          v106 = 0;
        }
        LODWORD(v47) = (int)((v94 - *(float *)(a1 + 24)) / *(float *)(a1 + 8));
        *(float *)&v108 = v47;
        if ( v47 >= 0.0 )
        {
          v48 = *(_DWORD *)(a1 + 16);
          if ( SLODWORD(v47) < v48 )
            goto LABEL_53;
          LODWORD(v47) = v48 - 1;
        }
        else
        {
          v47 = 0.0;
        }
        *(float *)&v108 = v47;
LABEL_53:
        v100 = v43;
        if ( v43 <= SLODWORD(v47) )
        {
          do
          {
            for ( j = v101; j <= v106; ++j )
            {
              v109 = *(_DWORD *)(a1 + 4) + 36 * (j + v100 * *(_DWORD *)(a1 + 12));
              for ( k = *(_DWORD *)(v109 + 12); k != -1; k = *(_DWORD *)(*(_DWORD *)v109 + v86 + 8) )
              {
                v50 = 12 * k;
                v51 = *(float **)(v50 + *(_DWORD *)v109);
                v86 = v50;
                v113 = v51[1];
                v114 = v51[2];
                v115 = v51[3];
                v103 = v51[4];
                v104 = v51[5];
                v52 = v51[6];
                v93 = v103;
                v105 = v52;
                v94 = v114;
                v95 = v51[13];
                v110 = v113;
                v111 = v104;
                v112 = v51[14];
                v53 = sub_10112F00(v74, &v113, &v93, &v103, 0.0);
                if ( v53 > 0.0 && v107 > v53 )
                {
                  v107 = v53;
                  *(_DWORD *)(a1 + 1092) = v51;
                }
                v54 = sub_10112F00(v74, &v103, &v110, &v113, 0.0);
                if ( v54 > 0.0 && v107 > v54 )
                {
                  v107 = v54;
                  *(_DWORD *)(a1 + 1092) = v51;
                }
              }
            }
            ++v100;
          }
          while ( v100 <= v108 );
        }
        goto LABEL_65;
      }
LABEL_14:
      if ( *(_DWORD *)(a1 + 1124) == 1 )
        goto LABEL_33;
      goto LABEL_15;
    }
  }
  return 0;
}
