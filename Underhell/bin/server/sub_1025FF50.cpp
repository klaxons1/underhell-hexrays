void __cdecl sub_1025FF50(unsigned __int16 *a1, int *a2)
{
  _DWORD v2[8]; // [esp+4h] [ebp-20h] BYREF

  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 324))(a2) )
    {
      sub_10219BB0(v2);
      v2[0] = &CSingleUserRecipientFilter::`vftable';
      sub_10219D00((int)v2, a2);
      sub_10219A50(v2);
      sub_10154B40((int)v2, "Fade");
      sub_10154C10(*a1);
      sub_10154C10(a1[1]);
      sub_10154C10((__int16)a1[2]);
      sub_10154BB0(*((unsigned __int8 *)a1 + 6));
      sub_10154BB0(*((unsigned __int8 *)a1 + 7));
      sub_10154BB0(*((unsigned __int8 *)a1 + 8));
      sub_10154BB0(*((unsigned __int8 *)a1 + 9));
      sub_10154B90();
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v2);
    }
  }
}
