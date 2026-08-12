int __userpurge sub_1028CA20@<eax>(int a1@<ecx>, int a2@<edi>, float *a3, float *a4)
{
  int v5; // eax
  int v7; // ebx
  unsigned int v8; // ecx
  float *v9; // eax
  float *v10; // eax
  int v11; // ebx
  unsigned int v12; // ecx
  float *v13; // ebx
  _DWORD v15[8]; // [esp+28h] [ebp-44h] BYREF
  float v16[3]; // [esp+48h] [ebp-24h] BYREF
  float v17[3]; // [esp+54h] [ebp-18h] BYREF
  float v18[2]; // [esp+60h] [ebp-Ch] BYREF
  float v19; // [esp+68h] [ebp-4h]
  int v20; // [esp+74h] [ebp+8h]
  float v21; // [esp+74h] [ebp+8h]
  float v22; // [esp+78h] [ebp+Ch]

  v5 = sub_100E8220(a2, "models/gibs/hgibs.mdl");
  if ( *(_DWORD *)(a1 + 64) != v5 )
    *(_DWORD *)(a1 + 64) = v5;
  v7 = a1 + 12 - (_DWORD)a3;
  v8 = 12;
  v9 = a3;
  v20 = v7;
  while ( *(_DWORD *)((char *)v9 + v7) == *(_DWORD *)v9 )
  {
    v8 -= 4;
    ++v9;
    if ( v8 < 4 )
      goto LABEL_9;
    v7 = v20;
  }
  *(float *)(a1 + 12) = *a3;
  *(float *)(a1 + 16) = a3[1];
  *(float *)(a1 + 20) = a3[2];
LABEL_9:
  v10 = a4;
  v11 = a1 + 48 - (_DWORD)a4;
  v12 = 12;
  while ( *(_DWORD *)((char *)v10 + v11) == *(_DWORD *)v10 )
  {
    v12 -= 4;
    ++v10;
    if ( v12 < 4 )
    {
      v13 = a4;
      goto LABEL_15;
    }
    v11 = a1 + 48 - (_DWORD)a4;
  }
  v13 = a4;
  *(float *)(a1 + 48) = *a4;
  *(float *)(a1 + 52) = a4[1];
  *(float *)(a1 + 56) = a4[2];
LABEL_15:
  if ( 16.0 != *(float *)(a1 + 24) )
    *(float *)(a1 + 24) = 16.0;
  if ( 16.0 != *(float *)(a1 + 28) )
    *(float *)(a1 + 28) = 16.0;
  if ( 16.0 != *(float *)(a1 + 32) )
    *(float *)(a1 + 32) = 16.0;
  v22 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -10.0,
          10.0);
  v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -10.0,
          10.0);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 0.0, 20.0);
  if ( v22 != *(float *)(a1 + 36) )
    *(float *)(a1 + 36) = v22;
  if ( v21 != *(float *)(a1 + 40) )
    *(float *)(a1 + 40) = v21;
  if ( 0.0 != *(float *)(a1 + 44) )
    *(float *)(a1 + 44) = 0.0;
  if ( *(_DWORD *)(a1 + 60) != 100 )
    *(_DWORD *)(a1 + 60) = 100;
  if ( *(_DWORD *)(a1 + 68) != 10 )
    *(_DWORD *)(a1 + 68) = 10;
  if ( *(_DWORD *)(a1 + 72) != COERCE_INT(5.0) )
    *(float *)(a1 + 72) = 5.0;
  if ( *(_DWORD *)(a1 + 76) )
    *(_DWORD *)(a1 + 76) = 0;
  v17[0] = 0.0;
  v17[1] = 0.0;
  v17[2] = 24.0;
  sub_1028ABC0((float *)(a1 + 12), v17);
  sub_104222B0(v13, v18, v16, 0);
  v19 = 0.0;
  off_10689714();
  *(float *)(a1 + 12) = v18[0] * 50.0 + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = v18[1] * 50.0 + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = 50.0 * v19 + *(float *)(a1 + 20);
  *(float *)(a1 + 12) = v16[0] * 25.0 + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = v16[1] * 25.0 + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = 25.0 * v16[2] + *(float *)(a1 + 20);
  sub_10219BB0(v15);
  v15[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v15);
  (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)a1 + 16))(a1, v15, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
}
