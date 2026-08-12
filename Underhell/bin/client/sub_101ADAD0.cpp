int sub_101ADAD0()
{
  int result; // eax

  if ( (dword_1044EC48 & 1) != 0 )
    return dword_1044EC44;
  dword_1044EC48 |= 1u;
  result = sub_10242540("CHudGrenadeAmmo");
  dword_1044EC44 = result;
  return result;
}
