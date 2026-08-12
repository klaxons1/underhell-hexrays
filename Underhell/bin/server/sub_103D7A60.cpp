int __thiscall sub_103D7A60(_DWORD *this)
{
  int v2; // edi
  int (__thiscall *v3)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v4; // eax
  void (__noreturn ***v5)(); // edi
  int v6; // eax
  int v7; // eax
  void (__noreturn ***v8)(); // eax
  float v10; // [esp+2Ch] [ebp-34h]
  _DWORD v11[8]; // [esp+34h] [ebp-2Ch] BYREF
  _BYTE v12[12]; // [esp+54h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 580))(this, v12);
  sub_10219BB0(v11);
  v11[0] = &CPASFilter::`vftable';
  sub_1021A370(v11, v2);
  v3 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 580);
  v11[0] = &CPASAttenuationFilter::`vftable';
  v4 = (float *)v3(this, v12, 0.80000001);
  sub_1021A0E0(v11, v4, v10);
  v5 = sub_1023DBA0();
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  v7 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v5)[8])(
         v5,
         v11,
         v6,
         6,
         "coast.thumper_ambient",
         0.80000001);
  this[282] = v7;
  if ( v7 )
  {
    v8 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v8)[2])(
      v8,
      this[282],
      1.0,
      100.0,
      0.0);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
}
