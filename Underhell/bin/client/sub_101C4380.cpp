DWORD sub_101C4380()
{
  struct _SYSTEM_INFO SystemInfo; // [esp+0h] [ebp-24h] BYREF

  GetSystemInfo(&SystemInfo);
  return SystemInfo.dwNumberOfProcessors;
}
