int __stdcall sub_1000E900(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // [esp+14h] [ebp-30h]
  int v7; // [esp+18h] [ebp-2Ch]
  _DWORD v8[8]; // [esp+24h] [ebp-20h] BYREF

  result = (**(int (__thiscall ***)(void *, int))off_103DDBCC)(off_103DDBCC, a2);
  v3 = result;
  if ( result >= 0 )
  {
    sub_1015B880(v8);
    v8[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1015BB40(v8);
    v4 = (int)*off_103E9430;
    v5 = sub_100AF2D0(a1, *(_DWORD *)(a1 + 80), v3);
    (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, int, int, int, int, int))(v4 + 68))(
      off_103E9430,
      v8,
      0.0,
      a1 + 12,
      a1,
      v5,
      v6,
      v7);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
  }
  return result;
}
