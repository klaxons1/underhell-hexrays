int __thiscall sub_10292100(_DWORD *this, float *a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v7; // ebx
  float *v8; // eax
  _DWORD v10[8]; // [esp+10h] [ebp-3Ch] BYREF
  float v11[3]; // [esp+30h] [ebp-1Ch] BYREF
  float v12[2]; // [esp+3Ch] [ebp-10h] BYREF
  float v13; // [esp+44h] [ebp-8h]
  float v14; // [esp+48h] [ebp-4h]
  int v15; // [esp+54h] [ebp+8h]

  if ( this[6] != word_10696BA0 )
    this[6] = word_10696BA0;
  v4 = this[7];
  v14 = 5.0;
  if ( v4 != COERCE_INT(5.0) )
    *((float *)this + 7) = 5.0;
  v5 = 12;
  if ( this[8] != 12 )
    this[8] = 12;
  v7 = (char *)(this + 3) - (char *)a2;
  v8 = a2;
  v15 = v7;
  while ( *(_DWORD *)((char *)v8 + v7) == *(_DWORD *)v8 )
  {
    v5 -= 4;
    ++v8;
    if ( v5 < 4 )
      goto LABEL_13;
    v7 = v15;
  }
  *((float *)this + 3) = *a2;
  *((float *)this + 4) = a2[1];
  *((float *)this + 5) = a2[2];
LABEL_13:
  *((float *)this + 5) = *((float *)this + 5) + 24.0;
  sub_104222B0(a3, v12, v11, 0);
  v13 = 0.0;
  off_10689714();
  *((float *)this + 3) = v12[0] * 50.0 + *((float *)this + 3);
  *((float *)this + 4) = v12[1] * 50.0 + *((float *)this + 4);
  *((float *)this + 5) = 50.0 * v13 + *((float *)this + 5);
  *((float *)this + 3) = v11[0] * 25.0 + *((float *)this + 3);
  *((float *)this + 4) = v11[1] * 25.0 + *((float *)this + 4);
  *((float *)this + 5) = 25.0 * v11[2] + *((float *)this + 5);
  sub_10219BB0(v10);
  v10[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v10);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 16))(this, v10, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
}
