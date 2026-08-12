int sub_100D2F20()
{
  int result; // eax

  if ( (dword_10431120 & 1) != 0 )
    return dword_1043111C;
  dword_10431120 |= 1u;
  result = sub_10242580("CHudWeapon");
  dword_1043111C = result;
  return result;
}
