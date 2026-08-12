int sub_100C6310()
{
  int result; // eax

  if ( (dword_10430774 & 1) != 0 )
    return dword_10430770;
  dword_10430774 |= 1u;
  result = sub_10242540("CHudCloseCaption");
  dword_10430770 = result;
  return result;
}
