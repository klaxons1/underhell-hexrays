void *__thiscall sub_100DE8A0(_DWORD *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // edx
  __int16 v5; // si
  int v6; // ecx
  __int16 v7; // cx
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
  char v19; // si
  int v20; // ecx
  char v21; // cl
  int *v22; // ecx
  int *v23; // edx
  int v24; // edx
  _DWORD *v25; // esi
  int v26; // edi
  int v27; // edx
  _DWORD *v28; // ecx
  unsigned int v29; // esi
  int v30; // ebx
  int v31; // edx
  int v32; // ecx
  unsigned int v33; // edx
  int v34; // esi
  int v35; // ecx
  int v36; // edi
  int *v37; // ecx
  int *v38; // edx
  int v39; // edx
  _DWORD *v40; // esi
  int v41; // edi
  int v42; // edx
  _DWORD *v43; // ecx
  unsigned int v44; // esi
  int v45; // ebx
  _DWORD *v46; // esi
  _DWORD *v47; // ecx
  char *v48; // eax
  char *i; // ecx
  void *result; // eax
  double v51; // st7
  double v52; // st7
  int v53; // [esp+0h] [ebp-A10h]
  char Source[2048]; // [esp+Ch] [ebp-A04h] BYREF
  char Destination[512]; // [esp+80Ch] [ebp-204h] BYREF
  _DWORD *v56; // [esp+A0Ch] [ebp-4h]
  int v57; // [esp+A18h] [ebp+8h]

  v56 = this;
  v3 = *(_DWORD *)(a2 + 20);
  if ( v3 < 16 )
  {
    v11 = *(_DWORD **)(a2 + 28);
    v12 = *(_DWORD *)(a2 + 16);
    v13 = 16 - v3;
    v14 = *(_DWORD **)(a2 + 24);
    if ( v14 == v11 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v14 > v11 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        goto LABEL_16;
      }
      *(_DWORD *)(a2 + 16) = *v14;
    }
    *(_DWORD *)(a2 + 24) = v14 + 1;
LABEL_16:
    if ( *(_BYTE *)(a2 + 4) )
    {
      v7 = 0;
    }
    else
    {
      v15 = *(_DWORD *)(a2 + 16);
      v16 = (v15 & dword_1039BF80[v13]) << *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 32 - v13;
      v7 = v16 | v12;
      *(_DWORD *)(a2 + 16) = v15 >> v13;
    }
    goto LABEL_19;
  }
  v4 = *(_DWORD *)(a2 + 16);
  v5 = v4;
  v6 = v3 - 16;
  *(_DWORD *)(a2 + 20) = v6;
  if ( v6 )
  {
    *(_DWORD *)(a2 + 16) = HIWORD(v4);
    v7 = v4;
  }
  else
  {
    v8 = *(int **)(a2 + 24);
    v9 = *(int **)(a2 + 28);
    *(_DWORD *)(a2 + 20) = 32;
    if ( v8 == v9 )
    {
      *(_DWORD *)(a2 + 24) = v8 + 1;
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      v7 = v5;
    }
    else
    {
      if ( v8 <= v9 )
      {
        v10 = *v8;
        *(_DWORD *)(a2 + 24) = v8 + 1;
        *(_DWORD *)(a2 + 16) = v10;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
      v7 = v5;
    }
  }
LABEL_19:
  v56[71] = v7;
  v17 = *(_DWORD *)(a2 + 20);
  if ( v17 < 8 )
  {
    v25 = *(_DWORD **)(a2 + 28);
    v26 = *(_DWORD *)(a2 + 16);
    v27 = 8 - v17;
    v28 = *(_DWORD **)(a2 + 24);
    if ( v28 == v25 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v28 > v25 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        goto LABEL_34;
      }
      *(_DWORD *)(a2 + 16) = *v28;
    }
    *(_DWORD *)(a2 + 24) = v28 + 1;
LABEL_34:
    if ( *(_BYTE *)(a2 + 4) )
    {
      v21 = 0;
    }
    else
    {
      v29 = *(_DWORD *)(a2 + 16);
      v30 = (v29 & dword_1039BF80[v27]) << *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 32 - v27;
      v21 = v30 | v26;
      *(_DWORD *)(a2 + 16) = v29 >> v27;
    }
    goto LABEL_37;
  }
  v18 = *(_DWORD *)(a2 + 16);
  v19 = v18;
  v20 = v17 - 8;
  *(_DWORD *)(a2 + 20) = v20;
  if ( v20 )
  {
    *(_DWORD *)(a2 + 16) = v18 >> 8;
    v21 = v18;
  }
  else
  {
    v22 = *(int **)(a2 + 24);
    v23 = *(int **)(a2 + 28);
    *(_DWORD *)(a2 + 20) = 32;
    if ( v22 == v23 )
    {
      *(_DWORD *)(a2 + 24) = v22 + 1;
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      v21 = v19;
    }
    else
    {
      if ( v22 <= v23 )
      {
        v24 = *v22;
        *(_DWORD *)(a2 + 24) = v22 + 1;
        *(_DWORD *)(a2 + 16) = v24;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
      v21 = v19;
    }
  }
LABEL_37:
  v31 = v21;
  v32 = *(_DWORD *)(a2 + 20);
  v57 = v31;
  if ( v32 < 8 )
  {
    v40 = *(_DWORD **)(a2 + 28);
    v41 = *(_DWORD *)(a2 + 16);
    v42 = 8 - v32;
    v43 = *(_DWORD **)(a2 + 24);
    if ( v43 == v40 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v43 > v40 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        goto LABEL_52;
      }
      *(_DWORD *)(a2 + 16) = *v43;
    }
    *(_DWORD *)(a2 + 24) = v43 + 1;
LABEL_52:
    if ( *(_BYTE *)(a2 + 4) )
    {
      v36 = 0;
    }
    else
    {
      v44 = *(_DWORD *)(a2 + 16);
      v45 = (v44 & dword_1039BF80[v42]) << *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 32 - v42;
      v36 = v45 | v41;
      *(_DWORD *)(a2 + 16) = v44 >> v42;
    }
    goto LABEL_55;
  }
  v33 = *(_DWORD *)(a2 + 16);
  v34 = (unsigned __int8)v33;
  v35 = v32 - 8;
  *(_DWORD *)(a2 + 20) = v35;
  if ( v35 )
  {
    *(_DWORD *)(a2 + 16) = v33 >> 8;
    v36 = (unsigned __int8)v33;
  }
  else
  {
    v37 = *(int **)(a2 + 24);
    v38 = *(int **)(a2 + 28);
    *(_DWORD *)(a2 + 20) = 32;
    if ( v37 == v38 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 24) = v37 + 1;
      v36 = v34;
    }
    else
    {
      if ( v37 <= v38 )
      {
        v39 = *v37;
        *(_DWORD *)(a2 + 24) = v37 + 1;
        *(_DWORD *)(a2 + 16) = v39;
      }
      else
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
      }
      v36 = v34;
    }
  }
