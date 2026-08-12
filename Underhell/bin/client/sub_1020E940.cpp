void __thiscall sub_1020E940(int this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  bool v7; // zf
  double v8; // st7
  float *v9; // ebp
  int v10; // esi
  int v11; // edx
  float *v12; // esi
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // rt2
  double v18; // st7
  double v19; // st2
  double v20; // st6
  double v21; // st5
  double v22; // st6
  double v23; // st5
  double v24; // st4
  double v25; // rtt
  double v26; // st4
  double v27; // st6
  double v28; // st6
  double v29; // st5
  double v30; // st4
  double v31; // st3
  double v32; // st5
  double v33; // st7
  double v34; // st6
  double v35; // st4
  float *v36; // eax
  int v37; // ebp
  int v38; // eax
  float *v39; // esi
  double v40; // st6
  double v41; // st7
  double v42; // st5
  float *v43; // esi
  double v44; // st7
  double v45; // st5
  double v46; // st7
  double v47; // st7
  double v48; // st2
  double v49; // st6
  double v50; // st5
  double v51; // st6
  double v52; // st5
  double v53; // st4
  double v54; // rtt
  double v55; // st4
  double v56; // st6
  double v57; // st6
  double v58; // st7
  double v59; // st5
  double v60; // st4
  double v61; // st1
  double v62; // st6
  double v63; // st2
  double v64; // st3
  double v65; // rtt
  double v66; // st2
  double v67; // st5
  double v68; // st3
  double v69; // st4
  double v70; // st6
  _DWORD *i; // esi
  int v72; // eax
  double v73; // rtt
  double v74; // st5
  double v75; // rt0
  int v76; // ecx
  float *v77; // edx
  float *v78; // esi
  double v79; // st4
  int v80; // [esp+18h] [ebp-CCh] BYREF
  float v81; // [esp+1Ch] [ebp-C8h]
  float v82; // [esp+20h] [ebp-C4h]
  float v83; // [esp+24h] [ebp-C0h]
  int v84; // [esp+28h] [ebp-BCh]
  float v85; // [esp+2Ch] [ebp-B8h] BYREF
  int v86; // [esp+30h] [ebp-B4h]
  int v87; // [esp+34h] [ebp-B0h]
  float v88; // [esp+38h] [ebp-ACh] BYREF
  float v89; // [esp+3Ch] [ebp-A8h]
  float v90; // [esp+40h] [ebp-A4h]
  int v91; // [esp+44h] [ebp-A0h]
  float *v92; // [esp+48h] [ebp-9Ch]
  int v93[3]; // [esp+4Ch] [ebp-98h] BYREF
  int v94[5]; // [esp+58h] [ebp-8Ch] BYREF
  float v95[16]; // [esp+6Ch] [ebp-78h] BYREF
  _BYTE v96[44]; // [esp+ACh] [ebp-38h] BYREF
  float v97; // [esp+D8h] [ebp-Ch]

  *(float *)&v94[3] = 1.0;
  *(float *)&v94[4] = 0.0;
  v95[0] = 0.0;
  v7 = *(_BYTE *)(this + 208) == 0;
  v95[1] = -1.0;
  v95[8] = -1.0;
  v95[15] = -1.0;
  v95[2] = 0.0;
  v95[3] = 0.0;
  v95[4] = 0.0;
  v95[6] = 0.0;
  v95[7] = 0.0;
  v95[9] = 0.0;
  v95[10] = 0.0;
  v95[11] = 0.0;
  v95[13] = 0.0;
  v95[14] = 0.0;
  v8 = 0.0;
  v95[5] = 1.0;
  v95[12] = 1.0;
  if ( v7 )
  {
    v37 = a3;
    v38 = a2[1589] * (a3 / 4);
    if ( *(_BYTE *)(this + 217) )
    {
      v39 = (float *)(a2[1525] + 4 * ((a3 & 3) + v38));
      sub_101F8ED0((int)a2, *(_DWORD *)(this + 204), *v39, (float *)&v80);
      sub_101F8ED0((int)a2, *(_DWORD *)(this + 204) + 1, *v39, (float *)v93);
      v40 = ((*(float *)(this + 188) - *(float *)(this + 176)) * *(float *)v93 + *(float *)(this + 176))
          * *(float *)&v80;
      v41 = ((*(float *)(this + 192) - *(float *)(this + 180)) * *(float *)v93 + *(float *)(this + 180)) * v81;
      v42 = (*(float *)v93 * (*(float *)(this + 196) - *(float *)(this + 184)) + *(float *)(this + 184)) * v82;
    }
    else
    {
      sub_101F8ED0((int)a2, *(_DWORD *)(this + 204), *(float *)(a2[1525] + 4 * ((a3 & 3) + v38)), (float *)v94);
      *(float *)&v80 = 0.0;
      v81 = 0.0;
      v82 = 0.0;
      v83 = 0.0;
      v85 = *(float *)v94;
      v86 = v94[1];
      v87 = v94[2];
      v43 = v95;
      v84 = 6;
      do
      {
        v44 = *(float *)(this + 212);
        v45 = *(v43 - 1) * v44;
        v46 = v44 * *v43;
        v88 = *(float *)(this + 212) * *(v43 - 2) + v85;
        v89 = v45 + *(float *)&v86;
        v90 = v46 + *(float *)&v87;
        (*(void (__thiscall **)(_DWORD, float *, float *, int, _DWORD, _DWORD, _BYTE *))(**((_DWORD **)off_103EE614 + 60)
                                                                                       + 24))(
          *((_DWORD *)off_103EE614 + 60),
          &v85,
          &v88,
          1,
          0,
          *(_DWORD *)(this + 172),
          v96);
        v47 = -*(v43 - 2);
        v43 += 3;
        v7 = v84-- == 1;
        v48 = 1.0 - v97;
        v49 = -*(v43 - 4) * v48;
        v50 = -*(v43 - 3) * v48;
        *(v43 - 5) = v47 * v48;
        *(v43 - 4) = v49;
        *(v43 - 3) = v50;
        v83 = v48 + v83;
        v51 = *(float *)&v80 + *(v43 - 5);
        *(float *)&v80 = v51;
        v52 = *(v43 - 4) + v81;
        v81 = v52;
        v53 = *(v43 - 3) + v82;
        v82 = v53;
      }
      while ( !v7 );
      v54 = v53;
      v55 = v51;
      v56 = v54;
      if ( v55 == flt_10459240 && v52 == *(float *)&qword_10459244 && v56 == *((float *)&qword_10459244 + 1) )
      {
        *(float *)&v80 = 0.0;
        v81 = 0.0;
        v83 = 0.0;
        v82 = 1.0;
      }
      off_103EDFEC((float *)&v80);
      v7 = *(_DWORD *)(this + 220) == -1;
      v57 = *(float *)&v80 * v83;
      v58 = v83;
      *(float *)&v80 = v57;
      v59 = v81 * v83;
      v81 = v59;
      v60 = v82 * v83;
      v82 = v60;
      v61 = v57;
      v62 = (*(float *)(this + 196) - *(float *)(this + 184)) * v83 + *(float *)(this + 184);
      v63 = ((*(float *)(this + 188) - *(float *)(this + 176)) * v83 + *(float *)(this + 176)) * v61;
      v64 = (*(float *)(this + 192) - *(float *)(this + 180)) * v83 + *(float *)(this + 180);
      v88 = v63;
      v65 = v63;
      v66 = v59;
      v67 = v65;
      v68 = v64 * v66;
      v89 = v68;
      v69 = v62 * v60;
      v70 = v68;
      v90 = v69;
      if ( !v7 )
      {
        for ( i = (_DWORD *)a2[1502]; i; i = (_DWORD *)i[1495] )
        {
          if ( *(_DWORD *)(i[16] + 492) == *(_DWORD *)(this + 224) )
          {
            v72 = *(_DWORD *)(this + 220);
            *(float *)v93 = v58;
            *(float *)&v93[1] = 0.0;
            *(float *)&v93[2] = 0.0;
            sub_100F16D0(i, v72, (float *)&v80);
            sub_100F16D0(i, *(_DWORD *)(this + 220) + 1, (float *)v93);
            v70 = v89;
            v67 = v88;
            v69 = v90;
            v58 = v83;
          }
        }
      }
      v73 = v67;
      v74 = v70;
      v40 = v73;
      v75 = v74;
      v42 = v69;
      v41 = v75;
    }
    for ( ; a4; ++a3 )
    {
      --a4;
      v76 = v37 & 3;
      v77 = (float *)(a2[1517] + 4 * (v76 + v37 / 4 * a2[1581]));
      v78 = (float *)(a2[1519] + 4 * (v76 + v37 / 4 * a2[1583]));
      if ( *(_BYTE *)(this + 210) )
      {
        v79 = *(float *)(a2[1520] + 4 * (v76 + v37 / 4 * a2[1584]));
        v40 = v40 * v79;
        v41 = v41 * v79;
        v42 = v42 * v79;
      }
      *v77 = *v77 + v40;
      v77[4] = v77[4] + v41;
      v77[8] = v77[8] + v42;
      if ( *(_BYTE *)(this + 209) )
      {
        *v78 = *v78 + v40;
        v78[4] = v41 + v78[4];
        v78[8] = v42 + v78[8];
      }
      v37 = a3 + 1;
    }
  }
  else if ( a4 )
  {
    while ( 1 )
    {
      v9 = (float *)(a2[1517] + 4 * ((a3 & 3) + a3 / 4 * a2[1581]));
      v10 = a2[1519];
      v11 = a3 / 4 * a2[1583];
      v85 = *v9;
      v86 = *((int *)v9 + 4);
      v87 = *((int *)v9 + 8);
      *(float *)&v80 = v8;
      v81 = v8;
      v82 = v8;
      --a4;
      v83 = v8;
      v92 = (float *)(v10 + 4 * ((a3 & 3) + v11));
      v84 = a2[1520] + 4 * ((a3 & 3) + a3 / 4 * a2[1584]);
      v12 = v95;
      v91 = 6;
      do
      {
        v13 = *(float *)(this + 212);
        if ( *(_BYTE *)(this + 216) )
          v13 = *(float *)v84;
        v14 = *(v12 - 2) * v13;
        v15 = v13;
        v16 = v13 * *(v12 - 1);
        v17 = v15 * *v12;
        v88 = v14 + v85;
        v89 = v16 + *(float *)&v86;
        v90 = v17 + *(float *)&v87;
        (*(void (__thiscall **)(_DWORD, float *, float *, int, _DWORD, _DWORD, _BYTE *))(**((_DWORD **)off_103EE614 + 60)
                                                                                       + 24))(
          *((_DWORD *)off_103EE614 + 60),
          &v85,
          &v88,
          1,
          0,
          *(_DWORD *)(this + 172),
          v96);
        v18 = -*(v12 - 2);
        v12 += 3;
        v7 = v91-- == 1;
        v19 = 1.0 - v97;
        v20 = -*(v12 - 4) * v19;
        v21 = -*(v12 - 3) * v19;
        *(v12 - 5) = v18 * v19;
        *(v12 - 4) = v20;
        *(v12 - 3) = v21;
        v83 = v19 + v83;
        v22 = *(v12 - 5) + *(float *)&v80;
        *(float *)&v80 = v22;
        v23 = v81 + *(v12 - 4);
        v81 = v23;
        v24 = v82 + *(v12 - 3);
        v82 = v24;
      }
      while ( !v7 );
      v25 = v24;
      v26 = v22;
      v27 = v25;
      if ( v26 == flt_10459240 && v23 == *(float *)&qword_10459244 && v27 == *((float *)&qword_10459244 + 1) )
      {
        *(float *)&v80 = 0.0;
        v81 = 0.0;
        v83 = 0.0;
        v82 = 1.0;
      }
      off_103EDFEC((float *)&v80);
      v7 = *(_BYTE *)(this + 210) == 0;
      v28 = *(float *)&v80 * v83;
      *(float *)&v80 = v28;
      v29 = v81 * v83;
      v81 = v29;
      v30 = v82 * v83;
      v82 = v30;
      v31 = v29;
      v32 = ((*(float *)(this + 188) - *(float *)(this + 176)) * v83 + *(float *)(this + 176)) * v28;
      v33 = ((*(float *)(this + 192) - *(float *)(this + 180)) * v83 + *(float *)(this + 180)) * v31;
      v34 = (v83 * (*(float *)(this + 196) - *(float *)(this + 184)) + *(float *)(this + 184)) * v30;
      if ( !v7 )
      {
        v35 = *(float *)v84;
        v32 = v32 * v35;
        v33 = v33 * v35;
        v34 = v34 * v35;
      }
      *v9 = *v9 + v32;
      v9[4] = v33 + v9[4];
      v9[8] = v9[8] + v34;
      if ( *(_BYTE *)(this + 209) )
      {
        v36 = v92;
        *v92 = v32 + *v92;
        v36[4] = v33 + v36[4];
        v36[8] = v34 + v36[8];
      }
      ++a3;
      if ( !a4 )
        break;
      v8 = 0.0;
    }
  }
}
