int sub_101B3010()
{
  int result; // eax

  if ( (dword_1044EE40 & 1) != 0 )
    return dword_1044EE3C;
  dword_1044EE40 |= 1u;
  result = sub_10242540("CHUDQuickInfo");
  dword_1044EE3C = result;
  return result;
}
