char __thiscall sub_1016C930(_DWORD *this, int a2)
{
  int v4; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // esi
  int i; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  char Buffer[200]; // [esp+4h] [ebp-E8h] BYREF
  _BYTE v13[32]; // [esp+CCh] [ebp-20h] BYREF
  char v14; // [esp+F4h] [ebp+8h]

  if ( !*(_DWORD *)(dword_106B578C + 48) )
    return 0;
  v4 = this[99];
  if ( v4 != a2 )
  {
    if ( v4 && a2 )
      return 0;
    v14 = 0;
    if ( a2 > 0 )
    {
      v6 = (_DWORD *)sub_1025FB50(a2);
      v14 = (char)v6;
      if ( !v6 || sub_100D8840(v6) != 1 )
        return 0;
    }
    this[99] = a2;
    v7 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
           dword_106B31F8,
           "hltv_cameraman",
           0);
    v8 = v7;
    if ( v7 )
    {
      (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v7 + 40))(v7, "index", a2);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v8, 0);
    }
    sub_10219BB0(v13);
    for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
    {
      v10 = (_DWORD *)sub_1025FB50(i);
      v11 = v10;
      if ( v10 && sub_100D8840(v10) == 1 && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 1212))(v11) )
        sub_10219D00(v11);
    }
    sub_10219A50(v13);
    if ( a2 > 0 )
    {
      sub_10429A00(Buffer, 0xC8u, "SourceTV camera is now controlled by %s.", v14 - 56);
      sub_1025F170(v13, 3, Buffer, 0, 0, 0, 0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
      return 1;
    }
    sub_1025F170(v13, 3, "SourceTV camera switched to auto-director mode.", 0, 0, 0, 0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
  }
  return 1;
}
