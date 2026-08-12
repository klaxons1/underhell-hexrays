void __usercall sub_10415A50(_DWORD *a1@<ecx>, float a2@<edi>)
{
  int v3; // edi
  int (__thiscall *v4)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v5; // eax
  void (__noreturn ***v6)(); // edi
  int v7; // eax
  _DWORD v9[8]; // [esp+18h] [ebp-2Ch] BYREF
  _BYTE v10[12]; // [esp+38h] [ebp-Ch] BYREF

  if ( !a1[532] )
  {
    v3 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 580))(a1, v10);
    sub_10219BB0(v9);
    v9[0] = &CPASFilter::`vftable';
    sub_1021A370(v9, v3);
    v4 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*a1 + 580);
    v9[0] = &CPASAttenuationFilter::`vftable';
    v5 = (float *)v4(a1, v10, 0.80000001);
    sub_1021A0E0(v9, v5, a2);
    v6 = sub_1023DBA0();
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
    a1[532] = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v6)[8])(
                v6,
                v9,
                v7,
                1,
                "Weapon_FlareGun.Burn",
                3.0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
  }
}
