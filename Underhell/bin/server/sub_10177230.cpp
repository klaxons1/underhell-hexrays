void __thiscall sub_10177230(_DWORD *this, __int64 a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7[8]; // [esp+10h] [ebp-20h] BYREF

  if ( (_DWORD)a2 && sub_10171D30((_DWORD *)a2) != 28 )
  {
    sub_10165630(v7, (int)this, (int)"HL2Player.PickupItems");
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    sub_1023C580((int)v7, v5, (int)"HL2Player.PickupItems", 0, 0.0, 0);
    sub_1010DD80(this + 282, a2, 0.0);
    v6 = this[212];
    if ( v6 == 5 )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 1640))(a2, 12);
    else
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 1640))(a2, v6 + 7);
    sub_100D6A00(this);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
  }
}
