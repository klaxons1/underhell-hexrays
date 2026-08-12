int sub_100C7220()
{
  int result; // eax

  if ( (dword_10430B48 & 1) != 0 )
    return dword_10430B44;
  dword_10430B48 |= 1u;
  result = sub_10242580("CHudCrosshair");
  dword_10430B44 = result;
  return result;
}
