unsigned int __thiscall sub_10186830(char *this, int a2)
{
  const char *v3; // edi
  int v4; // edi
  int v5; // eax
  unsigned int result; // eax
  int v7; // edi
  char *v8; // eax
  int v9; // edi
  char *v10; // eax
  int v11; // eax
  _DWORD *v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax

  v3 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( !strcmp(v3, "game_newmap") )
  {
    v4 = *(_DWORD *)this;
    v5 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a2 + 32))(a2, "mapname", Locale);
    (*(void (__thiscall **)(char *, int))(v4 + 88))(this, v5);
    return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 196))(this);
  }
  if ( !strcmp(v3, "round_start") )
    return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 196))(this);
  if ( !strcmp(v3, "player_connect") )
  {
    result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "index", 0);
    if ( result <= 0x10 )
    {
      v7 = (int)&this[320 * result + 288];
      *(_DWORD *)v7 = result;
      *(_DWORD *)(v7 + 4) = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "userid", 0);
      v8 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
      sub_102282F0((char *)(v7 + 16), v8, (size_t)"name");
      result = (unsigned int)memset((void *)(v7 + 80), 0, 0xF0u);
      *(_DWORD *)(v7 + 48) = 0;
      *(_DWORD *)(v7 + 52) = 0;
    }
  }
  else if ( !strcmp(v3, "player_info") )
  {
    result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "index", 0);
    if ( result <= 0x10 )
    {
      v9 = (int)&this[320 * result + 288];
      *(_DWORD *)v9 = result;
      *(_DWORD *)(v9 + 4) = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "userid", 0);
      v10 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
      return sub_102282F0((char *)(v9 + 16), v10, (size_t)"name");
    }
  }
  else if ( sub_10001000(v3, "player_team") )
  {
    if ( sub_10001000(v3, "player_death") )
    {
      if ( sub_10001000(v3, "player_spawn") )
      {
        result = sub_10001000(v3, "player_disconnect");
        if ( !result )
        {
          v18 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "userid", 0);
          result = (unsigned int)sub_101858D0(this, v18);
          if ( result )
            return (unsigned int)memset((void *)result, 0, 0x140u);
        }
      }
      else
      {
        v17 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "userid", 0);
        result = (unsigned int)sub_101858D0(this, v17);
        if ( result )
        {
          *(_DWORD *)(result + 52) = 100;
          return (unsigned int)memset((void *)(result + 80), 0, 0xF0u);
        }
      }
    }
    else
    {
      v16 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "userid", 0);
      result = (unsigned int)sub_101858D0(this, v16);
      if ( result )
      {
        *(_DWORD *)(result + 52) = 0;
        return (unsigned int)memset((void *)(result + 80), 0, 0xF0u);
      }
    }
  }
  else
  {
    v11 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "userid", 0);
    result = (unsigned int)sub_101858D0(this, v11);
    v12 = (_DWORD *)result;
    if ( result )
    {
      v13 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "team", 0);
      v12[12] = v13;
      v14 = *(_DWORD *)&this[4 * (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 168))(this, v13) + 5912];
      v15 = v12[12];
      v12[2] = v14;
      result = *(_DWORD *)&this[4 * (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 168))(this, v15) + 5784];
      v12[3] = result;
    }
  }
  return result;
}
