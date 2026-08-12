int __thiscall sub_10104C80(_DWORD *this, int a2)
{
  unsigned int v2; // eax

  if ( a2 < 0 )
    return 0;
  if ( a2 >= this[5] )
    return 0;
  v2 = *(_DWORD *)(this[2] + 4 * a2);
  if ( v2 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v2 & 0xFFF) + 2) != v2 >> 12 )
    return 0;
  else
    return *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this[2] + 4 * a2) & 0xFFF) + 1);
}
