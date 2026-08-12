int __thiscall sub_100209E0(_DWORD *this)
{
  unsigned int v2; // eax

  if ( sub_1007E000(this[647]) == 2 )
  {
    v2 = this[603];
  }
  else
  {
    if ( sub_1007E000(this[647]) != 1 )
      return 0;
    v2 = this[605];
  }
  if ( v2 != -1 && off_1061BE18[4 * (v2 & 0xFFF) + 2] == v2 >> 12 )
    return off_1061BE18[4 * (v2 & 0xFFF) + 1];
  return 0;
}
