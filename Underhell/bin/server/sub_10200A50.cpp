int __usercall sub_10200A50@<eax>(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int result; // eax
  double v6; // st7
  int v7; // edx
  double v8; // st7
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  _DWORD *v19; // edi
  int *v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  float *v23; // edi
  int *v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // ecx
  int v30; // edx
  float *v31; // edi
  int *v32; // ecx
  unsigned int v33; // eax
  int v34; // eax
  int *v35; // edi
  int v36; // eax
  int v37; // ebx
  int *v38; // eax
  int *v39; // ecx
  unsigned int v40; // eax
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // edi
  int v44; // ebx
  int *v45; // ecx
  unsigned int v46; // eax
  int v47; // ecx
  int v48; // eax
  float *v49; // edi
  int *v50; // ecx
  unsigned int v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int v55; // eax
  int *v56; // edx
  int v57; // ecx
  int v58; // edi
  int *v59; // ecx
  unsigned int v60; // eax
  int v61; // ecx
  int v62; // eax
  float *v63; // edi
  int *v64; // ecx
  unsigned int v65; // eax
  int v66; // edi
  int v67; // ebx
  int *v68; // ecx
  unsigned int v69; // eax
  int v70; // edi
  unsigned int v71; // eax
  int v72; // ecx
  _DWORD *v73; // edi
  unsigned int v74; // eax
  int v75; // [esp+8h] [ebp-7Ch]
  char v76[12]; // [esp+14h] [ebp-70h] BYREF
  float v77[18]; // [esp+20h] [ebp-64h] BYREF
  float v78[3]; // [esp+68h] [ebp-1Ch] BYREF
  float *v79; // [esp+74h] [ebp-10h]
  float v80; // [esp+78h] [ebp-Ch]
  double v81; // [esp+7Ch] [ebp-8h] BYREF
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  v3 = *(_DWORD *)(a1 + 848);
  if ( v3 == -1
    || (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1], result = v3 >> 12, v4[1] != result)
    || !*v4 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v75 = a2;
    sub_10422220(a1 + 704, a1 + 828);
    v6 = *(float *)(a1 + 852);
    v7 = *(_DWORD *)(a1 + 252) >> 11;
    v80 = *(float *)(a1 + 828) * v6;
    *(float *)&v81 = *(float *)(a1 + 832) * v6;
    *((float *)&v81 + 1) = v6 * *(float *)(a1 + 836);
    if ( (v7 & 1) != 0 )
      sub_100DAE60(a1);
    v8 = *(float *)(a1 + 580) + v80;
    v9 = *(_DWORD *)(a1 + 252) >> 11;
    v79 = (float *)(a1 + 580);
    v78[0] = v8;
    v78[1] = *(float *)(a1 + 584) + *(float *)&v81;
    v78[2] = *(float *)(a1 + 588) + *((float *)&v81 + 1);
    if ( (v9 & 1) != 0 )
      sub_100DAE60(a1);
    sub_1002A5F0((int)&savedregs, a1, (float *)(a1 + 580), v78, 16395, a1, 0, (int)v76);
    v10 = sub_101811E0("spotlight_end", -1);
    if ( v10 )
      *(_DWORD *)(a1 + 848) = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 8))(v10, a2);
    else
      *(_DWORD *)(a1 + 848) = -1;
    v11 = *(_DWORD *)(a1 + 848);
    if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v11 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 96))(v12, v75);
    v13 = *(_DWORD *)(a1 + 848);
    if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v13 >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
    sub_100E0D20(v14, v77);
    v15 = *(_DWORD *)(a1 + 848);
    if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v15 >> 12 )
      v16 = 0;
    else
      v16 = off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 76))(v16, a1);
    v17 = *(_DWORD *)(a1 + 848);
    if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v17 >> 12 )
      v18 = 0;
    else
      v18 = off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
    v19 = (_DWORD *)(v18 + 116);
    if ( *(_DWORD *)(v18 + 116) != *(_DWORD *)(a1 + 116) )
    {
      if ( *(_BYTE *)(v18 + 84) )
      {
        *(_BYTE *)(v18 + 88) |= 1u;
      }
      else
      {
        v20 = *(int **)(v18 + 24);
        if ( v20 )
          sub_100194B0(v20, 116);
      }
      *v19 = *(_DWORD *)(a1 + 116);
    }
    v21 = *(_DWORD *)(a1 + 848);
    if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v21 >> 12 )
      v22 = 0;
    else
      v22 = off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
    v23 = (float *)(v22 + 804);
    if ( *(_DWORD *)(v22 + 804) != *(_DWORD *)(a1 + 852) )
    {
      if ( *(_BYTE *)(v22 + 84) )
      {
        *(_BYTE *)(v22 + 88) |= 1u;
      }
      else
      {
        v24 = *(int **)(v22 + 24);
        if ( v24 )
          sub_100194B0(v24, 804);
      }
      *v23 = *(float *)(a1 + 852);
    }
    if ( (*(_BYTE *)(a1 + 248) & 2) != 0 )
    {
      v25 = *(_DWORD *)(a1 + 848);
      v81 = 0.0;
      if ( v25 == -1 || off_1061BE18[4 * (v25 & 0xFFF) + 2] != v25 >> 12 )
        v26 = 0;
      else
        v26 = off_1061BE18[4 * (v25 & 0xFFF) + 1];
      sub_101BE090((float *)(v26 + 800), &v81);
    }
    v27 = sub_100FB5C0("sprites/glow_test02.vmt", *(float *)(a1 + 860));
    if ( v27 )
      *(_DWORD *)(a1 + 844) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v27 + 8))(v27);
    else
      *(_DWORD *)(a1 + 844) = -1;
    v28 = *(_DWORD *)(a1 + 844);
    if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v28 >> 12 )
      v29 = 0;
    else
      v29 = off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    v30 = *(_DWORD *)(v29 + 804);
    v31 = (float *)(v29 + 804);
    *((float *)&v81 + 1) = *(float *)(a1 + 864);
    if ( v30 != HIDWORD(v81) )
    {
      if ( *(_BYTE *)(v29 + 84) )
      {
        *(_BYTE *)(v29 + 88) |= 1u;
      }
      else
      {
        v32 = *(int **)(v29 + 24);
        if ( v32 )
          sub_100194B0(v32, 804);
      }
      *v31 = *((float *)&v81 + 1);
    }
    v33 = *(_DWORD *)(a1 + 844);
    if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v33 >> 12 )
      v34 = 0;
    else
      v34 = off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    v35 = (int *)(v34 + 248);
    v36 = *(_DWORD *)(v34 + 248);
    v37 = v36 | 0x8000;
    if ( v36 != (v36 | 0x8000) )
    {
      v38 = v35 - 62;
      if ( *((_BYTE *)v35 - 164) )
      {
        *((_BYTE *)v38 + 88) |= 1u;
      }
      else
      {
        v39 = (int *)v38[6];
        if ( v39 )
          sub_100194B0(v39, 248);
      }
      *v35 = v37;
    }
    v40 = *(_DWORD *)(a1 + 844);
    if ( v40 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v40 >> 12 )
      v41 = 0;
    else
      v41 = off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    sub_1005C620(
      (_BYTE *)(v41 + 116),
      *(_BYTE *)(a1 + 116),
      *(_BYTE *)(a1 + 117),
      *(_BYTE *)(a1 + 118),
      HIBYTE(*(_DWORD *)(v41 + 116)));
    v42 = *(_DWORD *)(a1 + 844);
    if ( v42 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v42 >> 12 )
      v43 = 0;
    else
      v43 = off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    v44 = *(_DWORD *)(a1 + 840);
    if ( *(_DWORD *)(v43 + 820) != v44 )
    {
      if ( *(_BYTE *)(v43 + 84) )
      {
        *(_BYTE *)(v43 + 88) |= 1u;
      }
      else
      {
        v45 = *(int **)(v43 + 24);
        if ( v45 )
          sub_100194B0(v45, 820);
      }
      *(_DWORD *)(v43 + 820) = v44;
    }
    v46 = *(_DWORD *)(a1 + 844);
    if ( v46 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v46 >> 12 )
      v47 = 0;
    else
      v47 = off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    v48 = *(_DWORD *)(v47 + 924);
    v49 = (float *)(v47 + 924);
    *((float *)&v81 + 1) = 60.0;
    if ( v48 != COERCE_INT(60.0) )
    {
      if ( *(_BYTE *)(v47 + 84) )
      {
        *(_BYTE *)(v47 + 88) |= 1u;
      }
      else
      {
        v50 = *(int **)(v47 + 24);
        if ( v50 )
          sub_100194B0(v50, 924);
      }
      *v49 = 60.0;
    }
    v51 = *(_DWORD *)(a1 + 844);
    if ( v51 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v51 >> 12 )
      v52 = 0;
    else
      v52 = off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    sub_1005C410(v52, *(float *)(a1 + 860));
    v53 = *(_DWORD *)(a1 + 844);
    if ( v53 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v53 >> 12 )
      v54 = 0;
    else
      v54 = off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    sub_100FAAC0(v54, 640);
    v55 = *(_DWORD *)(a1 + 844);
    v56 = off_1061BE18;
    if ( v55 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v55 >> 12 )
      v57 = 0;
    else
      v57 = off_1061BE18[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    v58 = v57 + 116;
    if ( *(_BYTE *)(v57 + 119) != 64 )
    {
      if ( *(_BYTE *)(v57 + 84) )
      {
        *(_BYTE *)(v57 + 88) |= 1u;
      }
      else
      {
        v59 = *(int **)(v57 + 24);
        if ( v59 )
          sub_100194B0(v59, 116);
      }
      *(_BYTE *)(v58 + 3) = 64;
      v56 = off_1061BE18;
    }
    v60 = *(_DWORD *)(a1 + 844);
    if ( v60 == -1 || v56[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v60 >> 12 )
      v61 = 0;
    else
      v61 = v56[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    v62 = *(_DWORD *)(v61 + 928);
    v63 = (float *)(v61 + 928);
    *((float *)&v81 + 1) = 0.0;
    if ( v62 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(v61 + 84) )
      {
        *(_BYTE *)(v61 + 88) |= 1u;
      }
      else
      {
        v64 = *(int **)(v61 + 24);
        if ( v64 )
          sub_100194B0(v64, 928);
      }
      *v63 = 0.0;
      v56 = off_1061BE18;
    }
    v65 = *(_DWORD *)(a1 + 844);
    if ( v65 == -1 || v56[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v65 >> 12 )
      v66 = 0;
    else
      v66 = v56[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
    v67 = *(_DWORD *)(a1 + 868);
    if ( *(_DWORD *)(v66 + 940) != v67 )
    {
      if ( *(_BYTE *)(v66 + 84) )
      {
        *(_BYTE *)(v66 + 88) |= 1u;
      }
      else
      {
        v68 = *(int **)(v66 + 24);
        if ( v68 )
          sub_100194B0(v68, 940);
      }
      *(_DWORD *)(v66 + 940) = v67;
      v56 = off_1061BE18;
    }
    v69 = *(_DWORD *)(a1 + 848);
    if ( *(_BYTE *)(a1 + 801) )
    {
      if ( v69 == -1 || v56[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v69 >> 12 )
        v70 = 0;
      else
        v70 = v56[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v70 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(v70);
        v56 = off_1061BE18;
      }
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(a1);
        v56 = off_1061BE18;
      }
      v71 = *(_DWORD *)(a1 + 844);
      if ( v71 == -1 || v56[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v71 >> 12 )
        v72 = 0;
      else
        v72 = v56[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1];
      return sub_100FAC00(v72, v79, (float *)(v70 + 580));
    }
    else
    {
      if ( v69 == -1 || v56[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v69 >> 12 )
        v73 = 0;
      else
        v73 = (_DWORD *)v56[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
      v74 = *(_DWORD *)(a1 + 844);
      if ( v74 == -1 || v56[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 2] != v74 >> 12 )
        return sub_100FAE40(0, (_DWORD *)a1, v73);
      else
        return sub_100FAE40(v56[4 * (*(_DWORD *)(a1 + 844) & 0xFFF) + 1], (_DWORD *)a1, v73);
    }
  }
  return result;
}
