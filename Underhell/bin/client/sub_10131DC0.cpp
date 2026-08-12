int sub_10131DC0()
{
  int result; // eax

  if ( (dword_10439608 & 1) != 0 )
    return dword_10439604;
  dword_10439608 |= 1u;
  result = sub_10242580("ImageButton");
  dword_10439604 = result;
  return result;
}
