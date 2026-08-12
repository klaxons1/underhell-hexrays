int __thiscall sub_100ADD70(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_10695154 & 1) == 0 )
  {
    dword_10695154 |= 1u;
    dword_10695144 = -1;
    dword_10695148 = -1;
    dword_1069514C = -1;
    dword_10695150 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10695144;
  else
    v3 = (int *)(this[1] + 28 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_100ACB90(this, a2);
    if ( sub_100ACCB0(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_10695154 & 1) == 0 )
        {
          dword_10695154 |= 1u;
          dword_10695144 = -1;
          dword_10695148 = -1;
          dword_1069514C = -1;
          dword_10695150 = 1;
        }
        v7 = *(_DWORD *)(this[1] + 28 * v7 + 8);
      }
      while ( sub_100ACCB0(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_100ACC50(this, a2);
    v5 = dword_10695154;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10695154 = v5;
        dword_10695144 = -1;
        dword_10695148 = -1;
        dword_1069514C = -1;
        dword_10695150 = 1;
      }
      v6 = result == -1 ? &dword_10695144 : (int *)(this[1] + 28 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10695154 = v5;
        dword_10695144 = -1;
        dword_10695148 = -1;
        dword_1069514C = -1;
        dword_10695150 = 1;
      }
      if ( result == -1 )
        result = dword_10695144;
      else
        result = *(_DWORD *)(this[1] + 28 * result);
    }
  }
  return result;
}
