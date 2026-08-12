int __thiscall sub_10182520(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  const char *v3; // eax
  char *v4; // ebx
  void *v5; // edi
  int v6; // esi
  int v7; // eax
  int result; // eax

  v2 = this;
  v3 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( !strcmp(v3, "hltv_status") )
  {
    v2[12] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "clients", 0);
    v2[12] -= (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "proxies", 0);
  }
  else if ( !strcmp(v3, "server_spawn") )
  {
    v4 = (char *)(v2 - 64);
    v5 = (void *)(*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a2 + 32))(a2, "hostname", Locale);
    v6 = sub_10239950("ServerName", 0);
    if ( v6 )
    {
      if ( sub_10229D00(32) )
        v7 = sub_1022B0E0((int)"SetText", "text", v5);
      else
        v7 = 0;
      (*(void (__thiscall **)(char *, int, int, _DWORD))(*(_DWORD *)v4 + 132))(v4, v6, v7, 0.0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 212))(v6);
    }
    v2 = this;
  }
  result = (*(int (__thiscall **)(_DWORD *))(*(v2 - 64) + 128))(v2 - 64);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(_DWORD *))(*(v2 - 1) + 16))(v2 - 1);
  return result;
}
