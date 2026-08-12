BOOL __thiscall sub_1004CAF0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  bool v5; // zf
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax

  if ( *(_DWORD *)(this + 28) == 3
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1364))(*(_DWORD *)(this + 4)) == this
    && *(_BYTE *)(this + 36)
    || *(_DWORD *)(this + 32) == *(_DWORD *)(this + 28) )
  {
    v2 = *(_DWORD *)(this + 20);
    if ( v2 == -1 )
      return 0;
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v4 || !*v3 )
      return 0;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v4 )
      v5 = *(_BYTE *)(*v3 + 853) == 0;
    else
      v5 = MEMORY[0x355] == 0;
  }
  else
  {
    v6 = *(_DWORD *)(this + 24);
    if ( v6 == -1 )
      return 0;
    v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] != v8 || !*v7 )
      return 0;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] == v8 )
      v9 = *v7;
    else
      v9 = 0;
    v5 = *(_BYTE *)(v9 + 821) == 0;
  }
  return !v5;
}
