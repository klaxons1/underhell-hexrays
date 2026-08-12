void __thiscall sub_102D61C0(int this)
{
  void (__noreturn ***v2)(); // esi
  int v3; // eax
  int v4; // eax
  _DWORD v5[8]; // [esp+24h] [ebp-20h] BYREF

  if ( *(_BYTE *)(this + 2152) )
  {
    v2 = sub_1023DBA0();
    if ( !*(_DWORD *)(this + 2148) )
    {
      sub_100D78A0(v5, this, 0.80000001);
      v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
      v4 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
             v2,
             v5,
             v3,
             "NPC_Antlion.PoisonBall");
      *(_DWORD *)(this + 2148) = v4;
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v4, 1.0, 100.0, 0.0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
    }
  }
}
