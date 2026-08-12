void sub_10001C20()
{
  int v0; // eax
  wchar_t *v1; // edx

  v0 = sub_100B4090("CAchievementNotificationPanel");
  if ( v0 )
  {
    v1 = (wchar_t *)L"Test Notification Message A (1/10)";
    if ( dword_10400D54 % 2 )
      v1 = L"Test Message B";
    sub_10001B80(v0, "HL2_KILL_ODESSAGUNSHIP", (wchar_t *)L"Achievement Progress", v1);
  }
  ++dword_10400D54;
}
