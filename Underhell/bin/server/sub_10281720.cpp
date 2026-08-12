// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_10281720@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // ecx
  double v10; // st7
  int (__stdcall *v11)(char); // edx
  float v14[20]; // [esp+3Ch] [ebp-FCh] BYREF
  _BYTE v15[12]; // [esp+8Ch] [ebp-ACh] BYREF
  int v16; // [esp+98h] [ebp-A0h] BYREF
  int v17; // [esp+D8h] [ebp-60h]
  _DWORD v18[8]; // [esp+E4h] [ebp-54h] BYREF
  _DWORD v19[3]; // [esp+104h] [ebp-34h] BYREF
  float v20[2]; // [esp+110h] [ebp-28h] BYREF
  float v21; // [esp+118h] [ebp-20h]
  float v22; // [esp+11Ch] [ebp-1Ch] BYREF
  int v23; // [esp+120h] [ebp-18h]
  float v24; // [esp+124h] [ebp-14h]
  float v25; // [esp+128h] [ebp-10h]
  int v26; // [esp+12Ch] [ebp-Ch]
  void *v27; // [esp+130h] [ebp-8h]
  void *retaddr; // [esp+138h] [ebp+0h]

  v26 = a2;
  v27 = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v9 = *(_DWORD *)(a1 + 252) >> 11;
  v10 = 5.0;
  v22 = *(float *)(a1 + 580) + 5.0;
  *(float *)&v23 = *(float *)(a1 + 584) + 5.0;
  v24 = *(float *)(a1 + 588) + 5.0;
  if ( (v9 & 1) != 0 )
  {
    sub_100DAE60(a1);
    v10 = 5.0;
  }
  v20[0] = *(float *)(a1 + 580) - v10;
  v20[1] = *(float *)(a1 + 584) - v10;
  v21 = *(float *)(a1 + 588) - v10;
  sub_1001F180(v14, v20, &v22);
  sub_10265570(v19, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v14,
    16395,
    v19,
    v15,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v15, (int)&v16, 255, 0, 0, 1, 5.0);
  if ( v17 )
    LODWORD(v25) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                     dword_106B31D0,
                     *(_DWORD *)(v17 + 24));
  else
    v25 = 0.0;
  sub_10219BB0(v18);
  v18[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v18);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v11 = (*off_1065C5EC)[13];
  v25 = *(float *)(a1 + 800);
  v24 = v25;
  v23 = a1 + 580;
  ((void (__stdcall *)(_DWORD *, _DWORD))v11)(v18, 0.0);
  sub_100EC3F0((_DWORD *)a1, (int)sub_10246D70, 0.0, 0);
  v21 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)a1, v21, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
}
