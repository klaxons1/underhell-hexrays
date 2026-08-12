int sub_1012F0B0()
{
  int result; // eax

  if ( (dword_104392F8 & 1) != 0 )
    return dword_104392F4;
  dword_104392F8 |= 1u;
  result = sub_10242540("CInventoryPanel");
  dword_104392F4 = result;
  return result;
}
