int __thiscall sub_101295A0(_DWORD *this, int a2, int a3, float a4, float a5)
{
  int v6; // esi
  float v8; // [esp+Ch] [ebp-34h]
  _DWORD v9[8]; // [esp+20h] [ebp-20h] BYREF

  sub_10219BB0(v9);
  v9[0] = &CPVSFilter::`vftable';
  sub_1021A300(a2);
  if ( (int)this[4] > 0 || !this[3] )
    goto LABEL_9;
  if ( !(unsigned __int8)sub_10219A90(v9) )
  {
    if ( (int)this[4] <= 0 )
      v6 = this[3];
    else
      v6 = 0;
    sub_10219DB0(v6);
  }
  if ( (*(int (__thiscall **)(_DWORD *))(v9[0] + 12))(v9) )
  {
LABEL_9:
    v8 = a4 * 0.1;
    ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD, int, int, _DWORD, int))(*off_1065C5EC)[30])(
      off_1065C5EC,
      v9,
      0.0,
      a2,
      a3,
      LODWORD(v8),
      (int)a5);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
}
