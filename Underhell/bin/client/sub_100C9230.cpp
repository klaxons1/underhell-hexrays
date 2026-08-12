int sub_100C9230()
{
  int result; // eax

  if ( (dword_10430CAC & 1) != 0 )
    return dword_10430CA8;
  dword_10430CAC |= 1u;
  result = sub_10242540("CHudEndurance");
  dword_10430CA8 = result;
  return result;
}
