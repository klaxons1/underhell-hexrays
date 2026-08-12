int __thiscall sub_1028ACD0(void *this, float *a2, int a3)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v8; // ebx
  unsigned int v9; // ecx
  float *v10; // eax
  double v11; // st7
  double v12; // st5
  double v13; // st6
  _DWORD v15[8]; // [esp+10h] [ebp-48h] BYREF
  float v16[3]; // [esp+30h] [ebp-28h] BYREF
  float v17[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  float v18[2]; // [esp+48h] [ebp-10h] BYREF
  float v19; // [esp+50h] [ebp-8h]
  float v20; // [esp+54h] [ebp-4h]
  int v21; // [esp+60h] [ebp+8h]

  if ( *((_DWORD *)this + 3) != word_10696BA0 )
    *((_DWORD *)this + 3) = word_10696BA0;
  if ( *((_DWORD *)this + 5) )
    *((_DWORD *)this + 5) = 0;
  if ( *((_DWORD *)this + 6) != 10 )
    *((_DWORD *)this + 6) = 10;
  v4 = *((_DWORD *)this + 7);
  v20 = 2.0;
  if ( v4 != COERCE_INT(2.0) )
    *((float *)this + 7) = 2.0;
  v5 = *((_DWORD *)this + 8);
  v20 = 1.0;
  if ( v5 != COERCE_INT(1.0) )
    *((float *)this + 8) = 1.0;
  v6 = *((_DWORD *)this + 11);
  v20 = 1.0;
  if ( v6 != COERCE_INT(1.0) )
    *((float *)this + 11) = 1.0;
  if ( *((_DWORD *)this + 12) )
    *((_DWORD *)this + 12) = 0;
  if ( *((_DWORD *)this + 13) != 63 )
    *((_DWORD *)this + 13) = 63;
  if ( *((_DWORD *)this + 14) != 127 )
    *((_DWORD *)this + 14) = 127;
  if ( *((_DWORD *)this + 15) != 150 )
    *((_DWORD *)this + 15) = 150;
  if ( *((_DWORD *)this + 16) != 1 )
    *((_DWORD *)this + 16) = 1;
  v8 = (_BYTE *)this + 72 - (_BYTE *)a2;
  v9 = 12;
  v10 = a2;
  v21 = (_BYTE *)this + 72 - (_BYTE *)a2;
  while ( *(_DWORD *)((char *)v10 + v8) == *(_DWORD *)v10 )
  {
    v9 -= 4;
    ++v10;
    if ( v9 < 4 )
      goto LABEL_29;
    v8 = v21;
  }
  *((float *)this + 18) = *a2;
  *((float *)this + 19) = a2[1];
  *((float *)this + 20) = a2[2];
LABEL_29:
  v17[0] = 0.0;
  v17[1] = 0.0;
  v17[2] = 30.0;
  sub_1028ABC0((float *)this + 18, v17);
  sub_104222B0(a3, v18, v16, 0);
  v19 = 0.0;
  off_10689714();
  *((float *)this + 18) = v18[0] * 75.0 + *((float *)this + 18);
  *((float *)this + 19) = v18[1] * 75.0 + *((float *)this + 19);
  *((float *)this + 20) = 75.0 * v19 + *((float *)this + 20);
  v11 = v16[0] * 25.0;
  *((float *)this + 21) = v11 + *((float *)this + 18);
  v12 = v16[1] * 25.0;
  *((float *)this + 22) = *((float *)this + 19) + v12;
  v13 = 25.0 * v16[2];
  *((float *)this + 23) = *((float *)this + 20) + v13;
  *((float *)this + 18) = *((float *)this + 18) - v11;
  *((float *)this + 19) = *((float *)this + 19) - v12;
  *((float *)this + 20) = *((float *)this + 20) - v13;
  sub_10219BB0(v15);
  v15[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v15);
  (*(void (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v15, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
}
