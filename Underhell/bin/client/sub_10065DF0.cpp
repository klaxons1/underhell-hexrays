void __thiscall sub_10065DF0(_DWORD *this)
{
  unsigned int v2; // ecx

  if ( this[311] )
  {
    sub_101E8600(1, 0.0, 0.0);
    v2 = this[304];
    if ( v2 != -1 && *((_DWORD *)off_103DCD74 + 4 * (this[304] & 0xFFF) + 2) == v2 >> 12 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (this[304] & 0xFFF) + 1) )
        sub_100404D0(this[311]);
    }
  }
}
