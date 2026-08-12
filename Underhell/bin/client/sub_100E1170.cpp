int sub_100E1170()
{
  int result; // eax

  if ( (dword_10434614 & 1) != 0 )
    return dword_10434610;
  dword_10434614 |= 1u;
  result = sub_10242540("CHudMessage");
  dword_10434610 = result;
  return result;
}
