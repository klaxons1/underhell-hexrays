int sub_1012F660()
{
  int result; // eax

  if ( (dword_10439414 & 1) != 0 )
    return dword_10439410;
  dword_10439414 |= 1u;
  result = sub_10242580("CAvatarImagePanel");
  dword_10439410 = result;
  return result;
}
