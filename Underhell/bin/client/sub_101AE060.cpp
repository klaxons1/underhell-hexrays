int sub_101AE060()
{
  int result; // eax

  if ( (dword_1044EC80 & 1) != 0 )
    return dword_1044EC7C;
  dword_1044EC80 |= 1u;
  result = sub_10242540("CHudBattery");
  dword_1044EC7C = result;
  return result;
}
