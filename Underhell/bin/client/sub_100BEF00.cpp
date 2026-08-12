int __thiscall sub_100BEF00(void *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // edx
  int v5; // edi
  unsigned int v6; // edx
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // edx
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // ecx
  unsigned int v13; // edx
  int v14; // ebx
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // edi
  int v18; // ecx
  _DWORD *v19; // eax
  _DWORD *v20; // ecx
  _DWORD *v21; // edx
  int v22; // edi
  int v23; // eax
  _DWORD *v24; // ecx
  unsigned int v25; // edx
  int v26; // ebx
  wchar_t *v27; // ebx
  int v28; // esi
  _WORD *v29; // eax
  char *v30; // eax
  wchar_t Destination[256]; // [esp+Ch] [ebp-F04h] BYREF
  unsigned __int16 v33[256]; // [esp+20Ch] [ebp-D04h] BYREF
  unsigned __int16 v34[256]; // [esp+40Ch] [ebp-B04h] BYREF
  wchar_t v35[256]; // [esp+60Ch] [ebp-904h] BYREF
  wchar_t v36[256]; // [esp+80Ch] [ebp-704h] BYREF
  _WORD v37[256]; // [esp+A0Ch] [ebp-504h] BYREF
  char v38[256]; // [esp+C0Ch] [ebp-304h] BYREF
  char v39[512]; // [esp+D0Ch] [ebp-204h] BYREF
  void *v40; // [esp+F0Ch] [ebp-4h]
  int v41; // [esp+F18h] [ebp+8h]

  v40 = this;
  v3 = *(_DWORD *)(a2 + 20);
  if ( v3 < 8 )
  {
    v9 = *(_DWORD **)(a2 + 28);
    v10 = *(_DWORD *)(a2 + 16);
    v11 = 8 - v3;
    v12 = *(_DWORD **)(a2 + 24);
    if ( v12 == v9 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v12 > v9 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
LABEL_15:
        if ( *(_BYTE *)(a2 + 4) )
        {
          v41 = 0;
          goto LABEL_20;
        }
        v13 = *(_DWORD *)(a2 + 16);
        v14 = (v13 & dword_1039BF80[v11]) << *(_DWORD *)(a2 + 20);
        *(_DWORD *)(a2 + 20) = 32 - v11;
        v5 = v14 | v10;
        v6 = v13 >> v11;
        goto LABEL_18;
      }
      *(_DWORD *)(a2 + 16) = *v12;
    }
    *(_DWORD *)(a2 + 24) = v12 + 1;
    goto LABEL_15;
  }
  v4 = *(_DWORD *)(a2 + 16);
  v5 = (unsigned __int8)v4;
  *(_DWORD *)(a2 + 20) = v3 - 8;
  if ( v3 == 8 )
  {
    v7 = *(_DWORD **)(a2 + 24);
    v8 = *(_DWORD **)(a2 + 28);
    *(_DWORD *)(a2 + 20) = 32;
    if ( v7 == v8 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 24) = v7 + 1;
    }
    else if ( v7 <= v8 )
    {
      *(_DWORD *)(a2 + 16) = *v7;
      *(_DWORD *)(a2 + 24) = v7 + 1;
    }
    else
    {
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 0;
    }
    goto LABEL_19;
  }
  v6 = v4 >> 8;
LABEL_18:
  *(_DWORD *)(a2 + 16) = v6;
LABEL_19:
  v41 = v5;
LABEL_20:
  v15 = *(_DWORD *)(a2 + 20);
  if ( v15 < 8 )
  {
    v21 = *(_DWORD **)(a2 + 28);
    v22 = *(_DWORD *)(a2 + 16);
    v23 = 8 - v15;
    v24 = *(_DWORD **)(a2 + 24);
    if ( v24 == v21 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v24 > v21 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        goto LABEL_34;
      }
      *(_DWORD *)(a2 + 16) = *v24;
    }
    *(_DWORD *)(a2 + 24) = v24 + 1;
LABEL_34:
    if ( *(_BYTE *)(a2 + 4) )
    {
      v17 = 0;
    }
    else
    {
      v25 = *(_DWORD *)(a2 + 16);
      v26 = (v25 & dword_1039BF80[v23]) << *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 32 - v23;
      v17 = v26 | v22;
      *(_DWORD *)(a2 + 16) = v25 >> v23;
    }
    goto LABEL_37;
  }
  v16 = *(_DWORD *)(a2 + 16);
  v17 = (unsigned __int8)v16;
  v18 = v15 - 8;
  *(_DWORD *)(a2 + 20) = v18;
  if ( v18 )
  {
    *(_DWORD *)(a2 + 16) = v16 >> 8;
  }
  else
  {
    v19 = *(_DWORD **)(a2 + 24);
    v20 = *(_DWORD **)(a2 + 28);
    *(_DWORD *)(a2 + 20) = 32;
    if ( v19 == v20 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 24) = v19 + 1;
    }
    else if ( v19 <= v20 )
    {
      *(_DWORD *)(a2 + 16) = *v19;
      *(_DWORD *)(a2 + 24) = v19 + 1;
    }
    else
    {
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 0;
    }
  }
LABEL_37:
  v27 = sub_100B8D30(a2, a2, Destination, 0x200u, 0, v38, 0x100u);
  sub_100B8E00(a2, v33, 512);
  sub_100B8E00(a2, v34, 512);
  sub_100B8D30(a2, a2, v35, 0x200u, 1, 0, 0);
  sub_100B8D30(a2, a2, v36, 0x200u, 1, 0, 0);
  (*(void (__cdecl **)(int, _WORD *, int, wchar_t *, int, unsigned __int16 *, unsigned __int16 *, wchar_t *, wchar_t *))(*(_DWORD *)dword_1047CA78 + 32))(
    dword_1047CA78,
    v37,
    512,
    v27,
    4,
    v33,
    v34,
    v35,
    v36);
  v28 = *(_DWORD *)dword_1047CA78;
  v29 = sub_100B8CD0(v37);
  (*(void (__thiscall **)(int, _WORD *))(v28 + 16))(dword_1047CA78, v29);
  if ( !v17 )
    return (*(int (**)(void *, int, _DWORD, const char *, ...))(*(_DWORD *)v40 + 72))(v40, v41, 0, "%s", v39);
  (*(void (**)(void *, int, _DWORD, const char *, ...))(*(_DWORD *)v40 + 72))(v40, v41, 0, "%s", v39);
  v30 = sub_100B8C80(v39);
  return Msg("%s\n", v30);
}
