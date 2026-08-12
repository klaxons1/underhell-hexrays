int __cdecl sub_10082490(int a1)
{
  int v2; // ecx
  unsigned int v3; // edx
  int v4; // edi
  unsigned int v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // ecx
  unsigned int v12; // edx
  int v13; // ebx
  int (__thiscall *v14)(int, char *); // eax
  int result; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // ebx
  _DWORD *v21; // eax
  _DWORD *v22; // ecx
  _DWORD *v23; // edx
  int v24; // edi
  int v25; // eax
  _DWORD *v26; // ecx
  unsigned int v27; // edx
  int v28; // ebx
  int v29; // edi
  char String1[2048]; // [esp+Ch] [ebp-A04h] BYREF
  char Str[256]; // [esp+80Ch] [ebp-204h] BYREF
  _BYTE Src[256]; // [esp+90Ch] [ebp-104h] BYREF
  int v33; // [esp+A0Ch] [ebp-4h]
  int v34; // [esp+A18h] [ebp+8h]

  sub_1022C220(String1, 2048, 0, 0);
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 < 8 )
  {
    v8 = *(_DWORD **)(a1 + 28);
    v9 = *(_DWORD *)(a1 + 16);
    v10 = 8 - v2;
    v11 = *(_DWORD **)(a1 + 24);
    if ( v11 == v8 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v11 > v8 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
LABEL_15:
        if ( *(_BYTE *)(a1 + 4) )
        {
          v4 = 0;
          goto LABEL_19;
        }
        v12 = *(_DWORD *)(a1 + 16);
        v13 = (v12 & dword_1039BF80[v10]) << *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = 32 - v10;
        v4 = v13 | v9;
        v5 = v12 >> v10;
        goto LABEL_18;
      }
      *(_DWORD *)(a1 + 16) = *v11;
    }
    *(_DWORD *)(a1 + 24) = v11 + 1;
    goto LABEL_15;
  }
  v3 = *(_DWORD *)(a1 + 16);
  v4 = (unsigned __int8)v3;
  *(_DWORD *)(a1 + 20) = v2 - 8;
  if ( v2 != 8 )
  {
    v5 = v3 >> 8;
LABEL_18:
    *(_DWORD *)(a1 + 16) = v5;
    goto LABEL_19;
  }
  v6 = *(_DWORD **)(a1 + 24);
  v7 = *(_DWORD **)(a1 + 28);
  *(_DWORD *)(a1 + 20) = 32;
  if ( v6 == v7 )
  {
    *(_DWORD *)(a1 + 20) = 1;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = v6 + 1;
  }
  else if ( v6 <= v7 )
  {
    *(_DWORD *)(a1 + 16) = *v6;
    *(_DWORD *)(a1 + 24) = v6 + 1;
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 16) = 0;
  }
LABEL_19:
  v14 = *(int (__thiscall **)(int, char *))(*(_DWORD *)dword_104453A8 + 16);
  LOBYTE(v33) = v4 != 0;
  result = v14(dword_104453A8, String1);
  v34 = result;
  if ( !result )
    return result;
  v16 = *(_DWORD *)(a1 + 20);
  if ( v16 >= 8 )
  {
    v17 = *(_DWORD *)(a1 + 16);
    v18 = (unsigned __int8)v17;
    v19 = v16 - 8;
    *(_DWORD *)(a1 + 20) = v19;
    if ( v19 )
    {
      *(_DWORD *)(a1 + 16) = v17 >> 8;
      v20 = (unsigned __int8)v17;
    }
    else
    {
      v21 = *(_DWORD **)(a1 + 24);
      v22 = *(_DWORD **)(a1 + 28);
      *(_DWORD *)(a1 + 20) = 32;
      if ( v21 == v22 )
      {
        *(_DWORD *)(a1 + 16) = 0;
        *(_DWORD *)(a1 + 20) = 1;
        *(_DWORD *)(a1 + 24) = v21 + 1;
        v20 = v18;
      }
      else
      {
        if ( v21 <= v22 )
        {
          *(_DWORD *)(a1 + 16) = *v21;
          *(_DWORD *)(a1 + 24) = v21 + 1;
        }
        else
        {
          *(_DWORD *)(a1 + 16) = 0;
          *(_BYTE *)(a1 + 4) = 1;
        }
        v20 = v18;
      }
    }
LABEL_37:
    if ( v20 > 0 )
    {
      if ( sub_10229D00(32) )
        v29 = sub_10229D20("data");
      else
        v29 = 0;
      do
      {
        sub_1022C220(Str, 255, 0, 0);
        sub_1022C220(Src, 255, 0, 0);
        sub_1022ABA0(Str, Src);
        --v20;
      }
      while ( v20 );
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v34 + 8))(v34, v29);
      sub_1022AF00(v29);
    }
    goto LABEL_43;
  }
  v23 = *(_DWORD **)(a1 + 28);
  v24 = *(_DWORD *)(a1 + 16);
  v25 = 8 - v16;
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
      goto LABEL_35;
    }
    *(_DWORD *)(a1 + 16) = *v26;
  }
  *(_DWORD *)(a1 + 24) = v26 + 1;
LABEL_35:
  if ( !*(_BYTE *)(a1 + 4) )
  {
    v27 = *(_DWORD *)(a1 + 16);
    v28 = (v27 & dword_1039BF80[v25]) << *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 20) = 32 - v25;
    v20 = v24 | v28;
    *(_DWORD *)(a1 + 16) = v27 >> v25;
    goto LABEL_37;
  }
LABEL_43:
  if ( !_stricmp(String1, "scores") )
  {
    if ( *(_DWORD *)(dword_1042BD44 + 48) )
      flt_1042FC00 = *((float *)off_103DC81C + 3) + 1.0;
  }
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_104453A8 + 4))(dword_104453A8, v34, v33);
}
