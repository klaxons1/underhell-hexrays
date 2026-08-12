char __thiscall sub_100A8BC0(_DWORD *this, int *a2)
{
  int v2; // ecx
  int v4; // esi
  bool v5; // bl
  int v6; // eax

  v2 = this[232];
  if ( v2 == 2 )
    return 1;
  v4 = *a2;
  if ( !*a2 )
    return 1;
  v5 = v2 == 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2[1] + 288))(a2[1]);
  if ( !v6 )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v4 + 548))(v4, v6, 16449, 0) )
  {
    if ( !v5 )
      return 1;
  }
  else if ( v5 )
  {
    return 1;
  }
  return 0;
}
