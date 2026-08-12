int __thiscall sub_1017E9E0(_BYTE *this, int a2)
{
  int result; // eax

  result = strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2), "game_newmap");
  if ( !result )
    this[60] = 1;
  return result;
}
