int sub_100017B0()
{
  int result; // eax

  if ( (dword_10400D50 & 1) != 0 )
    return dword_10400D4C;
  dword_10400D50 |= 1u;
  result = sub_10242580("CAchievementNotificationPanel");
  dword_10400D4C = result;
  return result;
}
