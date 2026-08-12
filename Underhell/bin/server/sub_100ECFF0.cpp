int __thiscall sub_100ECFF0(void *this, char *String2)
{
  int v3; // esi
  const char *v4; // eax

  v3 = 0;
  if ( sub_100BF790((int)this) <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = (const char *)sub_100BF7F0((int)this, v3);
    if ( !_stricmp(v4, String2) )
      break;
    if ( ++v3 >= sub_100BF790((int)this) )
      return 0;
  }
  return v3;
}
