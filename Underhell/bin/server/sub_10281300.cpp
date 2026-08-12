int __thiscall sub_10281300(int *this, int a2)
{
  float v4; // [esp+0h] [ebp-2Ch]
  _DWORD v5[8]; // [esp+Ch] [ebp-20h] BYREF

  sub_10219BB0(v5);
  v5[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v5);
  sub_10280C40((int)this, (int)v5);
  sub_100EC3F0(this, (int)sub_10246D70, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(this, v4, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
}
