int __usercall sub_1019E560@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  char v4; // al
  int v5; // eax
  float v6; // edx
  bool v7; // zf
  float v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  double v19; // st7
  int v20; // ebx
  int v21; // eax
  int v22; // edi
  float v23; // eax
  int v24; // ebx
  int v25; // edi
  int v26; // edx
  int v27; // eax
  double v28; // st7
  int (__thiscall *v29)(int); // eax
  float *v30; // eax
  int v31; // ecx
  double v32; // st7
  int v33; // eax
  double v34; // st7
  float v35; // ecx
  double v36; // st7
  double v37; // st7
  float v38; // ecx
  double v39; // st7
  bool v40; // c0
  bool v41; // c3
  double v42; // st6
  double v43; // st7
  double v44; // st2
  int v45; // esi
  int v46; // eax
  float v47; // ecx
  int v48; // esi
  float v49; // [esp+84h] [ebp-10Ch]
  float v50; // [esp+88h] [ebp-108h]
  float v51; // [esp+90h] [ebp-100h]
  char v52[12]; // [esp+A4h] [ebp-ECh] BYREF
  float v53[7]; // [esp+B0h] [ebp-E0h] BYREF
  float v54; // [esp+CCh] [ebp-C4h]
  float v55; // [esp+D0h] [ebp-C0h]
  float v56[3]; // [esp+D4h] [ebp-BCh] BYREF
  float v57[6]; // [esp+E0h] [ebp-B0h] BYREF
  _BYTE v58[12]; // [esp+F8h] [ebp-98h] BYREF
  float v59; // [esp+104h] [ebp-8Ch]
  int v60; // [esp+108h] [ebp-88h]
  float v61; // [esp+10Ch] [ebp-84h]
  float v62; // [esp+110h] [ebp-80h]
  float v63; // [esp+114h] [ebp-7Ch]
  float v64[3]; // [esp+118h] [ebp-78h] BYREF
  float v65; // [esp+124h] [ebp-6Ch] BYREF
  float v66; // [esp+128h] [ebp-68h]
  float v67; // [esp+12Ch] [ebp-64h]
  float v68; // [esp+130h] [ebp-60h]
  float v69; // [esp+134h] [ebp-5Ch] BYREF
  float v70; // [esp+138h] [ebp-58h]
  int v71; // [esp+13Ch] [ebp-54h]
  float v72; // [esp+140h] [ebp-50h] BYREF
  float v73; // [esp+144h] [ebp-4Ch]
  int v74; // [esp+148h] [ebp-48h]
  float v75; // [esp+14Ch] [ebp-44h]
  float v76; // [esp+150h] [ebp-40h]
  int v77; // [esp+154h] [ebp-3Ch]
  float v78; // [esp+158h] [ebp-38h]
  float v79; // [esp+15Ch] [ebp-34h]
  int v80; // [esp+160h] [ebp-30h]
  float v81; // [esp+164h] [ebp-2Ch]
  float v82; // [esp+168h] [ebp-28h]
  float v83; // [esp+16Ch] [ebp-24h]
  float v84; // [esp+170h] [ebp-20h]
  float v85; // [esp+174h] [ebp-1Ch] BYREF
  float v86; // [esp+178h] [ebp-18h]
  float v87; // [esp+17Ch] [ebp-14h]
  float *v88; // [esp+180h] [ebp-10h]
  bool v89; // [esp+187h] [ebp-9h]
  float v90; // [esp+188h] [ebp-8h]
  float v91; // [esp+18Ch] [ebp-4h]

  if ( !*(_DWORD *)(dword_104491C4 + 48) )
    return 0;
  v4 = *(_BYTE *)(a1 + 320);
  if ( !v4 || v4 == 2 )
    return 0;
  v5 = (**(int (__thiscall ***)(int, _DWORD))(a1 + 1960))(a1 + 1960, 0);
  v6 = *(float *)(a1 + 3196);
  v7 = v5 == 0;
  v8 = *(float *)(a1 + 3200);
  v57[3] = *(float *)(a1 + 3192);
  v89 = !v7;
  v57[4] = v6;
  v57[5] = v8;
  v91 = off_103EDFEC();
  v9 = *(_DWORD *)(a1 + 4);
  v10 = (*(int (__thiscall **)(int, const char *, float *, _BYTE *))(v9 + 140))(a1 + 4, "raytrace_fl", &v72, v58);
  (*(void (__thiscall **)(int, int))(v9 + 148))(a1 + 4, v10);
  v11 = *(_DWORD *)(a1 + 4);
  v12 = (*(int (__thiscall **)(int, const char *, float *, _BYTE *))(v11 + 140))(a1 + 4, "raytrace_fr", &v69, v58);
  (*(void (__thiscall **)(int, int))(v11 + 148))(a1 + 4, v12);
  v13 = *(_DWORD *)(a1 + 4);
  v14 = (*(int (__thiscall **)(int, const char *, float *, _BYTE *))(v13 + 140))(a1 + 4, "raytrace_rl", v56, v58);
  (*(void (__thiscall **)(int, int))(v13 + 148))(a1 + 4, v14);
  v15 = *(_DWORD *)(a1 + 4);
  v16 = (*(int (__thiscall **)(int, const char *, float *, _BYTE *))(v15 + 140))(a1 + 4, "raytrace_rr", v57, v58);
  (*(void (__thiscall **)(int, int))(v15 + 148))(a1 + 4, v16);
  v17 = *(_DWORD *)(a1 + 4);
  v18 = (*(int (__thiscall **)(int, const char *, char *, _BYTE *))(v17 + 140))(a1 + 4, "splash_pt", v52, v58);
  (*(void (__thiscall **)(int, int))(v17 + 148))(a1 + 4, v18);
  v75 = v56[0] - v72;
  v76 = v56[1] - v73;
  *(float *)&v77 = v56[2] - *(float *)&v74;
  v78 = v57[0] - v69;
  v79 = v57[1] - v70;
  *(float *)&v80 = v57[2] - *(float *)&v71;
  v84 = off_103EDFEC();
  v90 = off_103EDFEC();
  *(float *)&v74 = (float)*(int *)(a1 + 2296);
  v71 = v74;
  if ( v89 && v91 > 128.0 )
  {
    sub_1019DEB0(a1, v17, a2, a1, v72, v73, v74, v75, v76, v77, v84, v91);
    sub_1019DEB0(a1, v17, a2, a1, v69, v70, v71, v78, v79, v80, v90, v91);
    sub_100392A0((char *)a1, (int)&v65, 0, 0);
    if ( *(float *)(a1 + 3192) < -64.0 )
    {
      v81 = v75 - v65;
      v82 = v76 - v66;
      v83 = *(float *)&v77 - v67;
      off_103EDFEC();
      if ( *(float *)(a1 + 3196) <= 0.0 )
        goto LABEL_14;
      v85 = v75 + v72;
      v86 = v76 + v73;
      v19 = *(float *)&v77 + *(float *)&v74;
      goto LABEL_10;
    }
    if ( *(float *)(a1 + 3192) > 64.0 )
    {
      v81 = v65 + v78;
      v82 = v66 + v79;
      v83 = v67 + *(float *)&v80;
      off_103EDFEC();
      if ( *(float *)(a1 + 3196) > 0.0 )
      {
        v85 = v78 + v69;
        v86 = v79 + v70;
        v19 = *(float *)&v80 + *(float *)&v71;
LABEL_10:
        v87 = v19;
        sub_1019DAD0((float *)a1, v85, v86, v87, v81, v82, v83, *(float *)(a1 + 3196));
      }
    }
  }
