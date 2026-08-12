unsigned int __thiscall sub_103E34A0(int (__thiscall ***this)(void *), int a2)
{
  int v3; // esi
  unsigned int result; // eax
  void (__noreturn ***v5)(); // esi
  int (__thiscall *v6)(void *); // edx
  float *v7; // eax
  int (__thiscall **v8)(void *); // eax
  double v9; // st7
  int (__thiscall **v10)(void *); // ecx
  int v11; // eax
  int v12; // [esp+50h] [ebp-84h]
  float v13; // [esp+58h] [ebp-7Ch]
  _DWORD v14[2]; // [esp+64h] [ebp-70h] BYREF
  float v15; // [esp+6Ch] [ebp-68h]
  int v16; // [esp+70h] [ebp-64h]
  int v17; // [esp+74h] [ebp-60h]
  int v18; // [esp+78h] [ebp-5Ch]
  int v19; // [esp+7Ch] [ebp-58h]
  float v20; // [esp+80h] [ebp-54h]
  int v21; // [esp+84h] [ebp-50h]
  __int16 v22; // [esp+88h] [ebp-4Ch]
  char v23; // [esp+8Ah] [ebp-4Ah]
  int v24; // [esp+8Ch] [ebp-48h]
  int v25[5]; // [esp+90h] [ebp-44h] BYREF
  __int16 v26; // [esp+A4h] [ebp-30h]
  _DWORD v27[8]; // [esp+A8h] [ebp-2Ch] BYREF
  _BYTE v28[12]; // [esp+C8h] [ebp-Ch] BYREF
  int v29; // [esp+DCh] [ebp+8h]

  v3 = (**this)(this);
  result = sub_10267DA0((int)this, a2);
  if ( v3 )
  {
    *((float *)this - 259) = 0.0;
    v5 = sub_1023DBA0();
    v29 = ((int (__thiscall *)(int (__thiscall ***)(void *), _BYTE *))(*(this - 371))[145])(this - 371, v28);
    sub_10219BB0(v27);
    v27[0] = &CPASFilter::`vftable';
    sub_1021A370(v27, v29);
    v6 = (*(this - 371))[145];
    v27[0] = &CPASAttenuationFilter::`vftable';
    v7 = (float *)((int (__thiscall *)(int (__thiscall ***)(void *), _BYTE *, _DWORD))v6)(this - 371, v28, 0.80000001);
    sub_1021A0E0(v27, v7, v13);
    v15 = 1.0;
    v26 = -1;
    v8 = this[90];
    v20 = 0.0;
    v16 = 0;
    v17 = 0;
    v18 = 100;
    v19 = 0;
    v21 = 0;
    v22 = 1;
    v23 = 0;
    v24 = -1;
    memset(v25, 0, sizeof(v25));
    v14[0] = 4;
    v14[1] = "Airboat_engine_stop";
    v9 = ((double (__thiscall *)(void (__noreturn ***)(), int (__thiscall **)(void *)))(*v5)[15])(v5, v8);
    v15 = v9;
    v10 = this[90];
    v16 = 75;
    ((void (__thiscall *)(void (__noreturn ***)(), int (__thiscall **)(void *)))(*v5)[14])(v5, v10);
    v18 = (int)v9;
    v12 = (int)*(this - 365);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023BE40(v27, v11, v12);
    sub_10145050((int)(this - 90));
    ((void (__thiscall *)(void (__noreturn ***)(), int (__thiscall **)(void *), _DWORD, _DWORD, _DWORD *))(*v5)[12])(
      v5,
      this[90],
      0.0,
      0.0,
      v14);
    ((void (__thiscall *)(void (__noreturn ***)(), int (__thiscall **)(void *), _DWORD, _DWORD))(*v5)[12])(
      v5,
      this[88],
      0.0,
      0.0);
    ((void (__thiscall *)(void (__noreturn ***)(), int (__thiscall **)(void *), _DWORD, _DWORD))(*v5)[12])(
      v5,
      this[89],
      0.0,
      0.0);
    ((void (__thiscall *)(void (__noreturn ***)(), int (__thiscall **)(void *), _DWORD, _DWORD))(*v5)[12])(
      v5,
      this[92],
      0.0,
      0.0);
    ((void (__thiscall *)(void (__noreturn ***)(), int (__thiscall **)(void *), _DWORD, _DWORD))(*v5)[12])(
      v5,
      this[91],
      0.0,
      0.0);
    ((void (__thiscall *)(void (__noreturn ***)(), int (__thiscall **)(void *), _DWORD, _DWORD))(*v5)[12])(
      v5,
      this[93],
      0.0,
      0.0);
    sub_102375F0(v25);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v27);
  }
  return result;
}
