int sub_100C8610()
{
  int result; // eax

  if ( (dword_10430C30 & 1) != 0 )
    return dword_10430C2C;
  dword_10430C30 |= 1u;
  result = sub_10242580("CHudHDRDemo");
  dword_10430C2C = result;
  return result;
}
