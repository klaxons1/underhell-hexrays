bool __thiscall sub_10034700(_DWORD *this)
{
  int v2; // eax

  v2 = this[23];
  return v2
      && (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v2) == 1
      && *(_BYTE *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, this[23]) == 42;
}
