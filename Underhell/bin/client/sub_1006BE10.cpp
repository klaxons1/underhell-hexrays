int __thiscall sub_1006BE10(unsigned int *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // ecx

  v1 = *this;
  if ( *this == -1 )
    return 0;
  v2 = (_DWORD *)((char *)off_103DCD74 + 16 * (*this & 0xFFF) + 4);
  if ( v2[1] != v1 >> 12 )
    return 0;
  else
    return *v2;
}
