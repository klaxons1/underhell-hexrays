void __usercall sub_101E4B70(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  double v4; // st7
  unsigned __int8 (__thiscall *v5)(int, int, int); // edx
  unsigned __int8 v6; // bl
  _DWORD v8[8]; // [esp+4h] [ebp-28h] BYREF
  int v9; // [esp+24h] [ebp-8h]
  unsigned __int16 v10; // [esp+2Ah] [ebp-2h]

  if ( *(float *)(a1 + 3952) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    *(float *)(a1 + 3952) = *(float *)(dword_106B31C8 + 12) + 0.25;
    v4 = 0.25 * *(float *)(a1 + 3948);
    if ( v4 <= 255.0 )
    {
      if ( v4 < 0.0 )
        v4 = 0.0;
    }
    else
    {
      v4 = 255.0;
    }
    v9 = v10 | 0xC00;
    v5 = *(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 1088);
    v9 = (int)v4;
    v6 = (int)v4;
    if ( v5(a1, a3, a2) )
    {
      if ( 4 * v6 <= 255 )
        v6 = 4 * (int)v4;
      else
        v6 = -1;
    }
    if ( v6 != *(_DWORD *)(a1 + 3956) )
    {
      *(_DWORD *)(a1 + 3956) = v6;
      sub_10219BB0(v8);
      v8[0] = &CSingleUserRecipientFilter::`vftable';
      sub_10219D00(a1);
      sub_10219A50(v8);
      sub_10154B40((int)v8, "Geiger");
      sub_10154BB0(v6);
      sub_10154B90();
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
    }
    if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3) )
      *(float *)(a1 + 3948) = 1000.0;
  }
}
