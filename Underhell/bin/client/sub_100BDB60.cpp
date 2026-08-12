int sub_100BDB60()
{
  int result; // eax

  if ( (dword_104300BC & 1) != 0 )
    return dword_104300B8;
  dword_104300BC |= 1u;
  result = sub_10242540("CHudUHHermitCards");
  dword_104300B8 = result;
  return result;
}
