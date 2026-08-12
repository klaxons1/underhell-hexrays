int sub_101B9550()
{
  int result; // eax

  if ( (dword_1044F048 & 1) != 0 )
    return dword_1044F044;
  dword_1044F048 |= 1u;
  result = sub_10242540("CHudZoom");
  dword_1044F044 = result;
  return result;
}
