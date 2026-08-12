int __cdecl sub_1013B390(int a1)
{
  int v1; // ecx
  unsigned int v2; // edx
  unsigned __int16 v3; // si
  int v4; // ecx
  unsigned __int16 v5; // di
  int *v6; // ecx
  int *v7; // edx
  int v8; // edx
  _DWORD *v9; // esi
  int v10; // edi
  int v11; // edx
  _DWORD *v12; // ecx
  unsigned int v13; // esi
  int v14; // ebx
  int v15; // ecx
  unsigned int v16; // edx
  unsigned __int16 v17; // si
  int v18; // ecx
  unsigned __int16 v19; // cx
  int *v20; // ecx
  int *v21; // edx
  int v22; // edx
  _DWORD *v23; // esi
  int v24; // edi
  int v25; // edx
  _DWORD *v26; // ecx
  unsigned int v27; // esi
  int v28; // ebx
  int v29; // ecx
  unsigned int v30; // edx
  unsigned __int16 v31; // si
  int v32; // ecx
  unsigned __int16 v33; // cx
  int *v34; // ecx
  int *v35; // edx
  int v36; // edx
  _DWORD *v37; // esi
  int v38; // edi
  int v39; // edx
  _DWORD *v40; // ecx
  unsigned int v41; // esi
  int v42; // ebx
  int v43; // ecx
  unsigned int v44; // edx
  char v45; // si
  int v46; // ecx
  char v47; // cl
  int *v48; // ecx
  int *v49; // edx
  int v50; // edx
  _DWORD *v51; // esi
  int v52; // edi
  int v53; // edx
  _DWORD *v54; // ecx
  unsigned int v55; // esi
  int v56; // ebx
  int v57; // ecx
  unsigned int v58; // edx
  char v59; // si
  int v60; // ecx
  char v61; // cl
  int *v62; // ecx
  int *v63; // edx
  int v64; // edx
  _DWORD *v65; // esi
  int v66; // edi
  int v67; // edx
  _DWORD *v68; // ecx
  unsigned int v69; // esi
  int v70; // ebx
  int v71; // ecx
  unsigned int v72; // edx
  char v73; // si
  int v74; // ecx
  char v75; // cl
  int *v76; // ecx
  int *v77; // edx
  int v78; // edx
  _DWORD *v79; // esi
  int v80; // edi
  int v81; // edx
  _DWORD *v82; // ecx
  unsigned int v83; // esi
  int v84; // ebx
  int v85; // ecx
  unsigned int v86; // edx
  char v87; // si
  int v88; // ecx
  char v89; // al
  int *v90; // ecx
  int *v91; // edx
  int v92; // edx
  _DWORD *v93; // esi
  int v94; // edi
  int v95; // edx
  _DWORD *v96; // ecx
  unsigned int v97; // esi
  int v98; // ebx
  unsigned __int16 v100[3]; // [esp+Ch] [ebp-Ch] BYREF
  char v101; // [esp+12h] [ebp-6h]
  char v102; // [esp+13h] [ebp-5h]
  char v103; // [esp+14h] [ebp-4h]
  char v104; // [esp+15h] [ebp-3h]

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 < 16 )
  {
    v9 = *(_DWORD **)(a1 + 28);
    v10 = *(_DWORD *)(a1 + 16);
    v11 = 16 - v1;
    v12 = *(_DWORD **)(a1 + 24);
    if ( v12 == v9 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v12 > v9 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_16;
      }
      *(_DWORD *)(a1 + 16) = *v12;
    }
    *(_DWORD *)(a1 + 24) = v12 + 1;
LABEL_16:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v5 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 16);
      v14 = (v13 & dword_1039BF80[v11]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v11;
      v5 = v14 | v10;
      *(_DWORD *)(a1 + 16) = v13 >> v11;
    }
    goto LABEL_19;
  }
  v2 = *(_DWORD *)(a1 + 16);
  v3 = v2;
  v4 = v1 - 16;
  *(_DWORD *)(a1 + 20) = v4;
  if ( v4 )
  {
    *(_DWORD *)(a1 + 16) = HIWORD(v2);
    v5 = v2;
  }
  else
  {
    v6 = *(int **)(a1 + 24);
    v7 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v6 == v7 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v6 + 1;
      v5 = v3;
    }
    else
    {
      if ( v6 <= v7 )
      {
        v8 = *v6;
        *(_DWORD *)(a1 + 24) = v6 + 1;
        *(_DWORD *)(a1 + 16) = v8;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v5 = v3;
    }
  }
LABEL_19:
  v15 = *(_DWORD *)(a1 + 20);
  v100[0] = v5;
  if ( v15 < 16 )
  {
    v23 = *(_DWORD **)(a1 + 28);
    v24 = *(_DWORD *)(a1 + 16);
    v25 = 16 - v15;
    v26 = *(_DWORD **)(a1 + 24);
    if ( v26 == v23 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v26 > v23 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_34;
      }
      *(_DWORD *)(a1 + 16) = *v26;
    }
    *(_DWORD *)(a1 + 24) = v26 + 1;
