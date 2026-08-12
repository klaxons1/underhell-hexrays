int __cdecl sub_10141600(int a1, int a2, int a3, int a4, char a5, char a6)
{
  void *v6; // ecx
  int *v7; // ebx
  int (__thiscall ***v8)(void *, _DWORD); // eax
  int v9; // edi
  int v10; // esi
  double v11; // st7
  bool v12; // c0
  bool v13; // c3
  double v14; // st7
  double v15; // st7
  double v16; // st5
  int v17; // eax
  int v18; // eax
  int v19; // eax
  double v20; // st7
  bool v21; // c0
  bool v22; // c3
  double v23; // st7
  double v24; // st7
  double v25; // st6
  double v26; // st5
  bool v27; // c0
  bool v28; // c3
  double v29; // st5
  double v30; // st7
  int v31; // edx
  bool v32; // zf
  int v33; // edi
  int v34; // esi
  int (__thiscall *v35)(int); // edx
  int v36; // edi
  double v37; // st7
  double v38; // st6
  double v39; // st5
  double v40; // st4
  double v41; // st3
  double v42; // st5
  float *v43; // ecx
  int v44; // esi
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  float v49; // ecx
  float v50; // edx
  char v51; // al
  int *v52; // eax
  int v53; // edx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int *v57; // eax
  int v58; // edx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int *v62; // eax
  int v63; // edx
  int v64; // eax
  int v65; // eax
  int (__thiscall *v66)(int, const char *, const char *, int, _DWORD); // eax
  int *v67; // eax
  int v68; // eax
  int (__thiscall *v69)(int, const char *, const char *, int, _DWORD); // edx
  int *v70; // eax
  int v71; // eax
  int result; // eax
  int v73; // edx
  int *v74; // eax
  int v75; // eax
  float v76; // [esp+18Ch] [ebp-9Ch]
  float v77; // [esp+18Ch] [ebp-9Ch]
  float v78; // [esp+18Ch] [ebp-9Ch]
  float v79; // [esp+190h] [ebp-98h]
  float v80; // [esp+190h] [ebp-98h]
  float v81; // [esp+190h] [ebp-98h]
  float v82; // [esp+19Ch] [ebp-8Ch]
  float v83; // [esp+1A0h] [ebp-88h]
  float v84; // [esp+1A4h] [ebp-84h]
  float v85; // [esp+1A4h] [ebp-84h]
  int v86; // [esp+1A8h] [ebp-80h]
  int v87; // [esp+1ACh] [ebp-7Ch]
  int v88; // [esp+1B0h] [ebp-78h]
  int v89; // [esp+1B4h] [ebp-74h] BYREF
  float v90; // [esp+1B8h] [ebp-70h]
  float v91; // [esp+1BCh] [ebp-6Ch]
  float v92; // [esp+1C0h] [ebp-68h]
  int v93; // [esp+1C4h] [ebp-64h] BYREF
  float v94; // [esp+1C8h] [ebp-60h]
  float v95; // [esp+1CCh] [ebp-5Ch]
  float v96; // [esp+1D0h] [ebp-58h]
  int v97; // [esp+1D8h] [ebp-50h]
  int v98; // [esp+1DCh] [ebp-4Ch]
  int v99; // [esp+1E0h] [ebp-48h]
  int v100; // [esp+1E4h] [ebp-44h] BYREF
  float v101; // [esp+1E8h] [ebp-40h]
  float v102; // [esp+1ECh] [ebp-3Ch]
  float v103; // [esp+1F0h] [ebp-38h]
  int v104; // [esp+1F4h] [ebp-34h] BYREF
  float v105; // [esp+1FCh] [ebp-2Ch] BYREF
  float v106; // [esp+200h] [ebp-28h]
  float v107; // [esp+204h] [ebp-24h]
  float v108; // [esp+208h] [ebp-20h] BYREF
  float v109; // [esp+20Ch] [ebp-1Ch] BYREF
  float v110; // [esp+210h] [ebp-18h] BYREF
  int v111; // [esp+214h] [ebp-14h] BYREF
  int v112; // [esp+218h] [ebp-10h]
  char v113[4]; // [esp+21Ch] [ebp-Ch] BYREF
  float v114; // [esp+220h] [ebp-8h]
  char v115[4]; // [esp+224h] [ebp-4h]

  v7 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v7 )
    (*(void (__thiscall **)(int *))(*v7 + 8))(v7);
  if ( *(_DWORD *)(dword_1043B994 + 48) )
  {
    v8 = (int (__thiscall ***)(void *, _DWORD))(*(int (__thiscall **)(int *))(*v7 + 584))(v7);
    if ( v8 )
    {
      sub_10141580(v8, (int)sub_10141600, &a1, &a2, &a3, &a4, &a5, &a6);
LABEL_102:
      (*(void (__thiscall **)(int *))(*v7 + 12))(v7);
      return (*(int (__thiscall **)(int *))(*v7 + 4))(v7);
    }
  }
  *(float *)&v112 = sub_1013F040(v6);
  v107 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C));
  byte_1043A87B = a5;
  sub_1013E7A0((float *)v113, &v110);
  if ( *(_DWORD *)(dword_1043ADC4 + 48) == 1 )
    sub_1013E360(v7);
  v9 = a4;
  v10 = a3;
  if ( v107 >= 0.0 )
  {
    if ( SLODWORD(v107) > 1 )
    {
      if ( LODWORD(v107) == 2 )
      {
        (*(void (__thiscall **)(int *, float *, float *))(*v7 + 32))(v7, &v109, &v108);
        if ( *(_DWORD *)(dword_1043AAAC + 48) || *(_DWORD *)(dword_1043AC5C + 48) )
        {
          sub_1013FC40(dword_1043B1E0);
          if ( *(_DWORD *)(dword_1043AAAC + 48) )
          {
            v11 = sub_1013FDA0((int)dword_1043B1E0, 0.0);
            v12 = v11 > 0.0001;
            v13 = 0.0001 == v11;
            v14 = 0.0001;
            if ( v12 || v13 )
              v14 = sub_1013FDA0((int)dword_1043B1E0, 0.0);
            v15 = 0.18 / v14;
            if ( v110 >= v15 )
              v16 = v15;
            else
              v16 = v110;
            if ( *(float *)v113 <= v16 )
            {
              if ( v110 < v15 )
                v15 = v110;
            }
            else
            {
              v15 = *(float *)v113;
            }
            v17 = *v7;
            v107 = v15;
            v84 = v15;
            (*(void (__thiscall **)(int *, _DWORD))(v17 + 600))(v7, LODWORD(v84));
            sub_10229120(v107);
          }
        }
        v18 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
                dword_1047C96C,
                "dev/floattoscreen_combine",
                Locale,
                1,
                0);
        v19 = (*(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)v18 + 44))(v18, "$bloomamount", 0, 1);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v19 + 12))(v19, v112);
        if ( *(float *)&v112 <= 0.0 )
          sub_1013F310((int)&unk_103E7D70, 0, 0);
        else
          sub_1013F310((int)&unk_103E7CA8, 0, 0);
        (*(void (__thiscall **)(int *, _DWORD))(*v7 + 24))(v7, 0);
        if ( *(_DWORD *)(dword_1043AC5C + 48)
          && (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) >= 90 )
        {
          sub_10140170((char *)dword_1043B1E0);
        }
        if ( *(_DWORD *)(dword_1043AAAC + 48) )
        {
          v20 = sub_1013FDA0((int)dword_1043B1E0, 0.0);
          v21 = v20 > 0.0001;
          v22 = 0.0001 == v20;
          v23 = 0.0001;
          if ( v21 || v22 )
            v23 = sub_1013FDA0((int)dword_1043B1E0, 0.0);
          v24 = 0.023 / v23;
          v25 = v110;
          if ( v110 >= v24 )
            v26 = v24;
          else
            v26 = v110;
          v27 = *(float *)v113 < v26;
          v28 = *(float *)v113 == v26;
          v29 = *(float *)v113;
          if ( v27 || v28 )
          {
            v29 = v110;
            if ( v110 >= v24 )
            {
              v25 = v110;
              v29 = v24;
              v30 = *(float *)v113;
            }
            else
            {
              v30 = *(float *)v113;
              v25 = v110;
            }
          }
          else
          {
            v30 = *(float *)v113;
          }
          v85 = v25;
          v83 = v30;
          v82 = v29;
          sub_1013EB00((int)v7, v82, v83, v85);
          v10 = a3;
        }
        (*(void (__thiscall **)(int *, _DWORD))(*v7 + 24))(v7, 0);
      }
      goto LABEL_88;
    }
    byte_1043A8C0 = 0;
    if ( v107 != 0.0 )
      sub_10140BE0(v7, a1, (int)v7, a4, a2, a3, a4, *(float *)v113, v110);
    if ( -1.0 == *(float *)(dword_1043B79C + 44) )
      sub_10229120(0.0);
    if ( -1.0 == *(float *)(dword_1043B94C + 44) )
      sub_10229120(1.0);
    v31 = *(_DWORD *)dword_1041315C;
    v110 = *(float *)(dword_1043B79C + 44);
    if ( (*(int (__thiscall **)(int))(v31 + 188))(dword_1041315C) < 90 || (LOBYTE(v114) = 1, 0.0 == v110) )
      LOBYTE(v114) = 0;
    if ( a6 || *(float *)&v112 <= 0.0 )
    {
      v113[0] = 0;
      if ( a6 )
        goto LABEL_60;
    }
    else
    {
      v113[0] = 1;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C) >= 90
      && (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C) != 2 )
    {
      if ( sub_10091E80(off_103DD830) )
      {
        v32 = *(_DWORD *)(dword_1043AE0C + 48) == 0;
        v115[0] = 1;
        if ( !v32 )
        {
LABEL_61:
          (*(void (__thiscall **)(int *, _DWORD))(*v7 + 680))(v7, *(_DWORD *)v115);
          if ( !v113[0] && !LOBYTE(v114) && !v115[0] )
          {
LABEL_84:
            if ( v107 != 0.0
              && *(_DWORD *)(dword_1043AC5C + 48)
              && (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1041315C + 188))(
                   dword_1041315C,
                   v86,
                   v87,
                   v88) >= 90 )
            {
              sub_10140170((char *)dword_1043B1E0);
            }
            goto LABEL_88;
          }
          v33 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
                  dword_1047C96C,
                  "_rt_FullFrameFB",
                  "RenderTargets",
                  1);
          *(float *)&v34 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v33 + 12))(v33));
          v35 = *(int (__thiscall **)(int))(*(_DWORD *)v33 + 16);
          v109 = *(float *)&v34;
          v108 = COERCE_FLOAT(v35(v33));
          v36 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
                  dword_1047C96C,
                  "_rt_SmallFB1",
                  "RenderTargets",
                  1);
          if ( !byte_1043A8C0 )
          {
            sub_10053B20((int)v7, v36, 0, a1, a2, a3, a4, 1, 0);
            byte_1043A8C0 = 1;
          }
          if ( v113[0] )
          {
            sub_101409B0((int)v7, *(float *)&v112);
            *(float *)&v34 = v109;
          }
          *(float *)&v93 = 0.0;
          v94 = -0.5;
          v112 = v34 / 4 - 1;
          v95 = (float)v112;
          v112 = SLODWORD(v108) / 4 - 1;
          v96 = (float)v112;
          *(float *)&v89 = 0.0;
          v90 = 0.0;
          v37 = (double)(v34 - 1);
          v91 = v37;
          v38 = (double)(LODWORD(v108) - 1);
          v92 = v38;
          v39 = (double)SLODWORD(v109);
          *(float *)&v111 = v39;
          v40 = (double)SLODWORD(v108);
          *(float *)&v112 = v40;
          v41 = (double)a3;
          v108 = v41;
          v105 = (v39 - v39 / v41) / v37;
          v42 = (double)a4;
          v109 = v42;
          v106 = (v40 - v40 / v42) / v38;
          sub_1013E4E0((float *)&v93, &v105);
          sub_1013E4E0((float *)&v89, v43);
          v100 = v93;
          v101 = v94;
          v44 = a1;
          v102 = v95;
          v97 = a2;
          v32 = *(_DWORD *)(dword_1043A9D4 + 48) == 2;
          v103 = v96;
          v98 = a3;
          v99 = a4;
          if ( v32 )
          {
            v44 = (int)(v108 * 0.25 + (double)a1);
            v97 = (int)(0.25 * v109 + (double)v97);
            v98 = (int)((double)v98 - v108 * 0.5);
            v99 = (int)((double)v99 - 0.5 * v109);
            v105 = 1.0 - (double)(a3 / 2) / (double)(a3 - 1);
            LODWORD(v108) = a4 - 1;
            v106 = 1.0 - (double)(a4 / 2) / (double)(a4 - 1);
            sub_1013E4E0((float *)&v100, &v105);
          }
          if ( !byte_103E7E93 || !v115[0] )
          {
            if ( *(_DWORD *)(dword_1043AA64 + 48) )
            {
              v109 = COERCE_FLOAT(sub_1013EF40((float *)&v93, (float *)&v89, (float *)&v111, v114, v113[0], v115[0], v110));
              v45 = sub_10073890();
              v46 = *(_DWORD *)(dword_1043BA24 + 48);
              v108 = *(float *)(dword_1043B9DC + 48);
              LODWORD(v110) = *v7 + 412;
              v47 = (*(int (__thiscall **)(int, float, int))(*(_DWORD *)v45 + 20))(
                      v45,
                      COERCE_FLOAT(LODWORD(v108)),
                      v46);
              v48 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v36 + 16))(v36, v47);
              v92 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(*(_DWORD *)v36 + 12))(v36, v48));
              v91 = v103;
              v90 = v102;
              *(float *)&v89 = v101;
              v88 = v100;
              v87 = v99;
              v49 = v109;
              v86 = v98;
              v50 = v110;
            }
            else
            {
              v51 = 0;
              if ( LOBYTE(v114) )
              {
                dword_103E7CA0 = 0;
                sub_1013EDD0(SLOBYTE(v114), v110);
                sub_1013EE40((float *)&v93, (float *)&v89, *(float *)&v111, *(float *)&v112);
                v108 = COERCE_FLOAT(
                         (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C
                                                                                             + 280))(
                           dword_1047C96C,
                           "dev/engine_post",
                           "Other textures",
                           1,
                           0));
                v52 = (int *)sub_10073890();
                v53 = *v52;
                LODWORD(v109) = *v7 + 412;
                v54 = (*(int (__thiscall **)(int *, int, int))(v53 + 20))(v52, 1, 1);
                v55 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v36 + 16))(v36, v54);
                v56 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v36 + 12))(v36, v55);
                (*(void (__thiscall **)(int *, float, int, int, int, int, int, float, float, float, int))LODWORD(v109))(
                  v7,
                  COERCE_FLOAT(LODWORD(v108)),
                  v44,
                  v97,
                  v98,
                  v99,
                  v100,
                  COERCE_FLOAT(LODWORD(v101)),
                  COERCE_FLOAT(LODWORD(v102)),
                  COERCE_FLOAT(LODWORD(v103)),
                  v56);
                v51 = 1;
              }
              if ( v113[0] )
              {
                flt_1043A890 = 0.0;
                dword_103E7CA0 = 1;
                v108 = COERCE_FLOAT(
                         (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C
                                                                                             + 280))(
                           dword_1047C96C,
                           "dev/bloomadd",
                           "Other textures",
                           1,
                           0));
                v57 = (int *)sub_10073890();
                v58 = *v57;
                LODWORD(v109) = *v7 + 412;
                v59 = (*(int (__thiscall **)(int *, int, int))(v58 + 20))(v57, 1, 1);
                v60 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v36 + 16))(v36, v59);
                v61 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v36 + 12))(v36, v60);
                (*(void (__thiscall **)(int *, float, int, int, int, int, int, float, float, float, int))LODWORD(v109))(
                  v7,
                  COERCE_FLOAT(LODWORD(v108)),
                  v44,
                  v97,
                  v98,
                  v99,
                  v100,
                  COERCE_FLOAT(LODWORD(v101)),
                  COERCE_FLOAT(LODWORD(v102)),
                  COERCE_FLOAT(LODWORD(v103)),
                  v61);
                v51 = 1;
              }
              if ( !v115[0] )
                goto LABEL_83;
              if ( v51 )
                sub_10053B20((int)v7, v36, 0, a1, a2, a3, a4, 0, &v104);
              v108 = COERCE_FLOAT(sub_1013EF40((float *)&v93, (float *)&v89, (float *)&v111, 0.0, 0, v115[0], v110));
              v62 = (int *)sub_10073890();
              v63 = *v62;
              LODWORD(v109) = *v7 + 412;
              v64 = (*(int (__thiscall **)(int *, int, int))(v63 + 20))(v62, 1, 1);
              v65 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v36 + 16))(v36, v64);
              v92 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(*(_DWORD *)v36 + 12))(v36, v65));
              v91 = v103;
              v90 = v102;
              *(float *)&v89 = v101;
              v88 = v100;
              v87 = v99;
              v49 = v108;
              v86 = v98;
              v50 = v109;
            }
            (*(void (__thiscall **)(int *, float, int, int))LODWORD(v50))(v7, COERCE_FLOAT(LODWORD(v49)), v44, v97);
          }
