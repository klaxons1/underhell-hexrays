int __thiscall sub_1014AEA0(_DWORD *this)
{
  _DWORD v3[8]; // [esp+44h] [ebp-20h] BYREF

  if ( (this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10219BB0(v3);
  v3[0] = &CPASFilter::`vftable';
  sub_1021A370(this + 145);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  ((void (__stdcall *)(_DWORD *, _DWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, int, int))(*off_1065C5EC)[20])(
    v3,
    0.0,
    this + 145,
    this + 176,
    this + 119,
    this + 145,
    12.0,
    12.0,
    4.0,
    0,
    255,
    255,
    255,
    255,
    255,
    255);
  sub_1025FAC0(this);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
}
