int __thiscall sub_102908C0(_DWORD *this, float *a2, int a3)
{
  int v5; // ebx
  unsigned int v6; // ecx
  float *v7; // eax
  _DWORD v9[8]; // [esp+10h] [ebp-38h] BYREF
  float v10[3]; // [esp+30h] [ebp-18h] BYREF
  float v11[2]; // [esp+3Ch] [ebp-Ch] BYREF
  float v12; // [esp+44h] [ebp-4h]
  int v13; // [esp+50h] [ebp+8h]

  if ( this[6] != word_10696BA0 )
    this[6] = word_10696BA0;
  if ( this[7] )
    this[7] = 0;
  v5 = (char *)(this + 3) - (char *)a2;
  v6 = 12;
  v7 = a2;
  v13 = (char *)(this + 3) - (char *)a2;
  while ( *(_DWORD *)((char *)v7 + v5) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_11;
    v5 = v13;
  }
  *((float *)this + 3) = *a2;
  *((float *)this + 4) = a2[1];
  *((float *)this + 5) = a2[2];
LABEL_11:
  *((float *)this + 5) = *((float *)this + 5) + 24.0;
  sub_104222B0(a3, v11, v10, 0);
  v12 = 0.0;
  off_10689714();
  *((float *)this + 3) = v11[0] * 50.0 + *((float *)this + 3);
  *((float *)this + 4) = v11[1] * 50.0 + *((float *)this + 4);
  *((float *)this + 5) = 50.0 * v12 + *((float *)this + 5);
  *((float *)this + 3) = v10[0] * 25.0 + *((float *)this + 3);
  *((float *)this + 4) = v10[1] * 25.0 + *((float *)this + 4);
  *((float *)this + 5) = 25.0 * v10[2] + *((float *)this + 5);
  sub_10219BB0(v9);
  v9[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v9);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 16))(this, v9, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
}
