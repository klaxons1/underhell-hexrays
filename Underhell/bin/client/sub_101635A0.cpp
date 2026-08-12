int __thiscall sub_101635A0(void *this, int a2)
{
  int (__thiscall *v3)(int); // edx
  int *v4; // eax
  int *v5; // edi
  int v6; // ecx
  int v7; // esi
  int v8; // ebx
  double v9; // st7
  int v10; // eax
  int (__thiscall *v11)(int *); // edx
  float v13; // [esp+34h] [ebp-FCh]
  _BYTE v14[12]; // [esp+44h] [ebp-ECh] BYREF
  _BYTE v15[32]; // [esp+50h] [ebp-E0h] BYREF
  float v16; // [esp+70h] [ebp-C0h]
  __int16 v17; // [esp+8Ch] [ebp-A4h]
  float v18[3]; // [esp+98h] [ebp-98h] BYREF
  _BYTE v19[36]; // [esp+A4h] [ebp-8Ch] BYREF
  int v20[8]; // [esp+C8h] [ebp-68h] BYREF
  float v21[11]; // [esp+E8h] [ebp-48h] BYREF
  int v22[6]; // [esp+114h] [ebp-1Ch] BYREF
  void *v23; // [esp+12Ch] [ebp-4h]

  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 8);
  v23 = this;
  v4 = (int *)v3(a2);
  v5 = (int *)sub_1007A770(off_103DCD78, *v4);
  if ( !v5 )
    return 0;
  (*(void (__thiscall **)(int, int, int, int *, _BYTE *))(*(_DWORD *)dword_104131A0 + 8))(
    dword_104131A0,
    (int)this + 16,
    1174421507,
    v5,
    v14);
  if ( v17 < 0 )
    return 0;
  v6 = v5[298];
  if ( !v6 )
    return 0;
  if ( v17 >= *(_DWORD *)(v6 + 4) )
    return 0;
  v7 = *(_DWORD *)(v6 + 8 * (3 * v17 + 3) + 4);
  if ( !v7 )
    return 0;
  if ( v16 >= 1.0 )
    return 0;
  v8 = sub_100F5360();
  if ( !v8 )
    return 0;
  v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v7 + 116))(v7);
  v13 = v9 + v9;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 112))(v7, LODWORD(v13));
  sub_101633D0(v18);
  (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v8 + 224))(v8, v18, (int)v23 + 96);
  (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)v7 + 224))(v7, v19, v15);
  (*(void (__thiscall **)(int, int, int, _DWORD, float *))(*(_DWORD *)dword_10436254 + 76))(
    dword_10436254,
    v8,
    v7,
    0,
    v18);
  sub_10025C70(v20, (int)v5, COERCE_INT(0.80000001));
  sub_10013E00(v21);
  v10 = *v5;
  v21[2] = 1.0;
  v11 = *(int (__thiscall **)(int *))(v10 + 36);
  LODWORD(v21[0]) = 2;
  LODWORD(v21[1]) = "Weapon_Crossbow.BoltSkewer";
  LODWORD(v21[3]) = 75;
  LODWORD(v21[6]) = v11(v5);
  sub_10121280((int)v20, 0, (int)v21);
  sub_1011A810(v22);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
  return 1;
}
