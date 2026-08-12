// bad sp value at call has been detected, the output may be wrong!
_DWORD *__usercall sub_100F6CA0@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int (__cdecl *v5)(int, int); // edx
  int v6; // edx
  int (__thiscall *v7)(_DWORD *); // eax
  void (__thiscall *v8)(_DWORD *); // edx
  float v9; // esi
  double v10; // st7
  _DWORD *v11; // edi
  int (__thiscall *v12)(_DWORD, _DWORD *); // edx
  char v13; // al
  unsigned int v14; // edi
  int *v15; // eax
  unsigned int v16; // edi
  _DWORD *v17; // esi
  int v18; // esi
  float *v19; // eax
  double v20; // st7
  int (__thiscall *v21)(int); // edx
  int v22; // eax
  int (__thiscall *v23)(int); // edx
  int v24; // eax
  double v25; // st7
  double v26; // st6
  double v27; // st5
  double v28; // st7
  int v29; // eax
  const char *v30; // eax
  float v31; // esi
  int v32; // edi
  int v33; // eax
  int v34; // esi
  double v35; // st7
  const char *v36; // esi
  _DWORD *v37; // esi
  float v38; // edi
  double v39; // st7
  const char *v40; // eax
  double v41; // st5
  double v42; // st2
  double v43; // rtt
  double v44; // st2
  float v45; // esi
  float v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  const char *v51; // eax
  _DWORD v54[514]; // [esp+64h] [ebp-9E4h] BYREF
  _BYTE v55[12]; // [esp+86Ch] [ebp-1DCh] BYREF
  float v56[16]; // [esp+878h] [ebp-1D0h] BYREF
  _DWORD *v57; // [esp+8B8h] [ebp-190h]
  int v58; // [esp+8C8h] [ebp-180h] BYREF
  float v59[3]; // [esp+8D4h] [ebp-174h] BYREF
  float v60[2]; // [esp+8E0h] [ebp-168h] BYREF
  float v61; // [esp+8E8h] [ebp-160h]
  _DWORD *v62; // [esp+920h] [ebp-128h]
  float v63[16]; // [esp+92Ch] [ebp-11Ch] BYREF
  char v64; // [esp+96Ch] [ebp-DCh]
  bool v65; // [esp+96Dh] [ebp-DBh]
  float v66[8]; // [esp+988h] [ebp-C0h]
  float v67[3]; // [esp+9A8h] [ebp-A0h] BYREF
  float v68[3]; // [esp+9B4h] [ebp-94h] BYREF
  float v69[3]; // [esp+9C0h] [ebp-88h] BYREF
  float v70; // [esp+9CCh] [ebp-7Ch]
  _DWORD *v71; // [esp+9D0h] [ebp-78h]
  float v72; // [esp+9D4h] [ebp-74h] BYREF
  float v73; // [esp+9D8h] [ebp-70h]
  float v74; // [esp+9DCh] [ebp-6Ch]
  float v75; // [esp+9E0h] [ebp-68h] BYREF
  float v76; // [esp+9E4h] [ebp-64h]
  float v77; // [esp+9E8h] [ebp-60h]
  _BYTE v78[12]; // [esp+9ECh] [ebp-5Ch] BYREF
  float v79; // [esp+9F8h] [ebp-50h] BYREF
  float v80; // [esp+9FCh] [ebp-4Ch]
  float v81; // [esp+A00h] [ebp-48h]
  float v82; // [esp+A04h] [ebp-44h]
  float v83; // [esp+A08h] [ebp-40h]
  float v84; // [esp+A0Ch] [ebp-3Ch]
  float v85; // [esp+A10h] [ebp-38h]
  int v86; // [esp+A14h] [ebp-34h]
  _DWORD *v87; // [esp+A18h] [ebp-30h]
  float v88; // [esp+A1Ch] [ebp-2Ch] BYREF
  float v89; // [esp+A20h] [ebp-28h]
  int v90; // [esp+A24h] [ebp-24h]
  int v91; // [esp+A28h] [ebp-20h] BYREF
  float v92; // [esp+A2Ch] [ebp-1Ch]
  float v93[2]; // [esp+A30h] [ebp-18h]
  float v94; // [esp+A38h] [ebp-10h]
  int v95; // [esp+A3Ch] [ebp-Ch]
  void *v96; // [esp+A40h] [ebp-8h]
  void *retaddr; // [esp+A48h] [ebp+0h]

  v95 = a2;
  v96 = retaddr;
  v5 = *(int (__cdecl **)(int, int))(*a1 + 1092);
  v94 = *(float *)&a1;
  if ( v5(a3, a4) )
  {
    sub_100F59C0(a1);
    v94 = COERCE_FLOAT(v69);
    v93[1] = 0.0;
    LODWORD(v93[0]) = &v88;
    LODWORD(v92) = a1 + 1092;
  }
  else
  {
    v6 = *a1;
    v94 = COERCE_FLOAT(v69);
    v7 = *(int (__thiscall **)(_DWORD *))(v6 + 508);
    v93[1] = 0.0;
    LODWORD(v93[0]) = &v88;
    v92 = COERCE_FLOAT(v7(a1));
  }
  sub_104222B0(LODWORD(v92), LODWORD(v93[0]), LODWORD(v93[1]), LODWORD(v94));
  v8 = *(void (__thiscall **)(_DWORD *))(*a1 + 504);
  v94 = COERCE_FLOAT(&v91);
  v8(a1);
  v82 = 3.4028235e38;
  v87 = 0;
  v66[0] = 0.0;
  v86 = 0;
  v66[1] = 1.0;
  v66[2] = 0.57735026;
  v66[3] = 0.36397022;
  v66[4] = 0.26794919;
  v66[5] = 0.17632698;
  v66[6] = -0.17632698;
  v66[7] = -0.26794919;
  do
  {
    if ( v86 )
    {
      v10 = v66[v86];
      v83 = v88 - v69[0] * v10;
      v84 = v89 - v69[1] * v10;
      v85 = *(float *)&v90 - v10 * v69[2];
      off_10689714();
      v67[0] = 16.0;
      v67[1] = 16.0;
      v67[2] = 16.0;
      v68[0] = -16.0;
      v68[1] = -16.0;
      v68[2] = -16.0;
      v72 = v83 * 72.0 + COERCE_FLOAT(&v91);
      v73 = v84 * 72.0 + COERCE_FLOAT(&v72);
      v74 = 72.0 * v85 + COERCE_FLOAT(v68);
      sub_1001F200(v63, (float *)&v91, &v72, v68, v67);
      v9 = v94;
      sub_10265570(LODWORD(v94), 0);
      (*(void (__thiscall **)(int, float *, int, _BYTE *, float *, float))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v63,
        100745227,
        v78,
        v59,
        COERCE_FLOAT(LODWORD(v94)));
      if ( !*(_DWORD *)(dword_106CE63C + 48) )
        goto LABEL_11;
      v94 = -1.0;
      LODWORD(v93[1]) = 1;
      v93[0] = 0.0;
      LODWORD(v92) = 255;
    }
    else
    {
      v79 = v88 * 1024.0 + *(float *)&v91;
      v80 = v89 * 1024.0 + v92;
      v81 = 1024.0 * *(float *)&v90 + COERCE_FLOAT(&v91);
      sub_1001F180(v63, (float *)&v91, &v79);
      v9 = v94;
      sub_10265570(LODWORD(v94), 0);
      (*(void (__thiscall **)(int, float *, int, int *, float *, float))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v63,
        100745227,
        &v58,
        v59,
        COERCE_FLOAT(LODWORD(v94)));
      if ( !*(_DWORD *)(dword_106CE63C + 48) )
        goto LABEL_11;
      v94 = 5.0;
      LODWORD(v93[1]) = 1;
      v93[0] = 0.0;
      v92 = 0.0;
    }
    sub_101A0AD0((int)v59, (int)v60, 255, SLODWORD(v92), SLODWORD(v93[0]), SLODWORD(v93[1]), v94);
LABEL_11:
    v11 = v62;
    v12 = *(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)LODWORD(v9) + 1468);
    v94 = 0.0;
    v71 = v62;
    v13 = v12(LODWORD(v9), v62);
    if ( v11 )
    {
      while ( !v13 )
      {
        v14 = v11[77];
        if ( v14 == -1 )
          goto LABEL_40;
        v15 = &off_1061BE18[4 * (v14 & 0xFFF) + 1];
        v16 = v14 >> 12;
        if ( v15[1] != v16 || !*v15 )
          goto LABEL_40;
        if ( v15[1] == v16 )
          v17 = (_DWORD *)*v15;
        else
          v17 = 0;
        v11 = v17;
        v13 = (*(int (__thiscall **)(float, _DWORD *, _DWORD))(*(_DWORD *)LODWORD(v94) + 1468))(
                COERCE_FLOAT(LODWORD(v94)),
                v17,
                0);
        if ( !v17 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      if ( !v13 )
        goto LABEL_40;
    }
    v18 = LODWORD(v94) + 320;
    v75 = v60[0] - v59[0];
    v76 = v60[1] - v59[1];
    LODWORD(v93[1]) = sub_10022D70();
    v19 = (float *)sub_10022D70();
    v20 = *(float *)(v18 + 20) - *(float *)(v18 + 8);
    LODWORD(v93[0]) = v19;
    *v19 = v20 * 0.5 + *(float *)(v18 + 8);
    v19[1] = (*(float *)(v18 + 24) - *(float *)(v18 + 12)) * 0.5 + *(float *)(v18 + 12);
    v19[2] = 0.5 * (*(float *)(v18 + 28) - *(float *)(v18 + 16)) + *(float *)(v18 + 16);
    sub_100E8D90((_BYTE *)v18, (float *)LODWORD(v93[0]), (float *)LODWORD(v93[1]));
    v21 = *(int (__thiscall **)(int))(*(_DWORD *)v18 + 4);
    v93[1] = *(float *)(LODWORD(v93[1]) + 8);
    v22 = v21(v18);
    v23 = *(int (__thiscall **)(int))(*(_DWORD *)v18 + 8);
    v70 = *(float *)(v22 + 8) + v93[1];
    v24 = v23(v18);
    v25 = *(float *)(v24 + 8) + v93[1];
    v26 = v70;
    if ( v70 > v25 )
    {
      v26 = v25;
      v25 = v70;
    }
    v27 = v61;
    if ( v61 >= v26 )
    {
      if ( v27 <= v25 )
        v28 = 0.0;
      else
        v28 = v27 - v25;
    }
    else
    {
      v28 = v26 - v27;
    }
    v93[1] = v28 * v28 + v76 * v76 + v75 * v75;
    if ( off_10689708(v93[1]) < 80.0 )
    {
      if ( *(_DWORD *)(dword_106991BC + 48) )
      {
        sub_1011BC50((int)&v91, (int)v60, 0, 255, 0, 1, 30.0);
        sub_1011C120((int)v60, 16.0, 0, 255, 0, 1, 30.0);
      }
      if ( sub_100D7680((int)v11) )
      {
        v29 = sub_100D7680((int)v11);
        if ( (*(unsigned __int8 (__thiscall **)(int, float))(*(_DWORD *)v29 + 1528))(v29, COERCE_FLOAT(LODWORD(v94))) )
          v11 = (_DWORD *)sub_101E9B80(v11, &v91, &v88);
      }
      if ( *(_DWORD *)(dword_106991BC + 48) )
      {
        if ( v11 )
          v30 = sub_100D6390(v11);
        else
          v30 = "no usable entity found";
        Msg("Trace using: %s\n", v30);
      }
      v87 = v11;
      if ( !v86 )
        return v11;
    }
LABEL_40:
    ++v86;
  }
  while ( v86 < 1 );
  v31 = v94;
  if ( sub_101C5260(LODWORD(v94))
    && (v32 = *(_DWORD *)LODWORD(v31),
        LODWORD(v93[1]) = 256,
        v33 = sub_101C5260(LODWORD(v31)),
        (*(unsigned __int8 (__thiscall **)(float, int, _DWORD))(v32 + 1468))(
          COERCE_FLOAT(LODWORD(v31)),
          v33,
          LODWORD(v93[1]))) )
  {
    v34 = sub_101C5260(LODWORD(v31));
    v87 = (_DWORD *)v34;
  }
  else
  {
    v34 = (int)v87;
  }
  if ( v34 )
  {
    sub_10111A60(&v91, v78);
    v93[1] = 0.0;
    LODWORD(v93[0]) = &v88;
    v92 = COERCE_FLOAT(&v91);
    v35 = ((double (__cdecl *)(_BYTE *))sub_104245F0)(v78);
    v82 = v35;
    if ( *(_DWORD *)(dword_106991BC + 48) )
    {
      v36 = *(const char **)(v34 + 92);
      if ( !v36 )
        v36 = String;
      Msg("Trace found %s, dist %.2f\n", v36, v35);
    }
  }
  sub_10261520((int)&v91, 80.0, 0);
  v37 = (_DWORD *)sub_1025EEE0(v54);
  if ( v37 )
  {
    v38 = v94;
    do
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v37 + 72))(v37) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(float, _DWORD *, int))(*(_DWORD *)LODWORD(v38) + 1468))(
               COERCE_FLOAT(LODWORD(v38)),
               v37,
               512) )
        {
          sub_10111A60(&v91, &v79);
          v83 = v79 - *(float *)&v91;
          v84 = v80 - v92;
          v85 = v81 - v93[0];
          off_10689714();
          if ( v84 * v89 + v83 * v88 + v85 * *(float *)&v90 >= 0.9 )
          {
            v93[1] = 0.0;
            LODWORD(v93[0]) = &v88;
            v92 = COERCE_FLOAT(&v91);
            v39 = ((double (__cdecl *)(float *))sub_104245F0)(&v79);
            v93[1] = v39;
            if ( *(_DWORD *)(dword_106991BC + 48) )
            {
              v40 = (const char *)v37[23];
              if ( !v40 )
                v40 = String;
              Msg("Radius found %s, dist %.2f\n", v40, v39);
              v39 = v93[1];
            }
            if ( v39 < v82 )
            {
              sub_1001F180(v63, (float *)&v91, &v79);
              sub_10265570(LODWORD(v38), 0);
              (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
                dword_106B31F4,
                v63,
                100745227,
                v78,
                v55);
              if ( *(_DWORD *)(dword_106CE63C + 48) )
                sub_101A0AD0((int)v55, (int)v56, 255, 0, 0, 1, 5.0);
              if ( 1.0 == v56[8] || v57 == v37 )
              {
                v87 = v37;
                v82 = v93[1];
              }
            }
          }
        }
      }
      ++v54[0];
      v37 = (_DWORD *)sub_1025EEE0(v54);
    }
    while ( v37 );
  }
  v11 = v87;
  if ( v87 )
  {
    v45 = v94;
    goto LABEL_76;
  }
  v41 = v89 * 80.0 + v92;
  v42 = v88 * 80.0 + *(float *)&v91 - *(float *)&v91;
  v63[4] = v42;
  v43 = v42;
  v63[5] = v41 - v92;
  v44 = 80.0 * *(float *)&v90 + v93[0] - v93[0];
  v63[6] = v44;
  v65 = 0.0 != v44 * v44 + (v41 - v92) * (v41 - v92) + v43 * v43;
  v45 = v94;
  v63[14] = 0.0;
  v63[13] = 0.0;
  v63[12] = 0.0;
  v63[10] = 0.0;
  v64 = 1;
  v63[9] = 0.0;
  v63[8] = 0.0;
  v63[0] = *(float *)&v91;
  v63[1] = v92;
  v63[2] = v93[0];
  sub_10265570(LODWORD(v94), 0);
  (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v63,
    33570945,
    v78,
    v55);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v55, (int)v56, 255, 0, 0, 1, 5.0);
  if ( v57 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(float, _DWORD *, _DWORD))(*(_DWORD *)LODWORD(v45) + 1468))(
           COERCE_FLOAT(LODWORD(v45)),
           v57,
           0) )
    {
      if ( sub_100D7680((int)v57) )
      {
        v47 = sub_100D7680((int)v57);
        if ( (*(unsigned __int8 (__thiscall **)(int, float))(*(_DWORD *)v47 + 1528))(v47, COERCE_FLOAT(LODWORD(v45))) )
        {
          v11 = v57;
          if ( v57 )
          {
LABEL_76:
            if ( sub_100D7680((int)v11) )
            {
              v48 = sub_100D7680((int)v11);
              if ( (*(unsigned __int8 (__thiscall **)(int, float))(*(_DWORD *)v48 + 1528))(
                     v48,
                     COERCE_FLOAT(LODWORD(v45))) )
              {
                v11 = (_DWORD *)sub_101E9B80(v11, &v91, &v88);
              }
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(dword_106991BC + 48) )
  {
    v93[1] = v46;
    if ( !v11 )
    {
      sub_1011BC50((int)&v91, (int)v60, 255, 0, 0, 1, 30.0);
      v93[1] = 30.0;
      LODWORD(v93[0]) = 1;
      v92 = 0.0;
      *(float *)&v91 = 0.0;
      v90 = 255;
      goto LABEL_84;
    }
    if ( v11 == v71 )
    {
      sub_1011BC50((int)&v91, (int)v60, 0, 255, 0, 1, 30.0);
      v93[1] = 30.0;
      LODWORD(v93[0]) = 1;
      v92 = 0.0;
      v91 = 255;
      *(float *)&v90 = 0.0;
LABEL_84:
      sub_1011C120((int)v60, 16.0, v90, v91, SLODWORD(v92), SLODWORD(v93[0]), v93[1]);
    }
    else
    {
      v49 = *v11;
      v75 = 8.0;
      v76 = 8.0;
      v77 = 8.0;
      v72 = -8.0;
      v73 = -8.0;
      v74 = -8.0;
      v93[1] = 30.0;
      LODWORD(v93[0]) = 1;
      v92 = 0.0;
      v91 = 255;
      *(float *)&v90 = 0.0;
      v89 = COERCE_FLOAT(&v75);
      v88 = COERCE_FLOAT(&v72);
      v50 = (*(int (__thiscall **)(_DWORD *))(v49 + 576))(v11);
      sub_1011BB20(v50, SLODWORD(v88), SLODWORD(v89), v90, v91, SLODWORD(v92), SLODWORD(v93[0]), v93[1]);
    }
  }
  if ( *(_DWORD *)(dword_106991BC + 48) )
  {
    if ( v11 )
      v51 = sub_100D6390(v11);
    else
      v51 = "no usable entity found";
    Msg("Radial using: %s\n", v51);
  }
  return v11;
}
