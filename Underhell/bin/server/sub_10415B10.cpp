int __thiscall sub_10415B10(_DWORD *this)
{
  int v2; // edi
  int (__thiscall *v3)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v4; // eax
  void (__noreturn ***v5)(); // edi
  int v6; // eax
  float v8; // [esp+10h] [ebp-34h]
  _DWORD v9[8]; // [esp+18h] [ebp-2Ch] BYREF
  _BYTE v10[12]; // [esp+38h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 580))(this, v10);
  sub_10219BB0(v9);
  v9[0] = &CPASFilter::`vftable';
  sub_1021A370(v9, v2);
  v3 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 580);
  v9[0] = &CPASAttenuationFilter::`vftable';
  v4 = (float *)v3(this, v10, 0.80000001);
  sub_1021A0E0(v9, v4, v8);
  v5 = sub_1023DBA0();
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  this[532] = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v5)[8])(
                v5,
                v9,
                v6,
                1,
                "glowstick.crack",
                3.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
}
