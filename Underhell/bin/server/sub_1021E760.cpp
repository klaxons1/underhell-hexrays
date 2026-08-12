int __cdecl sub_1021E760(_DWORD *a1, char *String1)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // ebx
  char *v5; // eax

  v2 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v3 = 0;
      if ( (int)v2[1] > 0 )
        break;
LABEL_8:
      v2 = (_DWORD *)v2[3];
      if ( !v2 )
        goto LABEL_9;
    }
    v4 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(*v2 + v4 + 18) & 0x20) != 0 )
      {
        v5 = *(char **)(*v2 + v4 + 4);
        if ( String1 == v5 || !_stricmp(String1, v5) )
          return *(_DWORD *)(52 * v3 + *v2 + 28);
      }
      ++v3;
      v4 += 52;
      if ( v3 >= v2[1] )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_9:
    Msg("Failed to find function %s\n", String1);
    return 0;
  }
}
