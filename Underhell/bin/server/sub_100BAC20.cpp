int __cdecl sub_100BAC20(int *a1, char *String2)
{
  int v3; // eax
  int v4; // esi
  int i; // edi
  const char *v6; // ecx

  if ( !a1 )
    return -1;
  v3 = *a1;
  v4 = 0;
  if ( *(int *)(*a1 + 172) <= 0 )
    return -1;
  for ( i = 0; ; i += 12 )
  {
    v6 = (const char *)(v3 + i + *(_DWORD *)(v3 + 176));
    if ( v6 )
    {
      if ( !_stricmp(&v6[*(_DWORD *)v6], String2) )
        break;
    }
    v3 = *a1;
    if ( ++v4 >= *(_DWORD *)(*a1 + 172) )
      return -1;
  }
  return v4;
}
