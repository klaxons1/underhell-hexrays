_DWORD *sub_10001840()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 348);
  memset(v0, 0, 0x15Cu);
  if ( v0 )
    return sub_10001540(v0, (int)"CAchievementNotificationPanel");
  else
    return 0;
}
