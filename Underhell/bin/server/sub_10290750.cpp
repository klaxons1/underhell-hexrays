int __thiscall sub_10290750(_DWORD *this, int a2, int a3)
{
  _DWORD v5[8]; // [esp+8h] [ebp-20h] BYREF

  if ( this[3] != 1 )
    this[3] = 1;
  sub_10219BB0(v5);
  v5[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v5);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 16))(this, v5, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
}
