int __stdcall sub_10120B20(int a1, int a2, char a3, char *Source, int a5, float a6, int a7)
{
  int result; // eax
  double v8; // st7
  int v9; // eax
  _DWORD *v10; // eax
  char Str[256]; // [esp+14h] [ebp-120h] BYREF
  _BYTE v12[32]; // [esp+114h] [ebp-20h] BYREF

  result = *((_DWORD *)off_103DC81C + 5);
  if ( result <= 1 && (result != 1 || *(_DWORD *)(*(_DWORD *)(dword_10437840 + 28) + 48)) )
  {
    v8 = 0.0;
    if ( a6 < 0.0 )
    {
      v9 = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)dword_104131AC + 60))(dword_104131AC, Source, 0);
      if ( v9 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413194 + 12))(dword_10413194, v9);
      else
        v8 = 2.0;
      a6 = v8;
    }
    sub_102282F0(Str, Source, 0x100u);
    _strlwr(Str);
    if ( strstr(Str, "\\") )
      sub_10120530(Str);
    sub_1015B880(v12);
    sub_1015B900(a1);
    sub_10038830((int)v12);
    if ( sub_1021F0F0(v12) > 0 )
    {
      v10 = (_DWORD *)sub_100B4090(&dword_1042FB78, "CHudCloseCaption");
      if ( v10 )
        sub_100C5840(v10, Str, a6, a3, 0);
    }
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
  }
  return result;
}
