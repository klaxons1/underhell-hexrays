void __thiscall sub_100F7060(_DWORD *this, char a2)
{
  if ( a2 )
  {
    ++this[39];
    this[78] |= 0x1000000u;
  }
  else
  {
    this[78] &= ~0x1000000u;
  }
}
