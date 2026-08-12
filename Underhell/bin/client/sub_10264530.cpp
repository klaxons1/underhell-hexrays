int __thiscall sub_10264530(_DWORD *this, char *String2)
{
  int v3; // edi
  const char *v4; // eax

  v3 = this[75];
  if ( v3 == -1 )
    return -1;
  while ( 1 )
  {
    v4 = (const char *)sub_10229A00(**(_DWORD ***)(12 * v3 + this[72]));
    if ( !_stricmp(v4, String2) )
      break;
    v3 = *(_DWORD *)(12 * v3 + this[72] + 8);
    if ( v3 == -1 )
      return -1;
  }
  return v3;
}
