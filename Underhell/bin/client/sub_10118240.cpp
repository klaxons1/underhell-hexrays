int __cdecl sub_10118240(_DWORD *a1, char *String1)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // ebx

  v2 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v3 = 0;
      if ( (int)v2[1] > 0 )
        break;
LABEL_7:
      v2 = (_DWORD *)v2[3];
      if ( !v2 )
        goto LABEL_8;
    }
    v4 = 0;
    while ( (*(_BYTE *)(*v2 + v4 + 18) & 0x20) == 0 || _stricmp(String1, *(const char **)(*v2 + v4 + 4)) )
    {
      ++v3;
      v4 += 52;
      if ( v3 >= v2[1] )
        goto LABEL_7;
    }
    return *(_DWORD *)(52 * v3 + *v2 + 28);
  }
  else
  {
LABEL_8:
    Msg("Failed to find function %s\n", String1);
    return 0;
  }
}
