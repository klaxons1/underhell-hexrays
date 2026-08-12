int __userpurge sub_104155D0@<eax>(int a1@<ecx>, int a2@<edi>, float a3)
{
  int v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  float v9; // [esp+34h] [ebp-E0h]
  _BYTE v10[80]; // [esp+78h] [ebp-9Ch] BYREF
  int v11[8]; // [esp+C8h] [ebp-4Ch] BYREF
  _DWORD v12[8]; // [esp+E8h] [ebp-2Ch] BYREF
  int v13[3]; // [esp+108h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10219BB0(v11);
  v11[0] = (int)&CPASFilter::`vftable';
  sub_1021A370(v11, a1 + 580);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10422220(a1 + 704, v13);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10415500((int)v11, 0.0, (float *)(a1 + 580), COERCE_INT(1.0), (int)(a3 * 256.0), (int)(175.0 * a3), (float *)v13);
  v4 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 128, 255, a2);
  sub_10219BB0(v12);
  v12[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v12);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v9 = a3 * 300.0;
  ((void (__stdcall *)(_DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int, _DWORD, int, int, int, int, int))(*off_1065C5EC)[8])(
    v12,
    0.0,
    a1 + 580,
    16.0,
    LODWORD(v9),
    *(_DWORD *)(a1 + 800),
    0,
    0,
    2,
    0.30000001,
    128.0,
    16,
    0.0,
    v4,
    v4,
    255,
    24,
    128);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = *(_DWORD *)(a1 + 412);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
  v7 = sub_10248110((int)v10, a1, v6, 200.0, 67108928, 0);
  sub_100C9F20(v7, a1 + 580, 256.0, 0, 0);
  sub_1025FAC0(a1);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
}
