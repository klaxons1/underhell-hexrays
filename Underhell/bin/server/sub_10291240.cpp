int __thiscall sub_10291240(void *this, float *a2, float *a3)
{
  int v4; // eax
  int v6; // ebx
  unsigned int v7; // ecx
  float *v8; // eax
  float *v9; // eax
  int v10; // ebx
  unsigned int v11; // ecx
  _DWORD v13[8]; // [esp+28h] [ebp-48h] BYREF
  float v14[3]; // [esp+48h] [ebp-28h] BYREF
  float v15[3]; // [esp+54h] [ebp-1Ch] BYREF
  float v16[2]; // [esp+60h] [ebp-10h] BYREF
  float v17; // [esp+68h] [ebp-8h]
  float v18; // [esp+6Ch] [ebp-4h]
  int v19; // [esp+78h] [ebp+8h]
  float v20; // [esp+78h] [ebp+8h]

  v4 = sub_100E8220((int)this, "models/gibs/hgibs.mdl");
  if ( *((_DWORD *)this + 12) != v4 )
    *((_DWORD *)this + 12) = v4;
  if ( *((_DWORD *)this + 13) )
    *((_DWORD *)this + 13) = 0;
  v6 = (_BYTE *)this + 12 - (_BYTE *)a2;
  v7 = 12;
  v8 = a2;
  v19 = v6;
  while ( *(_DWORD *)((char *)v8 + v6) == *(_DWORD *)v8 )
  {
    v7 -= 4;
    ++v8;
    if ( v7 < 4 )
      goto LABEL_11;
    v6 = v19;
  }
  *((float *)this + 3) = *a2;
  *((float *)this + 4) = a2[1];
  *((float *)this + 5) = a2[2];
LABEL_11:
  v9 = a3;
  v10 = (_BYTE *)this + 24 - (_BYTE *)a3;
  v11 = 12;
  while ( *(_DWORD *)((char *)v9 + v10) == *(_DWORD *)v9 )
  {
    v11 -= 4;
    ++v9;
    if ( v11 < 4 )
      goto LABEL_17;
    v10 = (_BYTE *)this + 24 - (_BYTE *)a3;
  }
  *((float *)this + 6) = *a3;
  *((float *)this + 7) = a3[1];
  *((float *)this + 8) = a3[2];
LABEL_17:
  v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -10.0,
          10.0);
  v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -10.0,
          10.0);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 0.0, 20.0);
  if ( v20 != *((float *)this + 9) )
    *((float *)this + 9) = v20;
  if ( v18 != *((float *)this + 10) )
    *((float *)this + 10) = v18;
  if ( 0.0 != *((float *)this + 11) )
    *((float *)this + 11) = 0.0;
  if ( *((_DWORD *)this + 14) )
    *((_DWORD *)this + 14) = 0;
  if ( *((_DWORD *)this + 15) )
    *((_DWORD *)this + 15) = 0;
  v15[0] = 0.0;
  v15[1] = 0.0;
  v15[2] = 24.0;
  sub_1028ABC0((float *)this + 3, v15);
  sub_104222B0(a3, v16, v14, 0);
  v17 = 0.0;
  off_10689714();
  *((float *)this + 3) = v16[0] * 50.0 + *((float *)this + 3);
  *((float *)this + 4) = v16[1] * 50.0 + *((float *)this + 4);
  *((float *)this + 5) = 50.0 * v17 + *((float *)this + 5);
  *((float *)this + 3) = v14[0] * 25.0 + *((float *)this + 3);
  *((float *)this + 4) = v14[1] * 25.0 + *((float *)this + 4);
  *((float *)this + 5) = 25.0 * v14[2] + *((float *)this + 5);
  sub_10219BB0(v13);
  v13[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v13);
  (*(void (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v13, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
}
