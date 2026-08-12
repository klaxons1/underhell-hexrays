_DWORD *__thiscall sub_10352A60(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *result; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // ecx

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
    && (*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
    && ((v3 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this), *(char **)(v3 + 92) == "rpg_missile")
     || sub_100D6240((_DWORD *)v3, "rpg_missile")) )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v5 = (_DWORD *)v4;
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    result = a2;
    v7 = v5[146];
    *a2 = v5[145];
    v8 = v5[147];
    a2[1] = v7;
    a2[2] = v8;
  }
  else
  {
    result = a2;
    v9 = this[1046];
    *a2 = this[1045];
    v10 = this[1047];
    a2[1] = v9;
    a2[2] = v10;
  }
  return result;
}
