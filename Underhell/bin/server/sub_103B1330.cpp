bool __thiscall sub_103B1330(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edx
  int v9; // esi

  v3 = *(_DWORD *)(this + 28);
  if ( v3 == -1 )
    return 1;
  v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 28) & 0xFFF) + 1];
  if ( v4[1] != v3 >> 12 || !*v4 )
    return 1;
  if ( *(_BYTE *)(this + 76) )
    return 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 368))(v6) )
    return 1;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2);
  v8 = *(_DWORD *)(this + 28);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 28) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(this + 28) & 0xFFF) + 1];
  return v9 != (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 368))(v7);
}
