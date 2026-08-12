int sub_10184C70()
{
  int result; // eax

  if ( (dword_104454F0 & 1) != 0 )
    return dword_104454EC;
  dword_104454F0 |= 1u;
  result = sub_10242540("CommandMenu");
  dword_104454EC = result;
  return result;
}
