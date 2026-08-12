int sub_101B8660()
{
  int result; // eax

  if ( (dword_1044EFE4 & 1) != 0 )
    return dword_1044EFE0;
  dword_1044EFE4 |= 1u;
  result = sub_10242580("CHudWeaponSelection");
  dword_1044EFE0 = result;
  return result;
}
