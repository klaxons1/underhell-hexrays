int __usercall sub_10316B40@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<esi>)
{
  void (__noreturn ***v4)(); // esi
  int v5; // ebx
  int (__thiscall *v6)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v7; // eax
  int (__stdcall *v8)(int); // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  float v17; // [esp+4Ch] [ebp-30h]
  int v18; // [esp+4Ch] [ebp-30h]
  _DWORD v19[8]; // [esp+50h] [ebp-2Ch] BYREF
  _BYTE v20[12]; // [esp+70h] [ebp-Ch] BYREF

  if ( !a1[945] )
  {
    v4 = sub_1023DBA0();
    v5 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, int))(*a1 + 580))(a1, v20, a3, a2);
    sub_10219BB0(v19);
    v19[0] = &CPASFilter::`vftable';
    sub_1021A370(v19, v5);
    v6 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*a1 + 580);
    v19[0] = &CPASAttenuationFilter::`vftable';
    v7 = (float *)v6(a1, v20, 0.80000001);
    sub_1021A0E0(v19, v7, v17);
    v18 = a1[6];
    v8 = *(int (__stdcall **)(int))(*(_DWORD *)dword_106B31D0 + 72);
    if ( (*((_BYTE *)a1 + 250) & 1) != 0 )
    {
      v9 = v8(v18);
      v10 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v4)[9])(
              v4,
              v19,
              v9,
              "NPC_AttackHelicopter.RotorsLoud");
    }
    else
    {
      v11 = v8(v18);
      v10 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v4)[9])(
              v4,
              v19,
              v11,
              "NPC_AttackHelicopter.Rotors");
    }
    a1[945] = v10;
    v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
    a1[946] = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v4)[9])(
                v4,
                v19,
                v12,
                "NPC_AttackHelicopter.RotorBlast");
    v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
    v14 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v4)[9])(
            v4,
            v19,
            v13,
            "NPC_AttackHelicopter.FireGun");
    a1[1070] = v14;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v4)[2])(v4, v14, 0.0, 100.0, 0.0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v19);
  }
  return sub_102B2580(a1);
}
