void __cdecl sub_1025FEB0(int *a1, float a2, float a3, float a4, int a5)
{
  _DWORD v5[8]; // [esp+8h] [ebp-20h] BYREF

  if ( a2 > 0.0 )
  {
    if ( a5 != 1 )
    {
LABEL_6:
      sub_10219BB0(v5);
      v5[0] = &CSingleUserRecipientFilter::`vftable';
      sub_10219D00((int)v5, a1);
      sub_10219A50(v5);
      sub_10154B40((int)v5, "Shake");
      sub_10154BB0(a5);
      sub_10154C70(a2);
      sub_10154C70(a3);
      sub_10154C70(a4);
      sub_10154B90();
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
      return;
    }
LABEL_5:
    a2 = 0.0;
    goto LABEL_6;
  }
  if ( a5 == 1 )
    goto LABEL_5;
}
