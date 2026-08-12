int sub_1012F890()
{
  int result; // eax

  if ( (dword_1043942C & 1) != 0 )
    return dword_10439428;
  dword_1043942C |= 1u;
  result = sub_10242540("Button");
  dword_10439428 = result;
  return result;
}
