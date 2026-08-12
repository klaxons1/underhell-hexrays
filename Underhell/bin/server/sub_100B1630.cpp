int __thiscall sub_100B1630(_DWORD *this, int *a2, char a3)
{
  int v3; // eax
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // edi
  int v8; // esi
  unsigned int v9; // eax

  v3 = ++*a2;
  if ( a3 && v3 < this[18] )
  {
    do
    {
      v5 = this[v3 + 2];
      if ( v5 != -1 )
      {
        v6 = &off_1061BE18[4 * (v5 & 0xFFF) + 1];
        if ( off_1061BE18[4 * (v5 & 0xFFF) + 2] == v5 >> 12 )
        {
          v7 = *v6;
          if ( *v6 )
          {
            if ( (*(_BYTE *)(v7 + 306) || (*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 320) + 44))(v7 + 320))
              && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1916))(v7) )
            {
              break;
            }
          }
        }
      }
      v3 = ++*a2;
    }
    while ( *a2 < this[18] );
  }
  v8 = *a2;
  if ( *a2 >= this[18] )
    return 0;
  v9 = this[v8 + 2];
  if ( v9 == -1 || off_1061BE18[4 * (this[v8 + 2] & 0xFFF) + 2] != v9 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (this[v8 + 2] & 0xFFF) + 1];
}
