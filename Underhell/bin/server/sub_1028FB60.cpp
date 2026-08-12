// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1028FB60@<eax>(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, int a6)
{
  float *v6; // eax
  float *v7; // esi
  float *v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  double v11; // st7
  double v12; // st5
  double v13; // st6
  float *v14; // eax
  unsigned int v15; // ecx
  void (__stdcall *v16)(_DWORD *); // edx
  float v19[20]; // [esp+24h] [ebp-FCh] BYREF
  _BYTE v20[12]; // [esp+74h] [ebp-ACh] BYREF
  float v21[19]; // [esp+80h] [ebp-A0h] BYREF
  _DWORD v22[8]; // [esp+CCh] [ebp-54h] BYREF
  _DWORD v23[3]; // [esp+ECh] [ebp-34h] BYREF
  float v24[3]; // [esp+F8h] [ebp-28h] BYREF
  float v25; // [esp+104h] [ebp-1Ch] BYREF
  float v26; // [esp+108h] [ebp-18h]
  float v27; // [esp+10Ch] [ebp-14h]
  float *v28; // [esp+110h] [ebp-10h]
  int v29; // [esp+114h] [ebp-Ch]
  void *v30; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v29 = a2;
  v30 = retaddr;
  v6 = a5;
  v7 = a1 + 3;
  v8 = a1 + 3;
  v28 = a1;
  v9 = 12;
  v10 = (char *)v8 - (char *)a5;
  while ( *(_DWORD *)((char *)v6 + v10) == *(_DWORD *)v6 )
  {
    v9 -= 4;
    ++v6;
    if ( v9 < 4 )
      goto LABEL_6;
  }
  *v7 = *a5;
  v7[1] = a5[1];
  v7[2] = a5[2];
LABEL_6:
  v28[5] = v28[5] + 24.0;
  sub_10422220(a6, &v25);
  v27 = 0.0;
  off_10689714();
  v11 = v25;
  *v7 = v25 * 50.0 + *v7;
  v12 = v26;
  v7[1] = v26 * 50.0 + v7[1];
  v13 = v27;
  v7[2] = 50.0 * v27 + v7[2];
  v24[0] = v11 * 1024.0 + *v7;
  v24[1] = v12 * 1024.0 + v7[1];
  v24[2] = 1024.0 * v13 + v7[2];
  sub_1001F180(v19, v7, v24);
  sub_10265570(v23, 0, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v19,
    16395,
    v23,
    v20,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v20, (int)v21, 255, 0, 0, 1, 5.0);
  v14 = v21;
  v15 = 12;
  while ( *(_DWORD *)((char *)v14 + (char *)v7 - (char *)v21) == *(_DWORD *)v14 )
  {
    v15 -= 4;
    ++v14;
    if ( v15 < 4 )
      goto LABEL_13;
  }
  *v7 = v21[0];
  v7[1] = v21[1];
  v7[2] = v21[2];
LABEL_13:
  sub_10219BB0(v22);
  v22[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v22);
  v16 = *(void (__stdcall **)(_DWORD *))(*(_DWORD *)v28 + 16);
  v26 = 0.0;
  v16(v22);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v22);
}
