int sub_101ACF90()
{
  int result; // eax

  if ( (dword_1044EC3C & 1) != 0 )
    return dword_1044EC38;
  dword_1044EC3C |= 1u;
  result = sub_10242580("CHudSecondaryAmmo");
  dword_1044EC38 = result;
  return result;
}
