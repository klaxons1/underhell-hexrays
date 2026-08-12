char __userpurge sub_102DDBF0@<al>(int *a1@<ecx>, double a2@<st0>, int a3)
{
  int *v3; // edi
  const char *v5; // ebx
  const char *v6; // eax
  int v7; // esi
  const char *v9; // eax
  int *v10; // eax
  bool v11; // cc
  const char *v12; // eax
  int v13; // ebx
  int v14; // eax
  int *v15; // ecx
  const char *v16; // edi
  int v17; // ebx
  int v18; // eax
  const char *v19; // edi
  int v20; // ebx
  int v21; // eax
  int v22; // [esp-Ch] [ebp-44h]
  int v23; // [esp-Ch] [ebp-44h]
  int v24; // [esp-8h] [ebp-40h]
  float v25; // [esp+0h] [ebp-38h]
  int v26[8]; // [esp+14h] [ebp-24h] BYREF
  int v27; // [esp+34h] [ebp-4h] BYREF

  v3 = (int *)a3;
  v5 = String;
  if ( *(int *)a3 <= 0 )
  {
    v6 = String;
  }
  else
  {
    v5 = *(const char **)(a3 + 1032);
    v6 = v5;
  }
  if ( !_stricmp(v6, "emit") )
  {
    sub_10219BB0(v26);
    v26[0] = (int)&CSingleUserRecipientFilter::`vftable';
    sub_10219D00((int)v26, a1);
    v7 = a1[6];
    v25 = 0.0;
    if ( *v3 <= 1 )
    {
      v23 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v7);
      sub_1023C580((int)v3, v7, v26, v23, (int)"Test.Sound", 0, v25, 0);
    }
    else
    {
      v24 = v3[259];
      v22 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v7);
      sub_1023C580(v24, v7, v26, v22, v24, 0, v25, 0);
    }
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v26);
    return 1;
  }
  if ( !_stricmp(v5, "switch") )
  {
    v9 = String;
    if ( *v3 > 1 )
      v9 = (const char *)v3[259];
    v10 = (int *)atoi(v9);
    v11 = *v3 <= 2;
    a3 = (int)v10;
    v12 = String;
    if ( !v11 )
      v12 = (const char *)v3[260];
    v13 = atoi(v12);
    v14 = a3;
    v15 = (int *)a1[v13 + 1232];
    v27 = a1[a3 + 1232];
    a3 = (int)v15;
    sub_10174030(a1 + 1232, v14, &a3);
    sub_10174030(a1 + 1232, v13, &v27);
    (*(void (__cdecl **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
      dword_106B31D0,
      a1[6],
      "UpdateInventory");
    return sub_101F11D0(a1, a2, (int)v3);
  }
  if ( !_stricmp(v5, "dropitem") )
  {
    if ( *v3 > 1 )
      v16 = (const char *)v3[259];
    else
      v16 = String;
    v17 = *a1;
    v18 = atoi(v16);
    (*(void (__thiscall **)(int *, int, _DWORD))(v17 + 1644))(a1, v18, 0);
    return 1;
  }
  else
  {
    if ( _stricmp(v5, "useitem") )
      return sub_101F11D0(a1, a2, (int)v3);
    if ( *v3 > 1 )
      v19 = (const char *)v3[259];
    else
      v19 = String;
    v20 = *a1;
    v21 = atoi(v19);
    (*(void (__thiscall **)(int *, int, int))(v20 + 1644))(a1, v21, 1);
    return 1;
  }
}
