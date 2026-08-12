int __thiscall sub_1007C8A0(_DWORD *this, unsigned int a2)
{
  if ( a2 == -1 || this[4 * (a2 & 0xFFF) - 16387] != a2 >> 12 )
    return 0;
  else
    return this[4 * (a2 & 0xFFF) - 16388];
}
