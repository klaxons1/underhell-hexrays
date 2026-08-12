int sub_10130510()
{
  int result; // eax

  if ( (dword_1043944C & 1) != 0 )
    return dword_10439448;
  dword_1043944C |= 1u;
  result = sub_10242580("CCenterStringLabel");
  dword_10439448 = result;
  return result;
}
