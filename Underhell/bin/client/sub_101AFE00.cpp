void __fastcall sub_101AFE00(int a1, float a2)
{
  float v3; // eax
  int v4; // ecx
  unsigned int v5; // edx
  int v6; // esi
  int v7; // ecx
  int *v8; // ecx
  int *v9; // edx
  int v10; // edx
  _DWORD *v11; // esi
  int v12; // edi
  int v13; // edx
  _DWORD *v14; // ecx
  unsigned int v15; // esi
  int v16; // ebx
  int v17; // ecx
  unsigned int v18; // edx
  int v19; // esi
  int v20; // ecx
  int *v21; // ecx
  int *v22; // edx
  int v23; // edx
  _DWORD *v24; // esi
  int v25; // edi
  int v26; // edx
  _DWORD *v27; // ecx
  unsigned int v28; // esi
  int v29; // ebx
  int v30; // esi
  int v31; // ecx
  _DWORD *v32; // edx
  _DWORD *v33; // esi
  _DWORD *v34; // ecx
  int v35; // edi
  int v36; // edx
  _DWORD *v37; // esi
  unsigned int v38; // esi
  int v39; // ebx
  int v40; // esi
  float v41; // ecx
  _DWORD *v42; // edx
  _DWORD *v43; // esi
  _DWORD *v44; // ecx
  int v45; // edi
  int v46; // edx
  _DWORD *v47; // esi
  unsigned int v48; // esi
  int v49; // ebx
  int v50; // esi
  float v51; // ecx
  _DWORD *v52; // edx
  _DWORD *v53; // esi
  _DWORD *v54; // ecx
  int v55; // edi
  int v56; // edx
  _DWORD *v57; // esi
  unsigned int v58; // esi
  int v59; // ebx
  int v60; // esi
  float v61; // ecx
  _DWORD *v62; // edx
  _DWORD *v63; // esi
  _DWORD *v64; // ecx
  int v65; // edi
  int v66; // edx
  _DWORD *v67; // esi
  unsigned int v68; // esi
  int v69; // ebx
  int v70; // eax
  int v71; // esi
  float *v72; // eax
  int v73; // edi
  char **v74; // ecx
  double v75; // st7
  unsigned int v76; // eax
  char *v77; // eax
  char *v78; // ecx
  char *v79; // [esp-4h] [ebp-34h]
  float v80[4]; // [esp+Ch] [ebp-24h] BYREF
  int v81; // [esp+1Ch] [ebp-14h]
  int v82; // [esp+20h] [ebp-10h]
  int v83; // [esp+24h] [ebp-Ch]
  float v84; // [esp+28h] [ebp-8h]
  float v85; // [esp+2Ch] [ebp-4h]

  v3 = a2;
  LODWORD(v80[3]) = a1;
  v4 = *(_DWORD *)(LODWORD(a2) + 20);
  if ( v4 < 8 )
  {
    v11 = *(_DWORD **)(LODWORD(a2) + 28);
    v12 = *(_DWORD *)(LODWORD(a2) + 16);
    v13 = 8 - v4;
    v14 = *(_DWORD **)(LODWORD(a2) + 24);
    if ( v14 == v11 )
    {
      *(_DWORD *)(LODWORD(a2) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_BYTE *)(LODWORD(v3) + 4) = 1;
    }
    else
    {
      if ( v14 > v11 )
      {
        *(_BYTE *)(LODWORD(a2) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
        goto LABEL_16;
      }
      *(_DWORD *)(LODWORD(a2) + 16) = *v14;
    }
    *(_DWORD *)(LODWORD(v3) + 24) = v14 + 1;
LABEL_16:
    if ( *(_BYTE *)(LODWORD(v3) + 4) )
    {
      v81 = 0;
    }
    else
    {
      v15 = *(_DWORD *)(LODWORD(v3) + 16);
      v16 = (v15 & dword_1039BF80[v13]) << *(_DWORD *)(LODWORD(v3) + 20);
      *(_DWORD *)(LODWORD(v3) + 20) = 32 - v13;
      v81 = v16 | v12;
      *(_DWORD *)(LODWORD(v3) + 16) = v15 >> v13;
    }
    goto LABEL_19;
  }
  v5 = *(_DWORD *)(LODWORD(a2) + 16);
  v6 = (unsigned __int8)v5;
  v7 = v4 - 8;
  *(_DWORD *)(LODWORD(a2) + 20) = v7;
  if ( v7 )
  {
    *(_DWORD *)(LODWORD(v3) + 16) = v5 >> 8;
    v81 = (unsigned __int8)v5;
  }
  else
  {
    v8 = *(int **)(LODWORD(v3) + 24);
    v9 = *(int **)(LODWORD(v3) + 28);
    *(_DWORD *)(LODWORD(v3) + 20) = 32;
    if ( v8 == v9 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_DWORD *)(LODWORD(v3) + 24) = v8 + 1;
      v81 = v6;
    }
    else
    {
      if ( v8 <= v9 )
      {
        v10 = *v8;
        *(_DWORD *)(LODWORD(v3) + 24) = v8 + 1;
        *(_DWORD *)(LODWORD(v3) + 16) = v10;
      }
      else
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
      }
      v81 = v6;
    }
  }
