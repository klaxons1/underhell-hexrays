int __userpurge sub_1028F2E0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  int v5; // eax
  _DWORD v7[8]; // [esp+8h] [ebp-20h] BYREF

  v5 = sub_100E8220(a2, "sprites/bubble.vmt");
  if ( a1[4] != v5 )
    a1[4] = v5;
  if ( a1[5] != 200 )
    a1[5] = 200;
  if ( a1[3] != 1 )
    a1[3] = 1;
  if ( a1[6] != 100 )
    a1[6] = 100;
  sub_10219BB0(v7);
  v7[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v7);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*a1 + 16))(a1, v7, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
}
