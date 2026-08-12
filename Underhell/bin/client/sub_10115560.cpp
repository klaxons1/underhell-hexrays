unsigned __int16 *__usercall sub_10115560@<eax>(int a1@<edi>, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  unsigned __int16 *v4; // esi
  float *v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // [esp+14h] [ebp-2Ch]
  float v10; // [esp+14h] [ebp-2Ch]
  int v11[8]; // [esp+20h] [ebp-20h] BYREF

  v3 = sub_10034900(0x4B8u);
  if ( v3 )
    v4 = (unsigned __int16 *)sub_1004DDD0(v3);
  else
    v4 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(unsigned __int16 *, _DWORD, int))(*(_DWORD *)v4 + 324))(v4, 0, 8) )
  {
    v9 = a1;
    sub_10036200(v4);
    sub_1000DEB0(a2, 0x8000000);
    sub_1003CB30((int)v4, a2, 0);
    if ( a2 )
      *((_DWORD *)v4 + 299) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*a2 + 8))(a2, a1);
    else
      *((_DWORD *)v4 + 299) = -1;
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*((_DWORD *)v4 + 2) + 20))((_DWORD *)v4 + 2, 0, v9);
    v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*a2 + 36))(a2);
    sub_10037BA0((int)v4, v6);
    if ( a3 )
    {
      if ( (*(_DWORD *)(a3 + 112) & 4) != 0 )
        sub_1000DF30(v4, 4);
      if ( (*(_DWORD *)(a3 + 112) & 2) != 0 )
        sub_1000DF30(v4, 2);
    }
    v7 = (*(int (__thiscall **)(_DWORD *))(*a2 + 36))(a2);
    sub_1015B880(v11);
    v11[0] = (int)&CPASFilter::`vftable';
    sub_1015BB70(v7);
    v11[0] = (int)&CPASAttenuationFilter::`vftable';
    v8 = sub_10035AA0(a2);
    sub_101213E0((int)v11, v8, (int)"General.BurningFlesh", 0, 0.0, 0);
    v10 = *((float *)off_103DC81C + 3) + 7.0;
    (*(void (__thiscall **)(unsigned __int16 *, _DWORD))(*(_DWORD *)v4 + 408))(v4, LODWORD(v10));
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
    return v4;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*((_DWORD *)v4 + 2) + 4))((_DWORD *)v4 + 2);
    return 0;
  }
}
