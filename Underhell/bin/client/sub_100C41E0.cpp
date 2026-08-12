void __thiscall sub_100C41E0(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  char v4; // bl
  unsigned __int16 v5; // ax
  int v6; // esi
  int v7; // eax
  char v8; // al
  int v9; // edx
  void (__thiscall *v10)(int, int); // edx
  void (__thiscall *v11)(int, int); // edx
  int *v12; // ebx
  int v13; // esi
  double v14; // st7
  double v15; // st6
  int v16; // eax
  int v17; // ebx
  bool v18; // c0
  int *v19; // esi
  double v20; // st7
  int *v21; // eax
  int v22; // esi
  int v23; // esi
  _DWORD *v24; // ecx
  int *v25; // eax
  float v26; // eax
  size_t v27; // esi
  double v28; // st5
  float v29; // eax
  double v30; // st5
  int v31; // esi
  double v32; // st4
  double v33; // st5
  double v34; // st3
  double v35; // st5
  int v36; // esi
  int v37; // esi
  double v38; // st7
  void (__thiscall *v39)(_DWORD *, int, int, int, int, int, _DWORD, _DWORD); // edx
  float v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int *v44; // edx
  double v45; // st6
  int v46; // ebx
  int v47; // edi
  int *v48; // esi
  int v49; // edx
  int *v50; // ecx
  int v51; // eax
  double v52; // st7
  int v53; // esi
  double v54; // st7
  double v55; // st6
  double v56; // st7
  double v57; // st6
  double v58; // rt0
  double v59; // st6
  double v60; // st7
  int v61; // edx
  int v62; // ecx
  int v63; // eax
  double v64; // st6
  int v65; // ecx
  double v66; // st6
  double v67; // st6
  double v68; // st6
  bool v69; // c0
  double v70; // st7
  double v71; // st5
  double v72; // st7
  bool v73; // c0
  double v74; // st7
  int v75; // esi
  int v76; // edx
  int v77; // [esp+4Ch] [ebp-84h] BYREF
  int v78; // [esp+50h] [ebp-80h]
  int v79; // [esp+54h] [ebp-7Ch]
  int v80; // [esp+58h] [ebp-78h]
  int v81[2]; // [esp+5Ch] [ebp-74h] BYREF
  int *v82; // [esp+64h] [ebp-6Ch]
  int v83; // [esp+68h] [ebp-68h]
  int v84; // [esp+6Ch] [ebp-64h] BYREF
  float *v85; // [esp+70h] [ebp-60h]
  int v86; // [esp+74h] [ebp-5Ch] BYREF
  int v87; // [esp+78h] [ebp-58h] BYREF
  int v88; // [esp+7Ch] [ebp-54h]
  int v89; // [esp+80h] [ebp-50h]
  int v90; // [esp+84h] [ebp-4Ch] BYREF
  int *v91; // [esp+88h] [ebp-48h]
  int v92; // [esp+8Ch] [ebp-44h]
  void *v93; // [esp+90h] [ebp-40h] BYREF
  int v94; // [esp+94h] [ebp-3Ch]
  int v95; // [esp+98h] [ebp-38h]
  int v96; // [esp+9Ch] [ebp-34h]
  void *v97; // [esp+A0h] [ebp-30h]
  int v98; // [esp+A4h] [ebp-2Ch]
  int v99; // [esp+A8h] [ebp-28h]
  int *v100; // [esp+ACh] [ebp-24h]
  int v101; // [esp+B0h] [ebp-20h]
  float v102; // [esp+B4h] [ebp-1Ch]
  int v103; // [esp+B8h] [ebp-18h]
  int *v104; // [esp+BCh] [ebp-14h]
  int v105; // [esp+C0h] [ebp-10h]
  int v106; // [esp+C4h] [ebp-Ch]
  float v107; // [esp+C8h] [ebp-8h]
  bool v108; // [esp+CFh] [ebp-1h]

  sub_102361D0(&v86, &v84);
  if ( *((_BYTE *)this + 410) )
  {
    v100 = 0;
    v103 = 0;
    if ( (int)this[100] > 0 )
    {
      v101 = 0;
      while ( 1 )
      {
        v2 = *(int *)(v101 + this[97] + 64);
        v99 = 50;
        v105 = v2;
        v104 = 0;
        if ( v2 > 0 )
          break;
LABEL_21:
        v100 = (int *)((char *)v100 + 9);
        v101 += 84;
        if ( ++v103 >= this[100] )
          goto LABEL_22;
      }
      while ( 1 )
      {
        v3 = dword_1043098C + v101;
        v91 = v104;
        v90 = v103;
        v4 = 0;
        v108 = 0;
        v5 = sub_100C1920((_WORD *)(dword_1043098C + v101), (int)&v90);
        if ( v5 == 0xFFFF )
        {
          v10 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40);
          v107 = 1.7014118e38;
          v10(dword_1047CA6C, 2130706432);
        }
        else
        {
          v6 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 20 * v5 + 16);
          v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10430988 + 40))(dword_10430988, v6);
          if ( !v7 )
            goto LABEL_16;
          v8 = *(_BYTE *)(v7 + 16);
          if ( (v8 & 1) != 0 )
          {
            v4 = 1;
          }
          else if ( (v8 & 2) != 0 )
          {
            v108 = 1;
          }
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10430988 + 44))(dword_10430988, v6);
          if ( v4 )
          {
            v106 = 2147418112;
            v9 = 2147418112;
LABEL_17:
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v9);
            goto LABEL_18;
          }
          if ( !v108 )
          {
LABEL_16:
            v102 = 1.7147039e38;
            v9 = 2130771967;
            goto LABEL_17;
          }
          v11 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40);
          v98 = 2130771712;
          v11(dword_1047CA6C, 2130771712);
        }
