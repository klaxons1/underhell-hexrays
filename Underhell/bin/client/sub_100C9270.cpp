int sub_100C9270()
{
  int result; // eax

  if ( (dword_10430CB4 & 1) != 0 )
    return dword_10430CB0;
  dword_10430CB4 |= 1u;
  result = sub_10242580("CHudEndurance");
  dword_10430CB0 = result;
  return result;
}
