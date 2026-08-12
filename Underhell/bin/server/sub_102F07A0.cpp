char __userpurge sub_102F07A0@<al>(int a1@<ecx>, int a2@<edi>, int *a3, int a4, int a5, int a6)
{
  int *v6; // esi
  int *v8; // ecx
  const char *v9; // eax
  int v10; // esi
  int v11; // eax
  int v13[8]; // [esp+18h] [ebp-40h] BYREF
  _DWORD v14[8]; // [esp+38h] [ebp-20h] BYREF

  v6 = a3;
  if ( !a3 || !(*(unsigned __int8 (__thiscall **)(int *))(*a3 + 320))(a3) )
    v6 = 0;
  if ( !(*(int (__thiscall **)(int *, _DWORD, _DWORD))(*v6 + 260))(v6, *(float *)(dword_106E24BC + 44), 0) )
    return 0;
  if ( v6[547] )
  {
    if ( *((_BYTE *)v6 + 84) )
    {
      *((_BYTE *)v6 + 88) |= 1u;
    }
    else
    {
      v8 = (int *)v6[6];
      if ( v8 )
        sub_100194B0(v8, 2188);
    }
    v6[547] = 0;
  }
  sub_10219BB0(v14);
  v14[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00((int)v14, v6);
  sub_10219A50(v14);
  sub_10154B40((int)v14, "ItemPickup");
  v9 = *(const char **)(a1 + 92);
  if ( !v9 )
    v9 = String;
  sub_10154D00((int)v9);
  sub_10154B90();
  sub_10165630(v13, (int)v6, (int)"HealthKit.Touch");
  v10 = v6[6];
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v10);
  sub_1023C580(a2, v10, v13, v11, (int)"HealthKit.Touch", 0, 0.0, 0);
  sub_1025FAC0(a1);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
  return 1;
}
