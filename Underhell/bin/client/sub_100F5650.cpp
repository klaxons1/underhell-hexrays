void __cdecl sub_100F5650(int a1, float a2, int a3)
{
  float v3; // ebx
  double v4; // st7
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float *v11; // eax
  int v12; // edx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  float *v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  float *v22; // eax
  int v23; // edx
  int v24; // edi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  float *v28; // eax
  double v29; // st4
  double v30; // st2
  double v31; // rt0
  double v32; // st2
  double v33; // st4
  double v34; // st1
  double v35; // st0
  double v36; // rtt
  double v37; // st1
  double v38; // st4
  double v39; // st5
  double v40; // st3
  double v41; // st4
  double v42; // st1
  char v43; // al
  double v44; // st7
  bool v45; // bl
  float *v46; // esi
  int v47; // edi
  float v48; // [esp+78h] [ebp-F8h]
  float v49; // [esp+80h] [ebp-F0h]
  float v50; // [esp+84h] [ebp-ECh]
  float v51; // [esp+84h] [ebp-ECh]
  float v52; // [esp+84h] [ebp-ECh]
  float v53; // [esp+88h] [ebp-E8h]
  float v54; // [esp+8Ch] [ebp-E4h]
  float v55[3]; // [esp+94h] [ebp-DCh] BYREF
  float v56; // [esp+A0h] [ebp-D0h] BYREF
  float v57; // [esp+A4h] [ebp-CCh]
  float v58; // [esp+A8h] [ebp-C8h]
  float v59; // [esp+ACh] [ebp-C4h]
  float v60; // [esp+B0h] [ebp-C0h]
  float v61; // [esp+B4h] [ebp-BCh] BYREF
  float v62; // [esp+B8h] [ebp-B8h] BYREF
  __int64 v63; // [esp+BCh] [ebp-B4h]
  float v64; // [esp+C4h] [ebp-ACh]
  int v65; // [esp+C8h] [ebp-A8h]
  float v66; // [esp+CCh] [ebp-A4h]
  float v67[4]; // [esp+D0h] [ebp-A0h] BYREF
  float v68; // [esp+E0h] [ebp-90h]
  float v69; // [esp+E4h] [ebp-8Ch]
  float v70; // [esp+E8h] [ebp-88h]
  float v71; // [esp+ECh] [ebp-84h]
  float v72; // [esp+F0h] [ebp-80h]
  float v73; // [esp+F4h] [ebp-7Ch]
  float v74; // [esp+F8h] [ebp-78h]
  float v75; // [esp+FCh] [ebp-74h]
  float v76; // [esp+100h] [ebp-70h]
  float v77; // [esp+104h] [ebp-6Ch]
  float v78; // [esp+108h] [ebp-68h]
  float v79; // [esp+10Ch] [ebp-64h]
  float v80; // [esp+110h] [ebp-60h]
  float v81; // [esp+114h] [ebp-5Ch]
  float v82; // [esp+118h] [ebp-58h]
  int v83; // [esp+11Ch] [ebp-54h] BYREF
  float v84; // [esp+120h] [ebp-50h]
  float v85; // [esp+124h] [ebp-4Ch]
  float v86; // [esp+128h] [ebp-48h] BYREF
  float v87; // [esp+12Ch] [ebp-44h]
  float v88; // [esp+130h] [ebp-40h]
  float v89; // [esp+134h] [ebp-3Ch]
  float v90; // [esp+138h] [ebp-38h]
  int v91; // [esp+13Ch] [ebp-34h]
  int v92; // [esp+140h] [ebp-30h] BYREF
  float v93; // [esp+144h] [ebp-2Ch]
  float v94; // [esp+148h] [ebp-28h]
  float v95; // [esp+14Ch] [ebp-24h] BYREF
  float v96; // [esp+150h] [ebp-20h]
  float v97; // [esp+154h] [ebp-1Ch]
  float v98; // [esp+158h] [ebp-18h] BYREF
  float v99; // [esp+15Ch] [ebp-14h]
  float v100; // [esp+160h] [ebp-10h]
  int v101; // [esp+164h] [ebp-Ch] BYREF
  float v102; // [esp+168h] [ebp-8h]
  float v103; // [esp+16Ch] [ebp-4h]
  int savedregs; // [esp+170h] [ebp+0h] BYREF

  v3 = a2;
  if ( ((*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(a2) + 76))(COERCE_FLOAT(LODWORD(a2))) & 8) != 0 )
  {
    (*(void (__thiscall **)(float, float *, _DWORD))(*(_DWORD *)LODWORD(v3) + 204))(COERCE_FLOAT(LODWORD(v3)), &v56, 0);
    v50 = v56 * v56 + v57 * v57 + v58 * v58;
    v4 = off_103EDFE0(v50);
    v76 = v4;
    if ( v4 >= 25.0 )
    {
      (*(void (__thiscall **)(int, int *, float *))(*(_DWORD *)a1 + 12))(a1, &v92, &v61);
      v5 = a3;
      sub_10037F50(a3);
      v6 = sub_100F55F0((float *)&v92, v5 + 660);
      sub_101EDA00(v5 + 660, (v6 + 1) % 3, &v86);
      v95 = v93 * v88 - v87 * v94;
      v96 = v94 * v86 - v88 * *(float *)&v92;
      v97 = *(float *)&v92 * v87 - v86 * v93;
      off_103EDFEC();
      v86 = v96 * v94 - v97 * v93;
      v87 = v97 * *(float *)&v92 - v94 * v95;
      v88 = v95 * v93 - *(float *)&v92 * v96;
      off_103EDFEC();
      *(float *)&v101 = -v86;
      v102 = -v87;
      v103 = -v88;
      v7 = *(_DWORD *)dword_10436250;
      v8 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 40))(v5, &v101);
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 36))(v5, v8);
      v10 = (*(int (__thiscall **)(float, int))(*(_DWORD *)LODWORD(v3) + 292))(COERCE_FLOAT(LODWORD(v3)), v9);
      v11 = (float *)(*(int (__thiscall **)(int, float *, int))(v7 + 88))(dword_10436250, &v98, v10);
      v12 = *(_DWORD *)v5;
      v77 = *v11;
      v78 = v11[1];
      v13 = *(_DWORD *)dword_10436250;
      v79 = v11[2];
      v14 = (*(int (__thiscall **)(int, float *))(v12 + 40))(v5, &v86);
      v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 36))(v5, v14);
      v16 = (*(int (__thiscall **)(float, int))(*(_DWORD *)LODWORD(v3) + 292))(COERCE_FLOAT(LODWORD(v3)), v15);
      v17 = (float *)(*(int (__thiscall **)(int, int *, int))(v13 + 88))(dword_10436250, &v101, v16);
      v80 = *v17;
      v81 = v17[1];
      v82 = v17[2];
      *(float *)&v101 = -v95;
      v102 = -v96;
      v103 = -v97;
      v18 = *(_DWORD *)dword_10436250;
      v19 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 40))(v5, &v101);
      v20 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 36))(v5, v19);
      v21 = (*(int (__thiscall **)(float, int))(*(_DWORD *)LODWORD(v3) + 292))(COERCE_FLOAT(LODWORD(v3)), v20);
      v22 = (float *)(*(int (__thiscall **)(int, float *, int))(v18 + 88))(dword_10436250, &v98, v21);
      v23 = *(_DWORD *)v5;
      v68 = *v22;
      v69 = v22[1];
      v24 = *(_DWORD *)dword_10436250;
      v70 = v22[2];
      v25 = (*(int (__thiscall **)(int, float *))(v23 + 40))(v5, &v95);
      v26 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 36))(v5, v25);
      v27 = (*(int (__thiscall **)(float, int))(*(_DWORD *)LODWORD(v3) + 292))(COERCE_FLOAT(LODWORD(v3)), v26);
      v28 = (float *)(*(int (__thiscall **)(int, int *, int))(v24 + 88))(dword_10436250, &v101, v27);
      v71 = *v28;
      v72 = v28[1];
      v73 = v28[2];
      v90 = v79 * v88 + v78 * v87 + v77 * v86;
      v29 = v81 * v87 + v80 * v86 + v82 * v88;
      v74 = v29;
      *(float *)&v91 = v70 * v97 + v68 * v95 + v69 * v96;
      v30 = v97 * v73 + v72 * v96 + v71 * v95;
      v75 = v30;
      v31 = v30;
      v32 = (v29 + v90) * 0.5;
      v33 = 0.5 * (v31 + *(float *)&v91);
      v98 = *(float *)&v92 * v61;
      v99 = v93 * v61;
      v100 = v61 * v94;
      v102 = v96 * v33;
      v103 = v97 * v33;
      v80 = v86 * v32;
      v81 = v87 * v32;
      v82 = v88 * v32;
      v89 = v95 * v33 + v80;
      v90 = v81 + v102;
      *(float *)&v91 = v82 + v103;
      *(float *)&v83 = v89 + v98;
      v84 = v90 + v99;
      v34 = *(float *)&v91 + v100;
      v85 = v34;
      v35 = v74 - v32;
      v36 = v34;
      v37 = v86 * v35;
      v80 = v37;
      v81 = v87 * v35;
      v82 = v88 * v35;
      v38 = v75 - v33;
      v39 = v95 * v38;
      v40 = v96 * v38;
      v41 = v38 * v97;
      v75 = *(float *)&v83 - v37;
      *(float *)&v91 = v84 - v81;
      v42 = v36 - v82;
      v100 = v42;
      *(float *)&v101 = v75 - v39;
      v102 = *(float *)&v91 - v40;
      v103 = v100 - v41;
      v65 = v101;
      v66 = v102;
      v67[0] = v103;
      v64 = v80 + *(float *)&v83;
      v59 = v81 + v84;
      v60 = v82 + v36;
      v98 = v64 - v39;
      v99 = v59 - v40;
      v100 = v60 - v41;
      v67[1] = v98;
      v67[2] = v99;
      v67[3] = v100;
      v98 = v64 + v39;
      v99 = v59 + v40;
      v100 = v60 + v41;
      v68 = v98;
      v69 = v99;
      v70 = v100;
      v103 = v42;
      v71 = v39 + v75;
      v72 = v40 + *(float *)&v91;
      v73 = v41 + v103;
      v101 = v83;
      v102 = v84;
      v103 = v36 - 2.0;
      v43 = (**(int (__thiscall ***)(int, int *, _DWORD))dword_104131A0)(dword_104131A0, &v101, 0);
      a2 = 1.0;
      v44 = 8.0;
      v45 = (v43 & 0x10) != 0;
      v62 = flt_10459240;
      v63 = qword_10459244;
      if ( (v43 & 0x10) == 0 )
      {
        *(float *)&v101 = *(float *)&v92 * 8.0 + *(float *)&v83;
        v102 = v93 * 8.0 + v84;
        v103 = 8.0 * v94 + v85;
        sub_100A65B0(v101, SLODWORD(v102), SLODWORD(v103), (int)&v62, &a2);
        v44 = 8.0;
      }
      if ( v76 <= 150.0 )
      {
        if ( !v45 )
          sub_100A6930((int)&savedregs, (float *)&v83, 1.5, (int *)&v62, COERCE_INT(1.5), a2);
      }
      else
      {
        v49 = v44;
        v51 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                LODWORD(v49),
                10.0);
        if ( v45 )
          sub_100A7510(&v83, (int)&v92, v51);
        else
          sub_100A6BC0((float *)&v83, (float *)&v92, v51);
      }
      v46 = v67;
      v47 = 4;
      do
      {
        *(float *)&v91 = COERCE_FLOAT(sub_10115FB0());
        *(float *)&v101 = (double)v91 * 0.000030518509 * 64.0 - 32.0;
        *(float *)&v91 = COERCE_FLOAT(sub_10115FB0());
        v102 = (double)v91 * 0.000030518509 * 64.0 - 32.0;
        sub_10115FB0();
        v55[0] = *(v46 - 2) + *(float *)&v101;
        v55[1] = *(v46 - 1) + v102;
        v55[2] = *v46;
        if ( v76 <= 150.0 )
        {
          if ( !v45 )
          {
            v54 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    0.5,
                    1.0,
                    LODWORD(v53),
                    LODWORD(v54));
            v53 = a2;
            v48 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
            sub_100A6930((int)&savedregs, v55, v48, COERCE_INT_(0.25), COERCE_INT(0.5), COERCE_FLOAT(&v62));
          }
        }
        else
        {
          v52 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  4.0,
                  6.0);
          if ( v45 )
            sub_100A7510(&v83, (int)&v92, v52);
          else
            sub_100A6BC0((float *)&v83, (float *)&v92, v52);
        }
        v46 += 3;
        --v47;
      }
      while ( v47 );
    }
  }
}