LABEL_19:
  v17 = *(_DWORD *)(LODWORD(v3) + 20);
  if ( v17 < 8 )
  {
    v24 = *(_DWORD **)(LODWORD(v3) + 28);
    v25 = *(_DWORD *)(LODWORD(v3) + 16);
    v26 = 8 - v17;
    v27 = *(_DWORD **)(LODWORD(v3) + 24);
    if ( v27 == v24 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_BYTE *)(LODWORD(v3) + 4) = 1;
    }
    else
    {
      if ( v27 > v24 )
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
        goto LABEL_34;
      }
      *(_DWORD *)(LODWORD(v3) + 16) = *v27;
    }
    *(_DWORD *)(LODWORD(v3) + 24) = v27 + 1;
LABEL_34:
    if ( *(_BYTE *)(LODWORD(v3) + 4) )
    {
      v83 = 0;
    }
    else
    {
      v28 = *(_DWORD *)(LODWORD(v3) + 16);
      v29 = (v28 & dword_1039BF80[v26]) << *(_DWORD *)(LODWORD(v3) + 20);
      *(_DWORD *)(LODWORD(v3) + 20) = 32 - v26;
      v83 = v29 | v25;
      *(_DWORD *)(LODWORD(v3) + 16) = v28 >> v26;
    }
    goto LABEL_37;
  }
  v18 = *(_DWORD *)(LODWORD(v3) + 16);
  v19 = (unsigned __int8)v18;
  v20 = v17 - 8;
  *(_DWORD *)(LODWORD(v3) + 20) = v20;
  if ( v20 )
  {
    *(_DWORD *)(LODWORD(v3) + 16) = v18 >> 8;
    v83 = (unsigned __int8)v18;
  }
  else
  {
    v21 = *(int **)(LODWORD(v3) + 24);
    v22 = *(int **)(LODWORD(v3) + 28);
    *(_DWORD *)(LODWORD(v3) + 20) = 32;
    if ( v21 == v22 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_DWORD *)(LODWORD(v3) + 24) = v21 + 1;
      v83 = v19;
    }
    else
    {
      if ( v21 <= v22 )
      {
        v23 = *v21;
        *(_DWORD *)(LODWORD(v3) + 24) = v21 + 1;
        *(_DWORD *)(LODWORD(v3) + 16) = v23;
      }
      else
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
      }
      v83 = v19;
    }
  }
LABEL_37:
  v30 = *(_DWORD *)(LODWORD(v3) + 20);
  if ( v30 < 32 )
  {
    v34 = *(_DWORD **)(LODWORD(v3) + 24);
    v35 = *(_DWORD *)(LODWORD(v3) + 16);
    v36 = 32 - v30;
    v37 = *(_DWORD **)(LODWORD(v3) + 28);
    if ( v34 == v37 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_BYTE *)(LODWORD(v3) + 4) = 1;
    }
    else
    {
      if ( v34 > v37 )
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
        goto LABEL_52;
      }
      *(_DWORD *)(LODWORD(v3) + 16) = *v34;
    }
    *(_DWORD *)(LODWORD(v3) + 24) = v34 + 1;
LABEL_52:
    if ( *(_BYTE *)(LODWORD(v3) + 4) )
    {
      v82 = 0;
    }
    else
    {
      v38 = *(_DWORD *)(LODWORD(v3) + 16);
      v39 = (v38 & dword_1039BF80[v36]) << *(_DWORD *)(LODWORD(v3) + 20);
      *(_DWORD *)(LODWORD(v3) + 20) = 32 - v36;
      v82 = v39 | v35;
      *(_DWORD *)(LODWORD(v3) + 16) = v38 >> v36;
    }
    goto LABEL_55;
  }
  v31 = *(_DWORD *)(LODWORD(v3) + 16);
  *(_DWORD *)(LODWORD(v3) + 20) = v30 - 32;
  if ( v30 == 32 )
  {
    v32 = *(_DWORD **)(LODWORD(v3) + 24);
    v33 = *(_DWORD **)(LODWORD(v3) + 28);
    *(_DWORD *)(LODWORD(v3) + 20) = 32;
    if ( v32 == v33 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_DWORD *)(LODWORD(v3) + 24) = v32 + 1;
      v82 = v31;
    }
    else
    {
      if ( v32 <= v33 )
      {
        *(_DWORD *)(LODWORD(v3) + 16) = *v32;
        *(_DWORD *)(LODWORD(v3) + 24) = v32 + 1;
      }
      else
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
      }
      v82 = v31;
    }
  }
  else
  {
    *(_DWORD *)(LODWORD(v3) + 16) = 0;
    v82 = v31;
  }
