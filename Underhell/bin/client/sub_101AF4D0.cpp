int sub_101AF4D0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 868);
  memset(v0, 0, 0x364u);
  if ( v0 )
    return sub_101AF0E0((int)v0, (int)"CHudCredits");
  else
    return 0;
}
