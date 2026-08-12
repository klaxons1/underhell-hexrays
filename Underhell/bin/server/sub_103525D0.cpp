int __thiscall sub_103525D0(_DWORD *this)
{
  void (__noreturn ***v2)(); // edi
  int v3; // ebx
  int (__thiscall *v4)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  float v13; // [esp+74h] [ebp-38h]
  _DWORD v14[8]; // [esp+80h] [ebp-2Ch] BYREF
  _BYTE v15[12]; // [esp+A0h] [ebp-Ch] BYREF

  v2 = sub_1023DBA0();
  v3 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 580))(this, v15);
  sub_10219BB0(v14);
  v14[0] = &CPASFilter::`vftable';
  sub_1021A370(v14, v3);
  v4 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 580);
  v14[0] = &CPASAttenuationFilter::`vftable';
  v5 = (float *)v4(this, v15, 0.80000001);
  sub_1021A0E0(v14, v5, v13);
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  this[1026] = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
                 v2,
                 v14,
                 v6,
                 "NPC_CombineGunship.CannonSound");
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  this[945] = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
                v2,
                v14,
                v7,
                "NPC_CombineGunship.RotorSound");
  v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  this[1024] = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
                 v2,
                 v14,
                 v8,
                 "NPC_CombineGunship.ExhaustSound");
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  v10 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
          v2,
          v14,
          v9,
          "NPC_CombineGunship.RotorBlastSound");
  v11 = this[1026];
  this[1025] = v10;
  ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v11, 0.0, 100.0, 0.0);
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v2)[2])(
    v2,
    this[1024],
    0.0,
    100.0,
    0.0);
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v2)[2])(
    v2,
    this[1025],
    0.0,
    100.0,
    0.0);
  sub_102B2580(this);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
}
