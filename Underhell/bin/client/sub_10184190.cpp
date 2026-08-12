int sub_10184190()
{
  int result; // eax

  if ( (dword_104454CC & 1) != 0 )
    return dword_104454C8;
  dword_104454CC |= 1u;
  result = sub_10242540("CClientScoreBoardDialog");
  dword_104454C8 = result;
  return result;
}
