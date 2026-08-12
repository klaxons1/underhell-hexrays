int sub_100C6BB0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 460);
  memset(v0, 0, 0x1CCu);
  if ( v0 )
    return sub_100C68E0((int)v0, (int)"CHudCloseCaption");
  else
    return 0;
}
