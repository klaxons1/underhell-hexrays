int __thiscall sub_10150DA0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  const char *v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+Ch] [ebp-6Ch]
  int v10; // [esp+14h] [ebp-64h] BYREF
  const char *v11; // [esp+18h] [ebp-60h]
  float v12; // [esp+1Ch] [ebp-5Ch]
  int v13; // [esp+20h] [ebp-58h]
  _BYTE v14[24]; // [esp+40h] [ebp-38h] BYREF
  _DWORD v15[8]; // [esp+58h] [ebp-20h] BYREF

  v2 = this[232];
  if ( v2 && this[234] == v2 )
  {
    v9 = this[232];
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    sub_1023AF30(v3, 4, v9);
  }
  v4 = this[233];
  if ( v4 && this[234] != v4 )
  {
    this[234] = v4;
    sub_100D78A0(v15, (int)this, 0.80000001);
    sub_100F8510((float *)&v10);
    v5 = (const char *)this[233];
    v10 = 4;
    v11 = v5;
    if ( !v5 )
      v11 = String;
    v6 = this[6];
    v12 = 1.0;
    v13 = 75;
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6);
    sub_1023BE40(v15, v7, &v10);
    sub_102375F0(v14);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
  }
  return sub_100EC3F0(this, 0, 0.0, 0);
}
