int sub_100B84B0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 284);
  memset(v0, 0, 0x11Cu);
  if ( v0 )
    return sub_100B8340((int)v0, (int)"CHUDAutoAim");
  else
    return 0;
}
