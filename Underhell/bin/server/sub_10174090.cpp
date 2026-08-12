void __thiscall sub_10174090(_DWORD *this, __int64 a2, int a3, int a4)
{
  int v5; // eax
  int v6[8]; // [esp+10h] [ebp-20h] BYREF

  if ( (_DWORD)a2 && sub_10171D30((_DWORD *)a2) != 28 )
  {
    sub_1010DD80(this + 282, a2, 0.0);
    sub_10165630(v6, (int)this, (int)"HL2Player.PickupItems");
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    sub_1023C580((int)v6, v5, (int)"HL2Player.PickupItems", 0, 0.0, 0);
    switch ( this[212] )
    {
      case 0:
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 1640))(a2, 14);
        break;
      case 1:
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 1640))(a2, 15);
        break;
      case 2:
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 1640))(a2, 16);
        break;
      case 3:
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 1640))(a2, 17);
        break;
      case 4:
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 1640))(a2, 18);
        break;
      default:
        break;
    }
    sub_100D6A00(this);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
  }
}
