int sub_101841D0()
{
  int result; // eax

  if ( (dword_104454D4 & 1) != 0 )
    return dword_104454D0;
  dword_104454D4 |= 1u;
  result = sub_10242580("CClientScoreBoardDialog");
  dword_104454D0 = result;
  return result;
}
