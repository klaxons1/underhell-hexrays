int __thiscall sub_102DB000(int *this, int a2, int a3, int a4)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD v12[8]; // [esp+8h] [ebp-20h] BYREF
  bool v13; // [esp+37h] [ebp+Fh]
  int v14; // [esp+38h] [ebp+10h]

  if ( a3 < 0 )
    return 0;
  v13 = sub_101E76E0(this, a3) == 0;
  v7 = sub_100C9E20(this, a2, a3, a4, (int)"BaseCombatCharacter.AmmoPickup");
  v14 = v7;
  if ( a2 > 0 && !v7 )
  {
    sub_10219BB0(v12);
    v12[0] = &CSingleUserRecipientFilter::`vftable';
    sub_10219D00((int)v12, this);
    sub_10219A50(v12);
    sub_10154B40((int)v12, "AmmoDenied");
    sub_10154C10(a3);
    sub_10154B90();
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
  }
  if ( v13 )
  {
    v8 = *(_DWORD *)dword_106B3CDC;
    v9 = sub_100CF460(this);
    v10 = (*(int (__thiscall **)(int, int *, int))(v8 + 108))(dword_106B3CDC, this, v9);
    if ( v10 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 1284))(v10) == a3 )
      {
        v11 = sub_100CF460(this);
        sub_100CF400(this, v11);
      }
    }
  }
  return v14;
}
