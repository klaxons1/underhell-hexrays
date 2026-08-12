int __stdcall sub_10015790(const char *a1)
{
  int v1; // eax
  int v2; // eax

  v1 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, a1);
  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v1);
  if ( v2 && (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v2) != 2 )
    Msg("Setting CBeam to non-sprite model %s\n", a1);
  return sub_1003B810(a1);
}
