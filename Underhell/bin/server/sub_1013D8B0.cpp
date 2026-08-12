char __thiscall sub_1013D8B0(int this, int a2, int a3)
{
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // eax

  v4 = sub_100D7680(a2);
  v5 = v4;
  if ( !v4 )
    return 1;
  v6 = *(_DWORD **)(v4 + 2796);
  if ( !v6 || *(int *)(this + 864) <= 0 )
    return 1;
  v8 = 0;
  v9 = sub_100B1560(v6, &a2, 1);
  if ( !v9 )
    return *(_BYTE *)(this + 800) == 0;
  while ( 1 )
  {
    if ( v9 != v5 )
    {
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 368))(v9);
      if ( v10 == a3 && ++v8 >= *(_DWORD *)(this + 864) )
        break;
    }
    v9 = sub_100B1630(*(_DWORD **)(v5 + 2796), &a2, 1);
    if ( !v9 )
      return *(_BYTE *)(this + 800) == 0;
  }
  return *(_BYTE *)(this + 800) != 0;
}
