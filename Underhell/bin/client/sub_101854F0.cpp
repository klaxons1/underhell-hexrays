int sub_101854F0()
{
  int result; // eax

  if ( (dword_10445518 & 1) != 0 )
    return dword_10445514;
  dword_10445518 |= 1u;
  result = sub_10242540("CIconPanel");
  dword_10445514 = result;
  return result;
}
