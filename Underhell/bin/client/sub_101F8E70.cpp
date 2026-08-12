char __thiscall sub_101F8E70(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v5; // esi

  v2 = this[16];
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 846) & 1) != 0 )
      v3 = *(_DWORD *)(v2 + 316);
    else
      v3 = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 68))(v3) )
      return 1;
    v5 = this[1502];
    if ( v5 )
    {
      while ( !(unsigned __int8)sub_101F8E70(v5) )
      {
        v5 = *(_DWORD *)(v5 + 5980);
        if ( !v5 )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}
