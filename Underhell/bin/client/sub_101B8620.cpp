int sub_101B8620()
{
  int result; // eax

  if ( (dword_1044EFDC & 1) != 0 )
    return dword_1044EFD8;
  dword_1044EFDC |= 1u;
  result = sub_10242540("CHudWeaponSelection");
  dword_1044EFD8 = result;
  return result;
}
