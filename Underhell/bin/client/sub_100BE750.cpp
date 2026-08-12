int sub_100BE750()
{
  int result; // eax

  if ( (dword_104300F0 & 1) != 0 )
    return dword_104300EC;
  dword_104300F0 |= 1u;
  result = sub_10242580("CHudUHBattery");
  dword_104300EC = result;
  return result;
}
