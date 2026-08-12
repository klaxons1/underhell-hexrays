int sub_10001770()
{
  int result; // eax

  if ( (dword_10400D48 & 1) != 0 )
    return dword_10400D44;
  dword_10400D48 |= 1u;
  result = sub_10242540("CAchievementNotificationPanel");
  dword_10400D44 = result;
  return result;
}
