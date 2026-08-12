unsigned int __thiscall sub_100391C0(_DWORD *this)
{
  unsigned int result; // eax
  unsigned int v3; // esi
  unsigned int v4; // eax

  sub_10039160(this, this + 5);
  result = this[82];
  if ( result == -1 || (result >>= 12, *((_DWORD *)off_103DCD74 + 4 * (this[82] & 0xFFF) + 2) != result) )
    v3 = 0;
  else
    v3 = *((_DWORD *)off_103DCD74 + 4 * (this[82] & 0xFFF) + 1);
  if ( v3 )
  {
    do
    {
      sub_100391C0(v3);
      v4 = *(_DWORD *)(v3 + 332);
      if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 332) & 0xFFF) + 2) != v4 >> 12 )
        result = 0;
      else
        result = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 332) & 0xFFF) + 1);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
