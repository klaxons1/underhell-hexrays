int __usercall sub_10238E20@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  float v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  char v14; // [esp+3Ch] [ebp-60h] BYREF
  _BYTE v15[63]; // [esp+3Dh] [ebp-5Fh] BYREF
  int v16[8]; // [esp+7Ch] [ebp-20h] BYREF

  if ( !dword_106C4E64 )
    return -1;
  v14 = 0;
  if ( (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 116))(dword_106B31D0, a5, &v14, 64) <= 0 )
    return -1;
  v9 = COERCE_FLOAT(
         (*(int (__thiscall **)(int, _BYTE *, int, int, int))(*(_DWORD *)dword_106B31D0 + 124))(
           dword_106B31D0,
           v15,
           a2,
           a3,
           a1));
  if ( a4 && (v10 = *(_DWORD *)(a4 + 12)) != 0 )
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 20))(v10);
  else
    v11 = 0;
  sub_1001F4E0(v16, v11, a7);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
  sub_100E3150((int)v16, v12, a4, 2, v9, a6, a7, a8, a9, 0, 0, COERCE_FLOAT(1));
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
  return LODWORD(v9);
}
