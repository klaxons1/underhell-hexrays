int sub_101F5E20()
{
  int result; // eax

  if ( (dword_10465604 & 1) != 0 )
    return dword_10465600;
  dword_10465604 |= 1u;
  result = sub_10242540("CPotteryWheelPanel");
  dword_10465600 = result;
  return result;
}
