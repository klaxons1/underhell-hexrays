int sub_1019F830()
{
  int result; // eax
  int v1; // eax
  int v2; // esi
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  int j; // edi
  unsigned int v8; // eax
  const char *v9; // eax
  int i; // [esp+Ch] [ebp-10h]
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    v1 = dword_10632630;
    v2 = 0;
    for ( i = 0; v1 != -1; v1 = *(_DWORD *)(v3 + dword_10632624 + 8) )
    {
      v3 = 12 * v1;
      v4 = *(_DWORD *)(*(_DWORD *)(12 * v1 + dword_10632624) + 44);
      v11 = 12 * v1;
      v12 = v4;
      if ( v4 )
      {
        v5 = 0;
        if ( v2 <= 0 )
          goto LABEL_9;
        while ( *(_DWORD *)(4 * v5) != v4 )
        {
          if ( ++v5 >= v2 )
            goto LABEL_9;
        }
        if ( v5 < 0 )
        {
LABEL_9:
          v6 = v2;
          if ( v2 + 1 > 0 )
          {
            sub_102ABFC0(v2 + 1);
            v2 = i;
            v4 = v12;
            v3 = v11;
          }
          i = ++v2;
          if ( v2 - v6 - 1 > 0 )
          {
            memcpy((void *)(4 * v6 + 4), (const void *)(4 * v6), 4 * (v2 - v6 - 1));
            v4 = v12;
            v3 = v11;
          }
          if ( 4 * v6 )
            *(_DWORD *)(4 * v6) = v4;
        }
      }
    }
    result = Msg("Map uses %d place names:\n", v2);
    for ( j = 0; j < v2; ++j )
    {
      v8 = *(_DWORD *)(4 * j);
      if ( v8 && v8 <= *(_DWORD *)(dword_106B8370 + 1064) )
        v9 = *(const char **)(*(_DWORD *)(dword_106B8370 + 1060) + 4 * v8 - 4);
      else
        v9 = 0;
      result = Msg("    %s\n", v9);
    }
  }
  return result;
}
