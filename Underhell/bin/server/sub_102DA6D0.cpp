char sub_102DA6D0()
{
  char result; // al
  char Destination[260]; // [esp+0h] [ebp-104h] BYREF

  if ( byte_10665DF8 )
  {
    result = sub_101534B0(Destination, 0x104u);
    if ( !result )
      return result;
    if ( !strcmp(Destination, "hl2") || (byte_106E0510 = 0, !strcmp(Destination, "episodic")) )
      byte_106E0510 = 1;
    byte_10665DF8 = 0;
  }
  return byte_106E0510;
}
