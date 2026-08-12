void __thiscall sub_10179540(int this, _DWORD *a2)
{
  const char *v3; // esi
  _BYTE *v4; // esi
  __int64 v5; // [esp-8h] [ebp-30h]
  _DWORD v6[8]; // [esp+8h] [ebp-20h] BYREF

  if ( !*(_BYTE *)(this + 800) && *(_DWORD *)(this + 804) )
  {
    HIDWORD(v5) = this;
    LODWORD(v5) = *a2;
    sub_1010DD80((_DWORD *)(this + 808), v5, 0.0);
    v3 = *(const char **)(this + 804);
    if ( !v3 )
      v3 = String;
    if ( !sub_104292D0(v3, "ACHIEVEMENT_EVENT_", 18) )
    {
      v4 = v3 + 18;
      if ( v4 )
      {
        if ( *v4 )
        {
          sub_100E8830(v6);
          (*(void (__thiscall **)(int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B3CDC + 492))(dword_106B3CDC, v6, v4);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
        }
      }
    }
  }
}