LABEL_34:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v19 = 0;
    }
    else
    {
      v27 = *(_DWORD *)(a1 + 16);
      v28 = (v27 & dword_1039BF80[v25]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v25;
      v19 = v28 | v24;
      *(_DWORD *)(a1 + 16) = v27 >> v25;
    }
    goto LABEL_37;
  }
  v16 = *(_DWORD *)(a1 + 16);
  v17 = v16;
  v18 = v15 - 16;
  *(_DWORD *)(a1 + 20) = v18;
  if ( v18 )
  {
    *(_DWORD *)(a1 + 16) = HIWORD(v16);
    v19 = v16;
  }
  else
  {
    v20 = *(int **)(a1 + 24);
    v21 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v20 == v21 )
    {
      *(_DWORD *)(a1 + 24) = v20 + 1;
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      v19 = v17;
    }
    else
    {
      if ( v20 <= v21 )
      {
        v22 = *v20;
        *(_DWORD *)(a1 + 24) = v20 + 1;
        *(_DWORD *)(a1 + 16) = v22;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v19 = v17;
    }
  }
LABEL_37:
  v100[1] = v19;
  v29 = *(_DWORD *)(a1 + 20);
  if ( v29 < 16 )
  {
    v37 = *(_DWORD **)(a1 + 28);
    v38 = *(_DWORD *)(a1 + 16);
    v39 = 16 - v29;
    v40 = *(_DWORD **)(a1 + 24);
    if ( v40 == v37 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v40 > v37 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_52;
      }
      *(_DWORD *)(a1 + 16) = *v40;
    }
    *(_DWORD *)(a1 + 24) = v40 + 1;
LABEL_52:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v33 = 0;
    }
    else
    {
      v41 = *(_DWORD *)(a1 + 16);
      v42 = (v41 & dword_1039BF80[v39]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v39;
      v33 = v42 | v38;
      *(_DWORD *)(a1 + 16) = v41 >> v39;
    }
    goto LABEL_55;
  }
  v30 = *(_DWORD *)(a1 + 16);
  v31 = v30;
  v32 = v29 - 16;
  *(_DWORD *)(a1 + 20) = v32;
  if ( v32 )
  {
    *(_DWORD *)(a1 + 16) = HIWORD(v30);
    v33 = v30;
  }
  else
  {
    v34 = *(int **)(a1 + 24);
    v35 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v34 == v35 )
    {
      *(_DWORD *)(a1 + 24) = v34 + 1;
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      v33 = v31;
    }
    else
    {
      if ( v34 <= v35 )
      {
        v36 = *v34;
        *(_DWORD *)(a1 + 24) = v34 + 1;
        *(_DWORD *)(a1 + 16) = v36;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v33 = v31;
    }
  }
LABEL_55:
  v100[2] = v33;
  v43 = *(_DWORD *)(a1 + 20);
  if ( v43 < 8 )
  {
    v51 = *(_DWORD **)(a1 + 28);
    v52 = *(_DWORD *)(a1 + 16);
    v53 = 8 - v43;
    v54 = *(_DWORD **)(a1 + 24);
    if ( v54 == v51 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v54 > v51 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_70;
      }
      *(_DWORD *)(a1 + 16) = *v54;
    }
    *(_DWORD *)(a1 + 24) = v54 + 1;
LABEL_70:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v47 = 0;
    }
    else
    {
      v55 = *(_DWORD *)(a1 + 16);
      v56 = (v55 & dword_1039BF80[v53]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v53;
      v47 = v56 | v52;
      *(_DWORD *)(a1 + 16) = v55 >> v53;
    }
    goto LABEL_73;
  }
  v44 = *(_DWORD *)(a1 + 16);
  v45 = v44;
  v46 = v43 - 8;
  *(_DWORD *)(a1 + 20) = v46;
  if ( v46 )
  {
    *(_DWORD *)(a1 + 16) = v44 >> 8;
    v47 = v44;
  }
  else
  {
    v48 = *(int **)(a1 + 24);
    v49 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v48 == v49 )
    {
      *(_DWORD *)(a1 + 24) = v48 + 1;
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      v47 = v45;
    }
    else
    {
      if ( v48 <= v49 )
      {
        v50 = *v48;
        *(_DWORD *)(a1 + 24) = v48 + 1;
        *(_DWORD *)(a1 + 16) = v50;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v47 = v45;
    }
  }
