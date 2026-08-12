int __cdecl sub_102601C0(int *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax
  _DWORD v8[8]; // [esp+4h] [ebp-20h] BYREF

  if ( a1 )
  {
    sub_10219BB0(v8);
    v8[0] = &CSingleUserRecipientFilter::`vftable';
    sub_10219D00((int)v8, a1);
    sub_10219A50(v8);
    sub_1025F170((int)v8, a2, a3, a4, a5, a6, a7);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
  }
  return result;
}
