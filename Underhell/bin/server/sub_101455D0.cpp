int __thiscall sub_101455D0(int this, int a2, float a3)
{
  int *v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  float *v8; // edi
  int (__thiscall *v9)(int); // eax
  double v10; // st6
  bool v11; // zf
  double v12; // st6
  double v13; // st7
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  double v20; // st7
  int v21; // eax
  int v22; // eax
  double v23; // st6
  double v24; // rt1
  double v25; // st6
  double v26; // st7
  char v27; // bl
  double v28; // st5
  bool v29; // c0
  bool v30; // c3
  long double v31; // st5
  double v32; // st7
  long double v33; // st7
  long double v34; // st6
  long double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // st7
  double v39; // st6
  double v40; // st7
  long double v41; // st5
  long double v42; // rt1
  double v43; // st5
  long double v44; // st6
  double v45; // st5
  double v46; // st7
  double v47; // st6
  bool v48; // c0
  bool v49; // c3
  long double v50; // st6
  double v51; // st6
  double v52; // st7
  long double v53; // st7
  double v54; // st6
  double v55; // st7
  int v56; // eax
  int v57; // ecx
  double v58; // st6
  double v59; // st7
  double v60; // st6
  double v61; // st6
  int v62; // ecx
  int v63; // edi
  int v64; // eax
  bool v65; // al
  int v66; // ecx
  char v67; // al
  int v68; // ecx
  float v70; // [esp+0h] [ebp-58h]
  float v71; // [esp+0h] [ebp-58h]
  float v72; // [esp+0h] [ebp-58h]
  float v73; // [esp+4h] [ebp-54h]
  float v74; // [esp+4h] [ebp-54h]
  float v75; // [esp+8h] [ebp-50h]
  float v76; // [esp+8h] [ebp-50h]
  float v77; // [esp+8h] [ebp-50h]
  float v78; // [esp+8h] [ebp-50h]
  float v79; // [esp+8h] [ebp-50h]
  float v80; // [esp+8h] [ebp-50h]
  float v81; // [esp+8h] [ebp-50h]
  float v82; // [esp+Ch] [ebp-4Ch]
  float v83; // [esp+Ch] [ebp-4Ch]
  float v84; // [esp+Ch] [ebp-4Ch]
  float v85; // [esp+10h] [ebp-48h]
  float v86; // [esp+10h] [ebp-48h]
  float v87; // [esp+10h] [ebp-48h]
  float v88; // [esp+10h] [ebp-48h]
  float v89; // [esp+10h] [ebp-48h]
  float v90; // [esp+10h] [ebp-48h]
  float v91; // [esp+10h] [ebp-48h]
  float v92; // [esp+20h] [ebp-38h] BYREF
  float v93; // [esp+24h] [ebp-34h]
  float v94; // [esp+28h] [ebp-30h]
  char v95; // [esp+2Ch] [ebp-2Ch]
  bool v96; // [esp+2Dh] [ebp-2Bh]
  __int16 v97; // [esp+2Eh] [ebp-2Ah]
  char v98; // [esp+30h] [ebp-28h]
  float *v99; // [esp+34h] [ebp-24h]
  double v100; // [esp+38h] [ebp-20h]
  char v101[4]; // [esp+40h] [ebp-18h]
  int v102; // [esp+44h] [ebp-14h]
  float v103; // [esp+48h] [ebp-10h]
  int v104; // [esp+4Ch] [ebp-Ch]
  int v105; // [esp+50h] [ebp-8h]
  float v106; // [esp+54h] [ebp-4h]
  float v107; // [esp+60h] [ebp+8h]

  v4 = *(int **)(this + 36);
  v5 = *v4;
  v102 = *(_DWORD *)(a2 + 36);
  v6 = (*(int (__thiscall **)(int *))(v5 + 8))(v4);
  v7 = *(_DWORD *)(this + 36);
  v8 = (float *)v6;
  v9 = *(int (__thiscall **)(int))(*(_DWORD *)v7 + 12);
  v99 = v8;
  v106 = 0.0;
  v105 = v9(v7);
  if ( *v8 < 2.0 )
  {
    if ( *v8 > -2.0 )
      goto LABEL_6;
    v10 = -1.0;
  }
  else
  {
    v10 = 1.0;
  }
  v106 = v10;
LABEL_6:
  v11 = *(_DWORD *)(dword_106B13D4 + 48) == 0;
  v12 = fabs(*v8 * 0.056818184);
  v103 = v12;
  if ( v11 )
  {
    v13 = v12;
  }
  else
  {
    v13 = v12;
    if ( *(float *)(a2 + 24) > 0.0 )
    {
      v14 = *(_DWORD *)(this + 36);
      v100 = v12;
      v104 = (int)(*(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14) + 516) * 0.056818184);
      if ( (double)v104 * 0.75 < v12 && fabs(*(float *)(a2 + 28)) > *(float *)(a2 + 24) )
        *(float *)(a2 + 24) = 400.0;
      v13 = v103;
    }
  }
  if ( (v102 & 0x600) != 0 )
  {
    BYTE4(v100) = (v102 & 0x200) != 0;
    v101[0] = (v102 & 0x10) != 0;
    if ( (v102 & 8) == 0 || (LOBYTE(v104) = 1, (v102 & 0x10) != 0) )
      LOBYTE(v104) = 0;
    v70 = v13;
    sub_101452E0(this, v70, (float *)v105, *((float *)&v100 + 1), v101[0], *(float *)&v104);
  }
  else if ( 0.0 == *(float *)(a2 + 28) )
  {
    v82 = v13;
    sub_10145270((float *)this, v82, (float *)v105);
  }
  else
  {
    v75 = v13;
    sub_101454D0(this, v75, (float *)v105, *(float *)(a2 + 28));
  }
  v15 = *(_DWORD *)(this + 8);
  *(float *)(this + 24) = 0.0;
  *(_DWORD *)(this + 28) = 0;
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 240))(v15);
  v17 = v16;
  v104 = *(int *)(dword_106B1344 + 44);
  if ( v16 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 320))(v16) )
  {
    v18 = __RTDynamicCast(
            v17,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CBasePlayer `RTTI Type Descriptor',
            0);
    v19 = v18;
    v20 = 0.0;
    if ( 0.0 == *(float *)(a2 + 24) && fabs(*(float *)(a2 + 28)) < 200.0 )
    {
      *(_DWORD *)(v18 + 3424) = 0;
      goto LABEL_39;
    }
    if ( *(float *)(a2 + 24) <= 0.0 )
    {
      if ( *(float *)(a2 + 24) >= 0.0 )
        goto LABEL_39;
      v22 = *(_DWORD *)(v18 + 3424);
      if ( v22 == 1 )
      {
        if ( -*(float *)&v104 < *(float *)(a2 + 24) )
        {
          *(float *)(a2 + 24) = *(float *)(dword_106B138C + 44);
          goto LABEL_39;
        }
      }
      else if ( v22 )
      {
        goto LABEL_39;
      }
      *(_DWORD *)(v19 + 3424) = 2;
    }
    else
    {
      v21 = *(_DWORD *)(v18 + 3424);
      if ( v21 == 2 )
      {
        if ( *(float *)&v104 > (double)*(float *)(a2 + 24) )
        {
          *(float *)(a2 + 24) = -*(float *)(dword_106B138C + 44);
          goto LABEL_39;
        }
      }
      else if ( v21 )
      {
        goto LABEL_39;
      }
      *(_DWORD *)(v19 + 3424) = 1;
    }
  }
  else
  {
    v20 = 0.0;
  }
LABEL_39:
  if ( v20 >= *(float *)(a2 + 24) )
  {
    v39 = v20;
    v40 = a3;
    if ( v39 <= *(float *)(a2 + 24) )
    {
      if ( (v102 & 8) != 0 )
      {
        v46 = v39;
        v27 = 1;
        if ( v39 > *(float *)(this + 12) )
          *(float *)(this + 12) = v39;
        v47 = *(float *)(this + 64);
        v48 = v47 > 0.1;
        v49 = 0.1 == v47;
        v50 = 0.1;
        if ( v48 || v49 )
          v50 = *(float *)(this + 64);
        *((float *)&v100 + 1) = v50;
        if ( v46 == *(float *)(this + 16) )
          goto LABEL_87;
        if ( v103 >= (double)*(float *)(v105 + 628) )
        {
          v52 = v103;
          v89 = *(float *)(v105 + 640);
          v84 = *(float *)(v105 + 636);
          v79 = *(float *)(v105 + 632);
          v51 = *(float *)(v105 + 628);
        }
        else
        {
          v89 = *(float *)(v105 + 636);
          v51 = v46;
          v52 = v103;
          v84 = v51;
          v79 = *(float *)(v105 + 628);
        }
        v74 = v51;
        v72 = v52;
        v53 = 1.0 - sub_10134630(v72, v74, v79, v84, v89) * fabs(*(float *)(this + 16));
        if ( v53 < 0.0 )
          v53 = 0.0;
        v50 = *((float *)&v100 + 1);
        if ( *((float *)&v100 + 1) < v53 )
LABEL_87:
          v53 = v50;
        v90 = *(float *)(this + 288) * a3;
        v80 = v53;
        sub_10424B10(v80, *(float *)(this + 12), v90);
        *(float *)(this + 12) = v53;
        v36 = 0.0;
        if ( v106 < 0.0 && *(_BYTE *)(this + 32) )
        {
          v37 = *(float *)(dword_106B12FC + 44);
          goto LABEL_60;
        }
      }
      else
      {
        if ( (v102 & 0x10) == 0 )
        {
          *(float *)(this + 12) = v39;
          *(float *)(this + 20) = v39;
          goto LABEL_101;
        }
        v27 = 1;
        if ( v39 < *(float *)(this + 12) )
          *(float *)(this + 12) = v39;
        v54 = -0.1;
        if ( *(float *)(this + 68) <= -0.1 )
          v54 = *(float *)(this + 68);
        v91 = v40 * *(float *)(this + 288);
        v81 = v54;
        sub_10424B10(v81, *(float *)(this + 12), v91);
        *(float *)(this + 12) = v54;
        v36 = 0.0;
        if ( v106 > 0.0 && *(_BYTE *)(this + 32) )
        {
          v38 = *(float *)(dword_106B12FC + 44) * a3;
          goto LABEL_61;
        }
      }
    }
    else
    {
      v41 = fabs(*(float *)(a2 + 24) * 0.0024999999);
      if ( v41 <= 1.0 )
      {
        if ( v41 < 0.25 )
          v41 = 0.25;
      }
      else
      {
        v41 = 1.0;
      }
      v42 = v41;
      v43 = v39;
      v44 = v42;
      v27 = 1;
      if ( v43 < *(float *)(this + 12) )
        *(float *)(this + 12) = v43;
      v45 = -0.1;
      if ( *(float *)(this + 68) <= -0.1 )
        v45 = *(float *)(this + 68);
      v88 = v40 * *(float *)(this + 288);
      v78 = v45 * v44;
      sub_10424B10(v78, *(float *)(this + 12), v88);
      *(float *)(this + 12) = v45 * v44;
      v36 = 0.0;
      if ( v106 > 0.0 && *(_BYTE *)(this + 32) )
      {
        v38 = *(float *)(dword_106B12FC + 44) * a3;
        goto LABEL_61;
      }
    }
  }
  else
  {
    v23 = *(float *)(a2 + 24) * 0.0024999999;
    *(float *)&v104 = v23;
    if ( v23 <= 1.0 )
    {
      if ( v23 < 0.25 )
      {
        v23 = 0.25;
        *(float *)&v104 = 0.25;
      }
    }
    else
    {
      v23 = 1.0;
      *(float *)&v104 = 1.0;
    }
    v24 = v23;
    v25 = v20;
    v26 = v24;
    v27 = 1;
    if ( v25 > *(float *)(this + 12) )
      *(float *)(this + 12) = v25;
    v28 = *(float *)(this + 64);
    v29 = v28 > 0.1;
    v30 = 0.1 == v28;
    v31 = 0.1;
    if ( v29 || v30 )
      v31 = *(float *)(this + 64);
    *((float *)&v100 + 1) = v31;
    if ( v25 == *(float *)(this + 16) )
    {
      v34 = v31;
    }
    else
    {
      if ( v103 >= (double)*(float *)(v105 + 628) )
      {
        v32 = v103;
        v85 = *(float *)(v105 + 640);
        v83 = *(float *)(v105 + 636);
        v76 = *(float *)(v105 + 632);
        v25 = *(float *)(v105 + 628);
      }
      else
      {
        v85 = *(float *)(v105 + 636);
        v32 = v103;
        v83 = v25;
        v76 = *(float *)(v105 + 628);
      }
      v73 = v25;
      v71 = v32;
      v33 = 1.0 - sub_10134630(v71, v73, v76, v83, v85) * fabs(*(float *)(this + 16));
      if ( v33 < 0.0 )
        v33 = 0.0;
      if ( *((float *)&v100 + 1) < v33 )
        v33 = *((float *)&v100 + 1);
      v34 = v33;
      v26 = *(float *)&v104;
    }
    v86 = *(float *)(this + 288) * a3;
    v35 = v26 * v34;
    v77 = v35;
    sub_10424B10(v77, *(float *)(this + 12), v86);
    *(float *)(this + 12) = v35;
    v36 = 0.0;
    if ( v106 < 0.0 && *(_BYTE *)(this + 32) )
    {
      v37 = *(float *)(dword_106B12FC + 44);
LABEL_60:
      v38 = v37 * a3 + v37 * a3;
LABEL_61:
      v87 = v38;
      sub_10424B10(1.0, *(float *)(this + 20), v87);
      *(float *)(this + 20) = 1.0;
      *(float *)(this + 12) = 0.0;
      *(_BYTE *)(this + 31) = 1;
LABEL_101:
      v27 = 0;
      goto LABEL_102;
    }
  }
  *(float *)(this + 20) = v36;
LABEL_102:
  if ( (v102 & 0x20000) != 0
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 56))(*(_DWORD *)(this + 36))
    && v27 )
  {
    *(float *)(this + 24) = 1.0;
  }
  if ( (v102 & 2) != 0 && *(_BYTE *)(this + 32) )
  {
    *(_BYTE *)(this + 28) = 1;
    if ( *(float *)(a2 + 28) >= -100.0 )
    {
      if ( *(float *)(a2 + 28) > 100.0 )
        *(_BYTE *)(this + 30) = 1;
    }
    else
    {
      *(_BYTE *)(this + 29) = 1;
    }
    v27 = 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 56))(*(_DWORD *)(this + 36)) )
  {
    v55 = 0.0;
    *(_BYTE *)(this + 28) = 1;
    *(float *)(this + 12) = 0.0;
    v27 = 0;
  }
  else
  {
    if ( v27 )
    {
      v56 = *(_DWORD *)(this + 44);
      v57 = *(_DWORD *)(this + 40);
      if ( v56 > v57 && v56 - v57 > 10 )
        *(_BYTE *)(this + 309) = 0;
    }
    v55 = 0.0;
  }
  if ( *(_BYTE *)(this + 28) || *(_BYTE *)(this + 31) )
    goto LABEL_125;
  if ( v27 )
  {
    if ( !*(_BYTE *)(this + 309) )
    {
      v58 = *(float *)(dword_106B31C8 + 12);
      *(_BYTE *)(this + 309) = 1;
      *(float *)(this + 292) = v58;
      goto LABEL_130;
    }
LABEL_125:
    if ( v27 )
      goto LABEL_130;
  }
  if ( *(_BYTE *)(this + 309) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 56))(*(_DWORD *)(this + 36)) )
    {
      v59 = *(float *)(dword_106B31C8 + 12);
      *(_BYTE *)(this + 309) = 0;
      *(float *)(this + 296) = v59 - *(float *)(this + 292);
    }
    v55 = 0.0;
  }
LABEL_130:
  v60 = (double)*(int *)(this + 40) / *(float *)(this + 72);
  if ( v60 <= 1.0 )
  {
    if ( v60 < v55 )
    {
      v107 = v55;
      goto LABEL_133;
    }
  }
  else
  {
    v60 = 1.0;
  }
  v107 = v60;
LABEL_133:
  v61 = *(float *)(dword_106B31C8 + 16);
  v97 = 0;
  v92 = v61;
  v98 = 0;
  v93 = v55;
  v94 = v55;
  v96 = v55 > *(float *)(this + 12);
  v62 = *(_DWORD *)(this + 36);
  v95 = v27;
  v63 = (*(int (__thiscall **)(int))(*(_DWORD *)v62 + 12))(v62);
  v64 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 8))(*(_DWORD *)(this + 36));
  v65 = v63 && v64 && *(float *)(v64 + 12) - *(float *)(v63 + 580) > 0.0;
  v66 = *(_DWORD *)(this + 8);
  LOBYTE(v97) = v65;
  v67 = (*(int (__thiscall **)(int))(*(_DWORD *)v66 + 236))(v66);
  v68 = *(_DWORD *)(this + 8);
  v93 = v107;
  HIBYTE(v97) = v67;
  v92 = a3;
  v94 = *v99;
  return (*(int (__thiscall **)(int, float *))(*(_DWORD *)v68 + 268))(v68, &v92);
}
