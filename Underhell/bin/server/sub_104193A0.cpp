int __thiscall sub_104193A0(char *this, int a2, char *String2)
{
  int v3; // ebx
  int *v4; // ebp
  int i; // edi
  int v6; // esi
  const char *v7; // eax
  char *v9; // [esp+14h] [ebp+4h]

  v3 = 0;
  v4 = (int *)&this[20 * a2 + 240];
  if ( *v4 <= 0 )
    return 0;
  v9 = &this[20 * a2 + 228];
  for ( i = 0; ; i += 28 )
  {
    v6 = i + *(_DWORD *)v9;
    if ( v6 )
    {
      v7 = (const char *)sub_104310A0(i + *(_DWORD *)v9);
      if ( !_stricmp(v7, String2) )
        break;
    }
    if ( ++v3 >= *v4 )
      return 0;
  }
  return v6;
}
