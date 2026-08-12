int __usercall sub_102390E0@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // eax
  float v13; // esi
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  char v17; // [esp+48h] [ebp-60h] BYREF
  _BYTE v18[63]; // [esp+49h] [ebp-5Fh] BYREF
  int v19[8]; // [esp+88h] [ebp-20h] BYREF

  if ( !dword_106C4E64 )
    return -1;
  v17 = 0;
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 132))(dword_106B31D0, a5);
  if ( v12 < 0 )
    return -1;
  if ( (*(int (__thiscall **)(int, int, char *, int, int, int, int))(*(_DWORD *)dword_106B31D0 + 120))(
         dword_106B31D0,
         v12,
         &v17,
         64,
         a10,
         a11,
         a3) < 0
    || !v17 )
  {
    return -1;
  }
  v13 = COERCE_FLOAT((*(int (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)dword_106B31D0 + 124))(dword_106B31D0, v18, a2, a1));
  if ( a4 && (v14 = *(_DWORD *)(a4 + 12)) != 0 )
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 20))(v14);
  else
    v15 = 0;
  sub_1001F4E0(v19, v15, a7);
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
  sub_100E3150((int)v19, v16, a4, 2, v13, a6, a7, a8, a9, 0, 0, COERCE_FLOAT(1));
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v19);
  return LODWORD(v13);
}
