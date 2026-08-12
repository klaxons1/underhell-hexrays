void sub_102C6920()
{
  struct _SYSTEM_INFO SystemInfo; // [esp+0h] [ebp-24h] BYREF

  GetSystemInfo(&SystemInfo);
  dword_1044FA10 = SystemInfo.dwNumberOfProcessors;
}
