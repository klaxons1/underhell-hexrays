int __usercall sub_103FB400@<eax>(_DWORD *a1@<ecx>, float a2@<edi>)
{
  int v3; // edi
  int (__thiscall *v4)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v5; // eax
  void (__noreturn ***v6)(); // edi
  int v7; // eax
  float v10[8]; // [esp+18h] [ebp-2Ch] BYREF
  _BYTE v11[12]; // [esp+38h] [ebp-Ch] BYREF

  if ( !a1[374] )
  {
    v3 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 580))(a1, v11);
    sub_10219BB0(v10);
    LODWORD(v10[0]) = &CPASFilter::`vftable';
    sub_1021A370(v10, v3);
    v4 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*a1 + 580);
    LODWORD(v10[0]) = &CPASAttenuationFilter::`vftable';
    v5 = (float *)v4(a1, v11, 0.80000001);
    sub_1021A0E0(v10, v5, a2);
    v6 = sub_1023DBA0();
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
    v10[0] = 0.80000001;
    a1[374] = ((int (__thiscall *)(void (__noreturn ***)(), float *, int))(*v6)[8])(v6, v10, v7);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
  }
  return a1[374];
}
