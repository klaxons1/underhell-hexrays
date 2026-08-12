int __thiscall sub_10081930(int this, int a2)
{
  int v3; // esi
  _BYTE v5[32]; // [esp+8h] [ebp-20h] BYREF

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 908))(*(_DWORD *)(this + 12));
  sub_10248C80("LevelInit");
  if ( *(_DWORD *)(this + 16) )
    sub_100BACF0(a2);
  v3 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
         dword_104131A8,
         "game_newmap",
         0);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v3 + 48))(v3, "mapname", a2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, v3);
  }
  if ( dword_103DD02C == -1 )
    dword_103DD02C = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA74 + 84))(dword_1047CA74);
  sub_1015BB00(v5);
  (*(void (__thiscall **)(int, _BYTE *, _DWORD, int))(*(_DWORD *)dword_10413194 + 40))(dword_10413194, v5, 0, 1);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
}