LABEL_18:
        v12 = v100;
        v13 = v99;
        (*(void (__thiscall **)(int, int, int *, int, int *))(*(_DWORD *)dword_1047CA6C + 48))(
          dword_1047CA6C,
          v99,
          v100,
          v99 + 8,
          v100 + 2);
        v99 = v13 + 9;
        if ( v13 + 9 >= 400 )
        {
          v99 = 50;
          v100 = (int *)((char *)v12 + 9);
        }
        v104 = (int *)((char *)v104 + 1);
        if ( (int)v104 >= v105 )
          goto LABEL_21;
      }
    }
  }
LABEL_22:
  v14 = 1.0;
  v15 = 0.0;
  v82 = (int *)this[96];
  v91 = v82;
  v101 = v84 - (_DWORD)v82 - 24;
  v16 = this[71];
  v81[1] = v86;
  v83 = v84;
  v90 = v86;
  v92 = v84;
  v17 = 0;
  v81[0] = 0;
  v89 = 0;
  v105 = v86 - 24;
  v107 = 0.0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v102 = *(float *)&v16;
  v103 = 0;
  v106 = 0;
  if ( v16 <= 0 )
    goto LABEL_46;
  do
  {
    v18 = v15 < *(float *)(*(_DWORD *)(this[68] + 4 * v106) + 0x2000);
    v104 = *(int **)(this[68] + 4 * v106);
    if ( !v18 )
    {
      v19 = v104;
      v20 = v15;
      if ( !*((_BYTE *)v104 + 8220) )
      {
        sub_100C3720(this - 11, v105, v104);
        v20 = 0.0;
      }
      v21 = (int *)v19[2053];
      v22 = v19[2054];
      LODWORD(v107) += v22;
      v100 = v21;
      v99 = v22;
      if ( (int)v21 > v103 )
        v103 = (int)v21;
      v23 = v17;
      if ( v17 + 1 > v94 )
      {
        sub_100798B0(&v93, v17 - v94 + 1);
        v20 = 0.0;
        v17 = v96;
      }
      v24 = v93;
      v96 = ++v17;
      v97 = v93;
      if ( v17 - v23 - 1 > 0 )
      {
        memcpy((char *)v93 + 12 * v23 + 12, (char *)v93 + 12 * v23, 12 * (v17 - v23 - 1));
        v20 = 0.0;
        v24 = v93;
      }
      v25 = &v24[3 * v23];
      if ( v25 )
      {
        *v25 = v99;
        v25[1] = (int)v100;
        v25[2] = (int)v104;
      }
      if ( v99 <= v101 )
      {
        v26 = v107;
        v27 = 4 * (3 * v17 - 3);
        while ( SLODWORD(v26) > v101 && v17 > *(_DWORD *)(dword_104309EC + 48) )
        {
          LODWORD(v26) -= *v24;
          *(float *)(v24[2] + 8196) = v20;
          v107 = v26;
          if ( v17 > 1 )
          {
            memcpy(v93, (char *)v93 + 12, v27);
            v20 = 0.0;
            v26 = v107;
            v24 = v93;
          }
          --v17;
          v27 -= 12;
        }
        v96 = v17;
      }
      v15 = v20;
      v14 = 1.0;
    }
    ++v106;
  }
  while ( v106 < SLODWORD(v102) );
  if ( v17 < 1 )
