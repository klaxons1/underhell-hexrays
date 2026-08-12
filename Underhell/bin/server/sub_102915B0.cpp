// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_102915B0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, int a6)
{
  float *v7; // eax
  float *v8; // esi
  int v9; // edi
  unsigned int v10; // ecx
  double v11; // st7
  double v12; // st5
  double v13; // st6
  float *v14; // eax
  unsigned int v15; // ecx
  void (__stdcall *v16)(_DWORD *); // edx
  float v20[22]; // [esp+24h] [ebp-10Ch] BYREF
  _BYTE v21[12]; // [esp+7Ch] [ebp-B4h] BYREF
  float v22[20]; // [esp+88h] [ebp-A8h] BYREF
  _DWORD v23[8]; // [esp+D8h] [ebp-58h] BYREF
  _DWORD v24[3]; // [esp+F8h] [ebp-38h] BYREF
  float v25[3]; // [esp+104h] [ebp-2Ch] BYREF
  float v26; // [esp+110h] [ebp-20h] BYREF
  float v27; // [esp+114h] [ebp-1Ch]
  float v28; // [esp+118h] [ebp-18h]
  int v29; // [esp+11Ch] [ebp-14h]
  int v30; // [esp+120h] [ebp-10h]
  int v31; // [esp+124h] [ebp-Ch]
  void *v32; // [esp+128h] [ebp-8h]
  void *retaddr; // [esp+130h] [ebp+0h]

  v31 = a2;
  v32 = retaddr;
  v30 = a1;
  if ( *(_DWORD *)(a1 + 12) != 1 )
    *(_DWORD *)(a1 + 12) = 1;
  if ( *(_DWORD *)(a1 + 28) )
    *(_DWORD *)(a1 + 28) = 0;
  v7 = a5;
  v8 = (float *)(a1 + 16);
  v9 = a1 + 16 - (_DWORD)a5;
  v10 = 12;
  v29 = v9;
  while ( *(_DWORD *)((char *)v7 + v9) == *(_DWORD *)v7 )
  {
    v10 -= 4;
    ++v7;
    if ( v10 < 4 )
      goto LABEL_11;
    v9 = v29;
  }
  *v8 = *a5;
  *(float *)(a1 + 20) = a5[1];
  *(float *)(a1 + 24) = a5[2];
LABEL_11:
  *(float *)(a1 + 24) = *(float *)(a1 + 24) + 24.0;
  sub_10422220(a6, &v26);
  v28 = 0.0;
  off_10689714();
  v11 = v26;
  *v8 = v26 * 50.0 + *v8;
  v12 = v27;
  v8[1] = v27 * 50.0 + v8[1];
  v13 = v28;
  v8[2] = 50.0 * v28 + v8[2];
  v25[0] = v11 * 1024.0 + *v8;
  v25[1] = v12 * 1024.0 + v8[1];
  v25[2] = 1024.0 * v13 + v8[2];
  sub_1001F180(v20, v8, v25);
  sub_10265570(v24, 0, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v20,
    16395,
    v24,
    v21,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v21, (int)v22, 255, 0, 0, 1, 5.0);
  v14 = v22;
  v15 = 12;
  while ( *(_DWORD *)((char *)v14 + (char *)v8 - (char *)v22) == *(_DWORD *)v14 )
  {
    v15 -= 4;
    ++v14;
    if ( v15 < 4 )
      goto LABEL_18;
  }
  *v8 = v22[0];
  v8[1] = v22[1];
  v8[2] = v22[2];
LABEL_18:
  sub_10219BB0(v23);
  v23[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v23);
  v16 = *(void (__stdcall **)(_DWORD *))(*(_DWORD *)v30 + 16);
  v28 = 0.0;
  v16(v23);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
}
