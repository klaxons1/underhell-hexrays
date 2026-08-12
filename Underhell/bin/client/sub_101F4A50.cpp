int sub_101F4A50()
{
  int result; // eax

  if ( (dword_104655F0 & 1) != 0 )
    return dword_104655EC;
  dword_104655F0 |= 1u;
  result = sub_10242540("CMDLPanel");
  dword_104655EC = result;
  return result;
}
