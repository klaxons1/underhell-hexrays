int sub_10129FD0()
{
  int result; // eax

  if ( (dword_104390F4 & 1) != 0 )
    return dword_104390F0;
  dword_104390F4 |= 1u;
  result = sub_10242580("CHudTrain");
  dword_104390F0 = result;
  return result;
}
