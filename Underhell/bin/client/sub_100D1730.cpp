int sub_100D1730()
{
  int result; // eax

  if ( (dword_10431070 & 1) != 0 )
    return dword_1043106C;
  dword_10431070 |= 1u;
  result = sub_10242540("CHudNumericDisplay");
  dword_1043106C = result;
  return result;
}
