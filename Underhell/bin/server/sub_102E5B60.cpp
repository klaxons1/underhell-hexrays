int __thiscall sub_102E5B60(_DWORD *this, int a2, _DWORD *a3, float a4)
{
  int v6; // ebx
  int v7; // eax
  _DWORD v9[8]; // [esp+5Ch] [ebp-20h] BYREF
  int v10; // [esp+88h] [ebp+Ch]

  sub_10219BB0(v9);
  v9[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v9);
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a3[6]);
  v10 = (int)*off_1065C5EC;
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, int))(*a3 + 576))(
         a3,
         this[302],
         0,
         1,
         30,
         LODWORD(a4),
         16.0,
         4.0,
         0,
         8.0,
         255,
         255,
         255,
         255,
         16);
  (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, _DWORD, int, int, int))(v10 + 8))(
    off_1065C5EC,
    v9,
    0.0,
    0,
    a2,
    v6,
    v7);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
}
