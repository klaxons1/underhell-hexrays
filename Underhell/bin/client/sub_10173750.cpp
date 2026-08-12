int __userpurge sub_10173750@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v5[8]; // [esp+18h] [ebp-20h] BYREF
  int savedregs; // [esp+38h] [ebp+0h] BYREF

  sub_1015B880(v5);
  v5[0] = (int)&CBroadcastRecipientFilter::`vftable';
  sub_1015BB40(v5);
  sub_10173610(
    (int)&savedregs,
    a2,
    a1 + 12,
    (int)v5,
    COERCE_INT(0.0),
    (float *)(a1 + 12),
    (float *)(a1 + 24),
    *(float *)(a1 + 36),
    *(_DWORD *)(a1 + 40));
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
}
