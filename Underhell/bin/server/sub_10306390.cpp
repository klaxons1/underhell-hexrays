char __thiscall sub_10306390(_DWORD *this, int *a2)
{
  const char *v4; // eax
  int v5; // esi
  int v6; // eax
  float v7; // [esp+8h] [ebp-54h]
  int v8[8]; // [esp+18h] [ebp-44h] BYREF
  _DWORD v9[8]; // [esp+38h] [ebp-24h] BYREF
  int v10; // [esp+58h] [ebp-4h]

  if ( this[308] == 1 )
  {
    v10 = *(_DWORD *)(dword_106E2EAC + 48);
  }
  else if ( this[308] == 3 )
  {
    v10 = *(_DWORD *)(dword_106E2F3C + 48);
  }
  else
  {
    v10 = *(_DWORD *)(dword_106E2EF4 + 48);
  }
  v7 = (float)v10;
  if ( !(*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 260))(a2, LODWORD(v7), 0) )
    return 0;
  sub_10219BB0(v9);
  v9[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00((int)v9, a2);
  sub_10219A50(v9);
  sub_10154B40((int)v9, "ItemPickup");
  v4 = (const char *)this[23];
  if ( !v4 )
    v4 = String;
  sub_10154D00((int)v4);
  sub_10154B90();
  sub_10165630(v8, (int)a2, (int)"GrubNugget.Touch");
  v5 = a2[6];
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5);
  sub_1023C580((int)this, v5, v8, v6, (int)"GrubNugget.Touch", 0, 0.0, 0);
  sub_1025FAC0((int)this);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
  return 1;
}
