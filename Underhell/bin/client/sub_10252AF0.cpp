int __thiscall sub_10252AF0(_DWORD *this)
{
  int v2; // esi
  int v3; // eax

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 100))(dword_1047CA68);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 104))(dword_1047CA68);
  if ( v2 == v3 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 128))(dword_1047CA68, this[231]);
  this[231] = v2;
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 128))(dword_1047CA68, v3);
}
