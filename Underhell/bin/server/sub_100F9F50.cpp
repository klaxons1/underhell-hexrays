int __thiscall sub_100F9F50(_DWORD *this, int *a2)
{
  unsigned int v3; // edx
  int *v4; // eax
  unsigned int v5; // edx
  int v6; // eax

  if ( (this[48] & 0x20) != 0 )
    return 16;
  v3 = this[77];
  if ( v3 == -1 )
    return sub_100DA910(this, a2);
  v4 = &off_1061BE18[4 * (this[77] & 0xFFF) + 1];
  v5 = v3 >> 12;
  if ( off_1061BE18[4 * (this[77] & 0xFFF) + 2] != v5 || !*v4 )
    return sub_100DA910(this, a2);
  if ( off_1061BE18[4 * (this[77] & 0xFFF) + 2] == v5 )
    v6 = *v4;
  else
    v6 = 0;
  return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 80))(v6, a2);
}
