char __thiscall sub_101FA680(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v2 = this[16];
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 600);
  else
    v3 = 0;
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_10:
    v7 = this[1502];
    if ( !v7 )
      return 1;
    while ( (*(_BYTE *)(v7 + 6596) & 0x80) != 0 )
    {
      v7 = *(_DWORD *)(v7 + 5980);
      if ( !v7 )
        return 1;
    }
  }
  else
  {
    while ( 1 )
    {
      v5 = this[16];
      v6 = v5 ? *(_DWORD *)(*(_DWORD *)(v5 + 588) + 4 * v4) : 0;
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 40))(v6) )
        break;
      if ( ++v4 >= v3 )
        goto LABEL_10;
    }
  }
  return 0;
}
