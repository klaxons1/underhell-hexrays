int __thiscall sub_100B99B0(int *this, int a2)
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
  int v17; // edx
  int v18; // ecx
  int v19; // edi
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  _DWORD *v22; // edx
  int v23; // edi
  int v24; // eax
  _DWORD *v25; // ecx
  unsigned int v26; // edx
  int v27; // ebx
  int *v28; // edi
  int v29; // esi
  int v30; // eax
  char v32[256]; // [esp+1Ch] [ebp-124h] BYREF
  int v33[8]; // [esp+11Ch] [ebp-24h] BYREF
  int *v34; // [esp+13Ch] [ebp-4h]
  int v35; // [esp+148h] [ebp+8h]

  v34 = this;
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
          v35 = 0;
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
  v35 = v5;
LABEL_20:
  sub_1022C220(v32, 256, 0, 0);
  v15 = *(_DWORD *)(a2 + 20);
  if ( v15 >= 8 )
  {
    v16 = *(_DWORD *)(a2 + 16);
    v17 = (unsigned __int8)v16;
    v18 = v15 - 8;
    *(_DWORD *)(a2 + 20) = v18;
    if ( v18 )
    {
      *(_DWORD *)(a2 + 16) = v16 >> 8;
      v19 = (unsigned __int8)v16;
    }
    else
    {
      v20 = *(_DWORD **)(a2 + 24);
      v21 = *(_DWORD **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v20 == v21 )
      {
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 24) = v20 + 1;
        v19 = v17;
      }
      else
      {
        if ( v20 <= v21 )
        {
          *(_DWORD *)(a2 + 16) = *v20;
          *(_DWORD *)(a2 + 24) = v20 + 1;
        }
        else
        {
          *(_DWORD *)(a2 + 16) = 0;
          *(_BYTE *)(a2 + 4) = 1;
        }
        v19 = v17;
      }
    }
    goto LABEL_37;
  }
  v22 = *(_DWORD **)(a2 + 28);
  v23 = *(_DWORD *)(a2 + 16);
  v24 = 8 - v15;
  v25 = *(_DWORD **)(a2 + 24);
  if ( v25 == v22 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
LABEL_34:
    *(_DWORD *)(a2 + 24) = v25 + 1;
    goto LABEL_35;
  }
  if ( v25 <= v22 )
  {
    *(_DWORD *)(a2 + 16) = *v25;
    goto LABEL_34;
  }
  *(_BYTE *)(a2 + 4) = 1;
  *(_DWORD *)(a2 + 16) = 0;
LABEL_35:
  if ( *(_BYTE *)(a2 + 4) )
  {
LABEL_39:
    v28 = v34;
    v29 = *v34;
    v30 = ((int (__thiscall *)(int (__stdcall ***)(int, int, int), char *, _DWORD))(*off_103E6DA4)[2])(
            off_103E6DA4,
            v32,
            0);
    (*(void (**)(int *, _DWORD, const char *, ...))(v29 + 68))(v28, 0, "%s", v30);
    goto LABEL_40;
  }
  v26 = *(_DWORD *)(a2 + 16);
  v27 = (v26 & dword_1039BF80[v24]) << *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = 32 - v24;
  v19 = v27 | v23;
  *(_DWORD *)(a2 + 16) = v26 >> v24;
LABEL_37:
  if ( !v19 )
    goto LABEL_39;
  (*(void (**)(int *, int, _DWORD, const char *, ...))(*v34 + 72))(v34, v35, 0, "%s", v32);
LABEL_40:
  sub_1015BB00(v33);
  sub_101213E0((int)v33, -1, (int)"HudChat.Message", 0, 0.0, 0);
  Msg("%s", v32);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v33);
}
