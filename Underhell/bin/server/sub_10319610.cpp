void __usercall sub_10319610(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  bool v4; // c0
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int (__thiscall *v9)(float *); // edx
  float *v10; // eax
  double v11; // st7
  int v12; // edi
  int v13; // eax
  float *v14; // eax
  float v15; // ecx
  float v16; // edx
  float v17; // eax
  int v18; // edx
  double v19; // st7
  double (__thiscall *v20)(int, _DWORD, _DWORD); // eax
  double v21; // st7
  double (__thiscall *v22)(int, _DWORD, _DWORD); // eax
  double v23; // st7
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // eax
  long double v30; // st7
  int v31; // eax
  long double v32; // st6
  int v33; // eax
  double v34; // st7
  double v35; // st6
  double v36; // st6
  double v37; // rt1
  double (__thiscall *v38)(int, _DWORD, _DWORD); // eax
  double v39; // st7
  double v40; // st7
  int v41; // eax
  int v42; // eax
  int (__thiscall *v43)(float *); // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int (__thiscall *v52)(float *); // eax
  int v53; // eax
  int *v54; // eax
  double v55; // st7
  float *v56; // esi
  float v57; // edx
  float *v58; // eax
  double v59; // st7
  int *v60; // ecx
  _DWORD v61[256]; // [esp+60h] [ebp-910h]
  _DWORD v62[256]; // [esp+460h] [ebp-510h] BYREF
  float v63; // [esp+860h] [ebp-110h] BYREF
  float v64; // [esp+864h] [ebp-10Ch]
  float v65; // [esp+868h] [ebp-108h]
  float v66; // [esp+86Ch] [ebp-104h]
  float v67; // [esp+870h] [ebp-100h]
  float v68; // [esp+874h] [ebp-FCh]
  float v69; // [esp+878h] [ebp-F8h]
  float v70; // [esp+87Ch] [ebp-F4h]
  float v71; // [esp+880h] [ebp-F0h]
  float v72; // [esp+884h] [ebp-ECh]
  float v73; // [esp+888h] [ebp-E8h]
  float v74; // [esp+88Ch] [ebp-E4h]
  int v75; // [esp+890h] [ebp-E0h]
  int v76; // [esp+894h] [ebp-DCh]
  float v77; // [esp+898h] [ebp-D8h]
  float v78; // [esp+89Ch] [ebp-D4h]
  float v79; // [esp+8A0h] [ebp-D0h]
  int v80; // [esp+8A4h] [ebp-CCh]
  __int16 v81; // [esp+8A8h] [ebp-C8h]
  int v82; // [esp+8ACh] [ebp-C4h]
  int v83; // [esp+8B0h] [ebp-C0h]
  int v84; // [esp+8B4h] [ebp-BCh]
  char v85; // [esp+8B8h] [ebp-B8h]
  float *v86; // [esp+8C0h] [ebp-B0h]
  int v87; // [esp+8C4h] [ebp-ACh] BYREF
  float v88; // [esp+8C8h] [ebp-A8h]
  float v89; // [esp+8CCh] [ebp-A4h]
  int v90[2]; // [esp+8D0h] [ebp-A0h] BYREF
  float v91; // [esp+8D8h] [ebp-98h] BYREF
  float v92; // [esp+8DCh] [ebp-94h]
  float v93; // [esp+8E0h] [ebp-90h]
  float v94; // [esp+8E4h] [ebp-8Ch] BYREF
  float v95; // [esp+8E8h] [ebp-88h]
  float v96; // [esp+8ECh] [ebp-84h]
  float v97; // [esp+8F0h] [ebp-80h]
  float v98; // [esp+8F4h] [ebp-7Ch] BYREF
  float v99; // [esp+8F8h] [ebp-78h]
  float v100; // [esp+8FCh] [ebp-74h]
  float v101; // [esp+900h] [ebp-70h]
  float v102; // [esp+904h] [ebp-6Ch]
  float v103; // [esp+908h] [ebp-68h]
  float v104; // [esp+90Ch] [ebp-64h]
  float v105; // [esp+910h] [ebp-60h]
  int v106; // [esp+914h] [ebp-5Ch]
  int v107; // [esp+918h] [ebp-58h]
  float v108; // [esp+91Ch] [ebp-54h]
  float v109; // [esp+920h] [ebp-50h]
  float v110; // [esp+924h] [ebp-4Ch]
  int v111; // [esp+928h] [ebp-48h]
  __int16 v112; // [esp+92Ch] [ebp-44h]
  int v113; // [esp+930h] [ebp-40h]
  int v114; // [esp+934h] [ebp-3Ch]
  int v115; // [esp+938h] [ebp-38h]
  char v116; // [esp+93Ch] [ebp-34h]
  float v117; // [esp+944h] [ebp-2Ch]
  int v118; // [esp+948h] [ebp-28h]
  float v119; // [esp+94Ch] [ebp-24h]
  float v120; // [esp+950h] [ebp-20h] BYREF
  float v121; // [esp+954h] [ebp-1Ch]
  float v122; // [esp+958h] [ebp-18h]
  float v123; // [esp+95Ch] [ebp-14h] BYREF
  float v124; // [esp+960h] [ebp-10h]
  float v125; // [esp+964h] [ebp-Ch]
  float v126; // [esp+968h] [ebp-8h]
  float v127; // [esp+96Ch] [ebp-4h]

  v4 = *(float *)(dword_106B31C8 + 12) < (double)a1[418];
  v86 = a1 + 418;
  if ( v4 )
    return;
  sub_1023C380(a1, (int)"ReallyLoudSpark", 0.0, 0);
  v5 = (*(int (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 576))(a1, a3, a2);
  v87 = *(int *)v5;
  v88 = *(float *)(v5 + 4);
  v89 = *(float *)(v5 + 8) - 400.0;
  sub_1025F990(v90, (int)v62, 256, 0);
  *(float *)&v6 = COERCE_FLOAT(sub_1025FA20((int)&v87, 500.0, (int)v90));
  v7 = 0;
  *(float *)&v8 = 0.0;
  v127 = *(float *)&v6;
  v118 = 0;
  v126 = 0.0;
  if ( v6 > 0 )
  {
    do
    {
      if ( v62[v8] && sub_10317650(a1, (_BYTE *)v62[v8]) )
        v61[v7++] = v62[LODWORD(v126)];
      v8 = LODWORD(v126) + 1;
      v126 = *(float *)&v8;
    }
    while ( v8 < SLODWORD(v127) );
    v118 = v7;
  }
  v9 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368);
  v126 = 1024.0;
  if ( v9(a1) )
  {
    v127 = COERCE_FLOAT((*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1));
    v126 = COERCE_FLOAT((*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 576))(a1));
    v10 = (float *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v127) + 576))(COERCE_FLOAT(LODWORD(v127)));
    v120 = *v10 - *(float *)LODWORD(v126);
    v121 = v10[1] - *(float *)(LODWORD(v126) + 4);
    v122 = 0.0;
    v126 = off_10689714();
    v91 = -v121;
    v92 = v120;
    v11 = sub_10312DD0(v126, 256.0, 1024.0, 8.0, 0.0) + 0.5;
    if ( (int)v11 > 0 )
    {
      v12 = (int)v11;
      v127 = v126 + 500.0;
      v117 = v126 + 100.0;
      do
      {
        v13 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
        v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 576))(v13);
        v15 = *v14;
        v16 = v14[1];
        v17 = v14[2];
        v123 = v15;
        v124 = v16;
        v18 = *(_DWORD *)dword_106B31E4;
        v125 = v17;
        v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v18 + 4))(
                dword_106B31E4,
                LODWORD(v117),
                LODWORD(v127));
        v20 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        v123 = v120 * v19 + v123;
        v124 = v121 * v19 + v124;
        v125 = v19 * v122 + v125;
        v21 = v20(dword_106B31E4, -500.0, 500.0);
        v119 = v21;
        v22 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        v123 = v91 * v21 + v123;
        v124 = v21 * v92 + v124;
        v23 = v22(dword_106B31E4, -500.0, 500.0);
        v106 = 0;
        v125 = v23 + v119 * 0.0 + v125;
        v94 = 0.0;
        v95 = 0.0;
        v96 = 0.0;
        v97 = 0.0;
        v98 = 0.0;
        v99 = 0.0;
        v100 = 0.0;
        v101 = 0.0;
        v102 = 0.0;
        v103 = 0.0;
        v104 = 0.0;
        v105 = 0.0;
        v24 = *((_DWORD *)a1 + 6);
        v108 = 1.0;
        v112 = 0;
        v109 = 0.0;
        v107 = 0;
        v110 = 0.0;
        v111 = 0;
        v113 = 0;
        v114 = 0;
        v115 = 0;
        v116 = 0;
        v25 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v24);
        v94 = v123;
        v95 = v124;
        v107 = v25;
        v96 = v125;
        v111 = 0;
        v108 = 5.0;
        sub_1028E890((int)"TeslaZap", (int)&v94);
        --v12;
      }
      while ( v12 );
      v7 = v118;
    }
  }
  *(float *)&v26 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 8, 16));
  if ( v26 > 0 )
  {
    v127 = *(float *)&v26;
    do
    {
      if ( v7 <= 0
        || ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             0.0,
             1.0) >= 0.60000002 )
      {
        v117 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 600.0,
                 750.0);
        v119 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 0.0,
                 6.2831855);
        v30 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -1.5707964,
                1.5707964);
        v31 = *((_DWORD *)a1 + 6);
        v32 = cos(v30);
        v112 = 0;
        v106 = 0;
        v107 = 0;
        v111 = 0;
        v113 = 0;
        v114 = 0;
        v115 = 0;
        v116 = 0;
        v120 = cos(v119) * v32 * v117 + *(float *)&v87;
        v121 = v32 * sin(v119) * v117 + v88;
        v122 = sin(v30) * v117 + v89;
        v94 = 0.0;
        v95 = 0.0;
        v96 = 0.0;
        v97 = 0.0;
        v98 = 0.0;
        v99 = 0.0;
        v100 = 0.0;
        v101 = 0.0;
        v102 = 0.0;
        v103 = 0.0;
        v104 = 0.0;
        v105 = 0.0;
        v108 = 1.0;
        v109 = 0.0;
        v110 = 0.0;
        v33 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v31);
        v94 = v120;
        v95 = v121;
        v107 = v33;
        v96 = v122;
        v111 = 0;
        v108 = 5.0;
        sub_1028E890((int)"TeslaZap", (int)&v94);
      }
      else
      {
        v91 = 1.0;
        v92 = 1.0;
        v93 = 1.0;
        v118 = v7 - 1;
        v27 = v61[v7 - 1];
        sub_10111860(v27 + 320, &flt_106F1CA8, &v91, &v123);
        v94 = 0.0;
        v95 = 0.0;
        v96 = 0.0;
        v112 = 0;
        v28 = *((_DWORD *)a1 + 6);
        v97 = 0.0;
        v98 = 0.0;
        v106 = 0;
        v99 = 0.0;
        v107 = 0;
        v100 = 0.0;
        v111 = 0;
        v101 = 0.0;
        v113 = 0;
        v102 = 0.0;
        v114 = 0;
        v103 = 0.0;
        v115 = 0;
        v104 = 0.0;
        v116 = 0;
        v105 = 0.0;
        v108 = 1.0;
        v109 = 0.0;
        v110 = 0.0;
        v29 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v28);
        v94 = v123;
        v95 = v124;
        v107 = v29;
        v96 = v125;
        v111 = 0;
        v108 = 5.0;
        sub_1028E890((int)"TeslaZap", (int)&v94);
        sub_103136E0(v27);
        v7 = v118;
      }
      --LODWORD(v127);
    }
    while ( v127 != 0.0 );
  }
  v34 = 512.0;
  v35 = v126;
  if ( v126 <= 512.0 )
  {
    if ( v35 < 128.0 )
      v35 = 128.0;
    v37 = v35;
    v36 = 128.0;
    v34 = v37;
  }
  else
  {
    v36 = 128.0;
  }
  v38 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
  v39 = (v34 - v36) * 0.0026041667;
  v119 = 0.75 - (3.0 * (v39 * v39) - v39 * (v39 * v39 + v39 * v39)) * 0.75;
  v40 = v38(dword_106B31E4, 0.0, 1.0);
  if ( v40 < v119 )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1)
      && (v41 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1),
          (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v41 + 320))(v41))
      && (v42 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1),
          (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 1096))(v42)) )
    {
      v43 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368);
      v91 = 1.0;
      v92 = 1.0;
      v93 = 1.0;
      v44 = v43(a1);
      if ( v44 )
      {
        v45 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v45 + 320))(v45) )
        {
          v46 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
          v44 = (*(int (__thiscall **)(int))(*(_DWORD *)v46 + 1096))(v46);
        }
        else
        {
          v44 = 0;
        }
      }
      sub_10111860(v44 + 320, &flt_106F1CA8, &v91, &v120);
      v63 = 0.0;
      v64 = 0.0;
      v65 = 0.0;
      v81 = 0;
      v47 = *((_DWORD *)a1 + 6);
      v66 = 0.0;
      v67 = 0.0;
      v75 = 0;
      v68 = 0.0;
      v76 = 0;
      v69 = 0.0;
      v80 = 0;
      v70 = 0.0;
      v82 = 0;
      v71 = 0.0;
      v83 = 0;
      v72 = 0.0;
      v84 = 0;
      v73 = 0.0;
      v85 = 0;
      v74 = 0.0;
      v77 = 1.0;
      v78 = 0.0;
      v79 = 0.0;
      v48 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v47);
      v63 = v120;
      v64 = v121;
      v76 = v48;
      v65 = v122;
      v80 = 0;
      v77 = 5.0;
      sub_1028E890((int)"TeslaZap", (int)&v63);
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1)
        && (v49 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1),
            (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v49 + 320))(v49)) )
      {
        v50 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
        v51 = (*(int (__thiscall **)(int))(*(_DWORD *)v50 + 1096))(v50);
        sub_103136E0(v51);
      }
      else
      {
        sub_103136E0(0);
      }
    }
    else
    {
      if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1) )
        goto LABEL_40;
      v52 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368);
      v91 = 1.0;
      v92 = 1.0;
      v93 = 1.0;
      v53 = v52(a1);
      sub_10111860(v53 + 320, &flt_106F1CA8, &v91, &v120);
      sub_10313630((int)a1, 0, &v120);
    }
    sub_10248110((int)&v98, (int)a1, (int)a1, 5.0, 256, 0);
    v54 = (int *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
    sub_100D9E70(v54, (int)a1, &v98);
  }
LABEL_40:
  v55 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.30000001,
          1.0);
  v56 = v86;
  v57 = *v86;
  v127 = v55 + *(float *)(dword_106B31C8 + 12);
  if ( LODWORD(v57) != LODWORD(v127) )
  {
    v58 = v86 - 418;
    if ( *((_BYTE *)v86 - 1588) )
    {
      v59 = v127;
      *((_BYTE *)v58 + 88) |= 1u;
      *v56 = v59;
    }
    else
    {
      v60 = (int *)*((_DWORD *)v58 + 6);
      if ( v60 )
        sub_100194B0(v60, 1672);
      *v56 = v127;
    }
  }
}
