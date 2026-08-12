int sub_100C71E0()
{
  int result; // eax

  if ( (dword_10430B40 & 1) != 0 )
    return dword_10430B3C;
  dword_10430B40 |= 1u;
  result = sub_10242540("CHudCrosshair");
  dword_10430B3C = result;
  return result;
}
