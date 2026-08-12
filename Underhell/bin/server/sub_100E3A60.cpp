int __thiscall sub_100E3A60(_DWORD *this, char *Source)
{
  int result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // eax
  char Destination[256]; // [esp+40h] [ebp-1E4h] BYREF
  int v10[42]; // [esp+140h] [ebp-E4h] BYREF
  int v11[8]; // [esp+1E8h] [ebp-3Ch] BYREF
  bool (__cdecl *v12[7])(int, int); // [esp+208h] [ebp-1Ch] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this + 212))(this);
  v4 = result;
  if ( result )
  {
    sub_10067CD0(v12);
    sub_10067DE0((int)v12, (void *)"concept", Source, 5.0);
    (*(void (__thiscall **)(_DWORD *, bool (__cdecl **)(int, int)))(*this + 452))(this, v12);
    v5 = sub_10261B20();
    if ( v5 )
      (*(void (__thiscall **)(int, bool (__cdecl **)(int, int)))(*(_DWORD *)v5 + 1540))(v5, v12);
    sub_10065740((char *)v10);
    if ( (*(unsigned __int8 (__thiscall **)(int, bool (__cdecl **)(int, int), int *, _DWORD))(*(_DWORD *)v4 + 4))(
           v4,
           v12,
           v10,
           0) )
    {
      sub_10065130((char *)v10, Destination, 0x100u);
      switch ( LOBYTE(v10[0]) )
      {
        case 1u:
          sub_1023C380((int)Destination, 0.0, 0);
          break;
        case 2u:
          v6 = sub_102382E0(Destination);
          if ( v6 != -1 )
          {
            sub_100D78A0(v11, (int)this, 0.80000001);
            v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
            v8 = sub_100651B0(v10);
            sub_100E3150((int)v11, v7, 2, v6, 1.0, v8, 0, 100, 0, 0, 1, 0.0);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
          }
          break;
        case 3u:
          sub_102286F0(0, Destination, 0, 0.0, 0, 0, 0, 0);
          break;
      }
    }
    sub_10068150(v10);
    return sub_10067DD0((int)v12);
  }
  return result;
}
