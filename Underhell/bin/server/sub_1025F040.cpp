int __cdecl sub_1025F040(int *a1, int a2, int a3)
{
  _DWORD v4[8]; // [esp+8h] [ebp-20h] BYREF

  sub_10219BB0(v4);
  if ( a1 )
    sub_10219D00((int)v4, a1);
  else
    sub_1021A200((int)v4);
  sub_10219A50(v4);
  sub_10154B40((int)v4, "HudMsg");
  sub_10154BB0((unsigned __int8)*(_DWORD *)(a2 + 36));
  sub_10154C70(*(float *)a2);
  sub_10154C70(*(float *)(a2 + 4));
  sub_10154BB0(*(unsigned __int8 *)(a2 + 12));
  sub_10154BB0(*(unsigned __int8 *)(a2 + 13));
  sub_10154BB0(*(unsigned __int8 *)(a2 + 14));
  sub_10154BB0(*(unsigned __int8 *)(a2 + 15));
  sub_10154BB0(*(unsigned __int8 *)(a2 + 16));
  sub_10154BB0(*(unsigned __int8 *)(a2 + 17));
  sub_10154BB0(*(unsigned __int8 *)(a2 + 18));
  sub_10154BB0(*(unsigned __int8 *)(a2 + 19));
  sub_10154BB0(*(_DWORD *)(a2 + 8));
  sub_10154C70(*(float *)(a2 + 20));
  sub_10154C70(*(float *)(a2 + 24));
  sub_10154C70(*(float *)(a2 + 28));
  sub_10154C70(*(float *)(a2 + 32));
  sub_10154D00(a3);
  sub_10154B90();
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v4);
}
