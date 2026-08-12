int __cdecl sub_1019EA00(int a1)
{
  int result; // eax
  int v2; // edi
  char *v3; // esi
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  int v7; // edx

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)a1 == 3 )
    {
      v2 = sub_1019DC60((_DWORD *)dword_106B8370, *(char **)(a1 + 1036));
      if ( *(int *)a1 > 2 )
        v3 = *(char **)(a1 + 1040);
      else
        v3 = (char *)String;
      result = sub_1019DC60((_DWORD *)dword_106B8370, v3);
      if ( v2 && result )
      {
        v4 = dword_10632630;
        if ( dword_10632630 != -1 )
        {
          v5 = dword_10632624;
          do
          {
            v6 = 12 * v4;
            v7 = *(_DWORD *)(v6 + v5);
            if ( *(_DWORD *)(v7 + 44) == v2 )
            {
              *(_DWORD *)(v7 + 44) = result;
              v5 = dword_10632624;
            }
            v4 = *(_DWORD *)(v6 + v5 + 8);
          }
          while ( v4 != -1 );
        }
      }
      else
      {
        return Msg("Ambiguous\n");
      }
    }
    else
    {
      return Msg("Usage: nav_place_replace <OldPlace> <NewPlace>\n");
    }
  }
  return result;
}
