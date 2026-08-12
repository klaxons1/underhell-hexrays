int sub_101B5C80()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 372);
  memset(v0, 0, 0x174u);
  if ( v0 )
    return sub_101B5960((int)v0, (int)"CHudSuitPower");
  else
    return 0;
}
