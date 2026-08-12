int sub_1012F0F0()
{
  int result; // eax

  if ( (dword_10439300 & 1) != 0 )
    return dword_104392FC;
  dword_10439300 |= 1u;
  result = sub_10242580("CInventoryPanel");
  dword_104392FC = result;
  return result;
}
