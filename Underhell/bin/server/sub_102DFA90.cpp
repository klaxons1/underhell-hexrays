_DWORD *__thiscall sub_102DFA90(int this)
{
  char *v2; // edi
  _DWORD *v3; // eax
  int v4; // edx
  void (__noreturn ***v5)(); // edi
  int v6; // eax
  int v7; // eax
  _DWORD *result; // eax
  _DWORD v9[8]; // [esp+30h] [ebp-44h] BYREF
  _DWORD v10[8]; // [esp+50h] [ebp-24h] BYREF
  int v11; // [esp+70h] [ebp-4h] BYREF

  sub_101F0510(this);
  v2 = (char *)*sub_10162BE0(&v11, "player_squad");
  v3 = sub_100B0F90(&dword_10695280, v2);
  if ( !v3 )
    v3 = sub_100B2200(&dword_10695280, v2);
  v4 = *(_DWORD *)this;
  *(_DWORD *)(this + 5376) = v3;
  (*(void (__thiscall **)(int))(v4 + 1636))(this);
  if ( *(_BYTE *)(this + 3370) )
  {
    v5 = sub_1023DBA0();
    sub_10219BB0(v10);
    v10[0] = &CSingleUserRecipientFilter::`vftable';
    sub_10219D00((int)v10, (int *)this);
    (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)dword_106B31E8 + 40))(dword_106B31E8, v10, 30, 0);
    if ( !*(_DWORD *)(this + 3400) )
    {
      sub_100D78A0(v9, this, 0.80000001);
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
      v7 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v5)[9])(
             v5,
             v9,
             v6,
             "GasMask.Breath.Normal");
      *(_DWORD *)(this + 3400) = v7;
      if ( v7 )
        ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v5)[2])(v5, v7, 1.0, 100.0, 0.0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
    }
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
  }
  result = (_DWORD *)(*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
                       dword_106B31D0,
                       *(_DWORD *)(this + 24),
                       "UpdateInventory");
  if ( *(int *)(this + 2188) > 10 && *(int *)(this + 220) < 25 )
  {
    v11 = 0;
    return sub_10172570((_DWORD *)(this + 2188), &v11);
  }
  return result;
}
