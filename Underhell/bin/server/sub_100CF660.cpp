int __thiscall sub_100CF660(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  _DWORD *i; // esi
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v10; // eax

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
          if ( *(_DWORD *)(v7 + 92) == a2 || (unsigned __int8)sub_100D6240(a2) )
          {
            v8 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 856))(v8) == a3 )
              break;
          }
        }
      }
    }
    if ( ++v3 >= 48 )
      return 0;
  }
  v10 = this[v3 + 477];
  if ( v10 == -1 || off_1061BE18[4 * (this[v3 + 477] & 0xFFF) + 2] != v10 >> 12 )
    return 0;
  return off_1061BE18[4 * (this[v3 + 477] & 0xFFF) + 1];
}
