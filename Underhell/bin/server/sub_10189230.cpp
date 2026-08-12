_DWORD *__stdcall sub_10189230(int a1)
{
  _DWORD *result; // eax
  int i; // esi

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1596))(a1, 1);
  result = sub_1012BC90(&dword_1069E3E0, 0, "game_player_equip");
  for ( i = (int)result; result; i = (int)result )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)i + 380))(i, a1);
    result = sub_1012BC90(&dword_1069E3E0, i, "game_player_equip");
  }
  return result;
}
