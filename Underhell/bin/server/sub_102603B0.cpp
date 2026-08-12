int __cdecl sub_102603B0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // eax
  _DWORD v6[8]; // [esp+24h] [ebp-20h] BYREF

  result = sub_10265BF0(a3);
  if ( (_BYTE)result )
  {
    sub_10219BB0(v6);
    v6[0] = &CPVSFilter::`vftable';
    sub_1021A300(v6, a1);
    v5 = a4;
    if ( a4 >= 255 )
      v5 = 255;
    ((void (__stdcall *)(_DWORD *, _DWORD, int, int, int, int, int, int, int))(*off_1065C5EC)[10])(
      v6,
      0.0,
      a1,
      a2,
      247,
      63,
      14,
      255,
      v5);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
  }
  return result;
}
