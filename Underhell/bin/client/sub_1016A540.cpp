void __thiscall sub_1016A540(int this, int a2)
{
  float *v3; // esi
  bool v4; // zf
  double v5; // st7
  double v6; // st7
  float v7; // ecx
  float v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // rtt
  double v12; // st6
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // rt0
  double v17; // st5
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st3
  double v22; // rt1
  double v23; // st3
  double v24; // rt2
  int v25; // esi
  int v26; // eax
  float *v27; // eax
  float *v28; // esi
  int v29; // eax
  double v30; // st4
  double v31; // st6
  double v32; // st4
  double v33; // st5
  double v34; // st6
  double v35; // st7
  double v36; // st6
  double v37; // st5
  double v38; // st4
  double v39; // st3
  double v40; // rt0
  double v41; // st4
  double v42; // st6
  double v43; // st5
  double v44; // rt0
  double v45; // st5
  double v46; // st7
  double v47; // rt1
  int v48; // eax
  double v49; // st7
  double v50; // st5
  double v51; // st4
  double v52; // st3
  double v53; // rtt
  double v54; // st0
  double v55; // st6
  double v56; // rt2
  double v57; // st3
  double v58; // st5
  double v59; // st3
  double v60; // rt0
  double v61; // st3
  double v62; // st6
  int v63; // edx
  int v64; // eax
  float v65; // [esp+48h] [ebp-94h]
  float v66; // [esp+4Ch] [ebp-90h]
  float v67; // [esp+4Ch] [ebp-90h]
  int v68; // [esp+50h] [ebp-8Ch]
  float v69; // [esp+5Ch] [ebp-80h]
  float v70; // [esp+60h] [ebp-7Ch]
  _DWORD v71[3]; // [esp+68h] [ebp-74h] BYREF
  float *v72; // [esp+74h] [ebp-68h]
  float v73; // [esp+78h] [ebp-64h]
  int v74; // [esp+7Ch] [ebp-60h]
  int v75; // [esp+80h] [ebp-5Ch]
  int *v76; // [esp+84h] [ebp-58h]
  float v77; // [esp+88h] [ebp-54h] BYREF
  float v78; // [esp+8Ch] [ebp-50h]
  float v79; // [esp+90h] [ebp-4Ch]
  float v80; // [esp+94h] [ebp-48h] BYREF
  float v81; // [esp+98h] [ebp-44h]
  float v82; // [esp+9Ch] [ebp-40h]
  float v83; // [esp+A0h] [ebp-3Ch]
  float v84; // [esp+A4h] [ebp-38h]
  float v85; // [esp+A8h] [ebp-34h] BYREF
  float v86; // [esp+ACh] [ebp-30h]
  float v87; // [esp+B0h] [ebp-2Ch]
  int v88; // [esp+B4h] [ebp-28h] BYREF
  int v89; // [esp+B8h] [ebp-24h]
  float v90; // [esp+BCh] [ebp-20h]
  float v91; // [esp+C0h] [ebp-1Ch]
  float v92; // [esp+C4h] [ebp-18h]
  float v93; // [esp+C8h] [ebp-14h] BYREF
  float v94; // [esp+CCh] [ebp-10h]
  float v95; // [esp+D0h] [ebp-Ch]
  int v96; // [esp+D4h] [ebp-8h]
  int v97; // [esp+D8h] [ebp-4h]

  sub_1016A320(this - 4);
  sub_100EB150(&v88, (int)"C_TEShatterSurface 1");
  v3 = (float *)(this + 12);
  v72 = (float *)(this + 12);
  sub_100F3060(v88, (float *)(this + 12));
  (*(void (__thiscall **)(int, int, _DWORD, int, float *, _DWORD))(*(_DWORD *)dword_1041315C + 264))(
    dword_1041315C,
    this + 12,
    0,
    1,
    &v85,
    0);
  v4 = *(_DWORD *)(this + 76) == 0;
  v76 = dword_1043DF10;
  v85 = v85 + (1.0 - v85) * 0.30000001;
  v86 = v86 + (1.0 - v86) * 0.30000001;
  v87 = v87 + 0.30000001 * (1.0 - v87);
  if ( !v4 )
    v76 = &dword_1043DF18;
  v5 = *(float *)(this + 64) / *(float *)(this + 68);
  v89 = (int)(*(float *)(this + 60) / *(float *)(this + 68));
  v74 = (int)v5;
  sub_101EE040(this + 24, 0, &v77, &v80);
  v6 = *(float *)(this + 68);
  v7 = *(float *)(this + 20);
  v8 = *(float *)(this + 16);
  v93 = *v3;
  v77 = v77 * v6;
  v95 = v7;
  v94 = v8;
  v78 = v78 * v6;
  v79 = v6 * v79;
  v9 = *(float *)(this + 68);
  v10 = v80 * v9;
  v80 = v10;
  v81 = v81 * v9;
  v11 = v10;
  v12 = v9 * v82;
  v13 = v11;
  v82 = v12;
  v14 = *(float *)(this + 68) * 0.5;
  v15 = v93 + v14;
  v93 = v15;
  v16 = v15;
  v17 = v14;
  v18 = v16;
  v19 = v17 + v7;
  v95 = v19;
  v83 = 1.0e10;
  v84 = 0.0;
  if ( v89 <= 0 )
    goto LABEL_23;
  v20 = (double)v74;
  v73 = v20;
  v21 = v94;
  while ( 2 )
  {
    if ( v74 <= 0 )
      goto LABEL_22;
    v75 = v74;
    do
    {
      v25 = v88;
      v26 = (*(int (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)dword_10413198 + 8))(
              dword_10413198,
              0,
              1,
              &v93);
      v27 = sub_100F2B60(v25, v25, 64, v76[v26], (float *)v68);
      v90 = 0.0;
      v28 = v27;
      v91 = 0.0;
      v29 = *(_DWORD *)dword_10413198;
      v92 = 0.0;
      v68 = 3;
      if ( !(*(int (__thiscall **)(int, _DWORD))(v29 + 8))(dword_10413198, 0) )
      {
        v46 = v92;
        v42 = v91;
        v45 = v90;
        goto LABEL_11;
      }
      v30 = v94 - *(float *)(this + 52);
      v31 = v30 * v30;
      v32 = v93 - *(float *)(this + 48);
      v33 = v31;
      v34 = v95 - *(float *)(this + 56);
      v35 = v32 * v32 + v33 + v34 * v34;
      v36 = *(float *)(this + 36);
      v90 = *(float *)(this + 36);
      v37 = *(float *)(this + 40);
      v91 = *(float *)(this + 40);
      v38 = *(float *)(this + 44);
      v92 = *(float *)(this + 44);
      if ( v35 > 0.0 )
      {
        v39 = 40.0 / v35;
        v40 = v38;
        v41 = v36 * v39;
        v90 = v41;
        v91 = v37 * v39;
        v42 = v37 * v39;
        v43 = v39 * v40;
        v92 = v43;
        v44 = v43;
        v45 = v41;
        v46 = v44;
LABEL_11:
        v47 = v45;
        v37 = v42;
        v36 = v47;
        goto LABEL_12;
      }
      v46 = v38;
LABEL_12:
      if ( v28 )
      {
        v28[13] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    2.0,
                    5.0);
        v28[6] = v90;
        v28[7] = v91;
        v28[8] = v92;
        v96 = sub_10115FB0();
        v69 = (double)v96 * 0.000030518509 * 50.0 - 25.0;
        v96 = sub_10115FB0();
        v70 = (double)v96 * 0.000030518509 * 50.0 - 25.0;
        v48 = sub_10115FB0();
        v96 = v48;
        v28[6] = v28[6] + v69;
        v28[7] = v70 + v28[7];
        v28[8] = (double)v48 * 0.000030518509 * 50.0 - 25.0 + v28[8];
        v66 = *(float *)(this + 68) * 0.5;
        v65 = *(float *)(this + 68) * -0.5;
        v97 = (int)(((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      LODWORD(v65),
                      LODWORD(v66))
                  + *(float *)(this + 68));
        *((_BYTE *)v28 + 59) = v97;
        v28[9] = *(float *)(this + 24);
        v28[10] = *(float *)(this + 28);
        v28[11] = *(float *)(this + 32);
        v28[12] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    -400.0,
                    400.0);
        v97 = *(unsigned __int8 *)(this + 80);
        v97 = (int)((double)v97 * v85);
        *((_BYTE *)v28 + 56) = v97;
        v97 = *(unsigned __int8 *)(this + 81);
        v97 = (int)((double)v97 * v86);
        *((_BYTE *)v28 + 57) = v97;
        v97 = *(unsigned __int8 *)(this + 82);
        v97 = (int)((double)v97 * v87);
        *((_BYTE *)v28 + 58) = v97;
        v97 = *(unsigned __int8 *)(this + 83);
        v97 = (int)((double)v97 * v85);
        *((_BYTE *)v28 + 60) = v97;
        v97 = *(unsigned __int8 *)(this + 84);
        v97 = (int)((double)v97 * v86);
        *((_BYTE *)v28 + 61) = v97;
        v97 = *(unsigned __int8 *)(this + 85);
        v97 = (int)((double)v97 * v87);
        *((_BYTE *)v28 + 62) = v97;
        v46 = v92;
        v36 = v90;
        v37 = v91;
      }
      v67 = v46 * v46 + v36 * v36 + v37 * v37;
      v49 = off_103EDFE0(v67);
      if ( v84 < v49 )
        v84 = v49;
      if ( v83 > v49 )
        v83 = v49;
      v4 = v75-- == 1;
      v13 = v80;
      v18 = v93 + v80;
      v93 = v18;
      v50 = v94 + v81;
      v94 = v50;
      v51 = v82 + v95;
      v95 = v51;
    }
    while ( !v4 );
    v3 = v72;
    v52 = v51;
    v20 = v73;
    v53 = v52;
    v21 = v50;
    v19 = v53;
LABEL_22:
    v4 = v89-- == 1;
    v54 = v18;
    v55 = v19 - v82 * v20;
    v56 = v21 - v81 * v20;
    v57 = v54 - v20 * v13 + v77;
    v93 = v57;
    v58 = v57;
    v59 = v56 + v78;
    v94 = v59;
    v60 = v59;
    v61 = v55 + v79;
    v62 = v60;
    v95 = v61;
    if ( !v4 )
    {
      v22 = v61;
      v23 = v58;
      v19 = v22;
      v24 = v23;
      v21 = v62;
      v18 = v24;
      continue;
    }
    break;
  }
LABEL_23:
  v63 = *(_DWORD *)(this + 40);
  v64 = *(_DWORD *)(this + 44);
  v71[0] = *(_DWORD *)(this + 36);
  v71[1] = v63;
  v71[2] = v64;
  off_103EDFEC();
  (*(void (__thiscall **)(int, float *, _DWORD *, _DWORD, float, float, _DWORD, _DWORD))(*(_DWORD *)(v88 + 260) + 16))(
    v88 + 260,
    v3,
    v71,
    0.30000001,
    COERCE_FLOAT(LODWORD(v83)),
    COERCE_FLOAT(LODWORD(v84)),
    500.0,
    0.30000001);
  if ( v88 )
    sub_100F2FF0(v88);
}