LABEL_46:
    v28 = v15;
  else
    v28 = v14;
  v29 = v107;
  if ( SLODWORD(v107) <= this[78] )
  {
    v29 = *((float *)this + 78);
    v107 = v29;
  }
  if ( LODWORD(v29) != this[79] )
  {
    *((float *)this + 79) = v29;
    *((float *)this + 83) = *((float *)off_103DC81C + 3);
    *((float *)this + 84) = *((float *)off_103DC81C + 3) + *((float *)this + 88);
  }
  if ( *((float *)this + 81) != v28 )
  {
    *((float *)this + 81) = v28;
    *((float *)this + 83) = *((float *)off_103DC81C + 3);
    *((float *)this + 84) = *((float *)off_103DC81C + 3) + *((float *)this + 88);
  }
  if ( !v17 && this[79] == this[80] && *((float *)this + 82) == *((float *)this + 81) )
  {
    *((float *)this + 83) = v15;
    *((float *)this + 84) = v15;
    if ( v95 >= 0 && v93 )
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v93);
  }
  else
  {
    v30 = *((float *)this + 84);
    v108 = 0;
    if ( v15 == v30 || v15 == *((float *)this + 83) || *((float *)this + 83) >= (double)*((float *)this + 84) )
    {
      this[80] = this[79];
      v14 = *((float *)this + 81);
    }
    else
    {
      v31 = this[80];
      v105 = this[79] - v31;
      v32 = (double)v105;
      v33 = *((float *)this + 81) - *((float *)this + 82);
      v108 = v32 < v15;
      v34 = (*((float *)off_103DC81C + 3) - *((float *)this + 83)) / (*((float *)this + 84) - *((float *)this + 83));
      if ( v34 <= v14 )
      {
        if ( v34 < v15 )
          v34 = v15;
      }
      else
      {
        v34 = v14;
      }
      this[80] = v31 + (int)(v32 * v34);
      v35 = v33 * v34 + *((float *)this + 82);
      if ( v35 <= v14 )
      {
        v14 = v35;
        if ( v15 > v35 )
          v14 = v15;
      }
    }
    v36 = v83;
    *((float *)this + 82) = v14;
    v37 = v36 - this[80] - 24;
    (*(void (__thiscall **)(_DWORD *, int *))(*this + 224))(this, &v87);
    v38 = *((float *)this + 86);
    v105 = HIWORD(v106) | 0xC00;
    v39 = *(void (__thiscall **)(_DWORD *, int, int, int, int, int, _DWORD, _DWORD))(*this + 540);
    v105 = (int)v38;
    HIBYTE(v87) = (int)v38;
    v39(this, v89, v37 <= 0 ? 0 : v37, v90 - v89, v92 - (v37 <= 0 ? 0 : v37), v87, *((float *)this + 82), 0);
    if ( v17 )
    {
      v40 = *((float *)this + 80);
      v89 += 12;
      v90 -= 12;
      if ( v108 )
        v40 = v107;
      v41 = v92 - LODWORD(v40);
      v42 = 0;
      v43 = v41 - 12;
      v106 = 0;
      if ( v17 > 0 )
      {
        v85 = (float *)(this - 11);
        do
        {
          v44 = (int *)((char *)v93 + 12 * v42);
          v100 = v44;
          if ( !v42 && *(float *)(v44[2] + 8204) > 0.0 )
          {
            v45 = *(float *)(v44[2] + 8196) - *(float *)(v44[2] + 8204);
            if ( v45 < 0.0 )
              v45 = 0.0;
            *(float *)(v44[2] + 8196) = v45;
            *(float *)(v44[2] + 8204) = 0.0;
          }
          v46 = *v100;
          v102 = 1.0;
          v47 = v100[2];
          v103 = v46;
          v98 = -1;
          if ( v46 > v101 )
          {
            v48 = *(int **)(v47 + 8236);
            v49 = 0;
            v50 = 0;
            v104 = v48;
            if ( (int)v48 > 0 )
            {
              v51 = *(_DWORD *)(v47 + 8224);
              v105 = v46 - v101;
              while ( 1 )
              {
                v49 += *(_DWORD *)(*(_DWORD *)v51 + 12);
                v50 = (int *)((char *)v50 + 1);
                if ( v49 >= v105 )
                  break;
                v51 += 4;
                if ( (int)v50 >= (int)v48 )
                  goto LABEL_88;
              }
              v104 = v50;
LABEL_88:
              v46 = v103;
            }
            v52 = (double)(int)v104;
            v53 = 0;
            v99 = 0;
            *(float *)&v105 = v52;
            v54 = *(float *)(v47 + 8200) / v52;
            v107 = v54;
            v55 = *(float *)(v47 + 8200) - *(float *)(v47 + 8196);
            *(float *)&v88 = v55;
            v56 = floor(v55 / v54);
            if ( *(float *)&v105 >= v56 )
            {
              v57 = 0.0;
              if ( v56 < 0.0 )
                v56 = 0.0;
            }
            else
            {
              v56 = *(float *)&v105;
              v57 = 0.0;
            }
            v58 = v57;
            v59 = v56;
            v60 = v58;
            v61 = (int)v59;
            v104 = (int *)(int)v59;
            if ( (int)v59 )
            {
              v62 = 0;
              if ( (int)v59 > 0 )
              {
                v63 = *(_DWORD *)(v47 + 8224);
                do
                {
                  v53 = v62;
                  v62 += *(_DWORD *)(*(_DWORD *)v63 + 12);
                  v63 += 4;
                  --v61;
                  v99 = v53;
                }
                while ( v61 );
                v61 = (int)v104;
                v46 = v103;
              }
              v64 = *(float *)&v88 - (double)(int)v104 * v107;
              if ( v64 >= 0.5 )
              {
                if ( v64 >= 1.0 )
                {
                  v53 = v62;
                }
                else
                {
                  v71 = (v64 - 0.5) * 4.0;
                  if ( v71 <= 1.0 )
                  {
                    v73 = v71 < v60;
                    v72 = v71;
                    if ( v73 )
                      v72 = 0.0;
                  }
                  else
                  {
                    v72 = 1.0;
                  }
                  v88 = v62 - v53;
                  v74 = ceil(v72 * (double)(v62 - v53));
                  v53 = (int)(v74 + (double)v99);
                }
              }
              else
              {
                v65 = *(_DWORD *)(*(_DWORD *)(v47 + 8224) + 4 * v61 - 4);
                v66 = *(float *)(v65 + 16);
                v98 = v61 - 1;
                if ( v60 == v66 )
                  *(float *)(v65 + 16) = *((float *)off_103DC81C + 3);
                v67 = *((float *)off_103DC81C + 3) - *(float *)(v65 + 16);
                v68 = 1.0 - (v67 + v67);
                if ( v68 <= 1.0 )
                {
                  v69 = v68 < v60;
                  v70 = v68;
                  if ( v69 )
                    v70 = 0.0;
                  v102 = v70;
                }
                else
                {
                  v102 = 1.0;
                }
              }
            }
            v43 = 2 - v53;
          }
          v75 = v46 + v43;
          v79 = v43;
          v78 = v90;
          v76 = v100[1];
          v77 = v89;
          v78 = v76 + v89 + 6;
          v80 = v46 + v43;
          sub_100C04E0(v85, v46, &v77, (int)v81, v47, v98, v102);
          v43 = v75;
          if ( v75 >= v83 )
            break;
          v42 = v106 + 1;
          v106 = v42;
        }
        while ( v42 < v96 );
      }
    }
    if ( v95 >= 0 && v93 )
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v93);
  }
}
