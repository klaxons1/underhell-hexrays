int sub_10180590()
{
  int result; // eax

  if ( (dword_104453A4 & 1) != 0 )
    return dword_104453A0;
  dword_104453A4 |= 1u;
  result = sub_10242580("CModelPanel");
  dword_104453A0 = result;
  return result;
}
