int sub_101304D0()
{
  int result; // eax

  if ( (dword_10439440 & 1) != 0 )
    return dword_1043943C;
  dword_10439440 |= 1u;
  result = sub_10242540("CCenterStringLabel");
  dword_1043943C = result;
  return result;
}
