int __cdecl sub_10008AD0(int *a1, char *String1)
{
  int v3; // ecx
  int v4; // edi
  int i; // esi

  if ( !a1 )
    return -1;
  v3 = *a1;
  v4 = 0;
  if ( *(int *)(*a1 + 232) <= 0 )
    return -1;
  for ( i = 0;
        sub_10227C40(String1, (char *)(v3 + i + *(_DWORD *)(v3 + 236) + *(_DWORD *)(v3 + i + *(_DWORD *)(v3 + 236))));
        i += 16 )
  {
    v3 = *a1;
    if ( ++v4 >= *(_DWORD *)(*a1 + 232) )
      return -1;
  }
  return v4;
}
