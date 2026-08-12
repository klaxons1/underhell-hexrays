int sub_101B9590()
{
  int result; // eax

  if ( (dword_1044F050 & 1) != 0 )
    return dword_1044F04C;
  dword_1044F050 |= 1u;
  result = sub_10242580("CHudZoom");
  dword_1044F04C = result;
  return result;
}
