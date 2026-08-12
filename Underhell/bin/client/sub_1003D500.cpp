char __thiscall sub_1003D500(_DWORD *this)
{
  int v1; // eax

  v1 = this[85];
  if ( v1 != this[81] )
  {
    if ( v1 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[85] & 0xFFF) + 2) != this[85] >> 12 )
      LOBYTE(v1) = sub_1003CAB0(this, 0);
    else
      LOBYTE(v1) = sub_1003CAB0(this, *((_DWORD **)off_103DCD74 + 4 * (this[85] & 0xFFF) + 1));
  }
  return v1;
}
