int sub_100B9250()
{
  int result; // eax

  if ( (dword_1042FF18 & 1) != 0 )
    return dword_1042FF14;
  dword_1042FF18 |= 1u;
  result = sub_10242540("Panel");
  dword_1042FF14 = result;
  return result;
}
