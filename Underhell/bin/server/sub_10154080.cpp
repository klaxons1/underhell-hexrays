void sub_10154080()
{
  const char *v0; // eax
  int v1; // eax
  int v2; // esi
  const char *v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  const char *v7; // eax
  _BYTE v8[2048]; // [esp+8h] [ebp-800h] BYREF

  if ( (dword_106B3504 & 0x1000) != 0 )
  {
    v0 = "FCVAR_NEVER_AS_STRING";
  }
  else
  {
    v0 = *(const char **)(dword_106B350C + 36);
    if ( !v0 )
      v0 = String;
  }
  v1 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 24))(
         dword_106B31D8 + 4,
         v0,
         "GAME");
  v2 = v1;
  if ( v1 <= 0 || (unsigned int)v1 >= 0x7FF )
  {
    if ( (dword_106B3504 & 0x1000) != 0 )
    {
      v7 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v7 = *(const char **)(dword_106B350C + 36);
      if ( !v7 )
        v7 = String;
    }
    DevMsg("Invalid file size for %s\n", v7);
  }
  else
  {
    if ( (dword_106B3504 & 0x1000) != 0 )
    {
      v3 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v3 = *(const char **)(dword_106B350C + 36);
      if ( !v3 )
        v3 = String;
    }
    v4 = (*(int (__thiscall **)(int, const char *, const char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
           dword_106B31D8 + 4,
           v3,
           "rb",
           "GAME");
    v5 = v4;
    if ( v4 )
    {
      (**(void (__thiscall ***)(int, _BYTE *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, v8, v2, v4);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, v5);
      v6 = dword_106B3238;
      v8[v2] = 0;
      (*(void (__thiscall **)(int, int, const char *, int, _BYTE *))(*(_DWORD *)v6 + 32))(v6, 1, "motd", v2 + 1, v8);
    }
  }
}
