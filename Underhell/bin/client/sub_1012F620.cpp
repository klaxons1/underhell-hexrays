int sub_1012F620()
{
  int result; // eax

  if ( (dword_1043940C & 1) != 0 )
    return dword_10439408;
  dword_1043940C |= 1u;
  result = sub_10242540("CAvatarImagePanel");
  dword_10439408 = result;
  return result;
}
