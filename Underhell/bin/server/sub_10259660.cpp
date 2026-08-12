int __cdecl sub_10259660(int a1, char *String2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // edx
  _DWORD *v7; // esi
  int v8; // edi
  int v9; // eax
  const char *v10; // edi
  const char *v11; // eax

  v5 = 0;
  if ( *(_DWORD *)(dword_106C765C + 48)
    && (*(char **)(a1 + 260) == &byte_106C75D8 || sub_100D6190((_DWORD *)a1, &byte_106C75D8)) )
  {
    v6 = *(_DWORD *)(dword_106C765C + 48);
    *(_DWORD *)(a1 + 236) |= 0xEu;
    dword_106C7618 = v6;
  }
  else
  {
    dword_106C7618 = 0;
  }
  v7 = (_DWORD *)sub_102625A0(a1, 0);
  if ( !v7 )
    return v5;
  while ( 1 )
  {
    v8 = sub_10255190(v7);
    if ( v8 )
      break;
LABEL_20:
    v7 = (_DWORD *)sub_102625A0(a1, v7);
    if ( !v7 )
      return v5;
  }
  if ( !sub_102595B0(v7, String2) )
  {
    if ( dword_106C7618 == 2 )
      Msg("IGNORED, outside transition volume.\n");
    goto LABEL_20;
  }
  if ( v5 < a5 )
  {
    v9 = dword_106C7618;
    *(_DWORD *)(a3 + 4 * v5) = v7;
    *(_DWORD *)(a4 + 4 * v5) = v8;
    if ( v9 )
    {
      if ( v9 == 2 )
      {
        Msg("ADDED.\n");
      }
      else
      {
        v10 = (const char *)v7[23];
        if ( !v10 )
          v10 = String;
        v11 = sub_100D6390(v7);
        Msg("ADDED %s (%s) to transition.\n", v10, v11);
      }
      v7[59] |= 6u;
    }
    ++v5;
    goto LABEL_20;
  }
  Warning("Too many entities across a transition!\n");
  return v5;
}
