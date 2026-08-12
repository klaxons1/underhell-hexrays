int sub_10188690()
{
  int result; // eax

  if ( (dword_10445704 & 1) != 0 )
    return dword_10445700;
  dword_10445704 |= 1u;
  result = sub_10242580("CNavProgress");
  dword_10445700 = result;
  return result;
}
