int sub_101A6A80()
{
  int result; // eax

  if ( (dword_1044C318 & 1) != 0 )
    return dword_1044C314;
  dword_1044C318 |= 1u;
  result = sub_10242540("CHudViewport");
  dword_1044C314 = result;
  return result;
}
