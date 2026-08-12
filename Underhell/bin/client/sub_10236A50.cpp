bool __thiscall sub_10236A50(int (__thiscall ***this)(void *, int))
{
  int v2; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // eax

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 72))(dword_1047CA68);
  if ( !v2 )
    return 1;
  v4 = dword_1047CA70;
  v5 = *(_DWORD *)dword_1047CA70;
  v6 = (**this)(this, v2);
  return (*(unsigned __int8 (__thiscall **)(int, int))(v5 + 88))(v4, v6) != 0;
}
