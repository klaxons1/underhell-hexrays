char __stdcall sub_1010BFF0(_DWORD *a1)
{
  int v1; // eax
  int v2; // edi
  int v3; // esi
  _DWORD *i; // edx
  int v5; // eax
  int v6; // ecx

  v1 = a1[2];
  v2 = *(unsigned __int16 *)(v1 + 16);
  v3 = 0;
  if ( !*(_WORD *)(v1 + 16) )
    return 1;
  for ( i = (_DWORD *)(*a1 + 16); ; i += 6 )
  {
    v5 = i[1];
    v6 = 0;
    if ( v5 )
    {
      do
      {
        v5 = *(_DWORD *)(v5 + 24);
        ++v6;
      }
      while ( v5 );
      if ( v6 )
        break;
    }
    if ( *i )
      break;
    if ( ++v3 >= v2 )
      return 1;
  }
  return 0;
}
