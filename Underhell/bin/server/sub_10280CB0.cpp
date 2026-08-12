int __thiscall sub_10280CB0(int *this, int a2, int a3, int a4, int a5)
{
  float v7; // [esp+0h] [ebp-2Ch]
  _DWORD v8[8]; // [esp+Ch] [ebp-20h] BYREF

  sub_10219BB0(v8);
  v8[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v8);
  sub_10280C40((int)this, (int)v8);
  sub_100EC3F0(this, (int)sub_10246D70, 0.0, 0);
  v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(this, v7, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
}
