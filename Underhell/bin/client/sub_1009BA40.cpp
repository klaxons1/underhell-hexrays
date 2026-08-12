int __thiscall sub_1009BA40(int this, int a2, int a3, float a4, int a5)
{
  _DWORD v7[8]; // [esp+18h] [ebp-20h] BYREF

  sub_1015B880(v7);
  v7[0] = &CPVSFilter::`vftable';
  sub_1015BB70(a2);
  if ( *(int *)(this + 16) <= 0 && !*(_BYTE *)(this + 8) && (*(int (__thiscall **)(_DWORD *))(v7[0] + 12))(v7) )
  {
    switch ( a5 )
    {
      case 1:
        sub_10176A90(a2, a3, a4, -1, 0);
        break;
      case 2:
        sub_101774A0(a2, a3);
        return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
      case 4:
        sub_101765A0(a2, a3);
        break;
      default:
        Msg("No case for Muzzleflash type: %d\n", a5);
        break;
    }
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
}
