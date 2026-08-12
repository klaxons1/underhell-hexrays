int sub_1012F6C0()
{
  int result; // eax

  if ( (dword_1043941C & 1) != 0 )
    return dword_10439418;
  dword_1043941C |= 1u;
  result = sub_10242540("Label");
  dword_10439418 = result;
  return result;
}
