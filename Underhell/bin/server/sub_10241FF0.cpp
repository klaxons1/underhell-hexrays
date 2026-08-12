int __thiscall sub_10241FF0(void *this, const char *a2)
{
  int v3; // eax
  int v4; // eax
  const char *v5; // eax

  v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, a2);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v3);
  if ( v4 && (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 36))(dword_106B31F0, v4) != 2 )
  {
    v5 = a2;
    if ( !a2 )
      v5 = "NULL";
    Msg("Setting CSprite to non-sprite model %s\n", v5);
  }
  return sub_10264670(this, a2);
}
