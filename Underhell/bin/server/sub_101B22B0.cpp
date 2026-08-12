int __thiscall sub_101B22B0(int this, int a2, float *a3)
{
  float *v3; // edi
  int v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // eax
  int v10; // eax
  double v11; // st7
  _DWORD *v12; // ebx
  bool v13; // c0
  bool v14; // c3
  double v15; // st7
  double v16; // st6
  int v17; // eax
  int v18; // edi
  const char **v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  const char *v23; // eax
  int result; // eax
  double ArgList; // [esp+14h] [ebp-23Ch]
  double ArgLista; // [esp+14h] [ebp-23Ch]
  float ArgList_4; // [esp+18h] [ebp-238h]
  char Buffer[512]; // [esp+28h] [ebp-228h] BYREF
  _DWORD v29[8]; // [esp+228h] [ebp-28h] BYREF
  char v30[4]; // [esp+248h] [ebp-8h]
  float v31; // [esp+24Ch] [ebp-4h]
  const char *v32; // [esp+258h] [ebp+8h]
  bool v33; // [esp+25Bh] [ebp+Bh]

  v3 = a3;
  v5 = sub_101B2110((float *)this, a3, (float *)(this + 32), 3u);
  v6 = a3[1];
  v7 = *a3;
  v8 = a3[2];
  *(_DWORD *)v30 = v5;
  ArgList_4 = v6 * v6 + v7 * v7 + v8 * v8;
  v31 = off_10689708(ArgList_4);
  v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 800) + 24))(*(_DWORD *)(a2 + 800));
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 68))(v9);
  v11 = *(float *)(this + 24);
  v12 = (_DWORD *)v10;
  v13 = v31 < v11;
  v14 = v31 == v11;
  v15 = v31;
  if ( v13 || v14 )
  {
    v16 = 0.0;
  }
  else if ( v15 < *(float *)(this + 28) )
  {
    v16 = (v15 - *(float *)(this + 24)) / (*(float *)(this + 28) - *(float *)(this + 24));
  }
  else
  {
    v16 = 1.0;
  }
  v31 = v16;
  if ( *(_DWORD *)(dword_106B9E04 + 48) )
  {
    ArgList = v15;
    sub_10429A00(Buffer, 0x200u, "Velocity: %.3f", SLOBYTE(ArgList));
    sub_100D5DE0(v12, 0, (int)Buffer, *(float *)(this + 16), 255, 255, 255, 255);
    ArgLista = v31;
    sub_10429A00(Buffer, 0x200u, "Sound volume: %.3f", SLOBYTE(ArgLista));
    sub_100D5DE0(v12, 1, (int)Buffer, *(float *)(this + 16), 255, 255, 255, 255);
    if ( *(int *)v30 >= 0 )
    {
      sub_10429A00(Buffer, 0x200u, "Reversal [%d]", v30[0]);
      sub_100D5DE0(v12, 2, (int)Buffer, *(float *)(this + 16), 255, 255, 255, 255);
    }
  }
  if ( *(_BYTE *)(this + 68) )
  {
    if ( v31 <= 0.0 )
    {
      if ( *(_DWORD *)(this + 64) )
      {
        v22 = sub_1023DBA0();
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v22 + 40))(v22, *(_DWORD *)(this + 64));
        *(_DWORD *)(this + 64) = 0;
      }
    }
    else if ( *(_DWORD *)(this + 64) )
    {
      v17 = sub_1023DBA0();
      (*(void (__thiscall **)(int, _DWORD, float, _DWORD))(*(_DWORD *)v17 + 48))(
        v17,
        *(_DWORD *)(this + 64),
        COERCE_FLOAT(LODWORD(v31)),
        0.1);
    }
    else
    {
      v33 = *(float *)(this + 48) * a3[1] + *(float *)(this + 44) * *a3 + *(float *)(this + 52) * a3[2] > 0.0;
      v18 = sub_1023DBA0();
      sub_100D78A0(v29, (int)v12, 0.80000001);
      v19 = (const char **)(this + 56);
      if ( !v33 )
        v19 = (const char **)(this + 60);
      v32 = *v19;
      if ( !*v19 )
        v32 = String;
      v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v12[6]);
      v21 = (*(int (__thiscall **)(int, _DWORD *, int, const char *))(*(_DWORD *)v18 + 36))(v18, v29, v20, v32);
      *(_DWORD *)(this + 64) = v21;
      (*(void (__thiscall **)(int, int, float, _DWORD, _DWORD))(*(_DWORD *)v18 + 8))(
        v18,
        v21,
        COERCE_FLOAT(LODWORD(v31)),
        100.0,
        0.0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v29);
      v3 = a3;
    }
  }
  if ( *(_BYTE *)(this + 84) && *(int *)v30 >= 0 )
  {
    v23 = *(const char **)(this + 4 * *(_DWORD *)v30 + 72);
    if ( !v23 )
      v23 = String;
    sub_1023C380((int)v23, 0.0, 0);
  }
  *(float *)this = *v3;
  *(float *)(this + 4) = v3[1];
  *(float *)(this + 8) = v3[2];
  result = dword_106B31C8;
  *(float *)(this + 12) = *(float *)(dword_106B31C8 + 12);
  return result;
}
