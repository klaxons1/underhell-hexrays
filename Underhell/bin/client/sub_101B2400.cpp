int sub_101B2400()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 276);
  memset(v0, 0, 0x114u);
  if ( v0 )
    return sub_101B2020((int)v0, (int)"CHudLocator");
  else
    return 0;
}
