bool __thiscall sub_10085110(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v3 = this[1];
  if ( a2 > v3 || a3 > v3 )
  {
    DevMsg("IsConnected called with invalid node IDs!\n");
    return 0;
  }
  if ( a2 == a3 )
    return 1;
  v5 = this[2];
  v6 = *(_DWORD *)(*(_DWORD *)(v5 + 4 * a2) + 68);
  v7 = *(_DWORD *)(*(_DWORD *)(v5 + 4 * a3) + 68);
  if ( v6 == 1 || v7 == 1 )
    return 0;
  if ( v6 == 3 || v7 == 3 )
    return 1;
  return v6 == v7;
}
