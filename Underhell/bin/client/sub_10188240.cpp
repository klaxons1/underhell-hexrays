int sub_10188240()
{
  int result; // eax

  if ( (dword_104456EC & 1) != 0 )
    return dword_104456E8;
  dword_104456EC |= 1u;
  result = sub_10242580("CMapOverview");
  dword_104456E8 = result;
  return result;
}
