int sub_100BE710()
{
  int result; // eax

  if ( (dword_104300E8 & 1) != 0 )
    return dword_104300E4;
  dword_104300E8 |= 1u;
  result = sub_10242540("CHudUHBattery");
  dword_104300E4 = result;
  return result;
}
