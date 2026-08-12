void __thiscall sub_100B9C30(int *this, int a2)
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
  unsigned int v16; // edx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // edx
  unsigned int *v20; // ecx
  unsigned int *v21; // edx
  _DWORD *v22; // edx
  int v23; // edi
  int v24; // eax
  _DWORD *v25; // ecx
  unsigned int v26; // edx
  int v27; // ebx
  bool v28; // bl
  _WORD *i; // eax
  int v30; // ebx
  int v31; // edi
  int v32; // esi
  int v33; // eax
  int v34; // esi
  char *v35; // edx
  char *j; // ecx
  char v37; // al
  int *v38; // edi
  int v39; // esi
  int v40; // eax
  wchar_t Destination[256]; // [esp+28h] [ebp-F24h] BYREF
  unsigned __int16 v42[256]; // [esp+228h] [ebp-D24h] BYREF
  unsigned __int16 v43[256]; // [esp+428h] [ebp-B24h] BYREF
  wchar_t v44[256]; // [esp+628h] [ebp-924h] BYREF
  wchar_t v45[256]; // [esp+828h] [ebp-724h] BYREF
  _WORD v46[256]; // [esp+A28h] [ebp-524h] BYREF
  char v47[256]; // [esp+C28h] [ebp-324h] BYREF
  char v48[512]; // [esp+D28h] [ebp-224h] BYREF
  int v49[8]; // [esp+F28h] [ebp-24h] BYREF
  int *v50; // [esp+F48h] [ebp-4h]
  int v51; // [esp+F54h] [ebp+8h]

  v50 = this;
  if ( !dword_1040D3A8 )
    return;
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
LABEL_16:
        if ( *(_BYTE *)(a2 + 4) )
        {
          v51 = 0;
          goto LABEL_21;
        }
        v13 = *(_DWORD *)(a2 + 16);
        v14 = (v13 & dword_1039BF80[v11]) << *(_DWORD *)(a2 + 20);
        *(_DWORD *)(a2 + 20) = 32 - v11;
        v5 = v14 | v10;
        v6 = v13 >> v11;
        goto LABEL_19;
      }
      *(_DWORD *)(a2 + 16) = *v12;
    }
    *(_DWORD *)(a2 + 24) = v12 + 1;
    goto LABEL_16;
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
    goto LABEL_20;
  }
  v6 = v4 >> 8;
LABEL_19:
  *(_DWORD *)(a2 + 16) = v6;
LABEL_20:
  v51 = v5;
LABEL_21:
  v15 = *(_DWORD *)(a2 + 20);
  if ( v15 < 8 )
  {
    v22 = *(_DWORD **)(a2 + 28);
    v23 = *(_DWORD *)(a2 + 16);
    v24 = 8 - v15;
    v25 = *(_DWORD **)(a2 + 24);
    if ( v25 == v22 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      if ( v25 > v22 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
LABEL_35:
        if ( !*(_BYTE *)(a2 + 4) )
        {
          v26 = *(_DWORD *)(a2 + 16);
          v27 = (v26 & dword_1039BF80[v24]) << *(_DWORD *)(a2 + 20);
          *(_DWORD *)(a2 + 20) = 32 - v24;
          v19 = v26 >> v24;
          v17 = v27 | v23;
          goto LABEL_38;
        }
        v17 = 0;
        goto LABEL_39;
      }
      *(_DWORD *)(a2 + 16) = *v25;
    }
    *(_DWORD *)(a2 + 24) = v25 + 1;
    goto LABEL_35;
  }
  v16 = *(_DWORD *)(a2 + 16);
  v17 = (unsigned __int8)v16;
  v18 = v15 - 8;
  *(_DWORD *)(a2 + 20) = v18;
  if ( v18 )
  {
    v19 = v16 >> 8;
LABEL_38:
    *(_DWORD *)(a2 + 16) = v19;
    goto LABEL_39;
  }
  v20 = *(unsigned int **)(a2 + 24);
  v21 = *(unsigned int **)(a2 + 28);
  *(_DWORD *)(a2 + 20) = 32;
  if ( v20 == v21 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_DWORD *)(a2 + 24) = v20 + 1;
  }
  else
  {
    if ( v20 <= v21 )
    {
      v19 = *v20;
      *(_DWORD *)(a2 + 24) = v20 + 1;
      goto LABEL_38;
    }
    *(_BYTE *)(a2 + 4) = 1;
    *(_DWORD *)(a2 + 16) = 0;
  }
LABEL_39:
  v28 = v17 != 0;
  sub_100B8D30(a2, a2, Destination, 0x200u, 0, v47, 0x100u);
  sub_100B8E00(a2, v42, 512);
  sub_100B8E00(a2, v43, 512);
  sub_100B8D30(a2, a2, v44, 0x200u, 1, 0, 0);
  sub_100B8D30(a2, a2, v45, 0x200u, 1, 0, 0);
  (*(void (__stdcall **)(int, _WORD *))(*(_DWORD *)dword_1047CA78 + 32))(dword_1047CA78, v46);
  for ( i = v46; *i; ++i )
  {
    if ( *i == 13 )
      *i = 10;
  }
  (*(void (__thiscall **)(int, _WORD *))(*(_DWORD *)dword_1047CA78 + 16))(dword_1047CA78, v46);
  if ( v28 )
  {
    v30 = 0;
    if ( v51 > 0 )
    {
      v31 = dword_1040D3A8;
      v32 = *(_DWORD *)(dword_1040D3A8 + 1192);
      v33 = sub_10076670();
      v34 = (*(int (__thiscall **)(int, int))(v32 + 52))(dword_1040D3A8 + 1192, v33);
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)(v31 + 1192) + 52))(v31 + 1192, v51) != v34 )
        v30 = 4;
    }
    (*(void (**)(int *, int, int, const char *, ...))(*v50 + 72))(v50, v51, v30, "%s", v48);
    v35 = v48;
    for ( j = v48; *j; ++j )
    {
      v37 = *j;
      if ( *j <= 0 || v37 >= 6 )
        *v35++ = v37;
    }
    *v35 = 0;
    Msg("%s\n", v48);
    sub_1015BB00(v49);
    sub_101213E0((int)v49, -1, (int)"HudChat.Message", 0, 0.0, 0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v49);
  }
  else
  {
    v38 = v50;
    v39 = *v50;
    v40 = (*(int (__thiscall **)(int *, char *))(*v50 + 108))(v50, v47);
    (*(void (__cdecl **)(int *, int, int))(v39 + 72))(v38, v51, v40);
  }
}
