int __thiscall sub_1009BC40(int this, int a2, int a3)
{
  _DWORD v5[8]; // [esp+8h] [ebp-20h] BYREF

  sub_1015B880(v5);
  v5[0] = &CPVSFilter::`vftable';
  sub_1015BB70(a2);
  if ( *(int *)(this + 16) <= 0 && !*(_BYTE *)(this + 8) )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(v5[0] + 12))(v5) )
    {
      sub_1017B5F0(a2, a3, a3, 1);
      if ( !*(_BYTE *)(this + 20) )
        sub_10175E70(a2);
    }
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
}
