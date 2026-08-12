bool __thiscall sub_1030B440(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  unsigned int v3; // eax
  int v4; // eax
  int v6; // ecx

  v2 = this;
  if ( this[951] == *(_DWORD *)(a2 + 92) )
  {
    v3 = this[929];
    if ( v3 == -1 || off_1061BE18[4 * (this[929] & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (this[929] & 0xFFF) + 1];
    if ( v4 == a2 )
      return 0;
    if ( *(_BYTE *)(a2 + 306) == 6 )
    {
      v6 = *(_DWORD *)(a2 + 424);
      if ( v6 )
      {
        if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6) <= 750.0 )
          return 0;
      }
    }
    this = v2;
  }
  return sub_1002A090(this, a2);
}
