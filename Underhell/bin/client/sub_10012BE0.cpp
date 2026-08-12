BOOL __thiscall sub_10012BE0(unsigned int *this, int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx

  v2 = *this;
  if ( *this == -1 )
    return a2 == 0;
  v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (*this & 0xFFF) + 4);
  if ( v3[1] != v2 >> 12 )
    return a2 == 0;
  else
    return *v3 == a2;
}
