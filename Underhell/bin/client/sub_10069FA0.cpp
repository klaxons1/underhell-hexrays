int __stdcall sub_10069FA0(int a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  _DWORD v5[9]; // [esp+18h] [ebp-64h] BYREF
  __int16 v6; // [esp+3Ch] [ebp-40h]
  char v7; // [esp+3Eh] [ebp-3Eh]
  int v8; // [esp+40h] [ebp-3Ch]
  _DWORD v9[5]; // [esp+44h] [ebp-38h] BYREF
  __int16 v10; // [esp+58h] [ebp-24h]
  _BYTE v11[32]; // [esp+5Ch] [ebp-20h] BYREF

  if ( *(_BYTE *)(a1 + 36) )
    return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_10413194 + 44))(
             *(_DWORD *)(a1 + 12),
             *(float *)(a1 + 20),
             *(_DWORD *)(a1 + 28),
             1,
             0.0);
  sub_1015BB00(v11);
  v2 = *(_DWORD *)(a1 + 12);
  *(float *)&v5[7] = 0.0;
  *(float *)&v5[2] = *(float *)(a1 + 20);
  v6 = 1;
  v10 = -1;
  v3 = *(_DWORD *)(a1 + 24);
  v5[4] = 1;
  v5[3] = v3;
  v5[1] = v2;
  v4 = *(_DWORD *)(a1 + 28);
  v5[8] = 0;
  v7 = 0;
  v8 = -1;
  memset(v9, 0, sizeof(v9));
  v5[0] = 6;
  v5[5] = v4;
  v5[6] = a1;
  sub_10121280(v11, 0, v5);
  sub_1011A810(v9);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
}
