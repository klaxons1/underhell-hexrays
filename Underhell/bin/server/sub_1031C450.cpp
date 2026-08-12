void __thiscall sub_1031C450(int this)
{
  char v2; // bl
  char v3; // bl
  double v4; // st7
  void (__noreturn ***v5)(); // edi
  int v6; // eax
  int v7; // eax
  float v8; // [esp+1Ch] [ebp-34h]
  float v9; // [esp+20h] [ebp-30h]
  float v10; // [esp+20h] [ebp-30h]
  _DWORD v11[8]; // [esp+30h] [ebp-20h] BYREF

  if ( !*(_BYTE *)(this + 2144) && (*(_BYTE *)(this + 252) & 1) == 0 )
  {
    v2 = *(_BYTE *)(this + 248);
    *(_BYTE *)(this + 2144) = 1;
    v3 = v2 & 1;
    sub_100EC3F0((_DWORD *)this, (int)sub_10318570, 0.0, 0);
    if ( *(_DWORD *)(dword_10698344 + 48) )
    {
      if ( (*(_BYTE *)(this + 250) & 1) != 0 )
      {
        sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
        return;
      }
      v4 = *(float *)(dword_106B31C8 + 12);
    }
    else
    {
      v4 = *(float *)(dword_106B31C8 + 12);
    }
    v9 = v4 + *(float *)(this + 2160);
    sub_100EC4A0((int *)this, v9, 0);
    if ( !v3 )
    {
      v8 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 2160) - 1.0;
      sub_100EC3F0((_DWORD *)this, (int)sub_10313D10, v8, off_1066C8D8);
      v5 = sub_1023DBA0();
      sub_10219BB0(v11);
      v11[0] = &CBroadcastRecipientFilter::`vftable';
      sub_1021A200((int)v11);
      v11[0] = &CReliableBroadcastRecipientFilter::`vftable';
      sub_10219A50(v11);
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
      v7 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v5)[9])(
             v5,
             v11,
             v6,
             "NPC_AttackHelicopterGrenade.Ping");
      *(_DWORD *)(this + 2148) = v7;
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v5)[2])(v5, v7, 1.0, 100.0, 0.0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
    }
    v10 = *(float *)(this + 2160) - 2.0 + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0((_DWORD *)this, (int)sub_1031B4A0, v10, off_1066C8DC);
    *(float *)(this + 2172) = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 2160) - 1.0;
  }
}
