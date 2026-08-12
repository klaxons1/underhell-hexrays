void __thiscall sub_10047AA0(_DWORD *this, int a2, int a3, int a4, char *String1)
{
  void *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp-4h] [ebp-34h]
  int v10[8]; // [esp+10h] [ebp-20h] BYREF

  if ( (a4 == 15 || a4 == 5004) && (*(int (__thiscall **)(_DWORD *))(*this + 764))(this) )
  {
    sub_1015BB00(v10);
    v9 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    v6 = (void *)(*(int (__thiscall **)(_DWORD *))(*this + 764))(this);
    v7 = sub_10035AA0(v6);
    sub_101213E0((int)v10, v7, (int)String1, v9, 0.0, 0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
  }
  else
  {
    v8 = sub_10033760();
    if ( v8 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, int, int, int, char *))(*(_DWORD *)v8 + 1248))(
              v8,
              this,
              a2,
              a3,
              a4,
              String1) )
        sub_1002E730(this, a2, a3, a4, String1);
    }
  }
}
