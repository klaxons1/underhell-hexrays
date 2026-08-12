int sub_10131360()
{
  int result; // eax

  if ( (dword_10439554 & 1) != 0 )
    return dword_10439550;
  dword_10439554 |= 1u;
  result = sub_10242540("CFPSPanel");
  dword_10439550 = result;
  return result;
}
