int __usercall sub_10140ED0@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, float *a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  double v9; // st7
  double v10; // st5
  double v11; // rt0
  double v12; // rt1
  double v13; // st5
  double v14; // st7
  double v15; // rt2
  double v16; // st4
  double v17; // st7
  double v18; // st4
  double v19; // st6
  double v20; // rt1
  double v21; // st5
  double v22; // st6
  double v23; // rt2
  double v24; // rtt
  double v25; // st4
  double v26; // st4
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // st7
  bool v31; // c0
  bool v32; // c3
  double v33; // st7
  double v34; // st6
  bool v35; // zf
  long double v36; // st2
  long double v37; // st5
  double v38; // st4
  double v39; // st2
  bool v40; // c0
  bool v41; // c3
  double v42; // st4
  double v43; // st5
  double v44; // st6
  double v45; // rt0
  double v46; // st3
  double v47; // st6
  long double v48; // st4
  long double v49; // st2
  long double v50; // st5
  long double v51; // st2
  long double v52; // st2
  long double v53; // rt0
  long double v54; // st2
  long double v55; // st5
  long double v56; // rt1
  long double v57; // st5
  long double v58; // st5
  long double v59; // st3
  long double v60; // st4
  long double v61; // st6
  double v62; // st4
  long double v63; // st3
  long double v64; // st2
  long double v65; // rt2
  long double v66; // st2
  long double v67; // st3
  long double v68; // st2
  double v69; // st1
  long double v70; // st6
  long double v71; // st3
  double v72; // st2
  long double v73; // st1
  long double v74; // st1
  double v75; // rt2
  double v76; // st2
  double v77; // st5
  long double v78; // rtt
  int v79; // eax
  int v80; // esi
  int v81; // edi
  int v82; // ebx
  int v83; // eax
  void (__thiscall *v84)(int, float *, float *, float *, float *); // edx
  int v85; // eax
  int v86; // edi
  int v87; // eax
  double v88; // st7
  float v89; // [esp+3Ch] [ebp-ACh]
  float v90; // [esp+40h] [ebp-A8h]
  int v91; // [esp+48h] [ebp-A0h]
  float v92[12]; // [esp+5Ch] [ebp-8Ch] BYREF
  float v93; // [esp+8Ch] [ebp-5Ch]
  float v94; // [esp+90h] [ebp-58h]
  float v95; // [esp+94h] [ebp-54h]
  float v96; // [esp+98h] [ebp-50h]
  float v97; // [esp+9Ch] [ebp-4Ch]
  float v98; // [esp+A0h] [ebp-48h]
  float v99; // [esp+A4h] [ebp-44h]
  float v100; // [esp+A8h] [ebp-40h]
  float v101; // [esp+ACh] [ebp-3Ch]
  float v102; // [esp+B0h] [ebp-38h]
  float v103; // [esp+B4h] [ebp-34h] BYREF
  float v104; // [esp+B8h] [ebp-30h]
  float v105; // [esp+BCh] [ebp-2Ch]
  float v106; // [esp+C0h] [ebp-28h]
  float v107; // [esp+C4h] [ebp-24h]
  float v108; // [esp+C8h] [ebp-20h] BYREF
  float v109; // [esp+CCh] [ebp-1Ch] BYREF
  float v110; // [esp+D0h] [ebp-18h]
  float v111; // [esp+D4h] [ebp-14h]
  float v112; // [esp+D8h] [ebp-10h] BYREF
  float v113; // [esp+DCh] [ebp-Ch]
  float v114; // [esp+E0h] [ebp-8h]
  int v115; // [esp+E4h] [ebp-4h]

  result = dword_1043BAC4;
  if ( !*(_DWORD *)(dword_1043BAC4 + 48) )
    return result;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C);
  if ( result < 90 )
    return result;
  *(float *)&v115 = *(float *)(dword_1043BC2C + 44) * 0.15000001;
  v109 = *(float *)(dword_1043BBE4 + 44);
  v111 = *(float *)(dword_1043BB54 + 44);
  v112 = *(float *)(dword_1043BB9C + 44);
  v108 = *(float *)(dword_1043BC74 + 44);
  if ( (dword_1043BCF0 & 1) == 0 )
    dword_1043BCF0 |= 1u;
  v110 = *(float *)off_103DC81C - flt_1043BCEC;
  v9 = a4[14];
  v113 = a4[14];
  v10 = 360.0;
  if ( v9 > 180.0 )
  {
    while ( 1 )
    {
      v12 = v10;
      v13 = v9 - v10;
      v14 = v12;
      if ( v13 <= 180.0 )
        break;
      v11 = v13;
      v10 = v14;
      v9 = v11;
    }
    v113 = v13;
    v15 = v13;
    v10 = v14;
    v9 = v15;
  }
  v16 = -180.0;
  if ( v9 < -180.0 )
  {
    while ( 1 )
    {
      v24 = v16;
      v25 = v9;
      v17 = v24;
      v26 = v25 + v10;
      if ( v26 >= v24 )
        break;
      v23 = v26;
      v16 = v17;
      v9 = v23;
    }
    v113 = v26;
  }
  else
  {
    v17 = -180.0;
  }
  v18 = a4[15];
  v114 = a4[15];
  if ( v18 <= 180.0 )
  {
    v19 = v18;
  }
  else
  {
    do
      v18 = v18 - v10;
    while ( v18 > 180.0 );
    v114 = v18;
    v19 = v18;
  }
  v20 = v10;
  v21 = v19;
  v22 = v20;
  if ( v21 < v17 )
  {
    do
      v21 = v21 + v22;
    while ( v21 < v17 );
    v114 = v21;
  }
  sub_101EE440(a4 + 14);
  v97 = v92[1];
  v98 = v92[5];
  v99 = v92[9];
  v100 = v92[0];
  v101 = v92[4];
  v102 = v92[8];
  v27 = a4[11];
  v94 = a4[11];
  v28 = a4[12];
  v95 = a4[12];
  v29 = a4[13];
  v96 = a4[13];
  v103 = flt_1043BCE0 - v27;
  v104 = flt_1043BCE4 - v28;
  v30 = flt_1043BCE8 - v29;
  v105 = v30;
  sub_1013E590(&v103);
  v31 = v30 < 30.0;
  v32 = v30 == 30.0;
  v33 = 0.0;
  if ( (v31 || v32 || v110 < 0.5) && v110 <= 0.06666667 )
  {
    sub_1013E590(&v103);
    if ( 0.0 > 50.0 )
    {
      flt_1043BCDC = *(float *)off_103DC81C + 1.0;
      v33 = 0.0;
      goto LABEL_80;
    }
    v93 = a4[9];
    v33 = 0.0;
    v34 = a4[9];
    if ( a4[22] > 0.0 )
      v34 = v34 / a4[22];
    v106 = v34;
    v35 = *(_DWORD *)(dword_1043BB0C + 48) == 0;
    v36 = v105 * v102 + v101 * v104 + v100 * v103;
    v107 = v36;
    if ( v35 )
      v37 = v36 * fabs(v102);
    else
      v37 = v36;
    flt_1043A8CC = v37;
    v38 = flt_1043BCD8 - v114;
    v39 = v38;
    if ( v38 > 180.0 )
    {
      v42 = 180.0;
    }
    else
    {
      v40 = v38 > -180.0;
      v41 = -180.0 == v38;
      v42 = 180.0;
      if ( v40 || v41 )
      {
        v43 = v39;
        goto LABEL_36;
      }
    }
    v43 = v39;
    v46 = v114 + flt_1043BCD8;
    if ( v46 > -180.0 && v46 < v42 )
      v43 = v46;
LABEL_36:
    v44 = (v104 * v98 + v103 * v97 + v105 * v99) * 0.33333334 + v43;
    if ( v43 >= 0.0 )
    {
      if ( v43 >= v44 )
      {
        if ( v44 < 0.0 )
          v44 = 0.0;
        goto LABEL_49;
      }
    }
    else
    {
      v45 = v43;
      v43 = v44;
      v44 = v45;
      if ( v43 > 0.0 )
      {
        v44 = 0.0;
        goto LABEL_49;
      }
      if ( v43 < v44 )
      {
LABEL_49:
        v47 = v44 / v93;
        v48 = fabs(v113);
        flt_1043A8C4 = (1.0 - 0.011111111 * v48) * v47;
        v49 = fabs(v102);
        v50 = flt_1043BCD4 - v113;
        v51 = (1.0 - (1.0 - v49) * (1.0 - v49)) * (v107 * 0.5);
        if ( v113 <= 0.0 )
          v52 = v51 + v50;
        else
          v52 = v50 - v51;
        v53 = v52;
        v54 = v50;
        v55 = v53;
        if ( v54 >= 0.0 )
        {
          if ( v54 >= v55 )
          {
            v59 = v55;
            v58 = 1.0;
            if ( v59 < 0.0 )
              v59 = 0.0;
            goto LABEL_62;
          }
        }
        else
        {
          v56 = v54;
          v54 = v55;
          v57 = v56;
          if ( v54 > 0.0 )
          {
            v58 = 1.0;
            v59 = 0.0;
LABEL_62:
            v60 = v47 * (v48 * 0.011111111 * (v48 * 0.011111111 * (v48 * 0.011111111)));
            v61 = v59 / v106;
            flt_1043A8D0 = v60;
            v62 = v110;
            if ( v110 <= 0.0 )
              v63 = 0.0;
            else
              v63 = flt_1043A8CC / (30.0 * v62);
            v64 = (fabs(v63) - v111) / (v112 - v111);
            if ( v64 <= v58 )
            {
              if ( v64 < 0.0 )
                v64 = 0.0;
            }
            else
            {
              v64 = v58;
            }
            v65 = v64;
            v66 = v63;
            v67 = v65;
            if ( v66 < 0.0 )
              v68 = -1.0;
            else
              v68 = v58;
            v69 = *(float *)&v115 * v108;
            v70 = v61 * v69;
            v71 = v67 * v68 * 0.033333335 * (v108 * v109);
            v72 = flt_1043A8C4 * v69;
            if ( v62 <= 0.0 )
              v73 = 0.0;
            else
              v73 = v58 / v62;
            v74 = (v73 - 30.0) * 0.050000001;
            if ( v74 <= v58 )
            {
              v75 = v72;
              v76 = v74;
              v77 = v75;
              if ( v74 < 0.0 )
                v76 = 0.0;
              v78 = v76;
              v72 = v77;
              v58 = v78;
            }
            flt_1043A8C4 = v72 * v58;
            flt_1043A8C8 = v70 * v58;
            flt_1043A8CC = v71 * v58;
            flt_1043A8D0 = v108 * 0.30000001 * flt_1043A8D0 * v58;
            goto LABEL_80;
          }
          if ( v54 < v57 )
          {
LABEL_61:
            v59 = v57;
            v58 = 1.0;
            goto LABEL_62;
          }
        }
        v57 = v54;
        goto LABEL_61;
      }
    }
    v44 = v43;
    goto LABEL_49;
  }
  flt_1043A8C4 = 0.0;
  flt_1043A8C8 = 0.0;
  flt_1043A8CC = 0.0;
  flt_1043A8D0 = 0.0;
