int sub_101AF240()
{
  int result; // eax

  if ( (dword_1044ECC4 & 1) != 0 )
    return dword_1044ECC0;
  dword_1044ECC4 |= 1u;
  result = sub_10242540("CHudCredits");
  dword_1044ECC0 = result;
  return result;
}
