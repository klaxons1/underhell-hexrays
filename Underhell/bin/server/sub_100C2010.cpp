void __thiscall sub_100C2010(int this)
{
  char *v2; // eax
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  const char *v9; // eax
  const char *v10; // esi
  int v11; // ecx

  sub_100E38F0(this);
  v2 = *(char **)(this + 804);
  if ( v2 )
  {
    v5 = sub_1012BF20(0, v2, 0, 0, 0, 0);
    sub_100C0E40((unsigned int *)(this + 800), v5);
    v6 = *(_DWORD *)(this + 800);
    if ( v6 != -1
      && (v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1],
          v8 = v6 >> 12,
          off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v8)
      && *v7 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v8 )
      {
        v11 = *v7;
        *(_DWORD *)(v11 + 252) |= 0x80u;
        sub_100D8500(v11);
      }
      else
      {
        MEMORY[0xFC] |= 0x80u;
        sub_100D8500(0);
      }
    }
    else
    {
      v9 = *(const char **)(this + 804);
      if ( !v9 )
        v9 = String;
      v10 = *(const char **)(this + 92);
      if ( !v10 )
        v10 = String;
      DevWarning("%s: Could not find lighting landmark '%s'!\n", v10, v9);
    }
  }
  else
  {
    v3 = *(_DWORD *)(this + 800);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v3 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 800) = -1;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 800);
        *(_DWORD *)(this + 800) = -1;
      }
    }
  }
}
