int sub_100BCDF0()
{
  int result; // eax

  if ( (dword_10430094 & 1) != 0 )
    return dword_10430090;
  dword_10430094 |= 1u;
  result = sub_10242580("CHudDotReticle");
  dword_10430090 = result;
  return result;
}
