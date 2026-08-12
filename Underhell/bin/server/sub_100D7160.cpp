int sub_100D7160()
{
  int result; // eax

  if ( byte_10697279 )
  {
    result = Msg("Resuming entity I/O events\n");
    byte_10697279 = 0;
  }
  else
  {
    result = Msg("Pausing entity I/O events\n");
    byte_10697279 = 1;
  }
  return result;
}
