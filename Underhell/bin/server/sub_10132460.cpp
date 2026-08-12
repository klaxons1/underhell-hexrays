int __thiscall sub_10132460(unsigned int *this, int a2)
{
  if ( *(_DWORD *)(a2 + 24) != 13 )
  {
    if ( (dword_10697954 & 1) == 0 )
      dword_10697954 |= 1u;
    dword_10697950 = -1;
    return sub_100C0E40(this + 200, 0);
  }
  if ( *(_DWORD *)(a2 + 20) == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 20) & 0xFFF) + 2] != *(_DWORD *)(a2 + 20) >> 12 )
    return sub_100C0E40(this + 200, 0);
  return sub_100C0E40(this + 200, off_1061BE18[4 * (*(_DWORD *)(a2 + 20) & 0xFFF) + 1]);
}
