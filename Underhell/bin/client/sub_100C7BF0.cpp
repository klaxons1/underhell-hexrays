int sub_100C7BF0()
{
  int result; // eax

  if ( (dword_10430C00 & 1) != 0 )
    return dword_10430BFC;
  dword_10430C00 |= 1u;
  result = sub_10242540("CHudFilmDemo");
  dword_10430BFC = result;
  return result;
}
