_DWORD *sub_100B1A10()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 352);
  memset(v0, 0, 0x160u);
  if ( v0 )
    return sub_100B1850(v0, (int)"CHudHistoryResource");
  else
    return 0;
}
