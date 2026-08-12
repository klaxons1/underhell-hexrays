void __thiscall sub_101ED380(int this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+30h] [ebp-54h]
  _DWORD v8[8]; // [esp+40h] [ebp-44h] BYREF
  _DWORD v9[8]; // [esp+60h] [ebp-24h] BYREF
  bool v10; // [esp+83h] [ebp-1h] BYREF

  if ( *(_BYTE *)(this + 3369) )
  {
    sub_1023C380((int)"HL2Player.UseDeny", 0.0, 0);
  }
  else if ( *(_BYTE *)(this + 2139) && *(_BYTE *)(this + 2141) )
  {
    v10 = *(_BYTE *)(this + 3370) == 0;
    sub_101E9CF0((_BYTE *)(this + 3370), &v10);
    v3 = sub_1023DBA0(v2);
    if ( *(_BYTE *)(this + 3370) )
    {
      sub_10219BB0(v9);
      v9[0] = &CSingleUserRecipientFilter::`vftable';
      sub_10219D00(this);
      (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)dword_106B31E8 + 40))(dword_106B31E8, v9, 30, 0);
      if ( !*(_DWORD *)(this + 3400) )
      {
        sub_100D78A0(v8, this, 0.80000001);
        v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
               dword_106B31D0,
               *(_DWORD *)(this + 24));
        v5 = (*(int (__thiscall **)(int, _DWORD *, int, const char *))(*(_DWORD *)v3 + 36))(
               v3,
               v8,
               v4,
               "GasMask.Breath.Normal");
        *(_DWORD *)(this + 3400) = v5;
        if ( v5 )
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 8))(v3, v5, 1.0, 100.0, 0.0);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
      }
      sub_1023C380((int)"Player.GasMaskOn", 0.0, 0);
      v7 = 1;
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 40))(v3, *(_DWORD *)(this + 3400));
      *(_DWORD *)(this + 3400) = 0;
      sub_1023C380((int)"Player.GasMaskOff", 0.0, 0);
      sub_10219BB0(v9);
      v9[0] = &CSingleUserRecipientFilter::`vftable';
      sub_10219D00(this);
      (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E8 + 40))(dword_106B31E8, v9, 0, 0);
      v7 = 0;
    }
    v6 = sub_100BF520(this, "GasMask");
    sub_100C1600(this, v6, v7);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
  }
}
