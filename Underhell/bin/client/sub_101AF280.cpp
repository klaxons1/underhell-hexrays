int sub_101AF280()
{
  int result; // eax

  if ( (dword_1044ECCC & 1) != 0 )
    return dword_1044ECC8;
  dword_1044ECCC |= 1u;
  result = sub_10242580("CHudCredits");
  dword_1044ECC8 = result;
  return result;
}
