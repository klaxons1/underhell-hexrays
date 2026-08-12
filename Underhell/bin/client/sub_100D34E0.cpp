char sub_100D34E0()
{
  int v0; // esi
  int i; // edi
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  bool v6; // zf
  void (__thiscall *v7)(int); // eax

  v0 = dword_10431140;
  for ( i = 0; v0; v0 = *(_DWORD *)(v0 + 4) )
  {
    v2 = 0;
    if ( dword_103E0E50 <= 0 )
      goto LABEL_5;
    while ( *(_DWORD *)(dword_103E0E44 + 4 * v2) != v0 )
    {
      if ( ++v2 >= dword_103E0E50 )
        goto LABEL_5;
    }
    if ( v2 == -1 )
LABEL_5:
      sub_100D33F0(v0);
    else
      DevWarning(1, "AutoGameSystem already added to game system list!!!\n");
  }
  v3 = dword_10431144;
  for ( dword_10431140 = 0; v3; v3 = *(_DWORD *)(v3 + 4) )
  {
    v4 = 0;
    if ( dword_103E0E50 <= 0 )
      goto LABEL_14;
    while ( *(_DWORD *)(dword_103E0E44 + 4 * v4) != v3 )
    {
      if ( ++v4 >= dword_103E0E50 )
        goto LABEL_14;
    }
    if ( v4 == -1 )
LABEL_14:
      sub_100D33F0(v3);
    else
      DevWarning(1, "AutoGameSystem already added to game system list!!!\n");
  }
  dword_10431140 = 0;
  byte_10431130 = 1;
  if ( dword_103E0E50 <= 0 )
    return 1;
  while ( 1 )
  {
    v5 = dword_1047CA8C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    v6 = (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(dword_103E0E44 + 4 * i) + 4))(*(_DWORD *)(dword_103E0E44 + 4 * i)) == 0;
    v7 = *(void (__thiscall **)(int))(*(_DWORD *)v5 + 104);
    if ( v6 )
      break;
    v7(v5);
    if ( ++i >= dword_103E0E50 )
      return 1;
  }
  v7(v5);
  return 0;
}
