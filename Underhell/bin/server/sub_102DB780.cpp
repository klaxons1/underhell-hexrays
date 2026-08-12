int __thiscall sub_102DB780(_DWORD *this)
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
  _DWORD v14[8]; // [esp+5Ch] [ebp-2Ch] BYREF
  float v15[3]; // [esp+7Ch] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
  sub_10219BB0(v14);
  v14[0] = &CPASFilter::`vftable';
  sub_1021A370(v14, v2);
  v3 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
  v14[0] = &CPASAttenuationFilter::`vftable';
  v4 = (float *)v3(this, v15, 0.80000001);
  sub_1021A0E0(v14, v4, COERCE_FLOAT(v15));
  if ( this[1230]
    || (v5 = sub_1023DBA0(),
        v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]),
        v7 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v5)[8])(
               v5,
               v14,
               v6,
               6,
               "coast.leech_bites_loop",
               0.80000001),
        (this[1230] = v7) != 0) )
  {
    v8 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v8)[2])(
      v8,
      this[1230],
      1.0,
      100.0,
      0.0);
  }
  if ( this[1231]
    || (v9 = sub_1023DBA0(),
        v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]),
        v11 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v9)[8])(
                v9,
                v14,
                v10,
                6,
                "coast.leech_water_churn_loop",
                0.80000001),
        (this[1231] = v11) != 0) )
  {
    v12 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v12)[2])(
      v12,
      this[1231],
      1.0,
      100.0,
      0.0);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
}
