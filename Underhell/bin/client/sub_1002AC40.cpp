int __userpurge sub_1002AC40@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  _DWORD *v5; // edi
  int result; // eax
  int v7; // esi
  int (__thiscall *v8)(_DWORD *); // edx
  int v9; // eax
  double v10; // st7
  int v11; // esi
  int i; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  double v21; // st7
  float *v22; // eax
  double v23; // st7
  double v24; // st6
  double v25; // st5
  int (__thiscall *v26)(_DWORD *); // eax
  double v27; // st7
  float *v28; // eax
  double v29; // st6
  double v30; // st5
  double v31; // st7
  double v32; // rt2
  double v33; // st5
  double v34; // rtt
  double v35; // st5
  double v36; // st4
  double v37; // st0
  double v38; // st7
  int v39; // edi
  int v40; // eax
  void (__thiscall *v41)(int); // edx
  _BYTE *v42; // edi
  int v43; // eax
  double v44; // st7
  double v45; // st4
  double v46; // st5
  double v47; // st6
  double v48; // st3
  double v49; // rt1
  double v50; // st4
  double v51; // st3
  long double v52; // st1
  double v53; // st7
  char v54; // al
  int v55; // ecx
  int v56; // eax
  double v57; // st7
  int v58; // eax
  bool v59; // zf
  int v60; // esi
  int v61; // eax
  float *v63; // [esp+40h] [ebp-5DCh]
  float v64; // [esp+40h] [ebp-5DCh]
  float v66; // [esp+44h] [ebp-5D8h]
  float *v67; // [esp+44h] [ebp-5D8h]
  float *v68; // [esp+48h] [ebp-5D4h] BYREF
  int v69; // [esp+4Ch] [ebp-5D0h]
  _DWORD *v70; // [esp+50h] [ebp-5CCh]
  _BYTE *v71; // [esp+54h] [ebp-5C8h]
  float v72[21]; // [esp+450h] [ebp-1CCh] BYREF
  float v73; // [esp+4A4h] [ebp-178h]
  float v74; // [esp+4B4h] [ebp-168h]
  _BYTE v75[12]; // [esp+4BCh] [ebp-160h] BYREF
  _BYTE v76[12]; // [esp+4C8h] [ebp-154h] BYREF
  float v77; // [esp+4D4h] [ebp-148h] BYREF
  float v78; // [esp+4D8h] [ebp-144h]
  float v79; // [esp+4DCh] [ebp-140h]
  float v80; // [esp+4E0h] [ebp-13Ch] BYREF
  float v81; // [esp+4E4h] [ebp-138h]
  float v82; // [esp+4E8h] [ebp-134h]
  char v83; // [esp+4FFh] [ebp-11Dh]
  _BYTE *v84; // [esp+514h] [ebp-108h]
  float v85[3]; // [esp+524h] [ebp-F8h] BYREF
  float v86[3]; // [esp+530h] [ebp-ECh] BYREF
  float v87[3]; // [esp+53Ch] [ebp-E0h] BYREF
  float v88[3]; // [esp+548h] [ebp-D4h] BYREF
  float v89[3]; // [esp+554h] [ebp-C8h] BYREF
  float v90[3]; // [esp+560h] [ebp-BCh] BYREF
  float v91[3]; // [esp+56Ch] [ebp-B0h] BYREF
  float v92[3]; // [esp+578h] [ebp-A4h] BYREF
  _DWORD v93[3]; // [esp+584h] [ebp-98h] BYREF
  float v94[3]; // [esp+590h] [ebp-8Ch] BYREF
  float v95; // [esp+59Ch] [ebp-80h]
  float v96; // [esp+5A0h] [ebp-7Ch]
  float v97; // [esp+5A4h] [ebp-78h]
  float v98; // [esp+5A8h] [ebp-74h]
  float v99; // [esp+5ACh] [ebp-70h]
  float v100; // [esp+5B0h] [ebp-6Ch]
  int v101; // [esp+5B4h] [ebp-68h]
  float v102; // [esp+5B8h] [ebp-64h]
  float v103; // [esp+5BCh] [ebp-60h]
  float v104; // [esp+5C0h] [ebp-5Ch]
  float v105; // [esp+5C4h] [ebp-58h] BYREF
  float v106; // [esp+5C8h] [ebp-54h]
  float v107; // [esp+5CCh] [ebp-50h]
  float v108; // [esp+5D0h] [ebp-4Ch] BYREF
  float v109; // [esp+5D4h] [ebp-48h]
  float v110; // [esp+5D8h] [ebp-44h]
  int v111; // [esp+5DCh] [ebp-40h]
  float v112; // [esp+5E0h] [ebp-3Ch]
  float v113; // [esp+5E4h] [ebp-38h]
  float v114; // [esp+5E8h] [ebp-34h]
  float v115; // [esp+5ECh] [ebp-30h]
  int v116; // [esp+5F0h] [ebp-2Ch]
  _DWORD *v117; // [esp+5F4h] [ebp-28h]
  float v118; // [esp+5F8h] [ebp-24h]
  float v119; // [esp+5FCh] [ebp-20h]
  float v120; // [esp+600h] [ebp-1Ch] BYREF
  float v121; // [esp+604h] [ebp-18h]
  float v122; // [esp+608h] [ebp-14h]
  float v123; // [esp+60Ch] [ebp-10h]
  int v124; // [esp+610h] [ebp-Ch]
  void *v125; // [esp+614h] [ebp-8h]
  void *retaddr; // [esp+61Ch] [ebp+0h]

  v124 = a2;
  v125 = retaddr;
  v5 = a1;
  result = a1[307];
  v117 = a1;
  if ( !result )
    return result;
  v7 = *(_DWORD *)(result + 4080);
  if ( !v7 )
    return result;
  v101 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413184 + 68))(dword_10413184, a3, a4);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413184 + 64))(dword_10413184, 172, 0);
  sub_10034140(0);
  sub_1012D400(v5, v5[184]);
  v8 = *(int (__thiscall **)(_DWORD *))(v5[1] + 8);
  v93[0] = &CTraceFilterSkipNPCsAndPlayers::`vftable';
  v9 = v8(v5 + 1);
  sub_101EE040(v9, 0, 0, &v120);
  v10 = 3.4028235e38;
  v118 = 3.4028235e38;
  v119 = -3.4028235e38;
  if ( v7 <= 0 )
    goto LABEL_45;
  v116 = 0;
  v111 = v7;
  do
  {
    v11 = v116 + v5[307];
    if ( !sub_1001CD70((float *)v11) )
      goto LABEL_43;
    if ( *(_DWORD *)(v11 + 4) == 3 )
    {
      v22 = (float *)(*(int (__thiscall **)(_DWORD *, float *, int, _DWORD *, _BYTE *))(v5[1] + 4))(
                       v5 + 1,
                       v68,
                       v69,
                       v70,
                       v71);
      v23 = *(float *)(v11 + 96) - *v22;
      v24 = *(float *)(v11 + 100) - v22[1];
      v25 = *(float *)(v11 + 104) - v22[2];
      v26 = *(int (__thiscall **)(_DWORD *))(*v5 + 36);
      v74 = v121 * v24;
      v73 = v120 * v23 * v120;
      v98 = v23 - v73;
      v99 = v24 - v74 * v121;
      v100 = v25 - v122 * v25 * v122;
      v27 = *(float *)(v11 + 80);
      v95 = v120 * v27;
      v96 = v121 * v27;
      v97 = v27 * v122;
      v28 = (float *)v26(v5);
      v29 = v28[1] + v99;
      v30 = v98 + *v28 + v95;
      v31 = v28[2] + v100;
      v112 = v30;
      v32 = v30;
      v33 = v29 + v96;
      v113 = v33;
      v34 = v33;
      v35 = v31 + v97;
      v114 = v35;
      v87[2] = v35;
      v87[0] = v32;
      v87[1] = v34;
      v36 = *(float *)(v11 + 76);
      v108 = v120 * v36 + v32;
      v109 = v121 * v36 + v34;
      v110 = v36 * v122 + v35;
      v37 = -*(float *)(v11 + 76);
      v105 = v32 + v120 * v37;
      v106 = v34 + v121 * v37;
      v107 = v37 * v122 + v35;
      v38 = 1.0;
      if ( *(float *)(v11 + 84) > 1.0 )
        v38 = *(float *)(v11 + 84);
      v123 = v38;
      v88[0] = v38;
      v88[1] = v38;
      v88[2] = v38 + v38;
      v115 = -v38;
      v90[0] = v115;
      v90[1] = v115;
      v90[2] = 0.0;
      sub_1000E4B0(v72, &v108, &v105, v90, v88);
      v39 = *(_DWORD *)dword_104131A0;
      v71 = v76;
      v70 = v93;
      v40 = (*(int (__thiscall **)(_DWORD *))(*v117 + 492))(v117);
      v41 = *(void (__thiscall **)(int))(v39 + 16);
      v69 = v40;
      v68 = v72;
      v41(dword_104131A0);
      if ( v84 && v84[316] == 7 )
      {
        v42 = v84 + 8;
        v67 = (float *)(*(int (**)(void))(*(_DWORD *)v84 + 40))();
        v63 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v84 + 36))(v84);
        v43 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v42 + 36))(v42);
        sub_1001CA70(v11, v43, v63, v67);
      }
      else
      {
        sub_1001CAC0((_DWORD *)v11);
      }
      if ( !v83 )
        goto LABEL_51;
      v102 = v112 - *(float *)(v11 + 152);
      v103 = v113 - *(float *)(v11 + 156);
      v104 = v114 - *(float *)(v11 + 160);
      off_103EDFEC();
      v86[0] = v123;
      v86[1] = v123;
      v86[2] = 1.0;
      v85[0] = v115;
      v85[1] = v115;
      v85[2] = 0.0;
      v44 = *(float *)(v11 + 76);
      v89[0] = v112 - v102 * v44;
      v89[1] = v113 - v103 * v44;
      v89[2] = v114 - v44 * v104;
      sub_1000E4B0(v72, v89, v87, v85, v86);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
        dword_104131A0,
        v72,
        33570827,
        v93,
        v76);
      if ( v83 )
        goto LABEL_52;
      v108 = v77;
      v109 = v78;
      v110 = v79;
      v45 = -*(float *)(v11 + 76);
      v105 = v77 + v120 * v45;
      v106 = v78 + v121 * v45;
      v107 = v45 * v122 + v79;
      v92[0] = v123;
      v92[1] = v123;
      v92[2] = 1.0;
      v91[0] = v115;
      v91[1] = v115;
      v91[2] = 0.0;
      sub_1000E4B0(v72, &v108, &v105, v91, v92);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
        dword_104131A0,
        v72,
        33570827,
        v93,
        v76);
      if ( v83 )
      {
LABEL_52:
        if ( !(unsigned __int8)sub_100AF2F0(v76) )
        {
          v55 = v11;
LABEL_41:
          sub_1001CD90(v55);
          goto LABEL_43;
        }
        sub_1001CBD0((float *)v11, &v77);
        v58 = (*(int (__thiscall **)(_DWORD *))(v117[1] + 8))(v117 + 1);
        sub_1001CBF0((char *)v11, v58);
        sub_1001CD60((_BYTE *)v11, 1);
      }
      else
      {
LABEL_51:
        if ( (unsigned __int8)sub_100AF2F0(v76) )
        {
          v46 = v121;
          v47 = v120;
          v48 = v82 * v122 + v80 * v120 + v81 * v121;
          if ( v48 < 0.83200002 )
          {
            v49 = v80 - v47 * v48;
            v50 = v81 - v46 * v48;
            v51 = v82 - v48 * v122;
            v52 = sqrt(0.30777597 / (v50 * v50 + v49 * v49 + v51 * v51));
            v80 = v47 * 0.83200002 + v49 * v52;
            v81 = v50 * v52 + v46 * 0.83200002;
            v82 = v51 * v52 + 0.83200002 * v122;
          }
          sub_1001CCF0((float *)v11, &v77, (int)&v80);
          sub_1001CC10((char *)v11, &v80);
          sub_1001CD60((_BYTE *)v11, 1);
          if ( *(float *)(v11 + 72) < 0.1 )
          {
            v53 = *(float *)(v11 + 96) * v120 + v121 * *(float *)(v11 + 100) + v122 * *(float *)(v11 + 104);
            if ( v53 < v118 )
              v118 = v53;
            if ( v53 > v119 )
              v119 = v53;
          }
        }
        else
        {
          v54 = sub_100AF310(v76);
          v55 = v11;
          if ( !v54 )
            goto LABEL_41;
          sub_1001CBD0((float *)v11, &v77);
          v56 = (*(int (__thiscall **)(_DWORD *))(v117[1] + 8))(v117 + 1);
          sub_1001CBF0((char *)v11, v56);
          if ( *(float *)(v11 + 72) < 0.1 )
          {
            v57 = *(float *)(v11 + 96) * v120 + v121 * *(float *)(v11 + 100) + v122 * *(float *)(v11 + 104);
            if ( v57 < v118 )
              v118 = v57;
            if ( v57 > v119 )
              v119 = v57;
          }
        }
      }
    }
    else if ( *(_DWORD *)(v11 + 4) == 5 )
    {
      v123 = *(float *)(v11 + 84);
      sub_10076C50(v11 + 96, 64.0, 0, 128);
      for ( i = sub_10076830(&v68); i; i = sub_10076830(&v68) )
      {
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)i + 164))(i);
        if ( v13 )
        {
          v14 = v13 + 4;
          v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(v13 + 4) + 140))(v13 + 4, *(_DWORD *)(v11 + 8));
          if ( v15 > 0 )
          {
            (*(void (__thiscall **)(int, int, float *, _BYTE *))(*(_DWORD *)v14 + 148))(v14, v15, v94, v75);
            v16 = *(float *)(v11 + 100) - v94[1];
            v17 = v16 * v16;
            v18 = *(float *)(v11 + 96) - v94[0];
            v19 = v17;
            v20 = *(float *)(v11 + 104) - v94[2];
            v66 = v18 * v18 + v19 + v20 * v20;
            v21 = off_103EDFE0(v66);
            if ( v123 > v21 )
            {
              v123 = v21;
              sub_1001CBD0((float *)v11, v94);
              sub_1001CBF0((char *)v11, (int)v75);
            }
          }
        }
        v68 = (float *)((char *)v68 + 1);
      }
      if ( *(float *)(v11 + 84) <= (double)v123 )
        sub_1001CD90(v11);
    }
LABEL_43:
    v116 += 340;
    v59 = v111-- == 1;
    v5 = v117;
  }
  while ( !v59 );
  v10 = v118;
LABEL_45:
  if ( *((_DWORD *)off_103DC81C + 5) == 1 && v10 < 3.4028235e38 )
  {
    v60 = *off_103ED0D8;
    v64 = v10;
    v61 = (*(int (__thiscall **)(_DWORD *, _DWORD, float))(v5[2] + 36))(
            v5 + 2,
            LODWORD(v64),
            COERCE_FLOAT(LODWORD(v119)));
    (*(void (__thiscall **)(int *, int))(v60 + 180))(off_103ED0D8, v61);
  }
  sub_10034180();
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413184 + 64))(dword_10413184, v101, 1);
}
