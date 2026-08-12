int sub_10188650()
{
  int result; // eax

  if ( (dword_104456F8 & 1) != 0 )
    return dword_104456F4;
  dword_104456F8 |= 1u;
  result = sub_10242540("CNavProgress");
  dword_104456F4 = result;
  return result;
}
