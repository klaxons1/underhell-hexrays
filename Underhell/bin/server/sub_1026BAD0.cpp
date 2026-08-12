int __thiscall sub_1026BAD0(_DWORD *this, char *String2)
{
  int v3; // ebx
  int i; // edi
  const char *v5; // ecx
  const char *v6; // eax

  v3 = 0;
  if ( (int)this[9] <= 0 )
    return -1;
  for ( i = 0; ; i += 24 )
  {
    v5 = String2;
    if ( !String2 )
      v5 = String;
    v6 = *(const char **)(i + this[6]);
    if ( !v6 )
      v6 = String;
    if ( v6 == v5 || !_stricmp(v6, v5) )
      break;
    if ( ++v3 >= this[9] )
      return -1;
  }
  return v3;
}
