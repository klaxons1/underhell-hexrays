int __thiscall sub_1024EC70(void *this, char *String1)
{
  if ( !_stricmp(String1, "Close") )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 880))(this);
  if ( !_stricmp(String1, "CloseModal") )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 884))(this);
  if ( !_stricmp(String1, "Minimize") )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 996))(this);
  if ( !_stricmp(String1, "MinimizeToSysTray") )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1000))(this);
  return sub_10237610(this, (int)String1);
}
