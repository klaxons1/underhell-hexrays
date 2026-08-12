int __thiscall sub_100E9840(_DWORD *this, char *String2)
{
  int v3; // ebx
  int i; // edi
  const char *v5; // eax

  v3 = 0;
  if ( (int)this[5] <= 0 )
    return -1;
  for ( i = 0; ; i += 24 )
  {
    v5 = (const char *)sub_101F8D90(*(_DWORD *)(i + this[2] + 20) + 16);
    if ( !_stricmp(v5, String2) )
      break;
    if ( ++v3 >= this[5] )
      return -1;
  }
  return v3;
}
