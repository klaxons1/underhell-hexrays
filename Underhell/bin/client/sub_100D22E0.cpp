int sub_100D22E0()
{
  int result; // eax

  if ( (dword_10431094 & 1) != 0 )
    return dword_10431090;
  dword_10431094 |= 1u;
  result = sub_10242540("CPDumpPanel");
  dword_10431090 = result;
  return result;
}
