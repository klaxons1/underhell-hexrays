void __usercall sub_103AAC60(int a1@<ecx>, int a2@<esi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  double v5; // st7
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  float *v9; // eax
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  float *v14; // esi
  double v15; // st5
  double v16; // st7
  double v17; // rt1
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  _BYTE *v29; // esi
  int *v30; // ecx
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  int *v38; // esi
  int v39; // eax
  int v40; // ebx
  int *v41; // eax
  int *v42; // ecx
  unsigned int v43; // eax
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // ecx
  unsigned int v47; // eax
  int *v48; // edx
  int v49; // ecx
  int v50; // eax
  float *v51; // esi
  int *v52; // ecx
  unsigned int v53; // eax
  int v54; // ecx
  double v55; // st7
  int v56; // ecx
  unsigned int v57; // eax
  int v58; // ecx
  unsigned int v59; // eax
  int *v60; // ebx
  int v61; // ecx
  int v62; // esi
  int *v63; // ecx
  unsigned int v64; // eax
  int v65; // ecx
  int v66; // edx
  float *v67; // esi
  int *v68; // ecx
  unsigned int v69; // eax
  _DWORD *v70; // edx
  unsigned int v71; // eax
  int v72; // ecx
  unsigned int v73; // eax
  int v74; // ecx
  int v75; // edx
  float *v76; // esi
  int *v77; // ecx
  unsigned int v78; // eax
  int v79; // esi
  int v80; // eax
  float v81; // [esp+4h] [ebp-80h]
  char v82[12]; // [esp+14h] [ebp-70h] BYREF
  float v83[18]; // [esp+20h] [ebp-64h] BYREF
  float v84; // [esp+68h] [ebp-1Ch] BYREF
  float v85; // [esp+6Ch] [ebp-18h]
  float v86; // [esp+70h] [ebp-14h]
  float v87; // [esp+74h] [ebp-10h]
  float v88; // [esp+78h] [ebp-Ch]
  float v89; // [esp+7Ch] [ebp-8h]
  float v90; // [esp+80h] [ebp-4h]
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  v3 = *(_DWORD *)(a1 + 3916);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      if ( *v4 )
        return;
    }
  }
  v5 = *(float *)(a1 + 3960);
  if ( v5 > *(float *)(dword_106B31C8 + 12) )
    return;
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 368))(a1, a2) )
  {
    v6 = (float *)sub_100217F0((void *)a1);
    v84 = *v6;
    v85 = v6[1];
    v86 = v6[2];
    v7 = v6[1];
    v87 = *v6;
    v8 = v6[2];
    v88 = v7;
    v89 = v8;
    v9 = &v84;
  }
  else
  {
    if ( !sub_10022C40((_DWORD *)a1) )
    {
      v14 = (float *)(a1 + 3924);
      *(float *)(a1 + 3924) = 0.0;
      *(float *)(a1 + 3928) = 0.0;
      *(float *)(a1 + 3932) = -1.0;
      goto LABEL_11;
    }
    v10 = (float *)sub_10022C40((_DWORD *)a1);
    v11 = v10[179];
    v12 = v10[180];
    v13 = v10[181];
    v87 = v11;
    v88 = v12;
    v89 = v13;
    v9 = (float *)(sub_10022C40((_DWORD *)a1) + 716);
  }
  sub_1008D510(a2, (int)v9);
  v14 = (float *)(a1 + 3924);
  v15 = v5;
  v16 = v88 - *(float *)(a1 + 720);
  v17 = v15 - *(float *)(a1 + 724);
  *(float *)(a1 + 3924) = v87 - *(float *)(a1 + 716);
  *(float *)(a1 + 3928) = v16;
  *(float *)(a1 + 3932) = v17;
  off_10689714();
