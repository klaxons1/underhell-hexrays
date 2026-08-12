int __thiscall sub_10166FE0(int this, int a2)
{
  int v4[8]; // [esp+24h] [ebp-20h] BYREF

  sub_1015B880(v4);
  v4[0] = (int)&CBroadcastRecipientFilter::`vftable';
  sub_1015BB40(v4);
  sub_10166BA0(
    (int)v4,
    COERCE_INT(0.0),
    (float *)(this + 12),
    (float *)(this + 24),
    *(_DWORD *)(this + 36),
    *(_DWORD *)(this + 40),
    *(_DWORD *)(this + 44),
    *(_DWORD *)(this + 48),
    *(_DWORD *)(this + 52));
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v4);
}
