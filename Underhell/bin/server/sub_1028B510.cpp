int __thiscall sub_1028B510(float *this, float *a2, int a3)
{
  int v5; // ebx
  unsigned int v6; // ecx
  float *v7; // eax
  _DWORD v9[8]; // [esp+10h] [ebp-20h] BYREF
  int v10; // [esp+38h] [ebp+8h]

  v5 = (char *)(this + 18) - (char *)a2;
  v6 = 12;
  v7 = a2;
  v10 = v5;
  while ( *(_DWORD *)((char *)v7 + v5) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_7;
    v5 = v10;
  }
  this[18] = *a2;
  this[19] = a2[1];
  this[20] = a2[2];
LABEL_7:
  if ( *((_DWORD *)this + 22) != COERCE_INT(256.0) )
    this[22] = 256.0;
  if ( *((_DWORD *)this + 21) != COERCE_INT(16.0) )
    this[21] = 16.0;
  if ( *((_DWORD *)this + 3) != word_10696BA0 )
    *((_DWORD *)this + 3) = word_10696BA0;
  if ( *((_DWORD *)this + 5) )
    this[5] = 0.0;
  if ( *((_DWORD *)this + 6) != 2 )
    *((_DWORD *)this + 6) = 2;
  if ( *((_DWORD *)this + 7) != COERCE_INT(10.0) )
    this[7] = 10.0;
  if ( *((_DWORD *)this + 8) != COERCE_INT(2.0) )
    this[8] = 2.0;
  if ( *((_DWORD *)this + 11) != COERCE_INT(1.0) )
    this[11] = 1.0;
  if ( *((_DWORD *)this + 12) != 255 )
    *((_DWORD *)this + 12) = 255;
  if ( *((_DWORD *)this + 13) != 255 )
    *((_DWORD *)this + 13) = 255;
  if ( *((_DWORD *)this + 14) )
    this[14] = 0.0;
  if ( *((_DWORD *)this + 15) != 127 )
    *((_DWORD *)this + 15) = 127;
  if ( *((_DWORD *)this + 16) != 5 )
    *((_DWORD *)this + 16) = 5;
  sub_10219BB0(v9);
  v9[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v9);
  (*(void (__thiscall **)(float *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v9, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
}
