int sub_100D1770()
{
  int result; // eax

  if ( (dword_10431078 & 1) != 0 )
    return dword_10431074;
  dword_10431078 |= 1u;
  result = sub_10242580("CHudNumericDisplay");
  dword_10431074 = result;
  return result;
}
