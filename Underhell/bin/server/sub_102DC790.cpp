char __thiscall sub_102DC790(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v4; // ecx
  int v5; // esi
  int v6; // eax
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  int v11; // eax

  v2 = *(_DWORD *)(a2 + 44);
  if ( v2 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v2 >> 12 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        if ( sub_100D7680(*v4) )
        {
          v6 = sub_100D7680(v5);
          if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 1528))(v6, 0) )
            return 0;
        }
      }
    }
  }
  if ( (v8 = this[1407], v8 != -1)
    && (v9 = &off_1061BE18[4 * (this[1407] & 0xFFF) + 1],
        v10 = v8 >> 12,
        off_1061BE18[4 * (this[1407] & 0xFFF) + 2] == v10)
    && *v9
    && (off_1061BE18[4 * (this[1407] & 0xFFF) + 2] != v10 ? (v11 = 0) : (v11 = *v9),
        !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v11 + 244))(v11, a2)) )
  {
    return 0;
  }
  else
  {
    return sub_102DBEF0(this, a2);
  }
}
