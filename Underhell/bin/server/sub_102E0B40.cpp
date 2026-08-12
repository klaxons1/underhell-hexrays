void __usercall sub_102E0B40(int a1@<ecx>, int a2@<edi>)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int *v6; // ecx
  __int16 *v7; // eax
  int v8; // eax
  int v9[8]; // [esp+10h] [ebp-40h] BYREF
  int v10[8]; // [esp+30h] [ebp-20h] BYREF

  if ( *(float *)(a1 + 5084) >= 10.0 )
  {
    if ( sub_102DF000(a1, (int)&dword_10665E54) )
    {
      sub_100D78A0(v9, a1, 0.80000001);
      sub_1021A070(v9);
      v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
      sub_1023C580(a2, a1, v9, v5, (int)"HL2Player.SprintStart", 0, 0.0, 0);
      sub_100EA7B0(a1, *(float *)(dword_106E077C + 44));
      if ( *(_BYTE *)(a1 + 5216) != 1 )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v6 = *(int **)(a1 + 24);
          if ( v6 )
            sub_100194B0(v6, 5216);
        }
        *(_BYTE *)(a1 + 5216) = 1;
      }
      if ( sub_100CF460((_DWORD *)a1) )
      {
        v7 = (__int16 *)sub_100CF460((_DWORD *)a1);
        if ( !sub_100D0E00(v7) )
        {
          v8 = sub_100CF460((_DWORD *)a1);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 1400))(v8) )
            (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1680))(a1);
        }
      }
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
    }
  }
  else if ( (*(_DWORD *)(a1 + 3296) & 0x20000) != 0 )
  {
    sub_100D78A0(v10, a1, 0.80000001);
    sub_1021A070(v10);
    v3 = *(_DWORD *)(a1 + 24);
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3);
    sub_1023C580(a2, v3, v10, v4, (int)"HL2Player.SprintNoPower", 0, 0.0, 0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
  }
}
