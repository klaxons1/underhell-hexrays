int __thiscall sub_10138E80(float *this, int a2)
{
  int v3; // edi
  _DWORD v5[8]; // [esp+Ch] [ebp-20h] BYREF

  v3 = sub_10261B20();
  sub_10219BB0(v5);
  v5[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00(v3);
  sub_10219A50(v5);
  if ( 0.0 == this[207] )
  {
    sub_10154B40(v5, "CreditsMsg");
    sub_10154BB0(1);
  }
  else
  {
    sub_10154B40(v5, "LogoTimeMsg");
    sub_10154C70(this[207]);
  }
  sub_10154B90();
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
}
