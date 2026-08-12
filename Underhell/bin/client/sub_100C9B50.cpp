int sub_100C9B50()
{
  int result; // eax

  if ( (dword_10430CD4 & 1) != 0 )
    return dword_10430CD0;
  dword_10430CD4 |= 1u;
  result = sub_10242540("CHudHintDisplay");
  dword_10430CD0 = result;
  return result;
}