LABEL_55:
  if ( v57 <= 0 )
  {
    v47 = v56;
    *((float *)v56 + 72) = -1.0;
    v46 = v47;
  }
  else
  {
    v46 = v56;
    *((float *)v56 + 72) = (double)v57 + *((float *)v56 + 78) + *(float *)off_103DC81C;
  }
  if ( v46[71] )
  {
    sub_1022C220(Source, 2048, 0, 0);
    if ( v46[73] )
      sub_10228100((int)&byte_10433FD0, Source, 512, -1);
    else
      sub_102282F0(&byte_10433FD0, Source, 0x200u);
    if ( !v36 )
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48, "MenuOpen");
      sub_10248C80(v53);
      v46[74] = -1;
      v48 = (char *)((int (__thiscall *)(int (__stdcall ***)(int, int, int), char *))(*off_103E6DA4)[1])(
                      off_103E6DA4,
                      &byte_10433FD0);
      for ( i = v48; *i; ++i )
      {
        if ( *i == 13 )
          *i = 10;
      }
      sub_102282F0(Destination, v48, 0x200u);
      (*(void (__thiscall **)(int, char *, __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
        dword_1047CA78,
        Destination,
        word_104341D0,
        1024);
      sub_100DE6C0(v46);
    }
    *((_BYTE *)v46 + 280) = 1;
    *((_BYTE *)v46 + 300) = 1;
    result = off_103DC81C;
    v51 = *((float *)off_103DC81C + 3);
    v46[73] = v36;
    *((float *)v46 + 76) = v51;
  }
  else
  {
    v52 = *((float *)v46 + 78);
    *((_BYTE *)v46 + 300) = 0;
    *((float *)v46 + 72) = v52 + *(float *)off_103DC81C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    result = (void *)sub_10248C80("MenuClose");
    v46[73] = v36;
  }
  return result;
}
