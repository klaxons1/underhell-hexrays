int __thiscall sub_10280270(_DWORD *this, char *String2)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  const char *v6; // eax

  v3 = 0;
  if ( (int)this[22] <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = sub_10237C80((_DWORD *)(this[19] + 4 * v3));
    v5 = v4;
    if ( v4 )
    {
      v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 72))(v4);
      if ( !_stricmp(v6, String2) )
        break;
    }
    if ( ++v3 >= this[22] )
      return 0;
  }
  return v5;
}
