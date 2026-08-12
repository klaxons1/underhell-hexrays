int sub_10138DF0()
{
  int v0; // esi
  _DWORD v2[8]; // [esp+4h] [ebp-20h] BYREF

  sub_1042C7E0(&unk_106B3550, "15");
  v0 = sub_10261B20();
  sub_10219BB0(v2);
  v2[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00(v0);
  sub_10219A50(v2);
  sub_10154B40(v2, "CreditsMsg");
  sub_10154BB0(3);
  sub_10154B90();
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v2);
}
