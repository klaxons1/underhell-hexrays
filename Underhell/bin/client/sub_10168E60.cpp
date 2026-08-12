int __cdecl sub_10168E60(int a1, int a2)
{
  int v3[8]; // [esp+14h] [ebp-20h] BYREF

  sub_1015B880(v3);
  v3[0] = (int)&CPASFilter::`vftable';
  sub_1015BB70(v3, a2);
  ((void (__stdcall *)(int *, _DWORD, int, int, int))(*off_103E9430)[38])(v3, 0.0, a2, a1, a2);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
}
