int __thiscall sub_10289F30(_DWORD *this, float *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // ebx
  unsigned int v9; // ecx
  float *v10; // eax
  _DWORD v12[8]; // [esp+10h] [ebp-48h] BYREF
  _BYTE v13[12]; // [esp+30h] [ebp-28h] BYREF
  float v14[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  float v15[2]; // [esp+48h] [ebp-10h] BYREF
  float v16; // [esp+50h] [ebp-8h]
  float v17; // [esp+54h] [ebp-4h]
  int v18; // [esp+60h] [ebp+8h]

  if ( this[18] != 1 )
    this[18] = 1;
  if ( this[3] != word_10696BA0 )
    this[3] = word_10696BA0;
  if ( this[5] )
    this[5] = 0;
  if ( this[6] != 10 )
    this[6] = 10;
  v4 = this[7];
  v17 = 2.0;
  if ( v4 != COERCE_INT(2.0) )
    *((float *)this + 7) = 2.0;
  v5 = this[8];
  v17 = 1.0;
  if ( v5 != COERCE_INT(1.0) )
    *((float *)this + 8) = 1.0;
  v6 = this[11];
  v17 = 1.0;
  if ( v6 != COERCE_INT(1.0) )
    *((float *)this + 11) = 1.0;
  if ( this[12] )
    this[12] = 0;
  if ( this[13] != 63 )
    this[13] = 63;
  if ( this[14] != 127 )
    this[14] = 127;
  if ( this[15] != 150 )
    this[15] = 150;
  if ( this[16] != 1 )
    this[16] = 1;
  v8 = (char *)(this + 23) - (char *)a2;
  v9 = 12;
  v10 = a2;
  v18 = (char *)(this + 23) - (char *)a2;
  while ( *(_DWORD *)((char *)v10 + v8) == *(_DWORD *)v10 )
  {
    v9 -= 4;
    ++v10;
    if ( v9 < 4 )
      goto LABEL_31;
    v8 = v18;
  }
  *((float *)this + 23) = *a2;
  *((float *)this + 24) = a2[1];
  *((float *)this + 25) = a2[2];
LABEL_31:
  v14[0] = 0.0;
  v14[1] = 0.0;
  v14[2] = 24.0;
  sub_1028ABC0(v14);
  sub_104222B0(a3, v15, v13, 0);
  v16 = 0.0;
  off_10689714();
  *((float *)this + 23) = v15[0] * 50.0 + *((float *)this + 23);
  *((float *)this + 24) = v15[1] * 50.0 + *((float *)this + 24);
  *((float *)this + 25) = 50.0 * v16 + *((float *)this + 25);
  sub_10219BB0(v12);
  v12[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v12);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 16))(this, v12, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
}
