int __thiscall sub_100CFE60(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v6; // eax
  const char *v7; // esi
  const char *v8; // eax

  v3 = *(_DWORD *)(a2 + 16);
  if ( (v3 & 0x400) != 0 && (v3 & 1) != 0 )
  {
    if ( *(_DWORD *)a2 == 14 )
    {
      LOBYTE(a2) = atoi(*(const char **)(a2 + 4)) != 0;
      return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 1396))(this, a3, a2);
    }
    if ( *(_DWORD *)a2 == 42 )
    {
      v6 = sub_10274700(*(char **)(a2 + 4));
      if ( v6 != -1 )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132))(this, v6, 0.0);
    }
  }
  v7 = (const char *)this[23];
  if ( !v7 )
    v7 = String;
  v8 = *(const char **)(a3 + 92);
  if ( !v8 )
    v8 = String;
  return DevWarning(2, "Unhandled animation event %d from %s --> %s\n", *(_DWORD *)a2, v8, v7);
}
