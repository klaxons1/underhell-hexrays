char __thiscall sub_1013DF30(_DWORD *this, int a2, _DWORD *a3)
{
  const char *v4; // eax
  char *v6; // eax

  v4 = (const char *)this[213];
  if ( !v4 )
    v4 = String;
  if ( v4 == "!player" || !_stricmp(v4, "!player") )
    return (*(int (__thiscall **)(_DWORD *))(*a3 + 320))(a3);
  v6 = (char *)this[213];
  if ( !v6 )
    v6 = (char *)String;
  if ( (char *)a3[65] == v6 )
    return 1;
  else
    return sub_100D6190(a3, v6);
}
