int sub_1012F8D0()
{
  int result; // eax

  if ( (dword_10439434 & 1) != 0 )
    return dword_10439430;
  dword_10439434 |= 1u;
  result = sub_10242580("Button");
  dword_10439430 = result;
  return result;
}
