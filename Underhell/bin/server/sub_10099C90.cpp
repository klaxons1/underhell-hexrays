char __thiscall sub_10099C90(_DWORD *this, int a2)
{
  char *v2; // eax
  _DWORD *v3; // edi
  const char *v4; // eax
  char result; // al

  v2 = (char *)*(this - 147);
  v3 = this - 200;
  if ( *(char **)(a2 + 260) == v2 )
    return sub_10099C00((int)v3, 0, 0.0);
  if ( !v2 )
    v2 = (char *)String;
  if ( (unsigned __int8)sub_100D6190(v2) )
    return sub_10099C00((int)v3, 0, 0.0);
  v4 = (const char *)v3[53];
  if ( *(const char **)(a2 + 92) == v4 )
    return sub_10099C00((int)v3, 0, 0.0);
  if ( !v4 )
    v4 = String;
  if ( (unsigned __int8)sub_100D6240(v4) )
    return sub_10099C00((int)v3, 0, 0.0);
  result = sub_10099360(v3, a2);
  if ( result )
    return sub_10099C00((int)v3, 0, 0.0);
  return result;
}
