int __thiscall sub_1039E640(int this)
{
  double v2; // st7
  float *v3; // eax
  double v4; // st6
  double v5; // st7
  double v6; // st6
  void (__noreturn ***v7)(); // edi
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  void (__noreturn *v11)(); // edx
  int result; // eax
  void (__noreturn ***v13)(); // eax
  float v14; // [esp+34h] [ebp-E0h]
  _DWORD v15[8]; // [esp+48h] [ebp-CCh] BYREF
  int v16; // [esp+68h] [ebp-ACh] BYREF
  float v17; // [esp+6Ch] [ebp-A8h]
  int v18; // [esp+70h] [ebp-A4h]
  int v19; // [esp+74h] [ebp-A0h]
  int v20; // [esp+78h] [ebp-9Ch]
  int v21; // [esp+7Ch] [ebp-98h]
  char v22; // [esp+80h] [ebp-94h]
  int v23; // [esp+84h] [ebp-90h]
  _BYTE v24[128]; // [esp+88h] [ebp-8Ch] BYREF
  int v25; // [esp+108h] [ebp-Ch]
  int v26; // [esp+10Ch] [ebp-8h]
  float v27; // [esp+110h] [ebp-4h]

  if ( !*(_BYTE *)(this + 3800) )
    goto LABEL_14;
  v2 = *(float *)(this + 3784);
  if ( v2 > *(float *)(dword_106B31C8 + 12) )
    goto LABEL_14;
  if ( *(_BYTE *)(this + 3808) )
    goto LABEL_14;
  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( !v3 )
    goto LABEL_14;
  sub_100271C0((float *)this, v3);
  v4 = 256.0;
  if ( v2 <= 256.0 )
  {
    v4 = 1.0;
    if ( v2 >= 1.0 )
      v4 = v2;
    v5 = 1.0;
  }
  else
  {
    v5 = 1.0;
  }
  v6 = v4 * 0.00390625;
  if ( v6 > 0.0 )
  {
    v27 = v5 - v6;
    v17 = 1.0;
    v7 = sub_1023DBA0();
    v16 = 0;
    v18 = 100;
    v19 = 100;
    v20 = 100;
    v21 = 75;
    v24[0] = 0;
    v22 = 0;
    v23 = 0;
    v25 = 0;
    sub_1023A760((int)"NPC_RollerMine.Ping", (int)&v16, 0);
    if ( !*(_DWORD *)(this + 3732) )
    {
      sub_100D78A0(v15, this, 0.80000001);
      v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
      v9 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, _BYTE *, int))(*v7)[7])(
             v7,
             v15,
             v8,
             v16,
             v24,
             v21);
      *(_DWORD *)(this + 3732) = v9;
      ((void (__thiscall *)(void (__noreturn ***)(), int, float, _DWORD, _DWORD))(*v7)[2])(
        v7,
        v9,
        COERCE_FLOAT(LODWORD(v17)),
        101.0,
        0.0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
    }
    v10 = *(_DWORD *)(this + 3732);
    v11 = (*v7)[11];
    v26 = v20 - v19;
    v14 = (double)(v20 - v19) * v27 + (double)v19;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))v11)(v7, v10, LODWORD(v14), 0.1);
    return ((int (__thiscall *)(void (__noreturn ***)(), _DWORD, float, _DWORD))(*v7)[12])(
             v7,
             *(_DWORD *)(this + 3732),
             COERCE_FLOAT(LODWORD(v17)),
             0.1);
  }
  else
  {
LABEL_14:
    v13 = sub_1023DBA0();
    result = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v13)[10])(v13, *(_DWORD *)(this + 3732));
    *(_DWORD *)(this + 3732) = 0;
  }
  return result;
}
