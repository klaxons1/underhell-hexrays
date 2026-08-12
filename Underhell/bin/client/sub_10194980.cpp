void __thiscall sub_10194980(_DWORD *this)
{
  int v2; // edi
  bool v3; // zf
  void (__noreturn ***v4)(); // ebx
  void (__noreturn **v5)(); // edi
  int v6; // eax
  void (__noreturn ***v7)(); // eax
  void (__noreturn ***v8)(); // eax
  void (__noreturn ***v9)(); // ebx
  void (__noreturn **v10)(); // edi
  int v11; // eax
  void (__noreturn ***v12)(); // eax
  void (__noreturn ***v13)(); // eax
  void (__noreturn ***v14)(); // ebx
  void (__noreturn **v15)(); // edi
  int v16; // eax
  void (__noreturn ***v17)(); // eax
  void (__noreturn ***v18)(); // eax
  float v19; // [esp+6Ch] [ebp-34h]
  float v20; // [esp+6Ch] [ebp-34h]
  float v21; // [esp+6Ch] [ebp-34h]
  int v22[8]; // [esp+80h] [ebp-20h] BYREF

  if ( (int)this[849] >= 0 && (int)this[850] >= 0 )
  {
    v2 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    sub_1015B880(v22);
    v22[0] = (int)&CPASFilter::`vftable';
    sub_1015BB70(v22, v2);
    v3 = this[846] == 0;
    v22[0] = (int)&CPASAttenuationFilter::`vftable';
    if ( v3 )
    {
      v4 = sub_101218C0();
      v5 = *v4;
      v6 = (*(int (__thiscall **)(_DWORD *, const char *))(this[2] + 36))(this + 2, "NPC_Manhack.EngineSound1");
      this[846] = ((int (__thiscall *)(void (__noreturn ***)(), int *, int))v5[9])(v4, v22, v6);
      v7 = sub_101218C0();
      v19 = (float)(int)this[849];
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v7)[2])(
        v7,
        this[846],
        0.0,
        LODWORD(v19),
        0.0);
      v8 = sub_101218C0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v8)[12])(v8, this[846], 0.69999999, 2.0);
    }
    if ( !this[847] )
    {
      v9 = sub_101218C0();
      v10 = *v9;
      v11 = (*(int (__thiscall **)(_DWORD *, const char *))(this[2] + 36))(this + 2, "NPC_Manhack.EngineSound2");
      this[847] = ((int (__thiscall *)(void (__noreturn ***)(), int *, int))v10[9])(v9, v22, v11);
      v12 = sub_101218C0();
      v20 = (float)(int)this[850];
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v12)[2])(
        v12,
        this[847],
        0.0,
        LODWORD(v20),
        0.0);
      v13 = sub_101218C0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v13)[12])(
        v13,
        this[847],
        0.69999999,
        2.0);
    }
    if ( !this[848] )
    {
      v14 = sub_101218C0();
      v15 = *v14;
      v16 = (*(int (__thiscall **)(_DWORD *, const char *))(this[2] + 36))(this + 2, "NPC_Manhack.BladeSound");
      this[848] = ((int (__thiscall *)(void (__noreturn ***)(), int *, int))v15[9])(v14, v22, v16);
      v17 = sub_101218C0();
      v21 = (float)(int)this[849];
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v17)[2])(
        v17,
        this[848],
        0.0,
        LODWORD(v21),
        0.0);
      v18 = sub_101218C0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v18)[12])(
        v18,
        this[848],
        0.69999999,
        2.0);
    }
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v22);
  }
}
