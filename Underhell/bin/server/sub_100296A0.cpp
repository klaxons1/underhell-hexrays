BOOL __thiscall sub_100296A0(_DWORD *this)
{
  int v1; // eax
  char *v2; // eax

  v1 = this[699];
  if ( !v1 )
    return 0;
  v2 = *(char **)(v1 + 4);
  if ( !v2 || !*v2 )
    v2 = 0;
  return v2 == dword_10690428 && !(unsigned __int8)sub_100B1060(this);
}
