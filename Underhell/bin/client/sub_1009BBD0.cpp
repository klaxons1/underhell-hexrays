int __thiscall sub_1009BBD0(int this, int a2, int a3, char a4)
{
  _DWORD v6[8]; // [esp+8h] [ebp-20h] BYREF

  sub_1015B880(v6);
  v6[0] = &CPVSFilter::`vftable';
  sub_1015BB70(a2);
  if ( *(int *)(this + 16) <= 0 && !*(_BYTE *)(this + 8) && (*(int (__thiscall **)(_DWORD *))(v6[0] + 12))(v6) )
    sub_1017BA60(a2, a3);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
}
