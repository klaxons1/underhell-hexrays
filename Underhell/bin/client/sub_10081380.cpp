int __thiscall sub_10081380(_DWORD **this)
{
  _BYTE v2[32]; // [esp+0h] [ebp-20h] BYREF

  if ( this[4] )
    (*(void (__thiscall **)(_DWORD *))(*this[4] + 20))(this[4]);
  if ( dword_103DD02C != -1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 88))(dword_1047CA74, dword_103DD02C);
    dword_103DD02C = -1;
  }
  sub_1015BB00(v2);
  (*(void (__thiscall **)(int, _BYTE *, _DWORD, int))(*(_DWORD *)dword_10413194 + 40))(dword_10413194, v2, 0, 1);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v2);
}
