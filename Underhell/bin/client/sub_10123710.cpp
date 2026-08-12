bool __thiscall sub_10123710(_WORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  const char *v5; // eax

  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, a2);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v3);
  if ( v4 && (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v4) != 2 )
  {
    v5 = (const char *)a2;
    if ( !a2 )
      v5 = "NULL";
    Msg("Setting CSprite to non-sprite model %s\n", v5);
  }
  return sub_1003B810(this, a2);
}
