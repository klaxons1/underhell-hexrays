void __thiscall sub_103EAD50(int this)
{
  void (__noreturn ***v2)(); // edi
  int v3; // eax
  unsigned int v4; // eax
  void *v5; // eax
  void (__noreturn ***v6)(); // eax
  void (__noreturn ***v7)(); // eax
  double v8; // st7
  double v9; // st7
  void *v10; // eax
  _DWORD v11[8]; // [esp+34h] [ebp-28h] BYREF

  if ( !*(_BYTE *)(this + 1724) && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1740) )
  {
    if ( *(_BYTE *)(this + 1736) )
    {
      v8 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 1744)) * 0.33333334;
      if ( v8 > 1.0 )
        v8 = 1.0;
      v9 = v8 * 0.5;
      if ( *(_DWORD *)(this + 1640) != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 2] == *(_DWORD *)(this + 1640) >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 1] )
      {
        v10 = (void *)sub_1026A890((unsigned int *)(this + 1640));
        sub_101E3110(v10, 0xCu, (int)(v9 * 100.0), 8u);
      }
    }
    else
    {
      *(float *)(this + 1744) = *(float *)(dword_106B31C8 + 12);
      *(_BYTE *)(this + 1736) = 1;
      sub_100D78A0(v11, this, 0.80000001);
      v2 = sub_1023DBA0();
      v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
      *(_DWORD *)(this + 1760) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v2)[8])(
                                   v2,
                                   v11,
                                   v3,
                                   6,
                                   "Jeep.GaussCharge",
                                   0.80000001);
      v4 = *(_DWORD *)(this + 1640);
      if ( v4 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 2] == v4 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 1] )
      {
        v5 = (void *)sub_1026A890((unsigned int *)(this + 1640));
        sub_101E3110(v5, 0xCu, 0xAu, 0x46u);
      }
      if ( *(_DWORD *)(this + 1760) )
      {
        v6 = sub_1023DBA0();
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v6)[2])(
          v6,
          *(_DWORD *)(this + 1760),
          1.0,
          50.0,
          0.0);
        v7 = sub_1023DBA0();
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v7)[11])(
          v7,
          *(_DWORD *)(this + 1760),
          250.0,
          3.0);
      }
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
    }
  }
}
