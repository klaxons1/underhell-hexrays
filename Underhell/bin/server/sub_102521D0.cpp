void __thiscall sub_102521D0(int this)
{
  const char *v2; // ecx
  int v3; // eax
  const char *v4; // eax
  int v5; // eax
  int v6; // eax
  char *v7; // [esp+4h] [ebp-6Ch]
  int v8; // [esp+Ch] [ebp-64h] BYREF
  const char *v9; // [esp+10h] [ebp-60h]
  float v10; // [esp+14h] [ebp-5Ch]
  int v11; // [esp+18h] [ebp-58h]
  int v12[6]; // [esp+38h] [ebp-38h] BYREF
  _DWORD v13[8]; // [esp+50h] [ebp-20h] BYREF

  if ( *(_BYTE *)(this + 920) )
  {
    if ( *(_DWORD *)(this + 876) )
    {
      v2 = *(const char **)(this + 876);
      if ( !v2 )
        v2 = String;
      v7 = (char *)v2;
      v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
      sub_1023AF30(v3, 6, v7);
    }
    if ( *(_DWORD *)(this + 888) )
    {
      sub_100D78A0(v13, this, 0.80000001);
      sub_100F8510((float *)&v8);
      v4 = *(const char **)(this + 888);
      v8 = 3;
      v9 = v4;
      if ( !v4 )
        v9 = String;
      v5 = *(_DWORD *)(this + 24);
      v10 = *(float *)(this + 848);
      v11 = 75;
      v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5);
      sub_1023BE40(v13, v6, (int)&v8);
      sub_102375F0(v12);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
    }
  }
  *(_BYTE *)(this + 920) = 0;
}
