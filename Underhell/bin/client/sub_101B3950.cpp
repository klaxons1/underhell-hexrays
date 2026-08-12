int sub_101B3950()
{
  int result; // eax

  if ( (dword_1044EF08 & 1) != 0 )
    return dword_1044EF04;
  dword_1044EF08 |= 1u;
  result = sub_10242540("CHudRadar");
  dword_1044EF04 = result;
  return result;
}
