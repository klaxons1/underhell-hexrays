void __thiscall sub_102ECFE0(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  float v6; // [esp+4h] [ebp-30h]
  int v7[8]; // [esp+14h] [ebp-20h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 784))(this, this);
  v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v6, 0);
  v2 = *(_DWORD *)(this + 908);
  if ( v2 == sub_100BDF40(this, "Close") )
  {
    if ( *(_BYTE *)(this + 896) )
    {
      sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
      sub_10165630(v7, this, (int)"AmmoCrate.Close");
      v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
      sub_1023C580(v2, this, v7, v4, (int)"AmmoCrate.Close", 0, 0.0, 0);
      v5 = sub_100BDF40(this, "Idle");
      sub_100C3330(this, v5);
      sub_100C1600(this, 1, 1);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
    }
  }
  else if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1128) )
  {
    *(_DWORD *)(this + 1156) = -1;
    v3 = sub_100BDF40(this, "Close");
    sub_100C3330(this, v3);
  }
}
