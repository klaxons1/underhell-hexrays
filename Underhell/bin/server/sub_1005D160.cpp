bool __thiscall sub_1005D160(_DWORD *this, _DWORD *a2)
{
  char *v2; // edi
  int v3; // esi
  const char *v4; // esi

  v2 = (char *)this[200];
  if ( !v2 )
    v2 = (char *)String;
  if ( (char *)a2[65] == v2
    || (unsigned __int8)sub_100D6190(v2)
    || (char *)a2[23] == v2
    || (unsigned __int8)sub_100D6240(v2) )
  {
    return 1;
  }
  v3 = a2[699];
  if ( !v3 )
    return 0;
  v4 = *(const char **)(v3 + 4);
  if ( !v4 )
    v4 = String;
  return !_stricmp(v4, v2);
}
