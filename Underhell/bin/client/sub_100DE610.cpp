int sub_100DE610()
{
  int result; // eax

  if ( (dword_104345F0 & 1) != 0 )
    return dword_104345EC;
  dword_104345F0 |= 1u;
  result = sub_10242540("CHudMenu");
  dword_104345EC = result;
  return result;
}
