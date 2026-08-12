int __thiscall sub_103DF970(_DWORD *this)
{
  void (__noreturn ***v2)(); // esi
  int v3; // ebx
  int (__thiscall *v4)(_DWORD *, float *, _DWORD); // edx
  float *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _DWORD v19[8]; // [esp+D0h] [ebp-2Ch] BYREF
  float v20[3]; // [esp+F0h] [ebp-Ch] BYREF

  v2 = sub_1023DBA0();
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
  sub_10219BB0(v19);
  v19[0] = &CPASFilter::`vftable';
  sub_1021A370(v19, v3);
  v4 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
  v19[0] = &CPASAttenuationFilter::`vftable';
  v5 = (float *)v4(this, v20, 0.80000001);
  sub_1021A0E0(v19, v5, COERCE_FLOAT(v20));
  if ( !this[461] )
  {
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v7 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
           v2,
           v19,
           v6,
           "Airboat_engine_idle");
    this[461] = v7;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v7, 0.0, 100.0, 0.0);
  }
  if ( !this[459] )
  {
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v9 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
           v2,
           v19,
           v8,
           "Airboat_fan_idle");
    this[459] = v9;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v9, 0.0, 100.0, 0.0);
  }
  if ( !this[460] )
  {
    v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v11 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
            v2,
            v19,
            v10,
            "Airboat_fan_fullthrottle");
    this[460] = v11;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v11, 0.0, 100.0, 0.0);
  }
  if ( !this[463] )
  {
    v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v13 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
            v2,
            v19,
            v12,
            "Airboat_water_stopped");
    this[463] = v13;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v13, 0.0, 100.0, 0.0);
  }
  if ( !this[462] )
  {
    v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v15 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
            v2,
            v19,
            v14,
            "Airboat_water_fast");
    this[462] = v15;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v15, 0.0, 100.0, 0.0);
  }
  if ( !this[464] )
  {
    v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    v17 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v2)[9])(
            v2,
            v19,
            v16,
            "Airboat.FireGunLoop");
    this[464] = v17;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v2)[2])(v2, v17, 0.0, 100.0, 0.0);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v19);
}
