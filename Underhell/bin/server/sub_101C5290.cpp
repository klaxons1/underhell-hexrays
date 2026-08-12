char __thiscall sub_101C5290(_BYTE *this)
{
  int v1; // eax
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  int *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( (this[764] & 1) == 0 )
    return 0;
  if ( !dword_106BA7CC[0] )
    return 0;
  v1 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_106BA7CC[0] + 4))(dword_106BA7CC[0], this);
  v2 = (_DWORD *)v1;
  if ( !v1 )
    return 0;
  v3 = *(_DWORD **)(v1 + 4);
  if ( v3 == (_DWORD *)v1 )
    return 0;
  while ( 1 )
  {
    if ( *v3 != -1 )
    {
      v4 = &off_1061BE18[4 * (*v3 & 0xFFF) + 1];
      v5 = *v3 >> 12;
      if ( off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          v6 = off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v5 ? *v4 : 0;
          if ( sub_100D7680(v6) )
            break;
        }
      }
    }
    v3 = (_DWORD *)v3[1];
    if ( v3 == v2 )
      return 0;
  }
  return 1;
}
