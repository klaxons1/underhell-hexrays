void __thiscall sub_102E8350(_DWORD *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  int *v7; // esi

  v3 = this[1];
  v4 = *(_DWORD *)(v3 + 5144);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v3 + 5144) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(v3 + 5144) & 0xFFF) + 1];
  if ( a2 )
  {
    v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  }
  else
  {
    if ( v5 )
      sub_1014EB10(v5, v3);
    v6 = -1;
  }
  v7 = (int *)(this[1] + 5144);
  if ( *v7 != v6 )
  {
    (*(void (__thiscall **)(int *, int *))*(v7 - 16))(v7 - 16, v7);
    *v7 = v6;
  }
}
