void __cdecl sub_101BF8D0(int a1, int *a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  float *v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // edi
  int v11; // eax
  float *v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // edi
  int v16; // eax
  float *v17; // eax
  double v18; // st7
  int v19; // eax
  int v20; // edi
  int v21; // eax
  float *v22; // eax
  double v23; // st4
  double v24; // st2
  double v25; // st1
  double v26; // st2
  double v27; // rt0
  double v28; // st4
  double v29; // st1
  double v30; // rtt
  double v31; // st1
  double v32; // rt0
  double v33; // st5
  double v34; // st6
  double v35; // st2
  double v36; // st3
  double v37; // st1
  int v38; // edx
  double v39; // rt1
  double v40; // st1
  double v41; // rt2
  int (__thiscall *v42)(int *); // eax
  double v43; // rtt
  double v44; // st2
  double v45; // st1
  double v46; // st7
  double v47; // st6
  double v48; // st6
  int v49; // eax
  float *v50; // esi
  float *v51; // eax
  double v52; // st7
  double v53; // st6
  double v54; // st5
  double v55; // st6
  double v56; // st5
  double v57; // st7
  float v58; // [esp+80h] [ebp-11Ch]
  float v59; // [esp+84h] [ebp-118h]
  float v60[3]; // [esp+94h] [ebp-108h] BYREF
  float v61; // [esp+A0h] [ebp-FCh] BYREF
  float v62; // [esp+A4h] [ebp-F8h] BYREF
  float v63; // [esp+A8h] [ebp-F4h]
  float v64; // [esp+ACh] [ebp-F0h]
  float v65; // [esp+B0h] [ebp-ECh]
  float v66; // [esp+B4h] [ebp-E8h]
  float v67; // [esp+B8h] [ebp-E4h]
  float v68; // [esp+BCh] [ebp-E0h]
  float v69; // [esp+C0h] [ebp-DCh]
  float v70; // [esp+C4h] [ebp-D8h]
  float v71[3]; // [esp+C8h] [ebp-D4h] BYREF
  int v72; // [esp+D4h] [ebp-C8h]
  int v73; // [esp+D8h] [ebp-C4h]
  float v74; // [esp+DCh] [ebp-C0h]
  float v75; // [esp+E0h] [ebp-BCh]
  float v76; // [esp+E4h] [ebp-B8h]
  int v77; // [esp+E8h] [ebp-B4h]
  __int16 v78; // [esp+ECh] [ebp-B0h]
  int v79; // [esp+F0h] [ebp-ACh]
  int v80; // [esp+F4h] [ebp-A8h]
  int v81; // [esp+F8h] [ebp-A4h]
  char v82; // [esp+FCh] [ebp-A0h]
  float v83; // [esp+104h] [ebp-98h]
  float v84; // [esp+108h] [ebp-94h]
  float v85[4]; // [esp+10Ch] [ebp-90h] BYREF
  float v86; // [esp+11Ch] [ebp-80h]
  float v87; // [esp+120h] [ebp-7Ch]
  float v88; // [esp+124h] [ebp-78h]
  float v89; // [esp+128h] [ebp-74h]
  float v90; // [esp+12Ch] [ebp-70h]
  float v91; // [esp+130h] [ebp-6Ch]
  float v92; // [esp+134h] [ebp-68h] BYREF
  float v93; // [esp+138h] [ebp-64h]
  float v94; // [esp+13Ch] [ebp-60h]
  float v95; // [esp+140h] [ebp-5Ch]
  float v96; // [esp+144h] [ebp-58h]
  float v97; // [esp+148h] [ebp-54h]
  float v98; // [esp+14Ch] [ebp-50h]
  float v99; // [esp+150h] [ebp-4Ch]
  float v100; // [esp+154h] [ebp-48h]
  float v101; // [esp+158h] [ebp-44h]
  float v102; // [esp+15Ch] [ebp-40h]
  float v103; // [esp+160h] [ebp-3Ch] BYREF
  float v104; // [esp+164h] [ebp-38h]
  float v105; // [esp+168h] [ebp-34h]
  float v106; // [esp+16Ch] [ebp-30h] BYREF
  float v107; // [esp+170h] [ebp-2Ch]
  float v108; // [esp+174h] [ebp-28h]
  float v109; // [esp+178h] [ebp-24h] BYREF
  float v110; // [esp+17Ch] [ebp-20h]
  float v111; // [esp+180h] [ebp-1Ch]
  float v112; // [esp+184h] [ebp-18h] BYREF
  float v113; // [esp+188h] [ebp-14h]
  float v114; // [esp+18Ch] [ebp-10h]
  int v115; // [esp+190h] [ebp-Ch] BYREF
  float v116; // [esp+194h] [ebp-8h]
  float v117; // [esp+198h] [ebp-4h]
  float v118; // [esp+1A4h] [ebp+8h]
  float v119; // [esp+1A4h] [ebp+8h]
  float v120; // [esp+1A4h] [ebp+8h]
  char v121; // [esp+1A7h] [ebp+Bh]
  float v122; // [esp+1A8h] [ebp+Ch]
  int v123; // [esp+1A8h] [ebp+Ch]
  float v124; // [esp+1ACh] [ebp+10h]
  float v125; // [esp+1ACh] [ebp+10h]
  float v126; // [esp+1ACh] [ebp+10h]
  float v127; // [esp+1ACh] [ebp+10h]

  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a1 + 12))(a1, &v112, &v61);
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v4 = sub_101BF870(&v112, a3 + 500);
  sub_10421CE0(a3 + 500, (v4 + 1) % 3, &v103);
  v109 = v113 * v105 - v114 * v104;
  v110 = v114 * v103 - v105 * v112;
  v111 = v112 * v104 - v103 * v113;
  off_10689714();
  v103 = v110 * v114 - v111 * v113;
  v104 = v111 * v112 - v114 * v109;
  v105 = v109 * v113 - v112 * v110;
  off_10689714();
  *(float *)&v115 = -v103;
  v116 = -v104;
  v117 = -v105;
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v5 = *(_DWORD *)dword_106BAFF0;
  v6 = (*(int (__thiscall **)(int *, int, int, int *))(*a2 + 292))(a2, a3 + 580, a3 + 704, &v115);
  v7 = (float *)(*(int (__thiscall **)(int, float *, int))(v5 + 88))(dword_106BAFF0, &v106, v6);
  v95 = *v7;
  v96 = v7[1];
  v8 = v7[2];
  v9 = *(_DWORD *)(a3 + 252) >> 11;
  v97 = v8;
  if ( (v9 & 1) != 0 )
    sub_100DAE60(a3);
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v10 = *(_DWORD *)dword_106BAFF0;
  v11 = (*(int (__thiscall **)(int *, int, int, float *))(*a2 + 292))(a2, a3 + 580, a3 + 704, &v103);
  v12 = (float *)(*(int (__thiscall **)(int, int *, int))(v10 + 88))(dword_106BAFF0, &v115, v11);
  v98 = *v12;
  v99 = v12[1];
  v13 = v12[2];
  v14 = *(_DWORD *)(a3 + 252);
  v100 = v13;
  *(float *)&v115 = -v109;
  v116 = -v110;
  v117 = -v111;
  if ( (v14 & 0x800) != 0 )
    sub_100DAE60(a3);
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v15 = *(_DWORD *)dword_106BAFF0;
  v16 = (*(int (__thiscall **)(int *, int, int, int *))(*a2 + 292))(a2, a3 + 580, a3 + 704, &v115);
  v17 = (float *)(*(int (__thiscall **)(int, float *, int))(v15 + 88))(dword_106BAFF0, &v106, v16);
  v86 = *v17;
  v87 = v17[1];
  v18 = v17[2];
  v19 = *(_DWORD *)(a3 + 252) >> 11;
  v88 = v18;
  if ( (v19 & 1) != 0 )
    sub_100DAE60(a3);
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v20 = *(_DWORD *)dword_106BAFF0;
  v21 = (*(int (__thiscall **)(int *, int, int, float *))(*a2 + 292))(a2, a3 + 580, a3 + 704, &v109);
  v22 = (float *)(*(int (__thiscall **)(int, int *, int))(v20 + 88))(dword_106BAFF0, &v115, v21);
  v89 = *v22;
  v90 = v22[1];
  v91 = v22[2];
  v101 = v97 * v105 + v96 * v104 + v95 * v103;
  v23 = v98 * v103 + v99 * v104 + v100 * v105;
  v102 = v86 * v109 + v87 * v110 + v88 * v111;
  v24 = v89 * v109 + v90 * v110 + v91 * v111;
  v100 = v24;
  v25 = v24;
  v26 = (v23 + v101) * 0.5;
  v27 = (v25 + v102) * 0.5;
  v118 = v23 - v26;
  v101 = v118;
  v124 = v100 - v27;
  v102 = v124;
  v98 = v112 * v61;
  v99 = v113 * v61;
  v100 = v61 * v114;
  v107 = v110 * v27;
  *(float *)&v115 = v103 * v26;
  v116 = v104 * v26;
  v28 = v27 * v111 + v26 * v105;
  v29 = v109 * v27 + *(float *)&v115 + v98;
  v92 = v29;
  v30 = v29;
  v31 = v116 + v107 + v99;
  v93 = v31;
  v32 = v31;
  v94 = v28 + v100;
  *(float *)&v115 = v103 * v118;
  v33 = v104 * v118;
  v117 = v118 * v105;
  v34 = v109 * v124;
  v35 = v110 * v124;
  v36 = v124 * v111;
  v119 = v30 - *(float *)&v115;
  v98 = v119;
  v125 = v31 - v33;
  v99 = v125;
  v37 = v94 - v117;
  v100 = v37;
  v106 = v119 - v34;
  v107 = v125 - v35;
  v108 = v100 - v36;
  v83 = v106;
  v84 = v107;
  v85[0] = v108;
  v38 = *a2;
  v39 = v37;
  v40 = v30 + *(float *)&v115;
  v78 = 0;
  v106 = v40;
  v82 = 0;
  v41 = v40;
  v42 = *(int (__thiscall **)(int *))(v38 + 76);
  v43 = v35;
  v44 = v32 + v33;
  v72 = 0;
  v73 = 0;
  v107 = v44;
  v77 = 0;
  v79 = 0;
  v45 = v117 + v94;
  v80 = 0;
  v81 = 0;
  v108 = v45;
  *(float *)&v115 = v106 - v34;
  v116 = v107 - v43;
  v117 = v108 - v36;
  v85[1] = *(float *)&v115;
  v85[2] = v116;
  v85[3] = v117;
  v86 = v41 + v34;
  v87 = v44 + v43;
  v88 = v45 + v36;
  v89 = v34 + v119;
  v90 = v43 + v125;
  v91 = v36 + v39;
  v62 = 0.0;
  v63 = 0.0;
  v64 = 0.0;
  v65 = 0.0;
  v66 = 0.0;
  v67 = 0.0;
  v68 = 0.0;
  v69 = 0.0;
  v70 = 0.0;
  v71[0] = 0.0;
  v71[1] = 0.0;
  v71[2] = 0.0;
  v74 = 1.0;
  v75 = 0.0;
  v76 = 0.0;
  if ( (v42(a2) & 8) == 0 )
  {
    (*(void (__thiscall **)(int *, float *, _DWORD))(*a2 + 204))(a2, v60, 0);
    v120 = -(v60[0] * v112 + v60[1] * v113 + v60[2] * v114);
    v46 = ((double (__thiscall *)(int *))*(_DWORD *)(*a2 + 116))(a2);
    v47 = v46 * (v120 * v120 * v101 * v102 * 0.0000004) * 0.0099999998;
    v126 = v47;
    if ( v47 <= 50.0 )
    {
      if ( v47 < 0.0 )
      {
        v47 = 0.0;
        v126 = 0.0;
      }
    }
    else
    {
      v47 = 50.0;
      v126 = 50.0;
    }
    v59 = v47;
    v58 = v120;
    v121 = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int, float *, float *, _DWORD, _DWORD))(*(_DWORD *)a3 + 568))(
            a3,
            &v92,
            &v112,
            LODWORD(v58),
            LODWORD(v59)) )
    {
      v48 = v126;
      if ( v126 <= 0.34999999 )
      {
        if ( v48 <= 0.1 )
          return;
        v121 = 1;
      }
      v72 = 0;
      v127 = (v48 - 0.34999999) * 10.0 * 0.020140987 + 8.0;
      v122 = v102 * v101;
      v62 = v92;
      v63 = v93;
      v64 = v94;
      v68 = v112;
      v69 = v113;
      v70 = v114;
      sub_10422540(&v112, v71);
      v74 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.0,
              2.0)
          + v127;
      if ( (sub_100E87E0((_BYTE *)a3) & 0x10) != 0 )
        v72 |= 1u;
      if ( v121 )
        sub_1028E890("waterripple", &v62);
      else
        sub_1028E890("watersplash", &v62);
      if ( v122 > 500.0 )
      {
        v49 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 4);
        if ( v49 > 0 )
        {
          v50 = v85;
          v123 = v49;
          do
          {
            v51 = sub_1001F010((float *)&v115, -4.0, 4.0);
            v52 = *v51;
            v53 = v51[1];
            v54 = *(v50 - 2);
            v72 = 0;
            v55 = v53 + *(v50 - 1);
            v56 = v52 + v54;
            v57 = *v50;
            v62 = v56;
            v63 = v55;
            v64 = v57;
            v68 = v112;
            v69 = v113;
            v70 = v114;
            sub_10422540(&v112, v71);
            v74 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    -3.0,
                    1.0)
                + v127;
            if ( (sub_100E87E0((_BYTE *)a3) & 0x10) != 0 )
              v72 |= 1u;
            if ( v121 )
              sub_1028E890("waterripple", &v62);
            else
              sub_1028E890("watersplash", &v62);
            v50 += 3;
            --v123;
          }
          while ( v123 );
        }
      }
    }
  }
}
