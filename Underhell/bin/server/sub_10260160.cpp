int __cdecl sub_10260160(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD v7[8]; // [esp+0h] [ebp-20h] BYREF

  sub_10219BB0(v7);
  v7[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v7);
  v7[0] = &CReliableBroadcastRecipientFilter::`vftable';
  sub_10219A50(v7);
  sub_1025F170((int)v7, a1, a2, a3, a4, a5, a6);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
}
