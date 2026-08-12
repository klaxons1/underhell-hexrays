char __thiscall sub_10012270(_BYTE *this, char a2)
{
  char result; // al

  result = a2;
  if ( this[4592] != a2 )
  {
    this[4592] = a2;
    if ( a2 )
      return sub_101212D0((int)"Player.AmbientUnderWater", 0.0, 0);
    else
      return sub_10120D80("Player.AmbientUnderWater");
  }
  return result;
}
