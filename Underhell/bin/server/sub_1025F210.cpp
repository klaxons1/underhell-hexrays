int __cdecl sub_1025F210(int a1, int *a2)
{
  _DWORD v3[8]; // [esp+0h] [ebp-20h] BYREF

  sub_10219BB0(v3);
  if ( a2 )
    sub_10219D00((int)v3, a2);
  else
    sub_1021A200((int)v3);
  sub_10219A50(v3);
  sub_10154B40((int)v3, "HudText");
  sub_10154D00(a1);
  sub_10154B90();
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
}