LABEL_83:
          v9 = a4;
          v10 = a3;
          byte_103E7E93 = 0;
          goto LABEL_84;
        }
      }
    }
LABEL_60:
    v115[0] = 0;
    goto LABEL_61;
  }
LABEL_88:
  v107 = COERCE_FLOAT(sub_100422D0());
  if ( v107 != 0.0 )
  {
    if ( (dword_1043BD00 & 1) == 0 )
    {
      v66 = *(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280);
      dword_1043BD00 |= 1u;
      dword_1043BCFC = v66(dword_1047C96C, "shader/nightvision", "Other textures", 1, 0);
    }
    if ( *(_BYTE *)(LODWORD(v107) + 3449) )
    {
      v67 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 52))(dword_10439968);
      sub_10053B20((int)v7, v9, 0, *v67, v67[1], v67[2], v67[3], 0, 0);
      v68 = *v7;
      v79 = (float)(v9 - 1);
      LODWORD(v108) = v10 - 1;
      v76 = (float)(v10 - 1);
      (*(void (__thiscall **)(int *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int))(v68 + 412))(
        v7,
        dword_1043BCFC,
        0,
        0,
        v10,
        v9,
        0.0,
        0.0,
        LODWORD(v76),
        LODWORD(v79),
        v10,
        v9,
        0,
        1,
        1);
    }
    if ( (dword_1043BD00 & 2) == 0 )
    {
      v69 = *(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280);
      dword_1043BD00 |= 2u;
      dword_1043BCF8 = v69(dword_1047C96C, "shader/gasmask", "Other textures", 1, 0);
    }
    if ( *(_BYTE *)(LODWORD(v107) + 3450) )
    {
      v70 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 52))(dword_10439968);
      sub_10053B20((int)v7, v9, 0, *v70, v70[1], v70[2], v70[3], 0, 0);
      v71 = *v7;
      LODWORD(v107) = v10 - 1;
      v80 = (float)(v9 - 1);
      v77 = (float)(v10 - 1);
      (*(void (__thiscall **)(int *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int))(v71 + 412))(
        v7,
        dword_1043BCF8,
        0,
        0,
        v10,
        v9,
        0.0,
        0.0,
        LODWORD(v77),
        LODWORD(v80),
        v10,
        v9,
        0,
        1,
        1);
    }
  }
  result = dword_1043BA6C;
  if ( *(_DWORD *)(dword_1043BA6C + 48) )
  {
    if ( (dword_1043BD00 & 4) == 0 )
    {
      v73 = *(_DWORD *)dword_1047C96C;
      dword_1043BD00 |= 4u;
      dword_1043BCF4 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(v73 + 280))(
                         dword_1047C96C,
                         "shader/filmgrain",
                         "Other textures",
                         1,
                         0);
    }
    v74 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 52))(dword_10439968);
    sub_10053B20((int)v7, v9, 0, *v74, v74[1], v74[2], v74[3], 0, 0);
    v75 = *v7;
    LODWORD(v107) = v10 - 1;
    v81 = (float)(v9 - 1);
    v78 = (float)(v10 - 1);
    result = (*(int (__thiscall **)(int *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int))(v75 + 412))(
               v7,
               dword_1043BCF4,
               0,
               0,
               v10,
               v9,
               0.0,
               0.0,
               LODWORD(v78),
               LODWORD(v81),
               v10,
               v9,
               0,
               1,
               1);
  }
  if ( v7 )
    goto LABEL_102;
  return result;
}
