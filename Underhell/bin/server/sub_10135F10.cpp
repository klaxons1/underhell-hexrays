int __thiscall sub_10135F10(int this, int a2, int a3)
{
  _DWORD v5[9]; // [esp+50h] [ebp-24h] BYREF

  sub_10219BB0(v5);
  v5[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200(v5);
  ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD, int, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*off_1065C5EC)[5])(
    off_1065C5EC,
    v5,
    0.0,
    a2,
    a3,
    *(_DWORD *)(this + 972),
    0,
    *(_DWORD *)(this + 1008),
    (int)*(float *)(this + 800),
    *(float *)(this + 984),
    *(float *)(this + 988),
    *(float *)(this + 988),
    0,
    *(float *)(this + 992),
    *(unsigned __int8 *)(this + 116),
    *(unsigned __int8 *)(this + 117),
    *(unsigned __int8 *)(this + 118),
    *(unsigned __int8 *)(this + 119),
    *(_DWORD *)(this + 996));
  sub_100F9CD0((_DWORD *)this, a2, a3);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
}
