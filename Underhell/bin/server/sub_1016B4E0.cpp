int __thiscall sub_1016B4E0(int *this, int a2)
{
  int result; // eax
  _DWORD v4[8]; // [esp+8h] [ebp-20h] BYREF

  if ( a2 )
  {
    sub_10219BB0(v4);
    v4[0] = &CSingleUserRecipientFilter::`vftable';
    sub_10219D00(a2);
    sub_10219A50(v4);
    sub_10154B40((int)v4, "HintText");
    sub_10154D00(*this);
    sub_10154B90();
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v4);
  }
  return result;
}
