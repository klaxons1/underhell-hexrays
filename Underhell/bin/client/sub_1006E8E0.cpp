int __thiscall sub_1006E8E0(char *this, int a2, int a3)
{
  int v4; // ecx
  unsigned int v5; // edx
  __int16 v6; // di
  unsigned int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // edx
  int v11; // edi
  int v12; // eax
  _DWORD *v13; // ecx
  unsigned int v14; // edx
  int v15; // ebx
  int v16; // ecx
  float v17; // eax
  int v18; // ecx
  _DWORD *v19; // ecx
  _DWORD *v20; // edx
  _DWORD *v21; // edx
  int v22; // edi
  int v23; // eax
  _DWORD *v24; // ecx
  unsigned int v25; // edx
  int v26; // ebx
  int v27; // ecx
  unsigned int v28; // eax
  char v29; // dl
  int v30; // ecx
  _DWORD *v31; // ecx
  int v32; // ecx
  _DWORD *v33; // edx
  int v34; // edi
  _DWORD *v35; // ecx
  unsigned int v36; // edx
  int v37; // ebx
  unsigned int v38; // edx
  int v39; // ecx
  unsigned int v40; // eax
  char v41; // dl
  int v42; // ecx
  _DWORD *v43; // ecx
  int v44; // ecx
  _DWORD *v45; // edx
  int v46; // edi
  _DWORD *v47; // ecx
  unsigned int v48; // edx
  int v49; // ebx
  unsigned int v50; // edx
  int v51; // ecx
  unsigned int v52; // eax
  char v53; // dl
  int v54; // ecx
  _DWORD *v55; // ecx
  int v56; // ecx
  _DWORD *v57; // edx
  int v58; // edi
  _DWORD *v59; // ecx
  unsigned int v60; // edx
  int v61; // ebx
  unsigned int v62; // edx
  int v63; // edx
  int v64; // eax
  int v65; // eax
  _DWORD *v66; // eax
  _DWORD *v67; // ecx
  _DWORD *v68; // edx
  int v69; // ecx
  _DWORD *v70; // eax
  int v71; // ecx
  unsigned int v72; // eax
  char v73; // dl
  int v74; // ecx
  _DWORD *v75; // ecx
  int v76; // ecx
  _DWORD *v77; // edx
  int v78; // edi
  _DWORD *v79; // ecx
  unsigned int v80; // edx
  int v81; // ebx
  unsigned int v82; // edx
  int v83; // ecx
  float v84; // eax
  int v85; // ecx
  _DWORD *v86; // ecx
  _DWORD *v87; // edx
  _DWORD *v88; // edx
  int v89; // edi
  int v90; // eax
  _DWORD *v91; // ecx
  unsigned int v92; // edx
  int v93; // ebx
  int v94; // ecx
  float v95; // eax
  int v96; // ecx
  _DWORD *v97; // ecx
  _DWORD *v98; // edx
  _DWORD *v99; // edx
  int v100; // edi
  int v101; // eax
  _DWORD *v102; // ecx
  unsigned int v103; // edx
  int v104; // ebx
  int *v105; // edi
  _BYTE v107[12]; // [esp+14h] [ebp-40h] BYREF
  float v108; // [esp+20h] [ebp-34h]
  float v109; // [esp+24h] [ebp-30h]
  float v110; // [esp+28h] [ebp-2Ch]
  int v111; // [esp+2Ch] [ebp-28h]
  char *v112; // [esp+30h] [ebp-24h]
  float v113; // [esp+34h] [ebp-20h]
  int v114; // [esp+38h] [ebp-1Ch]
  float v115; // [esp+3Ch] [ebp-18h]
  float v116; // [esp+40h] [ebp-14h]
  float v117; // [esp+44h] [ebp-10h]
  float v118; // [esp+48h] [ebp-Ch]
  float v119; // [esp+4Ch] [ebp-8h]
  char *v120; // [esp+50h] [ebp-4h]
  float v121; // [esp+60h] [ebp+Ch]
  float v122; // [esp+60h] [ebp+Ch]
  float v123; // [esp+60h] [ebp+Ch]

  v120 = this;
  sub_1022C690(v107);
  v4 = *(_DWORD *)(a3 + 20);
  v108 = 0.0;
  v109 = 0.0;
  v110 = 0.0;
  if ( v4 < 16 )
  {
    v10 = *(_DWORD **)(a3 + 28);
    v11 = *(_DWORD *)(a3 + 16);
    v12 = 16 - v4;
    v13 = *(_DWORD **)(a3 + 24);
    if ( v13 == v10 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v13 > v10 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
LABEL_15:
        if ( *(_BYTE *)(a3 + 4) )
        {
          v6 = 0;
          goto LABEL_19;
        }
        v14 = *(_DWORD *)(a3 + 16);
        v15 = (v14 & dword_1039BF80[v12]) << *(_DWORD *)(a3 + 20);
        *(_DWORD *)(a3 + 20) = 32 - v12;
        v6 = v15 | v11;
        v7 = v14 >> v12;
        goto LABEL_18;
      }
      *(_DWORD *)(a3 + 16) = *v13;
    }
    *(_DWORD *)(a3 + 24) = v13 + 1;
    goto LABEL_15;
  }
  v5 = *(_DWORD *)(a3 + 16);
  v6 = v5;
  *(_DWORD *)(a3 + 20) = v4 - 16;
  if ( v4 != 16 )
  {
    v7 = HIWORD(v5);
LABEL_18:
    *(_DWORD *)(a3 + 16) = v7;
    goto LABEL_19;
  }
  v8 = *(_DWORD **)(a3 + 24);
  v9 = *(_DWORD **)(a3 + 28);
  *(_DWORD *)(a3 + 20) = 32;
  if ( v8 == v9 )
  {
    *(_DWORD *)(a3 + 20) = 1;
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 24) = v8 + 1;
  }
  else if ( v8 <= v9 )
  {
    *(_DWORD *)(a3 + 16) = *v8;
    *(_DWORD *)(a3 + 24) = v8 + 1;
  }
  else
  {
    *(_BYTE *)(a3 + 4) = 1;
    *(_DWORD *)(a3 + 16) = 0;
  }
