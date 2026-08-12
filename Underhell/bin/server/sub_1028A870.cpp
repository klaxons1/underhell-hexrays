int __thiscall sub_1028A870(float *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD v8[8]; // [esp+8h] [ebp-24h] BYREF
  float v9; // [esp+28h] [ebp-4h]

  if ( *((_DWORD *)this + 18) != 1 )
    *((_DWORD *)this + 18) = 1;
  if ( *((_DWORD *)this + 19) )
    this[19] = 0.0;
  if ( *((_DWORD *)this + 3) != word_10696BA0 )
    *((_DWORD *)this + 3) = word_10696BA0;
  if ( *((_DWORD *)this + 5) )
    this[5] = 0.0;
  if ( *((_DWORD *)this + 6) != 10 )
    *((_DWORD *)this + 6) = 10;
  v4 = *((_DWORD *)this + 7);
  v9 = 2.0;
  if ( v4 != COERCE_INT(2.0) )
    this[7] = 2.0;
  v5 = *((_DWORD *)this + 8);
  v9 = 1.0;
  if ( v5 != COERCE_INT(1.0) )
    this[8] = 1.0;
  v6 = *((_DWORD *)this + 11);
  v9 = 1.0;
  if ( v6 != COERCE_INT(1.0) )
    this[11] = 1.0;
  if ( *((_DWORD *)this + 12) != 127 )
    *((_DWORD *)this + 12) = 127;
  if ( *((_DWORD *)this + 13) != 63 )
    *((_DWORD *)this + 13) = 63;
  if ( *((_DWORD *)this + 14) )
    this[14] = 0.0;
  if ( *((_DWORD *)this + 15) != 150 )
    *((_DWORD *)this + 15) = 150;
  if ( *((_DWORD *)this + 16) != 1 )
    *((_DWORD *)this + 16) = 1;
  sub_10219BB0(v8);
  v8[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v8);
  (*(void (__thiscall **)(float *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v8, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
}
