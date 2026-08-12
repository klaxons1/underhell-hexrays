int __thiscall sub_101E3110(void *this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int result; // eax
  _DWORD v6[8]; // [esp+4h] [ebp-20h] BYREF

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 264))(this);
  if ( (_BYTE)result )
  {
    sub_10219BB0(v6);
    v6[0] = &CSingleUserRecipientFilter::`vftable';
    sub_10219D00(this);
    sub_10219A50(v6);
    sub_10154B40((int)v6, "Rumble");
    sub_10154BB0(a2);
    sub_10154BB0(a3);
    sub_10154BB0(a4);
    sub_10154B90();
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
  }
  return result;
}
