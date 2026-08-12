bool __thiscall sub_10393E10(_DWORD *this)
{
  int v2; // eax
  char *v3; // eax

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 220))(this) != 3 )
    return 0;
  v2 = this[699];
  if ( !v2 )
    return 0;
  v3 = *(char **)(v2 + 4);
  if ( !v3 || !*v3 )
    v3 = 0;
  return v3 == dword_10690428;
}
