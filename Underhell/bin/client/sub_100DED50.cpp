int sub_100DED50()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 388);
  memset(v0, 0, 0x184u);
  if ( v0 )
    return sub_100DE440((int)v0, (int)"CHudMenu");
  else
    return 0;
}
