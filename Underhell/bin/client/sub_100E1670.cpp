int sub_100E1670()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 17424);
  memset(v0, 0, 0x4410u);
  if ( v0 )
    return sub_100E0FC0((int)v0, (int)"CHudMessage");
  else
    return 0;
}
