int sub_100C85D0()
{
  int result; // eax

  if ( (dword_10430C28 & 1) != 0 )
    return dword_10430C24;
  dword_10430C28 |= 1u;
  result = sub_10242540("CHudHDRDemo");
  dword_10430C24 = result;
  return result;
}