LABEL_55:
  v40 = *(_DWORD *)(LODWORD(v3) + 20);
  if ( v40 < 32 )
  {
    v44 = *(_DWORD **)(LODWORD(v3) + 24);
    v45 = *(_DWORD *)(LODWORD(v3) + 16);
    v46 = 32 - v40;
    v47 = *(_DWORD **)(LODWORD(v3) + 28);
    if ( v44 == v47 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_BYTE *)(LODWORD(v3) + 4) = 1;
    }
    else
    {
      if ( v44 > v47 )
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
        goto LABEL_70;
      }
      *(_DWORD *)(LODWORD(v3) + 16) = *v44;
    }
    *(_DWORD *)(LODWORD(v3) + 24) = v44 + 1;
LABEL_70:
    if ( *(_BYTE *)(LODWORD(v3) + 4) )
    {
      a2 = 0.0;
    }
    else
    {
      v48 = *(_DWORD *)(LODWORD(v3) + 16);
      v49 = (v48 & dword_1039BF80[v46]) << *(_DWORD *)(LODWORD(v3) + 20);
      *(_DWORD *)(LODWORD(v3) + 20) = 32 - v46;
      LODWORD(a2) = v49 | v45;
      *(_DWORD *)(LODWORD(v3) + 16) = v48 >> v46;
    }
    goto LABEL_73;
  }
  v41 = *(float *)(LODWORD(v3) + 16);
  *(_DWORD *)(LODWORD(v3) + 20) = v40 - 32;
  if ( v40 == 32 )
  {
    v42 = *(_DWORD **)(LODWORD(v3) + 24);
    v43 = *(_DWORD **)(LODWORD(v3) + 28);
    *(_DWORD *)(LODWORD(v3) + 20) = 32;
    if ( v42 == v43 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_DWORD *)(LODWORD(v3) + 24) = v42 + 1;
      a2 = v41;
    }
    else
    {
      if ( v42 <= v43 )
      {
        *(_DWORD *)(LODWORD(v3) + 16) = *v42;
        *(_DWORD *)(LODWORD(v3) + 24) = v42 + 1;
      }
      else
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
      }
      a2 = v41;
    }
  }
  else
  {
    *(_DWORD *)(LODWORD(v3) + 16) = 0;
    a2 = v41;
  }
LABEL_73:
  v50 = *(_DWORD *)(LODWORD(v3) + 20);
  if ( v50 < 32 )
  {
    v54 = *(_DWORD **)(LODWORD(v3) + 24);
    v55 = *(_DWORD *)(LODWORD(v3) + 16);
    v56 = 32 - v50;
    v57 = *(_DWORD **)(LODWORD(v3) + 28);
    if ( v54 == v57 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_BYTE *)(LODWORD(v3) + 4) = 1;
    }
    else
    {
      if ( v54 > v57 )
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
        goto LABEL_88;
      }
      *(_DWORD *)(LODWORD(v3) + 16) = *v54;
    }
    *(_DWORD *)(LODWORD(v3) + 24) = v54 + 1;
LABEL_88:
    if ( *(_BYTE *)(LODWORD(v3) + 4) )
    {
      v85 = 0.0;
    }
    else
    {
      v58 = *(_DWORD *)(LODWORD(v3) + 16);
      v59 = (v58 & dword_1039BF80[v56]) << *(_DWORD *)(LODWORD(v3) + 20);
      *(_DWORD *)(LODWORD(v3) + 20) = 32 - v56;
      LODWORD(v85) = v59 | v55;
      *(_DWORD *)(LODWORD(v3) + 16) = v58 >> v56;
    }
    goto LABEL_91;
  }
  v51 = *(float *)(LODWORD(v3) + 16);
  *(_DWORD *)(LODWORD(v3) + 20) = v50 - 32;
  if ( v50 == 32 )
  {
    v52 = *(_DWORD **)(LODWORD(v3) + 24);
    v53 = *(_DWORD **)(LODWORD(v3) + 28);
    *(_DWORD *)(LODWORD(v3) + 20) = 32;
    if ( v52 == v53 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_DWORD *)(LODWORD(v3) + 24) = v52 + 1;
      v85 = v51;
    }
    else
    {
      if ( v52 <= v53 )
      {
        *(_DWORD *)(LODWORD(v3) + 16) = *v52;
        *(_DWORD *)(LODWORD(v3) + 24) = v52 + 1;
      }
      else
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
      }
      v85 = v51;
    }
  }
  else
  {
    *(_DWORD *)(LODWORD(v3) + 16) = 0;
    v85 = v51;
  }
