int __thiscall sub_10181AC0(_DWORD *this, const char *a2)
{
  int v3; // esi
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v6 = this[9];
  if ( v6 <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(this[6] + 4 * v3);
    if ( !strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4), a2) )
      break;
    if ( ++v3 >= v6 )
      return 0;
  }
  return *(_DWORD *)(this[6] + 4 * v3);
}
