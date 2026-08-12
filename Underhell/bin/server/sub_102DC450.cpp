char __thiscall sub_102DC450(int *this, float a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v8; // [esp-Ch] [ebp-9Ch]
  char Buffer[64]; // [esp+10h] [ebp-80h] BYREF
  int v10[8]; // [esp+50h] [ebp-40h] BYREF
  _DWORD v11[8]; // [esp+70h] [ebp-20h] BYREF

  if ( (*(int (__thiscall **)(int *))(*this + 1572))(this) >= 100 || !*((_BYTE *)this + 2329) )
    return 0;
  sub_101EC2E0(this, (int)(*(float *)(dword_106E0B44 + 44) * a2), a4);
  sub_10165630(v10, (int)this, a3);
  v8 = this[6];
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
  sub_1023C580(a3, (int)this, v10, v5, v8, a3, 0.0, COERCE_INT(0.0));
  sub_10219BB0(v11);
  v11[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00((int)v11, this);
  sub_10219A50(v11);
  sub_10154B40((int)v11, "ItemPickup");
  sub_10154D00((int)"item_battery");
  sub_10154B90();
  v6 = (int)((double)(*(int (__thiscall **)(int *, _DWORD))(*this + 1572))(this, 0) * 100.0 * 0.01 + 0.5) / 5;
  if ( v6 > 0 )
    LOBYTE(v6) = v6 - 1;
  sub_10429A00(Buffer, 0x40u, "!HEV_%1dP", v6);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
  return 1;
}
