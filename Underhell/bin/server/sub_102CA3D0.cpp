int __thiscall sub_102CA3D0(_DWORD *this)
{
  void (__noreturn ***v2)(); // edi
  int v3; // ebx
  int (__thiscall *v4)(_DWORD *, float *, _DWORD); // edx
  float *v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD v9[8]; // [esp+30h] [ebp-2Ch] BYREF
  float v10[3]; // [esp+50h] [ebp-Ch] BYREF

  v2 = sub_1023DBA0();
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
  sub_10219BB0(v9);
  v9[0] = &CPASFilter::`vftable';
  sub_1021A370(v9, v3);
  v4 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
  v9[0] = &CPASAttenuationFilter::`vftable';
  v5 = (float *)v4(this, v10, 0.80000001);
  sub_1021A0E0(v9, v5, COERCE_FLOAT(v10));
  if ( !this[349] )
  {
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v7 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
           v2,
           v9,
           v6,
           "Airboat.FireGunLoop");
    this[349] = v7;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v7, 0.0, 100.0, 0.0);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
}
