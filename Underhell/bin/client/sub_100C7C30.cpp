int sub_100C7C30()
{
  int result; // eax

  if ( (dword_10430C08 & 1) != 0 )
    return dword_10430C04;
  dword_10430C08 |= 1u;
  result = sub_10242580("CHudFilmDemo");
  dword_10430C04 = result;
  return result;
}
