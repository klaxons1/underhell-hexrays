int __usercall sub_10238FF0@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        const char *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // eax
  float v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  char v15; // [esp+40h] [ebp-60h] BYREF
  _BYTE v16[63]; // [esp+41h] [ebp-5Fh] BYREF
  int v17[8]; // [esp+80h] [ebp-20h] BYREF

  if ( !dword_106C4E64 )
    return -1;
  v15 = 0;
  v10 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31D0 + 132))(dword_106B31D0, a5, a3);
  if ( v10 < 0 )
  {
    Warning("No such sentence group %s\n", a5);
    return -1;
  }
  if ( (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 116))(dword_106B31D0, v10, &v15, 64) < 0
    || !v15 )
  {
    return -1;
  }
  v11 = COERCE_FLOAT((*(int (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)dword_106B31D0 + 124))(dword_106B31D0, v16, a2, a1));
  if ( a4 && (v12 = *(_DWORD *)(a4 + 12)) != 0 )
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 20))(v12);
  else
    v13 = 0;
  sub_1001F4E0(v17, v13, a7);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
  sub_100E3150((int)v17, v14, a4, 2, v11, a6, a7, a8, a9, 0, 0, COERCE_FLOAT(1));
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v17);
  return LODWORD(v11);
}
