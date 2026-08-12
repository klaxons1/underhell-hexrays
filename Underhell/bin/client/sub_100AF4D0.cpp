int sub_100AF4D0()
{
  int result; // eax

  if ( (dword_1042F7E0 & 1) != 0 )
    return dword_1042F7DC;
  dword_1042F7E0 |= 1u;
  result = sub_10242580("CHudGeiger");
  dword_1042F7DC = result;
  return result;
}
