int __thiscall sub_101E2CB0(_DWORD *this, char *String2)
{
  int v3; // ebx
  int i; // ebp
  int v5; // esi
  const char *v6; // eax

  v3 = 0;
  if ( (int)this[50] <= 0 )
    return 0;
  for ( i = 0; ; i += 24 )
  {
    v5 = i + this[47];
    if ( v5 )
    {
      v6 = (const char *)sub_1022D040(v5);
      if ( !_stricmp(v6, String2) )
        break;
    }
    if ( ++v3 >= this[50] )
      return 0;
  }
  return v5;
}