LABEL_80:
  if ( flt_1043BCDC <= (double)*(float *)off_103DC81C )
  {
    flt_1043BCDC = v33;
  }
  else
  {
    flt_1043A8C4 = v33;
    flt_1043A8C8 = v33;
    flt_1043A8D0 = v33;
  }
  flt_1043BCE0 = v94;
  flt_1043BCE4 = v95;
  qmemcpy(&unk_1043BCA4, v92, 0x30u);
  flt_1043BCE8 = v96;
  flt_1043BCD4 = v113;
  flt_1043BCD8 = v114;
  flt_1043BCEC = *(float *)off_103DC81C;
  v79 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2, a3, a1);
  v80 = v79;
  if ( v79 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v79 + 8))(v79);
  v81 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
          dword_1047C96C,
          "_rt_FullFrameFB",
          "RenderTargets",
          1);
  v82 = (*(int (__thiscall **)(int))(*(_DWORD *)v81 + 12))(v81);
  v83 = (*(int (__thiscall **)(int))(*(_DWORD *)v81 + 16))(v81);
  v84 = *(void (__thiscall **)(int, float *, float *, float *, float *))(*(_DWORD *)v80 + 156);
  v115 = v83;
  v84(v80, &v109, &v109, &v112, &v108);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C) != 2 )
    sub_10053B20(v82, v81, 0, a5, a6, a7, a8, 1, 0);
  v111 = COERCE_FLOAT(
           (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             "dev/motion_blur"));
  if ( v111 != 0.0 )
  {
    v85 = sub_10073890();
    v86 = *(_DWORD *)v80;
    v87 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v85 + 20))(v85, 1, 1);
    v91 = v115--;
    v88 = (double)v115;
    v115 = v82 - 1;
    v90 = v88;
    v89 = (float)(v82 - 1);
    (*(void (__thiscall **)(int, float, _DWORD, _DWORD, float, float, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int))(v86 + 412))(
      v80,
      COERCE_FLOAT(LODWORD(v111)),
      0,
      0,
      COERCE_FLOAT(LODWORD(v112)),
      COERCE_FLOAT(LODWORD(v108)),
      0.0,
      0.0,
      LODWORD(v89),
      LODWORD(v90),
      v82,
      v91,
      v87);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v80 + 12))(v80);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v80 + 4))(v80);
}
