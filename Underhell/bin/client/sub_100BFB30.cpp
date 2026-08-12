char __stdcall sub_100BFB30(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int16 *i; // ebx
  int v3; // eax
  unsigned __int16 *v4; // esi
  unsigned __int16 v5; // ax
  unsigned __int16 *j; // edi
  unsigned __int16 v7; // dx
  bool v8; // zf
  unsigned __int16 v9; // ax
  char *k; // ecx
  char v12; // [esp+Ch] [ebp-400h] BYREF
  unsigned __int16 v13[256]; // [esp+20Ch] [ebp-200h] BYREF

  for ( i = a1; i; ++i )
  {
    v3 = *i;
    if ( !(_WORD)v3 )
      break;
    if ( v3 == 60 )
    {
      v4 = i + 1;
      v13[0] = 0;
      v5 = i[1];
      for ( j = v13; v5; ++j )
      {
        if ( v5 == 58 )
          break;
        if ( v5 == 62 )
          break;
        if ( isspace(v5) )
          break;
        v7 = *v4;
        v5 = v4[1];
        ++v4;
        *j = v7;
      }
      v8 = *v4 == 58;
      *j = 0;
      if ( v8 )
      {
        v9 = v4[1];
        ++v4;
        for ( k = &v12; v9; k += 2 )
        {
          if ( v9 == 62 )
            break;
          v9 = v4[1];
          ++v4;
        }
      }
      i += v4 - i;
      if ( !wcscmp(v13, a2) )
        return 1;
    }
  }
  return 0;
}