LABEL_14:
  result = 1;
  if ( *(int *)(a1 + 2688) > 1 )
  {
    v20 = (*(int (__thiscall **)(int, const char *, _DWORD, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
            dword_1047C96C,
            "effects/splashwake4",
            0,
            1,
            0);
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    v22 = v21;
    v60 = v21;
    if ( v21 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 8))(v21);
    v23 = COERCE_FLOAT((*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v22 + 224))(v22, 1, 0, 0, v20));
    v24 = *(_DWORD *)(a1 + 2688);
    v25 = a1 + 2704;
    *(float *)(a1 + 2884) = v23;
    *(_BYTE *)(a1 + 2892) = 1;
    *(_DWORD *)(a1 + 2888) = 3;
    v26 = *(_DWORD *)LODWORD(v23);
    v84 = v23;
    v24 *= 2;
    (*(void (__thiscall **)(float, int))(v26 + 40))(COERCE_FLOAT(LODWORD(v23)), 3);
    (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 2884) + 68))(
      *(_DWORD *)(a1 + 2884),
      v24,
      v24,
      a1 + 2704);
    v27 = LODWORD(v84);
    *(_DWORD *)(a1 + 2912) = LODWORD(v84) + 4;
    *(_DWORD *)(a1 + 2920) = 0;
    *(_DWORD *)(a1 + 2916) = v24;
    *(_BYTE *)(a1 + 2944) = 0;
    *(_DWORD *)(a1 + 2924) = *(_DWORD *)(a1 + 2860);
    *(_DWORD *)(a1 + 2896) = *(_DWORD *)(a1 + 2868);
    *(_BYTE *)(a1 + 2908) = *(_BYTE *)(a1 + 2880);
    *(_DWORD *)(a1 + 2928) = 0;
    sub_10016990(a1 + 2948, v27, v24, (_DWORD *)(a1 + 2704));
    *(_DWORD *)(a1 + 2928) = 0;
    sub_10016A00((_DWORD *)(a1 + 2948));
    v28 = *((float *)off_103DC81C + 3) + 0.5;
    LODWORD(v91) = a1
                 + 24 * (((unsigned __int8)*(_DWORD *)(a1 + 2688) + (unsigned __int8)*(_DWORD *)(a1 + 2684) - 1) & 0xF)
                 + 2300;
    v29 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 36);
    v65 = v28;
    v30 = (float *)v29(a1);
    v31 = *(_DWORD *)(a1 + 2296);
    v64[0] = *v30;
    v64[1] = v30[1];
    LODWORD(v90) = v31 + 16;
    v32 = (double)(v31 + 16);
    v64[2] = v32;
    sub_100345D0(v64, (float *)LODWORD(v91));
    v33 = *(_DWORD *)(a1 + 2688);
    v66 = fmod(v32 + *(float *)(LODWORD(v91) + 16), 1.0);
    v34 = 0.0;
    v35 = 0.0;
    v67 = 0.0;
    v90 = 0.0;
    v91 = 0.0;
    if ( v33 >= 0 )
    {
      while ( 1 )
      {
        if ( LODWORD(v35) == v33 )
          v88 = v64;
        else
          v88 = (float *)(a1 + 24 * ((LOBYTE(v35) + (unsigned __int8)*(_DWORD *)(a1 + 2684)) & 0xF) + 2300);
        v51 = v34;
        v50 = v34;
        v49 = v88[3] - *((float *)off_103DC81C + 3);
        v68 = sub_100260E0(v49, v50, 0.5, v51, 1.0);
        v53[5] = 1.0;
        v53[4] = 1.0;
        v53[3] = 1.0;
        v59 = fabs(*(float *)(a1 + 3196));
        v36 = sub_100260E0(v59, 128.0, 600.0, 0.0, 1.0);
        v55 = v36 * v68 * 0.25;
        v53[0] = *v88;
        v53[1] = v88[1];
        v53[2] = v88[2];
        v37 = sub_10049180(v59, 128.0, 600.0, 32.0, 48.0);
        v38 = *(float *)&v88;
        v39 = 6.0 * v37 + (v37 - 6.0 * v37) * v68 + v88[5];
        v54 = v39;
        v40 = v39 > 0.0;
        v41 = 0.0 == v39;
        v34 = 0.0;
        if ( !v40 && !v41 )
          v54 = 0.0;
        v53[6] = v88[4];
        if ( v90 != 0.0 )
        {
          v42 = *(float *)(LODWORD(v90) + 4) - v88[1];
          v43 = *(float *)(LODWORD(v90) + 8) - v88[2];
          v61 = *(float *)LODWORD(v90) - *v88;
          v62 = v42;
          v63 = v43;
          off_103EDFEC();
          v44 = v63 * 0.0;
          v85 = v62 * -1.0 - v44;
          v86 = v44 - -1.0 * v61;
          v87 = v61 * 0.0 - 0.0 * v62;
          sub_1019D500(a1, v53, &v85);
          v34 = 0.0;
          v38 = *(float *)&v88;
        }
        v33 = *(_DWORD *)(a1 + 2688);
        v90 = v38;
        ++LODWORD(v91);
        if ( SLODWORD(v91) > v33 )
          break;
        v35 = v91;
      }
    }
    if ( *(_BYTE *)(a1 + 2892) )
    {
      v45 = *(_DWORD *)(a1 + 2888);
      v46 = sub_10016D90(v45, *(_DWORD *)(v25 + 420));
      sub_10016B00((_DWORD *)(v25 + 192), v45, v46);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v25 + 180) + 80))(
      *(_DWORD *)(v25 + 180),
      *(_DWORD *)(v25 + 420),
      *(_DWORD *)(v25 + 216),
      v25);
    v47 = v84;
    *(_DWORD *)(v25 + 208) = 0;
    *(_DWORD *)(v25 + 212) = 0;
    *(_DWORD *)(v25 + 416) = 0;
    *(_DWORD *)(v25 + 408) = 0;
    *(_DWORD *)(v25 + 320) = -1;
    *(_DWORD *)(v25 + 180) = 0;
    (*(void (__thiscall **)(float, int, _DWORD))(*(_DWORD *)LODWORD(v47) + 48))(COERCE_FLOAT(LODWORD(v47)), -1, 0);
    v48 = v60;
    (*(void (__thiscall **)(int))(*(_DWORD *)v60 + 12))(v60);
    (*(void (__thiscall **)(int))(*(_DWORD *)v48 + 4))(v48);
    return 1;
  }
  return result;
}
