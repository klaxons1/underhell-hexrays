int sub_100B81F0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 280);
  memset(v0, 0, 0x118u);
  if ( v0 )
    return sub_100B8060((int)v0, (int)"CHudAnimationInfo");
  else
    return 0;
}
