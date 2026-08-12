char __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  int (*v3)(void); // eax
  int (*v4)(void); // ebx
  PVOID *v5; // edi
  void (*v6)(void); // ebx
  int (*v7)(void); // ebx
  int (*v9)(void); // [esp+10h] [ebp-30h]
  int (*v10)(void); // [esp+18h] [ebp-28h]
  int (*v11)(void); // [esp+1Ch] [ebp-24h]
  int (**j)(void); // [esp+20h] [ebp-20h]
  int (**i)(void); // [esp+24h] [ebp-1Ch]

  _lock(8);
  LOBYTE(v3) = 1;
  if ( dword_10701194 != 1 )
  {
    dword_10701190 = 1;
    LOBYTE(v3) = a3;
    byte_1070118C = a3;
    if ( !a2 )
    {
      v3 = (int (*)(void))DecodePointer(dword_10709CB0);
      v4 = v3;
      v9 = v3;
      if ( v3 )
      {
        v3 = (int (*)(void))DecodePointer(dword_10709CAC);
        v5 = (PVOID *)v3;
        v11 = v4;
        v10 = v3;
        while ( --v5 >= (PVOID *)v4 )
        {
          v3 = (int (*)(void))_encoded_null();
          if ( *v5 != v3 )
          {
            if ( v5 < (PVOID *)v4 )
              break;
            v6 = (void (*)(void))DecodePointer(*v5);
            *v5 = (PVOID)_encoded_null();
            v6();
            v7 = (int (*)(void))DecodePointer(dword_10709CB0);
            v3 = (int (*)(void))DecodePointer(dword_10709CAC);
            if ( v11 != v7 || v10 != v3 )
            {
              v11 = v7;
              v9 = v7;
              v10 = v3;
              v5 = (PVOID *)v3;
            }
            v4 = v9;
          }
        }
      }
      for ( i = (int (**)(void))&unk_1047DC64; i < &dword_1047DC70; ++i )
      {
        v3 = *i;
        if ( *i )
          LOBYTE(v3) = v3();
      }
    }
    for ( j = (int (**)(void))&unk_1047DC74; j < dword_1047DC78; ++j )
    {
      v3 = *j;
      if ( *j )
        LOBYTE(v3) = v3();
    }
  }
  if ( a3 )
    LOBYTE(v3) = _unlock(8);
  if ( !a3 )
  {
    dword_10701194 = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
  return (char)v3;
}
