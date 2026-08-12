int sub_100AF490()
{
  int result; // eax

  if ( (dword_1042F7D8 & 1) != 0 )
    return dword_1042F7D4;
  dword_1042F7D8 |= 1u;
  result = sub_10242540("CHudGeiger");
  dword_1042F7D4 = result;
  return result;
}
