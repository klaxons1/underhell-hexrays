int __cdecl sub_10076B20(int a1, float a2, float a3)
{
  _DWORD v4[8]; // [esp+20h] [ebp-20h] BYREF

  sub_1015B880(v4);
  v4[0] = &CPVSFilter::`vftable';
  sub_1015BB70(a1);
  ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD, int, _DWORD, _DWORD, int))(*off_103E9430)[30])(
    off_103E9430,
    v4,
    0.0,
    a1,
    word_10412D3C,
    LODWORD(a2),
    (int)a3);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v4);
}
