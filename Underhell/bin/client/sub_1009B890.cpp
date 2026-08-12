int __thiscall sub_1009B890(int this, int a2, int a3, float a4, int a5)
{
  int v6; // edi
  char v7; // al
  float v9; // [esp+8h] [ebp-50h]
  _DWORD v10[8]; // [esp+20h] [ebp-38h] BYREF
  int v11[3]; // [esp+40h] [ebp-18h] BYREF
  float v12[3]; // [esp+4Ch] [ebp-Ch] BYREF

  sub_1015B880(v10);
  v6 = a2;
  v10[0] = &CPVSFilter::`vftable';
  sub_1015BB70(a2);
  if ( *(int *)(this + 16) <= 0 && !*(_BYTE *)(this + 8) && (*(int (__thiscall **)(_DWORD *))(v10[0] + 12))(v10) )
  {
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 20, 35);
    v12[0] = 0.0;
    LOBYTE(a2) = v7;
    BYTE1(a2) = v7;
    v12[1] = 0.0;
    BYTE2(a2) = v7;
    HIBYTE(a2) = v7;
    v12[2] = 1.0;
    sub_101EE190(v12, v11);
    v9 = a4 * 0.1;
    sub_101783A0(v6, (int)v11, v9, 4, (int)&a2, COERCE_FLOAT(255));
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
}
