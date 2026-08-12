int __thiscall sub_10349660(float *this)
{
  void (__noreturn ***v2)(); // edi
  int v3; // ebx
  int (__thiscall *v4)(float *, _BYTE *, _DWORD); // edx
  float *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  double v12; // st7
  int v13; // eax
  int v14; // eax
  int v15; // eax
  float v17; // [esp+88h] [ebp-44h]
  float v18; // [esp+88h] [ebp-44h]
  float v19; // [esp+88h] [ebp-44h]
  float v20; // [esp+90h] [ebp-3Ch]
  float v21; // [esp+90h] [ebp-3Ch]
  float v22; // [esp+90h] [ebp-3Ch]
  float v23; // [esp+94h] [ebp-38h]
  _DWORD v24[8]; // [esp+A0h] [ebp-2Ch] BYREF
  _BYTE v25[12]; // [esp+C0h] [ebp-Ch] BYREF

  v2 = sub_1023DBA0();
  v3 = (*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 580))(this, v25);
  sub_10219BB0(v24);
  v24[0] = &CPASFilter::`vftable';
  sub_1021A370(v24, v3);
  v4 = *(int (__thiscall **)(float *, _BYTE *, _DWORD))(*(_DWORD *)this + 580);
  v24[0] = &CPASAttenuationFilter::`vftable';
  v5 = (float *)v4(this, v25, 0.80000001);
  sub_1021A0E0(v24, v5, v23);
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)this + 6));
  *((_DWORD *)this + 945) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
                              v2,
                              v24,
                              v6,
                              "NPC_CombineDropship.RotorLoop");
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)this + 6));
  *((_DWORD *)this + 1041) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
                               v2,
                               v24,
                               v7,
                               "NPC_CombineDropship.NearRotorLoop");
  v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)this + 6));
  *((_DWORD *)this + 1039) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
                               v2,
                               v24,
                               v8,
                               "NPC_CombineDropship.OnGroundRotorLoop");
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)this + 6));
  *((_DWORD *)this + 1040) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
                               v2,
                               v24,
                               v9,
                               "NPC_CombineDropship.DescendingWarningLoop");
  v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)this + 6));
  v11 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
          v2,
          v24,
          v10,
          "NPC_CombineDropship.FireLoop");
  v12 = 0.0;
  *((_DWORD *)this + 1038) = v11;
  if ( v11 )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v11, 0.0, 100.0, 0.0);
    v12 = 0.0;
  }
  v13 = *((_DWORD *)this + 1040);
  if ( v13 )
  {
    v20 = v12;
    v17 = v12;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(
      v2,
      v13,
      LODWORD(v17),
      100.0,
      LODWORD(v20));
    v12 = 0.0;
  }
  v14 = *((_DWORD *)this + 1039);
  if ( v14 )
  {
    v21 = v12;
    v18 = v12;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(
      v2,
      v14,
      LODWORD(v18),
      100.0,
      LODWORD(v21));
    v12 = 0.0;
  }
  v15 = *((_DWORD *)this + 1041);
  if ( v15 )
  {
    v22 = v12;
    v19 = v12;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(
      v2,
      v15,
      LODWORD(v19),
      100.0,
      LODWORD(v22));
  }
  this[991] = 1.0;
  sub_102B2580(this);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v24);
}
