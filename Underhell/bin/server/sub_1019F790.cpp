int __cdecl sub_1019F790(int *a1)
{
  int result; // eax
  char *v2; // eax
  unsigned int v3; // esi
  const char *v4; // eax

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    if ( *a1 == 1 )
    {
      return sub_1019F5E0((_DWORD *)dword_106B8370);
    }
    else
    {
      v2 = (char *)String;
      if ( *a1 > 1 )
        v2 = (char *)a1[259];
      v3 = sub_1019DC60((_DWORD *)dword_106B8370, v2);
      if ( v3 )
      {
        if ( v3 > *(_DWORD *)(dword_106B8370 + 1064) )
          v4 = 0;
        else
          v4 = *(const char **)(*(_DWORD *)(dword_106B8370 + 1060) + 4 * v3 - 4);
        result = Msg("Current place set to '%s'\n", v4);
        *(_DWORD *)(dword_106B8370 + 1068) = v3;
      }
      else
      {
        return Msg("Ambiguous\n");
      }
    }
  }
  return result;
}
