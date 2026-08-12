int __stdcall sub_10138F20(int a1)
{
  int v1; // esi
  _DWORD v3[8]; // [esp+4h] [ebp-20h] BYREF

  v1 = sub_10261B20();
  sub_10219BB0(v3);
  v3[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00(v1);
  sub_10219A50(v3);
  sub_10154B40(v3, "CreditsMsg");
  sub_10154BB0(2);
  sub_10154B90();
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
}
