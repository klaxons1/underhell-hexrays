void __cdecl sub_10260430(int a1, int a2)
{
  int v2; // eax
  _DWORD v3[8]; // [esp+18h] [ebp-20h] BYREF

  if ( 1.0 != *(float *)(a1 + 44) )
  {
    sub_10219BB0(v3);
    v3[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v3);
    v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
           dword_106B31D0,
           *(_DWORD *)(*(_DWORD *)(a1 + 76) + 24));
    ((void (__stdcall *)(_DWORD *, _DWORD, int, int, int))(*off_1065C5EC)[28])(v3, 0.0, a1 + 12, a2, v2);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
  }
}
