int __thiscall sub_100C9660(_DWORD *this, int a2)
{
  int v3; // esi
  _DWORD *i; // edi
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned int v9; // eax

  v3 = 0;
  for ( i = this + 477; ; ++i )
  {
    if ( *i != -1 )
    {
      v5 = &off_1061BE18[4 * (*i & 0xFFF) + 1];
      v6 = *i >> 12;
      if ( off_1061BE18[4 * (*i & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          v7 = off_1061BE18[4 * (*i & 0xFFF) + 2] == v6 ? *v5 : 0;
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1248))(v7) == a2 )
            break;
        }
      }
    }
    if ( ++v3 >= 48 )
      return 0;
  }
  v9 = this[v3 + 477];
  if ( v9 == -1 || off_1061BE18[4 * (this[v3 + 477] & 0xFFF) + 2] != v9 >> 12 )
    return 0;
  return off_1061BE18[4 * (this[v3 + 477] & 0xFFF) + 1];
}
