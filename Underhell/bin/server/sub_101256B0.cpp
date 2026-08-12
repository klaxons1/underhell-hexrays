int __thiscall sub_101256B0(int this, int a2, int a3, int a4, int a5)
{
  char v6; // bl
  _DWORD v8[8]; // [esp+24h] [ebp-20h] BYREF

  sub_10219BB0(v8);
  v8[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200(v8);
  v6 = *(_BYTE *)(this + 248) & 1;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  ((void (__stdcall *)(_DWORD *, _DWORD, int, _DWORD, bool))(*off_1065C5EC)[25])(
    v8,
    0.0,
    this + 580,
    *(_DWORD *)(this + 800),
    v6 != 0);
  sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
}
