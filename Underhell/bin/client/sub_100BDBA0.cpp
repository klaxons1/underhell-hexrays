int sub_100BDBA0()
{
  int result; // eax

  if ( (dword_104300C4 & 1) != 0 )
    return dword_104300C0;
  dword_104300C4 |= 1u;
  result = sub_10242580("CHudUHHermitCards");
  dword_104300C0 = result;
  return result;
}
