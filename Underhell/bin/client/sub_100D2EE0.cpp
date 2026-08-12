int sub_100D2EE0()
{
  int result; // eax

  if ( (dword_10431118 & 1) != 0 )
    return dword_10431114;
  dword_10431118 |= 1u;
  result = sub_10242540("CHudWeapon");
  dword_10431114 = result;
  return result;
}
