int sub_101AE0A0()
{
  int result; // eax

  if ( (dword_1044EC88 & 1) != 0 )
    return dword_1044EC84;
  dword_1044EC88 |= 1u;
  result = sub_10242580("CHudBattery");
  dword_1044EC84 = result;
  return result;
}
