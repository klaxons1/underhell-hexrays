int sub_100E11B0()
{
  int result; // eax

  if ( (dword_1043461C & 1) != 0 )
    return dword_10434618;
  dword_1043461C |= 1u;
  result = sub_10242580("CHudMessage");
  dword_10434618 = result;
  return result;
}
