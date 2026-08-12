int sub_100B19A0()
{
  int result; // eax

  if ( (dword_1042F978 & 1) != 0 )
    return dword_1042F974;
  dword_1042F978 |= 1u;
  result = sub_10242540("CHudHistoryResource");
  dword_1042F974 = result;
  return result;
}
