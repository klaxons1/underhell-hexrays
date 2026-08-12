int sub_100CB7C0()
{
  int result; // eax

  if ( (dword_10430E3C & 1) != 0 )
    return dword_10430E38;
  dword_10430E3C |= 1u;
  result = sub_10242580("CHudStamina");
  dword_10430E38 = result;
  return result;
}
