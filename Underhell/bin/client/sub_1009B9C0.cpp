int __userpurge sub_1009B9C0@<eax>(int a1@<ecx>, int a2@<ebx>, float *a3, float *a4, float a5, float a6)
{
  _DWORD v8[8]; // [esp+10h] [ebp-20h] BYREF

  sub_1015B880(v8);
  v8[0] = &CPVSFilter::`vftable';
  sub_1015BB70(a3);
  if ( *(int *)(a1 + 16) <= 0 && !*(_BYTE *)(a1 + 8) && (*(int (__thiscall **)(_DWORD *))(v8[0] + 12))(v8) )
    sub_10053000(a2, (int)a3, a1, a3, a4, a5, a6);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
}
