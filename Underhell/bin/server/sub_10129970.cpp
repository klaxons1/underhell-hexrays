int __thiscall sub_10129970(_DWORD *this, int a2, int a3)
{
  int v4; // esi
  _DWORD v6[8]; // [esp+14h] [ebp-20h] BYREF

  sub_10219BB0(v6);
  v6[0] = &CPVSFilter::`vftable';
  sub_1021A300(a2);
  if ( (int)this[4] > 0 || !this[3] )
    goto LABEL_9;
  if ( !(unsigned __int8)sub_10219A90(v6) )
  {
    if ( (int)this[4] <= 0 )
      v4 = this[3];
    else
      v4 = 0;
    sub_10219DB0(v4);
  }
  if ( (*(int (__thiscall **)(_DWORD *))(v6[0] + 12))(v6) )
LABEL_9:
    ((void (__stdcall *)(_DWORD *, _DWORD, int, int))(*off_1065C5EC)[1])(v6, 0.0, a2, a3);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
}
