bool __thiscall sub_10239430(_DWORD *this)
{
  int v1; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // eax

  if ( *this == -1 )
    return 0;
  v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, *this);
  if ( !v1 )
    return 0;
  v2 = dword_1047CA70;
  v3 = *(_DWORD *)dword_1047CA70;
  v4 = sub_10278FB0();
  return (*(int (__thiscall **)(int, int, int))(v3 + 216))(v2, v1, v4) != 0;
}
