int __thiscall sub_1028EEE0(void *this, float *a2, int a3)
{
  int v4; // eax
  int v6; // ebx
  unsigned int v7; // ecx
  float *v8; // eax
  _DWORD v10[8]; // [esp+10h] [ebp-3Ch] BYREF
  float v11[3]; // [esp+30h] [ebp-1Ch] BYREF
  float v12[2]; // [esp+3Ch] [ebp-10h] BYREF
  float v13; // [esp+44h] [ebp-8h]
  float v14; // [esp+48h] [ebp-4h]
  int v15; // [esp+54h] [ebp+8h]

  if ( *((_DWORD *)this + 6) != word_10696BA4 )
    *((_DWORD *)this + 6) = word_10696BA4;
  v4 = *((_DWORD *)this + 7);
  v14 = 0.5;
  if ( v4 != COERCE_INT(0.5) )
    *((float *)this + 7) = 0.5;
  if ( *((_DWORD *)this + 8) != 15 )
    *((_DWORD *)this + 8) = 15;
  if ( *((_DWORD *)this + 9) )
    *((_DWORD *)this + 9) = 0;
  v6 = (_BYTE *)this + 12 - (_BYTE *)a2;
  v7 = 12;
  v8 = a2;
  v15 = (_BYTE *)this + 12 - (_BYTE *)a2;
  while ( *(_DWORD *)((char *)v8 + v6) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_15;
    v6 = v15;
  }
  *((float *)this + 3) = *a2;
  *((float *)this + 4) = a2[1];
  *((float *)this + 5) = a2[2];
LABEL_15:
  *((float *)this + 5) = *((float *)this + 5) + 24.0;
  sub_10422220(a3, v12);
  v13 = 0.0;
  off_10689714();
  v11[0] = v12[0] * 50.0;
  v11[1] = v12[1] * 50.0;
  v11[2] = 50.0 * v13;
  sub_1028ABC0((float *)this + 3, v11);
  sub_10219BB0(v10);
  v10[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v10);
  (*(void (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v10, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
}
