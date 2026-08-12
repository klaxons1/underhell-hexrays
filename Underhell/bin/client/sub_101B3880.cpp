int sub_101B3880()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 6392);
  memset(v0, 0, 0x18F8u);
  if ( v0 )
    return sub_10187D70((int)v0, "CMapOverview");
  else
    return 0;
}
