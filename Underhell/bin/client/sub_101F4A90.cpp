int sub_101F4A90()
{
  int result; // eax

  if ( (dword_104655F8 & 1) != 0 )
    return dword_104655F4;
  dword_104655F8 |= 1u;
  result = sub_10242580("CMDLPanel");
  dword_104655F4 = result;
  return result;
}
