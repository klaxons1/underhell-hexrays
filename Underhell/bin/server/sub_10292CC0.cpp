int __thiscall sub_10292CC0(_DWORD *this, float *a2, int a3)
{
  int v4; // eax
  int v6; // ebx
  unsigned int v7; // ecx
  float *v8; // eax
  double v9; // st7
  int (__thiscall *v10)(int, _DWORD, int); // eax
  double v11; // st7
  _DWORD v13[8]; // [esp+20h] [ebp-3Ch] BYREF
  float v14[3]; // [esp+40h] [ebp-1Ch] BYREF
  float v15[2]; // [esp+4Ch] [ebp-10h] BYREF
  float v16; // [esp+54h] [ebp-8h]
  float v17; // [esp+58h] [ebp-4h]
  int v18; // [esp+64h] [ebp+8h]
  float v19; // [esp+68h] [ebp+Ch]

  if ( this[9] != word_10696BA0 )
    this[9] = word_10696BA0;
  v4 = this[11];
  v17 = 0.80000001;
  if ( v4 != COERCE_INT(0.80000001) )
    *((float *)this + 11) = 0.80000001;
  if ( this[12] != 5 )
    this[12] = 5;
  if ( this[10] != 30 )
    this[10] = 30;
  v6 = (char *)(this + 3) - (char *)a2;
  v7 = 12;
  v8 = a2;
  v18 = (char *)(this + 3) - (char *)a2;
  while ( *(_DWORD *)((char *)v8 + v6) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_15;
    v6 = v18;
  }
  *((float *)this + 3) = *a2;
  *((float *)this + 4) = a2[1];
  *((float *)this + 5) = a2[2];
LABEL_15:
  *((float *)this + 5) = *((float *)this + 5) + 24.0;
  sub_104222B0(a3, v15, v14, 0);
  v16 = 0.0;
  off_10689714();
  *((float *)this + 3) = v15[0] * 50.0 + *((float *)this + 3);
  *((float *)this + 4) = v15[1] * 50.0 + *((float *)this + 4);
  *((float *)this + 5) = 50.0 * v16 + *((float *)this + 5);
  *((float *)this + 3) = *((float *)this + 3) - v14[0] * 25.0;
  *((float *)this + 4) = *((float *)this + 4) - v14[1] * 25.0;
  *((float *)this + 5) = *((float *)this + 5) - 25.0 * v14[2];
  v19 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -100, 100);
  v9 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -100, 100);
  v10 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8);
  v17 = v9;
  v11 = (double)v10(dword_106B31E4, 0, 100);
  if ( v19 != *((float *)this + 6) )
    *((float *)this + 6) = v19;
  if ( v17 != *((float *)this + 7) )
    *((float *)this + 7) = v17;
  if ( v11 != *((float *)this + 8) )
    *((float *)this + 8) = v11;
  sub_10219BB0(v13);
  v13[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v13);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 16))(this, v13, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
}
