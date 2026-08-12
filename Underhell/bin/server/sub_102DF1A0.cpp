char __thiscall sub_102DF1A0(int this, float a2, float a3, int a4)
{
  bool v5; // zf
  int *v6; // edi
  int v7; // ebx
  int *v8; // ecx
  int *v9; // esi
  int v10; // ebx
  int *v11; // eax
  int *v12; // ecx
  int v13; // edi
  int v14; // eax
  int v16[8]; // [esp+1Ch] [ebp-24h] BYREF
  int v17; // [esp+3Ch] [ebp-4h]

  v5 = *(_BYTE *)(this + 2329) == 0;
  v17 = this;
  if ( v5 )
    return 0;
  v6 = (int *)(this + 2184);
  v7 = *(_DWORD *)(this + 2184) + (int)a2;
  if ( *(_DWORD *)(this + 2184) != v7 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 2184);
    }
    *v6 = v7;
  }
  v9 = (int *)(this + 220);
  v10 = *v9 + (int)a3;
  if ( *v9 != v10 )
  {
    (*(void (__thiscall **)(int *, int *))(*(v9 - 55) + 464))(v9 - 55, v9);
    *v9 = v10;
  }
  if ( (double)*v6 > 100.0 && *v6 != 100 )
  {
    v11 = v6 - 546;
    if ( *((_BYTE *)v6 - 2100) )
    {
      *((_BYTE *)v11 + 88) |= 1u;
    }
    else
    {
      v12 = (int *)v11[6];
      if ( v12 )
        sub_100194B0(v12, 2184);
    }
    *v6 = 100;
  }
  if ( *v9 > 200 )
  {
    (*(void (__thiscall **)(int *, int *))(*(v9 - 55) + 464))(v9 - 55, v9);
    *v9 = 200;
  }
  v13 = v17;
  sub_10165630(v16, v17, a4);
  v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v13 + 24));
  sub_1023C580(v13, a4, v16, v14, a4, 0, 0.0, 0);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
  return 1;
}
