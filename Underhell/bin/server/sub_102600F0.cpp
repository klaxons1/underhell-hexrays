int __cdecl sub_102600F0(int *a1, int a2)
{
  int result; // eax
  _DWORD v3[8]; // [esp+4h] [ebp-20h] BYREF

  if ( a1 )
  {
    sub_10219BB0(v3);
    v3[0] = &CSingleUserRecipientFilter::`vftable';
    sub_10219D00((int)v3, a1);
    sub_10219A50(v3);
    sub_10154B40((int)v3, "KeyHintText");
    sub_10154BB0(1);
    sub_10154D00(a2);
    sub_10154B90();
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
  }
  return result;
}
