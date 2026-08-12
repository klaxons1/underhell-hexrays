void __thiscall sub_10175140(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // [esp-Ch] [ebp-3Ch]
  int v8[8]; // [esp+10h] [ebp-20h] BYREF

  if ( a2 )
  {
    if ( sub_10171D30(a2) != 28 )
    {
      sub_10165630(v8, (int)this, (int)"HL2Player.PickupItems");
      v7 = this[6];
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
      sub_1023C580((int)v8, v6, v7, (int)"HL2Player.PickupItems", 0.0, COERCE_INT(0.0));
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a2 + 1640))(a2, 30, 0);
      sub_100D6A00(this);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
    }
  }
}
