void __thiscall sub_102D0030(int this)
{
  int v2; // ebx
  int *v3; // ecx
  const char *v4; // eax
  int v5; // eax
  int v6; // eax
  const char *v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // [esp+14h] [ebp-64h] BYREF
  const char *v11; // [esp+18h] [ebp-60h]
  float v12; // [esp+1Ch] [ebp-5Ch]
  int v13; // [esp+20h] [ebp-58h]
  int v14[6]; // [esp+40h] [ebp-38h] BYREF
  _DWORD v15[8]; // [esp+58h] [ebp-20h] BYREF

  if ( (*(_DWORD *)(this + 248) & 0x10000) == 0 )
  {
    v2 = *(_DWORD *)(this + 248) | 0x10000;
    if ( *(_DWORD *)(this + 248) != v2 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 248);
      }
      *(_DWORD *)(this + 248) = v2;
    }
    if ( *(_DWORD *)(this + 1056) )
    {
      sub_100D78A0(v15, this, 0.80000001);
      sub_10219A50(v15);
      sub_100F8510((float *)&v10);
      v4 = *(const char **)(this + 1056);
      v10 = 6;
      v11 = v4;
      if ( !v4 )
        v11 = String;
      v5 = *(_DWORD *)(this + 24);
      v12 = 0.85000002;
      v13 = 75;
      v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5);
      sub_1023BE40(v15, v6, (int)&v10);
      sub_102375F0(v14);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
    }
    if ( *(_DWORD *)(this + 1048) )
    {
      sub_100D78A0(v15, this, 0.80000001);
      sub_100F8510((float *)&v10);
      v7 = *(const char **)(this + 1048);
      v10 = 4;
      v11 = v7;
      if ( !v7 )
        v11 = String;
      v8 = *(_DWORD *)(this + 24);
      v12 = 1.0;
      v13 = 75;
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v8);
      sub_1023BE40(v15, v9, (int)&v10);
      sub_102375F0(v14);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
    }
  }
}
