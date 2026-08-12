int __thiscall sub_10366810(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  int v3; // edi
  int (__thiscall *v4)(_DWORD *, float *, _DWORD); // edx
  float *v5; // eax
  void (__noreturn ***v6)(); // edi
  int v7; // eax
  void (__noreturn ***v8)(); // eax
  _DWORD v10[8]; // [esp+40h] [ebp-2Ch] BYREF
  float v11[3]; // [esp+60h] [ebp-Ch] BYREF

  if ( !this[943] )
  {
    (*(void (__thiscall **)(_DWORD *, void *, int))(*this + 2324))(this, &unk_1067340C, 3);
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[4])(v2, this[943]);
  }
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
  sub_10219BB0(v10);
  v10[0] = &CPASFilter::`vftable';
  sub_1021A370(v10, v3);
  v4 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
  v10[0] = &CPASAttenuationFilter::`vftable';
  v5 = (float *)v4(this, v11, 0.80000001);
  sub_1021A0E0(v10, v5, COERCE_FLOAT(v11));
  if ( !this[1004] )
  {
    v6 = sub_1023DBA0();
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    this[1004] = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v6)[8])(
                   v6,
                   v10,
                   v7,
                   2,
                   "NPC_FastZombie.Gurgle",
                   0.80000001);
    v8 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v8)[2])(
      v8,
      this[1004],
      0.0,
      100.0,
      0.0);
  }
  sub_10365F90(this);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
}
