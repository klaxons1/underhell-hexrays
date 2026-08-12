int __thiscall sub_10137B10(_DWORD *this, int *a2)
{
  int result; // eax
  int v4; // esi
  const char *v5; // eax
  _DWORD v6[8]; // [esp+8h] [ebp-20h] BYREF

  if ( *a2 && (result = (*(int (__thiscall **)(int))(*(_DWORD *)*a2 + 320))(*a2), (_BYTE)result) )
  {
    v4 = *a2;
  }
  else
  {
    result = sub_10261B20();
    v4 = result;
  }
  if ( v4 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 324))(v4);
    if ( (_BYTE)result )
    {
      sub_10219BB0(v6);
      v6[0] = &CSingleUserRecipientFilter::`vftable';
      sub_10219D00(v4);
      sub_10219A50(v6);
      sub_10154B40(v6, "KeyHintText");
      sub_10154BB0(1);
      v5 = (const char *)this[200];
      if ( !v5 )
        v5 = String;
      sub_10154D00(v5);
      sub_10154B90();
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
    }
  }
  return result;
}
