int __thiscall sub_102DBD10(void *this, int a2)
{
  const char **v3; // ecx
  const char *v4; // eax

  v3 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      return (*(int (__thiscall **)(void *, const char *, _DWORD))(*(_DWORD *)this + 1440))(this, String, 0);
  }
  else
  {
    v4 = sub_1010D460((int)v3);
  }
  return (*(int (__thiscall **)(void *, const char *, _DWORD))(*(_DWORD *)this + 1440))(this, v4, 0);
}
