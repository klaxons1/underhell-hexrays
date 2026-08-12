int __thiscall sub_1003ECC0(_DWORD *this, char *String2)
{
  int v3; // esi
  const char *v4; // eax

  v3 = 0;
  if ( sub_1002A680(this) <= 0 )
    return -1;
  while ( 1 )
  {
    v4 = (const char *)sub_1002A6C0(this, v3);
    if ( !_stricmp(v4, String2) )
      break;
    if ( ++v3 >= sub_1002A680(this) )
      return -1;
  }
  return v3;
}
