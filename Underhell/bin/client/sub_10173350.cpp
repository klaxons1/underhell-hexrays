int __userpurge sub_10173350@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int result; // eax
  int v6[8]; // [esp+14h] [ebp-20h] BYREF

  result = dword_1042D3B4;
  if ( *(_DWORD *)(dword_1042D3B4 + 48) )
  {
    sub_1015BB00(v6);
    sub_10173110(a2, a3, a1 + 16, (int)v6, COERCE_INT(0.0), a1 + 16, *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 28));
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
  }
  return result;
}
