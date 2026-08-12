void __thiscall sub_101FA020(_DWORD *this, int a2, float a3)
{
  _DWORD *v4; // esi
  int v5; // eax
  bool v6; // cc
  int v7; // eax
  double v8; // st7
  int v9; // ecx
  double v10; // st6
  float v11; // eax
  float *v12; // ebx
  double v13; // st5
  double v14; // st4
  double v15; // st3
  int v16; // edi
  double v17; // rt0
  double v18; // st3
  bool v19; // zf
  double v20; // st2
  double v21; // st4
  double v22; // st3
  double v23; // rt0
  double v24; // st6
  double v25; // st7
  double v26; // st5
  double v27; // st3
  double v28; // st7
  float v29; // eax
  float v30; // ecx
  double v31; // st6
  double v32; // st5
  double v33; // st6
  double v34; // st5
  double v35; // rtt
  double v36; // rt0
  double v37; // st7
  _DWORD *v38; // eax
  _DWORD *v39; // ebx
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // edx
  int v43; // ebx
  double v44; // st7
  double v45; // st6
  double v46; // st5
  double v47; // st4
  float *v48; // ebx
  float *v49; // eax
  float *v50; // eax
  float *v51; // eax
  int (__thiscall *v52)(int); // edx
  float *v53; // eax
  int (__thiscall *v54)(int); // edx
  float *v55; // eax
  float *v56; // eax
  double v57; // st7
  float *v58; // eax
  int v59; // eax
  int v60; // ecx
  _DWORD *v61; // eax
  double v62; // st7
  double v63; // st6
  double v64; // st7
  int v65; // ecx
  int v66; // esi
  int v67; // eax
  float v68; // edi
  float *v69; // ecx
  _DWORD *v70; // edx
  float *v71; // eax
  double v72; // st7
  double v73; // st6
  double v74; // st6
  double v75; // st7
  float *v76; // ecx
  int v77; // edi
  float *v78; // ecx
  float v79; // [esp+18h] [ebp-110h]
  float v80; // [esp+1Ch] [ebp-10Ch]
  float v81; // [esp+1Ch] [ebp-10Ch]
  _BYTE v82[44]; // [esp+2Ch] [ebp-FCh] BYREF
  float v83; // [esp+58h] [ebp-D0h]
  char v84; // [esp+62h] [ebp-C6h]
  char v85; // [esp+63h] [ebp-C5h]
  int v86; // [esp+78h] [ebp-B0h]
  int v87[4]; // [esp+80h] [ebp-A8h] BYREF
  int v88[4]; // [esp+90h] [ebp-98h] BYREF
  int v89; // [esp+A0h] [ebp-88h]
  char *v90; // [esp+A4h] [ebp-84h]
  int v91; // [esp+A8h] [ebp-80h]
  int v92; // [esp+ACh] [ebp-7Ch] BYREF
  float v93; // [esp+B0h] [ebp-78h]
  float v94; // [esp+B4h] [ebp-74h]
  _DWORD *v95; // [esp+B8h] [ebp-70h]
  int v96; // [esp+BCh] [ebp-6Ch]
  float v97; // [esp+C0h] [ebp-68h] BYREF
  float v98; // [esp+C4h] [ebp-64h]
  float v99; // [esp+C8h] [ebp-60h]
  float v100; // [esp+CCh] [ebp-5Ch] BYREF
  float v101; // [esp+D0h] [ebp-58h]
  float v102; // [esp+D4h] [ebp-54h]
  _DWORD *v103; // [esp+D8h] [ebp-50h]
  int v104; // [esp+DCh] [ebp-4Ch]
  float v105; // [esp+E0h] [ebp-48h] BYREF
  float v106; // [esp+E4h] [ebp-44h]
  float v107; // [esp+E8h] [ebp-40h]
  float *v108; // [esp+ECh] [ebp-3Ch]
  int v109; // [esp+F0h] [ebp-38h] BYREF
  float v110; // [esp+F4h] [ebp-34h]
  float v111; // [esp+F8h] [ebp-30h]
  float v112; // [esp+FCh] [ebp-2Ch]
  _DWORD *v113; // [esp+100h] [ebp-28h]
  int v114; // [esp+104h] [ebp-24h] BYREF
  float v115; // [esp+108h] [ebp-20h]
  float v116; // [esp+10Ch] [ebp-1Ch]
  int v117; // [esp+110h] [ebp-18h]
  int v118; // [esp+114h] [ebp-14h]
  float v119; // [esp+118h] [ebp-10h] BYREF
  float v120; // [esp+11Ch] [ebp-Ch] BYREF
  float v121; // [esp+120h] [ebp-8h]
  int v122; // [esp+124h] [ebp-4h]
  bool v123; // [esp+137h] [ebp+Fh]

  v113 = this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "BacktrackPlayer", 0, "CLagCompensationManager", 0, 4);
  v4 = (_DWORD *)a2;
  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24)) - 1;
  v6 = this[10 * v5 + 10] <= 0;
  v96 = v5;
  v7 = (int)&this[10 * v5 + 4];
  if ( v6 )
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    v8 = a3;
    v9 = *(_DWORD *)(v7 + 12);
    v10 = 4096.0;
    v11 = *(float *)(a2 + 720);
    v110 = *(float *)(a2 + 716);
    v12 = 0;
    v112 = *(float *)(a2 + 724);
    v13 = v112;
    v111 = v11;
    v14 = v11;
    v15 = v110;
    v122 = 0;
    v16 = 0;
    while ( v9 && (*(_DWORD *)(v9 + 304) != v9 || *(_DWORD *)(v9 + 308) == v9) )
    {
      v19 = (*(_BYTE *)v9 & 1) == 0;
      v122 = v16;
      v16 = v9;
      if ( v19 )
        goto LABEL_80;
      v20 = *(float *)(v9 + 8) - v14;
      v21 = v20 * v20 + (*(float *)(v9 + 4) - v15) * (*(float *)(v9 + 4) - v15);
      v22 = *(float *)(v9 + 12) - v13;
      if ( v22 * v22 + v21 > v10 )
        goto LABEL_80;
      v12 = (float *)v122;
      v23 = v10;
      v24 = v8;
      v25 = v23;
      if ( v24 >= *(float *)(v9 + 52) )
      {
        v8 = v24;
        break;
      }
      v26 = *(float *)(v9 + 4);
      v14 = *(float *)(v9 + 8);
      v27 = *(float *)(v9 + 12);
      v9 = *(_DWORD *)(v9 + 308);
      v17 = v27;
      v18 = v25;
      v8 = v24;
      v10 = v18;
      v15 = v26;
      v13 = v17;
    }
    if ( v16 )
    {
      v121 = 0.0;
      if ( v12 && v8 > *(float *)(v16 + 52) && v12[13] > (double)*(float *)(v16 + 52) )
      {
        v28 = (v8 - *(float *)(v16 + 52)) / (v12[13] - *(float *)(v16 + 52));
        v121 = v28;
        if ( *(float *)(v16 + 16) == v12[4] && *(float *)(v16 + 20) == v12[5] && *(float *)(v16 + 24) == v12[6] )
        {
          v29 = *(float *)(v16 + 20);
          v30 = *(float *)(v16 + 24);
          v110 = *(float *)(v16 + 16);
          v111 = v29;
          v112 = v30;
        }
        else
        {
          sub_10423260(v16 + 16, v88);
          sub_10423260(v12 + 4, &v109);
          sub_104251E0((int)v88, (int)&v109, v121, (int)v87);
          sub_104252C0(v87, &v92);
          v28 = v121;
          v110 = *(float *)&v92;
          v111 = v93;
          v112 = v94;
        }
        v105 = v110;
        v106 = v111;
        v107 = v112;
        v31 = (v12[2] - *(float *)(v16 + 8)) * v28 + *(float *)(v16 + 8);
        v32 = (v12[3] - *(float *)(v16 + 12)) * v28 + *(float *)(v16 + 12);
        *(float *)&v114 = (v12[1] - *(float *)(v16 + 4)) * v28 + *(float *)(v16 + 4);
        v115 = v31;
        v116 = v32;
        v33 = (v12[8] - *(float *)(v16 + 32)) * v28 + *(float *)(v16 + 32);
        v34 = (v12[9] - *(float *)(v16 + 36)) * v28 + *(float *)(v16 + 36);
        v100 = (v12[7] - *(float *)(v16 + 28)) * v28 + *(float *)(v16 + 28);
        v101 = v33;
        v102 = v34;
        v35 = (v12[11] - *(float *)(v16 + 44)) * v28 + *(float *)(v16 + 44);
        v36 = v28 * (v12[12] - *(float *)(v16 + 48)) + *(float *)(v16 + 48);
        v97 = (v12[10] - *(float *)(v16 + 40)) * v28 + *(float *)(v16 + 40);
        v37 = v36;
        v98 = v35;
      }
      else
      {
        v105 = *(float *)(v16 + 16);
        v106 = *(float *)(v16 + 20);
        v107 = *(float *)(v16 + 24);
        v114 = *(int *)(v16 + 4);
        v115 = *(float *)(v16 + 8);
        v116 = *(float *)(v16 + 12);
        v100 = *(float *)(v16 + 28);
        v101 = *(float *)(v16 + 32);
        v102 = *(float *)(v16 + 36);
        v97 = *(float *)(v16 + 40);
        v98 = *(float *)(v16 + 44);
        v37 = *(float *)(v16 + 48);
      }
      v99 = v37;
      if ( *(_DWORD *)(dword_106BD184 + 48) )
      {
        sub_102659D0(a2, &v114, &v114, 33636363, v82);
        if ( v85 || v84 )
        {
          if ( *(_DWORD *)(dword_106BD1CC + 48) )
            DevMsg(
              "WARNING: BackupPlayer trying to back player into a bad position - client %s\n",
              (const char *)(a2 + 4296));
          v38 = (_DWORD *)__RTDynamicCast(
                            v86,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                            (int)&CBasePlayer `RTTI Type Descriptor',
                            0);
          v117 = (int)v38;
          if ( v38 )
          {
            v39 = v113;
            if ( v38 != (_DWORD *)v113[2760] )
            {
              v40 = sub_1001F3C0(v38);
              if ( ((1 << ((v40 - 1) & 0x1F)) & v39[((unsigned int)(v40 - 1) >> 5) + 174]) == 0 )
              {
                v41 = sub_1001F3C0((_DWORD *)a2);
                v42 = &v39[((v41 - 1) >> 5) + 174];
                v43 = 1 << ((v41 - 1) & 0x1F);
                v119 = *(float *)&v42;
                *v42 |= v43;
                sub_101FA020(v117, a3);
                *(_DWORD *)LODWORD(v119) &= ~v43;
              }
            }
          }
          sub_102659D0(a2, a2 + 716, &v114, 33636363, v82);
          if ( v85 || v84 )
          {
            if ( *(_DWORD *)(dword_106BD1CC + 48) )
              DevMsg("Backtrack failed completely, bad starting position\n");
          }
          else
          {
            v79 = flt_1063EBE4 * v83;
            sub_100E8670((float *)(a2 + 716), (float *)&v114, v79, (float *)&v92);
            v114 = v92;
            v115 = v93;
            v116 = v94;
            if ( *(_DWORD *)(dword_106BD1CC + 48) )
              DevMsg("Backtrack got most of the way\n");
          }
        }
      }
      v44 = *(float *)(a2 + 728) - v105;
      v45 = *(float *)(a2 + 732) - v106;
      v46 = *(float *)(a2 + 736) - v107;
      v110 = *(float *)(a2 + 716) - *(float *)&v114;
      v118 = 0;
      v47 = *(float *)(a2 + 720);
      v108 = (float *)&v113[76 * v96];
      v48 = v108 + 176;
      v111 = v47 - v115;
      v112 = *(float *)(a2 + 724) - v116;
      v108[189] = *(float *)(a2 + 128);
      if ( v44 * v44 + v45 * v45 + v46 * v46 > 0.010000001 )
      {
        v48[4] = *(float *)(a2 + 728);
        v48[5] = *(float *)(a2 + 732);
        v118 = 512;
        v48[6] = *(float *)(a2 + 736);
        sub_100E11A0(a2, &v105);
        v49 = v108;
        v108[1472] = v105;
        v49[1473] = v106;
        v49[1474] = v107;
      }
      v50 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 4))(a2 + 320);
      if ( sub_1001F080(&v100, v50)
        || (v51 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 8))(a2 + 320), sub_1001F080(&v97, v51)) )
      {
        v52 = *(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 4);
        v118 |= 0x400u;
        v53 = (float *)v52(a2 + 320);
        v48[7] = *v53;
        v48[8] = v53[1];
        v54 = *(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 8);
        v48[9] = v53[2];
        v55 = (float *)v54(a2 + 320);
        v48[10] = *v55;
        v48[11] = v55[1];
        v48[12] = v55[2];
        sub_100D69D0((void *)a2, (int)&v100, (int)&v97);
        v56 = v108;
        v108[1475] = v100;
        v56[1476] = v101;
        v56[1477] = v102;
        v56[1478] = v97;
        v56[1479] = v98;
        v56[1480] = v99;
      }
      if ( v111 * v111 + v110 * v110 + v112 * v112 > 0.010000001 )
      {
        v57 = *(float *)(a2 + 716);
        v118 |= 0x100u;
        v48[1] = v57;
        v48[2] = *(float *)(a2 + 720);
        v48[3] = *(float *)(a2 + 724);
        sub_100E10C0(a2, (float *)&v114);
        v58 = v108;
        v108[1469] = *(float *)&v114;
        v58[1470] = v115;
        v58[1471] = v116;
      }
      v59 = *(_DWORD *)(a2 + 908);
      v60 = v122;
      v118 |= 0x800u;
      *((_DWORD *)v48 + 74) = v59;
      v48[75] = *(float *)(a2 + 904);
      v123 = 0;
      if ( v60 )
        v123 = *(_DWORD *)(v16 + 296) == *(_DWORD *)(v60 + 296);
      if ( v121 > 0.0 && v123 )
      {
        v61 = *(_DWORD **)(v16 + 296);
        v117 = *(_DWORD *)(v60 + 296) - (_DWORD)v61;
        v119 = *(float *)&v61;
        sub_100C1170(a2, (int)(v121 * (double)v117 + (double)(int)v61));
        v80 = (*(float *)(v122 + 300) - *(float *)(v16 + 300)) * v121 + *(float *)(v16 + 300);
        sub_10031B50(a2, v80);
        v62 = *(float *)(v122 + 300);
        if ( v62 >= *(float *)(v16 + 300) )
        {
          v64 = (v62 - *(float *)(v16 + 300)) * v121 + *(float *)(v16 + 300);
        }
        else
        {
          v63 = (v62 + 1.0 - *(float *)(v16 + 300)) * v121 + *(float *)(v16 + 300);
          if ( v63 >= 1.0 )
            v64 = v63 - 1.0;
          else
            v64 = v63;
        }
      }
      else
      {
        sub_100C1170(a2, *(_DWORD *)(v16 + 296));
        v64 = *(float *)(v16 + 300);
      }
      v81 = v64;
      sub_10031B50(a2, v81);
      v89 = *(_DWORD *)(a2 + 1132);
      v104 = 0;
      if ( v89 > 0 )
      {
        v103 = (_DWORD *)(v122 + 56);
        v65 = v122;
        v122 -= v16;
        LODWORD(v120) = v48 + 16;
        v66 = v16 + 60;
        v90 = (char *)v48 - v16;
        v91 = v65 - (_DWORD)v48;
        do
        {
          v67 = sub_100C5020((_DWORD *)a2, v104);
          v68 = v120;
          if ( v67 )
          {
            *(float *)&v90[v66] = *(float *)(v67 + 12);
            v69 = (float *)(v67 + 12);
            v95 = (_DWORD *)(v67 + 60);
            *(_DWORD *)(LODWORD(v68) + 4) = *(_DWORD *)(v67 + 60);
            v70 = (_DWORD *)(v67 + 8);
            v71 = (float *)(v67 + 20);
            v119 = *(float *)&v70;
            *(_DWORD *)(LODWORD(v68) - 8) = *v70;
            *(float *)LODWORD(v68) = *v71;
            v117 = (int)v71;
            v72 = v121;
            if ( v121 > 0.0
              && v123
              && *(_DWORD *)(v66 + 8) == *(_DWORD *)(v122 + v66 + 8)
              && *(_DWORD *)(v66 - 4) == *v103 )
            {
              v73 = *(float *)(v122 + v66);
              if ( v73 >= *(float *)v66 )
              {
                v75 = v72 * (v73 - *(float *)v66) + *(float *)v66;
              }
              else
              {
                v74 = v72 * (v73 + 1.0 - *(float *)v66) + *(float *)v66;
                if ( v74 >= 1.0 )
                  v75 = v74 - 1.0;
                else
                  v75 = v74;
              }
              v120 = v75;
              sub_100BC270(v69, &v120);
              sub_100BC150(v95, (_DWORD *)(v66 + 8));
              sub_100C56A0((_DWORD *)LODWORD(v119), (_DWORD *)(v66 - 4));
              v76 = &v119;
              v119 = (*(float *)(v91 + LODWORD(v68)) - *(float *)(v66 + 4)) * v121 + *(float *)(v66 + 4);
            }
            else
            {
              sub_100BC270(v69, (float *)v66);
              sub_100BC150(v95, (_DWORD *)(v66 + 8));
              sub_100C56A0((_DWORD *)LODWORD(v119), (_DWORD *)(v66 - 4));
              v76 = (float *)(v66 + 4);
            }
            sub_100BC210((float *)v117, v76);
          }
          v103 += 4;
          v66 += 16;
          ++v104;
          LODWORD(v120) = LODWORD(v68) + 16;
        }
        while ( v104 < v89 );
        v4 = (_DWORD *)a2;
      }
      v77 = v118;
      if ( v118 )
      {
        if ( *(_DWORD *)(dword_106BD0F4 + 48) )
          sub_100BCCF0(v4);
        v78 = v108;
        v113[(v96 >> 5) + 174] |= 1 << (v96 & 0x1F);
        *((_BYTE *)v113 + 700) = 1;
        *(_DWORD *)v48 = v77;
        *((_DWORD *)v78 + 1468) = v77;
        if ( *(_DWORD *)(dword_106BD13C + 48) == 1 )
          sub_100C0570((int)v4, 4.0, 1);
      }
    }
    else if ( *(_DWORD *)(dword_106BD1CC + 48) )
    {
      DevMsg("No valid positions in history for BacktrackPlayer client ( %s )\n", (const char *)(a2 + 4296));
    }
LABEL_80:
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