LABEL_91:
  v60 = *(_DWORD *)(LODWORD(v3) + 20);
  if ( v60 < 32 )
  {
    v64 = *(_DWORD **)(LODWORD(v3) + 24);
    v65 = *(_DWORD *)(LODWORD(v3) + 16);
    v66 = 32 - v60;
    v67 = *(_DWORD **)(LODWORD(v3) + 28);
    if ( v64 == v67 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_BYTE *)(LODWORD(v3) + 4) = 1;
    }
    else
    {
      if ( v64 > v67 )
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
        goto LABEL_106;
      }
      *(_DWORD *)(LODWORD(v3) + 16) = *v64;
    }
    *(_DWORD *)(LODWORD(v3) + 24) = v64 + 1;
LABEL_106:
    if ( *(_BYTE *)(LODWORD(v3) + 4) )
    {
      v84 = 0.0;
    }
    else
    {
      v68 = *(_DWORD *)(LODWORD(v3) + 16);
      v69 = (v68 & dword_1039BF80[v66]) << *(_DWORD *)(LODWORD(v3) + 20);
      *(_DWORD *)(LODWORD(v3) + 20) = 32 - v66;
      LODWORD(v84) = v69 | v65;
      *(_DWORD *)(LODWORD(v3) + 16) = v68 >> v66;
    }
    goto LABEL_109;
  }
  v61 = *(float *)(LODWORD(v3) + 16);
  *(_DWORD *)(LODWORD(v3) + 20) = v60 - 32;
  if ( v60 == 32 )
  {
    v62 = *(_DWORD **)(LODWORD(v3) + 24);
    v63 = *(_DWORD **)(LODWORD(v3) + 28);
    *(_DWORD *)(LODWORD(v3) + 20) = 32;
    if ( v62 == v63 )
    {
      *(_DWORD *)(LODWORD(v3) + 20) = 1;
      *(_DWORD *)(LODWORD(v3) + 16) = 0;
      *(_DWORD *)(LODWORD(v3) + 24) = v62 + 1;
      v84 = v61;
    }
    else
    {
      if ( v62 <= v63 )
      {
        *(_DWORD *)(LODWORD(v3) + 16) = *v62;
        *(_DWORD *)(LODWORD(v3) + 24) = v62 + 1;
      }
      else
      {
        *(_BYTE *)(LODWORD(v3) + 4) = 1;
        *(_DWORD *)(LODWORD(v3) + 16) = 0;
      }
      v84 = v61;
    }
  }
  else
  {
    *(_DWORD *)(LODWORD(v3) + 16) = 0;
    v84 = v61;
  }
LABEL_109:
  v70 = sub_100422D0();
  v71 = v70;
  if ( v70 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v70 + 416))(v70) > 0 )
    {
      if ( a2 != flt_10459240
        || v85 != *(float *)&qword_10459244
        || v84 != *((float *)&qword_10459244 + 1)
        || (v82 & 0x4000) != 0 )
      {
        v72 = sub_101356D0();
        v80[0] = a2 - *v72;
        v80[1] = v85 - v72[1];
        v80[2] = v84 - v72[2];
        off_103EDFEC();
        v73 = 1;
        if ( v83 > 25 )
          v73 = 2;
        if ( !*(_BYTE *)(v71 + 3681) )
          v73 = 2;
        if ( v83 > 0 || v81 > 0 )
        {
          sub_101AFD30(v80, &a2);
          v74 = &off_103ED238;
          if ( off_103ED238 )
          {
            v75 = a2;
            while ( 1 )
            {
              v76 = (unsigned int)v74[1];
              if ( (!v76 || (v76 & v82) != 0)
                && (0.0 == *((float *)v74 + 2) || *((float *)v74 + 2) <= v75)
                && (0.0 == *((float *)v74 + 3) || *((float *)v74 + 3) >= v75) )
              {
                v77 = v74[4];
                if ( !v77 || v77 == (char *)v73 )
                  break;
              }
              v74 += 5;
              if ( !*v74 )
                return;
            }
            v78 = *v74;
            if ( v78 )
            {
              v79 = v78;
              (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
              sub_10248C80(v79);
            }
          }
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      sub_10248C80("HudPlayerDeath");
    }
  }
}
