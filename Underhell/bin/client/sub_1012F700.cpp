int sub_1012F700()
{
  int result; // eax

  if ( (dword_10439424 & 1) != 0 )
    return dword_10439420;
  dword_10439424 |= 1u;
  result = sub_10242580("Label");
  dword_10439420 = result;
  return result;
}
