char __thiscall sub_10146130(int this, float *a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  unsigned int v5; // eax
  void *v6; // ecx
  unsigned int v7; // eax
  void *v8; // ecx
  unsigned int v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  int v12; // edi
  double v13; // st7
  double v14; // st4
  double v15; // st3
  double v16; // st5
  double v17; // st2
  double v18; // st1
  double v19; // st6
  unsigned int v20; // eax
  void *v21; // ecx
  unsigned int v22; // eax
  void *v23; // ecx
  unsigned int v24; // eax
  int v25; // edi
  unsigned int v26; // eax
  int v27; // edi
  double v28; // st7
  double v29; // st4
  double v30; // st3
  double v31; // st5
  double v32; // st2
  double v33; // st1
  double v34; // st6
  unsigned int v35; // eax
  _DWORD *v36; // ecx
  unsigned int v37; // eax
  void *v38; // ecx
  unsigned int v39; // eax
  void *v40; // ecx
  unsigned int v41; // eax
  int v42; // edi
  unsigned int v43; // eax
  int v44; // edi
  double v45; // st7
  unsigned int v46; // eax
  void *v47; // ecx
  unsigned int v48; // eax
  void *v49; // ecx
  unsigned int v50; // eax
  int v51; // edi
  unsigned int v52; // eax
  int v53; // edi
  double v54; // st7
  int v55; // edi
  float *v56; // ebx
  unsigned int v57; // eax
  int v58; // ecx
  const char *v59; // eax
  unsigned int v60; // eax
  _DWORD *v61; // ecx
  unsigned int v62; // eax
  void *v63; // ecx
  unsigned int v64; // eax
  void *v65; // ecx
  unsigned int v66; // eax
  int v67; // edi
  unsigned int v68; // eax
  int v69; // edi
  double v70; // st7
  float *v71; // ebx
  double v72; // st4
  double v73; // st3
  double v74; // st5
  double v75; // st2
  double v76; // st6
  unsigned int v77; // eax
  void *v78; // ecx
  char result; // al
  unsigned int v80; // eax
  void *v81; // ecx
  unsigned int v82; // eax
  int v83; // edi
  unsigned int v84; // esi
  int v85; // esi
  double v86; // st7
  double v87; // st4
  double v88; // st3
  double v89; // st5
  double v90; // st2
  double v91; // st6
  int v92; // [esp+0h] [ebp-4Ch]
  _DWORD v93[4]; // [esp+14h] [ebp-38h]
  int v94[3]; // [esp+24h] [ebp-28h] BYREF
  int v95; // [esp+30h] [ebp-1Ch] BYREF
  float v96; // [esp+34h] [ebp-18h]
  float v97; // [esp+38h] [ebp-14h]
  int v98; // [esp+3Ch] [ebp-10h] BYREF
  float v99; // [esp+40h] [ebp-Ch]
  float v100; // [esp+44h] [ebp-8h]
  _BYTE v101[4]; // [esp+48h] [ebp-4h] BYREF

  v92 = *(_DWORD *)(this + 228);
  v93[0] = "wheel_fl";
  v93[1] = "wheel_fr";
  v93[2] = "wheel_rl";
  v93[3] = "wheel_rr";
  sub_10145F10((_DWORD *)this, v92, 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 232), 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 236), 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 240), 0.0);
  v3 = *(_DWORD *)(this + 4);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  sub_100BCCF0(v4);
  v5 = *(_DWORD *)(this + 4);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  if ( sub_100BEFA0(v6, "wheel_fl", (int)&v95, (int)v94) )
  {
    v7 = *(_DWORD *)(this + 4);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    if ( sub_100BEFA0(v8, "wheel_fr", (int)&v98, (int)v94) )
    {
      v9 = *(_DWORD *)(this + 4);
      if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
        sub_100DAE60(v10);
      sub_10421BA0(&v95, v10 + 500, &v95);
      v11 = *(_DWORD *)(this + 4);
      if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v11 >> 12 )
        v12 = 0;
      else
        v12 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
        sub_100DAE60(v12);
      sub_10421BA0(&v98, v12 + 500, &v98);
      v13 = *(float *)&v98;
      v14 = v99;
      v15 = v100;
      v16 = (v96 + v99) * 0.5;
      v17 = (v100 + v97) * 0.5;
      v18 = (*(float *)&v95 + *(float *)&v98) * 0.5;
      v19 = v97;
      a2[12] = v18;
      a2[13] = v16;
      a2[14] = v17;
      a2[15] = v13 - v18;
      a2[16] = v14 - v16;
      a2[17] = v15 - v17;
      *(float *)(this + 196) = v19;
      *(float *)(this + 200) = v15;
    }
  }
  v20 = *(_DWORD *)(this + 4);
  if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v20 >> 12 )
    v21 = 0;
  else
    v21 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  if ( sub_100BEFA0(v21, "wheel_rl", (int)&v95, (int)v94) )
  {
    v22 = *(_DWORD *)(this + 4);
    if ( v22 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v22 >> 12 )
      v23 = 0;
    else
      v23 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    if ( sub_100BEFA0(v23, "wheel_rr", (int)&v98, (int)v94) )
    {
      v24 = *(_DWORD *)(this + 4);
      if ( v24 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v24 >> 12 )
        v25 = 0;
      else
        v25 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v25 + 252) & 0x800) != 0 )
        sub_100DAE60(v25);
      sub_10421BA0(&v95, v25 + 500, &v95);
      v26 = *(_DWORD *)(this + 4);
      if ( v26 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v26 >> 12 )
        v27 = 0;
      else
        v27 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v27 + 252) & 0x800) != 0 )
        sub_100DAE60(v27);
      sub_10421BA0(&v98, v27 + 500, &v98);
      v28 = *(float *)&v98;
      v29 = v99;
      v30 = v100;
      v31 = (v96 + v99) * 0.5;
      v32 = (v100 + v97) * 0.5;
      v33 = (*(float *)&v95 + *(float *)&v98) * 0.5;
      v34 = v97;
      a2[41] = v33;
      a2[42] = v31;
      a2[43] = v32;
      a2[44] = v28 - v33;
      a2[45] = v29 - v31;
      a2[46] = v30 - v32;
      *(float *)(this + 204) = v34;
      *(float *)(this + 208) = v30;
    }
  }
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 228), 1.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 232), 1.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 236), 1.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 240), 1.0);
  v35 = *(_DWORD *)(this + 4);
  if ( v35 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v35 >> 12 )
    v36 = 0;
  else
    v36 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  sub_100BCCF0(v36);
  v37 = *(_DWORD *)(this + 4);
  if ( v37 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v37 >> 12 )
    v38 = 0;
  else
    v38 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  if ( sub_100BEFA0(v38, "wheel_fl", (int)&v95, (int)v94) )
  {
    v39 = *(_DWORD *)(this + 4);
    if ( v39 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v39 >> 12 )
      v40 = 0;
    else
      v40 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    if ( sub_100BEFA0(v40, "wheel_fr", (int)&v98, (int)v94) )
    {
      v41 = *(_DWORD *)(this + 4);
      if ( v41 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v41 >> 12 )
        v42 = 0;
      else
        v42 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v42 + 252) & 0x800) != 0 )
        sub_100DAE60(v42);
      sub_10421BA0(&v95, v42 + 500, &v95);
      v43 = *(_DWORD *)(this + 4);
      if ( v43 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v43 >> 12 )
        v44 = 0;
      else
        v44 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v44 + 252) & 0x800) != 0 )
        sub_100DAE60(v44);
      sub_10421BA0(&v98, v44 + 500, &v98);
      v45 = *(float *)(this + 196) - v97;
      *(float *)(this + 212) = v45;
      *(float *)(this + 216) = *(float *)(this + 200) - v100;
      a2[33] = v45;
    }
  }
  v46 = *(_DWORD *)(this + 4);
  if ( v46 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v46 >> 12 )
    v47 = 0;
  else
    v47 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  if ( sub_100BEFA0(v47, "wheel_rl", (int)&v95, (int)v94) )
  {
    v48 = *(_DWORD *)(this + 4);
    if ( v48 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v48 >> 12 )
      v49 = 0;
    else
      v49 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    if ( sub_100BEFA0(v49, "wheel_rr", (int)&v98, (int)v94) )
    {
      v50 = *(_DWORD *)(this + 4);
      if ( v50 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v50 >> 12 )
        v51 = 0;
      else
        v51 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v51 + 252) & 0x800) != 0 )
        sub_100DAE60(v51);
      sub_10421BA0(&v95, v51 + 500, &v95);
      v52 = *(_DWORD *)(this + 4);
      if ( v52 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v52 >> 12 )
        v53 = 0;
      else
        v53 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v53 + 252) & 0x800) != 0 )
        sub_100DAE60(v53);
      sub_10421BA0(&v98, v53 + 500, &v98);
      v54 = *(float *)(this + 196) - v97;
      *(float *)(this + 220) = v54;
      *(float *)(this + 224) = *(float *)(this + 200) - v100;
      a2[62] = v54;
    }
  }
  v55 = 0;
  v56 = (float *)(this + 212);
  do
  {
    if ( 0.0 == *v56 )
    {
      v57 = *(_DWORD *)(this + 4);
      if ( v57 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v57 >> 12 )
        v58 = 0;
      else
        v58 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      v59 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v58 + 28))(v58, v101);
      if ( !v59 )
        v59 = String;
      DevWarning("Vehicle %s has invalid wheel attachment for %s - no movement\n", v59, (const char *)v93[v55]);
      *v56 = 1.0;
    }
    ++v55;
    ++v56;
  }
  while ( v55 < 4 );
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 228), 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 232), 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 236), 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 240), 0.0);
  v60 = *(_DWORD *)(this + 4);
  if ( v60 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v60 >> 12 )
    v61 = 0;
  else
    v61 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  sub_100BCCF0(v61);
  v62 = *(_DWORD *)(this + 4);
  if ( v62 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v62 >> 12 )
    v63 = 0;
  else
    v63 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  if ( sub_100BEFA0(v63, "raytrace_fl", (int)&v95, (int)v94)
    && ((v64 = *(_DWORD *)(this + 4), v64 == -1) || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v64 >> 12
      ? (v65 = 0)
      : (v65 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1]),
        sub_100BEFA0(v65, "raytrace_fr", (int)&v98, (int)v94)) )
  {
    v66 = *(_DWORD *)(this + 4);
    if ( v66 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v66 >> 12 )
      v67 = 0;
    else
      v67 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v67 + 252) & 0x800) != 0 )
      sub_100DAE60(v67);
    sub_10421BA0(&v95, v67 + 500, &v95);
    v68 = *(_DWORD *)(this + 4);
    if ( v68 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v68 >> 12 )
      v69 = 0;
    else
      v69 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v69 + 252) & 0x800) != 0 )
      sub_100DAE60(v69);
    sub_10421BA0(&v98, v69 + 500, &v98);
    v70 = *(float *)&v98;
    v71 = a2;
    v72 = v99;
    v73 = v100;
    v74 = (v96 + v99) * 0.5;
    v75 = (*(float *)&v95 + *(float *)&v98) * 0.5;
    v76 = (v97 + v100) * 0.5;
    a2[18] = v75;
    a2[19] = v74;
    a2[20] = v76;
    a2[21] = v70 - v75;
    a2[22] = v72 - v74;
    a2[23] = v73 - v76;
  }
  else
  {
    v71 = a2;
  }
  v77 = *(_DWORD *)(this + 4);
  if ( v77 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v77 >> 12 )
    v78 = 0;
  else
    v78 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  result = sub_100BEFA0(v78, "raytrace_rl", (int)&v95, (int)v94);
  if ( result )
  {
    v80 = *(_DWORD *)(this + 4);
    if ( v80 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v80 >> 12 )
      v81 = 0;
    else
      v81 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    result = sub_100BEFA0(v81, "raytrace_rr", (int)&v98, (int)v94);
    if ( result )
    {
      v82 = *(_DWORD *)(this + 4);
      if ( v82 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v82 >> 12 )
        v83 = 0;
      else
        v83 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v83 + 252) & 0x800) != 0 )
        sub_100DAE60(v83);
      sub_10421BA0(&v95, v83 + 500, &v95);
      v84 = *(_DWORD *)(this + 4);
      if ( v84 == -1 || off_1061BE18[4 * (v84 & 0xFFF) + 2] != v84 >> 12 )
        v85 = 0;
      else
        v85 = off_1061BE18[4 * (v84 & 0xFFF) + 1];
      if ( (*(_DWORD *)(v85 + 252) & 0x800) != 0 )
        sub_100DAE60(v85);
      result = sub_10421BA0(&v98, v85 + 500, &v98);
      v86 = *(float *)&v98;
      v87 = v99;
      v88 = v100;
      v89 = (v96 + v99) * 0.5;
      v90 = (*(float *)&v95 + *(float *)&v98) * 0.5;
      v91 = (v97 + v100) * 0.5;
      v71[47] = v90;
      v71[48] = v89;
      v71[49] = v91;
      v71[50] = v86 - v90;
      v71[51] = v87 - v89;
      v71[52] = v88 - v91;
    }
  }
  return result;
}
