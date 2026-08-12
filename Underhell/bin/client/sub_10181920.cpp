int sub_10181920()
{
  int result; // eax

  if ( (dword_10445498 & 1) != 0 )
    return dword_10445494;
  dword_10445498 |= 1u;
  result = sub_10242580("Frame");
  dword_10445494 = result;
  return result;
}
