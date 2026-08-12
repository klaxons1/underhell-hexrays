int sub_10188200()
{
  int result; // eax

  if ( (dword_104456E4 & 1) != 0 )
    return dword_104456E0;
  dword_104456E4 |= 1u;
  result = sub_10242540("CMapOverview");
  dword_104456E0 = result;
  return result;
}
