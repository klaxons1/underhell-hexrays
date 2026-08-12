int sub_100C6350()
{
  int result; // eax

  if ( (dword_1043077C & 1) != 0 )
    return dword_10430778;
  dword_1043077C |= 1u;
  result = sub_10242580("CHudCloseCaption");
  dword_10430778 = result;
  return result;
}
