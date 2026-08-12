_DWORD *__thiscall sub_100B0F90(_DWORD *this, char *String1)
{
  _DWORD *v2; // esi
  const char *v3; // ecx
  const char *v4; // eax

  v2 = (_DWORD *)*this;
  if ( !*this )
    return 0;
  while ( 1 )
  {
    v3 = (const char *)v2[1];
    if ( !v3 )
      v3 = String;
    v4 = String1;
    if ( !String1 )
      v4 = String;
    if ( v4 == v3 || !_stricmp(v4, v3) )
      break;
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      return 0;
  }
  return v2;
}
