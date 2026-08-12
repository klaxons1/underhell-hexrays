double __cdecl sub_101C0960(int *a1, int a2, int a3)
{
  char *v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int *v7; // ebx
  int v8; // edx
  int v9; // esi
  double (__thiscall *v10)(int *); // eax
  double v11; // st7
  int v12; // ebx
  int (__thiscall *v13)(int); // eax
  int v14; // esi
  unsigned int v15; // eax
  int *v16; // ecx
  unsigned int v17; // eax
  float v18; // ecx
  int v19; // ebx
  int v20; // eax
  int v21; // esi
  float *v22; // esi
  int v23; // esi
  int v24; // eax
  int v25; // eax
  float *v26; // eax
  double v27; // st6
  double v28; // st7
  int v29; // eax
  int v30; // esi
  float v31; // edx
  float v32; // ecx
  float v33; // eax
  float *v34; // ebx
  float *v35; // edi
  double v36; // st7
  double v37; // st6
  double v38; // st5
  double v39; // st6
  double v40; // st7
  double v41; // st4
  double v42; // st3
  double v43; // st4
  double v44; // st5
  double v45; // st3
  double v46; // st2
  double v47; // st3
  double v48; // rtt
  double v49; // st2
  double v50; // st6
  double v51; // rt0
  double v52; // st2
  double v53; // rt1
  double v54; // st3
  double v55; // st7
  double v56; // rt2
  double v57; // st4
  double v58; // st6
  double v59; // rtt
  int (__thiscall *v60)(int *); // eax
  void (__cdecl *v61)(float *); // edx
  int v62; // ecx
  double v63; // st7
  double v64; // st7
  double v65; // st7
  double v66; // st7
  double v67; // st1
  double v68; // st2
  double v69; // st3
  double v70; // st7
  double v71; // st7
  double v72; // st6
  double v73; // st5
  double v74; // st4
  double v75; // st7
  double v76; // st6
  double v77; // st4
  double v78; // rt1
  unsigned __int8 (__thiscall *v79)(int *); // edx
  unsigned __int8 (__thiscall *v80)(int *); // edx
  double v81; // st7
  char v82; // cl
  float v84; // [esp+0h] [ebp-9Ch]
  float v85; // [esp+0h] [ebp-9Ch]
  float v86; // [esp+0h] [ebp-9Ch]
  float v87; // [esp+0h] [ebp-9Ch]
  float v88; // [esp+0h] [ebp-9Ch]
  float v89; // [esp+4h] [ebp-98h]
  float v90; // [esp+8h] [ebp-94h]
  int v91[2]; // [esp+24h] [ebp-78h] BYREF
  int v92; // [esp+2Ch] [ebp-70h]
  int v93; // [esp+30h] [ebp-6Ch]
  int v94; // [esp+34h] [ebp-68h]
  void *Src; // [esp+38h] [ebp-64h]
  int v96; // [esp+3Ch] [ebp-60h]
  int v97; // [esp+40h] [ebp-5Ch]
  int v98; // [esp+44h] [ebp-58h]
  void *v99; // [esp+48h] [ebp-54h]
  float v100; // [esp+4Ch] [ebp-50h] BYREF
  float v101; // [esp+50h] [ebp-4Ch]
  float v102; // [esp+54h] [ebp-48h]
  float v103; // [esp+58h] [ebp-44h] BYREF
  float v104; // [esp+5Ch] [ebp-40h]
  float v105; // [esp+60h] [ebp-3Ch]
  float v106; // [esp+64h] [ebp-38h]
  float v107; // [esp+68h] [ebp-34h]
  float v108; // [esp+6Ch] [ebp-30h]
  float v109; // [esp+70h] [ebp-2Ch]
  float v110; // [esp+74h] [ebp-28h]
  float v111; // [esp+78h] [ebp-24h]
  int v112; // [esp+7Ch] [ebp-20h]
  int v113; // [esp+80h] [ebp-1Ch]
  int v114; // [esp+84h] [ebp-18h]
  float v115; // [esp+88h] [ebp-14h]
  int v116; // [esp+8Ch] [ebp-10h]
  float v117; // [esp+90h] [ebp-Ch]
  float v118; // [esp+94h] [ebp-8h]
  char v119; // [esp+9Bh] [ebp-1h]
  float v120; // [esp+A4h] [ebp+8h]
  float v121; // [esp+A8h] [ebp+Ch]
  float v122; // [esp+A8h] [ebp+Ch]
  float v123; // [esp+A8h] [ebp+Ch]

  Src = 0;
  v96 = 0;
  v97 = 0;
  v91[0] = 0;
  v91[1] = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v119 = 0;
  sub_102ABFC0(1);
  v3 = 0;
  v4 = 1;
  v98 = 1;
  v99 = 0;
  sub_1013A0E0(v91, 0, &flt_106F1CA8);
  if ( v96 < 2 )
  {
    sub_102ABFC0(1 - v96 + 1);
    v4 = v98;
    v3 = (char *)Src;
  }
  v5 = v4 + 1;
  v98 = v5;
  v99 = v3;
  if ( v5 - 2 > 0 )
    memcpy(v3 + 8, v3 + 4, 4 * (v5 - 2));
  if ( v3 != (char *)-4 )
    *((_DWORD *)v3 + 1) = 0;
  sub_1013A0E0(v91, v93, &flt_106F1CA8);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 288))(a2);
  v7 = a1;
  v8 = *a1;
  v113 = v6;
  v9 = (*(int (__thiscall **)(int *))(v8 + 316))(a1);
  v10 = *(double (__thiscall **)(int *))(*a1 + 116);
  v114 = v9;
  v117 = v10(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9) )
  {
    while ( 1 )
    {
      v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v9 + 24))(v9);
      v115 = v11;
      if ( v11 > 0.0 )
        break;
