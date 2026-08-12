int __stdcall sub_10137C60(int a1)
{
  int *v1; // esi
  const char **v2; // eax
  const char *v3; // edi
  int result; // eax
  int v5; // esi
  _DWORD v6[8]; // [esp+8h] [ebp-20h] BYREF

  v1 = (int *)a1;
  v2 = (const char **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 24) != 2 )
  {
    a1 = 0;
    v2 = (const char **)&a1;
  }
  v3 = *v2;
  if ( !*v2 )
    v3 = String;
  if ( *v1 && (result = (*(int (__thiscall **)(int))(*(_DWORD *)*v1 + 320))(*v1), (_BYTE)result) )
  {
    v5 = *v1;
  }
  else
  {
    result = sub_10261B20();
    v5 = result;
  }
  if ( v5 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 324))(v5);
    if ( (_BYTE)result )
    {
      sub_10219BB0(v6);
      v6[0] = &CSingleUserRecipientFilter::`vftable';
      sub_10219D00(v5);
      sub_10219A50(v6);
      sub_10154B40(v6, "KeyHintText");
      sub_10154BB0(1);
      sub_10154D00(v3);
      sub_10154B90();
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
    }
  }
  return result;
}
