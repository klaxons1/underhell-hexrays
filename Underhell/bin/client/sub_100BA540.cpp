void __userpurge sub_100BA540(int a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4)
{
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // esi
  int v8; // ecx
  int *v9; // ecx
  int *v10; // edx
  int v11; // edx
  _DWORD *v12; // esi
  int v13; // edi
  int v14; // edx
  _DWORD *v15; // ecx
  unsigned int v16; // esi
  int v17; // ebx
  int v18; // ecx
  unsigned int v19; // edx
  int v20; // esi
  int v21; // ecx
  int *v22; // ecx
  int *v23; // edx
  int v24; // edx
  _DWORD *v25; // esi
  int v26; // edi
  int v27; // edx
  _DWORD *v28; // ecx
  unsigned int v29; // esi
  int v30; // ebx
  int v31; // ecx
  unsigned int v32; // edx
  int v33; // edi
  int v34; // ecx
  int *v35; // ecx
  int *v36; // edx
  int v37; // edx
  _DWORD *v38; // esi
  int v39; // edi
  int v40; // edx
  _DWORD *v41; // ecx
  unsigned int v42; // esi
  int v43; // ebx
  const char *v44; // esi
  int *v45; // edi
  const wchar_t *v46; // eax
  unsigned int v47; // kr00_4
  char v48; // al
  int v49; // eax
  int *i; // eax
  int v51; // esi
  int v52; // edi
  int v53; // eax
  int v54; // edi
  int v55; // [esp-28h] [ebp-974h]
  char v58; // [esp+3h] [ebp-949h]
  int v59[512]; // [esp+4h] [ebp-948h] BYREF
  wchar_t Destination[128]; // [esp+804h] [ebp-148h] BYREF
  _BYTE v61[64]; // [esp+904h] [ebp-48h] BYREF
  int v62; // [esp+944h] [ebp-8h]
  int v63; // [esp+948h] [ebp-4h]
  int v64; // [esp+954h] [ebp+8h]

  v62 = a1;
  if ( !dword_1040D3A8 || !*(_DWORD *)(dword_1043000C + 48) )
    return;
  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 < 8 )
  {
    v12 = *(_DWORD **)(a4 + 28);
    v13 = *(_DWORD *)(a4 + 16);
    v14 = 8 - v5;
    v15 = *(_DWORD **)(a4 + 24);
    if ( v15 == v12 )
    {
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 16) = 0;
      *(_BYTE *)(a4 + 4) = 1;
    }
    else
    {
      if ( v15 > v12 )
      {
        *(_BYTE *)(a4 + 4) = 1;
        *(_DWORD *)(a4 + 16) = 0;
        goto LABEL_18;
      }
      *(_DWORD *)(a4 + 16) = *v15;
    }
    *(_DWORD *)(a4 + 24) = v15 + 1;
LABEL_18:
    if ( *(_BYTE *)(a4 + 4) )
    {
      v63 = 0;
    }
    else
    {
      v16 = *(_DWORD *)(a4 + 16);
      v17 = (v16 & dword_1039BF80[v14]) << *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = 32 - v14;
      v63 = v17 | v13;
      *(_DWORD *)(a4 + 16) = v16 >> v14;
    }
    goto LABEL_21;
  }
  v6 = *(_DWORD *)(a4 + 16);
  v7 = (unsigned __int8)v6;
  v8 = v5 - 8;
  *(_DWORD *)(a4 + 20) = v8;
  if ( v8 )
  {
    *(_DWORD *)(a4 + 16) = v6 >> 8;
    v63 = (unsigned __int8)v6;
  }
  else
  {
    v9 = *(int **)(a4 + 24);
    v10 = *(int **)(a4 + 28);
    *(_DWORD *)(a4 + 20) = 32;
    if ( v9 == v10 )
    {
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 16) = 0;
      *(_DWORD *)(a4 + 24) = v9 + 1;
      v63 = v7;
    }
    else
    {
      if ( v9 <= v10 )
      {
        v11 = *v9;
        *(_DWORD *)(a4 + 24) = v9 + 1;
        *(_DWORD *)(a4 + 16) = v11;
      }
      else
      {
        *(_BYTE *)(a4 + 4) = 1;
        *(_DWORD *)(a4 + 16) = 0;
      }
      v63 = v7;
    }
  }
LABEL_21:
  v18 = *(_DWORD *)(a4 + 20);
  if ( v18 < 8 )
  {
    v25 = *(_DWORD **)(a4 + 28);
    v26 = *(_DWORD *)(a4 + 16);
    v27 = 8 - v18;
    v28 = *(_DWORD **)(a4 + 24);
    if ( v28 == v25 )
    {
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 16) = 0;
      *(_BYTE *)(a4 + 4) = 1;
    }
    else
    {
      if ( v28 > v25 )
      {
        *(_BYTE *)(a4 + 4) = 1;
        *(_DWORD *)(a4 + 16) = 0;
        goto LABEL_36;
      }
      *(_DWORD *)(a4 + 16) = *v28;
    }
    *(_DWORD *)(a4 + 24) = v28 + 1;
