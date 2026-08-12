int __thiscall sub_1006F590(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx

  if ( a2 )
    return 0;
  v2 = this[1];
  if ( v2 == -1 )
    return 0;
  v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[1] & 0xFFF) + 4);
  if ( v3[1] != v2 >> 12 )
    return 0;
  else
    return *v3;
}
