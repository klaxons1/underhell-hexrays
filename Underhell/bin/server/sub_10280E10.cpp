int __stdcall sub_10280E10(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx
  _DWORD v5[8]; // [esp+24h] [ebp-20h] BYREF

  result = (**(int (__thiscall ***)(void *, int))off_106169EC)(off_106169EC, a2);
  v3 = result;
  if ( result >= 0 )
  {
    sub_10219BB0(v5);
    v5[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v5);
    v4 = *(_DWORD *)(a1 + 80);
    if ( v4 )
      ((void (__stdcall *)(_DWORD *, _DWORD, int, int, _DWORD, int, int))(*off_1065C5EC)[17])(
        v5,
        0.0,
        a1 + 12,
        a1,
        0,
        v4,
        v3);
    else
      ((void (__stdcall *)(_DWORD *, _DWORD, int, int))(*off_1065C5EC)[34])(v5, 0.0, a1 + 12, v3);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
  }
  return result;
}
