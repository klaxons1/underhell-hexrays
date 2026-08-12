void __cdecl sub_100A4600(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edi
  double v6; // st7
  int v7; // esi
  int v8[8]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v9; // [esp+3Ch] [ebp-Ch] BYREF
  float v10; // [esp+40h] [ebp-8h]
  float v11; // [esp+44h] [ebp-4h]

  if ( *(float *)(a2 + 44) < 1.0 || *(_BYTE *)(a2 + 54) || *(_BYTE *)(a2 + 55) )
  {
    if ( a1 != *(_DWORD *)(a2 + 76) || (v4 = a4) == 0 )
      v4 = *(__int16 *)(a2 + 64);
  }
  else
  {
    v4 = a4;
  }
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 20))(dword_10436258, v4);
  if ( *(float *)(a2 + 44) >= 1.0 )
  {
    v9 = *(int *)a3;
    v10 = *(float *)(a3 + 4);
    v6 = *(float *)(a3 + 8);
  }
  else
  {
    v9 = *(int *)(a2 + 12);
    v10 = *(float *)(a2 + 16);
    v6 = *(float *)(a2 + 20);
  }
  v11 = v6;
  if ( *(_WORD *)(v5 + 56)
    && !*(_DWORD *)(*(_DWORD *)((*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "bt_enabled")
                              + 28)
                  + 48) )
  {
    v7 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_10436258 + 24))(*(unsigned __int16 *)(v5 + 56));
    if ( dword_1042E0A0 )
    {
      dword_1042E0A0(v7, &v9);
    }
    else
    {
      sub_1015BB00(v8);
      sub_101214C0((int)v8, 0, v7, v5 + 88, (int)&v9, 0.0, 0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
    }
  }
}
