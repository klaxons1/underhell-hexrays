int sub_100CB780()
{
  int result; // eax

  if ( (dword_10430E34 & 1) != 0 )
    return dword_10430E30;
  dword_10430E34 |= 1u;
  result = sub_10242540("CHudStamina");
  dword_10430E30 = result;
  return result;
}
