int __thiscall sub_102DAEA0(int *this, int a2)
{
  _DWORD v4[8]; // [esp+4h] [ebp-20h] BYREF

  sub_10219BB0(v4);
  v4[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00((int)v4, this);
  sub_10219A50(v4);
  sub_10154B40((int)v4, "SquadMemberDied");
  sub_10154B90();
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v4);
}
