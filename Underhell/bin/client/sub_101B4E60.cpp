int sub_101B4E60()
{
  int result; // eax

  if ( (dword_1044EF2C & 1) != 0 )
    return dword_1044EF28;
  dword_1044EF2C |= 1u;
  result = sub_10242540("CHudSquadStatus");
  dword_1044EF28 = result;
  return result;
}
