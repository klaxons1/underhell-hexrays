bool __thiscall sub_10084F60(int this, _DWORD *a2)
{
  _DWORD *v4; // ecx
  int v5; // eax

  if ( a2[15] == 1 )
    return 0;
  v4 = *(_DWORD **)(this + 8);
  if ( !v4 )
    return 1;
  if ( sub_100223E0(v4) == 2 && a2[15] != 3 )
    return 0;
  v5 = a2[15];
  if ( v5 == 3 && (*(_BYTE *)(this + 12) & 4) == 0 )
    return 0;
  if ( v5 == 2 && (*(_BYTE *)(this + 12) & 1) == 0 )
    return 0;
  return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 8) + 1744))(
           *(_DWORD *)(this + 8),
           *a2,
           a2[24]) == 0;
}
