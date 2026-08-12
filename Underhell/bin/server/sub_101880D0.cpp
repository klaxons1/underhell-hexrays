int __thiscall sub_101880D0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v6[8]; // [esp+Ch] [ebp-20h] BYREF

  sub_10219BB0(v6);
  sub_1021A370(a2);
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this[1] + 24));
  sub_1023C580((int)v6, v4, a3, 0, 0.0, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
}
