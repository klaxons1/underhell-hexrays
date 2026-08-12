char __cdecl sub_10021960(int *a1, int a2, float *a3, float a4, int a5, float a6, int a7, int a8, float a9)
{
  int v9; // eax
  int v10; // ebx
  float v11; // esi
  int v12; // eax
  double v13; // st7
  int v14; // ecx
  double v15; // st7
  double v16; // st7
  int v17; // eax
  double v18; // st5
  double v19; // st5
  double v20; // st6
  int v21; // ecx
  float v22; // eax
  int v23; // edx
  int v24; // eax
  float v25; // eax
  int v26; // edx
  int v27; // ecx
  float v28; // eax
  float v29; // ecx
  int v30; // edx
  int v31; // edx
  float v32; // ecx
  float v33; // eax
  int v34; // edx
  double v35; // st7
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  char v41; // al
  int v42; // eax
  int v43; // eax
  int v44; // eax
  double v45; // st7
  int v46; // edx
  float *v47; // ecx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  float v55; // [esp+Ch] [ebp-4Ch]
  float v56; // [esp+Ch] [ebp-4Ch]
  float v57; // [esp+Ch] [ebp-4Ch]
  float v58; // [esp+Ch] [ebp-4Ch]
  float v59; // [esp+Ch] [ebp-4Ch]
  float v60; // [esp+Ch] [ebp-4Ch]
  float v61; // [esp+Ch] [ebp-4Ch]
  float v62; // [esp+Ch] [ebp-4Ch]
  float v63; // [esp+Ch] [ebp-4Ch]
  float v64; // [esp+Ch] [ebp-4Ch]
  float v65; // [esp+Ch] [ebp-4Ch]
  float v66; // [esp+Ch] [ebp-4Ch]
  float v67; // [esp+Ch] [ebp-4Ch]
  float v68; // [esp+Ch] [ebp-4Ch]
  float v69; // [esp+Ch] [ebp-4Ch]
  float v70; // [esp+Ch] [ebp-4Ch]
  float v71; // [esp+Ch] [ebp-4Ch]
  float v72; // [esp+Ch] [ebp-4Ch]
  int v73; // [esp+10h] [ebp-48h]
  int v74; // [esp+10h] [ebp-48h]
  int v75; // [esp+10h] [ebp-48h]
  int v76; // [esp+10h] [ebp-48h]
  int v77; // [esp+10h] [ebp-48h]
  int v78; // [esp+10h] [ebp-48h]
  int v79; // [esp+10h] [ebp-48h]
  int v80; // [esp+10h] [ebp-48h]
  int v81; // [esp+10h] [ebp-48h]
  int v82; // [esp+10h] [ebp-48h]
  int v83; // [esp+10h] [ebp-48h]
  int v84; // [esp+10h] [ebp-48h]
  int v85; // [esp+10h] [ebp-48h]
  int v86[2]; // [esp+20h] [ebp-38h] BYREF
  int v87; // [esp+28h] [ebp-30h]
  int v88; // [esp+2Ch] [ebp-2Ch] BYREF
  float v89; // [esp+30h] [ebp-28h]
  float v90; // [esp+34h] [ebp-24h]
  int v91; // [esp+38h] [ebp-20h]
  int v92; // [esp+3Ch] [ebp-1Ch]
  float v93; // [esp+40h] [ebp-18h] BYREF
  float v94; // [esp+44h] [ebp-14h] BYREF
  int v95; // [esp+48h] [ebp-10h]
  int v96; // [esp+4Ch] [ebp-Ch]
  int v97; // [esp+50h] [ebp-8h]
  char v98; // [esp+57h] [ebp-1h]

  v98 = 1;
  v97 = (int)sub_1001ACB0(&dword_10403330);
  if ( !v97 )
  {
    v97 = sub_100DDA40(1536);
    if ( (v97 & 7) != 0 )
      __debugbreak();
  }
  v96 = (int)sub_1001ACB0(&dword_10403320);
  if ( !v96 )
  {
    v96 = sub_100DDA40(2048);
    if ( (v96 & 7) != 0 )
      __debugbreak();
  }
  v92 = (int)sub_1001ACB0(&dword_10403330);
  if ( !v92 )
  {
    v92 = sub_100DDA40(1536);
    if ( (v92 & 7) != 0 )
      __debugbreak();
  }
  v91 = (int)sub_1001ACB0(&dword_10403320);
  if ( !v91 )
  {
    v91 = sub_100DDA40(2048);
    if ( (v91 & 7) != 0 )
      __debugbreak();
  }
  v9 = sub_10126D70(a1);
  v10 = a5;
  v11 = a4;
  if ( a5 >= v9 )
  {
    a5 = 0;
    v12 = sub_10127960(0);
    sub_1001BA00((_DWORD *)LODWORD(v11), v12);
    v10 = a5;
  }
  v94 = 0.0;
  v93 = 0.0;
  a4 = 0.0;
  a5 = 0;
  sub_1001B5E0((int)a1, a7, SLODWORD(v11), v10, 0, &v94, (int *)&a4);
  sub_1001B5E0((int)a1, a7, SLODWORD(v11), v10, 1, &v93, &a5);
  v13 = 1.0;
  v14 = *(_DWORD *)(LODWORD(v11) + 12);
  if ( (v14 & 0x100) != 0 )
  {
    v15 = sub_1001DC50((int)a1, SLODWORD(v11), v10, a7);
    v16 = v15 * a9;
    v95 = (int)v16;
    v13 = v16 - (double)(int)v16;
    a6 = v13;
    goto LABEL_32;
  }
  if ( (v14 & 0x80u) != 0 )
  {
    v17 = sub_10127B00(v10, *(_DWORD *)(LODWORD(v11) + 180));
    if ( v17 == -1 )
    {
      v13 = 0.0;
      a6 = 0.0;
    }
    else
    {
      v13 = *(float *)(a7 + 4 * v17);
      a6 = *(float *)(a7 + 4 * v17);
    }
    goto LABEL_32;
  }
  v18 = a6;
  if ( a6 >= 0.0 && v18 < 1.0 )
  {
    v20 = a6;
LABEL_31:
    v13 = v20;
    goto LABEL_32;
  }
  if ( (v14 & 1) != 0 )
  {
    v95 = (int)v18;
    v19 = v18 - (double)(int)v18;
    a6 = v19;
    v20 = v19;
    if ( v19 < 0.0 )
    {
      v13 = v19 + 1.0;
      a6 = v19 + 1.0;
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  if ( v18 <= 1.0 )
  {
    v13 = a6;
    if ( v18 < 0.0 )
    {
      v13 = 0.0;
      a6 = 0.0;
    }
  }
  else
  {
    a6 = 1.0;
  }
LABEL_32:
  if ( v94 >= 0.001 )
  {
    if ( v94 > 0.999 )
    {
      if ( v93 < 0.001 )
      {
        v95 = LODWORD(a4) + 1;
        if ( !(unsigned __int8)sub_1001B820((int)a1, v10, (_DWORD *)LODWORD(v11), LODWORD(a4) + 1, a5) )
        {
          v73 = a8;
          v58 = a6;
          v36 = sub_1001AC00((_DWORD *)LODWORD(v11), v95, a5);
          sub_10020DC0(a1, v36, a2, (int)a3, SLODWORD(v11), v10, v58, v73);
          goto LABEL_83;
        }
        goto LABEL_39;
      }
      v74 = a8;
      v59 = v13;
      if ( v93 > 0.999 )
      {
        v37 = sub_1001AC00((_DWORD *)LODWORD(v11), LODWORD(a4) + 1, a5 + 1);
        sub_10020DC0(a1, v37, a2, (int)a3, SLODWORD(v11), v10, v59, v74);
        goto LABEL_83;
      }
      v95 = LODWORD(a4) + 1;
      v38 = sub_1001AC00((_DWORD *)LODWORD(v11), LODWORD(a4) + 1, a5);
      sub_10020DC0(a1, v38, a2, (int)a3, SLODWORD(v11), v10, v59, v74);
      v75 = a8;
      v60 = a6;
      v39 = sub_1001AC00((_DWORD *)LODWORD(v11), v95, a5 + 1);
      sub_10020DC0(a1, v39, v97, v96, SLODWORD(v11), v10, v60, v75);
      goto LABEL_60;
    }
    if ( v93 >= 0.001 )
    {
      if ( v93 <= 0.999 )
      {
        if ( !*(_DWORD *)(dword_1040329C + 48) )
        {
          v82 = a8;
          v67 = v13;
          v50 = sub_1001AC00((_DWORD *)LODWORD(v11), SLODWORD(a4), a5);
          sub_10020DC0(a1, v50, a2, (int)a3, SLODWORD(v11), v10, v67, v82);
          v83 = a8;
          v68 = a6;
          v95 = LODWORD(a4) + 1;
          v51 = sub_1001AC00((_DWORD *)LODWORD(v11), LODWORD(a4) + 1, a5);
          sub_10020DC0(a1, v51, v97, v96, SLODWORD(v11), v10, v68, v83);
          sub_1001F670(a1, a3, a2, SLODWORD(v11), v10, v96, (float *)v97, v94, a8);
          v84 = a8;
          v69 = a6;
          v52 = sub_1001AC00((_DWORD *)LODWORD(v11), SLODWORD(a4), ++a5);
          sub_10020DC0(a1, v52, v97, v96, SLODWORD(v11), v10, v69, v84);
          v85 = a8;
          v70 = a6;
          v53 = sub_1001AC00((_DWORD *)LODWORD(v11), v95, a5);
          sub_10020DC0(a1, v53, v92, v91, SLODWORD(v11), v10, v70, v85);
          sub_1001F670(a1, (float *)v96, v97, SLODWORD(v11), v10, v91, (float *)v92, v94, a8);
LABEL_60:
          v35 = v93;
LABEL_61:
          v57 = v35;
          sub_1001F670(a1, a3, a2, SLODWORD(v11), v10, v96, (float *)v97, v57, a8);
          goto LABEL_83;
        }
        sub_1001B880(SLODWORD(a4), a5, v94, v93, (_DWORD *)LODWORD(v11), v86, (float *)&v88);
        if ( v89 < 0.001 )
        {
          sub_10020DC0(a1, v86[0], a2, (int)a3, SLODWORD(v11), v10, a6, a8);
          sub_10020DC0(a1, v87, v97, v96, SLODWORD(v11), v10, a6, a8);
          v35 = v90 / (*(float *)&v88 + v90);
          goto LABEL_61;
        }
        sub_10020DC0(a1, v86[0], a2, (int)a3, SLODWORD(v11), v10, a6, a8);
        sub_10020DC0(a1, v86[1], v97, v96, SLODWORD(v11), v10, a6, a8);
        v71 = v89 / (*(float *)&v88 + v89);
        sub_1001F670(a1, a3, a2, SLODWORD(v11), v10, v96, (float *)v97, v71, a8);
        sub_10020DC0(a1, v87, v92, v91, SLODWORD(v11), v10, a6, a8);
        v45 = v90;
        v46 = v91;
        v79 = a8;
        v47 = (float *)v92;
      }
      else
      {
        v80 = a8;
        v65 = v13;
        v48 = sub_1001AC00((_DWORD *)LODWORD(v11), SLODWORD(a4), ++a5);
        sub_10020DC0(a1, v48, a2, (int)a3, SLODWORD(v11), v10, v65, v80);
        v81 = a8;
        v66 = a6;
        v49 = sub_1001AC00((_DWORD *)LODWORD(v11), LODWORD(a4) + 1, a5);
        sub_10020DC0(a1, v49, v97, v96, SLODWORD(v11), v10, v66, v81);
        v45 = v94;
        v46 = v96;
        v79 = a8;
        v47 = (float *)v97;
      }
    }
    else
    {
      v95 = LODWORD(a4) + 1;
      if ( (unsigned __int8)sub_1001B820((int)a1, v10, (_DWORD *)LODWORD(v11), LODWORD(a4) + 1, a5) )
      {
        v76 = a8;
        v61 = a6;
        v40 = sub_1001AC00((_DWORD *)LODWORD(v11), SLODWORD(a4), a5);
        sub_10020DC0(a1, v40, a2, (int)a3, SLODWORD(v11), v10, v61, v76);
        v62 = 1.0 - v94;
        sub_1001F8B0(a1, (int)a3, a2, v10, v62, a8);
        goto LABEL_83;
      }
      v41 = sub_1001B820((int)a1, v10, (_DWORD *)LODWORD(v11), SLODWORD(a4), a5);
      v77 = a8;
      v63 = a6;
      if ( v41 )
      {
        v42 = sub_1001AC00((_DWORD *)LODWORD(v11), v95, a5);
        sub_10020DC0(a1, v42, a2, (int)a3, SLODWORD(v11), v10, v63, v77);
        sub_1001F8B0(a1, (int)a3, a2, v10, v94, a8);
        goto LABEL_83;
      }
      v43 = sub_1001AC00((_DWORD *)LODWORD(v11), SLODWORD(a4), a5);
      sub_10020DC0(a1, v43, a2, (int)a3, SLODWORD(v11), v10, v63, v77);
      v78 = a8;
      v64 = a6;
      v44 = sub_1001AC00((_DWORD *)LODWORD(v11), v95, a5);
      sub_10020DC0(a1, v44, v97, v96, SLODWORD(v11), v10, v64, v78);
      v45 = v94;
      v46 = v96;
      v79 = a8;
      v47 = (float *)v97;
    }
    v72 = v45;
    sub_1001F670(a1, a3, a2, SLODWORD(v11), v10, v46, v47, v72, v79);
    goto LABEL_83;
  }
  v21 = a5;
  if ( v93 >= 0.001 )
  {
    v28 = *(float *)(LODWORD(v11) + 68);
    if ( v93 > 0.999 )
    {
      ++a5;
      v29 = a4;
      if ( SLODWORD(a4) >= SLODWORD(v28) )
        LODWORD(v29) = LODWORD(v28) - 1;
      v30 = *(_DWORD *)(LODWORD(v11) + 72);
      if ( a5 >= v30 )
        a5 = v30 - 1;
      v55 = v13;
      sub_10020DC0(
        a1,
        *(__int16 *)(*(_DWORD *)(LODWORD(v11) + 60) + 2 * (LODWORD(v29) + a5 * LODWORD(v28)) + LODWORD(v11)),
        a2,
        (int)a3,
        SLODWORD(v11),
        v10,
        v55,
        a8);
      goto LABEL_83;
    }
    v94 = a4;
    if ( SLODWORD(a4) >= SLODWORD(v28) )
      LODWORD(v94) = LODWORD(v28) - 1;
    v31 = *(_DWORD *)(LODWORD(v11) + 72);
    if ( a5 >= v31 )
      v21 = v31 - 1;
    v56 = v13;
    sub_10020DC0(
      a1,
      *(__int16 *)(*(_DWORD *)(LODWORD(v11) + 60) + 2 * (LODWORD(v94) + v21 * LODWORD(v28)) + LODWORD(v11)),
      a2,
      (int)a3,
      SLODWORD(v11),
      v10,
      v56,
      a8);
    v32 = a4;
    v33 = *(float *)(LODWORD(v11) + 68);
    ++a5;
    if ( SLODWORD(a4) >= SLODWORD(v33) )
      LODWORD(v32) = LODWORD(v33) - 1;
    v34 = *(_DWORD *)(LODWORD(v11) + 72);
    if ( a5 >= v34 )
      a5 = v34 - 1;
    sub_10020DC0(
      a1,
      *(__int16 *)(*(_DWORD *)(LODWORD(v11) + 60) + 2 * (LODWORD(v32) + a5 * LODWORD(v33)) + LODWORD(v11)),
      v97,
      v96,
      SLODWORD(v11),
      v10,
      a6,
      a8);
    goto LABEL_60;
  }
  v22 = *(float *)(LODWORD(v11) + 68);
  v93 = a4;
  if ( SLODWORD(a4) >= SLODWORD(v22) )
    LODWORD(v93) = LODWORD(v22) - 1;
  v23 = *(_DWORD *)(LODWORD(v11) + 72);
  if ( a5 >= v23 )
    v21 = v23 - 1;
  v24 = sub_10127A00(
          v10,
          *(__int16 *)(*(_DWORD *)(LODWORD(v11) + 60) + 2 * (LODWORD(v93) + v21 * LODWORD(v22)) + LODWORD(v11)));
  if ( (*(_DWORD *)(sub_101278E0(v24) + 12) & 0x20) != 0 )
  {
LABEL_39:
    v98 = 0;
    goto LABEL_83;
  }
  v25 = *(float *)(LODWORD(v11) + 68);
  v26 = a5;
  if ( SLODWORD(a4) >= SLODWORD(v25) )
    LODWORD(a4) = LODWORD(v25) - 1;
  v27 = *(_DWORD *)(LODWORD(v11) + 72);
  if ( a5 >= v27 )
    v26 = v27 - 1;
  sub_10020DC0(
    a1,
    *(__int16 *)(*(_DWORD *)(LODWORD(v11) + 60) + 2 * (LODWORD(a4) + v26 * LODWORD(v25)) + LODWORD(v11)),
    a2,
    (int)a3,
    SLODWORD(v11),
    v10,
    a6,
    a8);
LABEL_83:
  sub_1001AC40(&dword_10403330, (int *)v97);
  sub_1001AC40(&dword_10403320, (int *)v96);
  sub_1001AC40(&dword_10403330, (int *)v92);
  sub_1001AC40(&dword_10403320, (int *)v91);
  return v98;
}
