void __thiscall sub_1022E330(_BYTE *this, char a2, char a3)
{
  if ( a2 )
    this[21] |= 1u;
  else
    this[21] &= ~1u;
  if ( a3 )
    this[21] |= 4u;
  else
    this[21] &= ~4u;
}
