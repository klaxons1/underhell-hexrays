int sub_100BCDB0()
{
  int result; // eax

  if ( (dword_1043008C & 1) != 0 )
    return dword_10430088;
  dword_1043008C |= 1u;
  result = sub_10242540("CHudDotReticle");
  dword_10430088 = result;
  return result;
}
