int sub_101ACC40()
{
  int result; // eax

  if ( (dword_1044EC24 & 1) != 0 )
    return dword_1044EC20;
  dword_1044EC24 |= 1u;
  result = sub_10242540("CHudAmmo");
  dword_1044EC20 = result;
  return result;
}