LABEL_19:
  v16 = *(_DWORD *)(a3 + 20);
  v111 = v6;
  if ( v16 < 32 )
  {
    v21 = *(_DWORD **)(a3 + 28);
    v22 = *(_DWORD *)(a3 + 16);
    v23 = 32 - v16;
    v24 = *(_DWORD **)(a3 + 24);
    if ( v24 == v21 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v24 > v21 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_34;
      }
      *(_DWORD *)(a3 + 16) = *v24;
    }
    *(_DWORD *)(a3 + 24) = v24 + 1;
LABEL_34:
    if ( *(_BYTE *)(a3 + 4) )
    {
      v121 = 0.0;
    }
    else
    {
      v25 = *(_DWORD *)(a3 + 16);
      v26 = (v25 & dword_1039BF80[v23]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v23;
      LODWORD(v121) = v26 | v22;
      *(_DWORD *)(a3 + 16) = v25 >> v23;
    }
    goto LABEL_37;
  }
  v17 = *(float *)(a3 + 16);
  v18 = v16 - 32;
  *(_DWORD *)(a3 + 20) = v18;
  if ( v18 )
  {
    *(_DWORD *)(a3 + 16) = 0;
    v121 = v17;
  }
  else
  {
    v19 = *(_DWORD **)(a3 + 24);
    v20 = *(_DWORD **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( v19 == v20 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 24) = v19 + 1;
      v121 = v17;
    }
    else
    {
      if ( v19 <= v20 )
      {
        *(_DWORD *)(a3 + 16) = *v19;
        *(_DWORD *)(a3 + 24) = v19 + 1;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
      }
      v121 = v17;
    }
  }
LABEL_37:
  v27 = *(_DWORD *)(a3 + 20);
  v119 = v121;
  if ( v27 < 8 )
  {
    v33 = *(_DWORD **)(a3 + 28);
    v34 = *(_DWORD *)(a3 + 16);
    v28 = 8 - v27;
    v35 = *(_DWORD **)(a3 + 24);
    if ( v35 == v33 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v35 > v33 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_52;
      }
      *(_DWORD *)(a3 + 16) = *v35;
    }
    *(_DWORD *)(a3 + 24) = v35 + 1;
