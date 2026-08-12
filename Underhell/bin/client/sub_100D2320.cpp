int sub_100D2320()
{
  int result; // eax

  if ( (dword_1043109C & 1) != 0 )
    return dword_10431098;
  dword_1043109C |= 1u;
  result = sub_10242580("CPDumpPanel");
  dword_10431098 = result;
  return result;
}
