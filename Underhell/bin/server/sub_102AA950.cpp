int __usercall sub_102AA950@<eax>(int a1@<ecx>, int a2@<esi>)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int *v14; // edx
  int v15; // ecx
  float *v16; // esi
  int *v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // edx
  float *v21; // esi
  double v22; // st7
  int *v23; // ecx
  int v24; // ecx
  int v25; // edx
  int *v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int *v30; // esi
  int v31; // eax
  int v32; // edi
  int *v33; // eax
  int *v34; // ecx
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  int *v38; // edx
  int v39; // eax
  int v40; // edi
  _DWORD *v41; // esi
  int *v42; // ecx
  unsigned int v43; // eax
  int v44; // ecx
  int v45; // eax
  float *v46; // esi
  int *v47; // ecx
  unsigned int v48; // eax
  int v49; // ecx
  double v50; // st7
  int v51; // ecx
  unsigned int v52; // eax
  int v53; // ecx
  unsigned int v54; // eax
  int *v55; // edi
  int v56; // ecx
  int v57; // esi
  int *v58; // ecx
  unsigned int v59; // eax
  int v60; // ecx
  int v61; // edx
  float *v62; // esi
  int *v63; // ecx
  unsigned int v64; // eax
  _DWORD *v65; // esi
  int v66; // ebx
  unsigned int v67; // eax
  int v68; // ecx
  unsigned int v69; // eax
  int result; // eax
  int v71; // edi
  _DWORD *v72; // esi
  int *v73; // ecx
  float v74; // [esp+4h] [ebp-30h]
  float v75[3]; // [esp+14h] [ebp-20h] BYREF
  float v76[3]; // [esp+20h] [ebp-14h] BYREF
  float v77; // [esp+2Ch] [ebp-8h]
  int v78; // [esp+30h] [ebp-4h]
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  *(float *)(a1 + 64) = 0.0;
  *(float *)(a1 + 68) = 0.0;
  *(float *)(a1 + 72) = 0.0;
  v78 = a1;
  *(float *)(a1 + 76) = 1.0;
  v3 = *(_DWORD *)(a1 + 56);
  if ( v3 )
  {
    sub_100BD6D0(*(void **)(a1 + 4), v3, (int)v76, 0, 0, 0);
  }
  else
  {
    a2 = *(_DWORD *)(a1 + 4);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(a1 + 4));
    v76[0] = *(float *)(a2 + 580);
    v76[1] = *(float *)(a2 + 584);
    v76[2] = *(float *)(a2 + 588);
  }
  sub_102AA6F0(a1, COERCE_FLOAT(&savedregs), a2, v76, v75);
  v4 = sub_101811E0("spotlight_end", -1);
  if ( v4 )
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  else
    *(_DWORD *)(a1 + 12) = -1;
  v5 = *(_DWORD *)(a1 + 12);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
  v7 = *(_DWORD *)(a1 + 12);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
  sub_100E0D20(v8, v75);
  v9 = *(_DWORD *)(a1 + 12);
  if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 76))(v10, *(_DWORD *)(a1 + 4));
  v11 = *(_DWORD *)(a1 + 12);
  if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
  sub_100C35E0((_BYTE *)(v12 + 116), 255, 255, 255);
  v13 = *(_DWORD *)(a1 + 12);
  v14 = off_1061BE18;
  if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v13 >> 12 )
    v15 = 0;
  else
    v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
  v16 = (float *)(v15 + 804);
  if ( *(_DWORD *)(v15 + 804) != *(_DWORD *)(a1 + 44) )
  {
    if ( *(_BYTE *)(v15 + 84) )
    {
      *(_BYTE *)(v15 + 88) |= 1u;
    }
    else
    {
      v17 = *(int **)(v15 + 24);
      if ( v17 )
        sub_100194B0(v17, 804);
    }
    *v16 = *(float *)(a1 + 44);
    v14 = off_1061BE18;
  }
  v18 = *(_DWORD *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
  {
    if ( v18 == -1 || v14[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v18 >> 12 )
      v19 = 0;
    else
      v19 = v14[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
    v20 = *(_DWORD *)(v19 + 800);
    v21 = (float *)(v19 + 800);
    v77 = 0.0;
    if ( v20 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(v19 + 84) )
      {
        *(_BYTE *)(v19 + 88) |= 1u;
        v22 = 0.0;
      }
      else
      {
        v23 = *(int **)(v19 + 24);
        if ( v23 )
          sub_100194B0(v23, 800);
        v22 = 0.0;
      }
LABEL_56:
      *v21 = v22;
    }
  }
  else
  {
    if ( v18 == -1 || v14[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v18 >> 12 )
      v24 = 0;
    else
      v24 = v14[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
    v25 = *(_DWORD *)(v24 + 800);
    v21 = (float *)(v24 + 800);
    v77 = 96.0;
    if ( v25 != COERCE_INT(96.0) )
    {
      if ( *(_BYTE *)(v24 + 84) )
      {
        *(_BYTE *)(v24 + 88) |= 1u;
      }
      else
      {
        v26 = *(int **)(v24 + 24);
        if ( v26 )
          sub_100194B0(v26, 800);
      }
      v22 = 96.0;
      goto LABEL_56;
    }
  }
  v27 = sub_100FB5C0("sprites/glow_test02.vmt", 96.0);
  if ( v27 )
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v27 + 8))(v27);
  else
    *(_DWORD *)(a1 + 8) = -1;
  v28 = *(_DWORD *)(a1 + 8);
  if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v28 >> 12 )
    v29 = 0;
  else
    v29 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  v30 = (int *)(v29 + 248);
  v31 = *(_DWORD *)(v29 + 248);
  v32 = v31 | 0x8000;
  if ( v31 != (v31 | 0x8000) )
  {
    v33 = v30 - 62;
    if ( *((_BYTE *)v30 - 164) )
    {
      *((_BYTE *)v33 + 88) |= 1u;
    }
    else
    {
      v34 = (int *)v33[6];
      if ( v34 )
        sub_100194B0(v34, 248);
    }
    *v30 = v32;
  }
  v35 = *(_DWORD *)(a1 + 8);
  if ( v35 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v35 >> 12 )
    v36 = 0;
  else
    v36 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  sub_1005C620((_BYTE *)(v36 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v36 + 116)));
  v37 = *(_DWORD *)(a1 + 8);
  v38 = off_1061BE18;
  if ( v37 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v37 >> 12 )
    v39 = 0;
  else
    v39 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  v40 = *(_DWORD *)(a1 + 52);
  v41 = (_DWORD *)(v39 + 820);
  if ( *(_DWORD *)(v39 + 820) != v40 )
  {
    if ( *(_BYTE *)(v39 + 84) )
    {
      *(_BYTE *)(v39 + 88) |= 1u;
    }
    else
    {
      v42 = *(int **)(v39 + 24);
      if ( v42 )
        sub_100194B0(v42, 820);
    }
    *v41 = v40;
    v38 = off_1061BE18;
  }
  v43 = *(_DWORD *)(a1 + 8);
  if ( v43 == -1 || v38[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v43 >> 12 )
    v44 = 0;
  else
    v44 = v38[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  v45 = *(_DWORD *)(v44 + 924);
  v46 = (float *)(v44 + 924);
  v77 = 32.0;
  if ( v45 != COERCE_INT(32.0) )
  {
    if ( *(_BYTE *)(v44 + 84) )
    {
      *(_BYTE *)(v44 + 88) |= 1u;
    }
    else
    {
      v47 = *(int **)(v44 + 24);
      if ( v47 )
        sub_100194B0(v47, 924);
    }
    *v46 = 32.0;
    v38 = off_1061BE18;
  }
  v48 = *(_DWORD *)(a1 + 8);
  if ( v48 == -1 || v38[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != *(_DWORD *)(a1 + 8) >> 12 )
    v49 = 0;
  else
    v49 = v38[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  v50 = *(float *)(v49 + 912);
  if ( v48 == -1 || v38[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v48 >> 12 )
    v51 = 0;
  else
    v51 = v38[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  v74 = v50;
  sub_1005C410(v51, v74);
  v52 = *(_DWORD *)(a1 + 8);
  if ( v52 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v52 >> 12 )
    v53 = 0;
  else
    v53 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  sub_100FAAC0(v53, 640);
  v54 = *(_DWORD *)(a1 + 8);
  v55 = off_1061BE18;
  if ( v54 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v54 >> 12 )
    v56 = 0;
  else
    v56 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  v57 = v56 + 116;
  if ( *(_BYTE *)(v56 + 119) != 32 )
  {
    if ( *(_BYTE *)(v56 + 84) )
    {
      *(_BYTE *)(v56 + 88) |= 1u;
    }
    else
    {
      v58 = *(int **)(v56 + 24);
      if ( v58 )
        sub_100194B0(v58, 116);
    }
    *(_BYTE *)(v57 + 3) = 32;
    v55 = off_1061BE18;
  }
  v59 = *(_DWORD *)(v78 + 8);
  if ( v59 == -1 || v55[4 * (*(_DWORD *)(v78 + 8) & 0xFFF) + 2] != v59 >> 12 )
    v60 = 0;
  else
    v60 = v55[4 * (*(_DWORD *)(v78 + 8) & 0xFFF) + 1];
  v61 = *(_DWORD *)(v60 + 928);
  v62 = (float *)(v60 + 928);
  v77 = 0.0;
  if ( v61 != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(v60 + 84) )
    {
      *(_BYTE *)(v60 + 88) |= 1u;
    }
    else
    {
      v63 = *(int **)(v60 + 24);
      if ( v63 )
        sub_100194B0(v63, 928);
    }
    *v62 = 0.0;
    v55 = off_1061BE18;
  }
  v64 = *(_DWORD *)(v78 + 12);
  if ( v64 == -1 || v55[4 * (*(_DWORD *)(v78 + 12) & 0xFFF) + 2] != v64 >> 12 )
    v65 = 0;
  else
    v65 = (_DWORD *)v55[4 * (*(_DWORD *)(v78 + 12) & 0xFFF) + 1];
  v66 = v78;
  v67 = *(_DWORD *)(v78 + 8);
  if ( v67 == -1 || v55[4 * (*(_DWORD *)(v78 + 8) & 0xFFF) + 2] != v67 >> 12 )
    v68 = 0;
  else
    v68 = v55[4 * (*(_DWORD *)(v78 + 8) & 0xFFF) + 1];
  sub_100FAE40(v68, *(_DWORD **)(v78 + 4), v65);
  v69 = *(_DWORD *)(v66 + 8);
  if ( v69 == -1 || off_1061BE18[4 * (*(_DWORD *)(v66 + 8) & 0xFFF) + 2] != v69 >> 12 )
    result = 0;
  else
    result = off_1061BE18[4 * (*(_DWORD *)(v66 + 8) & 0xFFF) + 1];
  v71 = *(_DWORD *)(v66 + 56);
  v72 = (_DWORD *)(result + 872);
  if ( *(_DWORD *)(result + 872) != v71 )
  {
    if ( *(_BYTE *)(result + 84) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v72 = v71;
    }
    else
    {
      v73 = *(int **)(result + 24);
      if ( v73 )
        result = sub_100194B0(v73, 872);
      *v72 = v71;
    }
  }
  return result;
}
