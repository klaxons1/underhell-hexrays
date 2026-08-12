int __thiscall sub_1028C250(void *this, float *a2, int a3)
{
  int v4; // eax
  int v6; // ebx
  unsigned int v7; // ecx
  float *v8; // eax
  float *v9; // eax
  int v10; // ebx
  unsigned int v11; // edx
  float *v12; // ecx
  _DWORD v14[8]; // [esp+18h] [ebp-38h] BYREF
  float v15[3]; // [esp+38h] [ebp-18h] BYREF
  float v16[2]; // [esp+44h] [ebp-Ch] BYREF
  float v17; // [esp+4Ch] [ebp-4h]
  int v18; // [esp+58h] [ebp+8h]

  if ( *((_DWORD *)this + 9) != 247 )
    *((_DWORD *)this + 9) = 247;
  if ( *((_DWORD *)this + 10) )
    *((_DWORD *)this + 10) = 0;
  if ( *((_DWORD *)this + 11) )
    *((_DWORD *)this + 11) = 0;
  if ( *((_DWORD *)this + 12) != 255 )
    *((_DWORD *)this + 12) = 255;
  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 50, 150);
  if ( *((_DWORD *)this + 13) != v4 )
    *((_DWORD *)this + 13) = v4;
  v6 = (_BYTE *)this + 12 - (_BYTE *)a2;
  v7 = 12;
  v8 = a2;
  v18 = v6;
  while ( *(_DWORD *)((char *)v8 + v6) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_17;
    v6 = v18;
  }
  *((float *)this + 3) = *a2;
  *((float *)this + 4) = a2[1];
  *((float *)this + 5) = a2[2];
LABEL_17:
  *((float *)this + 5) = *((float *)this + 5) + 24.0;
  sub_10422220(a3, v16);
  v17 = 0.0;
  off_10689714();
  v15[0] = v16[0] * 50.0;
  v15[1] = v16[1] * 50.0;
  v15[2] = 50.0 * v17;
  sub_1028ABC0((float *)this + 3, v15);
  v9 = sub_1025F470(v15);
  v10 = (_BYTE *)this + 24 - (_BYTE *)v9;
  v11 = 12;
  v12 = v9;
  while ( *(_DWORD *)((char *)v12 + v10) == *(_DWORD *)v12 )
  {
    v11 -= 4;
    ++v12;
    if ( v11 < 4 )
      goto LABEL_23;
    v10 = (_BYTE *)this + 24 - (_BYTE *)v9;
  }
  *((float *)this + 6) = *v9;
  *((float *)this + 7) = v9[1];
  *((float *)this + 8) = v9[2];
LABEL_23:
  sub_10219BB0(v14);
  v14[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v14);
  (*(void (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v14, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
}
