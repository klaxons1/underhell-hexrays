int (*__stdcall sub_10245B30(_DWORD *a1, char a2))(void)
{
  int (*result)(void); // eax
  const char *v4; // eax
  int v5; // ebp
  int v6; // esi

  do
  {
    result = (int (*)(void))a1[6];
    if ( result )
    {
      v4 = (const char *)result();
      result = (int (*)(void))Msg("%s\n", v4);
    }
    v5 = a1[3];
    if ( v5 > 0 )
    {
      v6 = 0;
      do
      {
        result = (int (*)(void))Msg("  %s %s\n", *(const char **)(*a1 + v6 + 8), *(const char **)(*a1 + v6));
        v6 += 24;
        --v5;
      }
      while ( v5 );
    }
    if ( !a2 )
      break;
    a1 = (_DWORD *)a1[5];
  }
  while ( a1 );
  return result;
}
