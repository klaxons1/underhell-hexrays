int __thiscall sub_100B4090(_DWORD *this, char *String2)
{
  int v3; // esi
  int v4; // ecx
  const char *v5; // eax

  v3 = 0;
  if ( (int)this[10] <= 0 )
  {
LABEL_4:
    DevWarning(1, "Could not find Hud Element: %s\n", String2);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(this[7] + 4 * v3);
      v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 32))(v4);
      if ( !_stricmp(v5, String2) )
        return *(_DWORD *)(this[7] + 4 * v3);
      if ( ++v3 >= this[10] )
        goto LABEL_4;
    }
  }
}
