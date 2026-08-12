int __thiscall sub_1028E590(_DWORD *this, float *a2, int a3)
{
  int v5; // ebx
  unsigned int v6; // ecx
  float *v7; // eax
  _DWORD v9[8]; // [esp+Ch] [ebp-2Ch] BYREF
  float v10[2]; // [esp+2Ch] [ebp-Ch] BYREF
  float v11; // [esp+34h] [ebp-4h]
  int v12; // [esp+40h] [ebp+8h]

  if ( this[7] != 255 )
    this[7] = 255;
  if ( this[8] != 255 )
    this[8] = 255;
  if ( this[9] != 63 )
    this[9] = 63;
  v5 = (char *)(this + 3) - (char *)a2;
  v6 = 12;
  v7 = a2;
  v12 = (char *)(this + 3) - (char *)a2;
  while ( *(_DWORD *)((char *)v7 + v5) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_13;
    v5 = v12;
  }
  *((float *)this + 3) = *a2;
  *((float *)this + 4) = a2[1];
  *((float *)this + 5) = a2[2];
LABEL_13:
  if ( this[6] != COERCE_INT(200.0) )
    *((float *)this + 6) = 200.0;
  if ( this[11] != COERCE_INT(2.0) )
    *((float *)this + 11) = 2.0;
  if ( this[12] != COERCE_INT(0.0) )
    *((float *)this + 12) = 0.0;
  *((float *)this + 5) = *((float *)this + 5) + 24.0;
  sub_10422220(a3, v10);
  v11 = 0.0;
  off_10689714();
  *((float *)this + 3) = v10[0] * 50.0 + *((float *)this + 3);
  *((float *)this + 4) = v10[1] * 50.0 + *((float *)this + 4);
  *((float *)this + 5) = 50.0 * v11 + *((float *)this + 5);
  sub_10219BB0(v9);
  v9[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v9);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 16))(this, v9, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
}
