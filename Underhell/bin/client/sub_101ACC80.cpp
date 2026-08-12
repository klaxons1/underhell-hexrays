int sub_101ACC80()
{
  int result; // eax

  if ( (dword_1044EC2C & 1) != 0 )
    return dword_1044EC28;
  dword_1044EC2C |= 1u;
  result = sub_10242580("CHudAmmo");
  dword_1044EC28 = result;
  return result;
}
