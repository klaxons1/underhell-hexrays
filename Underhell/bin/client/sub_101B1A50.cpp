int sub_101B1A50()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 324);
  memset(v0, 0, 0x144u);
  if ( v0 )
    return sub_101B18C0((int)v0, (int)"CHudFlashlight");
  else
    return 0;
}
