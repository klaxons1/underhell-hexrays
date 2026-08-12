int __thiscall sub_10280D20(int *this)
{
  _DWORD v3[8]; // [esp+4h] [ebp-20h] BYREF

  sub_10219BB0(v3);
  v3[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v3);
  sub_10219A80(v3);
  sub_10280C40((int)this, (int)v3);
  sub_10246D70(this);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
}
