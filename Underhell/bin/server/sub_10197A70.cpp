int __cdecl sub_10197A70(int a1, char a2, int a3)
{
  int v3; // edi
  int v4; // esi
  int i; // eax
  int v6; // eax
  int v7; // eax
  _BYTE v9[32]; // [esp+Ch] [ebp-20h] BYREF

  sub_10219BB0(v9);
  sub_1021A200(v9);
  sub_10219A50(v9);
  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    for ( i = sub_1042A2F0(a3); i; i = sub_1042A300(i) )
      ++v3;
    v4 = sub_1042A2F0(a3);
  }
  sub_10154B40((int)v9, "VGUIMenu");
  sub_10154D00(a1);
  sub_10154BB0(a2 != 0);
  sub_10154BB0(v3);
  for ( ; v4; v4 = sub_1042A300(v4) )
  {
    v6 = sub_1042A070(v4);
    sub_10154D00(v6);
    v7 = sub_1042B460(0, (int)String);
    sub_10154D00(v7);
  }
  sub_10154B90();
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
}
