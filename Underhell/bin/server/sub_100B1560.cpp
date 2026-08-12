int __thiscall sub_100B1560(_DWORD *this, _DWORD *a2, char a3)
{
  int v3; // edi
  int *v5; // ecx
  int v6; // esi
  unsigned int v7; // eax
  _DWORD *v9; // [esp+14h] [ebp+Ch]

  v3 = 0;
  if ( a3 && (int)this[18] > 0 )
  {
    v9 = this + 2;
    do
    {
      if ( *v9 != -1 )
      {
        v5 = &off_1061BE18[4 * (*v9 & 0xFFF) + 1];
        if ( off_1061BE18[4 * (*v9 & 0xFFF) + 2] == *v9 >> 12 )
        {
          v6 = *v5;
          if ( *v5 )
          {
            if ( (*(_BYTE *)(v6 + 306) || (*(int (__thiscall **)(int))(*(_DWORD *)(v6 + 320) + 44))(v6 + 320))
              && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 1916))(v6) )
            {
              break;
            }
          }
        }
      }
      ++v9;
      ++v3;
    }
    while ( v3 < this[18] );
  }
  if ( a2 )
    *a2 = v3;
  if ( v3 >= this[18] )
    return 0;
  v7 = this[v3 + 2];
  if ( v7 == -1 || off_1061BE18[4 * (this[v3 + 2] & 0xFFF) + 2] != v7 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (this[v3 + 2] & 0xFFF) + 1];
}
