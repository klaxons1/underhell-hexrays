int __thiscall sub_10309160(_DWORD *this)
{
  int v2; // edi
  int (__thiscall *v3)(_DWORD *, float *, _DWORD); // edx
  float *v4; // eax
  void (__noreturn ***v5)(); // edi
  int v6; // eax
  int v7; // eax
  void (__noreturn ***v8)(); // eax
  void (__noreturn ***v9)(); // edi
  int v10; // eax
  int v11; // eax
  void (__noreturn ***v12)(); // eax
  void (__noreturn ***v13)(); // edi
  int v14; // eax
  int v15; // eax
  void (__noreturn ***v16)(); // eax
  void (__noreturn ***v17)(); // edi
  int v18; // eax
  int v19; // eax
  void (__noreturn ***v20)(); // eax
  _DWORD v22[8]; // [esp+ACh] [ebp-2Ch] BYREF
  float v23[3]; // [esp+CCh] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
  sub_10219BB0(v22);
  v22[0] = &CPASFilter::`vftable';
  sub_1021A370(v22, v2);
  v3 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
  v22[0] = &CPASAttenuationFilter::`vftable';
  v4 = (float *)v3(this, v23, 0.80000001);
  sub_1021A0E0(v22, v4, COERCE_FLOAT(v23));
  if ( !this[946] )
  {
    v5 = sub_1023DBA0();
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v7 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v5)[8])(
           v5,
           v22,
           v6,
           2,
           "NPC_AntlionGuard.GrowlHigh",
           0.80000001);
    this[946] = v7;
    if ( v7 )
    {
      v8 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v8)[2])(
        v8,
        this[946],
        0.0,
        100.0,
        0.0);
    }
  }
  if ( !this[948] )
  {
    v9 = sub_1023DBA0();
    v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v11 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v9)[8])(
            v9,
            v22,
            v10,
            6,
            "NPC_AntlionGuard.GrowlIdle",
            0.80000001);
    this[948] = v11;
    if ( v11 )
    {
      v12 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v12)[2])(
        v12,
        this[948],
        0.0,
        100.0,
        0.0);
    }
  }
  if ( !this[949] )
  {
    v13 = sub_1023DBA0();
    v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v15 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v13)[8])(
            v13,
            v22,
            v14,
            3,
            "NPC_AntlionGuard.BreathSound",
            0.80000001);
    this[949] = v15;
    if ( v15 )
    {
      v16 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v16)[2])(
        v16,
        this[949],
        0.0,
        100.0,
        0.0);
    }
  }
  if ( !this[950] )
  {
    v17 = sub_1023DBA0();
    v18 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v19 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v17)[8])(
            v17,
            v22,
            v18,
            1,
            "NPC_AntlionGuard.Confused",
            0.80000001);
    this[950] = v19;
    if ( v19 )
    {
      v20 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v20)[2])(
        v20,
        this[950],
        0.0,
        100.0,
        0.0);
    }
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v22);
}
