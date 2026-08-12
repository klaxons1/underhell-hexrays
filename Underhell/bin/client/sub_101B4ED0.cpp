int sub_101B4ED0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 332);
  memset(v0, 0, 0x14Cu);
  if ( v0 )
    return sub_101B4C90((int)v0, (int)"CHudSquadStatus");
  else
    return 0;
}