LABEL_36:
    if ( *(_BYTE *)(a4 + 4) )
    {
      v64 = 0;
    }
    else
    {
      v29 = *(_DWORD *)(a4 + 16);
      v30 = (v29 & dword_1039BF80[v27]) << *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = 32 - v27;
      v64 = v30 | v26;
      *(_DWORD *)(a4 + 16) = v29 >> v27;
    }
    goto LABEL_39;
  }
  v19 = *(_DWORD *)(a4 + 16);
  v20 = (unsigned __int8)v19;
  v21 = v18 - 8;
  *(_DWORD *)(a4 + 20) = v21;
  if ( v21 )
  {
    *(_DWORD *)(a4 + 16) = v19 >> 8;
    v64 = (unsigned __int8)v19;
  }
  else
  {
    v22 = *(int **)(a4 + 24);
    v23 = *(int **)(a4 + 28);
    *(_DWORD *)(a4 + 20) = 32;
    if ( v22 == v23 )
    {
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 16) = 0;
      *(_DWORD *)(a4 + 24) = v22 + 1;
      v64 = v20;
    }
    else
    {
      if ( v22 <= v23 )
      {
        v24 = *v22;
        *(_DWORD *)(a4 + 24) = v22 + 1;
        *(_DWORD *)(a4 + 16) = v24;
      }
      else
      {
        *(_BYTE *)(a4 + 4) = 1;
        *(_DWORD *)(a4 + 16) = 0;
      }
      v64 = v20;
    }
  }
LABEL_39:
  v31 = *(_DWORD *)(a4 + 20);
  if ( v31 < 8 )
  {
    v38 = *(_DWORD **)(a4 + 28);
    v39 = *(_DWORD *)(a4 + 16);
    v40 = 8 - v31;
    v41 = *(_DWORD **)(a4 + 24);
    if ( v41 == v38 )
    {
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 16) = 0;
      *(_BYTE *)(a4 + 4) = 1;
    }
    else
    {
      if ( v41 > v38 )
      {
        *(_BYTE *)(a4 + 4) = 1;
        *(_DWORD *)(a4 + 16) = 0;
        goto LABEL_53;
      }
      *(_DWORD *)(a4 + 16) = *v41;
    }
    *(_DWORD *)(a4 + 24) = v41 + 1;
LABEL_53:
    if ( *(_BYTE *)(a4 + 4) )
    {
      v33 = 0;
    }
    else
    {
      v42 = *(_DWORD *)(a4 + 16);
      v43 = (v42 & dword_1039BF80[v40]) << *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = 32 - v40;
      v33 = v43 | v39;
      *(_DWORD *)(a4 + 16) = v42 >> v40;
    }
    goto LABEL_56;
  }
  v32 = *(_DWORD *)(a4 + 16);
  v33 = (unsigned __int8)v32;
  v34 = v31 - 8;
  *(_DWORD *)(a4 + 20) = v34;
  if ( v34 )
  {
    *(_DWORD *)(a4 + 16) = v32 >> 8;
  }
  else
  {
    v35 = *(int **)(a4 + 24);
    v36 = *(int **)(a4 + 28);
    *(_DWORD *)(a4 + 20) = 32;
    if ( v35 == v36 )
    {
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 16) = 0;
      *(_DWORD *)(a4 + 24) = v35 + 1;
    }
    else if ( v35 <= v36 )
    {
      v37 = *v35;
      *(_DWORD *)(a4 + 24) = v35 + 1;
      *(_DWORD *)(a4 + 16) = v37;
    }
    else
    {
      *(_BYTE *)(a4 + 4) = 1;
      *(_DWORD *)(a4 + 16) = 0;
    }
  }
LABEL_56:
  v44 = Locale;
  if ( __RTDynamicCast(
         dword_10412D50,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_GameRules `RTTI Type Descriptor',
         (int)&C_MultiplayRules `RTTI Type Descriptor',
         0) )
  {
    v44 = (const char *)sub_100E1D00(v64, v33);
  }
  v45 = (int *)v62;
  *(_BYTE *)(v62 + 348) = 1;
  v46 = (const wchar_t *)(*(int (__thiscall **)(int, const char *, int, int))(*(_DWORD *)dword_1047CA78 + 8))(
                           dword_1047CA78,
                           v44,
                           a2,
                           a3);
  if ( v46 )
  {
    wcsncpy(Destination, v46, 0x80u);
    Destination[127] = 0;
  }
  else
  {
    (*(void (__thiscall **)(int, const char *, wchar_t *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      v44,
      Destination,
      256);
  }
  (*(void (__thiscall **)(int, wchar_t *, int *, int))(*(_DWORD *)dword_1047CA78 + 16))(
    dword_1047CA78,
    Destination,
    v59,
    2048);
  v47 = strlen((const char *)v59);
  if ( v47 )
  {
    v48 = *(&v58 + v47);
    if ( v48 != 10 && v48 != 13 )
      sub_10228100((int)v59, "\n", 2048, 1);
  }
  v49 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, "#Voice");
  (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 16))(dword_1047CA78, v49, v61, 64);
  for ( i = v59; *(_BYTE *)i; i = (int *)((char *)i + 1) )
  {
    if ( *(_BYTE *)i == 13 )
      *(_BYTE *)i = 10;
  }
  v51 = *v45;
  v52 = v63;
  v53 = (*(int (__thiscall **)(int, int, int, int *))(v51 + 112))(v62, v63, 1, v59);
  v55 = v52;
  v54 = v62;
  (*(void (**)(int, int, _DWORD, const char *, ...))(v51 + 72))(v62, v55, 0, "%c(%s) %s%c: %s", 3, v61, v53);
  *(_BYTE *)(v54 + 348) = 0;
}
