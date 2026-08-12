int __thiscall sub_10181C30(_DWORD *this, const char *a2, int a3)
{
  int result; // eax
  int i; // esi

  result = strcmp(a2, "all");
  if ( result )
  {
    if ( !strcmp(a2, "active") )
      result = this[12];
    else
      result = (*(int (__thiscall **)(_DWORD *, const char *))(*this + 16))(this, a2);
    if ( result )
      return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 4))(this, result, a3);
  }
  else
  {
    for ( i = 0; i < this[9]; ++i )
      result = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*this + 4))(this, *(_DWORD *)(this[6] + 4 * i), a3);
  }
  return result;
}