LABEL_48:
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 48))(v9);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9) )
        goto LABEL_49;
    }
    v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 8))(v9, 1);
    v13 = *(int (__thiscall **)(int))(*(_DWORD *)v12 + 68);
    v112 = v12;
    *(float *)&v14 = COERCE_FLOAT(v13(v12));
    v116 = v14;
    if ( *(float *)&v14 == 0.0 )
    {
      *(float *)&v14 = COERCE_FLOAT(sub_10280AC0());
      v116 = v14;
    }
    v15 = *(_DWORD *)(v14 + 412);
    v118 = *(float *)&v14;
    if ( v15 != -1 )
    {
      v16 = &off_1061BE18[4 * (v15 & 0xFFF) + 1];
      v17 = v15 >> 12;
      if ( v16[1] == v17 )
      {
        if ( *v16 )
        {
          if ( v16[1] == v17 )
            v18 = *(float *)v16;
          else
            v18 = 0.0;
          v118 = v18;
        }
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 40))(v12) )
    {
      if ( v113
        && ((*(int (__thiscall **)(int, float))(*(_DWORD *)v113 + 1080))(v113, COERCE_FLOAT(LODWORD(v118))) == 3
         || *(float *)(v14 + 448) >= (double)*(float *)(dword_106B31C8 + 12)) )
      {
        v19 = 1;
      }
      else if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 76))(v12) & 4) != 0 )
      {
        v19 = 1;
      }
      else
      {
        if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v12 + 116))(v12) >= 500.0 && sub_101C5260(a2) != v14 )
          v119 = 1;
        v20 = v5 - 1;
        v19 = v5;
        if ( v5 - 1 < 2 )
          goto LABEL_34;
        while ( *((_DWORD *)Src + v20) != LODWORD(v118) )
        {
          if ( --v20 < 2 )
            goto LABEL_34;
        }
        v19 = v20;
        if ( v20 == v5 )
        {
LABEL_34:
          v21 = v5;
          if ( v5 + 1 > v96 )
          {
            sub_102ABFC0(v5 - v96 + 1);
            v5 = v98;
          }
          v98 = ++v5;
          v99 = Src;
          if ( v5 - v21 - 1 > 0 )
            memcpy((char *)Src + 4 * v21 + 4, (char *)Src + 4 * v21, 4 * (v5 - v21 - 1));
          v22 = (float *)((char *)Src + 4 * v21);
          if ( v22 )
            *v22 = v118;
          sub_1013A0E0(v91, v93, &flt_106F1CA8);
        }
        if ( !v19 )
          goto LABEL_47;
      }
      if ( *(_BYTE *)(a2 + 306) != 6 && *(_BYTE *)(v116 + 306) != 6 )
      {
        v23 = v112;
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v112 + 280))(v112)
          || (v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 280))(v23),
              !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 32))(v24)) )
        {
          v115 = 0.0;
        }
      }
    }
    else
    {
      v19 = 0;
    }
