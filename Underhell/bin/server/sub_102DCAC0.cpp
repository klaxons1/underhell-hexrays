_DWORD *sub_102DCAC0()
{
  _DWORD *i; // esi
  _DWORD *result; // eax
  int j; // esi

  for ( i = sub_1012BC90(&dword_1069E3E0, 0, "scripted_sequence");
        i;
        i = sub_1012BC90(&dword_1069E3E0, (int)i, "scripted_sequence") )
  {
    (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD, _DWORD))(*i + 148))(i, "ScriptPlayerDeath", 0, 0, 0);
  }
  result = sub_1012BC90(&dword_1069E3E0, 0, "logic_choreographed_scene");
  for ( j = (int)result; result; j = (int)result )
  {
    (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)j + 148))(
      j,
      "ScriptPlayerDeath",
      0,
      0,
      0);
    result = sub_1012BC90(&dword_1069E3E0, j, "logic_choreographed_scene");
  }
  return result;
}
