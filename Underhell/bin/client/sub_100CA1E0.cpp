int sub_100CA1E0()
{
  int result; // eax

  if ( (dword_10430DF4 & 1) != 0 )
    return dword_10430DF0;
  dword_10430DF4 |= 1u;
  result = sub_10242540("CHudHintKeyDisplay");
  dword_10430DF0 = result;
  return result;
}