LABEL_73:
  v101 = v47;
  v57 = *(_DWORD *)(a1 + 20);
  if ( v57 < 8 )
  {
    v65 = *(_DWORD **)(a1 + 28);
    v66 = *(_DWORD *)(a1 + 16);
    v67 = 8 - v57;
    v68 = *(_DWORD **)(a1 + 24);
    if ( v68 == v65 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v68 > v65 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_88;
      }
      *(_DWORD *)(a1 + 16) = *v68;
    }
    *(_DWORD *)(a1 + 24) = v68 + 1;
LABEL_88:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v61 = 0;
    }
    else
    {
      v69 = *(_DWORD *)(a1 + 16);
      v70 = (v69 & dword_1039BF80[v67]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v67;
      v61 = v70 | v66;
      *(_DWORD *)(a1 + 16) = v69 >> v67;
    }
    goto LABEL_91;
  }
  v58 = *(_DWORD *)(a1 + 16);
  v59 = v58;
  v60 = v57 - 8;
  *(_DWORD *)(a1 + 20) = v60;
  if ( v60 )
  {
    *(_DWORD *)(a1 + 16) = v58 >> 8;
    v61 = v58;
  }
  else
  {
    v62 = *(int **)(a1 + 24);
    v63 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v62 == v63 )
    {
      *(_DWORD *)(a1 + 24) = v62 + 1;
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      v61 = v59;
    }
    else
    {
      if ( v62 <= v63 )
      {
        v64 = *v62;
        *(_DWORD *)(a1 + 24) = v62 + 1;
        *(_DWORD *)(a1 + 16) = v64;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v61 = v59;
    }
  }
LABEL_91:
  v102 = v61;
  v71 = *(_DWORD *)(a1 + 20);
  if ( v71 < 8 )
  {
    v79 = *(_DWORD **)(a1 + 28);
    v80 = *(_DWORD *)(a1 + 16);
    v81 = 8 - v71;
    v82 = *(_DWORD **)(a1 + 24);
    if ( v82 == v79 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v82 > v79 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_106;
      }
      *(_DWORD *)(a1 + 16) = *v82;
    }
    *(_DWORD *)(a1 + 24) = v82 + 1;
LABEL_106:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v75 = 0;
    }
    else
    {
      v83 = *(_DWORD *)(a1 + 16);
      v84 = (v83 & dword_1039BF80[v81]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v81;
      v75 = v84 | v80;
      *(_DWORD *)(a1 + 16) = v83 >> v81;
    }
    goto LABEL_109;
  }
  v72 = *(_DWORD *)(a1 + 16);
  v73 = v72;
  v74 = v71 - 8;
  *(_DWORD *)(a1 + 20) = v74;
  if ( v74 )
  {
    *(_DWORD *)(a1 + 16) = v72 >> 8;
    v75 = v72;
  }
  else
  {
    v76 = *(int **)(a1 + 24);
    v77 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v76 == v77 )
    {
      *(_DWORD *)(a1 + 24) = v76 + 1;
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      v75 = v73;
    }
    else
    {
      if ( v76 <= v77 )
      {
        v78 = *v76;
        *(_DWORD *)(a1 + 24) = v76 + 1;
        *(_DWORD *)(a1 + 16) = v78;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v75 = v73;
    }
  }
LABEL_109:
  v103 = v75;
  v85 = *(_DWORD *)(a1 + 20);
  if ( v85 < 8 )
  {
    v93 = *(_DWORD **)(a1 + 28);
    v94 = *(_DWORD *)(a1 + 16);
    v95 = 8 - v85;
    v96 = *(_DWORD **)(a1 + 24);
    if ( v96 == v93 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v96 > v93 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_124;
      }
      *(_DWORD *)(a1 + 16) = *v96;
    }
    *(_DWORD *)(a1 + 24) = v96 + 1;
LABEL_124:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v89 = 0;
    }
    else
    {
      v97 = *(_DWORD *)(a1 + 16);
      v98 = (v97 & dword_1039BF80[v95]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v95;
      *(_DWORD *)(a1 + 16) = v97 >> v95;
      v89 = v98 | v94;
    }
    goto LABEL_127;
  }
  v86 = *(_DWORD *)(a1 + 16);
  v87 = v86;
  v88 = v85 - 8;
  *(_DWORD *)(a1 + 20) = v88;
  if ( v88 )
  {
    *(_DWORD *)(a1 + 16) = v86 >> 8;
    v89 = v86;
  }
  else
  {
    v90 = *(int **)(a1 + 24);
    v91 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v90 == v91 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = v90 + 1;
      v89 = v87;
    }
    else
    {
      if ( v90 <= v91 )
      {
        v92 = *v90;
        *(_DWORD *)(a1 + 24) = v90 + 1;
        *(_DWORD *)(a1 + 16) = v92;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v89 = v87;
    }
  }
LABEL_127:
  v104 = v89;
  return sub_1013AC40(&off_103E77F0, v100);
}
