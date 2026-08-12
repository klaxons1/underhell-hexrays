int sub_101A6DD0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 264);
  memset(v0, 0, 0x108u);
  if ( v0 )
    return sub_101A6BF0((int)v0, (int)"CHudDeathNotice");
  else
    return 0;
}
