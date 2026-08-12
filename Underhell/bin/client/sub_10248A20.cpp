int sub_10248A20()
{
  int v0; // eax
  int result; // eax

  if ( (dword_1047CCC0 & 1) != 0 )
    return dword_1047CCBC;
  dword_1047CCC0 |= 1u;
  v0 = sub_100DDA40(328);
  if ( v0 )
  {
    result = sub_10248520(v0, 0);
    dword_1047CCBC = result;
  }
  else
  {
    result = 0;
    dword_1047CCBC = 0;
  }
  return result;
}
