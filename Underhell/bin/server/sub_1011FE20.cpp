void __cdecl sub_1011FE20(int a1, int a2, int a3, int a4)
{
  double v5; // st7
  BOOL v6; // ecx
  BOOL v7; // edi
  double v8; // st7
  const char *v9; // eax
  int v10; // eax
  int v11; // eax
  const char *v12; // ecx
  int v13; // edi
  int v14; // eax
  BOOL v15; // ecx
  BOOL v16; // edi
  double v17; // st7
  const char *v18; // eax
  int v19; // eax
  int v20; // eax
  const char *v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // [esp+28h] [ebp-68h] BYREF
  const char *v25; // [esp+2Ch] [ebp-64h]
  float v26; // [esp+30h] [ebp-60h]
  int v27; // [esp+34h] [ebp-5Ch]
  _BYTE v28[24]; // [esp+54h] [ebp-3Ch] BYREF
  _DWORD v29[8]; // [esp+6Ch] [ebp-24h] BYREF
  float v30; // [esp+8Ch] [ebp-4h]
  float v31; // [esp+98h] [ebp+8h]
  float v32; // [esp+98h] [ebp+8h]

  if ( (*(_DWORD *)(a1 + 248) & 0x1000) == 0 )
  {
    if ( a4 )
      v5 = 0.5;
    else
      v5 = 1.0;
    v30 = v5;
    if ( a3 )
    {
      v6 = *(_DWORD *)(a2 + 4) && *(float *)(a2 + 28) < (double)*(float *)(dword_106B31C8 + 12);
      v7 = *(_DWORD *)(a2 + 8) && !*(_BYTE *)(a2 + 36) && *(float *)(a2 + 32) < (double)*(float *)(dword_106B31C8 + 12);
      if ( v6 && v7 )
        v8 = 0.25;
      else
        v8 = 1.0;
      if ( v6 )
      {
        sub_100D78A0(v29, a1, 0.80000001);
        sub_100F8510((float *)&v24);
        v9 = *(const char **)(a2 + 4);
        v24 = 3;
        v25 = v9;
        if ( !v9 )
          v25 = String;
        v10 = *(_DWORD *)(a1 + 24);
        v31 = v8;
        v26 = v31;
        v27 = 75;
        v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v10);
        sub_1023BE40(v29, v11, &v24);
        *(float *)(a2 + 28) = *(float *)(dword_106B31C8 + 12) + v30;
        sub_102375F0(v28);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v29);
      }
      if ( v7 )
      {
        v12 = *(const char **)(a2 + 8);
        v13 = *(_DWORD *)(a2 + 20);
        if ( !v12 )
          v12 = String;
        v14 = sub_102390E0(*(_DWORD *)(a1 + 24), (int)v12, 0.85000002, 75, 0, 100, v13, 0);
        *(_DWORD *)(a2 + 20) = v14;
        *(_DWORD *)(a2 + 24) = 0;
        *(_BYTE *)(a2 + 36) = v13 == v14;
LABEL_48:
        *(float *)(a2 + 32) = *(float *)(dword_106B31C8 + 12) + 6.0;
      }
    }
    else
    {
      v15 = *(_DWORD *)(a2 + 12) && *(float *)(a2 + 28) < (double)*(float *)(dword_106B31C8 + 12);
      v16 = *(_DWORD *)(a2 + 16)
         && !*(_BYTE *)(a2 + 37)
         && *(float *)(a2 + 32) < (double)*(float *)(dword_106B31C8 + 12);
      if ( v15 && v16 )
        v17 = 0.25;
      else
        v17 = 1.0;
      if ( v15 )
      {
        sub_100D78A0(v29, a1, 0.80000001);
        sub_100F8510((float *)&v24);
        v18 = *(const char **)(a2 + 12);
        v24 = 3;
        v25 = v18;
        if ( !v18 )
          v25 = String;
        v19 = *(_DWORD *)(a1 + 24);
        v32 = v17;
        v26 = v32;
        v27 = 75;
        v20 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v19);
        sub_1023BE40(v29, v20, &v24);
        *(float *)(a2 + 28) = *(float *)(dword_106B31C8 + 12) + v30;
        sub_102375F0(v28);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v29);
      }
      if ( v16 )
      {
        v21 = *(const char **)(a2 + 16);
        v22 = *(_DWORD *)(a2 + 24);
        if ( !v21 )
          v21 = String;
        v23 = sub_102390E0(*(_DWORD *)(a1 + 24), (int)v21, 0.85000002, 75, 0, 100, v22, 0);
        *(_DWORD *)(a2 + 24) = v23;
        *(_DWORD *)(a2 + 20) = 0;
        *(_BYTE *)(a2 + 37) = v22 == v23;
        goto LABEL_48;
      }
    }
  }
}
