int sub_100C9B90()
{
  int result; // eax

  if ( (dword_10430CDC & 1) != 0 )
    return dword_10430CD8;
  dword_10430CDC |= 1u;
  result = sub_10242580("CHudHintDisplay");
  dword_10430CD8 = result;
  return result;
}
