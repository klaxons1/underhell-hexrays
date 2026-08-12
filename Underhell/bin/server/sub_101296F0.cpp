int __thiscall sub_101296F0(_DWORD *this, int a2, int a3, float a4, float a5)
{
  int v6; // esi
  _DWORD v8[8]; // [esp+1Ch] [ebp-20h] BYREF

  sub_10219BB0(v8);
  v8[0] = &CPVSFilter::`vftable';
  sub_1021A300(a2);
  if ( (int)this[4] > 0 || !this[3] )
    goto LABEL_9;
  if ( !(unsigned __int8)sub_10219A90(v8) )
  {
    if ( (int)this[4] <= 0 )
      v6 = this[3];
    else
      v6 = 0;
    sub_10219DB0(v6);
  }
  if ( (*(int (__thiscall **)(_DWORD *))(v8[0] + 12))(v8) )
LABEL_9:
    ((void (__stdcall *)(_DWORD *, _DWORD, int, int, _DWORD, _DWORD))(*off_1065C5EC)[36])(
      v8,
      0.0,
      a2,
      a3,
      LODWORD(a4),
      LODWORD(a5));
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
}
