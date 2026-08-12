void __cdecl sub_10238F70(int a1, int a2, float a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9[8]; // [esp+2Ch] [ebp-20h] BYREF

  if ( a2 >= 0 )
  {
    if ( a1 && (v6 = *(_DWORD *)(a1 + 12)) != 0 )
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6);
    else
      v7 = 0;
    sub_1001F4E0(v9, v7, a4);
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1);
    sub_100E3150((int)v9, v8, 2, a2, a3, a4, a5, a6, 0, 0, 1, 0.0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
  }
}
