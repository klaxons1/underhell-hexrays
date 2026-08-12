int __stdcall sub_10137BC0(int *a1)
{
  int result; // eax
  int v2; // esi
  _DWORD v3[8]; // [esp+4h] [ebp-20h] BYREF

  if ( *a1 && (result = (*(int (__thiscall **)(int))(*(_DWORD *)*a1 + 320))(*a1), (_BYTE)result) )
  {
    v2 = *a1;
  }
  else
  {
    result = sub_10261B20();
    v2 = result;
  }
  if ( v2 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 324))(v2);
    if ( (_BYTE)result )
    {
      sub_10219BB0(v3);
      v3[0] = &CSingleUserRecipientFilter::`vftable';
      sub_10219D00(v2);
      sub_10219A50(v3);
      sub_10154B40(v3, "KeyHintText");
      sub_10154BB0(1);
      sub_10154D00(String);
      sub_10154B90();
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
    }
  }
  return result;
}
