void __usercall sub_1039F420(int a1@<ecx>, double a2@<st0>)
{
  int v3; // ebx
  double v4; // st7
  void (__noreturn ***v5)(); // edi
  void (__noreturn ***v6)(); // eax
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // eax
  void (__noreturn **v11)(); // edx
  float v12; // [esp+38h] [ebp-E0h]
  float v13; // [esp+38h] [ebp-E0h]
  float v14; // [esp+38h] [ebp-E0h]
  _DWORD v15[8]; // [esp+4Ch] [ebp-CCh] BYREF
  int v16; // [esp+6Ch] [ebp-ACh] BYREF
  float v17; // [esp+70h] [ebp-A8h]
  int v18; // [esp+74h] [ebp-A4h]
  int v19; // [esp+78h] [ebp-A0h]
  int v20; // [esp+7Ch] [ebp-9Ch]
  int v21; // [esp+80h] [ebp-98h]
  char v22; // [esp+84h] [ebp-94h]
  int v23; // [esp+88h] [ebp-90h]
  _BYTE v24[128]; // [esp+8Ch] [ebp-8Ch] BYREF
  int v25; // [esp+10Ch] [ebp-Ch]
  int v26; // [esp+110h] [ebp-8h]
  float v27; // [esp+114h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 3796) )
  {
    v3 = 1;
    v4 = sub_1039F360(a1, a2);
    v27 = v4;
    if ( v4 > 0.0 )
      v3 = (*(_BYTE *)(a1 + 3800) != 0) + 2;
    v5 = sub_1023DBA0();
    v17 = 1.0;
    v18 = 100;
    v19 = 100;
    v20 = 100;
    v16 = 0;
    v21 = 75;
    v24[0] = 0;
    v22 = 0;
    v23 = 0;
    v25 = 0;
    if ( v3 == 2 )
    {
      sub_1023A760((int)"NPC_RollerMine.Roll", (int)&v16, 0);
    }
    else if ( v3 == 3 )
    {
      sub_1023A760((int)"NPC_RollerMine.RollWithSpikes", (int)&v16, 0);
    }
    if ( *(_DWORD *)(a1 + 3796) != v3 )
    {
      v6 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v6)[10])(v6, *(_DWORD *)(a1 + 3728));
      *(_DWORD *)(a1 + 3728) = 0;
      *(_DWORD *)(a1 + 3796) = v3;
      if ( v3 == 1 )
        return;
      sub_100D78A0(v15, a1, 0.80000001);
      v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
      v8 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, _BYTE *, int))(*v5)[7])(
             v5,
             v15,
             v7,
             v16,
             v24,
             v21);
      v9 = (double)v18;
      *(_DWORD *)(a1 + 3728) = v8;
      v12 = v9;
      ((void (__thiscall *)(void (__noreturn ***)(), int, float, _DWORD, _DWORD))(*v5)[2])(
        v5,
        v8,
        COERCE_FLOAT(LODWORD(v17)),
        LODWORD(v12),
        0.0);
      *(_DWORD *)(a1 + 3796) = v3;
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
    }
    v10 = *(_DWORD *)(a1 + 3728);
    if ( v10 )
    {
      v11 = *v5;
      v26 = v20 - v19;
      v13 = (double)(v20 - v19) * v27 + (double)v19;
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))v11[11])(v5, v10, LODWORD(v13), 0.1);
      v14 = v17 * v27;
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v5)[12])(
        v5,
        *(_DWORD *)(a1 + 3728),
        LODWORD(v14),
        0.1);
    }
  }
}