LABEL_47:
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v114 + 20))(v114, &v103);
    v9 = v114;
    v25 = 3 * v19;
    v7 = a1;
    v26 = (float *)(v91[0] + 4 * v25);
    v27 = v115 * v105;
    v28 = v104 * v115;
    *v26 = v103 * v115 + *v26;
    v26[1] = v28 + v26[1];
    v26[2] = v27 + v26[2];
    goto LABEL_48;
  }
LABEL_49:
  (*(void (__thiscall **)(int *, int))(*v7 + 320))(v7, v9);
  v29 = v91[0];
  *(float *)(v91[0] + 12) = 0.0;
  *(float *)(v29 + 16) = 0.0;
  v30 = v5 - 1;
  *(float *)(v29 + 20) = 0.0;
  v31 = flt_106F1CA8;
  v118 = 0.0;
  v32 = flt_106F1CAC;
  v33 = flt_106F1CB0;
  v109 = flt_106F1CA8;
  v110 = flt_106F1CAC;
  v111 = flt_106F1CB0;
  v103 = flt_106F1CA8;
  v104 = flt_106F1CAC;
  v105 = flt_106F1CB0;
  if ( v5 - 1 < 0 )
  {
    v40 = v103;
    v37 = v109;
    v44 = v104;
    v45 = v111;
    v46 = v105;
    v41 = v110;
  }
  else
  {
    v34 = (float *)(v91[0] + 12 * v30 + 8);
    v35 = v34;
    do
    {
      v90 = *(v34 - 1) * *(v34 - 1) + *(v34 - 2) * *(v34 - 2) + *v34 * *v34;
      v36 = off_10689708(v90);
      v118 = v36 + v118;
      if ( *(v35 - 2) >= 0.0 )
      {
        v39 = *(v35 - 2) + v103;
        v103 = v39;
        v38 = v39;
        v37 = v109;
      }
      else
      {
        v37 = v109 - *(v35 - 2);
        v109 = v37;
        v38 = v103;
      }
      v40 = v38;
      if ( *(v35 - 1) >= 0.0 )
      {
        v43 = v104 + *(v35 - 1);
        v104 = v43;
        v42 = v43;
        v41 = v110;
      }
      else
      {
        v41 = v110 - *(v35 - 1);
        v110 = v41;
        v42 = v104;
      }
      v44 = v42;
      if ( *v35 >= 0.0 )
      {
        v47 = v105 + *v35;
        v105 = v47;
        v46 = v47;
        v45 = v111;
      }
      else
      {
        v45 = v111 - *v35;
        v111 = v45;
        v46 = v105;
      }
      v34 -= 3;
      v35 -= 3;
      --v30;
    }
    while ( v30 >= 0 );
    v33 = flt_106F1CB0;
    v32 = flt_106F1CAC;
    v31 = flt_106F1CA8;
    v5 = v98;
    v7 = a1;
  }
  v48 = v46;
  v49 = v37;
  v50 = v48;
  v108 = v33;
  v106 = v31;
  v107 = v32;
  if ( v49 >= v40 )
  {
    v52 = v49 - v40;
  }
  else
  {
    v51 = v49;
    v52 = v40 - v49;
    v40 = v51;
  }
  v109 = v52;
  v53 = v45;
  v54 = v40;
  v55 = v53;
  v106 = v54;
  if ( v41 >= v44 )
  {
    v57 = v41 - v44;
  }
  else
  {
    v56 = v41;
    v57 = v44 - v41;
    v44 = v56;
  }
  v110 = v57;
  v107 = v44;
  if ( v50 <= v55 )
  {
    v59 = v50;
    v58 = v55 - v50;
    v55 = v59;
  }
  else
  {
    v58 = v50 - v55;
  }
  v111 = v58;
  v108 = v55;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_106BAFF4 + 16))(dword_106BAFF4, &v100);
  v89 = v100 * v100 + v101 * v101 + v102 * v102;
  v120 = off_10689708(v89);
  if ( *(_BYTE *)(a2 + 306) == 6 || !(*(unsigned __int8 (__thiscall **)(int *))(*v7 + 40))(v7) )
    goto LABEL_87;
  v60 = *(int (__thiscall **)(int *))(*v7 + 280);
  v103 = 0.0;
  v104 = 0.0;
  v105 = 0.0;
  if ( v60(v7) )
  {
    v61 = *(void (__cdecl **)(float *))(*(_DWORD *)(*(int (__thiscall **)(int *))(*v7 + 280))(v7) + 36);
    v61(&v103);
  }
  else if ( ((*(int (__thiscall **)(int *))(*v7 + 92))(v7) & 0x2000) != 0 )
  {
    v62 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) ? *(_DWORD *)(a2 + 3588) : 0;
    if ( v62 )
      (*(void (__cdecl **)(float *))(*(_DWORD *)v62 + 44))(&v103);
  }
  v84 = v103 * v103 + v104 * v104 + v105 * v105;
  v121 = off_10689708(v84);
  v63 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106BAFF4 + 144))(dword_106BAFF4);
  v64 = 1.0 / v63 * v121 * v117;
  v122 = v64;
  if ( v64 <= 0.0 || (v85 = v109 * v109 + v110 * v110 + v111 * v111, v65 = off_10689708(v85), v122 <= v65) )
  {
LABEL_87:
    v75 = v108;
    v73 = v106;
    v74 = v107;
    v72 = 0.0;
  }
  else
  {
    v66 = 1.0 - v65 / v122;
    v67 = v109 * v66;
    v109 = v109 + v67;
    v68 = v110 * v66;
    v110 = v110 + v68;
    v69 = v66 * v111;
    v111 = v111 + v69;
    v86 = v69 * v69 + v68 * v68 + v67 * v67;
    v70 = off_10689708(v86);
    v123 = v70;
    v118 = v118 - v70;
    v71 = off_10689714() - v123;
    v72 = 0.0;
    if ( v71 < 0.0 )
      v71 = 0.0;
    v73 = v106 * v71;
    v74 = v107 * v71;
    v75 = v71 * v108;
  }
  if ( v120 > v72 )
  {
    v78 = v74;
    v77 = 1.0 / v120;
    v76 = v78;
  }
  else
  {
    v76 = v74;
    v77 = 1.0;
  }
  v79 = *(unsigned __int8 (__thiscall **)(int *))(*v7 + 40);
  v118 = v118 * v77;
  v109 = v109 * v77;
  v110 = v110 * v77;
  v111 = v111 * v77;
  v106 = v73 * v77;
  v107 = v76 * v77;
  v108 = v75 * v77;
  if ( v79(v7) )
  {
    if ( v118 > (double)v117 )
      v118 = v117 + (v118 - v117) * 0.5;
  }
  else
  {
    v80 = *(unsigned __int8 (__thiscall **)(int *))(*v7 + 4);
    v106 = v109;
    v107 = v110;
    v108 = v111;
    v109 = 0.0;
    v110 = 0.0;
    v111 = 0.0;
    if ( !v80(v7) )
      v118 = v118 + v117;
  }
  if ( a3 )
  {
    v87 = v109 * v109 + v110 * v110 + v111 * v111;
    *(float *)a3 = off_10689708(v87);
    v88 = v106 * v106 + v107 * v107 + v108 * v108;
    v81 = off_10689708(v88);
    v82 = v119;
    *(float *)(a3 + 4) = v81;
    *(_BYTE *)(a3 + 8) = v5 > 2;
    *(_BYTE *)(a3 + 9) = v82;
  }
  if ( v92 >= 0 && v91[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v91[0]);
  if ( v97 >= 0 && Src )
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
  return v118;
}
