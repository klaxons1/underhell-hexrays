int sub_101B1F70()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 436);
  memset(v0, 0, 0x1B4u);
  if ( v0 )
    return sub_101B1BA0((int)v0, (int)"CHudHealth");
  else
    return 0;
}
