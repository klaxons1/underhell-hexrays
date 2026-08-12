int __thiscall sub_10281280(int this)
{
  int result; // eax
  _DWORD v3[8]; // [esp+Ch] [ebp-20h] BYREF

  sub_100E38F0((float *)this);
  if ( *(_DWORD *)(this + 260) )
  {
    result = sub_100EC3F0((_DWORD *)this, (int)nullsub_4, 0.0, 0);
    *(_DWORD *)(this + 200) = sub_10280CB0;
  }
  else
  {
    sub_10219BB0(v3);
    v3[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v3);
    sub_10219A80(v3);
    sub_10280C40(this, (int)v3);
    sub_10246D70((int *)this);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
  }
  return result;
}