LABEL_52:
    if ( *(_BYTE *)(a3 + 4) )
    {
      LOBYTE(v28) = 0;
    }
    else
    {
      v36 = *(_DWORD *)(a3 + 16);
      v37 = (v36 & dword_1039BF80[v28]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v28;
      v38 = v36 >> v28;
      LOBYTE(v28) = v37 | v34;
      *(_DWORD *)(a3 + 16) = v38;
    }
    goto LABEL_55;
  }
  v28 = *(_DWORD *)(a3 + 16);
  v29 = v28;
  v30 = v27 - 8;
  *(_DWORD *)(a3 + 20) = v30;
  if ( v30 )
  {
    *(_DWORD *)(a3 + 16) = v28 >> 8;
  }
  else
  {
    v28 = *(_DWORD *)(a3 + 24);
    v31 = *(_DWORD **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( (_DWORD *)v28 == v31 )
    {
      *(_DWORD *)(a3 + 24) = v28 + 4;
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      LOBYTE(v28) = v29;
    }
    else
    {
      if ( v28 <= (unsigned int)v31 )
      {
        v32 = *(_DWORD *)v28;
        *(_DWORD *)(a3 + 24) = v28 + 4;
        *(_DWORD *)(a3 + 16) = v32;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
      }
      LOBYTE(v28) = v29;
    }
  }
LABEL_55:
  v39 = *(_DWORD *)(a3 + 20);
  v115 = (double)(unsigned __int8)v28 * 0.0039215689;
  if ( v39 < 8 )
  {
    v45 = *(_DWORD **)(a3 + 28);
    v46 = *(_DWORD *)(a3 + 16);
    v40 = 8 - v39;
    v47 = *(_DWORD **)(a3 + 24);
    if ( v47 == v45 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v47 > v45 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_70;
      }
      *(_DWORD *)(a3 + 16) = *v47;
    }
    *(_DWORD *)(a3 + 24) = v47 + 1;
LABEL_70:
    if ( *(_BYTE *)(a3 + 4) )
    {
      LOBYTE(v40) = 0;
    }
    else
    {
      v48 = *(_DWORD *)(a3 + 16);
      v49 = (v48 & dword_1039BF80[v40]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v40;
      v50 = v48 >> v40;
      LOBYTE(v40) = v49 | v46;
      *(_DWORD *)(a3 + 16) = v50;
    }
    goto LABEL_73;
  }
  v40 = *(_DWORD *)(a3 + 16);
  v41 = v40;
  v42 = v39 - 8;
  *(_DWORD *)(a3 + 20) = v42;
  if ( v42 )
  {
    *(_DWORD *)(a3 + 16) = v40 >> 8;
  }
  else
  {
    v40 = *(_DWORD *)(a3 + 24);
    v43 = *(_DWORD **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( (_DWORD *)v40 == v43 )
    {
      *(_DWORD *)(a3 + 24) = v40 + 4;
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      LOBYTE(v40) = v41;
    }
    else
    {
      if ( v40 <= (unsigned int)v43 )
      {
        v44 = *(_DWORD *)v40;
        *(_DWORD *)(a3 + 24) = v40 + 4;
        *(_DWORD *)(a3 + 16) = v44;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
      }
      LOBYTE(v40) = v41;
    }
  }
LABEL_73:
  v51 = *(_DWORD *)(a3 + 20);
  v116 = (double)(unsigned __int8)v40 * 0.0039215689;
  if ( v51 < 8 )
  {
    v57 = *(_DWORD **)(a3 + 28);
    v58 = *(_DWORD *)(a3 + 16);
    v52 = 8 - v51;
    v59 = *(_DWORD **)(a3 + 24);
    if ( v59 == v57 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v59 > v57 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_88;
      }
      *(_DWORD *)(a3 + 16) = *v59;
    }
    *(_DWORD *)(a3 + 24) = v59 + 1;
LABEL_88:
    if ( *(_BYTE *)(a3 + 4) )
    {
      LOBYTE(v52) = 0;
    }
    else
    {
      v60 = *(_DWORD *)(a3 + 16);
      v61 = (v60 & dword_1039BF80[v52]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v52;
      v62 = v60 >> v52;
      LOBYTE(v52) = v61 | v58;
      *(_DWORD *)(a3 + 16) = v62;
    }
    goto LABEL_91;
  }
  v52 = *(_DWORD *)(a3 + 16);
  v53 = v52;
  v54 = v51 - 8;
  *(_DWORD *)(a3 + 20) = v54;
  if ( v54 )
  {
    *(_DWORD *)(a3 + 16) = v52 >> 8;
  }
  else
  {
    v52 = *(_DWORD *)(a3 + 24);
    v55 = *(_DWORD **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( (_DWORD *)v52 == v55 )
    {
      *(_DWORD *)(a3 + 24) = v52 + 4;
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      LOBYTE(v52) = v53;
    }
    else
    {
      if ( v52 <= (unsigned int)v55 )
      {
        v56 = *(_DWORD *)v52;
        *(_DWORD *)(a3 + 24) = v52 + 4;
        *(_DWORD *)(a3 + 16) = v56;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
      }
      LOBYTE(v52) = v53;
    }
  }
LABEL_91:
  v63 = (unsigned __int8)v52;
  v64 = *(_DWORD *)(a3 + 20);
  v117 = 0.0039215689 * (double)v63;
  if ( v64 >= 8 )
  {
    v65 = v64 - 8;
    *(_DWORD *)(a3 + 20) = v65;
    if ( v65 )
    {
      *(_DWORD *)(a3 + 16) >>= 8;
    }
    else
    {
      v66 = *(_DWORD **)(a3 + 24);
      v67 = *(_DWORD **)(a3 + 28);
      *(_DWORD *)(a3 + 20) = 32;
      if ( v66 == v67 )
      {
        *(_DWORD *)(a3 + 20) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        *(_DWORD *)(a3 + 24) = v66 + 1;
      }
      else if ( v66 <= v67 )
      {
        *(_DWORD *)(a3 + 16) = *v66;
        *(_DWORD *)(a3 + 24) = v66 + 1;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
      }
    }
    goto LABEL_107;
  }
  v68 = *(_DWORD **)(a3 + 28);
  v69 = 8 - v64;
  v70 = *(_DWORD **)(a3 + 24);
  if ( v70 == v68 )
  {
    *(_DWORD *)(a3 + 20) = 1;
    *(_DWORD *)(a3 + 16) = 0;
    *(_BYTE *)(a3 + 4) = 1;
  }
  else
  {
    if ( v70 > v68 )
    {
      *(_BYTE *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      goto LABEL_105;
    }
    *(_DWORD *)(a3 + 16) = *v70;
  }
  *(_DWORD *)(a3 + 24) = v70 + 1;
LABEL_105:
  if ( !*(_BYTE *)(a3 + 4) )
  {
    *(_DWORD *)(a3 + 16) >>= v69;
    *(_DWORD *)(a3 + 20) = 32 - v69;
  }
LABEL_107:
  v71 = *(_DWORD *)(a3 + 20);
  if ( v71 < 8 )
  {
    v77 = *(_DWORD **)(a3 + 28);
    v78 = *(_DWORD *)(a3 + 16);
    v72 = 8 - v71;
    v79 = *(_DWORD **)(a3 + 24);
    if ( v79 == v77 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v79 > v77 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_122;
      }
      *(_DWORD *)(a3 + 16) = *v79;
    }
    *(_DWORD *)(a3 + 24) = v79 + 1;
LABEL_122:
    if ( *(_BYTE *)(a3 + 4) )
    {
      LOBYTE(v72) = 0;
    }
    else
    {
      v80 = *(_DWORD *)(a3 + 16);
      v81 = (v80 & dword_1039BF80[v72]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v72;
      v82 = v80 >> v72;
      LOBYTE(v72) = v81 | v78;
      *(_DWORD *)(a3 + 16) = v82;
    }
    goto LABEL_125;
  }
  v72 = *(_DWORD *)(a3 + 16);
  v73 = v72;
  v74 = v71 - 8;
  *(_DWORD *)(a3 + 20) = v74;
  if ( v74 )
  {
    *(_DWORD *)(a3 + 16) = v72 >> 8;
  }
  else
  {
    v72 = *(_DWORD *)(a3 + 24);
    v75 = *(_DWORD **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( (_DWORD *)v72 == v75 )
    {
      *(_DWORD *)(a3 + 24) = v72 + 4;
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      LOBYTE(v72) = v73;
    }
    else
    {
      if ( v72 <= (unsigned int)v75 )
      {
        v76 = *(_DWORD *)v72;
        *(_DWORD *)(a3 + 24) = v72 + 4;
        *(_DWORD *)(a3 + 16) = v76;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
      }
      LOBYTE(v72) = v73;
    }
  }
LABEL_125:
  v83 = *(_DWORD *)(a3 + 20);
  v114 = (char)v72;
  if ( v83 < 32 )
  {
    v88 = *(_DWORD **)(a3 + 28);
    v89 = *(_DWORD *)(a3 + 16);
    v90 = 32 - v83;
    v91 = *(_DWORD **)(a3 + 24);
    if ( v91 == v88 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v91 > v88 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_140;
      }
      *(_DWORD *)(a3 + 16) = *v91;
    }
    *(_DWORD *)(a3 + 24) = v91 + 1;
LABEL_140:
    if ( *(_BYTE *)(a3 + 4) )
    {
      v122 = 0.0;
    }
    else
    {
      v92 = *(_DWORD *)(a3 + 16);
      v93 = (v92 & dword_1039BF80[v90]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v90;
      LODWORD(v122) = v93 | v89;
      *(_DWORD *)(a3 + 16) = v92 >> v90;
    }
    goto LABEL_143;
  }
  v84 = *(float *)(a3 + 16);
  v85 = v83 - 32;
  *(_DWORD *)(a3 + 20) = v85;
  if ( v85 )
  {
    *(_DWORD *)(a3 + 16) = 0;
    v122 = v84;
  }
  else
  {
    v86 = *(_DWORD **)(a3 + 24);
    v87 = *(_DWORD **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( v86 == v87 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 24) = v86 + 1;
      v122 = v84;
    }
    else
    {
      if ( v86 <= v87 )
      {
        *(_DWORD *)(a3 + 16) = *v86;
        *(_DWORD *)(a3 + 24) = v86 + 1;
      }
      else
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
      }
      v122 = v84;
    }
  }
LABEL_143:
  v94 = *(_DWORD *)(a3 + 20);
  v113 = v122;
  if ( v94 >= 32 )
  {
    v95 = *(float *)(a3 + 16);
    v96 = v94 - 32;
    *(_DWORD *)(a3 + 20) = v96;
    if ( !v96 )
    {
      v97 = *(_DWORD **)(a3 + 24);
      v98 = *(_DWORD **)(a3 + 28);
      *(_DWORD *)(a3 + 20) = 32;
      if ( v97 == v98 )
      {
        *(_DWORD *)(a3 + 20) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        *(_DWORD *)(a3 + 24) = v97 + 1;
        v123 = v95;
        goto LABEL_160;
      }
      if ( v97 <= v98 )
      {
        *(_DWORD *)(a3 + 16) = *v97;
        *(_DWORD *)(a3 + 24) = v97 + 1;
        v123 = v95;
        goto LABEL_160;
      }
      *(_BYTE *)(a3 + 4) = 1;
    }
    *(_DWORD *)(a3 + 16) = 0;
    v123 = v95;
    goto LABEL_160;
  }
  v99 = *(_DWORD **)(a3 + 28);
  v100 = *(_DWORD *)(a3 + 16);
  v101 = 32 - v94;
  v102 = *(_DWORD **)(a3 + 24);
  if ( v102 == v99 )
  {
    *(_DWORD *)(a3 + 20) = 1;
    *(_DWORD *)(a3 + 16) = 0;
    *(_BYTE *)(a3 + 4) = 1;
  }
  else
  {
    if ( v102 > v99 )
    {
      *(_BYTE *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      goto LABEL_157;
    }
    *(_DWORD *)(a3 + 16) = *v102;
  }
  *(_DWORD *)(a3 + 24) = v102 + 1;
LABEL_157:
  if ( *(_BYTE *)(a3 + 4) )
  {
    v123 = 0.0;
  }
  else
  {
    v103 = *(_DWORD *)(a3 + 16);
    v104 = (v103 & dword_1039BF80[v101]) << *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a3 + 20) = 32 - v101;
    LODWORD(v123) = v104 | v100;
    *(_DWORD *)(a3 + 16) = v103 >> v101;
  }
LABEL_160:
  v105 = (int *)v120;
  v118 = v123;
  v112 = v120 + 1284;
  sub_101212D0((int)(v120 + 1220), 0.0, 0);
  sub_1006E870(v105 + 296, v107);
  return (*(int (__thiscall **)(char *, _DWORD))(*(v105 - 2) + 408))((char *)v105 - 8, -1293.0);
}
