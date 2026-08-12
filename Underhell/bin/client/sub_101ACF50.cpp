int sub_101ACF50()
{
  int result; // eax

  if ( (dword_1044EC34 & 1) != 0 )
    return dword_1044EC30;
  dword_1044EC34 |= 1u;
  result = sub_10242540("CHudSecondaryAmmo");
  dword_1044EC30 = result;
  return result;
}
