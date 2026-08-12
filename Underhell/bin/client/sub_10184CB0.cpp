int sub_10184CB0()
{
  int result; // eax

  if ( (dword_104454F8 & 1) != 0 )
    return dword_104454F4;
  dword_104454F8 |= 1u;
  result = sub_10242580("CommandMenu");
  dword_104454F4 = result;
  return result;
}
