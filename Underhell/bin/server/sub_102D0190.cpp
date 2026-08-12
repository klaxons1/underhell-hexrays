// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_102D0190@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        float *a4,
        float *a5,
        float *a6,
        float a7,
        float a8,
        int a9)
{
  int v9; // edi
  double v10; // st6
  double v11; // rt0
  double v12; // st7
  double v13; // st7
  double v14; // st4
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  int *v20; // edx
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // esi
  int *v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  float *v28; // esi
  int *v29; // ecx
  unsigned int v30; // eax
  int v31; // ecx
  unsigned int v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // eax
  int v38; // ecx
  unsigned int v39; // eax
  int v40; // eax
  int *v41; // edx
  unsigned int v42; // eax
  int v43; // ecx
  int v44; // esi
  int *v45; // ecx
  unsigned int v46; // eax
  int v47; // ecx
  int v48; // eax
  float *v49; // esi
  int *v50; // ecx
  unsigned int v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int v55; // eax
  int v56; // ecx
  void (__thiscall *v57)(int, float *, int, _DWORD *); // edx
  int v58; // eax
  unsigned int v59; // eax
  int v60; // ecx
  unsigned int v61; // eax
  int v62; // eax
  int *v63; // edx
  unsigned int v64; // eax
  int v65; // ecx
  int v66; // esi
  int *v67; // ecx
  unsigned int v68; // eax
  int v69; // ecx
  int v70; // eax
  float *v71; // esi
  int *v72; // ecx
  unsigned int v73; // eax
  int v74; // ecx
  unsigned int v75; // eax
  int v76; // ecx
  unsigned int v77; // eax
  int v78; // ecx
  int v79; // eax
  unsigned int v80; // eax
  int v81; // ecx
  unsigned int v82; // eax
  int v83; // eax
  int *v84; // edx
  unsigned int v85; // eax
  int v86; // ecx
  int v87; // esi
  int *v88; // ecx
  unsigned int v89; // eax
  int v90; // ecx
  int v91; // eax
  float *v92; // esi
  int *v93; // ecx
  unsigned int v94; // eax
  int v95; // ecx
  unsigned int v96; // eax
  int v97; // ecx
  unsigned int v98; // eax
  int *v99; // ecx
  double v100; // st7
  void (__thiscall *v101)(int); // eax
  double v102; // st7
  int v103; // edx
  int result; // eax
  int *v105; // ecx
  float v107[20]; // [esp+34h] [ebp-15Ch] BYREF
  _BYTE v108[12]; // [esp+84h] [ebp-10Ch] BYREF
  float v109[3]; // [esp+90h] [ebp-100h] BYREF
  float v110; // [esp+9Ch] [ebp-F4h] BYREF
  _BYTE v111[12]; // [esp+DCh] [ebp-B4h] BYREF
  float v112[13]; // [esp+E8h] [ebp-A8h] BYREF
  char v113; // [esp+11Eh] [ebp-72h]
  _DWORD v114[3]; // [esp+138h] [ebp-58h] BYREF
  float v115[3]; // [esp+144h] [ebp-4Ch] BYREF
  float v116; // [esp+150h] [ebp-40h] BYREF
  float v117; // [esp+154h] [ebp-3Ch]
  float v118; // [esp+158h] [ebp-38h]
  float v119; // [esp+15Ch] [ebp-34h]
  float v120; // [esp+160h] [ebp-30h]
  float v121; // [esp+164h] [ebp-2Ch]
  float v122; // [esp+168h] [ebp-28h] BYREF
  float v123; // [esp+16Ch] [ebp-24h]
  float v124; // [esp+170h] [ebp-20h]
  float v125; // [esp+174h] [ebp-1Ch] BYREF
  float v126; // [esp+178h] [ebp-18h]
  float v127; // [esp+17Ch] [ebp-14h]
  float v128; // [esp+180h] [ebp-10h]
  _DWORD v129[3]; // [esp+184h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+190h] [ebp+0h]

  v129[0] = a1;
  v129[1] = retaddr;
  v9 = sub_101811E0("mortarshell", -1);
  v10 = 128.0 * a6[2];
  v11 = a6[1] * 128.0;
  v116 = *a6 * 128.0 + *a5;
  v117 = v11 + a5[1];
  v118 = v10 + a5[2];
  sub_1001F180(v107, a5, &v116);
  sub_10265570(v115, v9, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v107,
    16395,
    v115,
    v108,
    a2,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v108, (int)v109, 255, 0, 0, 1, 5.0);
  sub_102CB8B0(v9, (int)v129, v9, a3, v109, &v110, &v122, v115);
  sub_1025F370((void *)v9, &v122, 0);
  v12 = v123 - a4[1];
  v119 = v122 - *a4;
  v120 = v12;
  v121 = 0.0;
  v13 = off_10689714();
  v116 = -v119 * (v13 * 0.25);
  v117 = v13 * 0.25 * -v120;
  v14 = v13 * 0.1;
  v119 = v119 * v14;
  v120 = v120 * v14;
  v121 = v14 * v121;
  v15 = sub_100FB5C0("sprites/laserbeam.vmt", 1.0);
  if ( v15 )
    *(_DWORD *)(v9 + 856) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
  else
    *(_DWORD *)(v9 + 856) = -1;
  v16 = *(_DWORD *)(v9 + 856);
  v125 = *a4 + v119;
  v126 = v120 + a4[1];
  v127 = a4[2] + 7500.0;
  if ( v16 == -1 || off_1061BE18[4 * (v16 & 0xFFF) + 2] != v16 >> 12 )
    v17 = 0;
  else
    v17 = off_1061BE18[4 * (v16 & 0xFFF) + 1];
  sub_100FAC00(v17, a4, &v125);
  v18 = *(_DWORD *)(v9 + 856);
  if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 1];
  sub_1005C620((_BYTE *)(v19 + 116), 16, 16, 8, HIBYTE(*(_DWORD *)(v19 + 116)));
  v21 = *(_DWORD *)(v9 + 856);
  if ( v21 == -1 || (v20 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 2] != v21 >> 12) )
    v22 = 0;
  else
    v22 = off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 1];
  v23 = v22 + 116;
  if ( *(_BYTE *)(v22 + 119) )
  {
    if ( *(_BYTE *)(v22 + 84) )
    {
      *(_BYTE *)(v22 + 88) |= 1u;
    }
    else
    {
      v24 = *(int **)(v22 + 24);
      if ( v24 )
        sub_100194B0(v24, 116);
    }
    *(_BYTE *)(v23 + 3) = 0;
  }
  v25 = *(_DWORD *)(v9 + 856);
  if ( v25 == -1 || (v20 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 2] != v25 >> 12) )
    v26 = 0;
  else
    v26 = off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 1];
  v27 = *(_DWORD *)(v26 + 928);
  v28 = (float *)(v26 + 928);
  v128 = 0.0;
  if ( v27 != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(v26 + 84) )
    {
      *(_BYTE *)(v26 + 88) |= 1u;
    }
    else
    {
      v29 = *(int **)(v26 + 24);
      if ( v29 )
        sub_100194B0(v29, 928);
    }
    *v28 = 0.0;
  }
  v30 = *(_DWORD *)(v9 + 856);
  if ( v30 == -1 || (v20 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 2] != v30 >> 12) )
    v31 = 0;
  else
    v31 = off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 1];
  sub_100FAB10(v31, (int)v20, 128);
  v32 = *(_DWORD *)(v9 + 856);
  if ( v32 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 2] != v32 >> 12 )
    v33 = 0;
  else
    v33 = off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 1];
  sub_1005C3A0(v33, 64.0);
  v34 = *(_DWORD *)(v9 + 856);
  if ( v34 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 2] != v34 >> 12 )
    v35 = 0;
  else
    v35 = off_1061BE18[4 * (*(_DWORD *)(v9 + 856) & 0xFFF) + 1];
  sub_1005C410(v35, 64.0);
  v36 = sub_100FB5C0("sprites/laserbeam.vmt", 1.0);
  if ( v36 )
    *(_DWORD *)(v9 + 860) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v36 + 8))(v36);
  else
    *(_DWORD *)(v9 + 860) = -1;
  v37 = *(_DWORD *)(v9 + 860);
  v125 = *a4 + v119;
  v126 = v120 + a4[1];
  v127 = a4[2] + 7500.0;
  if ( v37 == -1 || off_1061BE18[4 * (v37 & 0xFFF) + 2] != v37 >> 12 )
    v38 = 0;
  else
    v38 = off_1061BE18[4 * (v37 & 0xFFF) + 1];
  sub_100FAC00(v38, a4, &v125);
  v39 = *(_DWORD *)(v9 + 860);
  if ( v39 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 2] != v39 >> 12 )
    v40 = 0;
  else
    v40 = off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 1];
  sub_1005C620((_BYTE *)(v40 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v40 + 116)));
  v42 = *(_DWORD *)(v9 + 860);
  if ( v42 == -1 || (v41 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 2] != v42 >> 12) )
    v43 = 0;
  else
    v43 = off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 1];
  v44 = v43 + 116;
  if ( *(_BYTE *)(v43 + 119) )
  {
    if ( *(_BYTE *)(v43 + 84) )
    {
      *(_BYTE *)(v43 + 88) |= 1u;
    }
    else
    {
      v45 = *(int **)(v43 + 24);
      if ( v45 )
        sub_100194B0(v45, 116);
    }
    *(_BYTE *)(v44 + 3) = 0;
  }
  v46 = *(_DWORD *)(v9 + 860);
  if ( v46 == -1 || (v41 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 2] != v46 >> 12) )
    v47 = 0;
  else
    v47 = off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 1];
  v48 = *(_DWORD *)(v47 + 928);
  v49 = (float *)(v47 + 928);
  v128 = 0.0;
  if ( v48 != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(v47 + 84) )
    {
      *(_BYTE *)(v47 + 88) |= 1u;
    }
    else
    {
      v50 = *(int **)(v47 + 24);
      if ( v50 )
        sub_100194B0(v50, 928);
    }
    *v49 = 0.0;
  }
  v51 = *(_DWORD *)(v9 + 860);
  if ( v51 == -1 || (v41 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 2] != v51 >> 12) )
    v52 = 0;
  else
    v52 = off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 1];
  sub_100FAB10(v52, (int)v41, 128);
  v53 = *(_DWORD *)(v9 + 860);
  if ( v53 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 2] != v53 >> 12 )
    v54 = 0;
  else
    v54 = off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 1];
  sub_1005C3A0(v54, 8.0);
  v55 = *(_DWORD *)(v9 + 860);
  if ( v55 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 2] != v55 >> 12 )
    v56 = 0;
  else
    v56 = off_1061BE18[4 * (*(_DWORD *)(v9 + 860) & 0xFFF) + 1];
  sub_1005C410(v56, 8.0);
  v125 = v116 + v122;
  v126 = v117 + v123;
  v127 = v124 + 7500.0;
  sub_1001F180(v107, (float *)LODWORD(v127), &v125);
  sub_10265570(v114, v9, 0);
  v57 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16);
  v128 = COERCE_FLOAT(v111);
  v57(dword_106B31F4, v107, 16395, v114);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v111, (int)v112, 255, 0, 0, 1, 5.0);
  if ( v112[8] <= 1.0 && (v113 & 4) != 0 )
  {
    v58 = sub_100FB5C0("sprites/laserbeam.vmt", 1.0);
    if ( v58 )
      *(_DWORD *)(v9 + 864) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v58 + 8))(v58);
    else
      *(_DWORD *)(v9 + 864) = -1;
    v59 = *(_DWORD *)(v9 + 864);
    v125 = v116 + v122;
    v126 = v117 + v123;
    v127 = v124 + 7500.0;
    if ( v59 == -1 || off_1061BE18[4 * (v59 & 0xFFF) + 2] != v59 >> 12 )
      v60 = 0;
    else
      v60 = off_1061BE18[4 * (v59 & 0xFFF) + 1];
    sub_100FAC00(v60, &v122, &v125);
    v61 = *(_DWORD *)(v9 + 864);
    if ( v61 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 2] != v61 >> 12 )
      v62 = 0;
    else
      v62 = off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 1];
    sub_1005C620((_BYTE *)(v62 + 116), 16, 16, 8, HIBYTE(*(_DWORD *)(v62 + 116)));
    v64 = *(_DWORD *)(v9 + 864);
    if ( v64 == -1 || (v63 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 2] != v64 >> 12) )
      v65 = 0;
    else
      v65 = off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 1];
    v66 = v65 + 116;
    if ( *(_BYTE *)(v65 + 119) )
    {
      if ( *(_BYTE *)(v65 + 84) )
      {
        *(_BYTE *)(v65 + 88) |= 1u;
      }
      else
      {
        v67 = *(int **)(v65 + 24);
        if ( v67 )
          sub_100194B0(v67, 116);
      }
      *(_BYTE *)(v66 + 3) = 0;
    }
    v68 = *(_DWORD *)(v9 + 864);
    if ( v68 == -1 || (v63 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 2] != v68 >> 12) )
      v69 = 0;
    else
      v69 = off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 1];
    v70 = *(_DWORD *)(v69 + 928);
    v71 = (float *)(v69 + 928);
    v128 = 0.0;
    if ( v70 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(v69 + 84) )
      {
        *(_BYTE *)(v69 + 88) |= 1u;
      }
      else
      {
        v72 = *(int **)(v69 + 24);
        if ( v72 )
          sub_100194B0(v72, 928);
      }
      *v71 = 0.0;
    }
    v73 = *(_DWORD *)(v9 + 864);
    if ( v73 == -1 || (v63 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 2] != v73 >> 12) )
      v74 = 0;
    else
      v74 = off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 1];
    sub_100FAB10(v74, (int)v63, 128);
    v75 = *(_DWORD *)(v9 + 864);
    if ( v75 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 2] != v75 >> 12 )
      v76 = 0;
    else
      v76 = off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 1];
    sub_1005C3A0(v76, 32.0);
    v77 = *(_DWORD *)(v9 + 864);
    if ( v77 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 2] != v77 >> 12 )
      v78 = 0;
    else
      v78 = off_1061BE18[4 * (*(_DWORD *)(v9 + 864) & 0xFFF) + 1];
    sub_1005C410(v78, 32.0);
    v79 = sub_100FB5C0("sprites/laserbeam.vmt", 1.0);
    if ( v79 )
      *(_DWORD *)(v9 + 868) = *(_DWORD *)(*(int (__thiscall **)(int, float))(*(_DWORD *)v79 + 8))(
                                           v79,
                                           COERCE_FLOAT(LODWORD(v128)));
    else
      *(_DWORD *)(v9 + 868) = -1;
    v80 = *(_DWORD *)(v9 + 868);
    v125 = v116 + v122;
    v126 = v117 + v123;
    v127 = v124 + 7500.0;
    if ( v80 == -1 || off_1061BE18[4 * (v80 & 0xFFF) + 2] != v80 >> 12 )
      v81 = 0;
    else
      v81 = off_1061BE18[4 * (v80 & 0xFFF) + 1];
    sub_100FAC00(v81, &v122, &v125);
    v82 = *(_DWORD *)(v9 + 868);
    if ( v82 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 2] != v82 >> 12 )
      v83 = 0;
    else
      v83 = off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 1];
    sub_1005C620((_BYTE *)(v83 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v83 + 116)));
    v85 = *(_DWORD *)(v9 + 868);
    if ( v85 == -1 || (v84 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 2] != v85 >> 12) )
      v86 = 0;
    else
      v86 = off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 1];
    v87 = v86 + 116;
    if ( *(_BYTE *)(v86 + 119) )
    {
      if ( *(_BYTE *)(v86 + 84) )
      {
        *(_BYTE *)(v86 + 88) |= 1u;
      }
      else
      {
        v88 = *(int **)(v86 + 24);
        if ( v88 )
          sub_100194B0(v88, 116);
      }
      *(_BYTE *)(v87 + 3) = 0;
    }
    v89 = *(_DWORD *)(v9 + 868);
    if ( v89 == -1 || (v84 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 2] != v89 >> 12) )
      v90 = 0;
    else
      v90 = off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 1];
    v91 = *(_DWORD *)(v90 + 928);
    v92 = (float *)(v90 + 928);
    v128 = 0.0;
    if ( v91 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(v90 + 84) )
      {
        *(_BYTE *)(v90 + 88) |= 1u;
      }
      else
      {
        v93 = *(int **)(v90 + 24);
        if ( v93 )
          sub_100194B0(v93, 928);
      }
      *v92 = 0.0;
    }
    v94 = *(_DWORD *)(v9 + 868);
    if ( v94 == -1 || (v84 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 2] != v94 >> 12) )
      v95 = 0;
    else
      v95 = off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 1];
    sub_100FAB10(v95, (int)v84, 128);
    v96 = *(_DWORD *)(v9 + 868);
    if ( v96 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 2] != v96 >> 12 )
      v97 = 0;
    else
      v97 = off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 1];
    sub_1005C3A0(v97, 4.0);
    v98 = *(_DWORD *)(v9 + 868);
    if ( v98 == -1 || off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 2] != v98 >> 12 )
      sub_1005C410(0, 4.0);
    else
      sub_1005C410(off_1061BE18[4 * (*(_DWORD *)(v9 + 868) & 0xFFF) + 1], 4.0);
  }
  else
  {
    *(_DWORD *)(v9 + 864) = -1;
    *(_DWORD *)(v9 + 868) = -1;
  }
  *(float *)(v9 + 828) = *a4;
  *(float *)(v9 + 832) = a4[1];
  *(float *)(v9 + 836) = a4[2];
  if ( *(_DWORD *)(v9 + 872) != LODWORD(a7) )
  {
    if ( *(_BYTE *)(v9 + 84) )
    {
      *(_BYTE *)(v9 + 88) |= 1u;
    }
    else
    {
      v99 = *(int **)(v9 + 24);
      if ( v99 )
        sub_100194B0(v99, 872);
    }
    *(float *)(v9 + 872) = a7;
  }
  v100 = *(float *)(dword_106B31C8 + 12) + a7;
  v101 = *(void (__thiscall **)(int))(*(_DWORD *)v9 + 96);
  *(float *)(v9 + 804) = v100;
  v102 = v100 - a8;
  *(float *)(v9 + 808) = v102;
  *(float *)(v9 + 812) = v102 - 0.5;
  *(_DWORD *)(v9 + 816) = a9;
  v101(v9);
  v125 = v115[0];
  v126 = v115[1];
  sub_102CBDE0((float *)(v9 + 880), (float *)LODWORD(v115[2]));
  v103 = *(_DWORD *)(v9 + 876);
  v128 = 350.0;
  result = v9;
  if ( v103 != COERCE_INT(350.0) )
  {
    if ( *(_BYTE *)(v9 + 84) )
    {
      *(_BYTE *)(v9 + 88) |= 1u;
    }
    else
    {
      v105 = *(int **)(v9 + 24);
      if ( v105 )
        sub_100194B0(v105, 876);
    }
    result = v9;
    *(float *)(v9 + 876) = 350.0;
  }
  return result;
}
