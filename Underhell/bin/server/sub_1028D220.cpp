int __thiscall sub_1028D220(float *this, float *a2, int a3)
{
  int v5; // ebx
  unsigned int v6; // ecx
  float *v7; // eax
  float *v8; // eax
  unsigned int v9; // ecx
  double v10; // st6
  double v11; // st5
  double v12; // st4
  _DWORD v14[8]; // [esp+10h] [ebp-38h] BYREF
  float v15[3]; // [esp+30h] [ebp-18h] BYREF
  float v16[2]; // [esp+3Ch] [ebp-Ch] BYREF
  float v17; // [esp+44h] [ebp-4h]
  int v18; // [esp+50h] [ebp+8h]

  v5 = (char *)(this + 3) - (char *)a2;
  v6 = 12;
  v7 = a2;
  v18 = v5;
  while ( *(_DWORD *)((char *)v7 + v5) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_7;
    v5 = v18;
  }
  this[3] = *a2;
  this[4] = a2[1];
  this[5] = a2[2];
LABEL_7:
  this[5] = this[5] + 24.0;
  sub_10422220(a3, v16);
  v17 = 0.0;
  off_10689714();
  v8 = v15;
  v9 = 12;
  this[3] = v16[0] * 100.0 + this[3];
  this[4] = v16[1] * 100.0 + this[4];
  this[5] = 100.0 * v17 + this[5];
  v10 = this[3] + 256.0;
  v15[0] = v10;
  v11 = this[4] + 256.0;
  v15[1] = v11;
  v12 = this[5] + 256.0;
  v15[2] = v12;
  while ( *(_DWORD *)((char *)v8 + (char *)(this + 6) - (char *)v15) == *(_DWORD *)v8 )
  {
    v9 -= 4;
    ++v8;
    if ( v9 < 4 )
      goto LABEL_12;
  }
  this[6] = v10;
  this[7] = v11;
  this[8] = v12;
LABEL_12:
  if ( *((_DWORD *)this + 12) != COERCE_INT(2.0) )
    this[12] = 2.0;
  if ( *((_DWORD *)this + 11) != 50 )
    *((_DWORD *)this + 11) = 50;
  if ( *((_DWORD *)this + 9) != COERCE_INT(256.0) )
    this[9] = 256.0;
  if ( *((_DWORD *)this + 10) != word_10696B98 )
    *((_DWORD *)this + 10) = word_10696B98;
  sub_10219BB0(v14);
  v14[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v14);
  (*(void (__thiscall **)(float *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v14, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
}
