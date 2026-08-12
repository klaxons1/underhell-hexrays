const char *__thiscall sub_1012F410(_DWORD *this, char *String2)
{
  int v3; // ebx
  const char *v4; // esi
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  if ( (int)this[284] <= 0 )
    return 0;
  for ( i = 0; ; i += 432 )
  {
    v4 = (const char *)(i + this[281]);
    if ( v4 )
    {
      if ( !_stricmp(v4, String2) )
        break;
    }
    if ( ++v3 >= this[284] )
      return 0;
  }
  return v4;
}
