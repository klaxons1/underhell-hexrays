int sub_101313A0()
{
  int result; // eax

  if ( (dword_10439560 & 1) != 0 )
    return dword_1043955C;
  dword_10439560 |= 1u;
  result = sub_10242580("CFPSPanel");
  dword_1043955C = result;
  return result;
}
