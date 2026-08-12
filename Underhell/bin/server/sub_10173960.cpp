void __userpurge sub_10173960(int a1@<ecx>, int a2@<edi>, __int64 a3, int a4, int a5)
{
  int v6; // eax
  void (__cdecl *v7)(int); // edx
  int v8[8]; // [esp+10h] [ebp-20h] BYREF

  if ( !*(_BYTE *)(a1 + 1233) && (_DWORD)a3 && sub_10171D30((_DWORD *)a3) != 28 )
  {
    sub_10165630(v8, a1, (int)"HL2Player.PickupItems");
    v6 = (*(int (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 72))(
           dword_106B31D0,
           *(_DWORD *)(a1 + 24),
           "HL2Player.PickupItems");
    sub_1023C580((int)v8, v6, 0, COERCE_INT(0.0), 0.0, a2);
    sub_1010DD80((_DWORD *)(a1 + 1128), a3, 0.0);
    v7 = *(void (__cdecl **)(int))(*(_DWORD *)a3 + 1640);
    if ( *(_BYTE *)(a1 + 1232) )
      v7(32);
    else
      v7(31);
    sub_100D6A00((void *)a1);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
  }
}
