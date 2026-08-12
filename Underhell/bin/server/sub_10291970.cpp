int __thiscall sub_10291970(float *this, float *a2, float *a3)
{
  int v5; // ebx
  unsigned int v6; // ecx
  float *v7; // eax
  int v8; // ebx
  unsigned int v9; // edx
  float *v10; // eax
  _DWORD v12[8]; // [esp+10h] [ebp-30h] BYREF
  float v13[2]; // [esp+30h] [ebp-10h] BYREF
  float v14; // [esp+38h] [ebp-8h]
  float v15; // [esp+3Ch] [ebp-4h]
  int v16; // [esp+48h] [ebp+8h]

  v15 = 1024.0;
  if ( *((_DWORD *)this + 7) != COERCE_INT(1024.0) )
    this[7] = 1024.0;
  if ( *((_DWORD *)this + 6) )
    this[6] = 0.0;
  v5 = (char *)(this + 3) - (char *)a2;
  v6 = 12;
  v7 = a2;
  v16 = (char *)(this + 3) - (char *)a2;
  while ( *(_DWORD *)((char *)v7 + v5) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_11;
    v5 = v16;
  }
  this[3] = *a2;
  this[4] = a2[1];
  this[5] = a2[2];
LABEL_11:
  v8 = (char *)(this + 8) - (char *)a3;
  v9 = 12;
  v10 = a3;
  while ( *(_DWORD *)((char *)v10 + v8) == *(_DWORD *)v10 )
  {
    v9 -= 4;
    ++v10;
    if ( v9 < 4 )
      goto LABEL_17;
    v8 = (char *)(this + 8) - (char *)a3;
  }
  this[8] = *a3;
  this[9] = a3[1];
  this[10] = a3[2];
LABEL_17:
  this[5] = this[5] + 24.0;
  sub_10422220(a3, v13);
  v14 = 0.0;
  off_10689714();
  this[3] = v13[0] * 24.0 + this[3];
  this[4] = v13[1] * 24.0 + this[4];
  this[5] = 24.0 * v14 + this[5];
  sub_10219BB0(v12);
  v12[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v12);
  (*(void (__thiscall **)(float *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v12, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
}
