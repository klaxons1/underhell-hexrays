bool __cdecl sub_100FAD00(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // edi

  if ( *a1 != *a2 )
    return *a1 > *a2;
  if ( a1[1] == -1 || *((_DWORD *)off_103DCD74 + 4 * (a1[1] & 0xFFF) + 2) != a1[1] >> 12 )
    v2 = 0;
  else
    v2 = *((_DWORD *)off_103DCD74 + 4 * (a1[1] & 0xFFF) + 1);
  v3 = v2 + 8;
  v4 = a2[1];
  if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (a2[1] & 0xFFF) + 2) != v4 >> 12 )
    v5 = 0;
  else
    v5 = *((_DWORD *)off_103DCD74 + 4 * (a2[1] & 0xFFF) + 1);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 8) + 36))(v5 + 8);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3) > v6;
}
