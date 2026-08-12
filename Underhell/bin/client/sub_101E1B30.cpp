char __thiscall sub_101E1B30(_BYTE *this, char a2)
{
  char result; // al

  result = a2;
  this[4] = a2;
  if ( a2 == 5 || a2 == 11 )
    this[376] |= 1u;
  else
    this[376] &= ~1u;
  return result;
}
