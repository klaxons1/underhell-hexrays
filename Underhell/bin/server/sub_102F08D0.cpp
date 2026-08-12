char __thiscall sub_102F08D0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int *v5; // esi
  int v7; // eax
  const char *v8; // eax
  int v9; // esi
  int v10; // eax
  int v12[8]; // [esp+18h] [ebp-40h] BYREF
  _DWORD v13[8]; // [esp+38h] [ebp-20h] BYREF

  v5 = (int *)a2;
  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    v5 = 0;
  if ( !(*(int (__thiscall **)(int *, _DWORD, _DWORD))(*v5 + 260))(v5, *(float *)(dword_106E2504 + 44), 0) )
    return 0;
  v7 = v5[547];
  if ( v7 >= 20 )
    a2 = v7 / 2;
  else
    a2 = 0;
  sub_10172570(v5 + 547, &a2);
  sub_10219BB0(v13);
  v13[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00((int)v13, v5);
  sub_10219A50(v13);
  sub_10154B40((int)v13, "ItemPickup");
  v8 = (const char *)this[23];
  if ( !v8 )
    v8 = String;
  sub_10154D00((int)v8);
  sub_10154B90();
  sub_10165630(v12, (int)v5, (int)"HealthVial.Touch");
  v9 = v5[6];
  v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v9);
  sub_1023C580((int)this, v9, v12, v10, (int)"HealthVial.Touch", 0, 0.0, 0);
  sub_1025FAC0((int)this);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
  return 1;
}
