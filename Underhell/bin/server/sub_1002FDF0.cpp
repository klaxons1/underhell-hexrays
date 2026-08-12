int __thiscall sub_1002FDF0(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx

  v1 = this[626];
  if ( v1 == -1 )
    return 0;
  v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
  v3 = v1 >> 12;
  if ( v2[1] != v3 || !*v2 )
    return 0;
  if ( v2[1] == v3 )
    return sub_100D7680(*v2);
  return sub_100D7680(0);
}
