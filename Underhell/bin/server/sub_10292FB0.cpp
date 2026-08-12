// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_10292FB0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, int a6)
{
  bool v6; // zf
  float *v7; // eax
  float *v8; // esi
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  double v12; // st7
  double v13; // st5
  double v14; // st6
  float *v15; // eax
  unsigned int v16; // ecx
  void (__stdcall *v17)(_DWORD *); // edx
  float v20[20]; // [esp+24h] [ebp-FCh] BYREF
  _BYTE v21[12]; // [esp+74h] [ebp-ACh] BYREF
  float v22[19]; // [esp+80h] [ebp-A0h] BYREF
  _DWORD v23[8]; // [esp+CCh] [ebp-54h] BYREF
  _DWORD v24[3]; // [esp+ECh] [ebp-34h] BYREF
  float v25[3]; // [esp+F8h] [ebp-28h] BYREF
  float v26; // [esp+104h] [ebp-1Ch] BYREF
  float v27; // [esp+108h] [ebp-18h]
  float v28; // [esp+10Ch] [ebp-14h]
  float *v29; // [esp+110h] [ebp-10h]
  int v30; // [esp+114h] [ebp-Ch]
  void *v31; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v30 = a2;
  v31 = retaddr;
  v6 = *(_DWORD *)(a1 + 24) == 0;
  v29 = (float *)a1;
  if ( !v6 )
    *(_DWORD *)(a1 + 24) = 0;
  v7 = a5;
  v8 = (float *)(a1 + 12);
  v9 = a1 + 12;
  v10 = 12;
  v11 = v9 - (_DWORD)a5;
  while ( *(_DWORD *)((char *)v7 + v11) == *(_DWORD *)v7 )
  {
    v10 -= 4;
    ++v7;
    if ( v10 < 4 )
      goto LABEL_8;
  }
  *v8 = *a5;
  v8[1] = a5[1];
  v8[2] = a5[2];
LABEL_8:
  v29[5] = v29[5] + 24.0;
  sub_10422220(a6, &v26);
  v28 = 0.0;
  off_10689714();
  v12 = v26;
  *v8 = v26 * 50.0 + *v8;
  v13 = v27;
  v8[1] = v27 * 50.0 + v8[1];
  v14 = v28;
  v8[2] = 50.0 * v28 + v8[2];
  v25[0] = v12 * 1024.0 + *v8;
  v25[1] = v13 * 1024.0 + v8[1];
  v25[2] = 1024.0 * v14 + v8[2];
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
  v15 = v22;
  v16 = 12;
  while ( *(_DWORD *)((char *)v15 + (char *)v8 - (char *)v22) == *(_DWORD *)v15 )
  {
    v16 -= 4;
    ++v15;
    if ( v16 < 4 )
      goto LABEL_15;
  }
  *v8 = v22[0];
  v8[1] = v22[1];
  v8[2] = v22[2];
LABEL_15:
  sub_10219BB0(v23);
  v23[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v23);
  v17 = *(void (__stdcall **)(_DWORD *))(*(_DWORD *)v29 + 16);
  v27 = 0.0;
  v17(v23);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
}
