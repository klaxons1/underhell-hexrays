int sub_100DE650()
{
  int result; // eax

  if ( (dword_104345F8 & 1) != 0 )
    return dword_104345F4;
  dword_104345F8 |= 1u;
  result = sub_10242580("CHudMenu");
  dword_104345F4 = result;
  return result;
}
