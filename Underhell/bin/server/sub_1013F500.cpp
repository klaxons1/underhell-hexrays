int __thiscall sub_1013F500(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi

  sub_1023B860("Fire.Plasma");
  v2 = this[200];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[200] & 0xFFF) + 1];
    if ( off_1061BE18[4 * (this[200] & 0xFFF) + 2] == v2 >> 12 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 728))(v4, 0);
        sub_1025FAC0(v4);
      }
    }
  }
  return sub_100E20F0(this);
}
