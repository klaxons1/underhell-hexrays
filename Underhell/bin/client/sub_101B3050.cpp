int sub_101B3050()
{
  int result; // eax

  if ( (dword_1044EE48 & 1) != 0 )
    return dword_1044EE44;
  dword_1044EE48 |= 1u;
  result = sub_10242580("CHUDQuickInfo");
  dword_1044EE44 = result;
  return result;
}
