const char *__stdcall sub_10182BD0(char *String2, int a2)
{
  _DWORD *v2; // esi

  v2 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, a2, 0, 0);
  if ( !v2 )
    return 0;
  while ( (char *)v2[23] != "game_team_master" && !sub_100D6240(v2, "game_team_master") )
  {
    v2 = sub_1012BF20(&dword_1069E3E0, (int)v2, String2, 0, a2, 0, 0);
    if ( !v2 )
      return 0;
  }
  return sub_100D8800(v2);
}
