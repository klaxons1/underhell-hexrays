void *__thiscall sub_10021640(void *this, char *String1, int a3)
{
  int v5; // eax
  int i; // esi
  _DWORD v7[32]; // [esp+8h] [ebp-80h]

  if ( !_stricmp(String1, "!player") )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      return (void *)sub_10261B20();
    return 0;
  }
  if ( !_stricmp(String1, "!enemy") )
  {
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
      return (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    return 0;
  }
  if ( !_stricmp(String1, "!self") || !_stricmp(String1, "!target1") )
    return this;
  if ( !_stricmp(String1, "!nearestfriend") || !_stricmp(String1, "!friend") )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      return (void *)sub_10261B20();
    return 0;
  }
  else
  {
    if ( !_stricmp(String1, "self") )
    {
      if ( ++dword_106910CC < 5 )
        DevMsg("ERROR: \"self\" is no longer used, use \"!self\" in vcd instead!\n");
      return this;
    }
    if ( !_stricmp(String1, "Player") )
    {
      if ( ++dword_106910C8 < 5 )
        DevMsg("ERROR: \"player\" is no longer used, use \"!player\" in vcd instead!\n");
      if ( *(int *)(dword_106B31C8 + 20) <= 1 )
        return (void *)sub_10261B20();
      return 0;
    }
    v5 = 0;
    for ( i = 0; i < 32; ++i )
    {
      v5 = sub_1012BF20(v5, String1, 0, 0, 0, a3);
      if ( !v5 )
        break;
      v7[i] = v5;
    }
    if ( i <= 0 )
      return 0;
    return (void *)v7[RandomInt(0, i - 1)];
  }
}
