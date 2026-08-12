void __usercall sub_101525A0(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  float *v5; // eax
  float *v6; // esi
  int v7; // ecx
  int v8; // esi
  int (__thiscall *v9)(int); // eax
  float *v10; // eax
  float v11; // edx
  float v12; // ecx
  float v13; // eax
  int v14; // edx
  float *v15; // eax
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  double v19; // st7
  int (__thiscall *v20)(int, int *); // edx
  float *v21; // eax
  bool v22; // zf
  double v23; // st6
  double v24; // st7
  float v25; // ecx
  float v26; // eax
  int v27; // ecx
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  double v33; // st6
  double v34; // st7
  double v35; // st6
  double v36; // st7
  double v37; // rtt
  double v38; // st6
  double v39; // st7
  double v40; // st5
  double v41; // st5
  bool v42; // cc
  int v43; // eax
  float *v44; // eax
  double v45; // st6
  double v46; // st7
  double v47; // st7
  float *v48; // eax
  float *v49; // esi
  float *v50; // eax
  int (__thiscall *v51)(int, int *, int, int, _DWORD, _DWORD, int, int, int, int); // edx
  float *v52; // eax
  double v53; // st6
  double v54; // rtt
  double v55; // st4
  double v56; // st7
  double v57; // st7
  int (__thiscall *v58)(int); // edx
  int v59; // eax
  char v60; // t0
  float v63; // [esp+2Ch] [ebp-224h]
  float v64; // [esp+30h] [ebp-220h]
  int v65; // [esp+34h] [ebp-21Ch] BYREF
  int v66; // [esp+38h] [ebp-218h]
  int v67; // [esp+3Ch] [ebp-214h]
  int v68; // [esp+40h] [ebp-210h]
  float v69[3]; // [esp+84h] [ebp-1CCh] BYREF
  float v70[19]; // [esp+90h] [ebp-1C0h] BYREF
  float v71[13]; // [esp+DCh] [ebp-174h] BYREF
  char v72; // [esp+113h] [ebp-13Dh]
  int v73; // [esp+128h] [ebp-128h]
  int v74; // [esp+134h] [ebp-11Ch] BYREF
  float v75; // [esp+140h] [ebp-110h] BYREF
  int v76; // [esp+14Ch] [ebp-104h] BYREF
  int v77; // [esp+158h] [ebp-F8h] BYREF
  float v78; // [esp+164h] [ebp-ECh] BYREF
  _DWORD v79[3]; // [esp+170h] [ebp-E0h] BYREF
  _DWORD v80[4]; // [esp+17Ch] [ebp-D4h]
  float v81[3]; // [esp+18Ch] [ebp-C4h] BYREF
  float v82[3]; // [esp+198h] [ebp-B8h] BYREF
  float v83; // [esp+1A4h] [ebp-ACh]
  float v84; // [esp+1A8h] [ebp-A8h]
  float v85; // [esp+1B0h] [ebp-A0h]
  float v86; // [esp+1B4h] [ebp-9Ch]
  float v87[3]; // [esp+1BCh] [ebp-94h] BYREF
  float v88; // [esp+1C8h] [ebp-88h]
  float v89; // [esp+1CCh] [ebp-84h]
  float v90; // [esp+1D0h] [ebp-80h]
  float v91; // [esp+1D4h] [ebp-7Ch]
  float v92; // [esp+1D8h] [ebp-78h]
  int v93; // [esp+1DCh] [ebp-74h]
  float v94; // [esp+1E0h] [ebp-70h]
  float v95; // [esp+1E4h] [ebp-6Ch]
  float v96; // [esp+1E8h] [ebp-68h]
  float v97[3]; // [esp+1ECh] [ebp-64h] BYREF
  float v98; // [esp+1F8h] [ebp-58h]
  float v99; // [esp+1FCh] [ebp-54h]
  float v100; // [esp+200h] [ebp-50h]
  float v101; // [esp+204h] [ebp-4Ch]
  __int64 v102; // [esp+208h] [ebp-48h]
  float v103; // [esp+210h] [ebp-40h] BYREF
  float v104; // [esp+214h] [ebp-3Ch]
  float v105; // [esp+218h] [ebp-38h]
  float v106; // [esp+21Ch] [ebp-34h]
  float v107; // [esp+220h] [ebp-30h]
  float v108; // [esp+224h] [ebp-2Ch]
  float v109; // [esp+228h] [ebp-28h] BYREF
  float v110; // [esp+22Ch] [ebp-24h]
  float v111; // [esp+230h] [ebp-20h]
  float v112; // [esp+234h] [ebp-1Ch]
  int v113; // [esp+238h] [ebp-18h]
  int v114; // [esp+23Ch] [ebp-14h]
  float v115; // [esp+240h] [ebp-10h]
  _DWORD v116[3]; // [esp+244h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+250h] [ebp+0h]

  v116[0] = a2;
  v116[1] = retaddr;
  if ( *(_DWORD *)(a1 + 1292) )
    goto LABEL_13;
  v5 = (float *)sub_100DDA40(260);
  v6 = v5;
  if ( v5 )
  {
    sub_100F2BA0(v5, (int)"ashtray");
    *(_DWORD *)v6 = &AshDebrisEffect::`vftable';
  }
  else
  {
    v6 = 0;
  }
  if ( v6 != *(float **)(a1 + 1292) )
  {
    if ( v6 )
      sub_100F2950(v6);
    v7 = *(_DWORD *)(a1 + 1292);
    if ( v7 )
      sub_100F2FF0(v7);
    *(_DWORD *)(a1 + 1292) = v6;
  }
  if ( v6 )
  {
    *(float *)(a1 + 1296) = 0.0052083335;
    *(float *)(a1 + 1300) = 0.0;
    *(float *)(a1 + 1304) = 0.06666667;
    *(float *)(a1 + 1308) = 0.0;
    *(_BYTE *)(a1 + 1312) = 0;
    *(_DWORD *)(a1 + 1328) = 0;
LABEL_13:
    v8 = sub_100422D0();
    v113 = v8;
    if ( v8 )
    {
      sub_100392A0((char *)v8, (int)&v103, 0, 0);
      v105 = 0.0;
      v9 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 260);
      v112 = *((float *)off_103DC81C + 4);
      v10 = (float *)v9(a1);
      v11 = v10[1];
      v12 = *v10;
      v13 = v10[2];
      v95 = v11;
      v14 = *(_DWORD *)a1;
      v94 = v12;
      v96 = v13;
      v15 = (float *)(*(int (__thiscall **)(int))(v14 + 264))(a1);
      v16 = *v15;
      v17 = v15[1];
      v18 = v15[2];
      v98 = v16;
      v99 = v17;
      v100 = v18;
      while ( 1 )
      {
        v19 = v112;
        if ( v112 < (double)*(float *)(a1 + 1308) )
          break;
        v112 = v19 - *(float *)(a1 + 1308);
        *(float *)(a1 + 1308) = *(float *)(a1 + 1304);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v8 + 532))(v8, v97);
        v20 = *(int (__thiscall **)(int, int *))(*(_DWORD *)v8 + 532);
        v106 = v103 * 56755.84;
        v107 = v104 * 56755.84;
        v108 = 56755.84 * v105;
        v21 = (float *)v20(v8, &v77);
        v87[0] = v106 + *v21;
        v87[1] = v21[1] + v107;
        v87[2] = v21[2] + v108;
        sub_1000E430((float *)&v65, v97, v87);
        sub_1012D400(v79, v8, 0);
        (*(void (__thiscall **)(int, int *, int, _DWORD *, float *))(*(_DWORD *)dword_104131A0 + 16))(
          dword_104131A0,
          &v65,
          100679683,
          v79,
          v69);
        if ( *(_DWORD *)(dword_10439134 + 48) )
          sub_10130AC0(v69, v70, 255, 0, 0, 1, 5.0);
        if ( 1.0 != v70[8] )
        {
          v81[0] = 1.0;
          v81[1] = 1.0;
          v81[2] = 1.0;
          v82[0] = -1.0;
          v82[1] = -1.0;
          v82[2] = -1.0;
          sub_1012D510(COERCE_FLOAT(v116), v97, v70, v82, v81, a1, 0, v71);
          if ( v73 == a1 )
          {
            v22 = v72 == 0;
            *(_BYTE *)(a1 + 1312) = 1;
            if ( v22 )
            {
              v23 = 256.0 * v105 + v71[5];
              v24 = v104 * 256.0 + v71[4];
              *(float *)(a1 + 1316) = v103 * 256.0 + v71[3];
              *(float *)(a1 + 1320) = v24;
              *(float *)(a1 + 1324) = v23;
            }
            else
            {
              *(float *)(a1 + 1316) = v97[0];
              *(float *)(a1 + 1320) = v97[1];
              *(float *)(a1 + 1324) = v97[2];
            }
          }
          else
          {
            *(_BYTE *)(a1 + 1312) = 0;
          }
        }
      }
      *(float *)(a1 + 1308) = *(float *)(a1 + 1308) - v19;
      if ( *(_BYTE *)(a1 + 1312) )
      {
        sub_10038150(v8);
        v91 = *(float *)(v8 + 244);
        v92 = *(float *)(v8 + 248);
        v93 = *(_DWORD *)(v8 + 252);
        *(float *)&v114 = off_103EDFEC();
        v25 = *(float *)(a1 + 1324);
        v26 = *(float *)(a1 + 1320);
        v109 = *(float *)(a1 + 1316);
        v111 = v25;
        v27 = *(_DWORD *)(a1 + 1292);
        v110 = v26;
        sub_100F3060(v27, &v109);
        v28 = sub_100F0920();
        v80[0] = sub_100F0950((int)v28, a1, v8, "effects/fleck_ash1");
        v29 = sub_100F0920();
        v80[1] = sub_100F0950((int)v29, a1, v8, "effects/fleck_ash2");
        v30 = sub_100F0920();
        v80[2] = sub_100F0950((int)v30, a1, v8, "effects/fleck_ash3");
        v31 = sub_100F0920();
        v32 = sub_100F0950((int)v31, a1, v8, "effects/ember_swirling001");
        v33 = *(float *)&v114;
        v80[3] = v32;
        v101 = flt_10459240;
        v102 = qword_10459244;
        if ( *(float *)&v114 > 0.0 )
        {
          v101 = v91 * (v33 + v33) + v103 * 256.0;
          *(float *)&v102 = (v33 + v33) * v92 + 256.0 * v104;
        }
        while ( 1 )
        {
          v34 = v112;
          if ( v112 < (double)*(float *)(a1 + 1300) )
            break;
          v112 = v34 - *(float *)(a1 + 1300);
          *(float *)(a1 + 1300) = *(float *)(a1 + 1296);
          v115 = COERCE_FLOAT(RandomInt(0, 128));
          *(float *)&v114 = COERCE_FLOAT(sub_10115FB0());
          v85 = (double)v114 * 0.000030518509 * 512.0 - 256.0;
          *(float *)&v114 = COERCE_FLOAT(sub_10115FB0());
          v86 = (double)v114 * 0.000030518509 * 512.0 - 256.0;
          sub_10115FB0();
          v35 = v101 + *(float *)(a1 + 1316) + v85;
          v36 = *(float *)&v102 + *(float *)(a1 + 1320) + v86;
          v109 = v35;
          v37 = v35;
          v38 = v36;
          v39 = v37;
          v110 = v38;
          v40 = (double)SLODWORD(v115);
          v115 = v40;
          v41 = v40 + *(float *)(a1 + 1324);
          v111 = v41;
          if ( v98 >= v37 && v99 >= v38 && v100 >= v41 && v94 <= v39 && v38 >= v95 && v41 >= v96 )
          {
            v42 = ++*(_DWORD *)(a1 + 1328) < 250;
            HIBYTE(v114) = 0;
            if ( !v42 )
            {
              HIBYTE(v114) = 1;
              *(_DWORD *)(a1 + 1328) = 0;
            }
            v43 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 2);
            if ( HIBYTE(v114) == 1 )
            {
              v88 = v103 * 256.0 + *(float *)(a1 + 1316);
              v89 = v104 * 256.0 + *(float *)(a1 + 1320);
              v90 = 256.0 * v105 + *(float *)(a1 + 1324);
              v44 = sub_10042010(&v78, -128.0, 128.0);
              v45 = v44[1] + v89;
              v46 = v44[2] + v90;
              v109 = *v44 + v88;
              v110 = v45;
              v111 = v46;
              v8 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v8 + 532))(v8, &v76) + 8;
              v47 = RandomFloat(-16.0, 64.0);
              v43 = 3;
              v111 = v47 + *(float *)v8;
            }
            v48 = sub_100F2B60(*(_DWORD *)(a1 + 1292), v8, 60, v80[v43], &v109);
            v49 = v48;
            if ( v48 )
            {
              v48[11] = 0.0;
              v48[10] = sub_100145F0(v115, 0.0, 128.0, 4.0, 8.0);
              if ( HIBYTE(v114) == 1 )
              {
                *(float *)&v50 = COERCE_FLOAT(sub_10042010(&v75, -64.0, 64.0));
                v51 = *(int (__thiscall **)(int, int *, int, int, _DWORD, _DWORD, int, int, int, int))(*(_DWORD *)v113 + 532);
                v115 = *(float *)&v50;
                v52 = (float *)v51(v113, &v74, a3, a4, LODWORD(v63), LODWORD(v64), v65, v66, v67, v68);
                v53 = *(float *)(LODWORD(v115) + 4) + v52[1];
                v54 = *(float *)(LODWORD(v115) + 8) + v52[2];
                v106 = *v52 + *(float *)LODWORD(v115) - v109;
                v107 = v53 - v110;
                v108 = v54 - v111;
                off_103EDFEC();
                v55 = v108;
                v56 = v107 * 75.0;
                v49[6] = v106 * 75.0;
                v49[7] = v56;
                v49[8] = 75.0 * v55;
                v49[10] = 2.5;
              }
              else
              {
                v83 = RandomFloat(-20.0, 20.0);
                v84 = RandomFloat(-20.0, 20.0);
                v57 = RandomFloat(-10.0, -15.0);
                v49[6] = v83;
                v49[7] = v84;
                v49[8] = v57;
              }
              v58 = *(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8);
              v68 = 225;
              v67 = 125;
              v59 = v58(dword_10413198);
              v66 = 360;
              v65 = 0;
              LODWORD(v115) = (int)(double)v59;
              v60 = LOBYTE(v115);
              *((_BYTE *)v49 + 48) = LOBYTE(v115);
              *((_BYTE *)v49 + 49) = v60;
              *((_BYTE *)v49 + 50) = v60;
              *(_WORD *)((char *)v49 + 53) = 257;
              *((_BYTE *)v49 + 51) = -1;
              v115 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198));
              v49[9] = (float)SLODWORD(v115);
              v64 = 0.15000001;
              v63 = -0.15000001;
              v49[14] = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
              *((_BYTE *)v49 + 55) = 1;
              a4 = 10;
              a3 = 0;
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198) <= 1 )
                *((_BYTE *)v49 + 55) |= 4u;
            }
            v8 = v113;
          }
        }
        *(float *)(a1 + 1300) = *(float *)(a1 + 1300) - v34;
      }
    }
  }
}
