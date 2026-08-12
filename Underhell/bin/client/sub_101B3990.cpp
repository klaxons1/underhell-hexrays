int sub_101B3990()
{
  int result; // eax

  if ( (dword_1044EF14 & 1) != 0 )
    return dword_1044EF10;
  dword_1044EF14 |= 1u;
  result = sub_10242580("CHudRadar");
  dword_1044EF10 = result;
  return result;
}
