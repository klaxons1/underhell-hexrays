int __thiscall sub_101E45F0(void *this, int a2, char a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int i; // eax
  int v8; // eax
  int v9; // eax
  _DWORD v11[8]; // [esp+Ch] [ebp-20h] BYREF

  sub_10219BB0(v11);
  v11[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00(this);
  sub_10219A50(v11);
  v5 = 0;
  v6 = 0;
  if ( a4 )
  {
    for ( i = sub_1042A2F0(a4); i; i = sub_1042A300(i) )
      ++v5;
    v6 = sub_1042A2F0(a4);
  }
  sub_10154B40((int)v11, "VGUIMenu");
  sub_10154D00(a2);
  sub_10154BB0(a3 != 0);
  sub_10154BB0(v5);
  for ( ; v6; v6 = sub_1042A300(v6) )
  {
    v8 = sub_1042A070(v6);
    sub_10154D00(v8);
    v9 = sub_1042B460(0, (int)String);
    sub_10154D00(v9);
  }
  sub_10154B90();
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
}
