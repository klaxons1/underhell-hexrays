int __thiscall sub_100284B0(int *this, _BYTE *a2, int a3, float a4, int a5, int a6)
{
  int v7; // edi
  int v8; // eax
  int v10[8]; // [esp+2Ch] [ebp-20h] BYREF

  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(int *))(*this + 264))(this) )
    return -1;
  if ( *a2 != 33 )
    return sub_10238FF0(this[6], (int)a2, a4, a5, 0, 100);
  v7 = sub_102382E0(a2);
  sub_1001F4E0(v10, (int)this, a5);
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  sub_100E3150((int)v10, v8, 2, v7, a4, a5, 0, 100, 0, 0, 1, 0.0);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
  return v7;
}
