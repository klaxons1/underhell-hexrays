int sub_100C7250()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 304);
  memset(v0, 0, 0x130u);
  if ( v0 )
    return sub_100C70B0((int)v0, (int)"CHudCrosshair");
  else
    return 0;
}
