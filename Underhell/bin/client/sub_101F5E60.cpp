int sub_101F5E60()
{
  int result; // eax

  if ( (dword_1046560C & 1) != 0 )
    return dword_10465608;
  dword_1046560C |= 1u;
  result = sub_10242580("CPotteryWheelPanel");
  dword_10465608 = result;
  return result;
}