LABEL_11:
  v18 = *(_DWORD *)(a1 + 252) >> 11;
  v87 = *v14 * 2024.0;
  v88 = v14[1] * 2024.0;
  v89 = 2024.0 * v14[2];
  if ( (v18 & 1) != 0 )
    sub_100DAE60(a1);
  v19 = *(_DWORD *)(a1 + 252) >> 11;
  v84 = *(float *)(a1 + 580) + v87;
  v85 = *(float *)(a1 + 584) + v88;
  v86 = *(float *)(a1 + 588) + v89;
  if ( (v19 & 1) != 0 )
    sub_100DAE60(a1);
  sub_1002A5F0((int)&savedregs, a1 + 580, (float *)(a1 + 580), &v84, 16513, a1, 0, (int)v82);
  v20 = sub_101811E0("spotlight_end", -1);
  if ( v20 )
    *(_DWORD *)(a1 + 3920) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 8))(v20);
  else
    *(_DWORD *)(a1 + 3920) = -1;
  v21 = *(_DWORD *)(a1 + 3920);
  if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 2] != v21 >> 12 )
    v22 = 0;
  else
    v22 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 1];
  (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 96))(v22);
  v23 = *(_DWORD *)(a1 + 3920);
  if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 2] != v23 >> 12 )
    v24 = 0;
  else
    v24 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 1];
  sub_100E10C0(v24, v83);
  v25 = *(_DWORD *)(a1 + 3920);
  if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 2] != v25 >> 12 )
    v26 = 0;
  else
    v26 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v26 + 76))(v26, a1);
  v27 = *(_DWORD *)(a1 + 3920);
  if ( v27 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 2] != v27 >> 12 )
    v28 = 0;
  else
    v28 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 1];
  v29 = (_BYTE *)(v28 + 605);
  if ( *(_BYTE *)(v28 + 605) )
  {
    if ( *(_BYTE *)(v28 + 84) )
    {
      *(_BYTE *)(v28 + 88) |= 1u;
    }
    else
    {
      v30 = *(int **)(v28 + 24);
      if ( v30 )
        sub_100194B0(v30, 605);
    }
    *v29 = 0;
  }
  v31 = *(_DWORD *)(a1 + 3920);
  if ( v31 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 2] != v31 >> 12 )
    v32 = 0;
  else
    v32 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 1];
  sub_100C35E0((_BYTE *)(v32 + 116), 255, 255, 255);
  v33 = *(_DWORD *)(a1 + 3920);
  if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 2] != v33 >> 12 )
    v34 = 0;
  else
    v34 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 1];
  sub_10284530((float *)(v34 + 804), (float *)(a1 + 3952));
  v35 = sub_100FB5C0("sprites/glow_test02.vmt", 32.0);
  if ( v35 )
    *(_DWORD *)(a1 + 3916) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v35 + 8))(v35);
  else
    *(_DWORD *)(a1 + 3916) = -1;
  v36 = *(_DWORD *)(a1 + 3916);
  if ( v36 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v36 >> 12 )
    v37 = 0;
  else
    v37 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  v38 = (int *)(v37 + 248);
  v39 = *(_DWORD *)(v37 + 248);
  v40 = v39 | 0x8000;
  if ( v39 != (v39 | 0x8000) )
  {
    v41 = v38 - 62;
    if ( *((_BYTE *)v38 - 164) )
    {
      *((_BYTE *)v41 + 88) |= 1u;
    }
    else
    {
      v42 = (int *)v41[6];
      if ( v42 )
        sub_100194B0(v42, 248);
    }
    *v38 = v40;
  }
  v43 = *(_DWORD *)(a1 + 3916);
  if ( v43 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v43 >> 12 )
    v44 = 0;
  else
    v44 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  sub_1005C620((_BYTE *)(v44 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v44 + 116)));
  v45 = *(_DWORD *)(a1 + 3916);
  if ( v45 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v45 >> 12 )
    v46 = 0;
  else
    v46 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  sub_102005C0(v46, *(_DWORD *)(a1 + 3964));
  v47 = *(_DWORD *)(a1 + 3916);
  v48 = off_1061BE18;
  if ( v47 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v47 >> 12 )
    v49 = 0;
  else
    v49 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  v50 = *(_DWORD *)(v49 + 924);
  v51 = (float *)(v49 + 924);
  v90 = 32.0;
  if ( v50 != COERCE_INT(32.0) )
  {
    if ( *(_BYTE *)(v49 + 84) )
    {
      *(_BYTE *)(v49 + 88) |= 1u;
    }
    else
    {
      v52 = *(int **)(v49 + 24);
      if ( v52 )
        sub_100194B0(v52, 924);
    }
    *v51 = 32.0;
    v48 = off_1061BE18;
  }
  v53 = *(_DWORD *)(a1 + 3916);
  if ( v53 == -1 || v48[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != *(_DWORD *)(a1 + 3916) >> 12 )
    v54 = 0;
  else
    v54 = v48[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  v55 = *(float *)(v54 + 912);
  if ( v53 == -1 || v48[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v53 >> 12 )
    v56 = 0;
  else
    v56 = v48[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  v81 = v55;
  sub_1005C410(v56, v81);
  v57 = *(_DWORD *)(a1 + 3916);
  if ( v57 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v57 >> 12 )
    v58 = 0;
  else
    v58 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  sub_100FAAC0(v58, 640);
  v59 = *(_DWORD *)(a1 + 3916);
  v60 = off_1061BE18;
  if ( v59 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v59 >> 12 )
    v61 = 0;
  else
    v61 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  v62 = v61 + 116;
  if ( *(_BYTE *)(v61 + 119) != 32 )
  {
    if ( *(_BYTE *)(v61 + 84) )
    {
      *(_BYTE *)(v61 + 88) |= 1u;
    }
    else
    {
      v63 = *(int **)(v61 + 24);
      if ( v63 )
        sub_100194B0(v63, 116);
    }
    *(_BYTE *)(v62 + 3) = 32;
    v60 = off_1061BE18;
  }
  v64 = *(_DWORD *)(a1 + 3916);
  if ( v64 == -1 || v60[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v64 >> 12 )
    v65 = 0;
  else
    v65 = v60[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  v66 = *(_DWORD *)(v65 + 928);
  v67 = (float *)(v65 + 928);
  v90 = 0.0;
  if ( v66 != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(v65 + 84) )
    {
      *(_BYTE *)(v65 + 88) |= 1u;
    }
    else
    {
      v68 = *(int **)(v65 + 24);
      if ( v68 )
        sub_100194B0(v68, 928);
    }
    *v67 = 0.0;
    v60 = off_1061BE18;
  }
  v69 = *(_DWORD *)(a1 + 3920);
  if ( v69 == -1 || v60[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 2] != v69 >> 12 )
    v70 = 0;
  else
    v70 = (_DWORD *)v60[4 * (*(_DWORD *)(a1 + 3920) & 0xFFF) + 1];
  v71 = *(_DWORD *)(a1 + 3916);
  if ( v71 == -1 || v60[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v71 >> 12 )
    v72 = 0;
  else
    v72 = v60[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  sub_100FAE40(v72, (_DWORD *)a1, v70);
  v73 = *(_DWORD *)(a1 + 3916);
  if ( v73 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v73 >> 12 )
    v74 = 0;
  else
    v74 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  v75 = *(_DWORD *)(v74 + 804);
  v76 = (float *)(v74 + 804);
  v90 = 0.75;
  if ( v75 != COERCE_INT(0.75) )
  {
    if ( *(_BYTE *)(v74 + 84) )
    {
      *(_BYTE *)(v74 + 88) |= 1u;
    }
    else
    {
      v77 = *(int **)(v74 + 24);
      if ( v77 )
        sub_100194B0(v77, 804);
    }
    *v76 = 0.75;
  }
  v78 = *(_DWORD *)(a1 + 3916);
  if ( v78 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 2] != v78 >> 12 )
    v79 = 0;
  else
    v79 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3916) & 0xFFF) + 1];
  v80 = sub_100BEF30(a1, "light");
  sub_1024A060(v79, v80);
  *(float *)(a1 + 3936) = flt_106F1CA8;
  *(float *)(a1 + 3940) = flt_106F1CAC;
  *(float *)(a1 + 3944) = flt_106F1CB0;
}
