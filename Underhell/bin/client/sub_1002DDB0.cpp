char __thiscall sub_1002DDB0(_BYTE *this)
{
  char result; // al

  result = (this[1936] + 1) & 3;
  if ( result != this[1936] )
    this[1936] = result;
  return result;
}
