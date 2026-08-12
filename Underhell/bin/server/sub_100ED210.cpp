int __thiscall sub_100ED210(void *this, char *String1)
{
  int v3; // esi
  const char *v4; // eax

  v3 = 0;
  if ( sub_100BF790((int)this) <= 0 )
    return -1;
  while ( 1 )
  {
    v4 = (const char *)sub_100BF7F0((int)this, v3);
    if ( !_stricmp(String1, v4) )
      break;
    if ( ++v3 >= sub_100BF790((int)this) )
      return -1;
  }
  return v3;
}
