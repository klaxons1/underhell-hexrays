int __thiscall sub_102927A0(_DWORD *this, float *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v7; // ebx
  unsigned int v8; // ecx
  float *v9; // eax
  _DWORD v11[8]; // [esp+10h] [ebp-3Ch] BYREF
  float v12[3]; // [esp+30h] [ebp-1Ch] BYREF
  float v13[2]; // [esp+3Ch] [ebp-10h] BYREF
  float v14; // [esp+44h] [ebp-8h]
  float v15; // [esp+48h] [ebp-4h]
  int v16; // [esp+54h] [ebp+8h]

  v4 = sub_100E8220((int)this, "sprites/gunsmoke.vmt");
  if ( this[6] != v4 )
    this[6] = v4;
  v5 = this[7];
  v15 = 0.80000001;
  if ( v5 != COERCE_INT(0.80000001) )
    *((float *)this + 7) = 0.80000001;
  if ( this[8] != 200 )
    this[8] = 200;
  v7 = (char *)(this + 3) - (char *)a2;
  v8 = 12;
  v9 = a2;
  v16 = v7;
  while ( *(_DWORD *)((char *)v9 + v7) == *(_DWORD *)v9 )
  {
    v8 -= 4;
    ++v9;
    if ( v8 < 4 )
      goto LABEL_13;
    v7 = v16;
  }
  *((float *)this + 3) = *a2;
  *((float *)this + 4) = a2[1];
  *((float *)this + 5) = a2[2];
LABEL_13:
  *((float *)this + 5) = *((float *)this + 5) + 24.0;
  sub_104222B0(a3, v13, v12, 0);
  v14 = 0.0;
  off_10689714();
  *((float *)this + 3) = v13[0] * 50.0 + *((float *)this + 3);
  *((float *)this + 4) = v13[1] * 50.0 + *((float *)this + 4);
  *((float *)this + 5) = 50.0 * v14 + *((float *)this + 5);
  *((float *)this + 3) = *((float *)this + 3) - v12[0] * 25.0;
  *((float *)this + 4) = *((float *)this + 4) - v12[1] * 25.0;
  *((float *)this + 5) = *((float *)this + 5) - 25.0 * v12[2];
  sub_10219BB0(v11);
  v11[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v11);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 16))(this, v11, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
}
